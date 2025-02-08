#include <QAbstractButton>
#include <QActionEvent>
#include <QByteArray>
#include <QCheckBox>
#include <QChildEvent>
#include <QCloseEvent>
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
#include <QList>
#include <QMessageBox>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPixmap>
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
#include <qmessagebox.h>
#include "gen_qmessagebox.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QMessageBox_buttonClicked(intptr_t, QAbstractButton*);
bool miqt_exec_callback_QMessageBox_event(QMessageBox*, intptr_t, QEvent*);
void miqt_exec_callback_QMessageBox_resizeEvent(QMessageBox*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QMessageBox_showEvent(QMessageBox*, intptr_t, QShowEvent*);
void miqt_exec_callback_QMessageBox_closeEvent(QMessageBox*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QMessageBox_keyPressEvent(QMessageBox*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QMessageBox_changeEvent(QMessageBox*, intptr_t, QEvent*);
void miqt_exec_callback_QMessageBox_setVisible(QMessageBox*, intptr_t, bool);
QSize* miqt_exec_callback_QMessageBox_sizeHint(const QMessageBox*, intptr_t);
QSize* miqt_exec_callback_QMessageBox_minimumSizeHint(const QMessageBox*, intptr_t);
void miqt_exec_callback_QMessageBox_open(QMessageBox*, intptr_t);
int miqt_exec_callback_QMessageBox_exec(QMessageBox*, intptr_t);
void miqt_exec_callback_QMessageBox_done(QMessageBox*, intptr_t, int);
void miqt_exec_callback_QMessageBox_accept(QMessageBox*, intptr_t);
void miqt_exec_callback_QMessageBox_reject(QMessageBox*, intptr_t);
void miqt_exec_callback_QMessageBox_contextMenuEvent(QMessageBox*, intptr_t, QContextMenuEvent*);
bool miqt_exec_callback_QMessageBox_eventFilter(QMessageBox*, intptr_t, QObject*, QEvent*);
int miqt_exec_callback_QMessageBox_devType(const QMessageBox*, intptr_t);
int miqt_exec_callback_QMessageBox_heightForWidth(const QMessageBox*, intptr_t, int);
bool miqt_exec_callback_QMessageBox_hasHeightForWidth(const QMessageBox*, intptr_t);
QPaintEngine* miqt_exec_callback_QMessageBox_paintEngine(const QMessageBox*, intptr_t);
void miqt_exec_callback_QMessageBox_mousePressEvent(QMessageBox*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QMessageBox_mouseReleaseEvent(QMessageBox*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QMessageBox_mouseDoubleClickEvent(QMessageBox*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QMessageBox_mouseMoveEvent(QMessageBox*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QMessageBox_wheelEvent(QMessageBox*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QMessageBox_keyReleaseEvent(QMessageBox*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QMessageBox_focusInEvent(QMessageBox*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QMessageBox_focusOutEvent(QMessageBox*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QMessageBox_enterEvent(QMessageBox*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QMessageBox_leaveEvent(QMessageBox*, intptr_t, QEvent*);
void miqt_exec_callback_QMessageBox_paintEvent(QMessageBox*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QMessageBox_moveEvent(QMessageBox*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QMessageBox_tabletEvent(QMessageBox*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QMessageBox_actionEvent(QMessageBox*, intptr_t, QActionEvent*);
void miqt_exec_callback_QMessageBox_dragEnterEvent(QMessageBox*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QMessageBox_dragMoveEvent(QMessageBox*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QMessageBox_dragLeaveEvent(QMessageBox*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QMessageBox_dropEvent(QMessageBox*, intptr_t, QDropEvent*);
void miqt_exec_callback_QMessageBox_hideEvent(QMessageBox*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QMessageBox_nativeEvent(QMessageBox*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QMessageBox_metric(const QMessageBox*, intptr_t, int);
void miqt_exec_callback_QMessageBox_initPainter(const QMessageBox*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QMessageBox_redirected(const QMessageBox*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QMessageBox_sharedPainter(const QMessageBox*, intptr_t);
void miqt_exec_callback_QMessageBox_inputMethodEvent(QMessageBox*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QMessageBox_inputMethodQuery(const QMessageBox*, intptr_t, int);
bool miqt_exec_callback_QMessageBox_focusNextPrevChild(QMessageBox*, intptr_t, bool);
void miqt_exec_callback_QMessageBox_timerEvent(QMessageBox*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QMessageBox_childEvent(QMessageBox*, intptr_t, QChildEvent*);
void miqt_exec_callback_QMessageBox_customEvent(QMessageBox*, intptr_t, QEvent*);
void miqt_exec_callback_QMessageBox_connectNotify(QMessageBox*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QMessageBox_disconnectNotify(QMessageBox*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQMessageBox final : public QMessageBox {
public:

	MiqtVirtualQMessageBox(QWidget* parent): QMessageBox(parent) {};
	MiqtVirtualQMessageBox(): QMessageBox() {};
	MiqtVirtualQMessageBox(QMessageBox::Icon icon, const QString& title, const QString& text): QMessageBox(icon, title, text) {};
	MiqtVirtualQMessageBox(const QString& title, const QString& text, QMessageBox::Icon icon, int button0, int button1, int button2): QMessageBox(title, text, icon, button0, button1, button2) {};
	MiqtVirtualQMessageBox(QMessageBox::Icon icon, const QString& title, const QString& text, QMessageBox::StandardButtons buttons): QMessageBox(icon, title, text, buttons) {};
	MiqtVirtualQMessageBox(QMessageBox::Icon icon, const QString& title, const QString& text, QMessageBox::StandardButtons buttons, QWidget* parent): QMessageBox(icon, title, text, buttons, parent) {};
	MiqtVirtualQMessageBox(QMessageBox::Icon icon, const QString& title, const QString& text, QMessageBox::StandardButtons buttons, QWidget* parent, Qt::WindowFlags flags): QMessageBox(icon, title, text, buttons, parent, flags) {};
	MiqtVirtualQMessageBox(const QString& title, const QString& text, QMessageBox::Icon icon, int button0, int button1, int button2, QWidget* parent): QMessageBox(title, text, icon, button0, button1, button2, parent) {};
	MiqtVirtualQMessageBox(const QString& title, const QString& text, QMessageBox::Icon icon, int button0, int button1, int button2, QWidget* parent, Qt::WindowFlags f): QMessageBox(title, text, icon, button0, button1, button2, parent, f) {};

	virtual ~MiqtVirtualQMessageBox() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__event == 0) {
			return QMessageBox::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QMessageBox_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* e) {

		return QMessageBox::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QMessageBox::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* event) {

		QMessageBox::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QMessageBox::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* event) {

		QMessageBox::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QMessageBox::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QMessageBox::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QMessageBox::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* event) {

		QMessageBox::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* event) override {
		if (handle__changeEvent == 0) {
			QMessageBox::changeEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* event) {

		QMessageBox::changeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QMessageBox::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QMessageBox_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QMessageBox::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QMessageBox::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QMessageBox_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QMessageBox::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QMessageBox::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QMessageBox_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QMessageBox::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__open = 0;

	// Subclass to allow providing a Go implementation
	virtual void open() override {
		if (handle__open == 0) {
			QMessageBox::open();
			return;
		}
		

		miqt_exec_callback_QMessageBox_open(this, handle__open);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_open() {

		QMessageBox::open();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__exec = 0;

	// Subclass to allow providing a Go implementation
	virtual int exec() override {
		if (handle__exec == 0) {
			return QMessageBox::exec();
		}
		

		int callback_return_value = miqt_exec_callback_QMessageBox_exec(this, handle__exec);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_exec() {

		return QMessageBox::exec();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__done = 0;

	// Subclass to allow providing a Go implementation
	virtual void done(int param1) override {
		if (handle__done == 0) {
			QMessageBox::done(param1);
			return;
		}
		
		int sigval1 = param1;

		miqt_exec_callback_QMessageBox_done(this, handle__done, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_done(int param1) {

		QMessageBox::done(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__accept = 0;

	// Subclass to allow providing a Go implementation
	virtual void accept() override {
		if (handle__accept == 0) {
			QMessageBox::accept();
			return;
		}
		

		miqt_exec_callback_QMessageBox_accept(this, handle__accept);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_accept() {

		QMessageBox::accept();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__reject = 0;

	// Subclass to allow providing a Go implementation
	virtual void reject() override {
		if (handle__reject == 0) {
			QMessageBox::reject();
			return;
		}
		

		miqt_exec_callback_QMessageBox_reject(this, handle__reject);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_reject() {

		QMessageBox::reject();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__contextMenuEvent == 0) {
			QMessageBox::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QMessageBox_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* param1) {

		QMessageBox::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__eventFilter == 0) {
			return QMessageBox::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QMessageBox_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* param1, QEvent* param2) {

		return QMessageBox::eventFilter(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QMessageBox::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QMessageBox_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QMessageBox::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QMessageBox::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QMessageBox_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QMessageBox::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QMessageBox::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QMessageBox_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QMessageBox::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QMessageBox::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QMessageBox_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QMessageBox::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QMessageBox::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* event) {

		QMessageBox::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QMessageBox::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* event) {

		QMessageBox::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QMessageBox::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QMessageBox::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QMessageBox::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* event) {

		QMessageBox::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QMessageBox::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* event) {

		QMessageBox::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QMessageBox::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QMessageBox::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QMessageBox::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QMessageBox::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QMessageBox::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QMessageBox::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__enterEvent == 0) {
			QMessageBox::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEnterEvent* event) {

		QMessageBox::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QMessageBox::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QMessageBox::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QMessageBox::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* event) {

		QMessageBox::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QMessageBox::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QMessageBox::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QMessageBox::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QMessageBox::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QMessageBox::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QMessageBox::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QMessageBox::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QMessageBox::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QMessageBox::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QMessageBox::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QMessageBox::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QMessageBox::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QMessageBox::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QMessageBox::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QMessageBox::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QMessageBox::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__nativeEvent == 0) {
			return QMessageBox::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QMessageBox_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QMessageBox::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QMessageBox::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QMessageBox_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QMessageBox::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QMessageBox::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QMessageBox_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QMessageBox::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QMessageBox::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QMessageBox_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QMessageBox::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QMessageBox::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QMessageBox_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QMessageBox::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QMessageBox::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QMessageBox_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QMessageBox::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QMessageBox::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QMessageBox_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QMessageBox::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QMessageBox::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QMessageBox_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QMessageBox::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QMessageBox::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QMessageBox::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QMessageBox::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QMessageBox::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QMessageBox::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QMessageBox::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QMessageBox::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QMessageBox_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QMessageBox::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QMessageBox::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QMessageBox_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QMessageBox::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QMessageBox_protectedbase_adjustPosition(bool* _dynamic_cast_ok, void* self, QWidget* param1);
	friend void QMessageBox_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QMessageBox_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QMessageBox_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QMessageBox_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QMessageBox_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QMessageBox_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QMessageBox_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QMessageBox_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QMessageBox_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QMessageBox* QMessageBox_new(QWidget* parent) {
	return new MiqtVirtualQMessageBox(parent);
}

QMessageBox* QMessageBox_new2() {
	return new MiqtVirtualQMessageBox();
}

QMessageBox* QMessageBox_new3(int icon, struct miqt_string title, struct miqt_string text) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQMessageBox(static_cast<QMessageBox::Icon>(icon), title_QString, text_QString);
}

QMessageBox* QMessageBox_new4(struct miqt_string title, struct miqt_string text, int icon, int button0, int button1, int button2) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQMessageBox(title_QString, text_QString, static_cast<QMessageBox::Icon>(icon), static_cast<int>(button0), static_cast<int>(button1), static_cast<int>(button2));
}

QMessageBox* QMessageBox_new5(int icon, struct miqt_string title, struct miqt_string text, int buttons) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQMessageBox(static_cast<QMessageBox::Icon>(icon), title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons));
}

QMessageBox* QMessageBox_new6(int icon, struct miqt_string title, struct miqt_string text, int buttons, QWidget* parent) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQMessageBox(static_cast<QMessageBox::Icon>(icon), title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons), parent);
}

QMessageBox* QMessageBox_new7(int icon, struct miqt_string title, struct miqt_string text, int buttons, QWidget* parent, int flags) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQMessageBox(static_cast<QMessageBox::Icon>(icon), title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons), parent, static_cast<Qt::WindowFlags>(flags));
}

QMessageBox* QMessageBox_new8(struct miqt_string title, struct miqt_string text, int icon, int button0, int button1, int button2, QWidget* parent) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQMessageBox(title_QString, text_QString, static_cast<QMessageBox::Icon>(icon), static_cast<int>(button0), static_cast<int>(button1), static_cast<int>(button2), parent);
}

QMessageBox* QMessageBox_new9(struct miqt_string title, struct miqt_string text, int icon, int button0, int button1, int button2, QWidget* parent, int f) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQMessageBox(title_QString, text_QString, static_cast<QMessageBox::Icon>(icon), static_cast<int>(button0), static_cast<int>(button1), static_cast<int>(button2), parent, static_cast<Qt::WindowFlags>(f));
}

void QMessageBox_virtbase(QMessageBox* src, QDialog** outptr_QDialog) {
	*outptr_QDialog = static_cast<QDialog*>(src);
}

QMetaObject* QMessageBox_metaObject(const QMessageBox* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMessageBox_metacast(QMessageBox* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMessageBox_tr(const char* s) {
	QString _ret = QMessageBox::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMessageBox_addButton(QMessageBox* self, QAbstractButton* button, int role) {
	self->addButton(button, static_cast<QMessageBox::ButtonRole>(role));
}

QPushButton* QMessageBox_addButton2(QMessageBox* self, struct miqt_string text, int role) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addButton(text_QString, static_cast<QMessageBox::ButtonRole>(role));
}

QPushButton* QMessageBox_addButtonWithButton(QMessageBox* self, int button) {
	return self->addButton(static_cast<QMessageBox::StandardButton>(button));
}

void QMessageBox_removeButton(QMessageBox* self, QAbstractButton* button) {
	self->removeButton(button);
}

struct miqt_array /* of QAbstractButton* */  QMessageBox_buttons(const QMessageBox* self) {
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

int QMessageBox_buttonRole(const QMessageBox* self, QAbstractButton* button) {
	QMessageBox::ButtonRole _ret = self->buttonRole(button);
	return static_cast<int>(_ret);
}

void QMessageBox_setStandardButtons(QMessageBox* self, int buttons) {
	self->setStandardButtons(static_cast<QMessageBox::StandardButtons>(buttons));
}

int QMessageBox_standardButtons(const QMessageBox* self) {
	QMessageBox::StandardButtons _ret = self->standardButtons();
	return static_cast<int>(_ret);
}

int QMessageBox_standardButton(const QMessageBox* self, QAbstractButton* button) {
	QMessageBox::StandardButton _ret = self->standardButton(button);
	return static_cast<int>(_ret);
}

QAbstractButton* QMessageBox_button(const QMessageBox* self, int which) {
	return self->button(static_cast<QMessageBox::StandardButton>(which));
}

QPushButton* QMessageBox_defaultButton(const QMessageBox* self) {
	return self->defaultButton();
}

void QMessageBox_setDefaultButton(QMessageBox* self, QPushButton* button) {
	self->setDefaultButton(button);
}

void QMessageBox_setDefaultButtonWithButton(QMessageBox* self, int button) {
	self->setDefaultButton(static_cast<QMessageBox::StandardButton>(button));
}

QAbstractButton* QMessageBox_escapeButton(const QMessageBox* self) {
	return self->escapeButton();
}

void QMessageBox_setEscapeButton(QMessageBox* self, QAbstractButton* button) {
	self->setEscapeButton(button);
}

void QMessageBox_setEscapeButtonWithButton(QMessageBox* self, int button) {
	self->setEscapeButton(static_cast<QMessageBox::StandardButton>(button));
}

QAbstractButton* QMessageBox_clickedButton(const QMessageBox* self) {
	return self->clickedButton();
}

struct miqt_string QMessageBox_text(const QMessageBox* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMessageBox_setText(QMessageBox* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(text_QString);
}

int QMessageBox_icon(const QMessageBox* self) {
	QMessageBox::Icon _ret = self->icon();
	return static_cast<int>(_ret);
}

void QMessageBox_setIcon(QMessageBox* self, int icon) {
	self->setIcon(static_cast<QMessageBox::Icon>(icon));
}

QPixmap* QMessageBox_iconPixmap(const QMessageBox* self) {
	return new QPixmap(self->iconPixmap());
}

void QMessageBox_setIconPixmap(QMessageBox* self, QPixmap* pixmap) {
	self->setIconPixmap(*pixmap);
}

int QMessageBox_textFormat(const QMessageBox* self) {
	Qt::TextFormat _ret = self->textFormat();
	return static_cast<int>(_ret);
}

void QMessageBox_setTextFormat(QMessageBox* self, int format) {
	self->setTextFormat(static_cast<Qt::TextFormat>(format));
}

void QMessageBox_setTextInteractionFlags(QMessageBox* self, int flags) {
	self->setTextInteractionFlags(static_cast<Qt::TextInteractionFlags>(flags));
}

int QMessageBox_textInteractionFlags(const QMessageBox* self) {
	Qt::TextInteractionFlags _ret = self->textInteractionFlags();
	return static_cast<int>(_ret);
}

void QMessageBox_setCheckBox(QMessageBox* self, QCheckBox* cb) {
	self->setCheckBox(cb);
}

QCheckBox* QMessageBox_checkBox(const QMessageBox* self) {
	return self->checkBox();
}

int QMessageBox_information(QWidget* parent, struct miqt_string title, struct miqt_string text) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QMessageBox::StandardButton _ret = QMessageBox::information(parent, title_QString, text_QString);
	return static_cast<int>(_ret);
}

int QMessageBox_information2(QWidget* parent, struct miqt_string title, struct miqt_string text, int button0) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QMessageBox::StandardButton _ret = QMessageBox::information(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButton>(button0));
	return static_cast<int>(_ret);
}

int QMessageBox_question(QWidget* parent, struct miqt_string title, struct miqt_string text) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QMessageBox::StandardButton _ret = QMessageBox::question(parent, title_QString, text_QString);
	return static_cast<int>(_ret);
}

int QMessageBox_question2(QWidget* parent, struct miqt_string title, struct miqt_string text, int button0, int button1) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return QMessageBox::question(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButton>(button0), static_cast<QMessageBox::StandardButton>(button1));
}

int QMessageBox_warning(QWidget* parent, struct miqt_string title, struct miqt_string text) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QMessageBox::StandardButton _ret = QMessageBox::warning(parent, title_QString, text_QString);
	return static_cast<int>(_ret);
}

int QMessageBox_warning2(QWidget* parent, struct miqt_string title, struct miqt_string text, int button0, int button1) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return QMessageBox::warning(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButton>(button0), static_cast<QMessageBox::StandardButton>(button1));
}

int QMessageBox_critical(QWidget* parent, struct miqt_string title, struct miqt_string text) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QMessageBox::StandardButton _ret = QMessageBox::critical(parent, title_QString, text_QString);
	return static_cast<int>(_ret);
}

int QMessageBox_critical2(QWidget* parent, struct miqt_string title, struct miqt_string text, int button0, int button1) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return QMessageBox::critical(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButton>(button0), static_cast<QMessageBox::StandardButton>(button1));
}

void QMessageBox_about(QWidget* parent, struct miqt_string title, struct miqt_string text) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QMessageBox::about(parent, title_QString, text_QString);
}

void QMessageBox_aboutQt(QWidget* parent) {
	QMessageBox::aboutQt(parent);
}

int QMessageBox_information3(QWidget* parent, struct miqt_string title, struct miqt_string text, int button0) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return QMessageBox::information(parent, title_QString, text_QString, static_cast<int>(button0));
}

int QMessageBox_information4(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
	return QMessageBox::information(parent, title_QString, text_QString, button0Text_QString);
}

int QMessageBox_question3(QWidget* parent, struct miqt_string title, struct miqt_string text, int button0) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return QMessageBox::question(parent, title_QString, text_QString, static_cast<int>(button0));
}

int QMessageBox_question4(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
	return QMessageBox::question(parent, title_QString, text_QString, button0Text_QString);
}

int QMessageBox_warning3(QWidget* parent, struct miqt_string title, struct miqt_string text, int button0, int button1) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return QMessageBox::warning(parent, title_QString, text_QString, static_cast<int>(button0), static_cast<int>(button1));
}

int QMessageBox_warning4(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
	return QMessageBox::warning(parent, title_QString, text_QString, button0Text_QString);
}

int QMessageBox_critical3(QWidget* parent, struct miqt_string title, struct miqt_string text, int button0, int button1) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return QMessageBox::critical(parent, title_QString, text_QString, static_cast<int>(button0), static_cast<int>(button1));
}

int QMessageBox_critical4(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
	return QMessageBox::critical(parent, title_QString, text_QString, button0Text_QString);
}

struct miqt_string QMessageBox_buttonText(const QMessageBox* self, int button) {
	QString _ret = self->buttonText(static_cast<int>(button));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMessageBox_setButtonText(QMessageBox* self, int button, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setButtonText(static_cast<int>(button), text_QString);
}

struct miqt_string QMessageBox_informativeText(const QMessageBox* self) {
	QString _ret = self->informativeText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMessageBox_setInformativeText(QMessageBox* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setInformativeText(text_QString);
}

struct miqt_string QMessageBox_detailedText(const QMessageBox* self) {
	QString _ret = self->detailedText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMessageBox_setDetailedText(QMessageBox* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setDetailedText(text_QString);
}

void QMessageBox_setWindowTitle(QMessageBox* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	self->setWindowTitle(title_QString);
}

void QMessageBox_setWindowModality(QMessageBox* self, int windowModality) {
	self->setWindowModality(static_cast<Qt::WindowModality>(windowModality));
}

QPixmap* QMessageBox_standardIcon(int icon) {
	return new QPixmap(QMessageBox::standardIcon(static_cast<QMessageBox::Icon>(icon)));
}

void QMessageBox_buttonClicked(QMessageBox* self, QAbstractButton* button) {
	self->buttonClicked(button);
}

void QMessageBox_connect_buttonClicked(QMessageBox* self, intptr_t slot) {
	MiqtVirtualQMessageBox::connect(self, static_cast<void (QMessageBox::*)(QAbstractButton*)>(&QMessageBox::buttonClicked), self, [=](QAbstractButton* button) {
		QAbstractButton* sigval1 = button;
		miqt_exec_callback_QMessageBox_buttonClicked(slot, sigval1);
	});
}

struct miqt_string QMessageBox_tr2(const char* s, const char* c) {
	QString _ret = QMessageBox::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMessageBox_tr3(const char* s, const char* c, int n) {
	QString _ret = QMessageBox::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QMessageBox_information42(QWidget* parent, struct miqt_string title, struct miqt_string text, int buttons) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QMessageBox::StandardButton _ret = QMessageBox::information(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons));
	return static_cast<int>(_ret);
}

int QMessageBox_information5(QWidget* parent, struct miqt_string title, struct miqt_string text, int buttons, int defaultButton) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QMessageBox::StandardButton _ret = QMessageBox::information(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons), static_cast<QMessageBox::StandardButton>(defaultButton));
	return static_cast<int>(_ret);
}

int QMessageBox_information52(QWidget* parent, struct miqt_string title, struct miqt_string text, int button0, int button1) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QMessageBox::StandardButton _ret = QMessageBox::information(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButton>(button0), static_cast<QMessageBox::StandardButton>(button1));
	return static_cast<int>(_ret);
}

int QMessageBox_question42(QWidget* parent, struct miqt_string title, struct miqt_string text, int buttons) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QMessageBox::StandardButton _ret = QMessageBox::question(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons));
	return static_cast<int>(_ret);
}

int QMessageBox_question5(QWidget* parent, struct miqt_string title, struct miqt_string text, int buttons, int defaultButton) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QMessageBox::StandardButton _ret = QMessageBox::question(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons), static_cast<QMessageBox::StandardButton>(defaultButton));
	return static_cast<int>(_ret);
}

int QMessageBox_warning42(QWidget* parent, struct miqt_string title, struct miqt_string text, int buttons) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QMessageBox::StandardButton _ret = QMessageBox::warning(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons));
	return static_cast<int>(_ret);
}

int QMessageBox_warning5(QWidget* parent, struct miqt_string title, struct miqt_string text, int buttons, int defaultButton) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QMessageBox::StandardButton _ret = QMessageBox::warning(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons), static_cast<QMessageBox::StandardButton>(defaultButton));
	return static_cast<int>(_ret);
}

int QMessageBox_critical42(QWidget* parent, struct miqt_string title, struct miqt_string text, int buttons) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QMessageBox::StandardButton _ret = QMessageBox::critical(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons));
	return static_cast<int>(_ret);
}

int QMessageBox_critical5(QWidget* parent, struct miqt_string title, struct miqt_string text, int buttons, int defaultButton) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QMessageBox::StandardButton _ret = QMessageBox::critical(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons), static_cast<QMessageBox::StandardButton>(defaultButton));
	return static_cast<int>(_ret);
}

void QMessageBox_aboutQt2(QWidget* parent, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QMessageBox::aboutQt(parent, title_QString);
}

int QMessageBox_information53(QWidget* parent, struct miqt_string title, struct miqt_string text, int button0, int button1) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return QMessageBox::information(parent, title_QString, text_QString, static_cast<int>(button0), static_cast<int>(button1));
}

int QMessageBox_information6(QWidget* parent, struct miqt_string title, struct miqt_string text, int button0, int button1, int button2) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return QMessageBox::information(parent, title_QString, text_QString, static_cast<int>(button0), static_cast<int>(button1), static_cast<int>(button2));
}

int QMessageBox_information54(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
	QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
	return QMessageBox::information(parent, title_QString, text_QString, button0Text_QString, button1Text_QString);
}

int QMessageBox_information62(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text, struct miqt_string button2Text) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
	QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
	QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
	return QMessageBox::information(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString);
}

int QMessageBox_information7(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text, struct miqt_string button2Text, int defaultButtonNumber) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
	QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
	QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
	return QMessageBox::information(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString, static_cast<int>(defaultButtonNumber));
}

int QMessageBox_information8(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text, struct miqt_string button2Text, int defaultButtonNumber, int escapeButtonNumber) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
	QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
	QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
	return QMessageBox::information(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString, static_cast<int>(defaultButtonNumber), static_cast<int>(escapeButtonNumber));
}

int QMessageBox_question52(QWidget* parent, struct miqt_string title, struct miqt_string text, int button0, int button1) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return QMessageBox::question(parent, title_QString, text_QString, static_cast<int>(button0), static_cast<int>(button1));
}

int QMessageBox_question6(QWidget* parent, struct miqt_string title, struct miqt_string text, int button0, int button1, int button2) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return QMessageBox::question(parent, title_QString, text_QString, static_cast<int>(button0), static_cast<int>(button1), static_cast<int>(button2));
}

int QMessageBox_question53(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
	QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
	return QMessageBox::question(parent, title_QString, text_QString, button0Text_QString, button1Text_QString);
}

int QMessageBox_question62(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text, struct miqt_string button2Text) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
	QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
	QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
	return QMessageBox::question(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString);
}

int QMessageBox_question7(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text, struct miqt_string button2Text, int defaultButtonNumber) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
	QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
	QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
	return QMessageBox::question(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString, static_cast<int>(defaultButtonNumber));
}

int QMessageBox_question8(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text, struct miqt_string button2Text, int defaultButtonNumber, int escapeButtonNumber) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
	QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
	QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
	return QMessageBox::question(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString, static_cast<int>(defaultButtonNumber), static_cast<int>(escapeButtonNumber));
}

