#include <QActionEvent>
#include <QByteArray>
#include <QCameraViewfinder>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMediaBindableInterface>
#include <QMediaObject>
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
#include <QVideoWidget>
#include <QWheelEvent>
#include <QWidget>
#include <qcameraviewfinder.h>
#include "gen_qcameraviewfinder.h"

#ifdef __cplusplus
extern "C" {
#endif

QMediaObject* miqt_exec_callback_QCameraViewfinder_mediaObject(const QCameraViewfinder*, intptr_t);
bool miqt_exec_callback_QCameraViewfinder_setMediaObject(QCameraViewfinder*, intptr_t, QMediaObject*);
QSize* miqt_exec_callback_QCameraViewfinder_sizeHint(const QCameraViewfinder*, intptr_t);
bool miqt_exec_callback_QCameraViewfinder_event(QCameraViewfinder*, intptr_t, QEvent*);
void miqt_exec_callback_QCameraViewfinder_showEvent(QCameraViewfinder*, intptr_t, QShowEvent*);
void miqt_exec_callback_QCameraViewfinder_hideEvent(QCameraViewfinder*, intptr_t, QHideEvent*);
void miqt_exec_callback_QCameraViewfinder_resizeEvent(QCameraViewfinder*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QCameraViewfinder_moveEvent(QCameraViewfinder*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QCameraViewfinder_paintEvent(QCameraViewfinder*, intptr_t, QPaintEvent*);
int miqt_exec_callback_QCameraViewfinder_devType(const QCameraViewfinder*, intptr_t);
void miqt_exec_callback_QCameraViewfinder_setVisible(QCameraViewfinder*, intptr_t, bool);
QSize* miqt_exec_callback_QCameraViewfinder_minimumSizeHint(const QCameraViewfinder*, intptr_t);
int miqt_exec_callback_QCameraViewfinder_heightForWidth(const QCameraViewfinder*, intptr_t, int);
bool miqt_exec_callback_QCameraViewfinder_hasHeightForWidth(const QCameraViewfinder*, intptr_t);
QPaintEngine* miqt_exec_callback_QCameraViewfinder_paintEngine(const QCameraViewfinder*, intptr_t);
void miqt_exec_callback_QCameraViewfinder_mousePressEvent(QCameraViewfinder*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QCameraViewfinder_mouseReleaseEvent(QCameraViewfinder*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QCameraViewfinder_mouseDoubleClickEvent(QCameraViewfinder*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QCameraViewfinder_mouseMoveEvent(QCameraViewfinder*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QCameraViewfinder_wheelEvent(QCameraViewfinder*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QCameraViewfinder_keyPressEvent(QCameraViewfinder*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QCameraViewfinder_keyReleaseEvent(QCameraViewfinder*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QCameraViewfinder_focusInEvent(QCameraViewfinder*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QCameraViewfinder_focusOutEvent(QCameraViewfinder*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QCameraViewfinder_enterEvent(QCameraViewfinder*, intptr_t, QEvent*);
void miqt_exec_callback_QCameraViewfinder_leaveEvent(QCameraViewfinder*, intptr_t, QEvent*);
void miqt_exec_callback_QCameraViewfinder_closeEvent(QCameraViewfinder*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QCameraViewfinder_contextMenuEvent(QCameraViewfinder*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QCameraViewfinder_tabletEvent(QCameraViewfinder*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QCameraViewfinder_actionEvent(QCameraViewfinder*, intptr_t, QActionEvent*);
void miqt_exec_callback_QCameraViewfinder_dragEnterEvent(QCameraViewfinder*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QCameraViewfinder_dragMoveEvent(QCameraViewfinder*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QCameraViewfinder_dragLeaveEvent(QCameraViewfinder*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QCameraViewfinder_dropEvent(QCameraViewfinder*, intptr_t, QDropEvent*);
bool miqt_exec_callback_QCameraViewfinder_nativeEvent(QCameraViewfinder*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QCameraViewfinder_changeEvent(QCameraViewfinder*, intptr_t, QEvent*);
int miqt_exec_callback_QCameraViewfinder_metric(const QCameraViewfinder*, intptr_t, int);
void miqt_exec_callback_QCameraViewfinder_initPainter(const QCameraViewfinder*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QCameraViewfinder_redirected(const QCameraViewfinder*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QCameraViewfinder_sharedPainter(const QCameraViewfinder*, intptr_t);
void miqt_exec_callback_QCameraViewfinder_inputMethodEvent(QCameraViewfinder*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QCameraViewfinder_inputMethodQuery(const QCameraViewfinder*, intptr_t, int);
bool miqt_exec_callback_QCameraViewfinder_focusNextPrevChild(QCameraViewfinder*, intptr_t, bool);
bool miqt_exec_callback_QCameraViewfinder_eventFilter(QCameraViewfinder*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QCameraViewfinder_timerEvent(QCameraViewfinder*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QCameraViewfinder_childEvent(QCameraViewfinder*, intptr_t, QChildEvent*);
void miqt_exec_callback_QCameraViewfinder_customEvent(QCameraViewfinder*, intptr_t, QEvent*);
void miqt_exec_callback_QCameraViewfinder_connectNotify(QCameraViewfinder*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QCameraViewfinder_disconnectNotify(QCameraViewfinder*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQCameraViewfinder final : public QCameraViewfinder {
public:

	MiqtVirtualQCameraViewfinder(QWidget* parent): QCameraViewfinder(parent) {};
	MiqtVirtualQCameraViewfinder(): QCameraViewfinder() {};

	virtual ~MiqtVirtualQCameraViewfinder() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mediaObject = 0;

	// Subclass to allow providing a Go implementation
	virtual QMediaObject* mediaObject() const override {
		if (handle__mediaObject == 0) {
			return QCameraViewfinder::mediaObject();
		}
		

		QMediaObject* callback_return_value = miqt_exec_callback_QCameraViewfinder_mediaObject(this, handle__mediaObject);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QMediaObject* virtualbase_mediaObject() const {

		return QCameraViewfinder::mediaObject();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setMediaObject = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setMediaObject(QMediaObject* object) override {
		if (handle__setMediaObject == 0) {
			return QCameraViewfinder::setMediaObject(object);
		}
		
		QMediaObject* sigval1 = object;

		bool callback_return_value = miqt_exec_callback_QCameraViewfinder_setMediaObject(this, handle__setMediaObject, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_setMediaObject(QMediaObject* object) {

		return QCameraViewfinder::setMediaObject(object);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QCameraViewfinder::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QCameraViewfinder_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QCameraViewfinder::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QCameraViewfinder::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QCameraViewfinder_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QCameraViewfinder::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QCameraViewfinder::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* event) {

		QCameraViewfinder::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QCameraViewfinder::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QCameraViewfinder::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QCameraViewfinder::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* event) {

		QCameraViewfinder::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QCameraViewfinder::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QCameraViewfinder::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QCameraViewfinder::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* event) {

		QCameraViewfinder::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QCameraViewfinder::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QCameraViewfinder_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QCameraViewfinder::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QCameraViewfinder::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QCameraViewfinder_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QCameraViewfinder::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QCameraViewfinder::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QCameraViewfinder_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QCameraViewfinder::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QCameraViewfinder::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QCameraViewfinder_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QCameraViewfinder::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QCameraViewfinder::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QCameraViewfinder_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QCameraViewfinder::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QCameraViewfinder::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QCameraViewfinder_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QCameraViewfinder::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QCameraViewfinder::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* event) {

		QCameraViewfinder::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QCameraViewfinder::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* event) {

		QCameraViewfinder::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QCameraViewfinder::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QCameraViewfinder::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QCameraViewfinder::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* event) {

		QCameraViewfinder::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QCameraViewfinder::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* event) {

		QCameraViewfinder::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QCameraViewfinder::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* event) {

		QCameraViewfinder::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QCameraViewfinder::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QCameraViewfinder::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QCameraViewfinder::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QCameraViewfinder::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QCameraViewfinder::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QCameraViewfinder::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QCameraViewfinder::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEvent* event) {

		QCameraViewfinder::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QCameraViewfinder::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QCameraViewfinder::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QCameraViewfinder::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QCameraViewfinder::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QCameraViewfinder::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* event) {

		QCameraViewfinder::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QCameraViewfinder::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QCameraViewfinder::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QCameraViewfinder::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QCameraViewfinder::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QCameraViewfinder::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QCameraViewfinder::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QCameraViewfinder::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QCameraViewfinder::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QCameraViewfinder::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QCameraViewfinder::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QCameraViewfinder::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QCameraViewfinder::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QCameraViewfinder::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QCameraViewfinder_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QCameraViewfinder::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QCameraViewfinder::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QCameraViewfinder_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* param1) {

		QCameraViewfinder::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QCameraViewfinder::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QCameraViewfinder_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QCameraViewfinder::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QCameraViewfinder::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QCameraViewfinder_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QCameraViewfinder::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QCameraViewfinder::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QCameraViewfinder_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QCameraViewfinder::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QCameraViewfinder::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QCameraViewfinder_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QCameraViewfinder::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QCameraViewfinder::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QCameraViewfinder_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QCameraViewfinder::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QCameraViewfinder::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QCameraViewfinder_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QCameraViewfinder::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QCameraViewfinder::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QCameraViewfinder_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QCameraViewfinder::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QCameraViewfinder::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QCameraViewfinder_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QCameraViewfinder::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QCameraViewfinder::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QCameraViewfinder::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QCameraViewfinder::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QCameraViewfinder::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QCameraViewfinder::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QCameraViewfinder_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QCameraViewfinder::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QCameraViewfinder::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QCameraViewfinder_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QCameraViewfinder::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QCameraViewfinder::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QCameraViewfinder_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QCameraViewfinder::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QCameraViewfinder_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QCameraViewfinder_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QCameraViewfinder_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QCameraViewfinder_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QCameraViewfinder_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QCameraViewfinder_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QCameraViewfinder_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QCameraViewfinder_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QCameraViewfinder_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QCameraViewfinder* QCameraViewfinder_new(QWidget* parent) {
	return new MiqtVirtualQCameraViewfinder(parent);
}

QCameraViewfinder* QCameraViewfinder_new2() {
	return new MiqtVirtualQCameraViewfinder();
}

void QCameraViewfinder_virtbase(QCameraViewfinder* src, QVideoWidget** outptr_QVideoWidget) {
	*outptr_QVideoWidget = static_cast<QVideoWidget*>(src);
}

QMetaObject* QCameraViewfinder_metaObject(const QCameraViewfinder* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCameraViewfinder_metacast(QCameraViewfinder* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCameraViewfinder_tr(const char* s) {
	QString _ret = QCameraViewfinder::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraViewfinder_trUtf8(const char* s) {
	QString _ret = QCameraViewfinder::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QMediaObject* QCameraViewfinder_mediaObject(const QCameraViewfinder* self) {
	return self->mediaObject();
}

struct miqt_string QCameraViewfinder_tr2(const char* s, const char* c) {
	QString _ret = QCameraViewfinder::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraViewfinder_tr3(const char* s, const char* c, int n) {
	QString _ret = QCameraViewfinder::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraViewfinder_trUtf82(const char* s, const char* c) {
	QString _ret = QCameraViewfinder::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraViewfinder_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QCameraViewfinder::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QCameraViewfinder_override_virtual_mediaObject(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mediaObject = slot;
	return true;
}

QMediaObject* QCameraViewfinder_virtualbase_mediaObject(const void* self) {
	return ( (const MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_mediaObject();
}

bool QCameraViewfinder_override_virtual_setMediaObject(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setMediaObject = slot;
	return true;
}

bool QCameraViewfinder_virtualbase_setMediaObject(void* self, QMediaObject* object) {
	return ( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_setMediaObject(object);
}

bool QCameraViewfinder_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QCameraViewfinder_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_sizeHint();
}

bool QCameraViewfinder_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QCameraViewfinder_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_event(event);
}

bool QCameraViewfinder_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_showEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_showEvent(event);
}

bool QCameraViewfinder_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_hideEvent(event);
}

bool QCameraViewfinder_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_resizeEvent(event);
}

bool QCameraViewfinder_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_moveEvent(event);
}

bool QCameraViewfinder_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_paintEvent(event);
}

bool QCameraViewfinder_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QCameraViewfinder_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_devType();
}

bool QCameraViewfinder_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QCameraViewfinder_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_setVisible(visible);
}

bool QCameraViewfinder_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QCameraViewfinder_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_minimumSizeHint();
}

bool QCameraViewfinder_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QCameraViewfinder_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_heightForWidth(param1);
}

bool QCameraViewfinder_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QCameraViewfinder_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_hasHeightForWidth();
}

bool QCameraViewfinder_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QCameraViewfinder_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_paintEngine();
}

bool QCameraViewfinder_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_mousePressEvent(event);
}

bool QCameraViewfinder_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QCameraViewfinder_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QCameraViewfinder_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QCameraViewfinder_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_wheelEvent(event);
}

bool QCameraViewfinder_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_keyPressEvent(event);
}

bool QCameraViewfinder_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QCameraViewfinder_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_focusInEvent(event);
}

bool QCameraViewfinder_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_focusOutEvent(event);
}

bool QCameraViewfinder_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_enterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_enterEvent(event);
}

bool QCameraViewfinder_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_leaveEvent(event);
}

bool QCameraViewfinder_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_closeEvent(event);
}

bool QCameraViewfinder_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_contextMenuEvent(event);
}

bool QCameraViewfinder_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_tabletEvent(event);
}

bool QCameraViewfinder_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_actionEvent(event);
}

bool QCameraViewfinder_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QCameraViewfinder_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QCameraViewfinder_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QCameraViewfinder_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_dropEvent(event);
}

bool QCameraViewfinder_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QCameraViewfinder_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QCameraViewfinder_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_changeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_changeEvent(param1);
}

bool QCameraViewfinder_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QCameraViewfinder_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_metric(param1);
}

bool QCameraViewfinder_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QCameraViewfinder_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_initPainter(painter);
}

bool QCameraViewfinder_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QCameraViewfinder_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_redirected(offset);
}

bool QCameraViewfinder_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QCameraViewfinder_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_sharedPainter();
}

bool QCameraViewfinder_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QCameraViewfinder_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QCameraViewfinder_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QCameraViewfinder_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QCameraViewfinder_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QCameraViewfinder_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QCameraViewfinder_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QCameraViewfinder_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_timerEvent(event);
}

bool QCameraViewfinder_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_childEvent(event);
}

bool QCameraViewfinder_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QCameraViewfinder_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_customEvent(event);
}

bool QCameraViewfinder_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QCameraViewfinder_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_connectNotify(signal);
}

bool QCameraViewfinder_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QCameraViewfinder_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQCameraViewfinder*)(self) )->virtualbase_disconnectNotify(signal);
}

void QCameraViewfinder_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QCameraViewfinder_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QCameraViewfinder_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QCameraViewfinder_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QCameraViewfinder_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QCameraViewfinder_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QCameraViewfinder_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QCameraViewfinder_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QCameraViewfinder_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QCameraViewfinder_delete(QCameraViewfinder* self) {
	delete self;
}

