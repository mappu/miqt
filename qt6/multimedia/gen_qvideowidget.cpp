#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
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
#include <QVideoSink>
#include <QVideoWidget>
#include <QWheelEvent>
#include <QWidget>
#include <qvideowidget.h>
#include "gen_qvideowidget.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QVideoWidget_fullScreenChanged(intptr_t, bool);
void miqt_exec_callback_QVideoWidget_aspectRatioModeChanged(intptr_t, int);
QSize* miqt_exec_callback_QVideoWidget_sizeHint(const QVideoWidget*, intptr_t);
bool miqt_exec_callback_QVideoWidget_event(QVideoWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QVideoWidget_showEvent(QVideoWidget*, intptr_t, QShowEvent*);
void miqt_exec_callback_QVideoWidget_hideEvent(QVideoWidget*, intptr_t, QHideEvent*);
void miqt_exec_callback_QVideoWidget_resizeEvent(QVideoWidget*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QVideoWidget_moveEvent(QVideoWidget*, intptr_t, QMoveEvent*);
int miqt_exec_callback_QVideoWidget_devType(const QVideoWidget*, intptr_t);
void miqt_exec_callback_QVideoWidget_setVisible(QVideoWidget*, intptr_t, bool);
QSize* miqt_exec_callback_QVideoWidget_minimumSizeHint(const QVideoWidget*, intptr_t);
int miqt_exec_callback_QVideoWidget_heightForWidth(const QVideoWidget*, intptr_t, int);
bool miqt_exec_callback_QVideoWidget_hasHeightForWidth(const QVideoWidget*, intptr_t);
QPaintEngine* miqt_exec_callback_QVideoWidget_paintEngine(const QVideoWidget*, intptr_t);
void miqt_exec_callback_QVideoWidget_mousePressEvent(QVideoWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QVideoWidget_mouseReleaseEvent(QVideoWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QVideoWidget_mouseDoubleClickEvent(QVideoWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QVideoWidget_mouseMoveEvent(QVideoWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QVideoWidget_wheelEvent(QVideoWidget*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QVideoWidget_keyPressEvent(QVideoWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QVideoWidget_keyReleaseEvent(QVideoWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QVideoWidget_focusInEvent(QVideoWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QVideoWidget_focusOutEvent(QVideoWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QVideoWidget_enterEvent(QVideoWidget*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QVideoWidget_leaveEvent(QVideoWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QVideoWidget_paintEvent(QVideoWidget*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QVideoWidget_closeEvent(QVideoWidget*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QVideoWidget_contextMenuEvent(QVideoWidget*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QVideoWidget_tabletEvent(QVideoWidget*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QVideoWidget_actionEvent(QVideoWidget*, intptr_t, QActionEvent*);
void miqt_exec_callback_QVideoWidget_dragEnterEvent(QVideoWidget*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QVideoWidget_dragMoveEvent(QVideoWidget*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QVideoWidget_dragLeaveEvent(QVideoWidget*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QVideoWidget_dropEvent(QVideoWidget*, intptr_t, QDropEvent*);
bool miqt_exec_callback_QVideoWidget_nativeEvent(QVideoWidget*, intptr_t, struct miqt_string, void*, intptr_t*);
void miqt_exec_callback_QVideoWidget_changeEvent(QVideoWidget*, intptr_t, QEvent*);
int miqt_exec_callback_QVideoWidget_metric(const QVideoWidget*, intptr_t, int);
void miqt_exec_callback_QVideoWidget_initPainter(const QVideoWidget*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QVideoWidget_redirected(const QVideoWidget*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QVideoWidget_sharedPainter(const QVideoWidget*, intptr_t);
void miqt_exec_callback_QVideoWidget_inputMethodEvent(QVideoWidget*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QVideoWidget_inputMethodQuery(const QVideoWidget*, intptr_t, int);
bool miqt_exec_callback_QVideoWidget_focusNextPrevChild(QVideoWidget*, intptr_t, bool);
bool miqt_exec_callback_QVideoWidget_eventFilter(QVideoWidget*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QVideoWidget_timerEvent(QVideoWidget*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QVideoWidget_childEvent(QVideoWidget*, intptr_t, QChildEvent*);
void miqt_exec_callback_QVideoWidget_customEvent(QVideoWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QVideoWidget_connectNotify(QVideoWidget*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QVideoWidget_disconnectNotify(QVideoWidget*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQVideoWidget final : public QVideoWidget {
public:

	MiqtVirtualQVideoWidget(QWidget* parent): QVideoWidget(parent) {};
	MiqtVirtualQVideoWidget(): QVideoWidget() {};

	virtual ~MiqtVirtualQVideoWidget() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QVideoWidget::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QVideoWidget_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QVideoWidget::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QVideoWidget::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QVideoWidget_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QVideoWidget::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QVideoWidget::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* event) {

		QVideoWidget::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QVideoWidget::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QVideoWidget::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QVideoWidget::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* event) {

		QVideoWidget::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QVideoWidget::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QVideoWidget::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QVideoWidget::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QVideoWidget_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QVideoWidget::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QVideoWidget::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QVideoWidget_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QVideoWidget::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QVideoWidget::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QVideoWidget_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QVideoWidget::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QVideoWidget::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QVideoWidget_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QVideoWidget::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QVideoWidget::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QVideoWidget_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QVideoWidget::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QVideoWidget::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QVideoWidget_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QVideoWidget::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QVideoWidget::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* event) {

		QVideoWidget::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QVideoWidget::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* event) {

		QVideoWidget::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QVideoWidget::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QVideoWidget::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QVideoWidget::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* event) {

		QVideoWidget::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QVideoWidget::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* event) {

		QVideoWidget::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QVideoWidget::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* event) {

		QVideoWidget::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QVideoWidget::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QVideoWidget::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QVideoWidget::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QVideoWidget::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QVideoWidget::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QVideoWidget::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__enterEvent == 0) {
			QVideoWidget::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEnterEvent* event) {

		QVideoWidget::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QVideoWidget::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QVideoWidget::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QVideoWidget::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* event) {

		QVideoWidget::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QVideoWidget::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QVideoWidget::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QVideoWidget::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* event) {

		QVideoWidget::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QVideoWidget::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QVideoWidget::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QVideoWidget::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QVideoWidget::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QVideoWidget::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QVideoWidget::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QVideoWidget::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QVideoWidget::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QVideoWidget::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QVideoWidget::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QVideoWidget::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QVideoWidget::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__nativeEvent == 0) {
			return QVideoWidget::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QVideoWidget_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QVideoWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QVideoWidget::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QVideoWidget_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* param1) {

		QVideoWidget::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QVideoWidget::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QVideoWidget_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QVideoWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QVideoWidget::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QVideoWidget_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QVideoWidget::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QVideoWidget::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QVideoWidget_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QVideoWidget::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QVideoWidget::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QVideoWidget_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QVideoWidget::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QVideoWidget::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QVideoWidget_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QVideoWidget::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QVideoWidget::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QVideoWidget_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QVideoWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QVideoWidget::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QVideoWidget_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QVideoWidget::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QVideoWidget::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QVideoWidget_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QVideoWidget::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QVideoWidget::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QVideoWidget::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QVideoWidget::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QVideoWidget::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QVideoWidget::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QVideoWidget::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QVideoWidget::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QVideoWidget_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QVideoWidget::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QVideoWidget::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QVideoWidget_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QVideoWidget::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QVideoWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QVideoWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QVideoWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QVideoWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QVideoWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QVideoWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QVideoWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QVideoWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QVideoWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QVideoWidget* QVideoWidget_new(QWidget* parent) {
	return new MiqtVirtualQVideoWidget(parent);
}

QVideoWidget* QVideoWidget_new2() {
	return new MiqtVirtualQVideoWidget();
}

void QVideoWidget_virtbase(QVideoWidget* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QVideoWidget_metaObject(const QVideoWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void* QVideoWidget_metacast(QVideoWidget* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QVideoWidget_tr(const char* s) {
	QString _ret = QVideoWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QVideoSink* QVideoWidget_videoSink(const QVideoWidget* self) {
	return self->videoSink();
}

int QVideoWidget_aspectRatioMode(const QVideoWidget* self) {
	Qt::AspectRatioMode _ret = self->aspectRatioMode();
	return static_cast<int>(_ret);
}

QSize* QVideoWidget_sizeHint(const QVideoWidget* self) {
	return new QSize(self->sizeHint());
}

void QVideoWidget_setFullScreen(QVideoWidget* self, bool fullScreen) {
	self->setFullScreen(fullScreen);
}

void QVideoWidget_setAspectRatioMode(QVideoWidget* self, int mode) {
	self->setAspectRatioMode(static_cast<Qt::AspectRatioMode>(mode));
}

void QVideoWidget_fullScreenChanged(QVideoWidget* self, bool fullScreen) {
	self->fullScreenChanged(fullScreen);
}

void QVideoWidget_connect_fullScreenChanged(QVideoWidget* self, intptr_t slot) {
	MiqtVirtualQVideoWidget::connect(self, static_cast<void (QVideoWidget::*)(bool)>(&QVideoWidget::fullScreenChanged), self, [=](bool fullScreen) {
		bool sigval1 = fullScreen;
		miqt_exec_callback_QVideoWidget_fullScreenChanged(slot, sigval1);
	});
}

void QVideoWidget_aspectRatioModeChanged(QVideoWidget* self, int mode) {
	self->aspectRatioModeChanged(static_cast<Qt::AspectRatioMode>(mode));
}

void QVideoWidget_connect_aspectRatioModeChanged(QVideoWidget* self, intptr_t slot) {
	MiqtVirtualQVideoWidget::connect(self, static_cast<void (QVideoWidget::*)(Qt::AspectRatioMode)>(&QVideoWidget::aspectRatioModeChanged), self, [=](Qt::AspectRatioMode mode) {
		Qt::AspectRatioMode mode_ret = mode;
		int sigval1 = static_cast<int>(mode_ret);
		miqt_exec_callback_QVideoWidget_aspectRatioModeChanged(slot, sigval1);
	});
}

struct miqt_string QVideoWidget_tr2(const char* s, const char* c) {
	QString _ret = QVideoWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoWidget_tr3(const char* s, const char* c, int n) {
	QString _ret = QVideoWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QVideoWidget_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QVideoWidget_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQVideoWidget*)(self) )->virtualbase_sizeHint();
}

bool QVideoWidget_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QVideoWidget_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_event(event);
}

bool QVideoWidget_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_showEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_showEvent(event);
}

bool QVideoWidget_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_hideEvent(event);
}

bool QVideoWidget_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_resizeEvent(event);
}

bool QVideoWidget_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_moveEvent(event);
}

bool QVideoWidget_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QVideoWidget_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQVideoWidget*)(self) )->virtualbase_devType();
}

bool QVideoWidget_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QVideoWidget_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_setVisible(visible);
}

bool QVideoWidget_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QVideoWidget_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQVideoWidget*)(self) )->virtualbase_minimumSizeHint();
}

bool QVideoWidget_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QVideoWidget_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQVideoWidget*)(self) )->virtualbase_heightForWidth(param1);
}

bool QVideoWidget_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QVideoWidget_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQVideoWidget*)(self) )->virtualbase_hasHeightForWidth();
}

bool QVideoWidget_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QVideoWidget_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQVideoWidget*)(self) )->virtualbase_paintEngine();
}

bool QVideoWidget_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_mousePressEvent(event);
}

bool QVideoWidget_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QVideoWidget_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QVideoWidget_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QVideoWidget_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_wheelEvent(event);
}

bool QVideoWidget_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_keyPressEvent(event);
}

bool QVideoWidget_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QVideoWidget_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_focusInEvent(event);
}

bool QVideoWidget_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_focusOutEvent(event);
}

bool QVideoWidget_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_enterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_enterEvent(event);
}

bool QVideoWidget_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_leaveEvent(event);
}

bool QVideoWidget_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_paintEvent(event);
}

bool QVideoWidget_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_closeEvent(event);
}

bool QVideoWidget_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_contextMenuEvent(event);
}

bool QVideoWidget_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_tabletEvent(event);
}

