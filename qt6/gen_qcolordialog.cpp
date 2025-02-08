#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QColor>
#include <QColorDialog>
#include <QContextMenuEvent>
#include <QDialog>
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
#include <qcolordialog.h>
#include "gen_qcolordialog.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QColorDialog_currentColorChanged(intptr_t, QColor*);
void miqt_exec_callback_QColorDialog_colorSelected(intptr_t, QColor*);
void miqt_exec_callback_QColorDialog_setVisible(QColorDialog*, intptr_t, bool);
void miqt_exec_callback_QColorDialog_changeEvent(QColorDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QColorDialog_done(QColorDialog*, intptr_t, int);
QSize* miqt_exec_callback_QColorDialog_sizeHint(const QColorDialog*, intptr_t);
QSize* miqt_exec_callback_QColorDialog_minimumSizeHint(const QColorDialog*, intptr_t);
void miqt_exec_callback_QColorDialog_open(QColorDialog*, intptr_t);
int miqt_exec_callback_QColorDialog_exec(QColorDialog*, intptr_t);
void miqt_exec_callback_QColorDialog_accept(QColorDialog*, intptr_t);
void miqt_exec_callback_QColorDialog_reject(QColorDialog*, intptr_t);
void miqt_exec_callback_QColorDialog_keyPressEvent(QColorDialog*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QColorDialog_closeEvent(QColorDialog*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QColorDialog_showEvent(QColorDialog*, intptr_t, QShowEvent*);
void miqt_exec_callback_QColorDialog_resizeEvent(QColorDialog*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QColorDialog_contextMenuEvent(QColorDialog*, intptr_t, QContextMenuEvent*);
bool miqt_exec_callback_QColorDialog_eventFilter(QColorDialog*, intptr_t, QObject*, QEvent*);
int miqt_exec_callback_QColorDialog_devType(const QColorDialog*, intptr_t);
int miqt_exec_callback_QColorDialog_heightForWidth(const QColorDialog*, intptr_t, int);
bool miqt_exec_callback_QColorDialog_hasHeightForWidth(const QColorDialog*, intptr_t);
QPaintEngine* miqt_exec_callback_QColorDialog_paintEngine(const QColorDialog*, intptr_t);
bool miqt_exec_callback_QColorDialog_event(QColorDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QColorDialog_mousePressEvent(QColorDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QColorDialog_mouseReleaseEvent(QColorDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QColorDialog_mouseDoubleClickEvent(QColorDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QColorDialog_mouseMoveEvent(QColorDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QColorDialog_wheelEvent(QColorDialog*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QColorDialog_keyReleaseEvent(QColorDialog*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QColorDialog_focusInEvent(QColorDialog*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QColorDialog_focusOutEvent(QColorDialog*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QColorDialog_enterEvent(QColorDialog*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QColorDialog_leaveEvent(QColorDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QColorDialog_paintEvent(QColorDialog*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QColorDialog_moveEvent(QColorDialog*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QColorDialog_tabletEvent(QColorDialog*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QColorDialog_actionEvent(QColorDialog*, intptr_t, QActionEvent*);
void miqt_exec_callback_QColorDialog_dragEnterEvent(QColorDialog*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QColorDialog_dragMoveEvent(QColorDialog*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QColorDialog_dragLeaveEvent(QColorDialog*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QColorDialog_dropEvent(QColorDialog*, intptr_t, QDropEvent*);
void miqt_exec_callback_QColorDialog_hideEvent(QColorDialog*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QColorDialog_nativeEvent(QColorDialog*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QColorDialog_metric(const QColorDialog*, intptr_t, int);
void miqt_exec_callback_QColorDialog_initPainter(const QColorDialog*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QColorDialog_redirected(const QColorDialog*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QColorDialog_sharedPainter(const QColorDialog*, intptr_t);
void miqt_exec_callback_QColorDialog_inputMethodEvent(QColorDialog*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QColorDialog_inputMethodQuery(const QColorDialog*, intptr_t, int);
bool miqt_exec_callback_QColorDialog_focusNextPrevChild(QColorDialog*, intptr_t, bool);
void miqt_exec_callback_QColorDialog_timerEvent(QColorDialog*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QColorDialog_childEvent(QColorDialog*, intptr_t, QChildEvent*);
void miqt_exec_callback_QColorDialog_customEvent(QColorDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QColorDialog_connectNotify(QColorDialog*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QColorDialog_disconnectNotify(QColorDialog*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQColorDialog final : public QColorDialog {
public:

	MiqtVirtualQColorDialog(QWidget* parent): QColorDialog(parent) {};
	MiqtVirtualQColorDialog(): QColorDialog() {};
	MiqtVirtualQColorDialog(const QColor& initial): QColorDialog(initial) {};
	MiqtVirtualQColorDialog(const QColor& initial, QWidget* parent): QColorDialog(initial, parent) {};

	virtual ~MiqtVirtualQColorDialog() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QColorDialog::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QColorDialog_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QColorDialog::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* event) override {
		if (handle__changeEvent == 0) {
			QColorDialog::changeEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QColorDialog_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* event) {

		QColorDialog::changeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__done = 0;

	// Subclass to allow providing a Go implementation
	virtual void done(int result) override {
		if (handle__done == 0) {
			QColorDialog::done(result);
			return;
		}
		
		int sigval1 = result;

		miqt_exec_callback_QColorDialog_done(this, handle__done, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_done(int result) {

		QColorDialog::done(static_cast<int>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QColorDialog::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QColorDialog_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QColorDialog::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QColorDialog::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QColorDialog_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QColorDialog::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__open = 0;

	// Subclass to allow providing a Go implementation
	virtual void open() override {
		if (handle__open == 0) {
			QColorDialog::open();
			return;
		}
		

		miqt_exec_callback_QColorDialog_open(this, handle__open);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_open() {

		QColorDialog::open();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__exec = 0;

	// Subclass to allow providing a Go implementation
	virtual int exec() override {
		if (handle__exec == 0) {
			return QColorDialog::exec();
		}
		

		int callback_return_value = miqt_exec_callback_QColorDialog_exec(this, handle__exec);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_exec() {

		return QColorDialog::exec();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__accept = 0;

	// Subclass to allow providing a Go implementation
	virtual void accept() override {
		if (handle__accept == 0) {
			QColorDialog::accept();
			return;
		}
		

		miqt_exec_callback_QColorDialog_accept(this, handle__accept);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_accept() {

		QColorDialog::accept();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__reject = 0;

	// Subclass to allow providing a Go implementation
	virtual void reject() override {
		if (handle__reject == 0) {
			QColorDialog::reject();
			return;
		}
		

		miqt_exec_callback_QColorDialog_reject(this, handle__reject);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_reject() {

		QColorDialog::reject();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__keyPressEvent == 0) {
			QColorDialog::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QColorDialog_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* param1) {

		QColorDialog::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* param1) override {
		if (handle__closeEvent == 0) {
			QColorDialog::closeEvent(param1);
			return;
		}
		
		QCloseEvent* sigval1 = param1;

		miqt_exec_callback_QColorDialog_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* param1) {

		QColorDialog::closeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (handle__showEvent == 0) {
			QColorDialog::showEvent(param1);
			return;
		}
		
		QShowEvent* sigval1 = param1;

		miqt_exec_callback_QColorDialog_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* param1) {

		QColorDialog::showEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__resizeEvent == 0) {
			QColorDialog::resizeEvent(param1);
			return;
		}
		
		QResizeEvent* sigval1 = param1;

		miqt_exec_callback_QColorDialog_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* param1) {

		QColorDialog::resizeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__contextMenuEvent == 0) {
			QColorDialog::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QColorDialog_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* param1) {

		QColorDialog::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__eventFilter == 0) {
			return QColorDialog::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QColorDialog_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* param1, QEvent* param2) {

		return QColorDialog::eventFilter(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QColorDialog::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QColorDialog_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QColorDialog::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QColorDialog::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QColorDialog_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QColorDialog::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QColorDialog::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QColorDialog_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QColorDialog::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QColorDialog::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QColorDialog_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QColorDialog::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QColorDialog::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QColorDialog_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QColorDialog::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QColorDialog::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QColorDialog_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* event) {

		QColorDialog::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QColorDialog::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QColorDialog_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* event) {

		QColorDialog::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QColorDialog::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QColorDialog_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QColorDialog::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QColorDialog::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QColorDialog_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* event) {

		QColorDialog::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QColorDialog::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QColorDialog_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* event) {

		QColorDialog::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QColorDialog::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QColorDialog_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QColorDialog::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QColorDialog::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QColorDialog_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QColorDialog::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QColorDialog::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QColorDialog_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QColorDialog::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__enterEvent == 0) {
			QColorDialog::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QColorDialog_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEnterEvent* event) {

		QColorDialog::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QColorDialog::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QColorDialog_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QColorDialog::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QColorDialog::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QColorDialog_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* event) {

		QColorDialog::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QColorDialog::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QColorDialog_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QColorDialog::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QColorDialog::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QColorDialog_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QColorDialog::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QColorDialog::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QColorDialog_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QColorDialog::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QColorDialog::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QColorDialog_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QColorDialog::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QColorDialog::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QColorDialog_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QColorDialog::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QColorDialog::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QColorDialog_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QColorDialog::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QColorDialog::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QColorDialog_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QColorDialog::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QColorDialog::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QColorDialog_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QColorDialog::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__nativeEvent == 0) {
			return QColorDialog::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QColorDialog_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QColorDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QColorDialog::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QColorDialog_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QColorDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QColorDialog::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QColorDialog_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QColorDialog::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QColorDialog::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QColorDialog_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QColorDialog::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QColorDialog::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QColorDialog_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QColorDialog::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QColorDialog::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QColorDialog_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QColorDialog::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QColorDialog::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QColorDialog_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QColorDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QColorDialog::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QColorDialog_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QColorDialog::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QColorDialog::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QColorDialog_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QColorDialog::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QColorDialog::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QColorDialog_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QColorDialog::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QColorDialog::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QColorDialog_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QColorDialog::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QColorDialog::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QColorDialog_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QColorDialog::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QColorDialog::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QColorDialog_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QColorDialog::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QColorDialog_protectedbase_adjustPosition(bool* _dynamic_cast_ok, void* self, QWidget* param1);
	friend void QColorDialog_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QColorDialog_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QColorDialog_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QColorDialog_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QColorDialog_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QColorDialog_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QColorDialog_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QColorDialog_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QColorDialog_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QColorDialog* QColorDialog_new(QWidget* parent) {
	return new MiqtVirtualQColorDialog(parent);
}

QColorDialog* QColorDialog_new2() {
	return new MiqtVirtualQColorDialog();
}

QColorDialog* QColorDialog_new3(QColor* initial) {
	return new MiqtVirtualQColorDialog(*initial);
}

QColorDialog* QColorDialog_new4(QColor* initial, QWidget* parent) {
	return new MiqtVirtualQColorDialog(*initial, parent);
}

void QColorDialog_virtbase(QColorDialog* src, QDialog** outptr_QDialog) {
	*outptr_QDialog = static_cast<QDialog*>(src);
}

QMetaObject* QColorDialog_metaObject(const QColorDialog* self) {
	return (QMetaObject*) self->metaObject();
}

void* QColorDialog_metacast(QColorDialog* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QColorDialog_tr(const char* s) {
	QString _ret = QColorDialog::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QColorDialog_setCurrentColor(QColorDialog* self, QColor* color) {
	self->setCurrentColor(*color);
}

QColor* QColorDialog_currentColor(const QColorDialog* self) {
	return new QColor(self->currentColor());
}

QColor* QColorDialog_selectedColor(const QColorDialog* self) {
	return new QColor(self->selectedColor());
}

void QColorDialog_setOption(QColorDialog* self, int option) {
	self->setOption(static_cast<QColorDialog::ColorDialogOption>(option));
}

bool QColorDialog_testOption(const QColorDialog* self, int option) {
	return self->testOption(static_cast<QColorDialog::ColorDialogOption>(option));
}

void QColorDialog_setOptions(QColorDialog* self, int options) {
	self->setOptions(static_cast<QColorDialog::ColorDialogOptions>(options));
}

int QColorDialog_options(const QColorDialog* self) {
	QColorDialog::ColorDialogOptions _ret = self->options();
	return static_cast<int>(_ret);
}

void QColorDialog_setVisible(QColorDialog* self, bool visible) {
	self->setVisible(visible);
}

QColor* QColorDialog_getColor() {
	return new QColor(QColorDialog::getColor());
}

int QColorDialog_customCount() {
	return QColorDialog::customCount();
}

QColor* QColorDialog_customColor(int index) {
	return new QColor(QColorDialog::customColor(static_cast<int>(index)));
}

void QColorDialog_setCustomColor(int index, QColor* color) {
	QColorDialog::setCustomColor(static_cast<int>(index), *color);
}

QColor* QColorDialog_standardColor(int index) {
	return new QColor(QColorDialog::standardColor(static_cast<int>(index)));
}

void QColorDialog_setStandardColor(int index, QColor* color) {
	QColorDialog::setStandardColor(static_cast<int>(index), *color);
}

void QColorDialog_currentColorChanged(QColorDialog* self, QColor* color) {
	self->currentColorChanged(*color);
}

void QColorDialog_connect_currentColorChanged(QColorDialog* self, intptr_t slot) {
	MiqtVirtualQColorDialog::connect(self, static_cast<void (QColorDialog::*)(const QColor&)>(&QColorDialog::currentColorChanged), self, [=](const QColor& color) {
		const QColor& color_ret = color;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&color_ret);
		miqt_exec_callback_QColorDialog_currentColorChanged(slot, sigval1);
	});
}

void QColorDialog_colorSelected(QColorDialog* self, QColor* color) {
	self->colorSelected(*color);
}

void QColorDialog_connect_colorSelected(QColorDialog* self, intptr_t slot) {
	MiqtVirtualQColorDialog::connect(self, static_cast<void (QColorDialog::*)(const QColor&)>(&QColorDialog::colorSelected), self, [=](const QColor& color) {
		const QColor& color_ret = color;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&color_ret);
		miqt_exec_callback_QColorDialog_colorSelected(slot, sigval1);
	});
}

struct miqt_string QColorDialog_tr2(const char* s, const char* c) {
	QString _ret = QColorDialog::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QColorDialog_tr3(const char* s, const char* c, int n) {
	QString _ret = QColorDialog::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QColorDialog_setOption2(QColorDialog* self, int option, bool on) {
	self->setOption(static_cast<QColorDialog::ColorDialogOption>(option), on);
}

QColor* QColorDialog_getColor1(QColor* initial) {
	return new QColor(QColorDialog::getColor(*initial));
}

QColor* QColorDialog_getColor2(QColor* initial, QWidget* parent) {
	return new QColor(QColorDialog::getColor(*initial, parent));
}

QColor* QColorDialog_getColor3(QColor* initial, QWidget* parent, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return new QColor(QColorDialog::getColor(*initial, parent, title_QString));
}

QColor* QColorDialog_getColor4(QColor* initial, QWidget* parent, struct miqt_string title, int options) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return new QColor(QColorDialog::getColor(*initial, parent, title_QString, static_cast<QColorDialog::ColorDialogOptions>(options)));
}

bool QColorDialog_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QColorDialog_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_setVisible(visible);
}

bool QColorDialog_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QColorDialog_virtualbase_changeEvent(void* self, QEvent* event) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_changeEvent(event);
}

bool QColorDialog_override_virtual_done(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__done = slot;
	return true;
}

void QColorDialog_virtualbase_done(void* self, int result) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_done(result);
}

bool QColorDialog_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QColorDialog_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQColorDialog*)(self) )->virtualbase_sizeHint();
}

bool QColorDialog_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QColorDialog_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQColorDialog*)(self) )->virtualbase_minimumSizeHint();
}

bool QColorDialog_override_virtual_open(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__open = slot;
	return true;
}

void QColorDialog_virtualbase_open(void* self) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_open();
}

bool QColorDialog_override_virtual_exec(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__exec = slot;
	return true;
}

int QColorDialog_virtualbase_exec(void* self) {
	return ( (MiqtVirtualQColorDialog*)(self) )->virtualbase_exec();
}

bool QColorDialog_override_virtual_accept(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__accept = slot;
	return true;
}

void QColorDialog_virtualbase_accept(void* self) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_accept();
}

bool QColorDialog_override_virtual_reject(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__reject = slot;
	return true;
}

void QColorDialog_virtualbase_reject(void* self) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_reject();
}

bool QColorDialog_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QColorDialog_virtualbase_keyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_keyPressEvent(param1);
}

bool QColorDialog_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QColorDialog_virtualbase_closeEvent(void* self, QCloseEvent* param1) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_closeEvent(param1);
}

bool QColorDialog_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QColorDialog_virtualbase_showEvent(void* self, QShowEvent* param1) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_showEvent(param1);
}

bool QColorDialog_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QColorDialog_virtualbase_resizeEvent(void* self, QResizeEvent* param1) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_resizeEvent(param1);
}

bool QColorDialog_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QColorDialog_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_contextMenuEvent(param1);
}

bool QColorDialog_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QColorDialog_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQColorDialog*)(self) )->virtualbase_eventFilter(param1, param2);
}

bool QColorDialog_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QColorDialog_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQColorDialog*)(self) )->virtualbase_devType();
}

bool QColorDialog_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QColorDialog_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQColorDialog*)(self) )->virtualbase_heightForWidth(param1);
}

bool QColorDialog_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QColorDialog_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQColorDialog*)(self) )->virtualbase_hasHeightForWidth();
}

bool QColorDialog_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QColorDialog_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQColorDialog*)(self) )->virtualbase_paintEngine();
}

bool QColorDialog_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QColorDialog_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQColorDialog*)(self) )->virtualbase_event(event);
}

bool QColorDialog_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QColorDialog_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_mousePressEvent(event);
}

bool QColorDialog_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QColorDialog_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QColorDialog_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QColorDialog_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QColorDialog_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QColorDialog_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QColorDialog_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QColorDialog_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_wheelEvent(event);
}

bool QColorDialog_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QColorDialog_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QColorDialog_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QColorDialog_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_focusInEvent(event);
}

bool QColorDialog_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QColorDialog_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_focusOutEvent(event);
}

bool QColorDialog_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QColorDialog_virtualbase_enterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_enterEvent(event);
}

bool QColorDialog_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QColorDialog_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_leaveEvent(event);
}

bool QColorDialog_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QColorDialog_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_paintEvent(event);
}

bool QColorDialog_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QColorDialog_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_moveEvent(event);
}

bool QColorDialog_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QColorDialog_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_tabletEvent(event);
}

bool QColorDialog_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QColorDialog_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_actionEvent(event);
}