int QMessageBox_warning6(QWidget* parent, struct miqt_string title, struct miqt_string text, int button0, int button1, int button2) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return QMessageBox::warning(parent, title_QString, text_QString, static_cast<int>(button0), static_cast<int>(button1), static_cast<int>(button2));
}

int QMessageBox_warning52(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
	QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
	return QMessageBox::warning(parent, title_QString, text_QString, button0Text_QString, button1Text_QString);
}

int QMessageBox_warning62(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text, struct miqt_string button2Text) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
	QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
	QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
	return QMessageBox::warning(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString);
}

int QMessageBox_warning7(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text, struct miqt_string button2Text, int defaultButtonNumber) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
	QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
	QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
	return QMessageBox::warning(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString, static_cast<int>(defaultButtonNumber));
}

int QMessageBox_warning8(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text, struct miqt_string button2Text, int defaultButtonNumber, int escapeButtonNumber) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
	QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
	QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
	return QMessageBox::warning(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString, static_cast<int>(defaultButtonNumber), static_cast<int>(escapeButtonNumber));
}

int QMessageBox_critical6(QWidget* parent, struct miqt_string title, struct miqt_string text, int button0, int button1, int button2) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return QMessageBox::critical(parent, title_QString, text_QString, static_cast<int>(button0), static_cast<int>(button1), static_cast<int>(button2));
}

