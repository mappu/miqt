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
#include <QPixmap>
#include <QPoint>
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
#include <qwt_legend_label.h>
#include "gen_qwt_legend_label.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QwtLegendLabel_clicked(intptr_t);
void miqt_exec_callback_QwtLegendLabel_pressed(intptr_t);
void miqt_exec_callback_QwtLegendLabel_released(intptr_t);
void miqt_exec_callback_QwtLegendLabel_checked(intptr_t, bool);
void miqt_exec_callback_QwtLegendLabel_setText(QwtLegendLabel*, intptr_t, QwtText*);
QSize* miqt_exec_callback_QwtLegendLabel_sizeHint(const QwtLegendLabel*, intptr_t);
void miqt_exec_callback_QwtLegendLabel_paintEvent(QwtLegendLabel*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QwtLegendLabel_mousePressEvent(QwtLegendLabel*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtLegendLabel_mouseReleaseEvent(QwtLegendLabel*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtLegendLabel_keyPressEvent(QwtLegendLabel*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtLegendLabel_keyReleaseEvent(QwtLegendLabel*, intptr_t, QKeyEvent*);
QSize* miqt_exec_callback_QwtLegendLabel_minimumSizeHint(const QwtLegendLabel*, intptr_t);
int miqt_exec_callback_QwtLegendLabel_heightForWidth(const QwtLegendLabel*, intptr_t, int);
void miqt_exec_callback_QwtLegendLabel_drawText(QwtLegendLabel*, intptr_t, QPainter*, QRectF*);
void miqt_exec_callback_QwtLegendLabel_drawContents(QwtLegendLabel*, intptr_t, QPainter*);
bool miqt_exec_callback_QwtLegendLabel_event(QwtLegendLabel*, intptr_t, QEvent*);
void miqt_exec_callback_QwtLegendLabel_changeEvent(QwtLegendLabel*, intptr_t, QEvent*);
int miqt_exec_callback_QwtLegendLabel_devType(const QwtLegendLabel*, intptr_t);
void miqt_exec_callback_QwtLegendLabel_setVisible(QwtLegendLabel*, intptr_t, bool);
bool miqt_exec_callback_QwtLegendLabel_hasHeightForWidth(const QwtLegendLabel*, intptr_t);
QPaintEngine* miqt_exec_callback_QwtLegendLabel_paintEngine(const QwtLegendLabel*, intptr_t);
void miqt_exec_callback_QwtLegendLabel_mouseDoubleClickEvent(QwtLegendLabel*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtLegendLabel_mouseMoveEvent(QwtLegendLabel*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtLegendLabel_wheelEvent(QwtLegendLabel*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QwtLegendLabel_focusInEvent(QwtLegendLabel*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QwtLegendLabel_focusOutEvent(QwtLegendLabel*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QwtLegendLabel_enterEvent(QwtLegendLabel*, intptr_t, QEvent*);
void miqt_exec_callback_QwtLegendLabel_leaveEvent(QwtLegendLabel*, intptr_t, QEvent*);
void miqt_exec_callback_QwtLegendLabel_moveEvent(QwtLegendLabel*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QwtLegendLabel_resizeEvent(QwtLegendLabel*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QwtLegendLabel_closeEvent(QwtLegendLabel*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QwtLegendLabel_contextMenuEvent(QwtLegendLabel*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QwtLegendLabel_tabletEvent(QwtLegendLabel*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QwtLegendLabel_actionEvent(QwtLegendLabel*, intptr_t, QActionEvent*);
void miqt_exec_callback_QwtLegendLabel_dragEnterEvent(QwtLegendLabel*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QwtLegendLabel_dragMoveEvent(QwtLegendLabel*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QwtLegendLabel_dragLeaveEvent(QwtLegendLabel*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QwtLegendLabel_dropEvent(QwtLegendLabel*, intptr_t, QDropEvent*);
void miqt_exec_callback_QwtLegendLabel_showEvent(QwtLegendLabel*, intptr_t, QShowEvent*);
void miqt_exec_callback_QwtLegendLabel_hideEvent(QwtLegendLabel*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QwtLegendLabel_nativeEvent(QwtLegendLabel*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QwtLegendLabel_metric(const QwtLegendLabel*, intptr_t, int);
void miqt_exec_callback_QwtLegendLabel_initPainter(const QwtLegendLabel*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QwtLegendLabel_redirected(const QwtLegendLabel*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QwtLegendLabel_sharedPainter(const QwtLegendLabel*, intptr_t);
void miqt_exec_callback_QwtLegendLabel_inputMethodEvent(QwtLegendLabel*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QwtLegendLabel_inputMethodQuery(const QwtLegendLabel*, intptr_t, int);
bool miqt_exec_callback_QwtLegendLabel_focusNextPrevChild(QwtLegendLabel*, intptr_t, bool);
bool miqt_exec_callback_QwtLegendLabel_eventFilter(QwtLegendLabel*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QwtLegendLabel_timerEvent(QwtLegendLabel*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QwtLegendLabel_childEvent(QwtLegendLabel*, intptr_t, QChildEvent*);
void miqt_exec_callback_QwtLegendLabel_customEvent(QwtLegendLabel*, intptr_t, QEvent*);
void miqt_exec_callback_QwtLegendLabel_connectNotify(QwtLegendLabel*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QwtLegendLabel_disconnectNotify(QwtLegendLabel*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtLegendLabel final : public QwtLegendLabel {
public:

	MiqtVirtualQwtLegendLabel(QWidget* parent): QwtLegendLabel(parent) {}
	MiqtVirtualQwtLegendLabel(): QwtLegendLabel() {}

	virtual ~MiqtVirtualQwtLegendLabel() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setText = 0;

	// Subclass to allow providing a Go implementation
	virtual void setText(const QwtText& text) override {
		if (handle__setText == 0) {
			QwtLegendLabel::setText(text);
			return;
		}

		const QwtText& text_ret = text;
		// Cast returned reference into pointer
		QwtText* sigval1 = const_cast<QwtText*>(&text_ret);
		miqt_exec_callback_QwtLegendLabel_setText(this, handle__setText, sigval1);

	}

	friend void QwtLegendLabel_virtualbase_setText(void* self, QwtText* text);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QwtLegendLabel::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtLegendLabel_sizeHint(this, handle__sizeHint);
		return *callback_return_value;
	}

	friend QSize* QwtLegendLabel_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__paintEvent == 0) {
			QwtLegendLabel::paintEvent(param1);
			return;
		}

		QPaintEvent* sigval1 = param1;
		miqt_exec_callback_QwtLegendLabel_paintEvent(this, handle__paintEvent, sigval1);

	}

	friend void QwtLegendLabel_virtualbase_paintEvent(void* self, QPaintEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (handle__mousePressEvent == 0) {
			QwtLegendLabel::mousePressEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtLegendLabel_mousePressEvent(this, handle__mousePressEvent, sigval1);

	}

	friend void QwtLegendLabel_virtualbase_mousePressEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (handle__mouseReleaseEvent == 0) {
			QwtLegendLabel::mouseReleaseEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtLegendLabel_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

	}

	friend void QwtLegendLabel_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__keyPressEvent == 0) {
			QwtLegendLabel::keyPressEvent(param1);
			return;
		}

		QKeyEvent* sigval1 = param1;
		miqt_exec_callback_QwtLegendLabel_keyPressEvent(this, handle__keyPressEvent, sigval1);

	}

	friend void QwtLegendLabel_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* param1) override {
		if (handle__keyReleaseEvent == 0) {
			QwtLegendLabel::keyReleaseEvent(param1);
			return;
		}

		QKeyEvent* sigval1 = param1;
		miqt_exec_callback_QwtLegendLabel_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

	}

	friend void QwtLegendLabel_virtualbase_keyReleaseEvent(void* self, QKeyEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QwtLegendLabel::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtLegendLabel_minimumSizeHint(this, handle__minimumSizeHint);
		return *callback_return_value;
	}

	friend QSize* QwtLegendLabel_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QwtLegendLabel::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QwtLegendLabel_heightForWidth(this, handle__heightForWidth, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtLegendLabel_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawText = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawText(QPainter* param1, const QRectF& param2) override {
		if (handle__drawText == 0) {
			QwtLegendLabel::drawText(param1, param2);
			return;
		}

		QPainter* sigval1 = param1;
		const QRectF& param2_ret = param2;
		// Cast returned reference into pointer
		QRectF* sigval2 = const_cast<QRectF*>(&param2_ret);
		miqt_exec_callback_QwtLegendLabel_drawText(this, handle__drawText, sigval1, sigval2);

	}

	friend void QwtLegendLabel_virtualbase_drawText(void* self, QPainter* param1, QRectF* param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawContents = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawContents(QPainter* param1) override {
		if (handle__drawContents == 0) {
			QwtLegendLabel::drawContents(param1);
			return;
		}

		QPainter* sigval1 = param1;
		miqt_exec_callback_QwtLegendLabel_drawContents(this, handle__drawContents, sigval1);

	}

	friend void QwtLegendLabel_virtualbase_drawContents(void* self, QPainter* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__event == 0) {
			return QwtLegendLabel::event(e);
		}

		QEvent* sigval1 = e;
		bool callback_return_value = miqt_exec_callback_QwtLegendLabel_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QwtLegendLabel_virtualbase_event(void* self, QEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QwtLegendLabel::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QwtLegendLabel_changeEvent(this, handle__changeEvent, sigval1);

	}

	friend void QwtLegendLabel_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QwtLegendLabel::devType();
		}

		int callback_return_value = miqt_exec_callback_QwtLegendLabel_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtLegendLabel_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QwtLegendLabel::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QwtLegendLabel_setVisible(this, handle__setVisible, sigval1);

	}

	friend void QwtLegendLabel_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QwtLegendLabel::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QwtLegendLabel_hasHeightForWidth(this, handle__hasHeightForWidth);
		return callback_return_value;
	}

	friend bool QwtLegendLabel_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QwtLegendLabel::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QwtLegendLabel_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* QwtLegendLabel_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QwtLegendLabel::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtLegendLabel_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

	}

	friend void QwtLegendLabel_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QwtLegendLabel::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtLegendLabel_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

	}

	friend void QwtLegendLabel_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QwtLegendLabel::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QwtLegendLabel_wheelEvent(this, handle__wheelEvent, sigval1);

	}

	friend void QwtLegendLabel_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QwtLegendLabel::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QwtLegendLabel_focusInEvent(this, handle__focusInEvent, sigval1);

	}

	friend void QwtLegendLabel_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QwtLegendLabel::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QwtLegendLabel_focusOutEvent(this, handle__focusOutEvent, sigval1);

	}

	friend void QwtLegendLabel_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QwtLegendLabel::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtLegendLabel_enterEvent(this, handle__enterEvent, sigval1);

	}

	friend void QwtLegendLabel_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QwtLegendLabel::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtLegendLabel_leaveEvent(this, handle__leaveEvent, sigval1);

	}

	friend void QwtLegendLabel_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QwtLegendLabel::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QwtLegendLabel_moveEvent(this, handle__moveEvent, sigval1);

	}

	friend void QwtLegendLabel_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QwtLegendLabel::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QwtLegendLabel_resizeEvent(this, handle__resizeEvent, sigval1);

	}

	friend void QwtLegendLabel_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QwtLegendLabel::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QwtLegendLabel_closeEvent(this, handle__closeEvent, sigval1);

	}

	friend void QwtLegendLabel_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QwtLegendLabel::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QwtLegendLabel_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

	}

	friend void QwtLegendLabel_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QwtLegendLabel::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QwtLegendLabel_tabletEvent(this, handle__tabletEvent, sigval1);

	}

	friend void QwtLegendLabel_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QwtLegendLabel::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QwtLegendLabel_actionEvent(this, handle__actionEvent, sigval1);

	}

	friend void QwtLegendLabel_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QwtLegendLabel::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QwtLegendLabel_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

	}

	friend void QwtLegendLabel_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QwtLegendLabel::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QwtLegendLabel_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

	}

	friend void QwtLegendLabel_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QwtLegendLabel::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QwtLegendLabel_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

	}

	friend void QwtLegendLabel_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QwtLegendLabel::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QwtLegendLabel_dropEvent(this, handle__dropEvent, sigval1);

	}

	friend void QwtLegendLabel_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QwtLegendLabel::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QwtLegendLabel_showEvent(this, handle__showEvent, sigval1);

	}

	friend void QwtLegendLabel_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QwtLegendLabel::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QwtLegendLabel_hideEvent(this, handle__hideEvent, sigval1);

	}

	friend void QwtLegendLabel_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QwtLegendLabel::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QwtLegendLabel_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QwtLegendLabel_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QwtLegendLabel::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QwtLegendLabel_metric(this, handle__metric, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtLegendLabel_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QwtLegendLabel::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QwtLegendLabel_initPainter(this, handle__initPainter, sigval1);

	}

	friend void QwtLegendLabel_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QwtLegendLabel::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QwtLegendLabel_redirected(this, handle__redirected, sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QwtLegendLabel_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QwtLegendLabel::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QwtLegendLabel_sharedPainter(this, handle__sharedPainter);
		return callback_return_value;
	}

	friend QPainter* QwtLegendLabel_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QwtLegendLabel::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QwtLegendLabel_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

	}

	friend void QwtLegendLabel_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QwtLegendLabel::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QwtLegendLabel_inputMethodQuery(this, handle__inputMethodQuery, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QwtLegendLabel_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QwtLegendLabel::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QwtLegendLabel_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);
		return callback_return_value;
	}

	friend bool QwtLegendLabel_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QwtLegendLabel::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QwtLegendLabel_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QwtLegendLabel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QwtLegendLabel::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QwtLegendLabel_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QwtLegendLabel_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QwtLegendLabel::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QwtLegendLabel_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QwtLegendLabel_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QwtLegendLabel::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtLegendLabel_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QwtLegendLabel_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QwtLegendLabel::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtLegendLabel_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QwtLegendLabel_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QwtLegendLabel::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtLegendLabel_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QwtLegendLabel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QwtLegendLabel_protectedbase_setDown(bool* _dynamic_cast_ok, void* self, bool down);
	friend bool QwtLegendLabel_protectedbase_isDown(bool* _dynamic_cast_ok, const void* self);
	friend void QwtLegendLabel_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
	friend void QwtLegendLabel_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option);
	friend void QwtLegendLabel_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QwtLegendLabel_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QwtLegendLabel_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QwtLegendLabel_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QwtLegendLabel_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QwtLegendLabel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QwtLegendLabel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QwtLegendLabel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QwtLegendLabel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QwtLegendLabel* QwtLegendLabel_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQwtLegendLabel(parent);
}

