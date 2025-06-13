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
#include <QGroupBox>
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
#include <QStyleOptionGroupBox>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qgroupbox.h>
#include "gen_qgroupbox.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QGroupBox_clicked(intptr_t);
void miqt_exec_callback_QGroupBox_toggled(intptr_t, bool);
void miqt_exec_callback_QGroupBox_clickedWithChecked(intptr_t, bool);
QSize* miqt_exec_callback_QGroupBox_minimumSizeHint(const QGroupBox*, intptr_t);
bool miqt_exec_callback_QGroupBox_event(QGroupBox*, intptr_t, QEvent*);
void miqt_exec_callback_QGroupBox_childEvent(QGroupBox*, intptr_t, QChildEvent*);
void miqt_exec_callback_QGroupBox_resizeEvent(QGroupBox*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QGroupBox_paintEvent(QGroupBox*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QGroupBox_focusInEvent(QGroupBox*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGroupBox_changeEvent(QGroupBox*, intptr_t, QEvent*);
void miqt_exec_callback_QGroupBox_mousePressEvent(QGroupBox*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QGroupBox_mouseMoveEvent(QGroupBox*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QGroupBox_mouseReleaseEvent(QGroupBox*, intptr_t, QMouseEvent*);
int miqt_exec_callback_QGroupBox_devType(const QGroupBox*, intptr_t);
void miqt_exec_callback_QGroupBox_setVisible(QGroupBox*, intptr_t, bool);
QSize* miqt_exec_callback_QGroupBox_sizeHint(const QGroupBox*, intptr_t);
int miqt_exec_callback_QGroupBox_heightForWidth(const QGroupBox*, intptr_t, int);
bool miqt_exec_callback_QGroupBox_hasHeightForWidth(const QGroupBox*, intptr_t);
QPaintEngine* miqt_exec_callback_QGroupBox_paintEngine(const QGroupBox*, intptr_t);
void miqt_exec_callback_QGroupBox_mouseDoubleClickEvent(QGroupBox*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QGroupBox_wheelEvent(QGroupBox*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QGroupBox_keyPressEvent(QGroupBox*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGroupBox_keyReleaseEvent(QGroupBox*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGroupBox_focusOutEvent(QGroupBox*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGroupBox_enterEvent(QGroupBox*, intptr_t, QEvent*);
void miqt_exec_callback_QGroupBox_leaveEvent(QGroupBox*, intptr_t, QEvent*);
void miqt_exec_callback_QGroupBox_moveEvent(QGroupBox*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QGroupBox_closeEvent(QGroupBox*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QGroupBox_contextMenuEvent(QGroupBox*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QGroupBox_tabletEvent(QGroupBox*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QGroupBox_actionEvent(QGroupBox*, intptr_t, QActionEvent*);
void miqt_exec_callback_QGroupBox_dragEnterEvent(QGroupBox*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QGroupBox_dragMoveEvent(QGroupBox*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QGroupBox_dragLeaveEvent(QGroupBox*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QGroupBox_dropEvent(QGroupBox*, intptr_t, QDropEvent*);
void miqt_exec_callback_QGroupBox_showEvent(QGroupBox*, intptr_t, QShowEvent*);
void miqt_exec_callback_QGroupBox_hideEvent(QGroupBox*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QGroupBox_nativeEvent(QGroupBox*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QGroupBox_metric(const QGroupBox*, intptr_t, int);
void miqt_exec_callback_QGroupBox_initPainter(const QGroupBox*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QGroupBox_redirected(const QGroupBox*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QGroupBox_sharedPainter(const QGroupBox*, intptr_t);
void miqt_exec_callback_QGroupBox_inputMethodEvent(QGroupBox*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QGroupBox_inputMethodQuery(const QGroupBox*, intptr_t, int);
bool miqt_exec_callback_QGroupBox_focusNextPrevChild(QGroupBox*, intptr_t, bool);
bool miqt_exec_callback_QGroupBox_eventFilter(QGroupBox*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QGroupBox_timerEvent(QGroupBox*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QGroupBox_customEvent(QGroupBox*, intptr_t, QEvent*);
void miqt_exec_callback_QGroupBox_connectNotify(QGroupBox*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGroupBox_disconnectNotify(QGroupBox*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQGroupBox final : public QGroupBox {
public:

	MiqtVirtualQGroupBox(QWidget* parent): QGroupBox(parent) {}
	MiqtVirtualQGroupBox(): QGroupBox() {}
	MiqtVirtualQGroupBox(const QString& title): QGroupBox(title) {}
	MiqtVirtualQGroupBox(const QString& title, QWidget* parent): QGroupBox(title, parent) {}

	virtual ~MiqtVirtualQGroupBox() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QGroupBox::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QGroupBox_minimumSizeHint(this, handle__minimumSizeHint);
		return *callback_return_value;
	}

	friend QSize* QGroupBox_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QGroupBox::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QGroupBox_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QGroupBox_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QGroupBox::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QGroupBox_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QGroupBox_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QGroupBox::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QGroupBox_resizeEvent(this, handle__resizeEvent, sigval1);

	}

	friend void QGroupBox_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QGroupBox::paintEvent(event);
			return;
		}

		QPaintEvent* sigval1 = event;
		miqt_exec_callback_QGroupBox_paintEvent(this, handle__paintEvent, sigval1);

	}

	friend void QGroupBox_virtualbase_paintEvent(void* self, QPaintEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QGroupBox::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QGroupBox_focusInEvent(this, handle__focusInEvent, sigval1);

	}

	friend void QGroupBox_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* event) override {
		if (handle__changeEvent == 0) {
			QGroupBox::changeEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QGroupBox_changeEvent(this, handle__changeEvent, sigval1);

	}

	friend void QGroupBox_virtualbase_changeEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QGroupBox::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QGroupBox_mousePressEvent(this, handle__mousePressEvent, sigval1);

	}

	friend void QGroupBox_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QGroupBox::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QGroupBox_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

	}

	friend void QGroupBox_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QGroupBox::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QGroupBox_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

	}

	friend void QGroupBox_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QGroupBox::devType();
		}

		int callback_return_value = miqt_exec_callback_QGroupBox_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int QGroupBox_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QGroupBox::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QGroupBox_setVisible(this, handle__setVisible, sigval1);

	}

	friend void QGroupBox_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QGroupBox::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QGroupBox_sizeHint(this, handle__sizeHint);
		return *callback_return_value;
	}

	friend QSize* QGroupBox_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QGroupBox::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QGroupBox_heightForWidth(this, handle__heightForWidth, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QGroupBox_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QGroupBox::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QGroupBox_hasHeightForWidth(this, handle__hasHeightForWidth);
		return callback_return_value;
	}

	friend bool QGroupBox_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QGroupBox::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QGroupBox_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* QGroupBox_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QGroupBox::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QGroupBox_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

	}

	friend void QGroupBox_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QGroupBox::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QGroupBox_wheelEvent(this, handle__wheelEvent, sigval1);

	}

	friend void QGroupBox_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QGroupBox::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QGroupBox_keyPressEvent(this, handle__keyPressEvent, sigval1);

	}

	friend void QGroupBox_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QGroupBox::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QGroupBox_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

	}

	friend void QGroupBox_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QGroupBox::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QGroupBox_focusOutEvent(this, handle__focusOutEvent, sigval1);

	}

	friend void QGroupBox_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QGroupBox::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QGroupBox_enterEvent(this, handle__enterEvent, sigval1);

	}

	friend void QGroupBox_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QGroupBox::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QGroupBox_leaveEvent(this, handle__leaveEvent, sigval1);

	}

	friend void QGroupBox_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QGroupBox::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QGroupBox_moveEvent(this, handle__moveEvent, sigval1);

	}

	friend void QGroupBox_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QGroupBox::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QGroupBox_closeEvent(this, handle__closeEvent, sigval1);

	}

	friend void QGroupBox_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QGroupBox::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QGroupBox_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

	}

	friend void QGroupBox_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QGroupBox::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QGroupBox_tabletEvent(this, handle__tabletEvent, sigval1);

	}

	friend void QGroupBox_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QGroupBox::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QGroupBox_actionEvent(this, handle__actionEvent, sigval1);

	}

	friend void QGroupBox_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QGroupBox::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QGroupBox_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

	}

	friend void QGroupBox_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QGroupBox::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QGroupBox_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

	}

	friend void QGroupBox_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QGroupBox::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QGroupBox_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

	}

	friend void QGroupBox_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QGroupBox::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QGroupBox_dropEvent(this, handle__dropEvent, sigval1);

	}

	friend void QGroupBox_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QGroupBox::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QGroupBox_showEvent(this, handle__showEvent, sigval1);

	}

	friend void QGroupBox_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QGroupBox::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QGroupBox_hideEvent(this, handle__hideEvent, sigval1);

	}

	friend void QGroupBox_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QGroupBox::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QGroupBox_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QGroupBox_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QGroupBox::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QGroupBox_metric(this, handle__metric, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QGroupBox_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QGroupBox::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QGroupBox_initPainter(this, handle__initPainter, sigval1);

	}

	friend void QGroupBox_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QGroupBox::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QGroupBox_redirected(this, handle__redirected, sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QGroupBox_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QGroupBox::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QGroupBox_sharedPainter(this, handle__sharedPainter);
		return callback_return_value;
	}

	friend QPainter* QGroupBox_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QGroupBox::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QGroupBox_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

	}

	friend void QGroupBox_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QGroupBox::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QGroupBox_inputMethodQuery(this, handle__inputMethodQuery, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QGroupBox_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QGroupBox::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QGroupBox_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);
		return callback_return_value;
	}

	friend bool QGroupBox_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QGroupBox::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QGroupBox_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QGroupBox_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QGroupBox::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QGroupBox_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QGroupBox_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QGroupBox::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QGroupBox_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QGroupBox_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QGroupBox::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QGroupBox_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QGroupBox_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QGroupBox::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QGroupBox_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QGroupBox_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QGroupBox_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionGroupBox* option);
	friend void QGroupBox_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QGroupBox_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QGroupBox_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QGroupBox_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QGroupBox_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QGroupBox_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QGroupBox_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QGroupBox_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QGroupBox_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QGroupBox* QGroupBox_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQGroupBox(parent);
}