int QMessageBox_critical52(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
	QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
	return QMessageBox::critical(parent, title_QString, text_QString, button0Text_QString, button1Text_QString);
}

int QMessageBox_critical62(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text, struct miqt_string button2Text) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
	QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
	QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
	return QMessageBox::critical(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString);
}

int QMessageBox_critical7(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text, struct miqt_string button2Text, int defaultButtonNumber) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
	QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
	QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
	return QMessageBox::critical(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString, static_cast<int>(defaultButtonNumber));
}

int QMessageBox_critical8(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text, struct miqt_string button2Text, int defaultButtonNumber, int escapeButtonNumber) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
	QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
	QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
	return QMessageBox::critical(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString, static_cast<int>(defaultButtonNumber), static_cast<int>(escapeButtonNumber));
}

bool QMessageBox_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QMessageBox_virtualbase_event(void* self, QEvent* e) {
	return ( (MiqtVirtualQMessageBox*)(self) )->virtualbase_event(e);
}

bool QMessageBox_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QMessageBox_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_resizeEvent(event);
}

bool QMessageBox_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QMessageBox_virtualbase_showEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_showEvent(event);
}

bool QMessageBox_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QMessageBox_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_closeEvent(event);
}

bool QMessageBox_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QMessageBox_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_keyPressEvent(event);
}