QwtLegendLabel* QwtLegendLabel_new2() {
	return new (std::nothrow) MiqtVirtualQwtLegendLabel();
}

void QwtLegendLabel_virtbase(QwtLegendLabel* src, QwtTextLabel** outptr_QwtTextLabel) {
	*outptr_QwtTextLabel = static_cast<QwtTextLabel*>(src);
}

QMetaObject* QwtLegendLabel_metaObject(const QwtLegendLabel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QwtLegendLabel_metacast(QwtLegendLabel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QwtLegendLabel_tr(const char* s) {
	QString _ret = QwtLegendLabel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtLegendLabel_trUtf8(const char* s) {
	QString _ret = QwtLegendLabel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QwtLegendLabel_setData(QwtLegendLabel* self, QwtLegendData* data) {
	self->setData(*data);
}

QwtLegendData* QwtLegendLabel_data(const QwtLegendLabel* self) {
	const QwtLegendData& _ret = self->data();
	// Cast returned reference into pointer
	return const_cast<QwtLegendData*>(&_ret);
}

void QwtLegendLabel_setItemMode(QwtLegendLabel* self, int itemMode) {
	self->setItemMode(static_cast<QwtLegendData::Mode>(itemMode));
}

int QwtLegendLabel_itemMode(const QwtLegendLabel* self) {
	QwtLegendData::Mode _ret = self->itemMode();
	return static_cast<int>(_ret);
}

void QwtLegendLabel_setSpacing(QwtLegendLabel* self, int spacing) {
	self->setSpacing(static_cast<int>(spacing));
}

int QwtLegendLabel_spacing(const QwtLegendLabel* self) {
	return self->spacing();
}

void QwtLegendLabel_setText(QwtLegendLabel* self, QwtText* text) {
	self->setText(*text);
}

void QwtLegendLabel_setIcon(QwtLegendLabel* self, QPixmap* icon) {
	self->setIcon(*icon);
}

QPixmap* QwtLegendLabel_icon(const QwtLegendLabel* self) {
	return new QPixmap(self->icon());
}

QSize* QwtLegendLabel_sizeHint(const QwtLegendLabel* self) {
	return new QSize(self->sizeHint());
}

bool QwtLegendLabel_isChecked(const QwtLegendLabel* self) {
	return self->isChecked();
}

void QwtLegendLabel_setChecked(QwtLegendLabel* self, bool on) {
	self->setChecked(on);
}

void QwtLegendLabel_clicked(QwtLegendLabel* self) {
	self->clicked();
}

void QwtLegendLabel_connect_clicked(QwtLegendLabel* self, intptr_t slot) {
	QwtLegendLabel::connect(self, static_cast<void (QwtLegendLabel::*)()>(&QwtLegendLabel::clicked), self, [=]() {
		miqt_exec_callback_QwtLegendLabel_clicked(slot);
	});
}

void QwtLegendLabel_pressed(QwtLegendLabel* self) {
	self->pressed();
}

void QwtLegendLabel_connect_pressed(QwtLegendLabel* self, intptr_t slot) {
	QwtLegendLabel::connect(self, static_cast<void (QwtLegendLabel::*)()>(&QwtLegendLabel::pressed), self, [=]() {
		miqt_exec_callback_QwtLegendLabel_pressed(slot);
	});
}

void QwtLegendLabel_released(QwtLegendLabel* self) {
	self->released();
}

void QwtLegendLabel_connect_released(QwtLegendLabel* self, intptr_t slot) {
	QwtLegendLabel::connect(self, static_cast<void (QwtLegendLabel::*)()>(&QwtLegendLabel::released), self, [=]() {
		miqt_exec_callback_QwtLegendLabel_released(slot);
	});
}

void QwtLegendLabel_checked(QwtLegendLabel* self, bool param1) {
	self->checked(param1);
}

void QwtLegendLabel_connect_checked(QwtLegendLabel* self, intptr_t slot) {
	QwtLegendLabel::connect(self, static_cast<void (QwtLegendLabel::*)(bool)>(&QwtLegendLabel::checked), self, [=](bool param1) {
		bool sigval1 = param1;
		miqt_exec_callback_QwtLegendLabel_checked(slot, sigval1);
	});
}

struct miqt_string QwtLegendLabel_tr2(const char* s, const char* c) {
	QString _ret = QwtLegendLabel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtLegendLabel_tr3(const char* s, const char* c, int n) {
	QString _ret = QwtLegendLabel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtLegendLabel_trUtf82(const char* s, const char* c) {
	QString _ret = QwtLegendLabel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtLegendLabel_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QwtLegendLabel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QwtLegendLabel_override_virtual_setText(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setText = slot;
	return true;
}

void QwtLegendLabel_virtualbase_setText(void* self, QwtText* text) {
	static_cast<MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::setText(*text);
}

bool QwtLegendLabel_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QwtLegendLabel_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::sizeHint());
}

bool QwtLegendLabel_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = slot;
	return true;
}

void QwtLegendLabel_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	static_cast<MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::paintEvent(param1);
}

bool QwtLegendLabel_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QwtLegendLabel_virtualbase_mousePressEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::mousePressEvent(param1);
}

bool QwtLegendLabel_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QwtLegendLabel_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::mouseReleaseEvent(param1);
}

bool QwtLegendLabel_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QwtLegendLabel_virtualbase_keyPressEvent(void* self, QKeyEvent* param1) {
	static_cast<MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::keyPressEvent(param1);
}

bool QwtLegendLabel_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QwtLegendLabel_virtualbase_keyReleaseEvent(void* self, QKeyEvent* param1) {
	static_cast<MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::keyReleaseEvent(param1);
}

bool QwtLegendLabel_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QwtLegendLabel_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::minimumSizeHint());
}