bool QColorDialog_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QColorDialog_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QColorDialog_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QColorDialog_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QColorDialog_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QColorDialog_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QColorDialog_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QColorDialog_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_dropEvent(event);
}

bool QColorDialog_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QColorDialog_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_hideEvent(event);
}

bool QColorDialog_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QColorDialog_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQColorDialog*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QColorDialog_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QColorDialog_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQColorDialog*)(self) )->virtualbase_metric(param1);
}

bool QColorDialog_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QColorDialog_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQColorDialog*)(self) )->virtualbase_initPainter(painter);
}

bool QColorDialog_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QColorDialog_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQColorDialog*)(self) )->virtualbase_redirected(offset);
}

bool QColorDialog_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QColorDialog_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQColorDialog*)(self) )->virtualbase_sharedPainter();
}

bool QColorDialog_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QColorDialog_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QColorDialog_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QColorDialog_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQColorDialog*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QColorDialog_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QColorDialog_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQColorDialog*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QColorDialog_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QColorDialog_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_timerEvent(event);
}

bool QColorDialog_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QColorDialog_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_childEvent(event);
}

bool QColorDialog_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QColorDialog_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_customEvent(event);
}

bool QColorDialog_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QColorDialog_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_connectNotify(signal);
}

bool QColorDialog_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QColorDialog_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_disconnectNotify(signal);
}

void QColorDialog_protectedbase_adjustPosition(bool* _dynamic_cast_ok, void* self, QWidget* param1) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->adjustPosition(param1);

}

void QColorDialog_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QColorDialog_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QColorDialog_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QColorDialog_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QColorDialog_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QColorDialog_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QColorDialog_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QColorDialog_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QColorDialog_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QColorDialog_delete(QColorDialog* self) {
	delete self;
}

