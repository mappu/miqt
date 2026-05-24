#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFrame>
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
#include <QRect>
#include <QRectF>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qwt_text_label.h>
#include "gen_qwt_text_label.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QwtTextLabel_setTextWithText(QwtTextLabel*, intptr_t, QwtText*);
QSize* miqt_exec_callback_QwtTextLabel_sizeHint(const QwtTextLabel*, intptr_t);
QSize* miqt_exec_callback_QwtTextLabel_minimumSizeHint(const QwtTextLabel*, intptr_t);
int miqt_exec_callback_QwtTextLabel_heightForWidth(const QwtTextLabel*, intptr_t, int);
void miqt_exec_callback_QwtTextLabel_drawText(QwtTextLabel*, intptr_t, QPainter*, QRectF*);
void miqt_exec_callback_QwtTextLabel_paintEvent(QwtTextLabel*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QwtTextLabel_drawContents(QwtTextLabel*, intptr_t, QPainter*);
bool miqt_exec_callback_QwtTextLabel_event(QwtTextLabel*, intptr_t, QEvent*);
void miqt_exec_callback_QwtTextLabel_changeEvent(QwtTextLabel*, intptr_t, QEvent*);
int miqt_exec_callback_QwtTextLabel_devType(const QwtTextLabel*, intptr_t);
void miqt_exec_callback_QwtTextLabel_setVisible(QwtTextLabel*, intptr_t, bool);
bool miqt_exec_callback_QwtTextLabel_hasHeightForWidth(const QwtTextLabel*, intptr_t);
QPaintEngine* miqt_exec_callback_QwtTextLabel_paintEngine(const QwtTextLabel*, intptr_t);
void miqt_exec_callback_QwtTextLabel_mousePressEvent(QwtTextLabel*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtTextLabel_mouseReleaseEvent(QwtTextLabel*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtTextLabel_mouseDoubleClickEvent(QwtTextLabel*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtTextLabel_mouseMoveEvent(QwtTextLabel*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtTextLabel_wheelEvent(QwtTextLabel*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QwtTextLabel_keyPressEvent(QwtTextLabel*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtTextLabel_keyReleaseEvent(QwtTextLabel*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtTextLabel_focusInEvent(QwtTextLabel*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QwtTextLabel_focusOutEvent(QwtTextLabel*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QwtTextLabel_enterEvent(QwtTextLabel*, intptr_t, QEvent*);
void miqt_exec_callback_QwtTextLabel_leaveEvent(QwtTextLabel*, intptr_t, QEvent*);
void miqt_exec_callback_QwtTextLabel_moveEvent(QwtTextLabel*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QwtTextLabel_resizeEvent(QwtTextLabel*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QwtTextLabel_closeEvent(QwtTextLabel*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QwtTextLabel_contextMenuEvent(QwtTextLabel*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QwtTextLabel_tabletEvent(QwtTextLabel*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QwtTextLabel_actionEvent(QwtTextLabel*, intptr_t, QActionEvent*);
void miqt_exec_callback_QwtTextLabel_dragEnterEvent(QwtTextLabel*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QwtTextLabel_dragMoveEvent(QwtTextLabel*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QwtTextLabel_dragLeaveEvent(QwtTextLabel*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QwtTextLabel_dropEvent(QwtTextLabel*, intptr_t, QDropEvent*);
void miqt_exec_callback_QwtTextLabel_showEvent(QwtTextLabel*, intptr_t, QShowEvent*);
void miqt_exec_callback_QwtTextLabel_hideEvent(QwtTextLabel*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QwtTextLabel_nativeEvent(QwtTextLabel*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QwtTextLabel_metric(const QwtTextLabel*, intptr_t, int);
void miqt_exec_callback_QwtTextLabel_initPainter(const QwtTextLabel*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QwtTextLabel_redirected(const QwtTextLabel*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QwtTextLabel_sharedPainter(const QwtTextLabel*, intptr_t);
void miqt_exec_callback_QwtTextLabel_inputMethodEvent(QwtTextLabel*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QwtTextLabel_inputMethodQuery(const QwtTextLabel*, intptr_t, int);
bool miqt_exec_callback_QwtTextLabel_focusNextPrevChild(QwtTextLabel*, intptr_t, bool);
bool miqt_exec_callback_QwtTextLabel_eventFilter(QwtTextLabel*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QwtTextLabel_timerEvent(QwtTextLabel*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QwtTextLabel_childEvent(QwtTextLabel*, intptr_t, QChildEvent*);
void miqt_exec_callback_QwtTextLabel_customEvent(QwtTextLabel*, intptr_t, QEvent*);
void miqt_exec_callback_QwtTextLabel_connectNotify(QwtTextLabel*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QwtTextLabel_disconnectNotify(QwtTextLabel*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtTextLabel final : public QwtTextLabel {
public:

	MiqtVirtualQwtTextLabel(QWidget* parent): QwtTextLabel(parent) {}
	MiqtVirtualQwtTextLabel(): QwtTextLabel() {}
	MiqtVirtualQwtTextLabel(const QwtText& param1): QwtTextLabel(param1) {}
	MiqtVirtualQwtTextLabel(const QwtText& param1, QWidget* parent): QwtTextLabel(param1, parent) {}

	virtual ~MiqtVirtualQwtTextLabel() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setTextWithText = 0;

	// Subclass to allow providing a Go implementation
	virtual void setText(const QwtText& text) override {
		if (handle__setTextWithText == 0) {
			QwtTextLabel::setText(text);
			return;
		}

		const QwtText& text_ret = text;
		// Cast returned reference into pointer
		QwtText* sigval1 = const_cast<QwtText*>(&text_ret);
		miqt_exec_callback_QwtTextLabel_setTextWithText(this, handle__setTextWithText, sigval1);

	}

	friend void QwtTextLabel_virtualbase_setTextWithText(void* self, QwtText* text);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QwtTextLabel::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtTextLabel_sizeHint(this, handle__sizeHint);
		return *callback_return_value;
	}

	friend QSize* QwtTextLabel_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QwtTextLabel::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtTextLabel_minimumSizeHint(this, handle__minimumSizeHint);
		return *callback_return_value;
	}

	friend QSize* QwtTextLabel_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QwtTextLabel::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QwtTextLabel_heightForWidth(this, handle__heightForWidth, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtTextLabel_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawText = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawText(QPainter* param1, const QRectF& param2) override {
		if (handle__drawText == 0) {
			QwtTextLabel::drawText(param1, param2);
			return;
		}

		QPainter* sigval1 = param1;
		const QRectF& param2_ret = param2;
		// Cast returned reference into pointer
		QRectF* sigval2 = const_cast<QRectF*>(&param2_ret);
		miqt_exec_callback_QwtTextLabel_drawText(this, handle__drawText, sigval1, sigval2);

	}

	friend void QwtTextLabel_virtualbase_drawText(void* self, QPainter* param1, QRectF* param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__paintEvent == 0) {
			QwtTextLabel::paintEvent(param1);
			return;
		}

		QPaintEvent* sigval1 = param1;
		miqt_exec_callback_QwtTextLabel_paintEvent(this, handle__paintEvent, sigval1);

	}

	friend void QwtTextLabel_virtualbase_paintEvent(void* self, QPaintEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawContents = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawContents(QPainter* param1) override {
		if (handle__drawContents == 0) {
			QwtTextLabel::drawContents(param1);
			return;
		}

		QPainter* sigval1 = param1;
		miqt_exec_callback_QwtTextLabel_drawContents(this, handle__drawContents, sigval1);

	}

	friend void QwtTextLabel_virtualbase_drawContents(void* self, QPainter* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__event == 0) {
			return QwtTextLabel::event(e);
		}

		QEvent* sigval1 = e;
		bool callback_return_value = miqt_exec_callback_QwtTextLabel_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QwtTextLabel_virtualbase_event(void* self, QEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QwtTextLabel::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QwtTextLabel_changeEvent(this, handle__changeEvent, sigval1);

	}

	friend void QwtTextLabel_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QwtTextLabel::devType();
		}

		int callback_return_value = miqt_exec_callback_QwtTextLabel_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtTextLabel_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QwtTextLabel::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QwtTextLabel_setVisible(this, handle__setVisible, sigval1);

	}

	friend void QwtTextLabel_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QwtTextLabel::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QwtTextLabel_hasHeightForWidth(this, handle__hasHeightForWidth);
		return callback_return_value;
	}

	friend bool QwtTextLabel_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QwtTextLabel::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QwtTextLabel_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* QwtTextLabel_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QwtTextLabel::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_mousePressEvent(this, handle__mousePressEvent, sigval1);

	}

	friend void QwtTextLabel_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QwtTextLabel::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

	}

	friend void QwtTextLabel_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QwtTextLabel::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

	}

	friend void QwtTextLabel_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QwtTextLabel::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

	}

	friend void QwtTextLabel_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QwtTextLabel::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_wheelEvent(this, handle__wheelEvent, sigval1);

	}

	friend void QwtTextLabel_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QwtTextLabel::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_keyPressEvent(this, handle__keyPressEvent, sigval1);

	}

	friend void QwtTextLabel_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QwtTextLabel::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

	}

	friend void QwtTextLabel_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QwtTextLabel::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_focusInEvent(this, handle__focusInEvent, sigval1);

	}

	friend void QwtTextLabel_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QwtTextLabel::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_focusOutEvent(this, handle__focusOutEvent, sigval1);

	}

	friend void QwtTextLabel_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QwtTextLabel::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_enterEvent(this, handle__enterEvent, sigval1);

	}

	friend void QwtTextLabel_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QwtTextLabel::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_leaveEvent(this, handle__leaveEvent, sigval1);

	}

	friend void QwtTextLabel_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QwtTextLabel::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_moveEvent(this, handle__moveEvent, sigval1);

	}

	friend void QwtTextLabel_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QwtTextLabel::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_resizeEvent(this, handle__resizeEvent, sigval1);

	}

	friend void QwtTextLabel_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QwtTextLabel::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_closeEvent(this, handle__closeEvent, sigval1);

	}

	friend void QwtTextLabel_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QwtTextLabel::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

	}

	friend void QwtTextLabel_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QwtTextLabel::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_tabletEvent(this, handle__tabletEvent, sigval1);

	}

	friend void QwtTextLabel_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QwtTextLabel::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_actionEvent(this, handle__actionEvent, sigval1);

	}

	friend void QwtTextLabel_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QwtTextLabel::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

	}

	friend void QwtTextLabel_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QwtTextLabel::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

	}

	friend void QwtTextLabel_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QwtTextLabel::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

	}

	friend void QwtTextLabel_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QwtTextLabel::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_dropEvent(this, handle__dropEvent, sigval1);

	}

	friend void QwtTextLabel_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QwtTextLabel::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_showEvent(this, handle__showEvent, sigval1);

	}

	friend void QwtTextLabel_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QwtTextLabel::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_hideEvent(this, handle__hideEvent, sigval1);

	}

	friend void QwtTextLabel_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QwtTextLabel::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QwtTextLabel_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QwtTextLabel_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QwtTextLabel::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QwtTextLabel_metric(this, handle__metric, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtTextLabel_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QwtTextLabel::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QwtTextLabel_initPainter(this, handle__initPainter, sigval1);

	}

	friend void QwtTextLabel_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QwtTextLabel::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QwtTextLabel_redirected(this, handle__redirected, sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QwtTextLabel_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QwtTextLabel::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QwtTextLabel_sharedPainter(this, handle__sharedPainter);
		return callback_return_value;
	}

	friend QPainter* QwtTextLabel_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QwtTextLabel::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QwtTextLabel_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

	}

	friend void QwtTextLabel_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QwtTextLabel::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QwtTextLabel_inputMethodQuery(this, handle__inputMethodQuery, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QwtTextLabel_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QwtTextLabel::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QwtTextLabel_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);
		return callback_return_value;
	}

	friend bool QwtTextLabel_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QwtTextLabel::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QwtTextLabel_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QwtTextLabel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QwtTextLabel::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QwtTextLabel_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QwtTextLabel::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QwtTextLabel_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QwtTextLabel::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QwtTextLabel_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QwtTextLabel::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtTextLabel_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QwtTextLabel_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QwtTextLabel::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtTextLabel_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QwtTextLabel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QwtTextLabel_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
	friend void QwtTextLabel_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option);
	friend void QwtTextLabel_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QwtTextLabel_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QwtTextLabel_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QwtTextLabel_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QwtTextLabel_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QwtTextLabel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QwtTextLabel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QwtTextLabel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QwtTextLabel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QwtTextLabel* QwtTextLabel_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQwtTextLabel(parent);
}