bool QwtLegendLabel_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = slot;
	return true;
}

int QwtLegendLabel_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::heightForWidth(static_cast<int>(param1));
}

bool QwtLegendLabel_override_virtual_drawText(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawText = slot;
	return true;
}

void QwtLegendLabel_virtualbase_drawText(void* self, QPainter* param1, QRectF* param2) {
	static_cast<MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::drawText(param1, *param2);
}

bool QwtLegendLabel_override_virtual_drawContents(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawContents = slot;
	return true;
}

void QwtLegendLabel_virtualbase_drawContents(void* self, QPainter* param1) {
	static_cast<MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::drawContents(param1);
}

bool QwtLegendLabel_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QwtLegendLabel_virtualbase_event(void* self, QEvent* e) {
	return static_cast<MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::event(e);
}

bool QwtLegendLabel_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = slot;
	return true;
}

void QwtLegendLabel_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::changeEvent(param1);
}

bool QwtLegendLabel_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int QwtLegendLabel_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::devType();
}

bool QwtLegendLabel_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = slot;
	return true;
}

void QwtLegendLabel_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::setVisible(visible);
}

bool QwtLegendLabel_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QwtLegendLabel_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::hasHeightForWidth();
}

bool QwtLegendLabel_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QwtLegendLabel_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::paintEngine();
}

