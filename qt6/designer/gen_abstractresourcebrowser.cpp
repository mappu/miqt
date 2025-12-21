#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDesignerResourceBrowserInterface>
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
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <abstractresourcebrowser.h>
#include "gen_abstractresourcebrowser.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QDesignerResourceBrowserInterface_currentPathChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QDesignerResourceBrowserInterface_pathActivated(intptr_t, struct miqt_string);
void miqt_exec_callback_QDesignerResourceBrowserInterface_setCurrentPath(QDesignerResourceBrowserInterface*, intptr_t, struct miqt_string);
struct miqt_string miqt_exec_callback_QDesignerResourceBrowserInterface_currentPath(const QDesignerResourceBrowserInterface*, intptr_t);
int miqt_exec_callback_QDesignerResourceBrowserInterface_devType(const QDesignerResourceBrowserInterface*, intptr_t);
void miqt_exec_callback_QDesignerResourceBrowserInterface_setVisible(QDesignerResourceBrowserInterface*, intptr_t, bool);
QSize* miqt_exec_callback_QDesignerResourceBrowserInterface_sizeHint(const QDesignerResourceBrowserInterface*, intptr_t);
QSize* miqt_exec_callback_QDesignerResourceBrowserInterface_minimumSizeHint(const QDesignerResourceBrowserInterface*, intptr_t);
int miqt_exec_callback_QDesignerResourceBrowserInterface_heightForWidth(const QDesignerResourceBrowserInterface*, intptr_t, int);
bool miqt_exec_callback_QDesignerResourceBrowserInterface_hasHeightForWidth(const QDesignerResourceBrowserInterface*, intptr_t);
QPaintEngine* miqt_exec_callback_QDesignerResourceBrowserInterface_paintEngine(const QDesignerResourceBrowserInterface*, intptr_t);
bool miqt_exec_callback_QDesignerResourceBrowserInterface_event(QDesignerResourceBrowserInterface*, intptr_t, QEvent*);
void miqt_exec_callback_QDesignerResourceBrowserInterface_mousePressEvent(QDesignerResourceBrowserInterface*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDesignerResourceBrowserInterface_mouseReleaseEvent(QDesignerResourceBrowserInterface*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDesignerResourceBrowserInterface_mouseDoubleClickEvent(QDesignerResourceBrowserInterface*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDesignerResourceBrowserInterface_mouseMoveEvent(QDesignerResourceBrowserInterface*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDesignerResourceBrowserInterface_wheelEvent(QDesignerResourceBrowserInterface*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QDesignerResourceBrowserInterface_keyPressEvent(QDesignerResourceBrowserInterface*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QDesignerResourceBrowserInterface_keyReleaseEvent(QDesignerResourceBrowserInterface*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QDesignerResourceBrowserInterface_focusInEvent(QDesignerResourceBrowserInterface*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QDesignerResourceBrowserInterface_focusOutEvent(QDesignerResourceBrowserInterface*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QDesignerResourceBrowserInterface_enterEvent(QDesignerResourceBrowserInterface*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QDesignerResourceBrowserInterface_leaveEvent(QDesignerResourceBrowserInterface*, intptr_t, QEvent*);
void miqt_exec_callback_QDesignerResourceBrowserInterface_paintEvent(QDesignerResourceBrowserInterface*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QDesignerResourceBrowserInterface_moveEvent(QDesignerResourceBrowserInterface*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QDesignerResourceBrowserInterface_resizeEvent(QDesignerResourceBrowserInterface*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QDesignerResourceBrowserInterface_closeEvent(QDesignerResourceBrowserInterface*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QDesignerResourceBrowserInterface_contextMenuEvent(QDesignerResourceBrowserInterface*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QDesignerResourceBrowserInterface_tabletEvent(QDesignerResourceBrowserInterface*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QDesignerResourceBrowserInterface_actionEvent(QDesignerResourceBrowserInterface*, intptr_t, QActionEvent*);
void miqt_exec_callback_QDesignerResourceBrowserInterface_dragEnterEvent(QDesignerResourceBrowserInterface*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QDesignerResourceBrowserInterface_dragMoveEvent(QDesignerResourceBrowserInterface*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QDesignerResourceBrowserInterface_dragLeaveEvent(QDesignerResourceBrowserInterface*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QDesignerResourceBrowserInterface_dropEvent(QDesignerResourceBrowserInterface*, intptr_t, QDropEvent*);
void miqt_exec_callback_QDesignerResourceBrowserInterface_showEvent(QDesignerResourceBrowserInterface*, intptr_t, QShowEvent*);
void miqt_exec_callback_QDesignerResourceBrowserInterface_hideEvent(QDesignerResourceBrowserInterface*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QDesignerResourceBrowserInterface_nativeEvent(QDesignerResourceBrowserInterface*, intptr_t, struct miqt_string, void*, intptr_t*);
void miqt_exec_callback_QDesignerResourceBrowserInterface_changeEvent(QDesignerResourceBrowserInterface*, intptr_t, QEvent*);
int miqt_exec_callback_QDesignerResourceBrowserInterface_metric(const QDesignerResourceBrowserInterface*, intptr_t, int);
void miqt_exec_callback_QDesignerResourceBrowserInterface_initPainter(const QDesignerResourceBrowserInterface*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QDesignerResourceBrowserInterface_redirected(const QDesignerResourceBrowserInterface*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QDesignerResourceBrowserInterface_sharedPainter(const QDesignerResourceBrowserInterface*, intptr_t);
void miqt_exec_callback_QDesignerResourceBrowserInterface_inputMethodEvent(QDesignerResourceBrowserInterface*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QDesignerResourceBrowserInterface_inputMethodQuery(const QDesignerResourceBrowserInterface*, intptr_t, int);
bool miqt_exec_callback_QDesignerResourceBrowserInterface_focusNextPrevChild(QDesignerResourceBrowserInterface*, intptr_t, bool);
bool miqt_exec_callback_QDesignerResourceBrowserInterface_eventFilter(QDesignerResourceBrowserInterface*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QDesignerResourceBrowserInterface_timerEvent(QDesignerResourceBrowserInterface*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QDesignerResourceBrowserInterface_childEvent(QDesignerResourceBrowserInterface*, intptr_t, QChildEvent*);
void miqt_exec_callback_QDesignerResourceBrowserInterface_customEvent(QDesignerResourceBrowserInterface*, intptr_t, QEvent*);
void miqt_exec_callback_QDesignerResourceBrowserInterface_connectNotify(QDesignerResourceBrowserInterface*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDesignerResourceBrowserInterface_disconnectNotify(QDesignerResourceBrowserInterface*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQDesignerResourceBrowserInterface final : public QDesignerResourceBrowserInterface {
public:

	MiqtVirtualQDesignerResourceBrowserInterface(QWidget* parent): QDesignerResourceBrowserInterface(parent) {}
	MiqtVirtualQDesignerResourceBrowserInterface(): QDesignerResourceBrowserInterface() {}

	virtual ~MiqtVirtualQDesignerResourceBrowserInterface() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setCurrentPath = 0;

	// Subclass to allow providing a Go implementation
	virtual void setCurrentPath(const QString& filePath) override {
		if (handle__setCurrentPath == 0) {
			return; // Pure virtual, there is no base we can call
		}

		const QString filePath_ret = filePath;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray filePath_b = filePath_ret.toUtf8();
		struct miqt_string filePath_ms;
		filePath_ms.len = filePath_b.length();
		filePath_ms.data = static_cast<char*>(malloc(filePath_ms.len));
		memcpy(filePath_ms.data, filePath_b.data(), filePath_ms.len);
		struct miqt_string sigval1 = filePath_ms;
		miqt_exec_callback_QDesignerResourceBrowserInterface_setCurrentPath(this, handle__setCurrentPath, sigval1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__currentPath = 0;

	// Subclass to allow providing a Go implementation
	virtual QString currentPath() const override {
		if (handle__currentPath == 0) {
			return QString(); // Pure virtual, there is no base we can call
		}

		struct miqt_string callback_return_value = miqt_exec_callback_QDesignerResourceBrowserInterface_currentPath(this, handle__currentPath);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QDesignerResourceBrowserInterface::devType();
		}

		int callback_return_value = miqt_exec_callback_QDesignerResourceBrowserInterface_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int QDesignerResourceBrowserInterface_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QDesignerResourceBrowserInterface::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QDesignerResourceBrowserInterface_setVisible(this, handle__setVisible, sigval1);

	}

	friend void QDesignerResourceBrowserInterface_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QDesignerResourceBrowserInterface::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QDesignerResourceBrowserInterface_sizeHint(this, handle__sizeHint);
		return *callback_return_value;
	}

	friend QSize* QDesignerResourceBrowserInterface_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QDesignerResourceBrowserInterface::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QDesignerResourceBrowserInterface_minimumSizeHint(this, handle__minimumSizeHint);
		return *callback_return_value;
	}

	friend QSize* QDesignerResourceBrowserInterface_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QDesignerResourceBrowserInterface::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QDesignerResourceBrowserInterface_heightForWidth(this, handle__heightForWidth, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QDesignerResourceBrowserInterface_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QDesignerResourceBrowserInterface::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QDesignerResourceBrowserInterface_hasHeightForWidth(this, handle__hasHeightForWidth);
		return callback_return_value;
	}

	friend bool QDesignerResourceBrowserInterface_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QDesignerResourceBrowserInterface::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QDesignerResourceBrowserInterface_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* QDesignerResourceBrowserInterface_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QDesignerResourceBrowserInterface::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QDesignerResourceBrowserInterface_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QDesignerResourceBrowserInterface_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QDesignerResourceBrowserInterface::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QDesignerResourceBrowserInterface_mousePressEvent(this, handle__mousePressEvent, sigval1);

	}

	friend void QDesignerResourceBrowserInterface_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QDesignerResourceBrowserInterface::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QDesignerResourceBrowserInterface_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

	}

	friend void QDesignerResourceBrowserInterface_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QDesignerResourceBrowserInterface::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QDesignerResourceBrowserInterface_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

	}

	friend void QDesignerResourceBrowserInterface_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QDesignerResourceBrowserInterface::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QDesignerResourceBrowserInterface_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

	}

	friend void QDesignerResourceBrowserInterface_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QDesignerResourceBrowserInterface::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QDesignerResourceBrowserInterface_wheelEvent(this, handle__wheelEvent, sigval1);

	}

	friend void QDesignerResourceBrowserInterface_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QDesignerResourceBrowserInterface::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QDesignerResourceBrowserInterface_keyPressEvent(this, handle__keyPressEvent, sigval1);

	}

	friend void QDesignerResourceBrowserInterface_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QDesignerResourceBrowserInterface::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QDesignerResourceBrowserInterface_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

	}

	friend void QDesignerResourceBrowserInterface_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QDesignerResourceBrowserInterface::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QDesignerResourceBrowserInterface_focusInEvent(this, handle__focusInEvent, sigval1);

	}

	friend void QDesignerResourceBrowserInterface_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QDesignerResourceBrowserInterface::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QDesignerResourceBrowserInterface_focusOutEvent(this, handle__focusOutEvent, sigval1);

	}

	friend void QDesignerResourceBrowserInterface_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__enterEvent == 0) {
			QDesignerResourceBrowserInterface::enterEvent(event);
			return;
		}

		QEnterEvent* sigval1 = event;
		miqt_exec_callback_QDesignerResourceBrowserInterface_enterEvent(this, handle__enterEvent, sigval1);

	}

	friend void QDesignerResourceBrowserInterface_virtualbase_enterEvent(void* self, QEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QDesignerResourceBrowserInterface::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QDesignerResourceBrowserInterface_leaveEvent(this, handle__leaveEvent, sigval1);

	}

	friend void QDesignerResourceBrowserInterface_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QDesignerResourceBrowserInterface::paintEvent(event);
			return;
		}

		QPaintEvent* sigval1 = event;
		miqt_exec_callback_QDesignerResourceBrowserInterface_paintEvent(this, handle__paintEvent, sigval1);

	}

	friend void QDesignerResourceBrowserInterface_virtualbase_paintEvent(void* self, QPaintEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QDesignerResourceBrowserInterface::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QDesignerResourceBrowserInterface_moveEvent(this, handle__moveEvent, sigval1);

	}

	friend void QDesignerResourceBrowserInterface_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QDesignerResourceBrowserInterface::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QDesignerResourceBrowserInterface_resizeEvent(this, handle__resizeEvent, sigval1);

	}

	friend void QDesignerResourceBrowserInterface_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QDesignerResourceBrowserInterface::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QDesignerResourceBrowserInterface_closeEvent(this, handle__closeEvent, sigval1);

	}

	friend void QDesignerResourceBrowserInterface_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QDesignerResourceBrowserInterface::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QDesignerResourceBrowserInterface_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

	}

	friend void QDesignerResourceBrowserInterface_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QDesignerResourceBrowserInterface::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QDesignerResourceBrowserInterface_tabletEvent(this, handle__tabletEvent, sigval1);

	}

	friend void QDesignerResourceBrowserInterface_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QDesignerResourceBrowserInterface::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QDesignerResourceBrowserInterface_actionEvent(this, handle__actionEvent, sigval1);

	}

	friend void QDesignerResourceBrowserInterface_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QDesignerResourceBrowserInterface::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QDesignerResourceBrowserInterface_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

	}

	friend void QDesignerResourceBrowserInterface_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QDesignerResourceBrowserInterface::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QDesignerResourceBrowserInterface_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

	}

	friend void QDesignerResourceBrowserInterface_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QDesignerResourceBrowserInterface::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QDesignerResourceBrowserInterface_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

	}

	friend void QDesignerResourceBrowserInterface_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QDesignerResourceBrowserInterface::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QDesignerResourceBrowserInterface_dropEvent(this, handle__dropEvent, sigval1);

	}

	friend void QDesignerResourceBrowserInterface_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QDesignerResourceBrowserInterface::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QDesignerResourceBrowserInterface_showEvent(this, handle__showEvent, sigval1);

	}

	friend void QDesignerResourceBrowserInterface_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QDesignerResourceBrowserInterface::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QDesignerResourceBrowserInterface_hideEvent(this, handle__hideEvent, sigval1);

	}

	friend void QDesignerResourceBrowserInterface_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__nativeEvent == 0) {
			return QDesignerResourceBrowserInterface::nativeEvent(eventType, message, result);
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
		bool callback_return_value = miqt_exec_callback_QDesignerResourceBrowserInterface_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QDesignerResourceBrowserInterface_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QDesignerResourceBrowserInterface::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QDesignerResourceBrowserInterface_changeEvent(this, handle__changeEvent, sigval1);

	}

	friend void QDesignerResourceBrowserInterface_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QDesignerResourceBrowserInterface::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QDesignerResourceBrowserInterface_metric(this, handle__metric, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QDesignerResourceBrowserInterface_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QDesignerResourceBrowserInterface::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QDesignerResourceBrowserInterface_initPainter(this, handle__initPainter, sigval1);

	}

	friend void QDesignerResourceBrowserInterface_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QDesignerResourceBrowserInterface::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QDesignerResourceBrowserInterface_redirected(this, handle__redirected, sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QDesignerResourceBrowserInterface_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QDesignerResourceBrowserInterface::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QDesignerResourceBrowserInterface_sharedPainter(this, handle__sharedPainter);
		return callback_return_value;
	}

	friend QPainter* QDesignerResourceBrowserInterface_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QDesignerResourceBrowserInterface::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QDesignerResourceBrowserInterface_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

	}

	friend void QDesignerResourceBrowserInterface_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QDesignerResourceBrowserInterface::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QDesignerResourceBrowserInterface_inputMethodQuery(this, handle__inputMethodQuery, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QDesignerResourceBrowserInterface_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QDesignerResourceBrowserInterface::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QDesignerResourceBrowserInterface_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);
		return callback_return_value;
	}

	friend bool QDesignerResourceBrowserInterface_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QDesignerResourceBrowserInterface::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QDesignerResourceBrowserInterface_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QDesignerResourceBrowserInterface_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QDesignerResourceBrowserInterface::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QDesignerResourceBrowserInterface_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QDesignerResourceBrowserInterface_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QDesignerResourceBrowserInterface::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QDesignerResourceBrowserInterface_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QDesignerResourceBrowserInterface_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QDesignerResourceBrowserInterface::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QDesignerResourceBrowserInterface_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QDesignerResourceBrowserInterface_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QDesignerResourceBrowserInterface::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QDesignerResourceBrowserInterface_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QDesignerResourceBrowserInterface_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QDesignerResourceBrowserInterface::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QDesignerResourceBrowserInterface_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QDesignerResourceBrowserInterface_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QDesignerResourceBrowserInterface_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QDesignerResourceBrowserInterface_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QDesignerResourceBrowserInterface_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QDesignerResourceBrowserInterface_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QDesignerResourceBrowserInterface_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QDesignerResourceBrowserInterface_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QDesignerResourceBrowserInterface_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QDesignerResourceBrowserInterface_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QDesignerResourceBrowserInterface_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QDesignerResourceBrowserInterface* QDesignerResourceBrowserInterface_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQDesignerResourceBrowserInterface(parent);
}