QwtTextLabel* QwtTextLabel_new2() {
	return new (std::nothrow) MiqtVirtualQwtTextLabel();
}

QwtTextLabel* QwtTextLabel_new3(QwtText* param1) {
	return new (std::nothrow) MiqtVirtualQwtTextLabel(*param1);
}

QwtTextLabel* QwtTextLabel_new4(QwtText* param1, QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQwtTextLabel(*param1, parent);
}

void QwtTextLabel_virtbase(QwtTextLabel* src, QFrame** outptr_QFrame) {
	*outptr_QFrame = static_cast<QFrame*>(src);
}

QMetaObject* QwtTextLabel_metaObject(const QwtTextLabel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QwtTextLabel_metacast(QwtTextLabel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QwtTextLabel_tr(const char* s) {
	QString _ret = QwtTextLabel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtTextLabel_trUtf8(const char* s) {
	QString _ret = QwtTextLabel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QwtTextLabel_setPlainText(QwtTextLabel* self, struct miqt_string plainText) {
	QString plainText_QString = QString::fromUtf8(plainText.data, plainText.len);
	self->setPlainText(plainText_QString);
}

struct miqt_string QwtTextLabel_plainText(const QwtTextLabel* self) {
	QString _ret = self->plainText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QwtTextLabel_setText(QwtTextLabel* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->setText(param1_QString);
}

void QwtTextLabel_setTextWithText(QwtTextLabel* self, QwtText* text) {
	self->setText(*text);
}

void QwtTextLabel_clear(QwtTextLabel* self) {
	self->clear();
}

QwtText* QwtTextLabel_text(const QwtTextLabel* self) {
	const QwtText& _ret = self->text();
	// Cast returned reference into pointer
	return const_cast<QwtText*>(&_ret);
}

int QwtTextLabel_indent(const QwtTextLabel* self) {
	return self->indent();
}

void QwtTextLabel_setIndent(QwtTextLabel* self, int indent) {
	self->setIndent(static_cast<int>(indent));
}

int QwtTextLabel_margin(const QwtTextLabel* self) {
	return self->margin();
}

void QwtTextLabel_setMargin(QwtTextLabel* self, int margin) {
	self->setMargin(static_cast<int>(margin));
}

QSize* QwtTextLabel_sizeHint(const QwtTextLabel* self) {
	return new QSize(self->sizeHint());
}

QSize* QwtTextLabel_minimumSizeHint(const QwtTextLabel* self) {
	return new QSize(self->minimumSizeHint());
}

int QwtTextLabel_heightForWidth(const QwtTextLabel* self, int param1) {
	return self->heightForWidth(static_cast<int>(param1));
}

QRect* QwtTextLabel_textRect(const QwtTextLabel* self) {
	return new QRect(self->textRect());
}

void QwtTextLabel_drawText(QwtTextLabel* self, QPainter* param1, QRectF* param2) {
	self->drawText(param1, *param2);
}

struct miqt_string QwtTextLabel_tr2(const char* s, const char* c) {
	QString _ret = QwtTextLabel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtTextLabel_tr3(const char* s, const char* c, int n) {
	QString _ret = QwtTextLabel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtTextLabel_trUtf82(const char* s, const char* c) {
	QString _ret = QwtTextLabel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtTextLabel_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QwtTextLabel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QwtTextLabel_setText2(QwtTextLabel* self, struct miqt_string param1, int textFormat) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->setText(param1_QString, static_cast<QwtText::TextFormat>(textFormat));
}

bool QwtTextLabel_override_virtual_setTextWithText(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setTextWithText = slot;
	return true;
}

void QwtTextLabel_virtualbase_setTextWithText(void* self, QwtText* text) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::setText(*text);
}

bool QwtTextLabel_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QwtTextLabel_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::sizeHint());
}

bool QwtTextLabel_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QwtTextLabel_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::minimumSizeHint());
}

bool QwtTextLabel_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = slot;
	return true;
}

int QwtTextLabel_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::heightForWidth(static_cast<int>(param1));
}

