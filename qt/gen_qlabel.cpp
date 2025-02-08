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
#include <QLabel>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QMovie>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPicture>
#include <QPixmap>
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
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qlabel.h>
#include "gen_qlabel.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QLabel_linkActivated(intptr_t, struct miqt_string);
void miqt_exec_callback_QLabel_linkHovered(intptr_t, struct miqt_string);
QSize* miqt_exec_callback_QLabel_sizeHint(const QLabel*, intptr_t);
QSize* miqt_exec_callback_QLabel_minimumSizeHint(const QLabel*, intptr_t);
int miqt_exec_callback_QLabel_heightForWidth(const QLabel*, intptr_t, int);
bool miqt_exec_callback_QLabel_event(QLabel*, intptr_t, QEvent*);
void miqt_exec_callback_QLabel_keyPressEvent(QLabel*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QLabel_paintEvent(QLabel*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QLabel_changeEvent(QLabel*, intptr_t, QEvent*);
void miqt_exec_callback_QLabel_mousePressEvent(QLabel*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QLabel_mouseMoveEvent(QLabel*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QLabel_mouseReleaseEvent(QLabel*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QLabel_contextMenuEvent(QLabel*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QLabel_focusInEvent(QLabel*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QLabel_focusOutEvent(QLabel*, intptr_t, QFocusEvent*);
bool miqt_exec_callback_QLabel_focusNextPrevChild(QLabel*, intptr_t, bool);
int miqt_exec_callback_QLabel_devType(const QLabel*, intptr_t);
void miqt_exec_callback_QLabel_setVisible(QLabel*, intptr_t, bool);
bool miqt_exec_callback_QLabel_hasHeightForWidth(const QLabel*, intptr_t);
QPaintEngine* miqt_exec_callback_QLabel_paintEngine(const QLabel*, intptr_t);
void miqt_exec_callback_QLabel_mouseDoubleClickEvent(QLabel*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QLabel_wheelEvent(QLabel*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QLabel_keyReleaseEvent(QLabel*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QLabel_enterEvent(QLabel*, intptr_t, QEvent*);
void miqt_exec_callback_QLabel_leaveEvent(QLabel*, intptr_t, QEvent*);
void miqt_exec_callback_QLabel_moveEvent(QLabel*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QLabel_resizeEvent(QLabel*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QLabel_closeEvent(QLabel*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QLabel_tabletEvent(QLabel*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QLabel_actionEvent(QLabel*, intptr_t, QActionEvent*);
void miqt_exec_callback_QLabel_dragEnterEvent(QLabel*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QLabel_dragMoveEvent(QLabel*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QLabel_dragLeaveEvent(QLabel*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QLabel_dropEvent(QLabel*, intptr_t, QDropEvent*);
void miqt_exec_callback_QLabel_showEvent(QLabel*, intptr_t, QShowEvent*);
void miqt_exec_callback_QLabel_hideEvent(QLabel*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QLabel_nativeEvent(QLabel*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QLabel_metric(const QLabel*, intptr_t, int);
void miqt_exec_callback_QLabel_initPainter(const QLabel*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QLabel_redirected(const QLabel*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QLabel_sharedPainter(const QLabel*, intptr_t);
void miqt_exec_callback_QLabel_inputMethodEvent(QLabel*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QLabel_inputMethodQuery(const QLabel*, intptr_t, int);
bool miqt_exec_callback_QLabel_eventFilter(QLabel*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QLabel_timerEvent(QLabel*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QLabel_childEvent(QLabel*, intptr_t, QChildEvent*);
void miqt_exec_callback_QLabel_customEvent(QLabel*, intptr_t, QEvent*);
void miqt_exec_callback_QLabel_connectNotify(QLabel*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QLabel_disconnectNotify(QLabel*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQLabel final : public QLabel {
public:

	MiqtVirtualQLabel(QWidget* parent): QLabel(parent) {};
	MiqtVirtualQLabel(): QLabel() {};
	MiqtVirtualQLabel(const QString& text): QLabel(text) {};
	MiqtVirtualQLabel(QWidget* parent, Qt::WindowFlags f): QLabel(parent, f) {};
	MiqtVirtualQLabel(const QString& text, QWidget* parent): QLabel(text, parent) {};
	MiqtVirtualQLabel(const QString& text, QWidget* parent, Qt::WindowFlags f): QLabel(text, parent, f) {};

	virtual ~MiqtVirtualQLabel() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QLabel::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QLabel_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QLabel::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QLabel::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QLabel_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QLabel::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QLabel::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QLabel_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QLabel::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__event == 0) {
			return QLabel::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QLabel_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* e) {

		return QLabel::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* ev) override {
		if (handle__keyPressEvent == 0) {
			QLabel::keyPressEvent(ev);
			return;
		}
		
		QKeyEvent* sigval1 = ev;

		miqt_exec_callback_QLabel_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* ev) {

		QLabel::keyPressEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__paintEvent == 0) {
			QLabel::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QLabel_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* param1) {

		QLabel::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QLabel::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QLabel_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* param1) {

		QLabel::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* ev) override {
		if (handle__mousePressEvent == 0) {
			QLabel::mousePressEvent(ev);
			return;
		}
		
		QMouseEvent* sigval1 = ev;

		miqt_exec_callback_QLabel_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* ev) {

		QLabel::mousePressEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* ev) override {
		if (handle__mouseMoveEvent == 0) {
			QLabel::mouseMoveEvent(ev);
			return;
		}
		
		QMouseEvent* sigval1 = ev;

		miqt_exec_callback_QLabel_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* ev) {

		QLabel::mouseMoveEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* ev) override {
		if (handle__mouseReleaseEvent == 0) {
			QLabel::mouseReleaseEvent(ev);
			return;
		}
		
		QMouseEvent* sigval1 = ev;

		miqt_exec_callback_QLabel_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* ev) {

		QLabel::mouseReleaseEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* ev) override {
		if (handle__contextMenuEvent == 0) {
			QLabel::contextMenuEvent(ev);
			return;
		}
		
		QContextMenuEvent* sigval1 = ev;

		miqt_exec_callback_QLabel_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* ev) {

		QLabel::contextMenuEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* ev) override {
		if (handle__focusInEvent == 0) {
			QLabel::focusInEvent(ev);
			return;
		}
		
		QFocusEvent* sigval1 = ev;

		miqt_exec_callback_QLabel_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* ev) {

		QLabel::focusInEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* ev) override {
		if (handle__focusOutEvent == 0) {
			QLabel::focusOutEvent(ev);
			return;
		}
		
		QFocusEvent* sigval1 = ev;

		miqt_exec_callback_QLabel_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* ev) {

		QLabel::focusOutEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QLabel::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QLabel_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QLabel::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QLabel::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QLabel_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QLabel::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QLabel::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QLabel_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QLabel::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QLabel::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QLabel_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QLabel::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QLabel::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QLabel_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QLabel::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QLabel::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QLabel_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QLabel::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QLabel::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QLabel_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* event) {

		QLabel::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QLabel::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QLabel_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QLabel::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QLabel::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QLabel_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEvent* event) {

		QLabel::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QLabel::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QLabel_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QLabel::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QLabel::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QLabel_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QLabel::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QLabel::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QLabel_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* event) {

		QLabel::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QLabel::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QLabel_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QLabel::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QLabel::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QLabel_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QLabel::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QLabel::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QLabel_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QLabel::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QLabel::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QLabel_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QLabel::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QLabel::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QLabel_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QLabel::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QLabel::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QLabel_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QLabel::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QLabel::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QLabel_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QLabel::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QLabel::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QLabel_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* event) {

		QLabel::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QLabel::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QLabel_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QLabel::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QLabel::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QLabel_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QLabel::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QLabel::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QLabel_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QLabel::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QLabel::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QLabel_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QLabel::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QLabel::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QLabel_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QLabel::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QLabel::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QLabel_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QLabel::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QLabel::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QLabel_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QLabel::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QLabel::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QLabel_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QLabel::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QLabel::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QLabel_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QLabel::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QLabel::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QLabel_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QLabel::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QLabel::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QLabel_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QLabel::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QLabel::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QLabel_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QLabel::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QLabel::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QLabel_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QLabel::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QLabel::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QLabel_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QLabel::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QLabel_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
	friend void QLabel_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option);
	friend void QLabel_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QLabel_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QLabel_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QLabel_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QLabel_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QLabel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QLabel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QLabel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QLabel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QLabel* QLabel_new(QWidget* parent) {
	return new MiqtVirtualQLabel(parent);
}

QLabel* QLabel_new2() {
	return new MiqtVirtualQLabel();
}

QLabel* QLabel_new3(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQLabel(text_QString);
}

QLabel* QLabel_new4(QWidget* parent, int f) {
	return new MiqtVirtualQLabel(parent, static_cast<Qt::WindowFlags>(f));
}

QLabel* QLabel_new5(struct miqt_string text, QWidget* parent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQLabel(text_QString, parent);
}

QLabel* QLabel_new6(struct miqt_string text, QWidget* parent, int f) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQLabel(text_QString, parent, static_cast<Qt::WindowFlags>(f));
}

void QLabel_virtbase(QLabel* src, QFrame** outptr_QFrame) {
	*outptr_QFrame = static_cast<QFrame*>(src);
}

QMetaObject* QLabel_metaObject(const QLabel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QLabel_metacast(QLabel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QLabel_tr(const char* s) {
	QString _ret = QLabel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLabel_trUtf8(const char* s) {
	QString _ret = QLabel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLabel_text(const QLabel* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QPixmap* QLabel_pixmap(const QLabel* self) {
	return (QPixmap*) self->pixmap();
}

QPixmap* QLabel_pixmapWithQtReturnByValueConstant(const QLabel* self, int param1) {
	return new QPixmap(self->pixmap(static_cast<Qt::ReturnByValueConstant>(param1)));
}

QPicture* QLabel_picture(const QLabel* self) {
	return (QPicture*) self->picture();
}

QPicture* QLabel_pictureWithQtReturnByValueConstant(const QLabel* self, int param1) {
	return new QPicture(self->picture(static_cast<Qt::ReturnByValueConstant>(param1)));
}

QMovie* QLabel_movie(const QLabel* self) {
	return self->movie();
}

int QLabel_textFormat(const QLabel* self) {
	Qt::TextFormat _ret = self->textFormat();
	return static_cast<int>(_ret);
}

void QLabel_setTextFormat(QLabel* self, int textFormat) {
	self->setTextFormat(static_cast<Qt::TextFormat>(textFormat));
}

int QLabel_alignment(const QLabel* self) {
	Qt::Alignment _ret = self->alignment();
	return static_cast<int>(_ret);
}

void QLabel_setAlignment(QLabel* self, int alignment) {
	self->setAlignment(static_cast<Qt::Alignment>(alignment));
}

void QLabel_setWordWrap(QLabel* self, bool on) {
	self->setWordWrap(on);
}

bool QLabel_wordWrap(const QLabel* self) {
	return self->wordWrap();
}

int QLabel_indent(const QLabel* self) {
	return self->indent();
}

void QLabel_setIndent(QLabel* self, int indent) {
	self->setIndent(static_cast<int>(indent));
}

int QLabel_margin(const QLabel* self) {
	return self->margin();
}

void QLabel_setMargin(QLabel* self, int margin) {
	self->setMargin(static_cast<int>(margin));
}

bool QLabel_hasScaledContents(const QLabel* self) {
	return self->hasScaledContents();
}

void QLabel_setScaledContents(QLabel* self, bool scaledContents) {
	self->setScaledContents(scaledContents);
}

QSize* QLabel_sizeHint(const QLabel* self) {
	return new QSize(self->sizeHint());
}

QSize* QLabel_minimumSizeHint(const QLabel* self) {
	return new QSize(self->minimumSizeHint());
}

void QLabel_setBuddy(QLabel* self, QWidget* buddy) {
	self->setBuddy(buddy);
}

QWidget* QLabel_buddy(const QLabel* self) {
	return self->buddy();
}

int QLabel_heightForWidth(const QLabel* self, int param1) {
	return self->heightForWidth(static_cast<int>(param1));
}

bool QLabel_openExternalLinks(const QLabel* self) {
	return self->openExternalLinks();
}

void QLabel_setOpenExternalLinks(QLabel* self, bool open) {
	self->setOpenExternalLinks(open);
}

void QLabel_setTextInteractionFlags(QLabel* self, int flags) {
	self->setTextInteractionFlags(static_cast<Qt::TextInteractionFlags>(flags));
}

int QLabel_textInteractionFlags(const QLabel* self) {
	Qt::TextInteractionFlags _ret = self->textInteractionFlags();
	return static_cast<int>(_ret);
}

void QLabel_setSelection(QLabel* self, int param1, int param2) {
	self->setSelection(static_cast<int>(param1), static_cast<int>(param2));
}

bool QLabel_hasSelectedText(const QLabel* self) {
	return self->hasSelectedText();
}

struct miqt_string QLabel_selectedText(const QLabel* self) {
	QString _ret = self->selectedText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QLabel_selectionStart(const QLabel* self) {
	return self->selectionStart();
}

void QLabel_setText(QLabel* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(text_QString);
}

void QLabel_setPixmap(QLabel* self, QPixmap* pixmap) {
	self->setPixmap(*pixmap);
}

void QLabel_setPicture(QLabel* self, QPicture* picture) {
	self->setPicture(*picture);
}

void QLabel_setMovie(QLabel* self, QMovie* movie) {
	self->setMovie(movie);
}

void QLabel_setNum(QLabel* self, int num) {
	self->setNum(static_cast<int>(num));
}

void QLabel_setNumWithNum(QLabel* self, double num) {
	self->setNum(static_cast<double>(num));
}

void QLabel_clear(QLabel* self) {
	self->clear();
}

void QLabel_linkActivated(QLabel* self, struct miqt_string link) {
	QString link_QString = QString::fromUtf8(link.data, link.len);
	self->linkActivated(link_QString);
}

void QLabel_connect_linkActivated(QLabel* self, intptr_t slot) {
	MiqtVirtualQLabel::connect(self, static_cast<void (QLabel::*)(const QString&)>(&QLabel::linkActivated), self, [=](const QString& link) {
		const QString link_ret = link;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray link_b = link_ret.toUtf8();
		struct miqt_string link_ms;
		link_ms.len = link_b.length();
		link_ms.data = static_cast<char*>(malloc(link_ms.len));
		memcpy(link_ms.data, link_b.data(), link_ms.len);
		struct miqt_string sigval1 = link_ms;
		miqt_exec_callback_QLabel_linkActivated(slot, sigval1);
	});
}

void QLabel_linkHovered(QLabel* self, struct miqt_string link) {
	QString link_QString = QString::fromUtf8(link.data, link.len);
	self->linkHovered(link_QString);
}

void QLabel_connect_linkHovered(QLabel* self, intptr_t slot) {
	MiqtVirtualQLabel::connect(self, static_cast<void (QLabel::*)(const QString&)>(&QLabel::linkHovered), self, [=](const QString& link) {
		const QString link_ret = link;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray link_b = link_ret.toUtf8();
		struct miqt_string link_ms;
		link_ms.len = link_b.length();
		link_ms.data = static_cast<char*>(malloc(link_ms.len));
		memcpy(link_ms.data, link_b.data(), link_ms.len);
		struct miqt_string sigval1 = link_ms;
		miqt_exec_callback_QLabel_linkHovered(slot, sigval1);
	});
}

struct miqt_string QLabel_tr2(const char* s, const char* c) {
	QString _ret = QLabel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLabel_tr3(const char* s, const char* c, int n) {
	QString _ret = QLabel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLabel_trUtf82(const char* s, const char* c) {
	QString _ret = QLabel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLabel_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QLabel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QLabel_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QLabel_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQLabel*)(self) )->virtualbase_sizeHint();
}

bool QLabel_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QLabel_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQLabel*)(self) )->virtualbase_minimumSizeHint();
}

bool QLabel_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QLabel_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQLabel*)(self) )->virtualbase_heightForWidth(param1);
}

bool QLabel_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QLabel_virtualbase_event(void* self, QEvent* e) {
	return ( (MiqtVirtualQLabel*)(self) )->virtualbase_event(e);
}

bool QLabel_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QLabel_virtualbase_keyPressEvent(void* self, QKeyEvent* ev) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_keyPressEvent(ev);
}

bool QLabel_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QLabel_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_paintEvent(param1);
}

bool QLabel_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QLabel_virtualbase_changeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_changeEvent(param1);
}

bool QLabel_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QLabel_virtualbase_mousePressEvent(void* self, QMouseEvent* ev) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_mousePressEvent(ev);
}

bool QLabel_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QLabel_virtualbase_mouseMoveEvent(void* self, QMouseEvent* ev) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_mouseMoveEvent(ev);
}

bool QLabel_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QLabel_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* ev) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_mouseReleaseEvent(ev);
}

bool QLabel_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QLabel_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* ev) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_contextMenuEvent(ev);
}

bool QLabel_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QLabel_virtualbase_focusInEvent(void* self, QFocusEvent* ev) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_focusInEvent(ev);
}

bool QLabel_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QLabel_virtualbase_focusOutEvent(void* self, QFocusEvent* ev) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_focusOutEvent(ev);
}

bool QLabel_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QLabel_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQLabel*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QLabel_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QLabel_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQLabel*)(self) )->virtualbase_devType();
}

bool QLabel_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QLabel_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_setVisible(visible);
}

bool QLabel_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QLabel_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQLabel*)(self) )->virtualbase_hasHeightForWidth();
}

bool QLabel_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QLabel_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQLabel*)(self) )->virtualbase_paintEngine();
}

bool QLabel_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QLabel_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QLabel_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QLabel_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_wheelEvent(event);
}

bool QLabel_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QLabel_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QLabel_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QLabel_virtualbase_enterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_enterEvent(event);
}

bool QLabel_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QLabel_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_leaveEvent(event);
}

bool QLabel_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QLabel_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_moveEvent(event);
}