QDesignerResourceBrowserInterface* QDesignerResourceBrowserInterface_new2() {
	return new (std::nothrow) MiqtVirtualQDesignerResourceBrowserInterface();
}

void QDesignerResourceBrowserInterface_virtbase(QDesignerResourceBrowserInterface* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QDesignerResourceBrowserInterface_metaObject(const QDesignerResourceBrowserInterface* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDesignerResourceBrowserInterface_metacast(QDesignerResourceBrowserInterface* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDesignerResourceBrowserInterface_tr(const char* s) {
	QString _ret = QDesignerResourceBrowserInterface::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDesignerResourceBrowserInterface_setCurrentPath(QDesignerResourceBrowserInterface* self, struct miqt_string filePath) {
	QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
	self->setCurrentPath(filePath_QString);
}

struct miqt_string QDesignerResourceBrowserInterface_currentPath(const QDesignerResourceBrowserInterface* self) {
	QString _ret = self->currentPath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDesignerResourceBrowserInterface_currentPathChanged(QDesignerResourceBrowserInterface* self, struct miqt_string filePath) {
	QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
	self->currentPathChanged(filePath_QString);
}

void QDesignerResourceBrowserInterface_connect_currentPathChanged(QDesignerResourceBrowserInterface* self, intptr_t slot) {
	QDesignerResourceBrowserInterface::connect(self, static_cast<void (QDesignerResourceBrowserInterface::*)(const QString&)>(&QDesignerResourceBrowserInterface::currentPathChanged), self, [=](const QString& filePath) {
		const QString filePath_ret = filePath;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray filePath_b = filePath_ret.toUtf8();
		struct miqt_string filePath_ms;
		filePath_ms.len = filePath_b.length();
		filePath_ms.data = static_cast<char*>(malloc(filePath_ms.len));
		memcpy(filePath_ms.data, filePath_b.data(), filePath_ms.len);
		struct miqt_string sigval1 = filePath_ms;
		miqt_exec_callback_QDesignerResourceBrowserInterface_currentPathChanged(slot, sigval1);
	});
}

void QDesignerResourceBrowserInterface_pathActivated(QDesignerResourceBrowserInterface* self, struct miqt_string filePath) {
	QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
	self->pathActivated(filePath_QString);
}

void QDesignerResourceBrowserInterface_connect_pathActivated(QDesignerResourceBrowserInterface* self, intptr_t slot) {
	QDesignerResourceBrowserInterface::connect(self, static_cast<void (QDesignerResourceBrowserInterface::*)(const QString&)>(&QDesignerResourceBrowserInterface::pathActivated), self, [=](const QString& filePath) {
		const QString filePath_ret = filePath;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray filePath_b = filePath_ret.toUtf8();
		struct miqt_string filePath_ms;
		filePath_ms.len = filePath_b.length();
		filePath_ms.data = static_cast<char*>(malloc(filePath_ms.len));
		memcpy(filePath_ms.data, filePath_b.data(), filePath_ms.len);
		struct miqt_string sigval1 = filePath_ms;
		miqt_exec_callback_QDesignerResourceBrowserInterface_pathActivated(slot, sigval1);
	});
}

struct miqt_string QDesignerResourceBrowserInterface_tr2(const char* s, const char* c) {
	QString _ret = QDesignerResourceBrowserInterface::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerResourceBrowserInterface_tr3(const char* s, const char* c, int n) {
	QString _ret = QDesignerResourceBrowserInterface::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDesignerResourceBrowserInterface_override_virtual_setCurrentPath(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setCurrentPath = slot;
	return true;
}

bool QDesignerResourceBrowserInterface_override_virtual_currentPath(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__currentPath = slot;
	return true;
}

bool QDesignerResourceBrowserInterface_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int QDesignerResourceBrowserInterface_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::devType();
}

bool QDesignerResourceBrowserInterface_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = slot;
	return true;
}

void QDesignerResourceBrowserInterface_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::setVisible(visible);
}

bool QDesignerResourceBrowserInterface_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QDesignerResourceBrowserInterface_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::sizeHint());
}

bool QDesignerResourceBrowserInterface_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QDesignerResourceBrowserInterface_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::minimumSizeHint());
}

