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
#include <QKeySequence>
#include <QKeySequenceEdit>
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
#include <qkeysequenceedit.h>
#include "gen_qkeysequenceedit.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QKeySequenceEdit_editingFinished(intptr_t);
void miqt_exec_callback_QKeySequenceEdit_keySequenceChanged(intptr_t, QKeySequence*);
bool miqt_exec_callback_QKeySequenceEdit_event(QKeySequenceEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QKeySequenceEdit_keyPressEvent(QKeySequenceEdit*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QKeySequenceEdit_keyReleaseEvent(QKeySequenceEdit*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QKeySequenceEdit_timerEvent(QKeySequenceEdit*, intptr_t, QTimerEvent*);
int miqt_exec_callback_QKeySequenceEdit_devType(const QKeySequenceEdit*, intptr_t);
void miqt_exec_callback_QKeySequenceEdit_setVisible(QKeySequenceEdit*, intptr_t, bool);
QSize* miqt_exec_callback_QKeySequenceEdit_sizeHint(const QKeySequenceEdit*, intptr_t);
QSize* miqt_exec_callback_QKeySequenceEdit_minimumSizeHint(const QKeySequenceEdit*, intptr_t);
int miqt_exec_callback_QKeySequenceEdit_heightForWidth(const QKeySequenceEdit*, intptr_t, int);
bool miqt_exec_callback_QKeySequenceEdit_hasHeightForWidth(const QKeySequenceEdit*, intptr_t);
QPaintEngine* miqt_exec_callback_QKeySequenceEdit_paintEngine(const QKeySequenceEdit*, intptr_t);
void miqt_exec_callback_QKeySequenceEdit_mousePressEvent(QKeySequenceEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QKeySequenceEdit_mouseReleaseEvent(QKeySequenceEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QKeySequenceEdit_mouseDoubleClickEvent(QKeySequenceEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QKeySequenceEdit_mouseMoveEvent(QKeySequenceEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QKeySequenceEdit_wheelEvent(QKeySequenceEdit*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QKeySequenceEdit_focusInEvent(QKeySequenceEdit*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QKeySequenceEdit_focusOutEvent(QKeySequenceEdit*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QKeySequenceEdit_enterEvent(QKeySequenceEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QKeySequenceEdit_leaveEvent(QKeySequenceEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QKeySequenceEdit_paintEvent(QKeySequenceEdit*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QKeySequenceEdit_moveEvent(QKeySequenceEdit*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QKeySequenceEdit_resizeEvent(QKeySequenceEdit*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QKeySequenceEdit_closeEvent(QKeySequenceEdit*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QKeySequenceEdit_contextMenuEvent(QKeySequenceEdit*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QKeySequenceEdit_tabletEvent(QKeySequenceEdit*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QKeySequenceEdit_actionEvent(QKeySequenceEdit*, intptr_t, QActionEvent*);
void miqt_exec_callback_QKeySequenceEdit_dragEnterEvent(QKeySequenceEdit*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QKeySequenceEdit_dragMoveEvent(QKeySequenceEdit*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QKeySequenceEdit_dragLeaveEvent(QKeySequenceEdit*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QKeySequenceEdit_dropEvent(QKeySequenceEdit*, intptr_t, QDropEvent*);
void miqt_exec_callback_QKeySequenceEdit_showEvent(QKeySequenceEdit*, intptr_t, QShowEvent*);
void miqt_exec_callback_QKeySequenceEdit_hideEvent(QKeySequenceEdit*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QKeySequenceEdit_nativeEvent(QKeySequenceEdit*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QKeySequenceEdit_changeEvent(QKeySequenceEdit*, intptr_t, QEvent*);
int miqt_exec_callback_QKeySequenceEdit_metric(const QKeySequenceEdit*, intptr_t, int);
void miqt_exec_callback_QKeySequenceEdit_initPainter(const QKeySequenceEdit*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QKeySequenceEdit_redirected(const QKeySequenceEdit*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QKeySequenceEdit_sharedPainter(const QKeySequenceEdit*, intptr_t);
void miqt_exec_callback_QKeySequenceEdit_inputMethodEvent(QKeySequenceEdit*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QKeySequenceEdit_inputMethodQuery(const QKeySequenceEdit*, intptr_t, int);
bool miqt_exec_callback_QKeySequenceEdit_focusNextPrevChild(QKeySequenceEdit*, intptr_t, bool);
bool miqt_exec_callback_QKeySequenceEdit_eventFilter(QKeySequenceEdit*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QKeySequenceEdit_childEvent(QKeySequenceEdit*, intptr_t, QChildEvent*);
void miqt_exec_callback_QKeySequenceEdit_customEvent(QKeySequenceEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QKeySequenceEdit_connectNotify(QKeySequenceEdit*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QKeySequenceEdit_disconnectNotify(QKeySequenceEdit*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQKeySequenceEdit final : public QKeySequenceEdit {
public:

	MiqtVirtualQKeySequenceEdit(QWidget* parent): QKeySequenceEdit(parent) {};
	MiqtVirtualQKeySequenceEdit(): QKeySequenceEdit() {};
	MiqtVirtualQKeySequenceEdit(const QKeySequence& keySequence): QKeySequenceEdit(keySequence) {};
	MiqtVirtualQKeySequenceEdit(const QKeySequence& keySequence, QWidget* parent): QKeySequenceEdit(keySequence, parent) {};

	virtual ~MiqtVirtualQKeySequenceEdit() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__event == 0) {
			return QKeySequenceEdit::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QKeySequenceEdit_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* param1) {

		return QKeySequenceEdit::event(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__keyPressEvent == 0) {
			QKeySequenceEdit::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QKeySequenceEdit_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* param1) {

		QKeySequenceEdit::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* param1) override {
		if (handle__keyReleaseEvent == 0) {
			QKeySequenceEdit::keyReleaseEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QKeySequenceEdit_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* param1) {

		QKeySequenceEdit::keyReleaseEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* param1) override {
		if (handle__timerEvent == 0) {
			QKeySequenceEdit::timerEvent(param1);
			return;
		}
		
		QTimerEvent* sigval1 = param1;

		miqt_exec_callback_QKeySequenceEdit_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* param1) {

		QKeySequenceEdit::timerEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QKeySequenceEdit::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QKeySequenceEdit_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QKeySequenceEdit::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QKeySequenceEdit::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QKeySequenceEdit_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QKeySequenceEdit::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QKeySequenceEdit::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QKeySequenceEdit_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QKeySequenceEdit::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QKeySequenceEdit::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QKeySequenceEdit_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QKeySequenceEdit::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QKeySequenceEdit::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QKeySequenceEdit_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QKeySequenceEdit::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QKeySequenceEdit::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QKeySequenceEdit_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QKeySequenceEdit::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QKeySequenceEdit::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QKeySequenceEdit_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QKeySequenceEdit::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QKeySequenceEdit::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* event) {

		QKeySequenceEdit::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QKeySequenceEdit::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* event) {

		QKeySequenceEdit::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QKeySequenceEdit::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QKeySequenceEdit::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QKeySequenceEdit::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* event) {

		QKeySequenceEdit::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QKeySequenceEdit::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* event) {

		QKeySequenceEdit::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QKeySequenceEdit::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QKeySequenceEdit::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QKeySequenceEdit::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QKeySequenceEdit::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QKeySequenceEdit::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEvent* event) {

		QKeySequenceEdit::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QKeySequenceEdit::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QKeySequenceEdit::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QKeySequenceEdit::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* event) {

		QKeySequenceEdit::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QKeySequenceEdit::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QKeySequenceEdit::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QKeySequenceEdit::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* event) {

		QKeySequenceEdit::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QKeySequenceEdit::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QKeySequenceEdit::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QKeySequenceEdit::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* event) {

		QKeySequenceEdit::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QKeySequenceEdit::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QKeySequenceEdit::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QKeySequenceEdit::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QKeySequenceEdit::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QKeySequenceEdit::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QKeySequenceEdit::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QKeySequenceEdit::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QKeySequenceEdit::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QKeySequenceEdit::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QKeySequenceEdit::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QKeySequenceEdit::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QKeySequenceEdit::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QKeySequenceEdit::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* event) {

		QKeySequenceEdit::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QKeySequenceEdit::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QKeySequenceEdit::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QKeySequenceEdit::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QKeySequenceEdit_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QKeySequenceEdit::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QKeySequenceEdit::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QKeySequenceEdit_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* param1) {

		QKeySequenceEdit::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QKeySequenceEdit::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QKeySequenceEdit_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QKeySequenceEdit::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QKeySequenceEdit::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QKeySequenceEdit_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QKeySequenceEdit::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QKeySequenceEdit::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QKeySequenceEdit_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QKeySequenceEdit::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QKeySequenceEdit::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QKeySequenceEdit_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QKeySequenceEdit::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QKeySequenceEdit::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QKeySequenceEdit_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QKeySequenceEdit::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QKeySequenceEdit::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QKeySequenceEdit_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QKeySequenceEdit::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QKeySequenceEdit::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QKeySequenceEdit_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QKeySequenceEdit::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QKeySequenceEdit::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QKeySequenceEdit_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QKeySequenceEdit::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QKeySequenceEdit::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QKeySequenceEdit::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QKeySequenceEdit::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QKeySequenceEdit::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QKeySequenceEdit::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QKeySequenceEdit_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QKeySequenceEdit::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QKeySequenceEdit::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QKeySequenceEdit_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QKeySequenceEdit::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QKeySequenceEdit_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QKeySequenceEdit_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QKeySequenceEdit_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QKeySequenceEdit_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QKeySequenceEdit_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QKeySequenceEdit_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QKeySequenceEdit_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QKeySequenceEdit_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QKeySequenceEdit_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QKeySequenceEdit* QKeySequenceEdit_new(QWidget* parent) {
	return new MiqtVirtualQKeySequenceEdit(parent);
}

QKeySequenceEdit* QKeySequenceEdit_new2() {
	return new MiqtVirtualQKeySequenceEdit();
}

QKeySequenceEdit* QKeySequenceEdit_new3(QKeySequence* keySequence) {
	return new MiqtVirtualQKeySequenceEdit(*keySequence);
}

QKeySequenceEdit* QKeySequenceEdit_new4(QKeySequence* keySequence, QWidget* parent) {
	return new MiqtVirtualQKeySequenceEdit(*keySequence, parent);
}

void QKeySequenceEdit_virtbase(QKeySequenceEdit* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QKeySequenceEdit_metaObject(const QKeySequenceEdit* self) {
	return (QMetaObject*) self->metaObject();
}

void* QKeySequenceEdit_metacast(QKeySequenceEdit* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QKeySequenceEdit_tr(const char* s) {
	QString _ret = QKeySequenceEdit::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QKeySequenceEdit_trUtf8(const char* s) {
	QString _ret = QKeySequenceEdit::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QKeySequence* QKeySequenceEdit_keySequence(const QKeySequenceEdit* self) {
	return new QKeySequence(self->keySequence());
}

void QKeySequenceEdit_setKeySequence(QKeySequenceEdit* self, QKeySequence* keySequence) {
	self->setKeySequence(*keySequence);
}

void QKeySequenceEdit_clear(QKeySequenceEdit* self) {
	self->clear();
}

void QKeySequenceEdit_editingFinished(QKeySequenceEdit* self) {
	self->editingFinished();
}

void QKeySequenceEdit_connect_editingFinished(QKeySequenceEdit* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit::connect(self, static_cast<void (QKeySequenceEdit::*)()>(&QKeySequenceEdit::editingFinished), self, [=]() {
		miqt_exec_callback_QKeySequenceEdit_editingFinished(slot);
	});
}

void QKeySequenceEdit_keySequenceChanged(QKeySequenceEdit* self, QKeySequence* keySequence) {
	self->keySequenceChanged(*keySequence);
}

void QKeySequenceEdit_connect_keySequenceChanged(QKeySequenceEdit* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit::connect(self, static_cast<void (QKeySequenceEdit::*)(const QKeySequence&)>(&QKeySequenceEdit::keySequenceChanged), self, [=](const QKeySequence& keySequence) {
		const QKeySequence& keySequence_ret = keySequence;
		// Cast returned reference into pointer
		QKeySequence* sigval1 = const_cast<QKeySequence*>(&keySequence_ret);
		miqt_exec_callback_QKeySequenceEdit_keySequenceChanged(slot, sigval1);
	});
}

struct miqt_string QKeySequenceEdit_tr2(const char* s, const char* c) {
	QString _ret = QKeySequenceEdit::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QKeySequenceEdit_tr3(const char* s, const char* c, int n) {
	QString _ret = QKeySequenceEdit::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QKeySequenceEdit_trUtf82(const char* s, const char* c) {
	QString _ret = QKeySequenceEdit::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QKeySequenceEdit_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QKeySequenceEdit::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QKeySequenceEdit_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QKeySequenceEdit_virtualbase_event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_event(param1);
}

bool QKeySequenceEdit_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_keyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_keyPressEvent(param1);
}

bool QKeySequenceEdit_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_keyReleaseEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_keyReleaseEvent(param1);
}

bool QKeySequenceEdit_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_timerEvent(void* self, QTimerEvent* param1) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_timerEvent(param1);
}

bool QKeySequenceEdit_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QKeySequenceEdit_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_devType();
}

bool QKeySequenceEdit_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_setVisible(visible);
}

bool QKeySequenceEdit_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QKeySequenceEdit_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_sizeHint();
}

bool QKeySequenceEdit_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QKeySequenceEdit_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_minimumSizeHint();
}

bool QKeySequenceEdit_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QKeySequenceEdit_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_heightForWidth(param1);
}

bool QKeySequenceEdit_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QKeySequenceEdit_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_hasHeightForWidth();
}

bool QKeySequenceEdit_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QKeySequenceEdit_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_paintEngine();
}

bool QKeySequenceEdit_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_mousePressEvent(event);
}

bool QKeySequenceEdit_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QKeySequenceEdit_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QKeySequenceEdit_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QKeySequenceEdit_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_wheelEvent(event);
}

bool QKeySequenceEdit_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_focusInEvent(event);
}

bool QKeySequenceEdit_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_focusOutEvent(event);
}

bool QKeySequenceEdit_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_enterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_enterEvent(event);
}

bool QKeySequenceEdit_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_leaveEvent(event);
}

bool QKeySequenceEdit_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_paintEvent(event);
}

bool QKeySequenceEdit_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_moveEvent(event);
}

bool QKeySequenceEdit_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_resizeEvent(event);
}

bool QKeySequenceEdit_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_closeEvent(event);
}

bool QKeySequenceEdit_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_contextMenuEvent(event);
}

bool QKeySequenceEdit_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_tabletEvent(event);
}

bool QKeySequenceEdit_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_actionEvent(event);
}

bool QKeySequenceEdit_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QKeySequenceEdit_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QKeySequenceEdit_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QKeySequenceEdit_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_dropEvent(event);
}

bool QKeySequenceEdit_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_showEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_showEvent(event);
}

bool QKeySequenceEdit_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_hideEvent(event);
}

bool QKeySequenceEdit_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QKeySequenceEdit_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QKeySequenceEdit_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_changeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_changeEvent(param1);
}

bool QKeySequenceEdit_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QKeySequenceEdit_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_metric(param1);
}

bool QKeySequenceEdit_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_initPainter(painter);
}

bool QKeySequenceEdit_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QKeySequenceEdit_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_redirected(offset);
}

bool QKeySequenceEdit_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QKeySequenceEdit_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_sharedPainter();
}

bool QKeySequenceEdit_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QKeySequenceEdit_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QKeySequenceEdit_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QKeySequenceEdit_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QKeySequenceEdit_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QKeySequenceEdit_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QKeySequenceEdit_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QKeySequenceEdit_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_childEvent(event);
}

bool QKeySequenceEdit_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_customEvent(event);
}

bool QKeySequenceEdit_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_connectNotify(signal);
}

bool QKeySequenceEdit_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_disconnectNotify(signal);
}

void QKeySequenceEdit_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QKeySequenceEdit_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QKeySequenceEdit_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QKeySequenceEdit_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QKeySequenceEdit_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QKeySequenceEdit_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QKeySequenceEdit_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QKeySequenceEdit_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QKeySequenceEdit_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QKeySequenceEdit_delete(QKeySequenceEdit* self) {
	delete self;
}