bool QwtLegendLabel_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QwtLegendLabel_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::mouseDoubleClickEvent(event);
}

bool QwtLegendLabel_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QwtLegendLabel_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::mouseMoveEvent(event);
}

bool QwtLegendLabel_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = slot;
	return true;
}

void QwtLegendLabel_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::wheelEvent(event);
}

bool QwtLegendLabel_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = slot;
	return true;
}

void QwtLegendLabel_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::focusInEvent(event);
}

bool QwtLegendLabel_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QwtLegendLabel_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::focusOutEvent(event);
}

bool QwtLegendLabel_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = slot;
	return true;
}

void QwtLegendLabel_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::enterEvent(event);
}

bool QwtLegendLabel_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = slot;
	return true;
}

void QwtLegendLabel_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::leaveEvent(event);
}

bool QwtLegendLabel_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = slot;
	return true;
}

void QwtLegendLabel_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::moveEvent(event);
}

bool QwtLegendLabel_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = slot;
	return true;
}

void QwtLegendLabel_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::resizeEvent(event);
}

bool QwtLegendLabel_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = slot;
	return true;
}

void QwtLegendLabel_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::closeEvent(event);
}

bool QwtLegendLabel_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QwtLegendLabel_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::contextMenuEvent(event);
}

bool QwtLegendLabel_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = slot;
	return true;
}

