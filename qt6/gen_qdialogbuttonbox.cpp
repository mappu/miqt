#include <QAbstractButton>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDialogButtonBox>
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
#include <QList>
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
#include <QPushButton>
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
#include <qdialogbuttonbox.h>
#include "gen_qdialogbuttonbox.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QDialogButtonBox_clicked(intptr_t, QAbstractButton*);
void miqt_exec_callback_QDialogButtonBox_accepted(intptr_t);
void miqt_exec_callback_QDialogButtonBox_helpRequested(intptr_t);
void miqt_exec_callback_QDialogButtonBox_rejected(intptr_t);
void miqt_exec_callback_QDialogButtonBox_changeEvent(QDialogButtonBox*, intptr_t, QEvent*);
bool miqt_exec_callback_QDialogButtonBox_event(QDialogButtonBox*, intptr_t, QEvent*);
int miqt_exec_callback_QDialogButtonBox_devType(const QDialogButtonBox*, intptr_t);
void miqt_exec_callback_QDialogButtonBox_setVisible(QDialogButtonBox*, intptr_t, bool);
QSize* miqt_exec_callback_QDialogButtonBox_sizeHint(const QDialogButtonBox*, intptr_t);
QSize* miqt_exec_callback_QDialogButtonBox_minimumSizeHint(const QDialogButtonBox*, intptr_t);
int miqt_exec_callback_QDialogButtonBox_heightForWidth(const QDialogButtonBox*, intptr_t, int);
bool miqt_exec_callback_QDialogButtonBox_hasHeightForWidth(const QDialogButtonBox*, intptr_t);
QPaintEngine* miqt_exec_callback_QDialogButtonBox_paintEngine(const QDialogButtonBox*, intptr_t);
void miqt_exec_callback_QDialogButtonBox_mousePressEvent(QDialogButtonBox*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDialogButtonBox_mouseReleaseEvent(QDialogButtonBox*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDialogButtonBox_mouseDoubleClickEvent(QDialogButtonBox*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDialogButtonBox_mouseMoveEvent(QDialogButtonBox*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDialogButtonBox_wheelEvent(QDialogButtonBox*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QDialogButtonBox_keyPressEvent(QDialogButtonBox*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QDialogButtonBox_keyReleaseEvent(QDialogButtonBox*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QDialogButtonBox_focusInEvent(QDialogButtonBox*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QDialogButtonBox_focusOutEvent(QDialogButtonBox*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QDialogButtonBox_enterEvent(QDialogButtonBox*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QDialogButtonBox_leaveEvent(QDialogButtonBox*, intptr_t, QEvent*);
void miqt_exec_callback_QDialogButtonBox_paintEvent(QDialogButtonBox*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QDialogButtonBox_moveEvent(QDialogButtonBox*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QDialogButtonBox_resizeEvent(QDialogButtonBox*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QDialogButtonBox_closeEvent(QDialogButtonBox*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QDialogButtonBox_contextMenuEvent(QDialogButtonBox*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QDialogButtonBox_tabletEvent(QDialogButtonBox*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QDialogButtonBox_actionEvent(QDialogButtonBox*, intptr_t, QActionEvent*);
void miqt_exec_callback_QDialogButtonBox_dragEnterEvent(QDialogButtonBox*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QDialogButtonBox_dragMoveEvent(QDialogButtonBox*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QDialogButtonBox_dragLeaveEvent(QDialogButtonBox*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QDialogButtonBox_dropEvent(QDialogButtonBox*, intptr_t, QDropEvent*);
void miqt_exec_callback_QDialogButtonBox_showEvent(QDialogButtonBox*, intptr_t, QShowEvent*);
void miqt_exec_callback_QDialogButtonBox_hideEvent(QDialogButtonBox*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QDialogButtonBox_nativeEvent(QDialogButtonBox*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QDialogButtonBox_metric(const QDialogButtonBox*, intptr_t, int);
void miqt_exec_callback_QDialogButtonBox_initPainter(const QDialogButtonBox*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QDialogButtonBox_redirected(const QDialogButtonBox*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QDialogButtonBox_sharedPainter(const QDialogButtonBox*, intptr_t);
void miqt_exec_callback_QDialogButtonBox_inputMethodEvent(QDialogButtonBox*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QDialogButtonBox_inputMethodQuery(const QDialogButtonBox*, intptr_t, int);
bool miqt_exec_callback_QDialogButtonBox_focusNextPrevChild(QDialogButtonBox*, intptr_t, bool);
bool miqt_exec_callback_QDialogButtonBox_eventFilter(QDialogButtonBox*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QDialogButtonBox_timerEvent(QDialogButtonBox*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QDialogButtonBox_childEvent(QDialogButtonBox*, intptr_t, QChildEvent*);
void miqt_exec_callback_QDialogButtonBox_customEvent(QDialogButtonBox*, intptr_t, QEvent*);
void miqt_exec_callback_QDialogButtonBox_connectNotify(QDialogButtonBox*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDialogButtonBox_disconnectNotify(QDialogButtonBox*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQDialogButtonBox final : public QDialogButtonBox {
public:

	MiqtVirtualQDialogButtonBox(QWidget* parent): QDialogButtonBox(parent) {};
	MiqtVirtualQDialogButtonBox(): QDialogButtonBox() {};
	MiqtVirtualQDialogButtonBox(Qt::Orientation orientation): QDialogButtonBox(orientation) {};
	MiqtVirtualQDialogButtonBox(QDialogButtonBox::StandardButtons buttons): QDialogButtonBox(buttons) {};
	MiqtVirtualQDialogButtonBox(QDialogButtonBox::StandardButtons buttons, Qt::Orientation orientation): QDialogButtonBox(buttons, orientation) {};
	MiqtVirtualQDialogButtonBox(Qt::Orientation orientation, QWidget* parent): QDialogButtonBox(orientation, parent) {};
	MiqtVirtualQDialogButtonBox(QDialogButtonBox::StandardButtons buttons, QWidget* parent): QDialogButtonBox(buttons, parent) {};
	MiqtVirtualQDialogButtonBox(QDialogButtonBox::StandardButtons buttons, Qt::Orientation orientation, QWidget* parent): QDialogButtonBox(buttons, orientation, parent) {};

	virtual ~MiqtVirtualQDialogButtonBox() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* event) override {
		if (handle__changeEvent == 0) {
			QDialogButtonBox::changeEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* event) {

		QDialogButtonBox::changeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QDialogButtonBox::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QDialogButtonBox_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QDialogButtonBox::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QDialogButtonBox::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QDialogButtonBox_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QDialogButtonBox::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QDialogButtonBox::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QDialogButtonBox_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QDialogButtonBox::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QDialogButtonBox::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QDialogButtonBox_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QDialogButtonBox::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QDialogButtonBox::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QDialogButtonBox_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QDialogButtonBox::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QDialogButtonBox::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QDialogButtonBox_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QDialogButtonBox::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QDialogButtonBox::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QDialogButtonBox_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QDialogButtonBox::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QDialogButtonBox::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QDialogButtonBox_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QDialogButtonBox::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QDialogButtonBox::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* event) {

		QDialogButtonBox::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QDialogButtonBox::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* event) {

		QDialogButtonBox::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QDialogButtonBox::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QDialogButtonBox::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QDialogButtonBox::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* event) {

		QDialogButtonBox::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QDialogButtonBox::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* event) {

		QDialogButtonBox::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QDialogButtonBox::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* event) {

		QDialogButtonBox::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QDialogButtonBox::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QDialogButtonBox::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QDialogButtonBox::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QDialogButtonBox::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QDialogButtonBox::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QDialogButtonBox::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__enterEvent == 0) {
			QDialogButtonBox::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEnterEvent* event) {

		QDialogButtonBox::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QDialogButtonBox::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QDialogButtonBox::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QDialogButtonBox::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* event) {

		QDialogButtonBox::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QDialogButtonBox::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QDialogButtonBox::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QDialogButtonBox::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* event) {

		QDialogButtonBox::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QDialogButtonBox::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QDialogButtonBox::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QDialogButtonBox::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* event) {

		QDialogButtonBox::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QDialogButtonBox::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QDialogButtonBox::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QDialogButtonBox::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QDialogButtonBox::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QDialogButtonBox::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QDialogButtonBox::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QDialogButtonBox::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QDialogButtonBox::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QDialogButtonBox::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QDialogButtonBox::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QDialogButtonBox::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QDialogButtonBox::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QDialogButtonBox::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* event) {

		QDialogButtonBox::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QDialogButtonBox::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QDialogButtonBox::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__nativeEvent == 0) {
			return QDialogButtonBox::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QDialogButtonBox_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QDialogButtonBox::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QDialogButtonBox::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QDialogButtonBox_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QDialogButtonBox::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QDialogButtonBox::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QDialogButtonBox_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QDialogButtonBox::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QDialogButtonBox::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QDialogButtonBox_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QDialogButtonBox::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QDialogButtonBox::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QDialogButtonBox_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QDialogButtonBox::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QDialogButtonBox::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QDialogButtonBox_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QDialogButtonBox::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QDialogButtonBox::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QDialogButtonBox_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QDialogButtonBox::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QDialogButtonBox::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QDialogButtonBox_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QDialogButtonBox::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QDialogButtonBox::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QDialogButtonBox_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QDialogButtonBox::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QDialogButtonBox::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QDialogButtonBox::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QDialogButtonBox::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QDialogButtonBox::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QDialogButtonBox::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QDialogButtonBox::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QDialogButtonBox::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QDialogButtonBox_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QDialogButtonBox::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QDialogButtonBox::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QDialogButtonBox_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QDialogButtonBox::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QDialogButtonBox_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QDialogButtonBox_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QDialogButtonBox_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QDialogButtonBox_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QDialogButtonBox_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QDialogButtonBox_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QDialogButtonBox_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QDialogButtonBox_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QDialogButtonBox_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QDialogButtonBox* QDialogButtonBox_new(QWidget* parent) {
	return new MiqtVirtualQDialogButtonBox(parent);
}

QDialogButtonBox* QDialogButtonBox_new2() {
	return new MiqtVirtualQDialogButtonBox();
}

QDialogButtonBox* QDialogButtonBox_new3(int orientation) {
	return new MiqtVirtualQDialogButtonBox(static_cast<Qt::Orientation>(orientation));
}

QDialogButtonBox* QDialogButtonBox_new4(int buttons) {
	return new MiqtVirtualQDialogButtonBox(static_cast<QDialogButtonBox::StandardButtons>(buttons));
}

QDialogButtonBox* QDialogButtonBox_new5(int buttons, int orientation) {
	return new MiqtVirtualQDialogButtonBox(static_cast<QDialogButtonBox::StandardButtons>(buttons), static_cast<Qt::Orientation>(orientation));
}

QDialogButtonBox* QDialogButtonBox_new6(int orientation, QWidget* parent) {
	return new MiqtVirtualQDialogButtonBox(static_cast<Qt::Orientation>(orientation), parent);
}

QDialogButtonBox* QDialogButtonBox_new7(int buttons, QWidget* parent) {
	return new MiqtVirtualQDialogButtonBox(static_cast<QDialogButtonBox::StandardButtons>(buttons), parent);
}

QDialogButtonBox* QDialogButtonBox_new8(int buttons, int orientation, QWidget* parent) {
	return new MiqtVirtualQDialogButtonBox(static_cast<QDialogButtonBox::StandardButtons>(buttons), static_cast<Qt::Orientation>(orientation), parent);
}

void QDialogButtonBox_virtbase(QDialogButtonBox* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QDialogButtonBox_metaObject(const QDialogButtonBox* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDialogButtonBox_metacast(QDialogButtonBox* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDialogButtonBox_tr(const char* s) {
	QString _ret = QDialogButtonBox::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDialogButtonBox_setOrientation(QDialogButtonBox* self, int orientation) {
	self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

int QDialogButtonBox_orientation(const QDialogButtonBox* self) {
	Qt::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

void QDialogButtonBox_addButton(QDialogButtonBox* self, QAbstractButton* button, int role) {
	self->addButton(button, static_cast<QDialogButtonBox::ButtonRole>(role));
}

QPushButton* QDialogButtonBox_addButton2(QDialogButtonBox* self, struct miqt_string text, int role) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addButton(text_QString, static_cast<QDialogButtonBox::ButtonRole>(role));
}

QPushButton* QDialogButtonBox_addButtonWithButton(QDialogButtonBox* self, int button) {
	return self->addButton(static_cast<QDialogButtonBox::StandardButton>(button));
}

void QDialogButtonBox_removeButton(QDialogButtonBox* self, QAbstractButton* button) {
	self->removeButton(button);
}

void QDialogButtonBox_clear(QDialogButtonBox* self) {
	self->clear();
}

struct miqt_array /* of QAbstractButton* */  QDialogButtonBox_buttons(const QDialogButtonBox* self) {
	QList<QAbstractButton *> _ret = self->buttons();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAbstractButton** _arr = static_cast<QAbstractButton**>(malloc(sizeof(QAbstractButton*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

int QDialogButtonBox_buttonRole(const QDialogButtonBox* self, QAbstractButton* button) {
	QDialogButtonBox::ButtonRole _ret = self->buttonRole(button);
	return static_cast<int>(_ret);
}

void QDialogButtonBox_setStandardButtons(QDialogButtonBox* self, int buttons) {
	self->setStandardButtons(static_cast<QDialogButtonBox::StandardButtons>(buttons));
}

int QDialogButtonBox_standardButtons(const QDialogButtonBox* self) {
	QDialogButtonBox::StandardButtons _ret = self->standardButtons();
	return static_cast<int>(_ret);
}

int QDialogButtonBox_standardButton(const QDialogButtonBox* self, QAbstractButton* button) {
	QDialogButtonBox::StandardButton _ret = self->standardButton(button);
	return static_cast<int>(_ret);
}

QPushButton* QDialogButtonBox_button(const QDialogButtonBox* self, int which) {
	return self->button(static_cast<QDialogButtonBox::StandardButton>(which));
}

void QDialogButtonBox_setCenterButtons(QDialogButtonBox* self, bool center) {
	self->setCenterButtons(center);
}

bool QDialogButtonBox_centerButtons(const QDialogButtonBox* self) {
	return self->centerButtons();
}

void QDialogButtonBox_clicked(QDialogButtonBox* self, QAbstractButton* button) {
	self->clicked(button);
}

void QDialogButtonBox_connect_clicked(QDialogButtonBox* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox::connect(self, static_cast<void (QDialogButtonBox::*)(QAbstractButton*)>(&QDialogButtonBox::clicked), self, [=](QAbstractButton* button) {
		QAbstractButton* sigval1 = button;
		miqt_exec_callback_QDialogButtonBox_clicked(slot, sigval1);
	});
}

void QDialogButtonBox_accepted(QDialogButtonBox* self) {
	self->accepted();
}

void QDialogButtonBox_connect_accepted(QDialogButtonBox* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox::connect(self, static_cast<void (QDialogButtonBox::*)()>(&QDialogButtonBox::accepted), self, [=]() {
		miqt_exec_callback_QDialogButtonBox_accepted(slot);
	});
}

void QDialogButtonBox_helpRequested(QDialogButtonBox* self) {
	self->helpRequested();
}

void QDialogButtonBox_connect_helpRequested(QDialogButtonBox* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox::connect(self, static_cast<void (QDialogButtonBox::*)()>(&QDialogButtonBox::helpRequested), self, [=]() {
		miqt_exec_callback_QDialogButtonBox_helpRequested(slot);
	});
}

void QDialogButtonBox_rejected(QDialogButtonBox* self) {
	self->rejected();
}

void QDialogButtonBox_connect_rejected(QDialogButtonBox* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox::connect(self, static_cast<void (QDialogButtonBox::*)()>(&QDialogButtonBox::rejected), self, [=]() {
		miqt_exec_callback_QDialogButtonBox_rejected(slot);
	});
}

struct miqt_string QDialogButtonBox_tr2(const char* s, const char* c) {
	QString _ret = QDialogButtonBox::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDialogButtonBox_tr3(const char* s, const char* c, int n) {
	QString _ret = QDialogButtonBox::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDialogButtonBox_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QDialogButtonBox_virtualbase_changeEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_changeEvent(event);
}

bool QDialogButtonBox_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QDialogButtonBox_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_event(event);
}

bool QDialogButtonBox_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QDialogButtonBox_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_devType();
}

bool QDialogButtonBox_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QDialogButtonBox_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_setVisible(visible);
}

bool QDialogButtonBox_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QDialogButtonBox_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_sizeHint();
}

bool QDialogButtonBox_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QDialogButtonBox_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_minimumSizeHint();
}

bool QDialogButtonBox_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QDialogButtonBox_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_heightForWidth(param1);
}

bool QDialogButtonBox_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QDialogButtonBox_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_hasHeightForWidth();
}

bool QDialogButtonBox_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QDialogButtonBox_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_paintEngine();
}

bool QDialogButtonBox_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QDialogButtonBox_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_mousePressEvent(event);
}

bool QDialogButtonBox_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QDialogButtonBox_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QDialogButtonBox_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QDialogButtonBox_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QDialogButtonBox_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QDialogButtonBox_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QDialogButtonBox_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QDialogButtonBox_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_wheelEvent(event);
}

bool QDialogButtonBox_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QDialogButtonBox_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_keyPressEvent(event);
}

bool QDialogButtonBox_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QDialogButtonBox_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QDialogButtonBox_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QDialogButtonBox_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_focusInEvent(event);
}

bool QDialogButtonBox_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QDialogButtonBox_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_focusOutEvent(event);
}

bool QDialogButtonBox_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QDialogButtonBox_virtualbase_enterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_enterEvent(event);
}

bool QDialogButtonBox_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QDialogButtonBox_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_leaveEvent(event);
}

bool QDialogButtonBox_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QDialogButtonBox_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_paintEvent(event);
}

bool QDialogButtonBox_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QDialogButtonBox_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_moveEvent(event);
}

bool QDialogButtonBox_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QDialogButtonBox_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_resizeEvent(event);
}

bool QDialogButtonBox_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QDialogButtonBox_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_closeEvent(event);
}

bool QDialogButtonBox_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QDialogButtonBox_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_contextMenuEvent(event);
}

bool QDialogButtonBox_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QDialogButtonBox_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_tabletEvent(event);
}

bool QDialogButtonBox_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QDialogButtonBox_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_actionEvent(event);
}

bool QDialogButtonBox_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QDialogButtonBox_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QDialogButtonBox_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QDialogButtonBox_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QDialogButtonBox_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QDialogButtonBox_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QDialogButtonBox_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QDialogButtonBox_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_dropEvent(event);
}

bool QDialogButtonBox_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QDialogButtonBox_virtualbase_showEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_showEvent(event);
}

bool QDialogButtonBox_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QDialogButtonBox_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_hideEvent(event);
}

bool QDialogButtonBox_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QDialogButtonBox_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QDialogButtonBox_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QDialogButtonBox_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_metric(param1);
}

bool QDialogButtonBox_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QDialogButtonBox_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_initPainter(painter);
}

bool QDialogButtonBox_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QDialogButtonBox_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_redirected(offset);
}

bool QDialogButtonBox_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QDialogButtonBox_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_sharedPainter();
}

bool QDialogButtonBox_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QDialogButtonBox_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QDialogButtonBox_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QDialogButtonBox_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QDialogButtonBox_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QDialogButtonBox_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QDialogButtonBox_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QDialogButtonBox_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QDialogButtonBox_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QDialogButtonBox_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_timerEvent(event);
}

bool QDialogButtonBox_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QDialogButtonBox_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_childEvent(event);
}

bool QDialogButtonBox_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QDialogButtonBox_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_customEvent(event);
}

bool QDialogButtonBox_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QDialogButtonBox_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_connectNotify(signal);
}

bool QDialogButtonBox_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QDialogButtonBox_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_disconnectNotify(signal);
}

void QDialogButtonBox_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QDialogButtonBox_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QDialogButtonBox_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QDialogButtonBox_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QDialogButtonBox_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QDialogButtonBox_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QDialogButtonBox_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QDialogButtonBox_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QDialogButtonBox_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQDialogButtonBox* self_cast = dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QDialogButtonBox_delete(QDialogButtonBox* self) {
	delete self;
}

