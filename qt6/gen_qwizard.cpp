#include <QAbstractButton>
#include <QActionEvent>
#include <QByteArray>
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
#include <QWizard>
#include <QWizardPage>
#include <qwizard.h>
#include "gen_qwizard.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QWizard_currentIdChanged(intptr_t, int);
void miqt_exec_callback_QWizard_helpRequested(intptr_t);
void miqt_exec_callback_QWizard_customButtonClicked(intptr_t, int);
void miqt_exec_callback_QWizard_pageAdded(intptr_t, int);
void miqt_exec_callback_QWizard_pageRemoved(intptr_t, int);
bool miqt_exec_callback_QWizard_validateCurrentPage(QWizard*, intptr_t);
int miqt_exec_callback_QWizard_nextId(const QWizard*, intptr_t);
void miqt_exec_callback_QWizard_setVisible(QWizard*, intptr_t, bool);
QSize* miqt_exec_callback_QWizard_sizeHint(const QWizard*, intptr_t);
bool miqt_exec_callback_QWizard_event(QWizard*, intptr_t, QEvent*);
void miqt_exec_callback_QWizard_resizeEvent(QWizard*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QWizard_paintEvent(QWizard*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QWizard_done(QWizard*, intptr_t, int);
void miqt_exec_callback_QWizard_initializePage(QWizard*, intptr_t, int);
void miqt_exec_callback_QWizard_cleanupPage(QWizard*, intptr_t, int);
QSize* miqt_exec_callback_QWizard_minimumSizeHint(const QWizard*, intptr_t);
void miqt_exec_callback_QWizard_open(QWizard*, intptr_t);
int miqt_exec_callback_QWizard_exec(QWizard*, intptr_t);
void miqt_exec_callback_QWizard_accept(QWizard*, intptr_t);
void miqt_exec_callback_QWizard_reject(QWizard*, intptr_t);
void miqt_exec_callback_QWizard_keyPressEvent(QWizard*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QWizard_closeEvent(QWizard*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QWizard_showEvent(QWizard*, intptr_t, QShowEvent*);
void miqt_exec_callback_QWizard_contextMenuEvent(QWizard*, intptr_t, QContextMenuEvent*);
bool miqt_exec_callback_QWizard_eventFilter(QWizard*, intptr_t, QObject*, QEvent*);
int miqt_exec_callback_QWizard_devType(const QWizard*, intptr_t);
int miqt_exec_callback_QWizard_heightForWidth(const QWizard*, intptr_t, int);
bool miqt_exec_callback_QWizard_hasHeightForWidth(const QWizard*, intptr_t);
QPaintEngine* miqt_exec_callback_QWizard_paintEngine(const QWizard*, intptr_t);
void miqt_exec_callback_QWizard_mousePressEvent(QWizard*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWizard_mouseReleaseEvent(QWizard*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWizard_mouseDoubleClickEvent(QWizard*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWizard_mouseMoveEvent(QWizard*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWizard_wheelEvent(QWizard*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QWizard_keyReleaseEvent(QWizard*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QWizard_focusInEvent(QWizard*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QWizard_focusOutEvent(QWizard*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QWizard_enterEvent(QWizard*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QWizard_leaveEvent(QWizard*, intptr_t, QEvent*);
void miqt_exec_callback_QWizard_moveEvent(QWizard*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QWizard_tabletEvent(QWizard*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QWizard_actionEvent(QWizard*, intptr_t, QActionEvent*);
void miqt_exec_callback_QWizard_dragEnterEvent(QWizard*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QWizard_dragMoveEvent(QWizard*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QWizard_dragLeaveEvent(QWizard*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QWizard_dropEvent(QWizard*, intptr_t, QDropEvent*);
void miqt_exec_callback_QWizard_hideEvent(QWizard*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QWizard_nativeEvent(QWizard*, intptr_t, struct miqt_string, void*, intptr_t*);
void miqt_exec_callback_QWizard_changeEvent(QWizard*, intptr_t, QEvent*);
int miqt_exec_callback_QWizard_metric(const QWizard*, intptr_t, int);
void miqt_exec_callback_QWizard_initPainter(const QWizard*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QWizard_redirected(const QWizard*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QWizard_sharedPainter(const QWizard*, intptr_t);
void miqt_exec_callback_QWizard_inputMethodEvent(QWizard*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QWizard_inputMethodQuery(const QWizard*, intptr_t, int);
bool miqt_exec_callback_QWizard_focusNextPrevChild(QWizard*, intptr_t, bool);
void miqt_exec_callback_QWizard_timerEvent(QWizard*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QWizard_childEvent(QWizard*, intptr_t, QChildEvent*);
void miqt_exec_callback_QWizard_customEvent(QWizard*, intptr_t, QEvent*);
void miqt_exec_callback_QWizard_connectNotify(QWizard*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QWizard_disconnectNotify(QWizard*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QWizardPage_completeChanged(intptr_t);
void miqt_exec_callback_QWizardPage_initializePage(QWizardPage*, intptr_t);
void miqt_exec_callback_QWizardPage_cleanupPage(QWizardPage*, intptr_t);
bool miqt_exec_callback_QWizardPage_validatePage(QWizardPage*, intptr_t);
bool miqt_exec_callback_QWizardPage_isComplete(const QWizardPage*, intptr_t);
int miqt_exec_callback_QWizardPage_nextId(const QWizardPage*, intptr_t);
int miqt_exec_callback_QWizardPage_devType(const QWizardPage*, intptr_t);
void miqt_exec_callback_QWizardPage_setVisible(QWizardPage*, intptr_t, bool);
QSize* miqt_exec_callback_QWizardPage_sizeHint(const QWizardPage*, intptr_t);
QSize* miqt_exec_callback_QWizardPage_minimumSizeHint(const QWizardPage*, intptr_t);
int miqt_exec_callback_QWizardPage_heightForWidth(const QWizardPage*, intptr_t, int);
bool miqt_exec_callback_QWizardPage_hasHeightForWidth(const QWizardPage*, intptr_t);
QPaintEngine* miqt_exec_callback_QWizardPage_paintEngine(const QWizardPage*, intptr_t);
bool miqt_exec_callback_QWizardPage_event(QWizardPage*, intptr_t, QEvent*);
void miqt_exec_callback_QWizardPage_mousePressEvent(QWizardPage*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWizardPage_mouseReleaseEvent(QWizardPage*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWizardPage_mouseDoubleClickEvent(QWizardPage*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWizardPage_mouseMoveEvent(QWizardPage*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWizardPage_wheelEvent(QWizardPage*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QWizardPage_keyPressEvent(QWizardPage*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QWizardPage_keyReleaseEvent(QWizardPage*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QWizardPage_focusInEvent(QWizardPage*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QWizardPage_focusOutEvent(QWizardPage*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QWizardPage_enterEvent(QWizardPage*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QWizardPage_leaveEvent(QWizardPage*, intptr_t, QEvent*);
void miqt_exec_callback_QWizardPage_paintEvent(QWizardPage*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QWizardPage_moveEvent(QWizardPage*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QWizardPage_resizeEvent(QWizardPage*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QWizardPage_closeEvent(QWizardPage*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QWizardPage_contextMenuEvent(QWizardPage*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QWizardPage_tabletEvent(QWizardPage*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QWizardPage_actionEvent(QWizardPage*, intptr_t, QActionEvent*);
void miqt_exec_callback_QWizardPage_dragEnterEvent(QWizardPage*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QWizardPage_dragMoveEvent(QWizardPage*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QWizardPage_dragLeaveEvent(QWizardPage*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QWizardPage_dropEvent(QWizardPage*, intptr_t, QDropEvent*);
void miqt_exec_callback_QWizardPage_showEvent(QWizardPage*, intptr_t, QShowEvent*);
void miqt_exec_callback_QWizardPage_hideEvent(QWizardPage*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QWizardPage_nativeEvent(QWizardPage*, intptr_t, struct miqt_string, void*, intptr_t*);
void miqt_exec_callback_QWizardPage_changeEvent(QWizardPage*, intptr_t, QEvent*);
int miqt_exec_callback_QWizardPage_metric(const QWizardPage*, intptr_t, int);
void miqt_exec_callback_QWizardPage_initPainter(const QWizardPage*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QWizardPage_redirected(const QWizardPage*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QWizardPage_sharedPainter(const QWizardPage*, intptr_t);
void miqt_exec_callback_QWizardPage_inputMethodEvent(QWizardPage*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QWizardPage_inputMethodQuery(const QWizardPage*, intptr_t, int);
bool miqt_exec_callback_QWizardPage_focusNextPrevChild(QWizardPage*, intptr_t, bool);
bool miqt_exec_callback_QWizardPage_eventFilter(QWizardPage*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QWizardPage_timerEvent(QWizardPage*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QWizardPage_childEvent(QWizardPage*, intptr_t, QChildEvent*);
void miqt_exec_callback_QWizardPage_customEvent(QWizardPage*, intptr_t, QEvent*);
void miqt_exec_callback_QWizardPage_connectNotify(QWizardPage*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QWizardPage_disconnectNotify(QWizardPage*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQWizard final : public QWizard {
public:

	MiqtVirtualQWizard(QWidget* parent): QWizard(parent) {};
	MiqtVirtualQWizard(): QWizard() {};
	MiqtVirtualQWizard(QWidget* parent, Qt::WindowFlags flags): QWizard(parent, flags) {};

	virtual ~MiqtVirtualQWizard() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__validateCurrentPage = 0;

	// Subclass to allow providing a Go implementation
	virtual bool validateCurrentPage() override {
		if (handle__validateCurrentPage == 0) {
			return QWizard::validateCurrentPage();
		}
		

		bool callback_return_value = miqt_exec_callback_QWizard_validateCurrentPage(this, handle__validateCurrentPage);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_validateCurrentPage() {

		return QWizard::validateCurrentPage();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nextId = 0;

	// Subclass to allow providing a Go implementation
	virtual int nextId() const override {
		if (handle__nextId == 0) {
			return QWizard::nextId();
		}
		

		int callback_return_value = miqt_exec_callback_QWizard_nextId(this, handle__nextId);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_nextId() const {

		return QWizard::nextId();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QWizard::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QWizard_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QWizard::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QWizard::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QWizard_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QWizard::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QWizard::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QWizard_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QWizard::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QWizard::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QWizard_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* event) {

		QWizard::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QWizard::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QWizard_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* event) {

		QWizard::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__done = 0;

	// Subclass to allow providing a Go implementation
	virtual void done(int result) override {
		if (handle__done == 0) {
			QWizard::done(result);
			return;
		}
		
		int sigval1 = result;

		miqt_exec_callback_QWizard_done(this, handle__done, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_done(int result) {

		QWizard::done(static_cast<int>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initializePage = 0;

	// Subclass to allow providing a Go implementation
	virtual void initializePage(int id) override {
		if (handle__initializePage == 0) {
			QWizard::initializePage(id);
			return;
		}
		
		int sigval1 = id;

		miqt_exec_callback_QWizard_initializePage(this, handle__initializePage, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initializePage(int id) {

		QWizard::initializePage(static_cast<int>(id));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__cleanupPage = 0;

	// Subclass to allow providing a Go implementation
	virtual void cleanupPage(int id) override {
		if (handle__cleanupPage == 0) {
			QWizard::cleanupPage(id);
			return;
		}
		
		int sigval1 = id;

		miqt_exec_callback_QWizard_cleanupPage(this, handle__cleanupPage, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_cleanupPage(int id) {

		QWizard::cleanupPage(static_cast<int>(id));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QWizard::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QWizard_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QWizard::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__open = 0;

	// Subclass to allow providing a Go implementation
	virtual void open() override {
		if (handle__open == 0) {
			QWizard::open();
			return;
		}
		

		miqt_exec_callback_QWizard_open(this, handle__open);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_open() {

		QWizard::open();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__exec = 0;

	// Subclass to allow providing a Go implementation
	virtual int exec() override {
		if (handle__exec == 0) {
			return QWizard::exec();
		}
		

		int callback_return_value = miqt_exec_callback_QWizard_exec(this, handle__exec);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_exec() {

		return QWizard::exec();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__accept = 0;

	// Subclass to allow providing a Go implementation
	virtual void accept() override {
		if (handle__accept == 0) {
			QWizard::accept();
			return;
		}
		

		miqt_exec_callback_QWizard_accept(this, handle__accept);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_accept() {

		QWizard::accept();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__reject = 0;

	// Subclass to allow providing a Go implementation
	virtual void reject() override {
		if (handle__reject == 0) {
			QWizard::reject();
			return;
		}
		

		miqt_exec_callback_QWizard_reject(this, handle__reject);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_reject() {

		QWizard::reject();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__keyPressEvent == 0) {
			QWizard::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QWizard_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* param1) {

		QWizard::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* param1) override {
		if (handle__closeEvent == 0) {
			QWizard::closeEvent(param1);
			return;
		}
		
		QCloseEvent* sigval1 = param1;

		miqt_exec_callback_QWizard_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* param1) {

		QWizard::closeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (handle__showEvent == 0) {
			QWizard::showEvent(param1);
			return;
		}
		
		QShowEvent* sigval1 = param1;

		miqt_exec_callback_QWizard_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* param1) {

		QWizard::showEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__contextMenuEvent == 0) {
			QWizard::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QWizard_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* param1) {

		QWizard::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__eventFilter == 0) {
			return QWizard::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QWizard_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* param1, QEvent* param2) {

		return QWizard::eventFilter(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QWizard::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QWizard_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QWizard::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QWizard::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QWizard_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QWizard::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QWizard::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QWizard_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QWizard::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QWizard::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QWizard_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QWizard::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QWizard::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QWizard_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* event) {

		QWizard::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QWizard::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QWizard_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* event) {

		QWizard::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QWizard::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QWizard_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QWizard::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QWizard::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QWizard_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* event) {

		QWizard::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QWizard::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QWizard_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* event) {

		QWizard::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QWizard::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QWizard_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QWizard::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QWizard::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QWizard_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QWizard::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QWizard::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QWizard_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QWizard::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__enterEvent == 0) {
			QWizard::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QWizard_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEnterEvent* event) {

		QWizard::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QWizard::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWizard_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QWizard::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QWizard::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QWizard_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QWizard::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QWizard::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QWizard_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QWizard::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QWizard::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QWizard_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QWizard::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QWizard::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QWizard_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QWizard::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QWizard::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QWizard_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QWizard::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QWizard::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QWizard_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QWizard::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QWizard::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QWizard_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QWizard::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QWizard::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QWizard_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QWizard::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__nativeEvent == 0) {
			return QWizard::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QWizard_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QWizard::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QWizard::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QWizard_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* param1) {

		QWizard::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QWizard::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QWizard_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QWizard::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QWizard::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QWizard_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QWizard::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QWizard::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QWizard_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QWizard::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QWizard::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QWizard_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QWizard::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QWizard::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QWizard_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QWizard::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QWizard::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QWizard_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QWizard::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QWizard::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QWizard_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QWizard::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QWizard::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QWizard_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QWizard::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QWizard::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QWizard_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QWizard::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QWizard::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWizard_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QWizard::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QWizard::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWizard_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QWizard::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QWizard::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWizard_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QWizard::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QWizard_protectedbase_adjustPosition(bool* _dynamic_cast_ok, void* self, QWidget* param1);
	friend void QWizard_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QWizard_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QWizard_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QWizard_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QWizard_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QWizard_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QWizard_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QWizard_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QWizard_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QWizard* QWizard_new(QWidget* parent) {
	return new MiqtVirtualQWizard(parent);
}

QWizard* QWizard_new2() {
	return new MiqtVirtualQWizard();
}

QWizard* QWizard_new3(QWidget* parent, int flags) {
	return new MiqtVirtualQWizard(parent, static_cast<Qt::WindowFlags>(flags));
}

void QWizard_virtbase(QWizard* src, QDialog** outptr_QDialog) {
	*outptr_QDialog = static_cast<QDialog*>(src);
}

QMetaObject* QWizard_metaObject(const QWizard* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWizard_metacast(QWizard* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWizard_tr(const char* s) {
	QString _ret = QWizard::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QWizard_addPage(QWizard* self, QWizardPage* page) {
	return self->addPage(page);
}

void QWizard_setPage(QWizard* self, int id, QWizardPage* page) {
	self->setPage(static_cast<int>(id), page);
}

void QWizard_removePage(QWizard* self, int id) {
	self->removePage(static_cast<int>(id));
}

QWizardPage* QWizard_page(const QWizard* self, int id) {
	return self->page(static_cast<int>(id));
}

bool QWizard_hasVisitedPage(const QWizard* self, int id) {
	return self->hasVisitedPage(static_cast<int>(id));
}

struct miqt_array /* of int */  QWizard_visitedIds(const QWizard* self) {
	QList<int> _ret = self->visitedIds();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of int */  QWizard_pageIds(const QWizard* self) {
	QList<int> _ret = self->pageIds();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QWizard_setStartId(QWizard* self, int id) {
	self->setStartId(static_cast<int>(id));
}

int QWizard_startId(const QWizard* self) {
	return self->startId();
}

QWizardPage* QWizard_currentPage(const QWizard* self) {
	return self->currentPage();
}

int QWizard_currentId(const QWizard* self) {
	return self->currentId();
}

bool QWizard_validateCurrentPage(QWizard* self) {
	return self->validateCurrentPage();
}

int QWizard_nextId(const QWizard* self) {
	return self->nextId();
}

void QWizard_setField(QWizard* self, struct miqt_string name, QVariant* value) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setField(name_QString, *value);
}

QVariant* QWizard_field(const QWizard* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QVariant(self->field(name_QString));
}

void QWizard_setWizardStyle(QWizard* self, int style) {
	self->setWizardStyle(static_cast<QWizard::WizardStyle>(style));
}

int QWizard_wizardStyle(const QWizard* self) {
	QWizard::WizardStyle _ret = self->wizardStyle();
	return static_cast<int>(_ret);
}

void QWizard_setOption(QWizard* self, int option) {
	self->setOption(static_cast<QWizard::WizardOption>(option));
}

bool QWizard_testOption(const QWizard* self, int option) {
	return self->testOption(static_cast<QWizard::WizardOption>(option));
}

void QWizard_setOptions(QWizard* self, int options) {
	self->setOptions(static_cast<QWizard::WizardOptions>(options));
}

int QWizard_options(const QWizard* self) {
	QWizard::WizardOptions _ret = self->options();
	return static_cast<int>(_ret);
}

void QWizard_setButtonText(QWizard* self, int which, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setButtonText(static_cast<QWizard::WizardButton>(which), text_QString);
}

struct miqt_string QWizard_buttonText(const QWizard* self, int which) {
	QString _ret = self->buttonText(static_cast<QWizard::WizardButton>(which));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWizard_setButtonLayout(QWizard* self, struct miqt_array /* of int */  layout) {
	QList<QWizard::WizardButton> layout_QList;
	layout_QList.reserve(layout.len);
	int* layout_arr = static_cast<int*>(layout.data);
	for(size_t i = 0; i < layout.len; ++i) {
		layout_QList.push_back(static_cast<QWizard::WizardButton>(layout_arr[i]));
	}
	self->setButtonLayout(layout_QList);
}

void QWizard_setButton(QWizard* self, int which, QAbstractButton* button) {
	self->setButton(static_cast<QWizard::WizardButton>(which), button);
}

QAbstractButton* QWizard_button(const QWizard* self, int which) {
	return self->button(static_cast<QWizard::WizardButton>(which));
}

void QWizard_setTitleFormat(QWizard* self, int format) {
	self->setTitleFormat(static_cast<Qt::TextFormat>(format));
}

int QWizard_titleFormat(const QWizard* self) {
	Qt::TextFormat _ret = self->titleFormat();
	return static_cast<int>(_ret);
}

void QWizard_setSubTitleFormat(QWizard* self, int format) {
	self->setSubTitleFormat(static_cast<Qt::TextFormat>(format));
}

int QWizard_subTitleFormat(const QWizard* self) {
	Qt::TextFormat _ret = self->subTitleFormat();
	return static_cast<int>(_ret);
}

void QWizard_setPixmap(QWizard* self, int which, QPixmap* pixmap) {
	self->setPixmap(static_cast<QWizard::WizardPixmap>(which), *pixmap);
}

QPixmap* QWizard_pixmap(const QWizard* self, int which) {
	return new QPixmap(self->pixmap(static_cast<QWizard::WizardPixmap>(which)));
}

void QWizard_setSideWidget(QWizard* self, QWidget* widget) {
	self->setSideWidget(widget);
}

QWidget* QWizard_sideWidget(const QWizard* self) {
	return self->sideWidget();
}

void QWizard_setDefaultProperty(QWizard* self, const char* className, const char* property, const char* changedSignal) {
	self->setDefaultProperty(className, property, changedSignal);
}

void QWizard_setVisible(QWizard* self, bool visible) {
	self->setVisible(visible);
}

QSize* QWizard_sizeHint(const QWizard* self) {
	return new QSize(self->sizeHint());
}

void QWizard_currentIdChanged(QWizard* self, int id) {
	self->currentIdChanged(static_cast<int>(id));
}

void QWizard_connect_currentIdChanged(QWizard* self, intptr_t slot) {
	MiqtVirtualQWizard::connect(self, static_cast<void (QWizard::*)(int)>(&QWizard::currentIdChanged), self, [=](int id) {
		int sigval1 = id;
		miqt_exec_callback_QWizard_currentIdChanged(slot, sigval1);
	});
}

void QWizard_helpRequested(QWizard* self) {
	self->helpRequested();
}

void QWizard_connect_helpRequested(QWizard* self, intptr_t slot) {
	MiqtVirtualQWizard::connect(self, static_cast<void (QWizard::*)()>(&QWizard::helpRequested), self, [=]() {
		miqt_exec_callback_QWizard_helpRequested(slot);
	});
}

void QWizard_customButtonClicked(QWizard* self, int which) {
	self->customButtonClicked(static_cast<int>(which));
}

void QWizard_connect_customButtonClicked(QWizard* self, intptr_t slot) {
	MiqtVirtualQWizard::connect(self, static_cast<void (QWizard::*)(int)>(&QWizard::customButtonClicked), self, [=](int which) {
		int sigval1 = which;
		miqt_exec_callback_QWizard_customButtonClicked(slot, sigval1);
	});
}

void QWizard_pageAdded(QWizard* self, int id) {
	self->pageAdded(static_cast<int>(id));
}

void QWizard_connect_pageAdded(QWizard* self, intptr_t slot) {
	MiqtVirtualQWizard::connect(self, static_cast<void (QWizard::*)(int)>(&QWizard::pageAdded), self, [=](int id) {
		int sigval1 = id;
		miqt_exec_callback_QWizard_pageAdded(slot, sigval1);
	});
}

void QWizard_pageRemoved(QWizard* self, int id) {
	self->pageRemoved(static_cast<int>(id));
}

void QWizard_connect_pageRemoved(QWizard* self, intptr_t slot) {
	MiqtVirtualQWizard::connect(self, static_cast<void (QWizard::*)(int)>(&QWizard::pageRemoved), self, [=](int id) {
		int sigval1 = id;
		miqt_exec_callback_QWizard_pageRemoved(slot, sigval1);
	});
}

void QWizard_back(QWizard* self) {
	self->back();
}

void QWizard_next(QWizard* self) {
	self->next();
}

void QWizard_setCurrentId(QWizard* self, int id) {
	self->setCurrentId(static_cast<int>(id));
}

void QWizard_restart(QWizard* self) {
	self->restart();
}

struct miqt_string QWizard_tr2(const char* s, const char* c) {
	QString _ret = QWizard::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWizard_tr3(const char* s, const char* c, int n) {
	QString _ret = QWizard::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWizard_setOption2(QWizard* self, int option, bool on) {
	self->setOption(static_cast<QWizard::WizardOption>(option), on);
}

bool QWizard_override_virtual_validateCurrentPage(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__validateCurrentPage = slot;
	return true;
}

bool QWizard_virtualbase_validateCurrentPage(void* self) {
	return ( (MiqtVirtualQWizard*)(self) )->virtualbase_validateCurrentPage();
}

bool QWizard_override_virtual_nextId(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nextId = slot;
	return true;
}

int QWizard_virtualbase_nextId(const void* self) {
	return ( (const MiqtVirtualQWizard*)(self) )->virtualbase_nextId();
}

bool QWizard_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QWizard_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_setVisible(visible);
}

bool QWizard_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QWizard_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQWizard*)(self) )->virtualbase_sizeHint();
}

bool QWizard_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QWizard_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQWizard*)(self) )->virtualbase_event(event);
}

bool QWizard_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QWizard_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_resizeEvent(event);
}

bool QWizard_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QWizard_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_paintEvent(event);
}

bool QWizard_override_virtual_done(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__done = slot;
	return true;
}

void QWizard_virtualbase_done(void* self, int result) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_done(result);
}

bool QWizard_override_virtual_initializePage(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initializePage = slot;
	return true;
}

void QWizard_virtualbase_initializePage(void* self, int id) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_initializePage(id);
}

bool QWizard_override_virtual_cleanupPage(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__cleanupPage = slot;
	return true;
}

void QWizard_virtualbase_cleanupPage(void* self, int id) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_cleanupPage(id);
}

bool QWizard_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QWizard_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQWizard*)(self) )->virtualbase_minimumSizeHint();
}

bool QWizard_override_virtual_open(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__open = slot;
	return true;
}

void QWizard_virtualbase_open(void* self) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_open();
}

bool QWizard_override_virtual_exec(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__exec = slot;
	return true;
}

int QWizard_virtualbase_exec(void* self) {
	return ( (MiqtVirtualQWizard*)(self) )->virtualbase_exec();
}

bool QWizard_override_virtual_accept(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__accept = slot;
	return true;
}

void QWizard_virtualbase_accept(void* self) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_accept();
}

bool QWizard_override_virtual_reject(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__reject = slot;
	return true;
}

void QWizard_virtualbase_reject(void* self) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_reject();
}

bool QWizard_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QWizard_virtualbase_keyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_keyPressEvent(param1);
}

bool QWizard_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QWizard_virtualbase_closeEvent(void* self, QCloseEvent* param1) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_closeEvent(param1);
}

bool QWizard_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QWizard_virtualbase_showEvent(void* self, QShowEvent* param1) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_showEvent(param1);
}

bool QWizard_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QWizard_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_contextMenuEvent(param1);
}

bool QWizard_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QWizard_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQWizard*)(self) )->virtualbase_eventFilter(param1, param2);
}

bool QWizard_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QWizard_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQWizard*)(self) )->virtualbase_devType();
}

bool QWizard_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QWizard_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQWizard*)(self) )->virtualbase_heightForWidth(param1);
}

bool QWizard_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QWizard_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQWizard*)(self) )->virtualbase_hasHeightForWidth();
}

bool QWizard_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QWizard_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQWizard*)(self) )->virtualbase_paintEngine();
}

bool QWizard_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QWizard_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_mousePressEvent(event);
}

bool QWizard_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QWizard_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QWizard_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QWizard_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QWizard_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QWizard_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QWizard_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QWizard_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_wheelEvent(event);
}

bool QWizard_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QWizard_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QWizard_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QWizard_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_focusInEvent(event);
}

bool QWizard_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QWizard_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_focusOutEvent(event);
}

bool QWizard_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QWizard_virtualbase_enterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_enterEvent(event);
}

bool QWizard_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QWizard_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_leaveEvent(event);
}

bool QWizard_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QWizard_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_moveEvent(event);
}

bool QWizard_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QWizard_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_tabletEvent(event);
}

bool QWizard_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QWizard_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_actionEvent(event);
}

bool QWizard_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QWizard_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QWizard_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QWizard_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QWizard_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QWizard_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QWizard_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QWizard_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_dropEvent(event);
}

bool QWizard_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QWizard_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_hideEvent(event);
}

bool QWizard_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QWizard_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQWizard*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QWizard_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QWizard_virtualbase_changeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_changeEvent(param1);
}

bool QWizard_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QWizard_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQWizard*)(self) )->virtualbase_metric(param1);
}

bool QWizard_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QWizard_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQWizard*)(self) )->virtualbase_initPainter(painter);
}

bool QWizard_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QWizard_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQWizard*)(self) )->virtualbase_redirected(offset);
}

bool QWizard_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QWizard_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQWizard*)(self) )->virtualbase_sharedPainter();
}

bool QWizard_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QWizard_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QWizard_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QWizard_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQWizard*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QWizard_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QWizard_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQWizard*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QWizard_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QWizard_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_timerEvent(event);
}

bool QWizard_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QWizard_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_childEvent(event);
}

bool QWizard_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QWizard_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_customEvent(event);
}

bool QWizard_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QWizard_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_connectNotify(signal);
}

bool QWizard_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QWizard_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_disconnectNotify(signal);
}

void QWizard_protectedbase_adjustPosition(bool* _dynamic_cast_ok, void* self, QWidget* param1) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->adjustPosition(param1);

}

void QWizard_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QWizard_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QWizard_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QWizard_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QWizard_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QWizard_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QWizard_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QWizard_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QWizard_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QWizard_delete(QWizard* self) {
	delete self;
}

class MiqtVirtualQWizardPage final : public QWizardPage {
public:

	MiqtVirtualQWizardPage(QWidget* parent): QWizardPage(parent) {};
	MiqtVirtualQWizardPage(): QWizardPage() {};

	virtual ~MiqtVirtualQWizardPage() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initializePage = 0;

	// Subclass to allow providing a Go implementation
	virtual void initializePage() override {
		if (handle__initializePage == 0) {
			QWizardPage::initializePage();
			return;
		}
		

		miqt_exec_callback_QWizardPage_initializePage(this, handle__initializePage);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initializePage() {

		QWizardPage::initializePage();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__cleanupPage = 0;

	// Subclass to allow providing a Go implementation
	virtual void cleanupPage() override {
		if (handle__cleanupPage == 0) {
			QWizardPage::cleanupPage();
			return;
		}
		

		miqt_exec_callback_QWizardPage_cleanupPage(this, handle__cleanupPage);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_cleanupPage() {

		QWizardPage::cleanupPage();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__validatePage = 0;

	// Subclass to allow providing a Go implementation
	virtual bool validatePage() override {
		if (handle__validatePage == 0) {
			return QWizardPage::validatePage();
		}
		

		bool callback_return_value = miqt_exec_callback_QWizardPage_validatePage(this, handle__validatePage);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_validatePage() {

		return QWizardPage::validatePage();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isComplete = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isComplete() const override {
		if (handle__isComplete == 0) {
			return QWizardPage::isComplete();
		}
		

		bool callback_return_value = miqt_exec_callback_QWizardPage_isComplete(this, handle__isComplete);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_isComplete() const {

		return QWizardPage::isComplete();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nextId = 0;

	// Subclass to allow providing a Go implementation
	virtual int nextId() const override {
		if (handle__nextId == 0) {
			return QWizardPage::nextId();
		}
		

		int callback_return_value = miqt_exec_callback_QWizardPage_nextId(this, handle__nextId);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_nextId() const {

		return QWizardPage::nextId();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QWizardPage::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QWizardPage_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QWizardPage::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QWizardPage::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QWizardPage_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QWizardPage::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QWizardPage::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QWizardPage_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QWizardPage::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QWizardPage::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QWizardPage_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QWizardPage::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QWizardPage::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QWizardPage_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QWizardPage::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QWizardPage::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QWizardPage_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QWizardPage::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QWizardPage::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QWizardPage_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QWizardPage::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QWizardPage::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QWizardPage_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QWizardPage::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QWizardPage::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* event) {

		QWizardPage::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QWizardPage::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* event) {

		QWizardPage::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QWizardPage::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QWizardPage::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QWizardPage::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* event) {

		QWizardPage::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QWizardPage::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* event) {

		QWizardPage::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QWizardPage::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* event) {

		QWizardPage::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QWizardPage::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QWizardPage::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QWizardPage::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QWizardPage::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QWizardPage::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QWizardPage::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__enterEvent == 0) {
			QWizardPage::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEnterEvent* event) {

		QWizardPage::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QWizardPage::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QWizardPage::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QWizardPage::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* event) {

		QWizardPage::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QWizardPage::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QWizardPage::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QWizardPage::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* event) {

		QWizardPage::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QWizardPage::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QWizardPage::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QWizardPage::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* event) {

		QWizardPage::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QWizardPage::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QWizardPage::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QWizardPage::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QWizardPage::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QWizardPage::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QWizardPage::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QWizardPage::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QWizardPage::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QWizardPage::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QWizardPage::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QWizardPage::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QWizardPage::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QWizardPage::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* event) {

		QWizardPage::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QWizardPage::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QWizardPage::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__nativeEvent == 0) {
			return QWizardPage::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QWizardPage_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QWizardPage::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QWizardPage::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QWizardPage_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* param1) {

		QWizardPage::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QWizardPage::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QWizardPage_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QWizardPage::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QWizardPage::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QWizardPage_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QWizardPage::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QWizardPage::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QWizardPage_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QWizardPage::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QWizardPage::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QWizardPage_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QWizardPage::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QWizardPage::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QWizardPage_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QWizardPage::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QWizardPage::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QWizardPage_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QWizardPage::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QWizardPage::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QWizardPage_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QWizardPage::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QWizardPage::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QWizardPage_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QWizardPage::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QWizardPage::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QWizardPage::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QWizardPage::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QWizardPage::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QWizardPage::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QWizardPage::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QWizardPage::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWizardPage_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QWizardPage::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QWizardPage::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWizardPage_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QWizardPage::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QWizardPage_protectedbase_setField(bool* _dynamic_cast_ok, void* self, struct miqt_string name, QVariant* value);
	friend QVariant* QWizardPage_protectedbase_field(bool* _dynamic_cast_ok, const void* self, struct miqt_string name);
	friend void QWizardPage_protectedbase_registerField(bool* _dynamic_cast_ok, void* self, struct miqt_string name, QWidget* widget);
	friend QWizard* QWizardPage_protectedbase_wizard(bool* _dynamic_cast_ok, const void* self);
	friend void QWizardPage_protectedbase_registerField3(bool* _dynamic_cast_ok, void* self, struct miqt_string name, QWidget* widget, const char* property);
	friend void QWizardPage_protectedbase_registerField4(bool* _dynamic_cast_ok, void* self, struct miqt_string name, QWidget* widget, const char* property, const char* changedSignal);
	friend void QWizardPage_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QWizardPage_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QWizardPage_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QWizardPage_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QWizardPage_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QWizardPage_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QWizardPage_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QWizardPage_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QWizardPage_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QWizardPage* QWizardPage_new(QWidget* parent) {
	return new MiqtVirtualQWizardPage(parent);
}

QWizardPage* QWizardPage_new2() {
	return new MiqtVirtualQWizardPage();
}

void QWizardPage_virtbase(QWizardPage* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QWizardPage_metaObject(const QWizardPage* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWizardPage_metacast(QWizardPage* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWizardPage_tr(const char* s) {
	QString _ret = QWizardPage::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWizardPage_setTitle(QWizardPage* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	self->setTitle(title_QString);
}

struct miqt_string QWizardPage_title(const QWizardPage* self) {
	QString _ret = self->title();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWizardPage_setSubTitle(QWizardPage* self, struct miqt_string subTitle) {
	QString subTitle_QString = QString::fromUtf8(subTitle.data, subTitle.len);
	self->setSubTitle(subTitle_QString);
}

struct miqt_string QWizardPage_subTitle(const QWizardPage* self) {
	QString _ret = self->subTitle();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWizardPage_setPixmap(QWizardPage* self, int which, QPixmap* pixmap) {
	self->setPixmap(static_cast<QWizard::WizardPixmap>(which), *pixmap);
}

QPixmap* QWizardPage_pixmap(const QWizardPage* self, int which) {
	return new QPixmap(self->pixmap(static_cast<QWizard::WizardPixmap>(which)));
}

void QWizardPage_setFinalPage(QWizardPage* self, bool finalPage) {
	self->setFinalPage(finalPage);
}

bool QWizardPage_isFinalPage(const QWizardPage* self) {
	return self->isFinalPage();
}

void QWizardPage_setCommitPage(QWizardPage* self, bool commitPage) {
	self->setCommitPage(commitPage);
}

bool QWizardPage_isCommitPage(const QWizardPage* self) {
	return self->isCommitPage();
}

void QWizardPage_setButtonText(QWizardPage* self, int which, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setButtonText(static_cast<QWizard::WizardButton>(which), text_QString);
}

struct miqt_string QWizardPage_buttonText(const QWizardPage* self, int which) {
	QString _ret = self->buttonText(static_cast<QWizard::WizardButton>(which));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWizardPage_initializePage(QWizardPage* self) {
	self->initializePage();
}

void QWizardPage_cleanupPage(QWizardPage* self) {
	self->cleanupPage();
}

bool QWizardPage_validatePage(QWizardPage* self) {
	return self->validatePage();
}

bool QWizardPage_isComplete(const QWizardPage* self) {
	return self->isComplete();
}

int QWizardPage_nextId(const QWizardPage* self) {
	return self->nextId();
}

void QWizardPage_completeChanged(QWizardPage* self) {
	self->completeChanged();
}

void QWizardPage_connect_completeChanged(QWizardPage* self, intptr_t slot) {
	MiqtVirtualQWizardPage::connect(self, static_cast<void (QWizardPage::*)()>(&QWizardPage::completeChanged), self, [=]() {
		miqt_exec_callback_QWizardPage_completeChanged(slot);
	});
}

struct miqt_string QWizardPage_tr2(const char* s, const char* c) {
	QString _ret = QWizardPage::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWizardPage_tr3(const char* s, const char* c, int n) {
	QString _ret = QWizardPage::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QWizardPage_override_virtual_initializePage(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initializePage = slot;
	return true;
}

void QWizardPage_virtualbase_initializePage(void* self) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_initializePage();
}

bool QWizardPage_override_virtual_cleanupPage(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__cleanupPage = slot;
	return true;
}

void QWizardPage_virtualbase_cleanupPage(void* self) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_cleanupPage();
}

bool QWizardPage_override_virtual_validatePage(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__validatePage = slot;
	return true;
}

bool QWizardPage_virtualbase_validatePage(void* self) {
	return ( (MiqtVirtualQWizardPage*)(self) )->virtualbase_validatePage();
}

bool QWizardPage_override_virtual_isComplete(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isComplete = slot;
	return true;
}

bool QWizardPage_virtualbase_isComplete(const void* self) {
	return ( (const MiqtVirtualQWizardPage*)(self) )->virtualbase_isComplete();
}

bool QWizardPage_override_virtual_nextId(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nextId = slot;
	return true;
}

int QWizardPage_virtualbase_nextId(const void* self) {
	return ( (const MiqtVirtualQWizardPage*)(self) )->virtualbase_nextId();
}

bool QWizardPage_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QWizardPage_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQWizardPage*)(self) )->virtualbase_devType();
}

bool QWizardPage_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QWizardPage_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_setVisible(visible);
}

bool QWizardPage_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QWizardPage_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQWizardPage*)(self) )->virtualbase_sizeHint();
}

bool QWizardPage_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QWizardPage_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQWizardPage*)(self) )->virtualbase_minimumSizeHint();
}

bool QWizardPage_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QWizardPage_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQWizardPage*)(self) )->virtualbase_heightForWidth(param1);
}

bool QWizardPage_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QWizardPage_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQWizardPage*)(self) )->virtualbase_hasHeightForWidth();
}

bool QWizardPage_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QWizardPage_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQWizardPage*)(self) )->virtualbase_paintEngine();
}

bool QWizardPage_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QWizardPage_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQWizardPage*)(self) )->virtualbase_event(event);
}

bool QWizardPage_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QWizardPage_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_mousePressEvent(event);
}

bool QWizardPage_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QWizardPage_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QWizardPage_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QWizardPage_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QWizardPage_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QWizardPage_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QWizardPage_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QWizardPage_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_wheelEvent(event);
}

bool QWizardPage_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QWizardPage_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_keyPressEvent(event);
}

bool QWizardPage_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QWizardPage_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QWizardPage_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QWizardPage_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_focusInEvent(event);
}

bool QWizardPage_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QWizardPage_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_focusOutEvent(event);
}

bool QWizardPage_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QWizardPage_virtualbase_enterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_enterEvent(event);
}

bool QWizardPage_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QWizardPage_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_leaveEvent(event);
}

bool QWizardPage_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QWizardPage_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_paintEvent(event);
}

bool QWizardPage_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QWizardPage_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_moveEvent(event);
}

bool QWizardPage_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QWizardPage_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_resizeEvent(event);
}

bool QWizardPage_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QWizardPage_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_closeEvent(event);
}

bool QWizardPage_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QWizardPage_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_contextMenuEvent(event);
}

