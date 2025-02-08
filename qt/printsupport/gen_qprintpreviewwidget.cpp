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
#include <QPrintPreviewWidget>
#include <QPrinter>
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
#include <qprintpreviewwidget.h>
#include "gen_qprintpreviewwidget.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QPrintPreviewWidget_paintRequested(intptr_t, QPrinter*);
void miqt_exec_callback_QPrintPreviewWidget_previewChanged(intptr_t);
void miqt_exec_callback_QPrintPreviewWidget_setVisible(QPrintPreviewWidget*, intptr_t, bool);
int miqt_exec_callback_QPrintPreviewWidget_devType(const QPrintPreviewWidget*, intptr_t);
QSize* miqt_exec_callback_QPrintPreviewWidget_sizeHint(const QPrintPreviewWidget*, intptr_t);
QSize* miqt_exec_callback_QPrintPreviewWidget_minimumSizeHint(const QPrintPreviewWidget*, intptr_t);
int miqt_exec_callback_QPrintPreviewWidget_heightForWidth(const QPrintPreviewWidget*, intptr_t, int);
bool miqt_exec_callback_QPrintPreviewWidget_hasHeightForWidth(const QPrintPreviewWidget*, intptr_t);
QPaintEngine* miqt_exec_callback_QPrintPreviewWidget_paintEngine(const QPrintPreviewWidget*, intptr_t);
bool miqt_exec_callback_QPrintPreviewWidget_event(QPrintPreviewWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QPrintPreviewWidget_mousePressEvent(QPrintPreviewWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPrintPreviewWidget_mouseReleaseEvent(QPrintPreviewWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPrintPreviewWidget_mouseDoubleClickEvent(QPrintPreviewWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPrintPreviewWidget_mouseMoveEvent(QPrintPreviewWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPrintPreviewWidget_wheelEvent(QPrintPreviewWidget*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QPrintPreviewWidget_keyPressEvent(QPrintPreviewWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QPrintPreviewWidget_keyReleaseEvent(QPrintPreviewWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QPrintPreviewWidget_focusInEvent(QPrintPreviewWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QPrintPreviewWidget_focusOutEvent(QPrintPreviewWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QPrintPreviewWidget_enterEvent(QPrintPreviewWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QPrintPreviewWidget_leaveEvent(QPrintPreviewWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QPrintPreviewWidget_paintEvent(QPrintPreviewWidget*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QPrintPreviewWidget_moveEvent(QPrintPreviewWidget*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QPrintPreviewWidget_resizeEvent(QPrintPreviewWidget*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QPrintPreviewWidget_closeEvent(QPrintPreviewWidget*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QPrintPreviewWidget_contextMenuEvent(QPrintPreviewWidget*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QPrintPreviewWidget_tabletEvent(QPrintPreviewWidget*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QPrintPreviewWidget_actionEvent(QPrintPreviewWidget*, intptr_t, QActionEvent*);
void miqt_exec_callback_QPrintPreviewWidget_dragEnterEvent(QPrintPreviewWidget*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QPrintPreviewWidget_dragMoveEvent(QPrintPreviewWidget*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QPrintPreviewWidget_dragLeaveEvent(QPrintPreviewWidget*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QPrintPreviewWidget_dropEvent(QPrintPreviewWidget*, intptr_t, QDropEvent*);
void miqt_exec_callback_QPrintPreviewWidget_showEvent(QPrintPreviewWidget*, intptr_t, QShowEvent*);
void miqt_exec_callback_QPrintPreviewWidget_hideEvent(QPrintPreviewWidget*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QPrintPreviewWidget_nativeEvent(QPrintPreviewWidget*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QPrintPreviewWidget_changeEvent(QPrintPreviewWidget*, intptr_t, QEvent*);
int miqt_exec_callback_QPrintPreviewWidget_metric(const QPrintPreviewWidget*, intptr_t, int);
void miqt_exec_callback_QPrintPreviewWidget_initPainter(const QPrintPreviewWidget*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QPrintPreviewWidget_redirected(const QPrintPreviewWidget*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QPrintPreviewWidget_sharedPainter(const QPrintPreviewWidget*, intptr_t);
void miqt_exec_callback_QPrintPreviewWidget_inputMethodEvent(QPrintPreviewWidget*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QPrintPreviewWidget_inputMethodQuery(const QPrintPreviewWidget*, intptr_t, int);
bool miqt_exec_callback_QPrintPreviewWidget_focusNextPrevChild(QPrintPreviewWidget*, intptr_t, bool);
bool miqt_exec_callback_QPrintPreviewWidget_eventFilter(QPrintPreviewWidget*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QPrintPreviewWidget_timerEvent(QPrintPreviewWidget*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QPrintPreviewWidget_childEvent(QPrintPreviewWidget*, intptr_t, QChildEvent*);
void miqt_exec_callback_QPrintPreviewWidget_customEvent(QPrintPreviewWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QPrintPreviewWidget_connectNotify(QPrintPreviewWidget*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QPrintPreviewWidget_disconnectNotify(QPrintPreviewWidget*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQPrintPreviewWidget final : public QPrintPreviewWidget {
public:

	MiqtVirtualQPrintPreviewWidget(QWidget* parent): QPrintPreviewWidget(parent) {};
	MiqtVirtualQPrintPreviewWidget(QPrinter* printer): QPrintPreviewWidget(printer) {};
	MiqtVirtualQPrintPreviewWidget(): QPrintPreviewWidget() {};
	MiqtVirtualQPrintPreviewWidget(QPrinter* printer, QWidget* parent): QPrintPreviewWidget(printer, parent) {};
	MiqtVirtualQPrintPreviewWidget(QPrinter* printer, QWidget* parent, Qt::WindowFlags flags): QPrintPreviewWidget(printer, parent, flags) {};
	MiqtVirtualQPrintPreviewWidget(QWidget* parent, Qt::WindowFlags flags): QPrintPreviewWidget(parent, flags) {};

	virtual ~MiqtVirtualQPrintPreviewWidget() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QPrintPreviewWidget::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QPrintPreviewWidget_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QPrintPreviewWidget::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QPrintPreviewWidget::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QPrintPreviewWidget_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QPrintPreviewWidget::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QPrintPreviewWidget::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QPrintPreviewWidget_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QPrintPreviewWidget::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QPrintPreviewWidget::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QPrintPreviewWidget_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QPrintPreviewWidget::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QPrintPreviewWidget::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QPrintPreviewWidget_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QPrintPreviewWidget::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QPrintPreviewWidget::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QPrintPreviewWidget_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QPrintPreviewWidget::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QPrintPreviewWidget::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QPrintPreviewWidget_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QPrintPreviewWidget::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QPrintPreviewWidget::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QPrintPreviewWidget_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QPrintPreviewWidget::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QPrintPreviewWidget::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* event) {

		QPrintPreviewWidget::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QPrintPreviewWidget::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* event) {

		QPrintPreviewWidget::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QPrintPreviewWidget::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QPrintPreviewWidget::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QPrintPreviewWidget::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* event) {

		QPrintPreviewWidget::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QPrintPreviewWidget::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* event) {

		QPrintPreviewWidget::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QPrintPreviewWidget::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* event) {

		QPrintPreviewWidget::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QPrintPreviewWidget::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QPrintPreviewWidget::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QPrintPreviewWidget::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QPrintPreviewWidget::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QPrintPreviewWidget::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QPrintPreviewWidget::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QPrintPreviewWidget::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEvent* event) {

		QPrintPreviewWidget::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QPrintPreviewWidget::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QPrintPreviewWidget::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QPrintPreviewWidget::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* event) {

		QPrintPreviewWidget::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QPrintPreviewWidget::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QPrintPreviewWidget::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QPrintPreviewWidget::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* event) {

		QPrintPreviewWidget::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QPrintPreviewWidget::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QPrintPreviewWidget::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QPrintPreviewWidget::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* event) {

		QPrintPreviewWidget::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QPrintPreviewWidget::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QPrintPreviewWidget::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QPrintPreviewWidget::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QPrintPreviewWidget::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QPrintPreviewWidget::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QPrintPreviewWidget::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QPrintPreviewWidget::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QPrintPreviewWidget::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QPrintPreviewWidget::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QPrintPreviewWidget::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QPrintPreviewWidget::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QPrintPreviewWidget::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QPrintPreviewWidget::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* event) {

		QPrintPreviewWidget::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QPrintPreviewWidget::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QPrintPreviewWidget::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QPrintPreviewWidget::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QPrintPreviewWidget_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QPrintPreviewWidget::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QPrintPreviewWidget::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QPrintPreviewWidget_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* param1) {

		QPrintPreviewWidget::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QPrintPreviewWidget::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QPrintPreviewWidget_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QPrintPreviewWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QPrintPreviewWidget::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QPrintPreviewWidget_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QPrintPreviewWidget::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QPrintPreviewWidget::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QPrintPreviewWidget_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QPrintPreviewWidget::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QPrintPreviewWidget::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QPrintPreviewWidget_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QPrintPreviewWidget::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QPrintPreviewWidget::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QPrintPreviewWidget_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QPrintPreviewWidget::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QPrintPreviewWidget::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QPrintPreviewWidget_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QPrintPreviewWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QPrintPreviewWidget::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QPrintPreviewWidget_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QPrintPreviewWidget::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QPrintPreviewWidget::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QPrintPreviewWidget_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QPrintPreviewWidget::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QPrintPreviewWidget::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QPrintPreviewWidget::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QPrintPreviewWidget::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QPrintPreviewWidget::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QPrintPreviewWidget::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QPrintPreviewWidget::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QPrintPreviewWidget::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPrintPreviewWidget_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QPrintPreviewWidget::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QPrintPreviewWidget::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPrintPreviewWidget_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QPrintPreviewWidget::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QPrintPreviewWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QPrintPreviewWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QPrintPreviewWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QPrintPreviewWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QPrintPreviewWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QPrintPreviewWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QPrintPreviewWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QPrintPreviewWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QPrintPreviewWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QPrintPreviewWidget* QPrintPreviewWidget_new(QWidget* parent) {
	return new MiqtVirtualQPrintPreviewWidget(parent);
}

QPrintPreviewWidget* QPrintPreviewWidget_new2(QPrinter* printer) {
	return new MiqtVirtualQPrintPreviewWidget(printer);
}

QPrintPreviewWidget* QPrintPreviewWidget_new3() {
	return new MiqtVirtualQPrintPreviewWidget();
}

QPrintPreviewWidget* QPrintPreviewWidget_new4(QPrinter* printer, QWidget* parent) {
	return new MiqtVirtualQPrintPreviewWidget(printer, parent);
}

QPrintPreviewWidget* QPrintPreviewWidget_new5(QPrinter* printer, QWidget* parent, int flags) {
	return new MiqtVirtualQPrintPreviewWidget(printer, parent, static_cast<Qt::WindowFlags>(flags));
}

QPrintPreviewWidget* QPrintPreviewWidget_new6(QWidget* parent, int flags) {
	return new MiqtVirtualQPrintPreviewWidget(parent, static_cast<Qt::WindowFlags>(flags));
}

void QPrintPreviewWidget_virtbase(QPrintPreviewWidget* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QPrintPreviewWidget_metaObject(const QPrintPreviewWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPrintPreviewWidget_metacast(QPrintPreviewWidget* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPrintPreviewWidget_tr(const char* s) {
	QString _ret = QPrintPreviewWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPrintPreviewWidget_trUtf8(const char* s) {
	QString _ret = QPrintPreviewWidget::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

double QPrintPreviewWidget_zoomFactor(const QPrintPreviewWidget* self) {
	qreal _ret = self->zoomFactor();
	return static_cast<double>(_ret);
}

int QPrintPreviewWidget_orientation(const QPrintPreviewWidget* self) {
	QPrinter::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

int QPrintPreviewWidget_viewMode(const QPrintPreviewWidget* self) {
	QPrintPreviewWidget::ViewMode _ret = self->viewMode();
	return static_cast<int>(_ret);
}

int QPrintPreviewWidget_zoomMode(const QPrintPreviewWidget* self) {
	QPrintPreviewWidget::ZoomMode _ret = self->zoomMode();
	return static_cast<int>(_ret);
}

int QPrintPreviewWidget_currentPage(const QPrintPreviewWidget* self) {
	return self->currentPage();
}

int QPrintPreviewWidget_pageCount(const QPrintPreviewWidget* self) {
	return self->pageCount();
}

void QPrintPreviewWidget_setVisible(QPrintPreviewWidget* self, bool visible) {
	self->setVisible(visible);
}

void QPrintPreviewWidget_print(QPrintPreviewWidget* self) {
	self->print();
}

void QPrintPreviewWidget_zoomIn(QPrintPreviewWidget* self) {
	self->zoomIn();
}

void QPrintPreviewWidget_zoomOut(QPrintPreviewWidget* self) {
	self->zoomOut();
}

void QPrintPreviewWidget_setZoomFactor(QPrintPreviewWidget* self, double zoomFactor) {
	self->setZoomFactor(static_cast<qreal>(zoomFactor));
}

void QPrintPreviewWidget_setOrientation(QPrintPreviewWidget* self, int orientation) {
	self->setOrientation(static_cast<QPrinter::Orientation>(orientation));
}

void QPrintPreviewWidget_setViewMode(QPrintPreviewWidget* self, int viewMode) {
	self->setViewMode(static_cast<QPrintPreviewWidget::ViewMode>(viewMode));
}

void QPrintPreviewWidget_setZoomMode(QPrintPreviewWidget* self, int zoomMode) {
	self->setZoomMode(static_cast<QPrintPreviewWidget::ZoomMode>(zoomMode));
}

void QPrintPreviewWidget_setCurrentPage(QPrintPreviewWidget* self, int pageNumber) {
	self->setCurrentPage(static_cast<int>(pageNumber));
}

void QPrintPreviewWidget_fitToWidth(QPrintPreviewWidget* self) {
	self->fitToWidth();
}

void QPrintPreviewWidget_fitInView(QPrintPreviewWidget* self) {
	self->fitInView();
}

void QPrintPreviewWidget_setLandscapeOrientation(QPrintPreviewWidget* self) {
	self->setLandscapeOrientation();
}

void QPrintPreviewWidget_setPortraitOrientation(QPrintPreviewWidget* self) {
	self->setPortraitOrientation();
}

void QPrintPreviewWidget_setSinglePageViewMode(QPrintPreviewWidget* self) {
	self->setSinglePageViewMode();
}

void QPrintPreviewWidget_setFacingPagesViewMode(QPrintPreviewWidget* self) {
	self->setFacingPagesViewMode();
}

void QPrintPreviewWidget_setAllPagesViewMode(QPrintPreviewWidget* self) {
	self->setAllPagesViewMode();
}

void QPrintPreviewWidget_updatePreview(QPrintPreviewWidget* self) {
	self->updatePreview();
}

void QPrintPreviewWidget_paintRequested(QPrintPreviewWidget* self, QPrinter* printer) {
	self->paintRequested(printer);
}

void QPrintPreviewWidget_connect_paintRequested(QPrintPreviewWidget* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget::connect(self, static_cast<void (QPrintPreviewWidget::*)(QPrinter*)>(&QPrintPreviewWidget::paintRequested), self, [=](QPrinter* printer) {
		QPrinter* sigval1 = printer;
		miqt_exec_callback_QPrintPreviewWidget_paintRequested(slot, sigval1);
	});
}

void QPrintPreviewWidget_previewChanged(QPrintPreviewWidget* self) {
	self->previewChanged();
}

void QPrintPreviewWidget_connect_previewChanged(QPrintPreviewWidget* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget::connect(self, static_cast<void (QPrintPreviewWidget::*)()>(&QPrintPreviewWidget::previewChanged), self, [=]() {
		miqt_exec_callback_QPrintPreviewWidget_previewChanged(slot);
	});
}

struct miqt_string QPrintPreviewWidget_tr2(const char* s, const char* c) {
	QString _ret = QPrintPreviewWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPrintPreviewWidget_tr3(const char* s, const char* c, int n) {
	QString _ret = QPrintPreviewWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPrintPreviewWidget_trUtf82(const char* s, const char* c) {
	QString _ret = QPrintPreviewWidget::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPrintPreviewWidget_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QPrintPreviewWidget::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPrintPreviewWidget_zoomIn1(QPrintPreviewWidget* self, double zoom) {
	self->zoomIn(static_cast<qreal>(zoom));
}

void QPrintPreviewWidget_zoomOut1(QPrintPreviewWidget* self, double zoom) {
	self->zoomOut(static_cast<qreal>(zoom));
}

bool QPrintPreviewWidget_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QPrintPreviewWidget_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_setVisible(visible);
}

bool QPrintPreviewWidget_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QPrintPreviewWidget_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_devType();
}

bool QPrintPreviewWidget_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QPrintPreviewWidget_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_sizeHint();
}

bool QPrintPreviewWidget_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QPrintPreviewWidget_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_minimumSizeHint();
}

bool QPrintPreviewWidget_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QPrintPreviewWidget_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_heightForWidth(param1);
}

bool QPrintPreviewWidget_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QPrintPreviewWidget_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_hasHeightForWidth();
}

bool QPrintPreviewWidget_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QPrintPreviewWidget_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_paintEngine();
}

bool QPrintPreviewWidget_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QPrintPreviewWidget_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_event(event);
}

bool QPrintPreviewWidget_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QPrintPreviewWidget_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_mousePressEvent(event);
}

bool QPrintPreviewWidget_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QPrintPreviewWidget_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QPrintPreviewWidget_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QPrintPreviewWidget_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QPrintPreviewWidget_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QPrintPreviewWidget_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QPrintPreviewWidget_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QPrintPreviewWidget_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_wheelEvent(event);
}

bool QPrintPreviewWidget_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QPrintPreviewWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_keyPressEvent(event);
}

bool QPrintPreviewWidget_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QPrintPreviewWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QPrintPreviewWidget_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QPrintPreviewWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_focusInEvent(event);
}

bool QPrintPreviewWidget_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QPrintPreviewWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_focusOutEvent(event);
}

bool QPrintPreviewWidget_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QPrintPreviewWidget_virtualbase_enterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_enterEvent(event);
}

bool QPrintPreviewWidget_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QPrintPreviewWidget_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_leaveEvent(event);
}

bool QPrintPreviewWidget_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QPrintPreviewWidget_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_paintEvent(event);
}

bool QPrintPreviewWidget_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QPrintPreviewWidget_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_moveEvent(event);
}

bool QPrintPreviewWidget_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QPrintPreviewWidget_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_resizeEvent(event);
}

bool QPrintPreviewWidget_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QPrintPreviewWidget_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_closeEvent(event);
}

bool QPrintPreviewWidget_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QPrintPreviewWidget_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_contextMenuEvent(event);
}

bool QPrintPreviewWidget_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QPrintPreviewWidget_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_tabletEvent(event);
}

bool QPrintPreviewWidget_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QPrintPreviewWidget_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_actionEvent(event);
}

bool QPrintPreviewWidget_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QPrintPreviewWidget_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QPrintPreviewWidget_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QPrintPreviewWidget_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QPrintPreviewWidget_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QPrintPreviewWidget_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QPrintPreviewWidget_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QPrintPreviewWidget_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_dropEvent(event);
}

bool QPrintPreviewWidget_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QPrintPreviewWidget_virtualbase_showEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_showEvent(event);
}

bool QPrintPreviewWidget_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QPrintPreviewWidget_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_hideEvent(event);
}

bool QPrintPreviewWidget_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QPrintPreviewWidget_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QPrintPreviewWidget_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QPrintPreviewWidget_virtualbase_changeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_changeEvent(param1);
}

bool QPrintPreviewWidget_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QPrintPreviewWidget_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_metric(param1);
}

bool QPrintPreviewWidget_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QPrintPreviewWidget_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_initPainter(painter);
}

bool QPrintPreviewWidget_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QPrintPreviewWidget_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_redirected(offset);
}

bool QPrintPreviewWidget_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QPrintPreviewWidget_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_sharedPainter();
}

bool QPrintPreviewWidget_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QPrintPreviewWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QPrintPreviewWidget_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QPrintPreviewWidget_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QPrintPreviewWidget_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QPrintPreviewWidget_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QPrintPreviewWidget_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QPrintPreviewWidget_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QPrintPreviewWidget_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QPrintPreviewWidget_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_timerEvent(event);
}

bool QPrintPreviewWidget_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QPrintPreviewWidget_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_childEvent(event);
}

bool QPrintPreviewWidget_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QPrintPreviewWidget_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_customEvent(event);
}

bool QPrintPreviewWidget_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QPrintPreviewWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_connectNotify(signal);
}

bool QPrintPreviewWidget_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QPrintPreviewWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_disconnectNotify(signal);
}

void QPrintPreviewWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QPrintPreviewWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QPrintPreviewWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QPrintPreviewWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QPrintPreviewWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QPrintPreviewWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QPrintPreviewWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QPrintPreviewWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QPrintPreviewWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QPrintPreviewWidget_delete(QPrintPreviewWidget* self) {
	delete self;
}