void QwtLegendLabel_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::tabletEvent(event);
}

bool QwtLegendLabel_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = slot;
	return true;
}

void QwtLegendLabel_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::actionEvent(event);
}

bool QwtLegendLabel_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QwtLegendLabel_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::dragEnterEvent(event);
}

bool QwtLegendLabel_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QwtLegendLabel_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::dragMoveEvent(event);
}

bool QwtLegendLabel_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QwtLegendLabel_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::dragLeaveEvent(event);
}

bool QwtLegendLabel_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = slot;
	return true;
}

void QwtLegendLabel_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::dropEvent(event);
}

bool QwtLegendLabel_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = slot;
	return true;
}

void QwtLegendLabel_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::showEvent(event);
}

bool QwtLegendLabel_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = slot;
	return true;
}

void QwtLegendLabel_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::hideEvent(event);
}

bool QwtLegendLabel_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QwtLegendLabel_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QwtLegendLabel_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = slot;
	return true;
}

int QwtLegendLabel_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::metric(static_cast<MiqtVirtualQwtLegendLabel::PaintDeviceMetric>(param1));
}

bool QwtLegendLabel_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = slot;
	return true;
}

void QwtLegendLabel_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::initPainter(painter);
}

bool QwtLegendLabel_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QwtLegendLabel_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::redirected(offset);
}