bool QLabel_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QLabel_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_resizeEvent(event);
}

bool QLabel_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QLabel_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_closeEvent(event);
}

bool QLabel_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QLabel_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_tabletEvent(event);
}

bool QLabel_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QLabel_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_actionEvent(event);
}

bool QLabel_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QLabel_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QLabel_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QLabel_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QLabel_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QLabel_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QLabel_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QLabel_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_dropEvent(event);
}

bool QLabel_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QLabel_virtualbase_showEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_showEvent(event);
}

bool QLabel_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QLabel_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_hideEvent(event);
}

bool QLabel_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QLabel_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQLabel*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QLabel_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QLabel_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQLabel*)(self) )->virtualbase_metric(param1);
}

bool QLabel_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QLabel_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQLabel*)(self) )->virtualbase_initPainter(painter);
}

bool QLabel_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QLabel_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQLabel*)(self) )->virtualbase_redirected(offset);
}

bool QLabel_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QLabel_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQLabel*)(self) )->virtualbase_sharedPainter();
}

bool QLabel_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QLabel_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QLabel_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QLabel_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQLabel*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QLabel_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QLabel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQLabel*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QLabel_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QLabel_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_timerEvent(event);
}

bool QLabel_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QLabel_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_childEvent(event);
}

bool QLabel_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QLabel_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_customEvent(event);
}

bool QLabel_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QLabel_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_connectNotify(signal);
}

bool QLabel_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QLabel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_disconnectNotify(signal);
}

void QLabel_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->drawFrame(param1);

}

void QLabel_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->initStyleOption(option);

}

void QLabel_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QLabel_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QLabel_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QLabel_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QLabel_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QLabel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QLabel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QLabel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QLabel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QLabel_delete(QLabel* self) {
	delete self;
}