bool QVideoWidget_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_actionEvent(event);
}

bool QVideoWidget_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QVideoWidget_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QVideoWidget_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QVideoWidget_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_dropEvent(event);
}

bool QVideoWidget_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QVideoWidget_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QVideoWidget_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_changeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_changeEvent(param1);
}

bool QVideoWidget_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QVideoWidget_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQVideoWidget*)(self) )->virtualbase_metric(param1);
}

bool QVideoWidget_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QVideoWidget_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQVideoWidget*)(self) )->virtualbase_initPainter(painter);
}

bool QVideoWidget_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QVideoWidget_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQVideoWidget*)(self) )->virtualbase_redirected(offset);
}

bool QVideoWidget_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QVideoWidget_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQVideoWidget*)(self) )->virtualbase_sharedPainter();
}

bool QVideoWidget_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QVideoWidget_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QVideoWidget_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQVideoWidget*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QVideoWidget_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QVideoWidget_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QVideoWidget_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QVideoWidget_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QVideoWidget_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_timerEvent(event);
}

bool QVideoWidget_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_childEvent(event);
}

bool QVideoWidget_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QVideoWidget_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_customEvent(event);
}

bool QVideoWidget_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QVideoWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_connectNotify(signal);
}

bool QVideoWidget_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QVideoWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_disconnectNotify(signal);
}

void QVideoWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QVideoWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QVideoWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QVideoWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QVideoWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QVideoWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QVideoWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QVideoWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QVideoWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QVideoWidget_delete(QVideoWidget* self) {
	delete self;
}