bool QwtTextLabel_override_virtual_drawText(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawText = slot;
	return true;
}

void QwtTextLabel_virtualbase_drawText(void* self, QPainter* param1, QRectF* param2) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::drawText(param1, *param2);
}

bool QwtTextLabel_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = slot;
	return true;
}

void QwtTextLabel_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::paintEvent(param1);
}

bool QwtTextLabel_override_virtual_drawContents(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawContents = slot;
	return true;
}

void QwtTextLabel_virtualbase_drawContents(void* self, QPainter* param1) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::drawContents(param1);
}

bool QwtTextLabel_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QwtTextLabel_virtualbase_event(void* self, QEvent* e) {
	return static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::event(e);
}

bool QwtTextLabel_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = slot;
	return true;
}

void QwtTextLabel_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::changeEvent(param1);
}

bool QwtTextLabel_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int QwtTextLabel_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::devType();
}

bool QwtTextLabel_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = slot;
	return true;
}

void QwtTextLabel_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::setVisible(visible);
}

bool QwtTextLabel_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QwtTextLabel_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::hasHeightForWidth();
}

bool QwtTextLabel_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QwtTextLabel_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::paintEngine();
}

bool QwtTextLabel_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QwtTextLabel_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::mousePressEvent(event);
}

bool QwtTextLabel_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QwtTextLabel_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::mouseReleaseEvent(event);
}