bool QDesignerResourceBrowserInterface_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = slot;
	return true;
}

int QDesignerResourceBrowserInterface_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::heightForWidth(static_cast<int>(param1));
}

bool QDesignerResourceBrowserInterface_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QDesignerResourceBrowserInterface_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::hasHeightForWidth();
}

bool QDesignerResourceBrowserInterface_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QDesignerResourceBrowserInterface_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::paintEngine();
}

bool QDesignerResourceBrowserInterface_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QDesignerResourceBrowserInterface_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::event(event);
}

bool QDesignerResourceBrowserInterface_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QDesignerResourceBrowserInterface_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::mousePressEvent(event);
}

bool QDesignerResourceBrowserInterface_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QDesignerResourceBrowserInterface_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::mouseReleaseEvent(event);
}

bool QDesignerResourceBrowserInterface_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QDesignerResourceBrowserInterface_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::mouseDoubleClickEvent(event);
}

bool QDesignerResourceBrowserInterface_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QDesignerResourceBrowserInterface_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::mouseMoveEvent(event);
}

bool QDesignerResourceBrowserInterface_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = slot;
	return true;
}

void QDesignerResourceBrowserInterface_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::wheelEvent(event);
}

bool QDesignerResourceBrowserInterface_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QDesignerResourceBrowserInterface_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::keyPressEvent(event);
}