bool QMessageBox_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QMessageBox_virtualbase_changeEvent(void* self, QEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_changeEvent(event);
}

bool QMessageBox_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QMessageBox_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_setVisible(visible);
}

bool QMessageBox_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QMessageBox_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQMessageBox*)(self) )->virtualbase_sizeHint();
}

bool QMessageBox_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QMessageBox_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQMessageBox*)(self) )->virtualbase_minimumSizeHint();
}

bool QMessageBox_override_virtual_open(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__open = slot;
	return true;
}

void QMessageBox_virtualbase_open(void* self) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_open();
}

bool QMessageBox_override_virtual_exec(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__exec = slot;
	return true;
}

int QMessageBox_virtualbase_exec(void* self) {
	return ( (MiqtVirtualQMessageBox*)(self) )->virtualbase_exec();
}

bool QMessageBox_override_virtual_done(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__done = slot;
	return true;
}

void QMessageBox_virtualbase_done(void* self, int param1) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_done(param1);
}

bool QMessageBox_override_virtual_accept(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__accept = slot;
	return true;
}

void QMessageBox_virtualbase_accept(void* self) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_accept();
}

bool QMessageBox_override_virtual_reject(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__reject = slot;
	return true;
}

void QMessageBox_virtualbase_reject(void* self) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_reject();
}