QGroupBox* QGroupBox_new2() {
	return new (std::nothrow) MiqtVirtualQGroupBox();
}

QGroupBox* QGroupBox_new3(struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return new (std::nothrow) MiqtVirtualQGroupBox(title_QString);
}

QGroupBox* QGroupBox_new4(struct miqt_string title, QWidget* parent) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return new (std::nothrow) MiqtVirtualQGroupBox(title_QString, parent);
}

void QGroupBox_virtbase(QGroupBox* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QGroupBox_metaObject(const QGroupBox* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGroupBox_metacast(QGroupBox* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGroupBox_tr(const char* s) {
	QString _ret = QGroupBox::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGroupBox_trUtf8(const char* s) {
	QString _ret = QGroupBox::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGroupBox_title(const QGroupBox* self) {
	QString _ret = self->title();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGroupBox_setTitle(QGroupBox* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	self->setTitle(title_QString);
}

int QGroupBox_alignment(const QGroupBox* self) {
	Qt::Alignment _ret = self->alignment();
	return static_cast<int>(_ret);
}

void QGroupBox_setAlignment(QGroupBox* self, int alignment) {
	self->setAlignment(static_cast<int>(alignment));
}

QSize* QGroupBox_minimumSizeHint(const QGroupBox* self) {
	return new QSize(self->minimumSizeHint());
}

bool QGroupBox_isFlat(const QGroupBox* self) {
	return self->isFlat();
}

void QGroupBox_setFlat(QGroupBox* self, bool flat) {
	self->setFlat(flat);
}

bool QGroupBox_isCheckable(const QGroupBox* self) {
	return self->isCheckable();
}

void QGroupBox_setCheckable(QGroupBox* self, bool checkable) {
	self->setCheckable(checkable);
}

bool QGroupBox_isChecked(const QGroupBox* self) {
	return self->isChecked();
}

void QGroupBox_setChecked(QGroupBox* self, bool checked) {
	self->setChecked(checked);
}

void QGroupBox_clicked(QGroupBox* self) {
	self->clicked();
}

void QGroupBox_connect_clicked(QGroupBox* self, intptr_t slot) {
	QGroupBox::connect(self, static_cast<void (QGroupBox::*)(bool)>(&QGroupBox::clicked), self, [=]() {
		miqt_exec_callback_QGroupBox_clicked(slot);
	});
}

void QGroupBox_toggled(QGroupBox* self, bool param1) {
	self->toggled(param1);
}

void QGroupBox_connect_toggled(QGroupBox* self, intptr_t slot) {
	QGroupBox::connect(self, static_cast<void (QGroupBox::*)(bool)>(&QGroupBox::toggled), self, [=](bool param1) {
		bool sigval1 = param1;
		miqt_exec_callback_QGroupBox_toggled(slot, sigval1);
	});
}

struct miqt_string QGroupBox_tr2(const char* s, const char* c) {
	QString _ret = QGroupBox::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGroupBox_tr3(const char* s, const char* c, int n) {
	QString _ret = QGroupBox::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGroupBox_trUtf82(const char* s, const char* c) {
	QString _ret = QGroupBox::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGroupBox_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QGroupBox::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGroupBox_clickedWithChecked(QGroupBox* self, bool checked) {
	self->clicked(checked);
}

void QGroupBox_connect_clickedWithChecked(QGroupBox* self, intptr_t slot) {
	QGroupBox::connect(self, static_cast<void (QGroupBox::*)(bool)>(&QGroupBox::clicked), self, [=](bool checked) {
		bool sigval1 = checked;
		miqt_exec_callback_QGroupBox_clickedWithChecked(slot, sigval1);
	});
}

bool QGroupBox_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QGroupBox_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQGroupBox*>(self)->QGroupBox::minimumSizeHint());
}

bool QGroupBox_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QGroupBox_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQGroupBox*>(self)->QGroupBox::event(event);
}

bool QGroupBox_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QGroupBox_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQGroupBox*>(self)->QGroupBox::childEvent(event);
}

bool QGroupBox_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = slot;
	return true;
}

void QGroupBox_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQGroupBox*>(self)->QGroupBox::resizeEvent(event);
}

bool QGroupBox_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = slot;
	return true;
}

void QGroupBox_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	static_cast<MiqtVirtualQGroupBox*>(self)->QGroupBox::paintEvent(event);
}

bool QGroupBox_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = slot;
	return true;
}