bool QDesignerResourceBrowserInterface_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QDesignerResourceBrowserInterface_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::keyReleaseEvent(event);
}

bool QDesignerResourceBrowserInterface_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = slot;
	return true;
}

void QDesignerResourceBrowserInterface_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::focusInEvent(event);
}

bool QDesignerResourceBrowserInterface_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QDesignerResourceBrowserInterface_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::focusOutEvent(event);
}

bool QDesignerResourceBrowserInterface_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = slot;
	return true;
}

void QDesignerResourceBrowserInterface_virtualbase_enterEvent(void* self, QEnterEvent* event) {
	static_cast<MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::enterEvent(event);
}

bool QDesignerResourceBrowserInterface_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = slot;
	return true;
}

void QDesignerResourceBrowserInterface_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::leaveEvent(event);
}

bool QDesignerResourceBrowserInterface_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = slot;
	return true;
}

void QDesignerResourceBrowserInterface_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	static_cast<MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::paintEvent(event);
}

bool QDesignerResourceBrowserInterface_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = slot;
	return true;
}

void QDesignerResourceBrowserInterface_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::moveEvent(event);
}

bool QDesignerResourceBrowserInterface_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = slot;
	return true;
}

void QDesignerResourceBrowserInterface_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::resizeEvent(event);
}