bool QMessageBox_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QMessageBox_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_contextMenuEvent(param1);
}

bool QMessageBox_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QMessageBox_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQMessageBox*)(self) )->virtualbase_eventFilter(param1, param2);
}

bool QMessageBox_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QMessageBox_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQMessageBox*)(self) )->virtualbase_devType();
}

bool QMessageBox_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QMessageBox_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQMessageBox*)(self) )->virtualbase_heightForWidth(param1);
}

bool QMessageBox_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QMessageBox_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQMessageBox*)(self) )->virtualbase_hasHeightForWidth();
}

bool QMessageBox_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QMessageBox_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQMessageBox*)(self) )->virtualbase_paintEngine();
}

bool QMessageBox_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QMessageBox_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_mousePressEvent(event);
}

bool QMessageBox_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QMessageBox_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QMessageBox_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QMessageBox_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QMessageBox_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QMessageBox_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QMessageBox_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QMessageBox_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_wheelEvent(event);
}

bool QMessageBox_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QMessageBox_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QMessageBox_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QMessageBox_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_focusInEvent(event);
}

bool QMessageBox_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QMessageBox_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_focusOutEvent(event);
}

bool QMessageBox_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QMessageBox_virtualbase_enterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_enterEvent(event);
}

bool QMessageBox_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QMessageBox_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_leaveEvent(event);
}

