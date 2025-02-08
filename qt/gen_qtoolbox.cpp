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
#include <QIcon>
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
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QToolBox>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qtoolbox.h>
#include "gen_qtoolbox.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QToolBox_currentChanged(intptr_t, int);
bool miqt_exec_callback_QToolBox_event(QToolBox*, intptr_t, QEvent*);
void miqt_exec_callback_QToolBox_itemInserted(QToolBox*, intptr_t, int);
void miqt_exec_callback_QToolBox_itemRemoved(QToolBox*, intptr_t, int);
void miqt_exec_callback_QToolBox_showEvent(QToolBox*, intptr_t, QShowEvent*);
void miqt_exec_callback_QToolBox_changeEvent(QToolBox*, intptr_t, QEvent*);
QSize* miqt_exec_callback_QToolBox_sizeHint(const QToolBox*, intptr_t);
void miqt_exec_callback_QToolBox_paintEvent(QToolBox*, intptr_t, QPaintEvent*);
int miqt_exec_callback_QToolBox_devType(const QToolBox*, intptr_t);
void miqt_exec_callback_QToolBox_setVisible(QToolBox*, intptr_t, bool);
QSize* miqt_exec_callback_QToolBox_minimumSizeHint(const QToolBox*, intptr_t);
int miqt_exec_callback_QToolBox_heightForWidth(const QToolBox*, intptr_t, int);
bool miqt_exec_callback_QToolBox_hasHeightForWidth(const QToolBox*, intptr_t);
QPaintEngine* miqt_exec_callback_QToolBox_paintEngine(const QToolBox*, intptr_t);
void miqt_exec_callback_QToolBox_mousePressEvent(QToolBox*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QToolBox_mouseReleaseEvent(QToolBox*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QToolBox_mouseDoubleClickEvent(QToolBox*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QToolBox_mouseMoveEvent(QToolBox*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QToolBox_wheelEvent(QToolBox*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QToolBox_keyPressEvent(QToolBox*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QToolBox_keyReleaseEvent(QToolBox*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QToolBox_focusInEvent(QToolBox*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QToolBox_focusOutEvent(QToolBox*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QToolBox_enterEvent(QToolBox*, intptr_t, QEvent*);
void miqt_exec_callback_QToolBox_leaveEvent(QToolBox*, intptr_t, QEvent*);
void miqt_exec_callback_QToolBox_moveEvent(QToolBox*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QToolBox_resizeEvent(QToolBox*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QToolBox_closeEvent(QToolBox*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QToolBox_contextMenuEvent(QToolBox*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QToolBox_tabletEvent(QToolBox*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QToolBox_actionEvent(QToolBox*, intptr_t, QActionEvent*);
void miqt_exec_callback_QToolBox_dragEnterEvent(QToolBox*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QToolBox_dragMoveEvent(QToolBox*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QToolBox_dragLeaveEvent(QToolBox*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QToolBox_dropEvent(QToolBox*, intptr_t, QDropEvent*);
void miqt_exec_callback_QToolBox_hideEvent(QToolBox*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QToolBox_nativeEvent(QToolBox*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QToolBox_metric(const QToolBox*, intptr_t, int);
void miqt_exec_callback_QToolBox_initPainter(const QToolBox*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QToolBox_redirected(const QToolBox*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QToolBox_sharedPainter(const QToolBox*, intptr_t);
void miqt_exec_callback_QToolBox_inputMethodEvent(QToolBox*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QToolBox_inputMethodQuery(const QToolBox*, intptr_t, int);
bool miqt_exec_callback_QToolBox_focusNextPrevChild(QToolBox*, intptr_t, bool);
bool miqt_exec_callback_QToolBox_eventFilter(QToolBox*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QToolBox_timerEvent(QToolBox*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QToolBox_childEvent(QToolBox*, intptr_t, QChildEvent*);
void miqt_exec_callback_QToolBox_customEvent(QToolBox*, intptr_t, QEvent*);
void miqt_exec_callback_QToolBox_connectNotify(QToolBox*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QToolBox_disconnectNotify(QToolBox*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQToolBox final : public QToolBox {
public:

	MiqtVirtualQToolBox(QWidget* parent): QToolBox(parent) {};
	MiqtVirtualQToolBox(): QToolBox() {};
	MiqtVirtualQToolBox(QWidget* parent, Qt::WindowFlags f): QToolBox(parent, f) {};

	virtual ~MiqtVirtualQToolBox() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__event == 0) {
			return QToolBox::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QToolBox_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool QToolBox_virtualbase_event(void* self, QEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemInserted = 0;

	// Subclass to allow providing a Go implementation
	virtual void itemInserted(int index) override {
		if (handle__itemInserted == 0) {
			QToolBox::itemInserted(index);
			return;
		}
		
		int sigval1 = index;

		miqt_exec_callback_QToolBox_itemInserted(this, handle__itemInserted, sigval1);

		
	}

	friend void QToolBox_virtualbase_itemInserted(void* self, int index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemRemoved = 0;

	// Subclass to allow providing a Go implementation
	virtual void itemRemoved(int index) override {
		if (handle__itemRemoved == 0) {
			QToolBox::itemRemoved(index);
			return;
		}
		
		int sigval1 = index;

		miqt_exec_callback_QToolBox_itemRemoved(this, handle__itemRemoved, sigval1);

		
	}

	friend void QToolBox_virtualbase_itemRemoved(void* self, int index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* e) override {
		if (handle__showEvent == 0) {
			QToolBox::showEvent(e);
			return;
		}
		
		QShowEvent* sigval1 = e;

		miqt_exec_callback_QToolBox_showEvent(this, handle__showEvent, sigval1);

		
	}

	friend void QToolBox_virtualbase_showEvent(void* self, QShowEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QToolBox::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QToolBox_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	friend void QToolBox_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QToolBox::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QToolBox_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	friend QSize* QToolBox_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__paintEvent == 0) {
			QToolBox::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QToolBox_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	friend void QToolBox_virtualbase_paintEvent(void* self, QPaintEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QToolBox::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QToolBox_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	friend int QToolBox_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QToolBox::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QToolBox_setVisible(this, handle__setVisible, sigval1);

		
	}

	friend void QToolBox_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QToolBox::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QToolBox_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	friend QSize* QToolBox_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QToolBox::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QToolBox_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	friend int QToolBox_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QToolBox::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QToolBox_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	friend bool QToolBox_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QToolBox::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QToolBox_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	friend QPaintEngine* QToolBox_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QToolBox::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	friend void QToolBox_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QToolBox::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	friend void QToolBox_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QToolBox::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	friend void QToolBox_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QToolBox::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	friend void QToolBox_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QToolBox::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	friend void QToolBox_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QToolBox::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	friend void QToolBox_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QToolBox::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	friend void QToolBox_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QToolBox::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	friend void QToolBox_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QToolBox::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	friend void QToolBox_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QToolBox::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	friend void QToolBox_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QToolBox::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	friend void QToolBox_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QToolBox::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	friend void QToolBox_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QToolBox::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	friend void QToolBox_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QToolBox::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	friend void QToolBox_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QToolBox::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	friend void QToolBox_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QToolBox::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	friend void QToolBox_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QToolBox::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	friend void QToolBox_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QToolBox::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	friend void QToolBox_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QToolBox::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	friend void QToolBox_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QToolBox::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	friend void QToolBox_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QToolBox::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	friend void QToolBox_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QToolBox::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	friend void QToolBox_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QToolBox::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QToolBox_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	friend bool QToolBox_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QToolBox::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QToolBox_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	friend int QToolBox_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QToolBox::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QToolBox_initPainter(this, handle__initPainter, sigval1);

		
	}

	friend void QToolBox_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QToolBox::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QToolBox_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	friend QPaintDevice* QToolBox_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QToolBox::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QToolBox_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	friend QPainter* QToolBox_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QToolBox::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QToolBox_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	friend void QToolBox_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QToolBox::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QToolBox_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	friend QVariant* QToolBox_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QToolBox::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QToolBox_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	friend bool QToolBox_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QToolBox::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QToolBox_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QToolBox_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QToolBox::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void QToolBox_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QToolBox::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void QToolBox_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QToolBox::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void QToolBox_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QToolBox::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QToolBox_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void QToolBox_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QToolBox::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QToolBox_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void QToolBox_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QToolBox_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
	friend void QToolBox_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option);
	friend void QToolBox_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QToolBox_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QToolBox_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QToolBox_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QToolBox_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QToolBox_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QToolBox_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QToolBox_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QToolBox_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QToolBox* QToolBox_new(QWidget* parent) {
	return new MiqtVirtualQToolBox(parent);
}

QToolBox* QToolBox_new2() {
	return new MiqtVirtualQToolBox();
}

QToolBox* QToolBox_new3(QWidget* parent, int f) {
	return new MiqtVirtualQToolBox(parent, static_cast<Qt::WindowFlags>(f));
}

void QToolBox_virtbase(QToolBox* src, QFrame** outptr_QFrame) {
	*outptr_QFrame = static_cast<QFrame*>(src);
}

QMetaObject* QToolBox_metaObject(const QToolBox* self) {
	return (QMetaObject*) self->metaObject();
}

void* QToolBox_metacast(QToolBox* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QToolBox_tr(const char* s) {
	QString _ret = QToolBox::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QToolBox_trUtf8(const char* s) {
	QString _ret = QToolBox::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QToolBox_addItem(QToolBox* self, QWidget* widget, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addItem(widget, text_QString);
}

int QToolBox_addItem2(QToolBox* self, QWidget* widget, QIcon* icon, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addItem(widget, *icon, text_QString);
}

int QToolBox_insertItem(QToolBox* self, int index, QWidget* widget, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->insertItem(static_cast<int>(index), widget, text_QString);
}

int QToolBox_insertItem2(QToolBox* self, int index, QWidget* widget, QIcon* icon, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->insertItem(static_cast<int>(index), widget, *icon, text_QString);
}

void QToolBox_removeItem(QToolBox* self, int index) {
	self->removeItem(static_cast<int>(index));
}

void QToolBox_setItemEnabled(QToolBox* self, int index, bool enabled) {
	self->setItemEnabled(static_cast<int>(index), enabled);
}

bool QToolBox_isItemEnabled(const QToolBox* self, int index) {
	return self->isItemEnabled(static_cast<int>(index));
}

void QToolBox_setItemText(QToolBox* self, int index, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setItemText(static_cast<int>(index), text_QString);
}

struct miqt_string QToolBox_itemText(const QToolBox* self, int index) {
	QString _ret = self->itemText(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QToolBox_setItemIcon(QToolBox* self, int index, QIcon* icon) {
	self->setItemIcon(static_cast<int>(index), *icon);
}

QIcon* QToolBox_itemIcon(const QToolBox* self, int index) {
	return new QIcon(self->itemIcon(static_cast<int>(index)));
}

void QToolBox_setItemToolTip(QToolBox* self, int index, struct miqt_string toolTip) {
	QString toolTip_QString = QString::fromUtf8(toolTip.data, toolTip.len);
	self->setItemToolTip(static_cast<int>(index), toolTip_QString);
}

struct miqt_string QToolBox_itemToolTip(const QToolBox* self, int index) {
	QString _ret = self->itemToolTip(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QToolBox_currentIndex(const QToolBox* self) {
	return self->currentIndex();
}

QWidget* QToolBox_currentWidget(const QToolBox* self) {
	return self->currentWidget();
}

QWidget* QToolBox_widget(const QToolBox* self, int index) {
	return self->widget(static_cast<int>(index));
}

int QToolBox_indexOf(const QToolBox* self, QWidget* widget) {
	return self->indexOf(widget);
}

int QToolBox_count(const QToolBox* self) {
	return self->count();
}

void QToolBox_setCurrentIndex(QToolBox* self, int index) {
	self->setCurrentIndex(static_cast<int>(index));
}

void QToolBox_setCurrentWidget(QToolBox* self, QWidget* widget) {
	self->setCurrentWidget(widget);
}

void QToolBox_currentChanged(QToolBox* self, int index) {
	self->currentChanged(static_cast<int>(index));
}

void QToolBox_connect_currentChanged(QToolBox* self, intptr_t slot) {
	MiqtVirtualQToolBox::connect(self, static_cast<void (QToolBox::*)(int)>(&QToolBox::currentChanged), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QToolBox_currentChanged(slot, sigval1);
	});
}

struct miqt_string QToolBox_tr2(const char* s, const char* c) {
	QString _ret = QToolBox::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QToolBox_tr3(const char* s, const char* c, int n) {
	QString _ret = QToolBox::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QToolBox_trUtf82(const char* s, const char* c) {
	QString _ret = QToolBox::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QToolBox_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QToolBox::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QToolBox_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QToolBox_virtualbase_event(void* self, QEvent* e) {

	return ( (MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::event(e);

}

bool QToolBox_override_virtual_itemInserted(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__itemInserted = slot;
	return true;
}

void QToolBox_virtualbase_itemInserted(void* self, int index) {

	( (MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::itemInserted(static_cast<int>(index));

}

bool QToolBox_override_virtual_itemRemoved(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__itemRemoved = slot;
	return true;
}

void QToolBox_virtualbase_itemRemoved(void* self, int index) {

	( (MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::itemRemoved(static_cast<int>(index));

}

bool QToolBox_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QToolBox_virtualbase_showEvent(void* self, QShowEvent* e) {

	( (MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::showEvent(e);

}

bool QToolBox_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QToolBox_virtualbase_changeEvent(void* self, QEvent* param1) {

	( (MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::changeEvent(param1);

}

bool QToolBox_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QToolBox_virtualbase_sizeHint(const void* self) {

	return new QSize(( (const MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::sizeHint());

}

bool QToolBox_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QToolBox_virtualbase_paintEvent(void* self, QPaintEvent* param1) {

	( (MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::paintEvent(param1);

}

bool QToolBox_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QToolBox_virtualbase_devType(const void* self) {

	return ( (const MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::devType();

}

bool QToolBox_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QToolBox_virtualbase_setVisible(void* self, bool visible) {

	( (MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::setVisible(visible);

}

bool QToolBox_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QToolBox_virtualbase_minimumSizeHint(const void* self) {

	return new QSize(( (const MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::minimumSizeHint());

}

bool QToolBox_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QToolBox_virtualbase_heightForWidth(const void* self, int param1) {

	return ( (const MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::heightForWidth(static_cast<int>(param1));

}

bool QToolBox_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QToolBox_virtualbase_hasHeightForWidth(const void* self) {

	return ( (const MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::hasHeightForWidth();

}

bool QToolBox_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QToolBox_virtualbase_paintEngine(const void* self) {

	return ( (const MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::paintEngine();

}

bool QToolBox_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QToolBox_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {

	( (MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::mousePressEvent(event);

}

bool QToolBox_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QToolBox_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {

	( (MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::mouseReleaseEvent(event);

}

bool QToolBox_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QToolBox_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {

	( (MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::mouseDoubleClickEvent(event);

}

bool QToolBox_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QToolBox_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {

	( (MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::mouseMoveEvent(event);

}

bool QToolBox_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QToolBox_virtualbase_wheelEvent(void* self, QWheelEvent* event) {

	( (MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::wheelEvent(event);

}

bool QToolBox_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QToolBox_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {

	( (MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::keyPressEvent(event);

}

bool QToolBox_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QToolBox_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {

	( (MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::keyReleaseEvent(event);

}

bool QToolBox_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QToolBox_virtualbase_focusInEvent(void* self, QFocusEvent* event) {

	( (MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::focusInEvent(event);

}

bool QToolBox_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QToolBox_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {

	( (MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::focusOutEvent(event);

}

bool QToolBox_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QToolBox_virtualbase_enterEvent(void* self, QEvent* event) {

	( (MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::enterEvent(event);

}

bool QToolBox_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QToolBox_virtualbase_leaveEvent(void* self, QEvent* event) {

	( (MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::leaveEvent(event);

}

bool QToolBox_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QToolBox_virtualbase_moveEvent(void* self, QMoveEvent* event) {

	( (MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::moveEvent(event);

}

bool QToolBox_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QToolBox_virtualbase_resizeEvent(void* self, QResizeEvent* event) {

	( (MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::resizeEvent(event);

}

bool QToolBox_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QToolBox_virtualbase_closeEvent(void* self, QCloseEvent* event) {

	( (MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::closeEvent(event);

}

bool QToolBox_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QToolBox_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {

	( (MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::contextMenuEvent(event);

}

bool QToolBox_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QToolBox_virtualbase_tabletEvent(void* self, QTabletEvent* event) {

	( (MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::tabletEvent(event);

}

bool QToolBox_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QToolBox_virtualbase_actionEvent(void* self, QActionEvent* event) {

	( (MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::actionEvent(event);

}

bool QToolBox_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QToolBox_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {

	( (MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::dragEnterEvent(event);

}

bool QToolBox_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QToolBox_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {

	( (MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::dragMoveEvent(event);

}

bool QToolBox_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QToolBox_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {

	( (MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::dragLeaveEvent(event);

}

bool QToolBox_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QToolBox_virtualbase_dropEvent(void* self, QDropEvent* event) {

	( (MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::dropEvent(event);

}

bool QToolBox_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QToolBox_virtualbase_hideEvent(void* self, QHideEvent* event) {

	( (MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::hideEvent(event);

}

bool QToolBox_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QToolBox_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);

	return ( (MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

}

bool QToolBox_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QToolBox_virtualbase_metric(const void* self, int param1) {

	return ( (const MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::metric(static_cast<MiqtVirtualQToolBox::PaintDeviceMetric>(param1));

}

bool QToolBox_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QToolBox_virtualbase_initPainter(const void* self, QPainter* painter) {

	( (const MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::initPainter(painter);

}

bool QToolBox_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QToolBox_virtualbase_redirected(const void* self, QPoint* offset) {

	return ( (const MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::redirected(offset);

}

bool QToolBox_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QToolBox_virtualbase_sharedPainter(const void* self) {

	return ( (const MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::sharedPainter();

}

bool QToolBox_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QToolBox_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {

	( (MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::inputMethodEvent(param1);

}

bool QToolBox_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QToolBox_virtualbase_inputMethodQuery(const void* self, int param1) {

	return new QVariant(( (const MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

}

bool QToolBox_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QToolBox_virtualbase_focusNextPrevChild(void* self, bool next) {

	return ( (MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::focusNextPrevChild(next);

}

bool QToolBox_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QToolBox_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {

	return ( (MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::eventFilter(watched, event);

}

bool QToolBox_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QToolBox_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::timerEvent(event);

}

bool QToolBox_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QToolBox_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::childEvent(event);

}

bool QToolBox_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QToolBox_virtualbase_customEvent(void* self, QEvent* event) {

	( (MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::customEvent(event);

}

bool QToolBox_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QToolBox_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::connectNotify(*signal);

}

bool QToolBox_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QToolBox_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQToolBox*)(self) )->MiqtVirtualQToolBox::disconnectNotify(*signal);

}

void QToolBox_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->drawFrame(param1);

}

void QToolBox_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->initStyleOption(option);

}

void QToolBox_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QToolBox_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QToolBox_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QToolBox_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QToolBox_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QToolBox_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QToolBox_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QToolBox_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QToolBox_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QToolBox_delete(QToolBox* self) {
	delete self;
}