void QGroupBox_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQGroupBox*>(self)->QGroupBox::focusInEvent(event);
}

bool QGroupBox_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = slot;
	return true;
}

void QGroupBox_virtualbase_changeEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQGroupBox*>(self)->QGroupBox::changeEvent(event);
}

bool QGroupBox_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QGroupBox_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQGroupBox*>(self)->QGroupBox::mousePressEvent(event);
}

bool QGroupBox_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QGroupBox_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQGroupBox*>(self)->QGroupBox::mouseMoveEvent(event);
}

bool QGroupBox_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QGroupBox_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQGroupBox*>(self)->QGroupBox::mouseReleaseEvent(event);
}

bool QGroupBox_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int QGroupBox_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQGroupBox*>(self)->QGroupBox::devType();
}

bool QGroupBox_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = slot;
	return true;
}

void QGroupBox_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQGroupBox*>(self)->QGroupBox::setVisible(visible);
}

bool QGroupBox_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QGroupBox_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQGroupBox*>(self)->QGroupBox::sizeHint());
}

bool QGroupBox_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = slot;
	return true;
}

int QGroupBox_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQGroupBox*>(self)->QGroupBox::heightForWidth(static_cast<int>(param1));
}

bool QGroupBox_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QGroupBox_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQGroupBox*>(self)->QGroupBox::hasHeightForWidth();
}