bool QwtTextLabel_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QwtTextLabel_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::mouseDoubleClickEvent(event);
}

bool QwtTextLabel_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QwtTextLabel_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::mouseMoveEvent(event);
}

bool QwtTextLabel_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = slot;
	return true;
}

void QwtTextLabel_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::wheelEvent(event);
}

bool QwtTextLabel_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QwtTextLabel_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::keyPressEvent(event);
}

bool QwtTextLabel_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QwtTextLabel_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::keyReleaseEvent(event);
}

bool QwtTextLabel_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = slot;
	return true;
}

void QwtTextLabel_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::focusInEvent(event);
}

bool QwtTextLabel_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QwtTextLabel_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::focusOutEvent(event);
}

bool QwtTextLabel_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = slot;
	return true;
}

void QwtTextLabel_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::enterEvent(event);
}

bool QwtTextLabel_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = slot;
	return true;
}

void QwtTextLabel_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::leaveEvent(event);
}

bool QwtTextLabel_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = slot;
	return true;
}

void QwtTextLabel_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::moveEvent(event);
}

bool QwtTextLabel_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = slot;
	return true;
}

void QwtTextLabel_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::resizeEvent(event);
}

bool QwtTextLabel_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = slot;
	return true;
}

void QwtTextLabel_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::closeEvent(event);
}