bool QwtLegendLabel_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QwtLegendLabel_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::sharedPainter();
}

bool QwtLegendLabel_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QwtLegendLabel_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::inputMethodEvent(param1);
}

bool QwtLegendLabel_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QwtLegendLabel_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QwtLegendLabel_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QwtLegendLabel_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::focusNextPrevChild(next);
}

bool QwtLegendLabel_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QwtLegendLabel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::eventFilter(watched, event);
}

bool QwtLegendLabel_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QwtLegendLabel_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::timerEvent(event);
}

bool QwtLegendLabel_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QwtLegendLabel_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::childEvent(event);
}

bool QwtLegendLabel_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QwtLegendLabel_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::customEvent(event);
}

bool QwtLegendLabel_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QwtLegendLabel_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::connectNotify(*signal);
}

bool QwtLegendLabel_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QwtLegendLabel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtLegendLabel*>(self)->QwtLegendLabel::disconnectNotify(*signal);
}

void QwtLegendLabel_protectedbase_setDown(bool* _dynamic_cast_ok, void* self, bool down) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setDown(down);
}

bool QwtLegendLabel_protectedbase_isDown(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isDown();
}

void QwtLegendLabel_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->drawFrame(param1);
}

void QwtLegendLabel_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->initStyleOption(option);
}

void QwtLegendLabel_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QwtLegendLabel_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QwtLegendLabel_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QwtLegendLabel_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QwtLegendLabel_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QwtLegendLabel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QwtLegendLabel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QwtLegendLabel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QwtLegendLabel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQwtLegendLabel* self_cast = dynamic_cast<MiqtVirtualQwtLegendLabel*>( (QwtLegendLabel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QwtLegendLabel_delete(QwtLegendLabel* self) {
	delete self;
}