bool QGroupBox_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QGroupBox_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQGroupBox*>(self)->QGroupBox::paintEngine();
}

bool QGroupBox_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QGroupBox_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQGroupBox*>(self)->QGroupBox::mouseDoubleClickEvent(event);
}

bool QGroupBox_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = slot;
	return true;
}

void QGroupBox_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQGroupBox*>(self)->QGroupBox::wheelEvent(event);
}

bool QGroupBox_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QGroupBox_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQGroupBox*>(self)->QGroupBox::keyPressEvent(event);
}

bool QGroupBox_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QGroupBox_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQGroupBox*>(self)->QGroupBox::keyReleaseEvent(event);
}

bool QGroupBox_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QGroupBox_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQGroupBox*>(self)->QGroupBox::focusOutEvent(event);
}

bool QGroupBox_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = slot;
	return true;
}

void QGroupBox_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQGroupBox*>(self)->QGroupBox::enterEvent(event);
}

bool QGroupBox_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = slot;
	return true;
}

void QGroupBox_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQGroupBox*>(self)->QGroupBox::leaveEvent(event);
}

bool QGroupBox_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = slot;
	return true;
}

void QGroupBox_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQGroupBox*>(self)->QGroupBox::moveEvent(event);
}

bool QGroupBox_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = slot;
	return true;
}