bool QDesignerResourceBrowserInterface_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = slot;
	return true;
}

void QDesignerResourceBrowserInterface_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::closeEvent(event);
}

bool QDesignerResourceBrowserInterface_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QDesignerResourceBrowserInterface_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::contextMenuEvent(event);
}

bool QDesignerResourceBrowserInterface_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = slot;
	return true;
}

void QDesignerResourceBrowserInterface_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::tabletEvent(event);
}

bool QDesignerResourceBrowserInterface_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = slot;
	return true;
}

void QDesignerResourceBrowserInterface_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::actionEvent(event);
}

bool QDesignerResourceBrowserInterface_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QDesignerResourceBrowserInterface_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::dragEnterEvent(event);
}

bool QDesignerResourceBrowserInterface_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QDesignerResourceBrowserInterface_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::dragMoveEvent(event);
}

bool QDesignerResourceBrowserInterface_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QDesignerResourceBrowserInterface_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::dragLeaveEvent(event);
}

bool QDesignerResourceBrowserInterface_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = slot;
	return true;
}

void QDesignerResourceBrowserInterface_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::dropEvent(event);
}

bool QDesignerResourceBrowserInterface_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = slot;
	return true;
}

void QDesignerResourceBrowserInterface_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::showEvent(event);
}

bool QDesignerResourceBrowserInterface_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = slot;
	return true;
}