bool QWizardPage_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QWizardPage_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_tabletEvent(event);
}

bool QWizardPage_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QWizardPage_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_actionEvent(event);
}

bool QWizardPage_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QWizardPage_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QWizardPage_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QWizardPage_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QWizardPage_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QWizardPage_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QWizardPage_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QWizardPage_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_dropEvent(event);
}

bool QWizardPage_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QWizardPage_virtualbase_showEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_showEvent(event);
}

bool QWizardPage_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QWizardPage_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_hideEvent(event);
}

bool QWizardPage_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QWizardPage_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQWizardPage*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QWizardPage_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QWizardPage_virtualbase_changeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_changeEvent(param1);
}

bool QWizardPage_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QWizardPage_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQWizardPage*)(self) )->virtualbase_metric(param1);
}

bool QWizardPage_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QWizardPage_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQWizardPage*)(self) )->virtualbase_initPainter(painter);
}

bool QWizardPage_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QWizardPage_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQWizardPage*)(self) )->virtualbase_redirected(offset);
}

bool QWizardPage_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QWizardPage_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQWizardPage*)(self) )->virtualbase_sharedPainter();
}

bool QWizardPage_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QWizardPage_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QWizardPage_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QWizardPage_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQWizardPage*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QWizardPage_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QWizardPage_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQWizardPage*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QWizardPage_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QWizardPage_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQWizardPage*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QWizardPage_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QWizardPage_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_timerEvent(event);
}