void QGroupBox_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQGroupBox*>(self)->QGroupBox::closeEvent(event);
}

bool QGroupBox_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QGroupBox_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQGroupBox*>(self)->QGroupBox::contextMenuEvent(event);
}

bool QGroupBox_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = slot;
	return true;
}

void QGroupBox_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQGroupBox*>(self)->QGroupBox::tabletEvent(event);
}

bool QGroupBox_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = slot;
	return true;
}

void QGroupBox_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQGroupBox*>(self)->QGroupBox::actionEvent(event);
}

bool QGroupBox_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QGroupBox_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQGroupBox*>(self)->QGroupBox::dragEnterEvent(event);
}

bool QGroupBox_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QGroupBox_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQGroupBox*>(self)->QGroupBox::dragMoveEvent(event);
}

bool QGroupBox_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QGroupBox_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQGroupBox*>(self)->QGroupBox::dragLeaveEvent(event);
}

bool QGroupBox_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = slot;
	return true;
}

void QGroupBox_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQGroupBox*>(self)->QGroupBox::dropEvent(event);
}

bool QGroupBox_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = slot;
	return true;
}

void QGroupBox_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQGroupBox*>(self)->QGroupBox::showEvent(event);
}

bool QGroupBox_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = slot;
	return true;
}

void QGroupBox_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQGroupBox*>(self)->QGroupBox::hideEvent(event);
}

bool QGroupBox_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QGroupBox_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQGroupBox*>(self)->QGroupBox::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QGroupBox_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = slot;
	return true;
}

int QGroupBox_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQGroupBox*>(self)->QGroupBox::metric(static_cast<MiqtVirtualQGroupBox::PaintDeviceMetric>(param1));
}

bool QGroupBox_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = slot;
	return true;
}

void QGroupBox_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQGroupBox*>(self)->QGroupBox::initPainter(painter);
}

bool QGroupBox_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QGroupBox_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQGroupBox*>(self)->QGroupBox::redirected(offset);
}

bool QGroupBox_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QGroupBox_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQGroupBox*>(self)->QGroupBox::sharedPainter();
}

bool QGroupBox_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QGroupBox_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQGroupBox*>(self)->QGroupBox::inputMethodEvent(param1);
}

bool QGroupBox_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QGroupBox_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQGroupBox*>(self)->QGroupBox::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QGroupBox_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QGroupBox_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQGroupBox*>(self)->QGroupBox::focusNextPrevChild(next);
}

bool QGroupBox_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QGroupBox_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQGroupBox*>(self)->QGroupBox::eventFilter(watched, event);
}

bool QGroupBox_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QGroupBox_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQGroupBox*>(self)->QGroupBox::timerEvent(event);
}

bool QGroupBox_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QGroupBox_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQGroupBox*>(self)->QGroupBox::customEvent(event);
}

bool QGroupBox_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QGroupBox_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQGroupBox*>(self)->QGroupBox::connectNotify(*signal);
}

bool QGroupBox_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QGroupBox_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQGroupBox*>(self)->QGroupBox::disconnectNotify(*signal);
}

void QGroupBox_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionGroupBox* option) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->initStyleOption(option);
}

void QGroupBox_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QGroupBox_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QGroupBox_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QGroupBox_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QGroupBox_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QGroupBox_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QGroupBox_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QGroupBox_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QGroupBox_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQGroupBox* self_cast = dynamic_cast<MiqtVirtualQGroupBox*>( (QGroupBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QGroupBox_delete(QGroupBox* self) {
	delete self;
}