bool QMessageBox_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QMessageBox_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_paintEvent(event);
}

bool QMessageBox_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QMessageBox_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_moveEvent(event);
}

bool QMessageBox_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QMessageBox_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_tabletEvent(event);
}

bool QMessageBox_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QMessageBox_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_actionEvent(event);
}

bool QMessageBox_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QMessageBox_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QMessageBox_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QMessageBox_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QMessageBox_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QMessageBox_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QMessageBox_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QMessageBox_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_dropEvent(event);
}

bool QMessageBox_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QMessageBox_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_hideEvent(event);
}

bool QMessageBox_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QMessageBox_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQMessageBox*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QMessageBox_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QMessageBox_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQMessageBox*)(self) )->virtualbase_metric(param1);
}

bool QMessageBox_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QMessageBox_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQMessageBox*)(self) )->virtualbase_initPainter(painter);
}

bool QMessageBox_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QMessageBox_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQMessageBox*)(self) )->virtualbase_redirected(offset);
}

bool QMessageBox_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QMessageBox_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQMessageBox*)(self) )->virtualbase_sharedPainter();
}

bool QMessageBox_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QMessageBox_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QMessageBox_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QMessageBox_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQMessageBox*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QMessageBox_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QMessageBox_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQMessageBox*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QMessageBox_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QMessageBox_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_timerEvent(event);
}

bool QMessageBox_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QMessageBox_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_childEvent(event);
}

bool QMessageBox_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QMessageBox_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_customEvent(event);
}

bool QMessageBox_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QMessageBox_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_connectNotify(signal);
}

bool QMessageBox_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QMessageBox_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_disconnectNotify(signal);
}

void QMessageBox_protectedbase_adjustPosition(bool* _dynamic_cast_ok, void* self, QWidget* param1) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->adjustPosition(param1);

}

void QMessageBox_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QMessageBox_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QMessageBox_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QMessageBox_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QMessageBox_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QMessageBox_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QMessageBox_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QMessageBox_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QMessageBox_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QMessageBox_delete(QMessageBox* self) {
	delete self;
}