bool QwtTextLabel_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QwtTextLabel_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::contextMenuEvent(event);
}

bool QwtTextLabel_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = slot;
	return true;
}

void QwtTextLabel_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::tabletEvent(event);
}

bool QwtTextLabel_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = slot;
	return true;
}

void QwtTextLabel_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::actionEvent(event);
}

bool QwtTextLabel_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QwtTextLabel_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::dragEnterEvent(event);
}

bool QwtTextLabel_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QwtTextLabel_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::dragMoveEvent(event);
}

bool QwtTextLabel_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QwtTextLabel_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::dragLeaveEvent(event);
}

bool QwtTextLabel_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = slot;
	return true;
}

void QwtTextLabel_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::dropEvent(event);
}

bool QwtTextLabel_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = slot;
	return true;
}

void QwtTextLabel_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::showEvent(event);
}

bool QwtTextLabel_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = slot;
	return true;
}

void QwtTextLabel_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::hideEvent(event);
}

bool QwtTextLabel_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QwtTextLabel_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QwtTextLabel_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = slot;
	return true;
}

int QwtTextLabel_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::metric(static_cast<MiqtVirtualQwtTextLabel::PaintDeviceMetric>(param1));
}

bool QwtTextLabel_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = slot;
	return true;
}

void QwtTextLabel_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::initPainter(painter);
}

bool QwtTextLabel_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QwtTextLabel_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::redirected(offset);
}

bool QwtTextLabel_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QwtTextLabel_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::sharedPainter();
}

bool QwtTextLabel_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QwtTextLabel_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::inputMethodEvent(param1);
}

bool QwtTextLabel_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QwtTextLabel_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QwtTextLabel_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QwtTextLabel_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::focusNextPrevChild(next);
}

bool QwtTextLabel_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QwtTextLabel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::eventFilter(watched, event);
}

bool QwtTextLabel_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QwtTextLabel_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::timerEvent(event);
}

bool QwtTextLabel_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QwtTextLabel_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::childEvent(event);
}

bool QwtTextLabel_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QwtTextLabel_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::customEvent(event);
}

bool QwtTextLabel_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QwtTextLabel_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::connectNotify(*signal);
}

bool QwtTextLabel_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QwtTextLabel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::disconnectNotify(*signal);
}

void QwtTextLabel_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->drawFrame(param1);
}

void QwtTextLabel_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->initStyleOption(option);
}

void QwtTextLabel_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QwtTextLabel_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QwtTextLabel_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QwtTextLabel_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QwtTextLabel_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QwtTextLabel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QwtTextLabel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QwtTextLabel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QwtTextLabel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QwtTextLabel_delete(QwtTextLabel* self) {
	delete self;
}