void QDesignerResourceBrowserInterface_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::hideEvent(event);
}

bool QDesignerResourceBrowserInterface_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QDesignerResourceBrowserInterface_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
}

bool QDesignerResourceBrowserInterface_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = slot;
	return true;
}

void QDesignerResourceBrowserInterface_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::changeEvent(param1);
}

bool QDesignerResourceBrowserInterface_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = slot;
	return true;
}

int QDesignerResourceBrowserInterface_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::metric(static_cast<MiqtVirtualQDesignerResourceBrowserInterface::PaintDeviceMetric>(param1));
}

bool QDesignerResourceBrowserInterface_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = slot;
	return true;
}

void QDesignerResourceBrowserInterface_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::initPainter(painter);
}

bool QDesignerResourceBrowserInterface_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QDesignerResourceBrowserInterface_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::redirected(offset);
}

bool QDesignerResourceBrowserInterface_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QDesignerResourceBrowserInterface_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::sharedPainter();
}

bool QDesignerResourceBrowserInterface_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QDesignerResourceBrowserInterface_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::inputMethodEvent(param1);
}

bool QDesignerResourceBrowserInterface_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QDesignerResourceBrowserInterface_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QDesignerResourceBrowserInterface_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QDesignerResourceBrowserInterface_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::focusNextPrevChild(next);
}