bool QWizardPage_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QWizardPage_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_childEvent(event);
}

bool QWizardPage_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QWizardPage_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_customEvent(event);
}

bool QWizardPage_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QWizardPage_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_connectNotify(signal);
}

bool QWizardPage_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QWizardPage_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_disconnectNotify(signal);
}

void QWizardPage_protectedbase_setField(bool* _dynamic_cast_ok, void* self, struct miqt_string name, QVariant* value) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
			QString name_QString = QString::fromUtf8(name.data, name.len);

	self_cast->setField(name_QString, *value);

}

QVariant* QWizardPage_protectedbase_field(bool* _dynamic_cast_ok, const void* self, struct miqt_string name) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
			QString name_QString = QString::fromUtf8(name.data, name.len);

	return new QVariant(self_cast->field(name_QString));

}

void QWizardPage_protectedbase_registerField(bool* _dynamic_cast_ok, void* self, struct miqt_string name, QWidget* widget) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
			QString name_QString = QString::fromUtf8(name.data, name.len);

	self_cast->registerField(name_QString, widget);

}

QWizard* QWizardPage_protectedbase_wizard(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->wizard();

}

void QWizardPage_protectedbase_registerField3(bool* _dynamic_cast_ok, void* self, struct miqt_string name, QWidget* widget, const char* property) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
			QString name_QString = QString::fromUtf8(name.data, name.len);

	self_cast->registerField(name_QString, widget, property);

}

void QWizardPage_protectedbase_registerField4(bool* _dynamic_cast_ok, void* self, struct miqt_string name, QWidget* widget, const char* property, const char* changedSignal) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
			QString name_QString = QString::fromUtf8(name.data, name.len);

	self_cast->registerField(name_QString, widget, property, changedSignal);

}

void QWizardPage_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QWizardPage_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QWizardPage_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QWizardPage_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QWizardPage_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QWizardPage_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QWizardPage_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QWizardPage_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QWizardPage_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QWizardPage_delete(QWizardPage* self) {
	delete self;
}