bool QDesignerResourceBrowserInterface_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QDesignerResourceBrowserInterface_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::eventFilter(watched, event);
}

bool QDesignerResourceBrowserInterface_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QDesignerResourceBrowserInterface_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::timerEvent(event);
}

bool QDesignerResourceBrowserInterface_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QDesignerResourceBrowserInterface_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::childEvent(event);
}

bool QDesignerResourceBrowserInterface_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QDesignerResourceBrowserInterface_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::customEvent(event);
}

bool QDesignerResourceBrowserInterface_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QDesignerResourceBrowserInterface_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::connectNotify(*signal);
}

bool QDesignerResourceBrowserInterface_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QDesignerResourceBrowserInterface_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQDesignerResourceBrowserInterface*>(self)->QDesignerResourceBrowserInterface::disconnectNotify(*signal);
}

void QDesignerResourceBrowserInterface_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QDesignerResourceBrowserInterface_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QDesignerResourceBrowserInterface_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QDesignerResourceBrowserInterface_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QDesignerResourceBrowserInterface_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QDesignerResourceBrowserInterface_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QDesignerResourceBrowserInterface_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QDesignerResourceBrowserInterface_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QDesignerResourceBrowserInterface_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQDesignerResourceBrowserInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerResourceBrowserInterface*>( (QDesignerResourceBrowserInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QDesignerResourceBrowserInterface_delete(QDesignerResourceBrowserInterface* self) {
	delete self;
}

