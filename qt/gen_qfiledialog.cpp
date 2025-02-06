#include <QAbstractItemDelegate>
#include <QAbstractProxyModel>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDialog>
#include <QDir>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QFileDialog>
#include <QFileIconProvider>
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
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qfiledialog.h>
#include "gen_qfiledialog.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QFileDialog_fileSelected(intptr_t, struct miqt_string);
void miqt_exec_callback_QFileDialog_filesSelected(intptr_t, struct miqt_array /* of struct miqt_string */ );
void miqt_exec_callback_QFileDialog_currentChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QFileDialog_directoryEntered(intptr_t, struct miqt_string);
void miqt_exec_callback_QFileDialog_urlSelected(intptr_t, QUrl*);
void miqt_exec_callback_QFileDialog_urlsSelected(intptr_t, struct miqt_array /* of QUrl* */ );
void miqt_exec_callback_QFileDialog_currentUrlChanged(intptr_t, QUrl*);
void miqt_exec_callback_QFileDialog_directoryUrlEntered(intptr_t, QUrl*);
void miqt_exec_callback_QFileDialog_filterSelected(intptr_t, struct miqt_string);
void miqt_exec_callback_QFileDialog_setVisible(QFileDialog*, intptr_t, bool);
void miqt_exec_callback_QFileDialog_done(QFileDialog*, intptr_t, int);
void miqt_exec_callback_QFileDialog_accept(QFileDialog*, intptr_t);
void miqt_exec_callback_QFileDialog_changeEvent(QFileDialog*, intptr_t, QEvent*);
QSize* miqt_exec_callback_QFileDialog_sizeHint(const QFileDialog*, intptr_t);
QSize* miqt_exec_callback_QFileDialog_minimumSizeHint(const QFileDialog*, intptr_t);
void miqt_exec_callback_QFileDialog_open(QFileDialog*, intptr_t);
int miqt_exec_callback_QFileDialog_exec(QFileDialog*, intptr_t);
void miqt_exec_callback_QFileDialog_reject(QFileDialog*, intptr_t);
void miqt_exec_callback_QFileDialog_keyPressEvent(QFileDialog*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QFileDialog_closeEvent(QFileDialog*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QFileDialog_showEvent(QFileDialog*, intptr_t, QShowEvent*);
void miqt_exec_callback_QFileDialog_resizeEvent(QFileDialog*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QFileDialog_contextMenuEvent(QFileDialog*, intptr_t, QContextMenuEvent*);
bool miqt_exec_callback_QFileDialog_eventFilter(QFileDialog*, intptr_t, QObject*, QEvent*);
int miqt_exec_callback_QFileDialog_devType(const QFileDialog*, intptr_t);
int miqt_exec_callback_QFileDialog_heightForWidth(const QFileDialog*, intptr_t, int);
bool miqt_exec_callback_QFileDialog_hasHeightForWidth(const QFileDialog*, intptr_t);
QPaintEngine* miqt_exec_callback_QFileDialog_paintEngine(const QFileDialog*, intptr_t);
bool miqt_exec_callback_QFileDialog_event(QFileDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QFileDialog_mousePressEvent(QFileDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QFileDialog_mouseReleaseEvent(QFileDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QFileDialog_mouseDoubleClickEvent(QFileDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QFileDialog_mouseMoveEvent(QFileDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QFileDialog_wheelEvent(QFileDialog*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QFileDialog_keyReleaseEvent(QFileDialog*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QFileDialog_focusInEvent(QFileDialog*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QFileDialog_focusOutEvent(QFileDialog*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QFileDialog_enterEvent(QFileDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QFileDialog_leaveEvent(QFileDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QFileDialog_paintEvent(QFileDialog*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QFileDialog_moveEvent(QFileDialog*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QFileDialog_tabletEvent(QFileDialog*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QFileDialog_actionEvent(QFileDialog*, intptr_t, QActionEvent*);
void miqt_exec_callback_QFileDialog_dragEnterEvent(QFileDialog*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QFileDialog_dragMoveEvent(QFileDialog*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QFileDialog_dragLeaveEvent(QFileDialog*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QFileDialog_dropEvent(QFileDialog*, intptr_t, QDropEvent*);
void miqt_exec_callback_QFileDialog_hideEvent(QFileDialog*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QFileDialog_nativeEvent(QFileDialog*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QFileDialog_metric(const QFileDialog*, intptr_t, int);
void miqt_exec_callback_QFileDialog_initPainter(const QFileDialog*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QFileDialog_redirected(const QFileDialog*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QFileDialog_sharedPainter(const QFileDialog*, intptr_t);
void miqt_exec_callback_QFileDialog_inputMethodEvent(QFileDialog*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QFileDialog_inputMethodQuery(const QFileDialog*, intptr_t, int);
bool miqt_exec_callback_QFileDialog_focusNextPrevChild(QFileDialog*, intptr_t, bool);
void miqt_exec_callback_QFileDialog_timerEvent(QFileDialog*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QFileDialog_childEvent(QFileDialog*, intptr_t, QChildEvent*);
void miqt_exec_callback_QFileDialog_customEvent(QFileDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QFileDialog_connectNotify(QFileDialog*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QFileDialog_disconnectNotify(QFileDialog*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQFileDialog final : public QFileDialog {
public:

	MiqtVirtualQFileDialog(QWidget* parent): QFileDialog(parent) {};
	MiqtVirtualQFileDialog(QWidget* parent, Qt::WindowFlags f): QFileDialog(parent, f) {};
	MiqtVirtualQFileDialog(): QFileDialog() {};
	MiqtVirtualQFileDialog(QWidget* parent, const QString& caption): QFileDialog(parent, caption) {};
	MiqtVirtualQFileDialog(QWidget* parent, const QString& caption, const QString& directory): QFileDialog(parent, caption, directory) {};
	MiqtVirtualQFileDialog(QWidget* parent, const QString& caption, const QString& directory, const QString& filter): QFileDialog(parent, caption, directory, filter) {};

	virtual ~MiqtVirtualQFileDialog() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QFileDialog::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QFileDialog_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QFileDialog::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__done = 0;

	// Subclass to allow providing a Go implementation
	virtual void done(int result) override {
		if (handle__done == 0) {
			QFileDialog::done(result);
			return;
		}
		
		int sigval1 = result;

		miqt_exec_callback_QFileDialog_done(this, handle__done, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_done(int result) {

		QFileDialog::done(static_cast<int>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__accept = 0;

	// Subclass to allow providing a Go implementation
	virtual void accept() override {
		if (handle__accept == 0) {
			QFileDialog::accept();
			return;
		}
		

		miqt_exec_callback_QFileDialog_accept(this, handle__accept);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_accept() {

		QFileDialog::accept();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (handle__changeEvent == 0) {
			QFileDialog::changeEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QFileDialog_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* e) {

		QFileDialog::changeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QFileDialog::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QFileDialog_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QFileDialog::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QFileDialog::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QFileDialog_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QFileDialog::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__open = 0;

	// Subclass to allow providing a Go implementation
	virtual void open() override {
		if (handle__open == 0) {
			QFileDialog::open();
			return;
		}
		

		miqt_exec_callback_QFileDialog_open(this, handle__open);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_open() {

		QFileDialog::open();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__exec = 0;

	// Subclass to allow providing a Go implementation
	virtual int exec() override {
		if (handle__exec == 0) {
			return QFileDialog::exec();
		}
		

		int callback_return_value = miqt_exec_callback_QFileDialog_exec(this, handle__exec);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_exec() {

		return QFileDialog::exec();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__reject = 0;

	// Subclass to allow providing a Go implementation
	virtual void reject() override {
		if (handle__reject == 0) {
			QFileDialog::reject();
			return;
		}
		

		miqt_exec_callback_QFileDialog_reject(this, handle__reject);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_reject() {

		QFileDialog::reject();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__keyPressEvent == 0) {
			QFileDialog::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QFileDialog_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* param1) {

		QFileDialog::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* param1) override {
		if (handle__closeEvent == 0) {
			QFileDialog::closeEvent(param1);
			return;
		}
		
		QCloseEvent* sigval1 = param1;

		miqt_exec_callback_QFileDialog_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* param1) {

		QFileDialog::closeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (handle__showEvent == 0) {
			QFileDialog::showEvent(param1);
			return;
		}
		
		QShowEvent* sigval1 = param1;

		miqt_exec_callback_QFileDialog_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* param1) {

		QFileDialog::showEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__resizeEvent == 0) {
			QFileDialog::resizeEvent(param1);
			return;
		}
		
		QResizeEvent* sigval1 = param1;

		miqt_exec_callback_QFileDialog_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* param1) {

		QFileDialog::resizeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__contextMenuEvent == 0) {
			QFileDialog::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QFileDialog_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* param1) {

		QFileDialog::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__eventFilter == 0) {
			return QFileDialog::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QFileDialog_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* param1, QEvent* param2) {

		return QFileDialog::eventFilter(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QFileDialog::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QFileDialog_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QFileDialog::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QFileDialog::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QFileDialog_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QFileDialog::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QFileDialog::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QFileDialog_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QFileDialog::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QFileDialog::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QFileDialog_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QFileDialog::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QFileDialog::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QFileDialog_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QFileDialog::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QFileDialog::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QFileDialog_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* event) {

		QFileDialog::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QFileDialog::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QFileDialog_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* event) {

		QFileDialog::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QFileDialog::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QFileDialog_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QFileDialog::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QFileDialog::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QFileDialog_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* event) {

		QFileDialog::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QFileDialog::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QFileDialog_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* event) {

		QFileDialog::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QFileDialog::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QFileDialog_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QFileDialog::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QFileDialog::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QFileDialog_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QFileDialog::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QFileDialog::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QFileDialog_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QFileDialog::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QFileDialog::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QFileDialog_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEvent* event) {

		QFileDialog::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QFileDialog::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QFileDialog_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QFileDialog::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QFileDialog::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QFileDialog_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* event) {

		QFileDialog::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QFileDialog::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QFileDialog_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QFileDialog::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QFileDialog::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QFileDialog_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QFileDialog::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QFileDialog::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QFileDialog_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QFileDialog::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QFileDialog::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QFileDialog_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* event) {

		QFileDialog::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QFileDialog::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QFileDialog_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* event) {

		QFileDialog::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QFileDialog::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QFileDialog_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* event) {

		QFileDialog::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QFileDialog::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QFileDialog_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* event) {

		QFileDialog::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QFileDialog::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QFileDialog_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QFileDialog::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QFileDialog::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QFileDialog_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QFileDialog::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QFileDialog::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QFileDialog_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QFileDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QFileDialog::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QFileDialog_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QFileDialog::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QFileDialog::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QFileDialog_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QFileDialog::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QFileDialog::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QFileDialog_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QFileDialog::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QFileDialog::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QFileDialog_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QFileDialog::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QFileDialog::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QFileDialog_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QFileDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QFileDialog::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QFileDialog_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QFileDialog::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QFileDialog::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QFileDialog_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QFileDialog::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QFileDialog::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QFileDialog_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QFileDialog::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QFileDialog::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QFileDialog_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QFileDialog::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QFileDialog::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QFileDialog_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QFileDialog::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QFileDialog::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QFileDialog_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QFileDialog::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QFileDialog_protectedbase_adjustPosition(bool* _dynamic_cast_ok, void* self, QWidget* param1);
	friend void QFileDialog_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QFileDialog_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QFileDialog_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QFileDialog_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QFileDialog_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QFileDialog_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QFileDialog_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QFileDialog_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QFileDialog_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QFileDialog* QFileDialog_new(QWidget* parent) {
	return new MiqtVirtualQFileDialog(parent);
}

QFileDialog* QFileDialog_new2(QWidget* parent, int f) {
	return new MiqtVirtualQFileDialog(parent, static_cast<Qt::WindowFlags>(f));
}

QFileDialog* QFileDialog_new3() {
	return new MiqtVirtualQFileDialog();
}

QFileDialog* QFileDialog_new4(QWidget* parent, struct miqt_string caption) {
	QString caption_QString = QString::fromUtf8(caption.data, caption.len);
	return new MiqtVirtualQFileDialog(parent, caption_QString);
}

QFileDialog* QFileDialog_new5(QWidget* parent, struct miqt_string caption, struct miqt_string directory) {
	QString caption_QString = QString::fromUtf8(caption.data, caption.len);
	QString directory_QString = QString::fromUtf8(directory.data, directory.len);
	return new MiqtVirtualQFileDialog(parent, caption_QString, directory_QString);
}

QFileDialog* QFileDialog_new6(QWidget* parent, struct miqt_string caption, struct miqt_string directory, struct miqt_string filter) {
	QString caption_QString = QString::fromUtf8(caption.data, caption.len);
	QString directory_QString = QString::fromUtf8(directory.data, directory.len);
	QString filter_QString = QString::fromUtf8(filter.data, filter.len);
	return new MiqtVirtualQFileDialog(parent, caption_QString, directory_QString, filter_QString);
}

void QFileDialog_virtbase(QFileDialog* src, QDialog** outptr_QDialog) {
	*outptr_QDialog = static_cast<QDialog*>(src);
}

QMetaObject* QFileDialog_metaObject(const QFileDialog* self) {
	return (QMetaObject*) self->metaObject();
}

void* QFileDialog_metacast(QFileDialog* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QFileDialog_tr(const char* s) {
	QString _ret = QFileDialog::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileDialog_trUtf8(const char* s) {
	QString _ret = QFileDialog::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFileDialog_setDirectory(QFileDialog* self, struct miqt_string directory) {
	QString directory_QString = QString::fromUtf8(directory.data, directory.len);
	self->setDirectory(directory_QString);
}

void QFileDialog_setDirectoryWithDirectory(QFileDialog* self, QDir* directory) {
	self->setDirectory(*directory);
}

QDir* QFileDialog_directory(const QFileDialog* self) {
	return new QDir(self->directory());
}

void QFileDialog_setDirectoryUrl(QFileDialog* self, QUrl* directory) {
	self->setDirectoryUrl(*directory);
}

QUrl* QFileDialog_directoryUrl(const QFileDialog* self) {
	return new QUrl(self->directoryUrl());
}

void QFileDialog_selectFile(QFileDialog* self, struct miqt_string filename) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	self->selectFile(filename_QString);
}

struct miqt_array /* of struct miqt_string */  QFileDialog_selectedFiles(const QFileDialog* self) {
	QStringList _ret = self->selectedFiles();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QFileDialog_selectUrl(QFileDialog* self, QUrl* url) {
	self->selectUrl(*url);
}

struct miqt_array /* of QUrl* */  QFileDialog_selectedUrls(const QFileDialog* self) {
	QList<QUrl> _ret = self->selectedUrls();
	// Convert QList<> from C++ memory to manually-managed C memory
	QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QUrl(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QFileDialog_setNameFilterDetailsVisible(QFileDialog* self, bool enabled) {
	self->setNameFilterDetailsVisible(enabled);
}

bool QFileDialog_isNameFilterDetailsVisible(const QFileDialog* self) {
	return self->isNameFilterDetailsVisible();
}

void QFileDialog_setNameFilter(QFileDialog* self, struct miqt_string filter) {
	QString filter_QString = QString::fromUtf8(filter.data, filter.len);
	self->setNameFilter(filter_QString);
}

void QFileDialog_setNameFilters(QFileDialog* self, struct miqt_array /* of struct miqt_string */  filters) {
	QStringList filters_QList;
	filters_QList.reserve(filters.len);
	struct miqt_string* filters_arr = static_cast<struct miqt_string*>(filters.data);
	for(size_t i = 0; i < filters.len; ++i) {
		QString filters_arr_i_QString = QString::fromUtf8(filters_arr[i].data, filters_arr[i].len);
		filters_QList.push_back(filters_arr_i_QString);
	}
	self->setNameFilters(filters_QList);
}

struct miqt_array /* of struct miqt_string */  QFileDialog_nameFilters(const QFileDialog* self) {
	QStringList _ret = self->nameFilters();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QFileDialog_selectNameFilter(QFileDialog* self, struct miqt_string filter) {
	QString filter_QString = QString::fromUtf8(filter.data, filter.len);
	self->selectNameFilter(filter_QString);
}

struct miqt_string QFileDialog_selectedMimeTypeFilter(const QFileDialog* self) {
	QString _ret = self->selectedMimeTypeFilter();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileDialog_selectedNameFilter(const QFileDialog* self) {
	QString _ret = self->selectedNameFilter();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFileDialog_setMimeTypeFilters(QFileDialog* self, struct miqt_array /* of struct miqt_string */  filters) {
	QStringList filters_QList;
	filters_QList.reserve(filters.len);
	struct miqt_string* filters_arr = static_cast<struct miqt_string*>(filters.data);
	for(size_t i = 0; i < filters.len; ++i) {
		QString filters_arr_i_QString = QString::fromUtf8(filters_arr[i].data, filters_arr[i].len);
		filters_QList.push_back(filters_arr_i_QString);
	}
	self->setMimeTypeFilters(filters_QList);
}

struct miqt_array /* of struct miqt_string */  QFileDialog_mimeTypeFilters(const QFileDialog* self) {
	QStringList _ret = self->mimeTypeFilters();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QFileDialog_selectMimeTypeFilter(QFileDialog* self, struct miqt_string filter) {
	QString filter_QString = QString::fromUtf8(filter.data, filter.len);
	self->selectMimeTypeFilter(filter_QString);
}

int QFileDialog_filter(const QFileDialog* self) {
	QDir::Filters _ret = self->filter();
	return static_cast<int>(_ret);
}

void QFileDialog_setFilter(QFileDialog* self, int filters) {
	self->setFilter(static_cast<QDir::Filters>(filters));
}

void QFileDialog_setViewMode(QFileDialog* self, int mode) {
	self->setViewMode(static_cast<QFileDialog::ViewMode>(mode));
}

int QFileDialog_viewMode(const QFileDialog* self) {
	QFileDialog::ViewMode _ret = self->viewMode();
	return static_cast<int>(_ret);
}

void QFileDialog_setFileMode(QFileDialog* self, int mode) {
	self->setFileMode(static_cast<QFileDialog::FileMode>(mode));
}

int QFileDialog_fileMode(const QFileDialog* self) {
	QFileDialog::FileMode _ret = self->fileMode();
	return static_cast<int>(_ret);
}

void QFileDialog_setAcceptMode(QFileDialog* self, int mode) {
	self->setAcceptMode(static_cast<QFileDialog::AcceptMode>(mode));
}

int QFileDialog_acceptMode(const QFileDialog* self) {
	QFileDialog::AcceptMode _ret = self->acceptMode();
	return static_cast<int>(_ret);
}

void QFileDialog_setReadOnly(QFileDialog* self, bool enabled) {
	self->setReadOnly(enabled);
}

bool QFileDialog_isReadOnly(const QFileDialog* self) {
	return self->isReadOnly();
}

void QFileDialog_setResolveSymlinks(QFileDialog* self, bool enabled) {
	self->setResolveSymlinks(enabled);
}

bool QFileDialog_resolveSymlinks(const QFileDialog* self) {
	return self->resolveSymlinks();
}

void QFileDialog_setSidebarUrls(QFileDialog* self, struct miqt_array /* of QUrl* */  urls) {
	QList<QUrl> urls_QList;
	urls_QList.reserve(urls.len);
	QUrl** urls_arr = static_cast<QUrl**>(urls.data);
	for(size_t i = 0; i < urls.len; ++i) {
		urls_QList.push_back(*(urls_arr[i]));
	}
	self->setSidebarUrls(urls_QList);
}

struct miqt_array /* of QUrl* */  QFileDialog_sidebarUrls(const QFileDialog* self) {
	QList<QUrl> _ret = self->sidebarUrls();
	// Convert QList<> from C++ memory to manually-managed C memory
	QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QUrl(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QFileDialog_saveState(const QFileDialog* self) {
	QByteArray _qb = self->saveState();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

bool QFileDialog_restoreState(QFileDialog* self, struct miqt_string state) {
	QByteArray state_QByteArray(state.data, state.len);
	return self->restoreState(state_QByteArray);
}

void QFileDialog_setConfirmOverwrite(QFileDialog* self, bool enabled) {
	self->setConfirmOverwrite(enabled);
}

bool QFileDialog_confirmOverwrite(const QFileDialog* self) {
	return self->confirmOverwrite();
}

void QFileDialog_setDefaultSuffix(QFileDialog* self, struct miqt_string suffix) {
	QString suffix_QString = QString::fromUtf8(suffix.data, suffix.len);
	self->setDefaultSuffix(suffix_QString);
}

struct miqt_string QFileDialog_defaultSuffix(const QFileDialog* self) {
	QString _ret = self->defaultSuffix();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFileDialog_setHistory(QFileDialog* self, struct miqt_array /* of struct miqt_string */  paths) {
	QStringList paths_QList;
	paths_QList.reserve(paths.len);
	struct miqt_string* paths_arr = static_cast<struct miqt_string*>(paths.data);
	for(size_t i = 0; i < paths.len; ++i) {
		QString paths_arr_i_QString = QString::fromUtf8(paths_arr[i].data, paths_arr[i].len);
		paths_QList.push_back(paths_arr_i_QString);
	}
	self->setHistory(paths_QList);
}

struct miqt_array /* of struct miqt_string */  QFileDialog_history(const QFileDialog* self) {
	QStringList _ret = self->history();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QFileDialog_setItemDelegate(QFileDialog* self, QAbstractItemDelegate* delegate) {
	self->setItemDelegate(delegate);
}

QAbstractItemDelegate* QFileDialog_itemDelegate(const QFileDialog* self) {
	return self->itemDelegate();
}

void QFileDialog_setIconProvider(QFileDialog* self, QFileIconProvider* provider) {
	self->setIconProvider(provider);
}

QFileIconProvider* QFileDialog_iconProvider(const QFileDialog* self) {
	return self->iconProvider();
}

void QFileDialog_setLabelText(QFileDialog* self, int label, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setLabelText(static_cast<QFileDialog::DialogLabel>(label), text_QString);
}

struct miqt_string QFileDialog_labelText(const QFileDialog* self, int label) {
	QString _ret = self->labelText(static_cast<QFileDialog::DialogLabel>(label));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFileDialog_setSupportedSchemes(QFileDialog* self, struct miqt_array /* of struct miqt_string */  schemes) {
	QStringList schemes_QList;
	schemes_QList.reserve(schemes.len);
	struct miqt_string* schemes_arr = static_cast<struct miqt_string*>(schemes.data);
	for(size_t i = 0; i < schemes.len; ++i) {
		QString schemes_arr_i_QString = QString::fromUtf8(schemes_arr[i].data, schemes_arr[i].len);
		schemes_QList.push_back(schemes_arr_i_QString);
	}
	self->setSupportedSchemes(schemes_QList);
}

struct miqt_array /* of struct miqt_string */  QFileDialog_supportedSchemes(const QFileDialog* self) {
	QStringList _ret = self->supportedSchemes();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QFileDialog_setProxyModel(QFileDialog* self, QAbstractProxyModel* model) {
	self->setProxyModel(model);
}

QAbstractProxyModel* QFileDialog_proxyModel(const QFileDialog* self) {
	return self->proxyModel();
}

void QFileDialog_setOption(QFileDialog* self, int option) {
	self->setOption(static_cast<QFileDialog::Option>(option));
}

bool QFileDialog_testOption(const QFileDialog* self, int option) {
	return self->testOption(static_cast<QFileDialog::Option>(option));
}

void QFileDialog_setOptions(QFileDialog* self, int options) {
	self->setOptions(static_cast<QFileDialog::Options>(options));
}

int QFileDialog_options(const QFileDialog* self) {
	QFileDialog::Options _ret = self->options();
	return static_cast<int>(_ret);
}

void QFileDialog_setVisible(QFileDialog* self, bool visible) {
	self->setVisible(visible);
}

void QFileDialog_fileSelected(QFileDialog* self, struct miqt_string file) {
	QString file_QString = QString::fromUtf8(file.data, file.len);
	self->fileSelected(file_QString);
}

void QFileDialog_connect_fileSelected(QFileDialog* self, intptr_t slot) {
	MiqtVirtualQFileDialog::connect(self, static_cast<void (QFileDialog::*)(const QString&)>(&QFileDialog::fileSelected), self, [=](const QString& file) {
		const QString file_ret = file;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray file_b = file_ret.toUtf8();
		struct miqt_string file_ms;
		file_ms.len = file_b.length();
		file_ms.data = static_cast<char*>(malloc(file_ms.len));
		memcpy(file_ms.data, file_b.data(), file_ms.len);
		struct miqt_string sigval1 = file_ms;
		miqt_exec_callback_QFileDialog_fileSelected(slot, sigval1);
	});
}

void QFileDialog_filesSelected(QFileDialog* self, struct miqt_array /* of struct miqt_string */  files) {
	QStringList files_QList;
	files_QList.reserve(files.len);
	struct miqt_string* files_arr = static_cast<struct miqt_string*>(files.data);
	for(size_t i = 0; i < files.len; ++i) {
		QString files_arr_i_QString = QString::fromUtf8(files_arr[i].data, files_arr[i].len);
		files_QList.push_back(files_arr_i_QString);
	}
	self->filesSelected(files_QList);
}

void QFileDialog_connect_filesSelected(QFileDialog* self, intptr_t slot) {
	MiqtVirtualQFileDialog::connect(self, static_cast<void (QFileDialog::*)(const QStringList&)>(&QFileDialog::filesSelected), self, [=](const QStringList& files) {
		const QStringList& files_ret = files;
		// Convert QList<> from C++ memory to manually-managed C memory
		struct miqt_string* files_arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * files_ret.length()));
		for (size_t i = 0, e = files_ret.length(); i < e; ++i) {
			QString files_lv_ret = files_ret[i];
			// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
			QByteArray files_lv_b = files_lv_ret.toUtf8();
			struct miqt_string files_lv_ms;
			files_lv_ms.len = files_lv_b.length();
			files_lv_ms.data = static_cast<char*>(malloc(files_lv_ms.len));
			memcpy(files_lv_ms.data, files_lv_b.data(), files_lv_ms.len);
			files_arr[i] = files_lv_ms;
		}
		struct miqt_array files_out;
		files_out.len = files_ret.length();
		files_out.data = static_cast<void*>(files_arr);
		struct miqt_array /* of struct miqt_string */  sigval1 = files_out;
		miqt_exec_callback_QFileDialog_filesSelected(slot, sigval1);
	});
}

void QFileDialog_currentChanged(QFileDialog* self, struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	self->currentChanged(path_QString);
}

void QFileDialog_connect_currentChanged(QFileDialog* self, intptr_t slot) {
	MiqtVirtualQFileDialog::connect(self, static_cast<void (QFileDialog::*)(const QString&)>(&QFileDialog::currentChanged), self, [=](const QString& path) {
		const QString path_ret = path;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray path_b = path_ret.toUtf8();
		struct miqt_string path_ms;
		path_ms.len = path_b.length();
		path_ms.data = static_cast<char*>(malloc(path_ms.len));
		memcpy(path_ms.data, path_b.data(), path_ms.len);
		struct miqt_string sigval1 = path_ms;
		miqt_exec_callback_QFileDialog_currentChanged(slot, sigval1);
	});
}

void QFileDialog_directoryEntered(QFileDialog* self, struct miqt_string directory) {
	QString directory_QString = QString::fromUtf8(directory.data, directory.len);
	self->directoryEntered(directory_QString);
}

void QFileDialog_connect_directoryEntered(QFileDialog* self, intptr_t slot) {
	MiqtVirtualQFileDialog::connect(self, static_cast<void (QFileDialog::*)(const QString&)>(&QFileDialog::directoryEntered), self, [=](const QString& directory) {
		const QString directory_ret = directory;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray directory_b = directory_ret.toUtf8();
		struct miqt_string directory_ms;
		directory_ms.len = directory_b.length();
		directory_ms.data = static_cast<char*>(malloc(directory_ms.len));
		memcpy(directory_ms.data, directory_b.data(), directory_ms.len);
		struct miqt_string sigval1 = directory_ms;
		miqt_exec_callback_QFileDialog_directoryEntered(slot, sigval1);
	});
}

void QFileDialog_urlSelected(QFileDialog* self, QUrl* url) {
	self->urlSelected(*url);
}

void QFileDialog_connect_urlSelected(QFileDialog* self, intptr_t slot) {
	MiqtVirtualQFileDialog::connect(self, static_cast<void (QFileDialog::*)(const QUrl&)>(&QFileDialog::urlSelected), self, [=](const QUrl& url) {
		const QUrl& url_ret = url;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
		miqt_exec_callback_QFileDialog_urlSelected(slot, sigval1);
	});
}

void QFileDialog_urlsSelected(QFileDialog* self, struct miqt_array /* of QUrl* */  urls) {
	QList<QUrl> urls_QList;
	urls_QList.reserve(urls.len);
	QUrl** urls_arr = static_cast<QUrl**>(urls.data);
	for(size_t i = 0; i < urls.len; ++i) {
		urls_QList.push_back(*(urls_arr[i]));
	}
	self->urlsSelected(urls_QList);
}

void QFileDialog_connect_urlsSelected(QFileDialog* self, intptr_t slot) {
	MiqtVirtualQFileDialog::connect(self, static_cast<void (QFileDialog::*)(const QList<QUrl>&)>(&QFileDialog::urlsSelected), self, [=](const QList<QUrl>& urls) {
		const QList<QUrl>& urls_ret = urls;
		// Convert QList<> from C++ memory to manually-managed C memory
		QUrl** urls_arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * urls_ret.length()));
		for (size_t i = 0, e = urls_ret.length(); i < e; ++i) {
			urls_arr[i] = new QUrl(urls_ret[i]);
		}
		struct miqt_array urls_out;
		urls_out.len = urls_ret.length();
		urls_out.data = static_cast<void*>(urls_arr);
		struct miqt_array /* of QUrl* */  sigval1 = urls_out;
		miqt_exec_callback_QFileDialog_urlsSelected(slot, sigval1);
	});
}

void QFileDialog_currentUrlChanged(QFileDialog* self, QUrl* url) {
	self->currentUrlChanged(*url);
}

void QFileDialog_connect_currentUrlChanged(QFileDialog* self, intptr_t slot) {
	MiqtVirtualQFileDialog::connect(self, static_cast<void (QFileDialog::*)(const QUrl&)>(&QFileDialog::currentUrlChanged), self, [=](const QUrl& url) {
		const QUrl& url_ret = url;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
		miqt_exec_callback_QFileDialog_currentUrlChanged(slot, sigval1);
	});
}

void QFileDialog_directoryUrlEntered(QFileDialog* self, QUrl* directory) {
	self->directoryUrlEntered(*directory);
}

void QFileDialog_connect_directoryUrlEntered(QFileDialog* self, intptr_t slot) {
	MiqtVirtualQFileDialog::connect(self, static_cast<void (QFileDialog::*)(const QUrl&)>(&QFileDialog::directoryUrlEntered), self, [=](const QUrl& directory) {
		const QUrl& directory_ret = directory;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&directory_ret);
		miqt_exec_callback_QFileDialog_directoryUrlEntered(slot, sigval1);
	});
}

void QFileDialog_filterSelected(QFileDialog* self, struct miqt_string filter) {
	QString filter_QString = QString::fromUtf8(filter.data, filter.len);
	self->filterSelected(filter_QString);
}

void QFileDialog_connect_filterSelected(QFileDialog* self, intptr_t slot) {
	MiqtVirtualQFileDialog::connect(self, static_cast<void (QFileDialog::*)(const QString&)>(&QFileDialog::filterSelected), self, [=](const QString& filter) {
		const QString filter_ret = filter;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray filter_b = filter_ret.toUtf8();
		struct miqt_string filter_ms;
		filter_ms.len = filter_b.length();
		filter_ms.data = static_cast<char*>(malloc(filter_ms.len));
		memcpy(filter_ms.data, filter_b.data(), filter_ms.len);
		struct miqt_string sigval1 = filter_ms;
		miqt_exec_callback_QFileDialog_filterSelected(slot, sigval1);
	});
}

struct miqt_string QFileDialog_getOpenFileName() {
	QString _ret = QFileDialog::getOpenFileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QUrl* QFileDialog_getOpenFileUrl() {
	return new QUrl(QFileDialog::getOpenFileUrl());
}

struct miqt_string QFileDialog_getSaveFileName() {
	QString _ret = QFileDialog::getSaveFileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QUrl* QFileDialog_getSaveFileUrl() {
	return new QUrl(QFileDialog::getSaveFileUrl());
}

struct miqt_string QFileDialog_getExistingDirectory() {
	QString _ret = QFileDialog::getExistingDirectory();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QUrl* QFileDialog_getExistingDirectoryUrl() {
	return new QUrl(QFileDialog::getExistingDirectoryUrl());
}

struct miqt_array /* of struct miqt_string */  QFileDialog_getOpenFileNames() {
	QStringList _ret = QFileDialog::getOpenFileNames();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QUrl* */  QFileDialog_getOpenFileUrls() {
	QList<QUrl> _ret = QFileDialog::getOpenFileUrls();
	// Convert QList<> from C++ memory to manually-managed C memory
	QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QUrl(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QFileDialog_saveFileContent(struct miqt_string fileContent, struct miqt_string fileNameHint) {
	QByteArray fileContent_QByteArray(fileContent.data, fileContent.len);
	QString fileNameHint_QString = QString::fromUtf8(fileNameHint.data, fileNameHint.len);
	QFileDialog::saveFileContent(fileContent_QByteArray, fileNameHint_QString);
}

struct miqt_string QFileDialog_tr2(const char* s, const char* c) {
	QString _ret = QFileDialog::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileDialog_tr3(const char* s, const char* c, int n) {
	QString _ret = QFileDialog::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileDialog_trUtf82(const char* s, const char* c) {
	QString _ret = QFileDialog::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileDialog_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QFileDialog::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFileDialog_setOption2(QFileDialog* self, int option, bool on) {
	self->setOption(static_cast<QFileDialog::Option>(option), on);
}

struct miqt_string QFileDialog_getOpenFileName1(QWidget* parent) {
	QString _ret = QFileDialog::getOpenFileName(parent);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileDialog_getOpenFileName2(QWidget* parent, struct miqt_string caption) {
	QString caption_QString = QString::fromUtf8(caption.data, caption.len);
	QString _ret = QFileDialog::getOpenFileName(parent, caption_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileDialog_getOpenFileName3(QWidget* parent, struct miqt_string caption, struct miqt_string dir) {
	QString caption_QString = QString::fromUtf8(caption.data, caption.len);
	QString dir_QString = QString::fromUtf8(dir.data, dir.len);
	QString _ret = QFileDialog::getOpenFileName(parent, caption_QString, dir_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileDialog_getOpenFileName4(QWidget* parent, struct miqt_string caption, struct miqt_string dir, struct miqt_string filter) {
	QString caption_QString = QString::fromUtf8(caption.data, caption.len);
	QString dir_QString = QString::fromUtf8(dir.data, dir.len);
	QString filter_QString = QString::fromUtf8(filter.data, filter.len);
	QString _ret = QFileDialog::getOpenFileName(parent, caption_QString, dir_QString, filter_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QUrl* QFileDialog_getOpenFileUrl1(QWidget* parent) {
	return new QUrl(QFileDialog::getOpenFileUrl(parent));
}

QUrl* QFileDialog_getOpenFileUrl2(QWidget* parent, struct miqt_string caption) {
	QString caption_QString = QString::fromUtf8(caption.data, caption.len);
	return new QUrl(QFileDialog::getOpenFileUrl(parent, caption_QString));
}

QUrl* QFileDialog_getOpenFileUrl3(QWidget* parent, struct miqt_string caption, QUrl* dir) {
	QString caption_QString = QString::fromUtf8(caption.data, caption.len);
	return new QUrl(QFileDialog::getOpenFileUrl(parent, caption_QString, *dir));
}

QUrl* QFileDialog_getOpenFileUrl4(QWidget* parent, struct miqt_string caption, QUrl* dir, struct miqt_string filter) {
	QString caption_QString = QString::fromUtf8(caption.data, caption.len);
	QString filter_QString = QString::fromUtf8(filter.data, filter.len);
	return new QUrl(QFileDialog::getOpenFileUrl(parent, caption_QString, *dir, filter_QString));
}

struct miqt_string QFileDialog_getSaveFileName1(QWidget* parent) {
	QString _ret = QFileDialog::getSaveFileName(parent);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileDialog_getSaveFileName2(QWidget* parent, struct miqt_string caption) {
	QString caption_QString = QString::fromUtf8(caption.data, caption.len);
	QString _ret = QFileDialog::getSaveFileName(parent, caption_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileDialog_getSaveFileName3(QWidget* parent, struct miqt_string caption, struct miqt_string dir) {
	QString caption_QString = QString::fromUtf8(caption.data, caption.len);
	QString dir_QString = QString::fromUtf8(dir.data, dir.len);
	QString _ret = QFileDialog::getSaveFileName(parent, caption_QString, dir_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileDialog_getSaveFileName4(QWidget* parent, struct miqt_string caption, struct miqt_string dir, struct miqt_string filter) {
	QString caption_QString = QString::fromUtf8(caption.data, caption.len);
	QString dir_QString = QString::fromUtf8(dir.data, dir.len);
	QString filter_QString = QString::fromUtf8(filter.data, filter.len);
	QString _ret = QFileDialog::getSaveFileName(parent, caption_QString, dir_QString, filter_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QUrl* QFileDialog_getSaveFileUrl1(QWidget* parent) {
	return new QUrl(QFileDialog::getSaveFileUrl(parent));
}

QUrl* QFileDialog_getSaveFileUrl2(QWidget* parent, struct miqt_string caption) {
	QString caption_QString = QString::fromUtf8(caption.data, caption.len);
	return new QUrl(QFileDialog::getSaveFileUrl(parent, caption_QString));
}

QUrl* QFileDialog_getSaveFileUrl3(QWidget* parent, struct miqt_string caption, QUrl* dir) {
	QString caption_QString = QString::fromUtf8(caption.data, caption.len);
	return new QUrl(QFileDialog::getSaveFileUrl(parent, caption_QString, *dir));
}

QUrl* QFileDialog_getSaveFileUrl4(QWidget* parent, struct miqt_string caption, QUrl* dir, struct miqt_string filter) {
	QString caption_QString = QString::fromUtf8(caption.data, caption.len);
	QString filter_QString = QString::fromUtf8(filter.data, filter.len);
	return new QUrl(QFileDialog::getSaveFileUrl(parent, caption_QString, *dir, filter_QString));
}

struct miqt_string QFileDialog_getExistingDirectory1(QWidget* parent) {
	QString _ret = QFileDialog::getExistingDirectory(parent);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileDialog_getExistingDirectory2(QWidget* parent, struct miqt_string caption) {
	QString caption_QString = QString::fromUtf8(caption.data, caption.len);
	QString _ret = QFileDialog::getExistingDirectory(parent, caption_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileDialog_getExistingDirectory3(QWidget* parent, struct miqt_string caption, struct miqt_string dir) {
	QString caption_QString = QString::fromUtf8(caption.data, caption.len);
	QString dir_QString = QString::fromUtf8(dir.data, dir.len);
	QString _ret = QFileDialog::getExistingDirectory(parent, caption_QString, dir_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileDialog_getExistingDirectory4(QWidget* parent, struct miqt_string caption, struct miqt_string dir, int options) {
	QString caption_QString = QString::fromUtf8(caption.data, caption.len);
	QString dir_QString = QString::fromUtf8(dir.data, dir.len);
	QString _ret = QFileDialog::getExistingDirectory(parent, caption_QString, dir_QString, static_cast<QFileDialog::Options>(options));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QUrl* QFileDialog_getExistingDirectoryUrl1(QWidget* parent) {
	return new QUrl(QFileDialog::getExistingDirectoryUrl(parent));
}

QUrl* QFileDialog_getExistingDirectoryUrl2(QWidget* parent, struct miqt_string caption) {
	QString caption_QString = QString::fromUtf8(caption.data, caption.len);
	return new QUrl(QFileDialog::getExistingDirectoryUrl(parent, caption_QString));
}

QUrl* QFileDialog_getExistingDirectoryUrl3(QWidget* parent, struct miqt_string caption, QUrl* dir) {
	QString caption_QString = QString::fromUtf8(caption.data, caption.len);
	return new QUrl(QFileDialog::getExistingDirectoryUrl(parent, caption_QString, *dir));
}

QUrl* QFileDialog_getExistingDirectoryUrl4(QWidget* parent, struct miqt_string caption, QUrl* dir, int options) {
	QString caption_QString = QString::fromUtf8(caption.data, caption.len);
	return new QUrl(QFileDialog::getExistingDirectoryUrl(parent, caption_QString, *dir, static_cast<QFileDialog::Options>(options)));
}

QUrl* QFileDialog_getExistingDirectoryUrl5(QWidget* parent, struct miqt_string caption, QUrl* dir, int options, struct miqt_array /* of struct miqt_string */  supportedSchemes) {
	QString caption_QString = QString::fromUtf8(caption.data, caption.len);
	QStringList supportedSchemes_QList;
	supportedSchemes_QList.reserve(supportedSchemes.len);
	struct miqt_string* supportedSchemes_arr = static_cast<struct miqt_string*>(supportedSchemes.data);
	for(size_t i = 0; i < supportedSchemes.len; ++i) {
		QString supportedSchemes_arr_i_QString = QString::fromUtf8(supportedSchemes_arr[i].data, supportedSchemes_arr[i].len);
		supportedSchemes_QList.push_back(supportedSchemes_arr_i_QString);
	}
	return new QUrl(QFileDialog::getExistingDirectoryUrl(parent, caption_QString, *dir, static_cast<QFileDialog::Options>(options), supportedSchemes_QList));
}

struct miqt_array /* of struct miqt_string */  QFileDialog_getOpenFileNames1(QWidget* parent) {
	QStringList _ret = QFileDialog::getOpenFileNames(parent);
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of struct miqt_string */  QFileDialog_getOpenFileNames2(QWidget* parent, struct miqt_string caption) {
	QString caption_QString = QString::fromUtf8(caption.data, caption.len);
	QStringList _ret = QFileDialog::getOpenFileNames(parent, caption_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of struct miqt_string */  QFileDialog_getOpenFileNames3(QWidget* parent, struct miqt_string caption, struct miqt_string dir) {
	QString caption_QString = QString::fromUtf8(caption.data, caption.len);
	QString dir_QString = QString::fromUtf8(dir.data, dir.len);
	QStringList _ret = QFileDialog::getOpenFileNames(parent, caption_QString, dir_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of struct miqt_string */  QFileDialog_getOpenFileNames4(QWidget* parent, struct miqt_string caption, struct miqt_string dir, struct miqt_string filter) {
	QString caption_QString = QString::fromUtf8(caption.data, caption.len);
	QString dir_QString = QString::fromUtf8(dir.data, dir.len);
	QString filter_QString = QString::fromUtf8(filter.data, filter.len);
	QStringList _ret = QFileDialog::getOpenFileNames(parent, caption_QString, dir_QString, filter_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QUrl* */  QFileDialog_getOpenFileUrls1(QWidget* parent) {
	QList<QUrl> _ret = QFileDialog::getOpenFileUrls(parent);
	// Convert QList<> from C++ memory to manually-managed C memory
	QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QUrl(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QUrl* */  QFileDialog_getOpenFileUrls2(QWidget* parent, struct miqt_string caption) {
	QString caption_QString = QString::fromUtf8(caption.data, caption.len);
	QList<QUrl> _ret = QFileDialog::getOpenFileUrls(parent, caption_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QUrl(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QUrl* */  QFileDialog_getOpenFileUrls3(QWidget* parent, struct miqt_string caption, QUrl* dir) {
	QString caption_QString = QString::fromUtf8(caption.data, caption.len);
	QList<QUrl> _ret = QFileDialog::getOpenFileUrls(parent, caption_QString, *dir);
	// Convert QList<> from C++ memory to manually-managed C memory
	QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QUrl(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QUrl* */  QFileDialog_getOpenFileUrls4(QWidget* parent, struct miqt_string caption, QUrl* dir, struct miqt_string filter) {
	QString caption_QString = QString::fromUtf8(caption.data, caption.len);
	QString filter_QString = QString::fromUtf8(filter.data, filter.len);
	QList<QUrl> _ret = QFileDialog::getOpenFileUrls(parent, caption_QString, *dir, filter_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QUrl(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QFileDialog_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QFileDialog_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_setVisible(visible);
}

bool QFileDialog_override_virtual_done(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__done = slot;
	return true;
}

void QFileDialog_virtualbase_done(void* self, int result) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_done(result);
}

bool QFileDialog_override_virtual_accept(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__accept = slot;
	return true;
}

void QFileDialog_virtualbase_accept(void* self) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_accept();
}

bool QFileDialog_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QFileDialog_virtualbase_changeEvent(void* self, QEvent* e) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_changeEvent(e);
}

bool QFileDialog_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QFileDialog_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQFileDialog*)(self) )->virtualbase_sizeHint();
}

bool QFileDialog_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QFileDialog_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQFileDialog*)(self) )->virtualbase_minimumSizeHint();
}

bool QFileDialog_override_virtual_open(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__open = slot;
	return true;
}

void QFileDialog_virtualbase_open(void* self) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_open();
}

bool QFileDialog_override_virtual_exec(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__exec = slot;
	return true;
}

int QFileDialog_virtualbase_exec(void* self) {
	return ( (MiqtVirtualQFileDialog*)(self) )->virtualbase_exec();
}

bool QFileDialog_override_virtual_reject(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__reject = slot;
	return true;
}

void QFileDialog_virtualbase_reject(void* self) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_reject();
}

bool QFileDialog_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QFileDialog_virtualbase_keyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_keyPressEvent(param1);
}

bool QFileDialog_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QFileDialog_virtualbase_closeEvent(void* self, QCloseEvent* param1) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_closeEvent(param1);
}

bool QFileDialog_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QFileDialog_virtualbase_showEvent(void* self, QShowEvent* param1) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_showEvent(param1);
}

bool QFileDialog_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QFileDialog_virtualbase_resizeEvent(void* self, QResizeEvent* param1) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_resizeEvent(param1);
}

bool QFileDialog_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QFileDialog_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_contextMenuEvent(param1);
}

bool QFileDialog_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QFileDialog_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQFileDialog*)(self) )->virtualbase_eventFilter(param1, param2);
}

bool QFileDialog_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QFileDialog_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQFileDialog*)(self) )->virtualbase_devType();
}

bool QFileDialog_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QFileDialog_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQFileDialog*)(self) )->virtualbase_heightForWidth(param1);
}

bool QFileDialog_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QFileDialog_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQFileDialog*)(self) )->virtualbase_hasHeightForWidth();
}

bool QFileDialog_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QFileDialog_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQFileDialog*)(self) )->virtualbase_paintEngine();
}

bool QFileDialog_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QFileDialog_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQFileDialog*)(self) )->virtualbase_event(event);
}

bool QFileDialog_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QFileDialog_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_mousePressEvent(event);
}

bool QFileDialog_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QFileDialog_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QFileDialog_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QFileDialog_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QFileDialog_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QFileDialog_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QFileDialog_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QFileDialog_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_wheelEvent(event);
}

bool QFileDialog_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QFileDialog_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QFileDialog_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QFileDialog_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_focusInEvent(event);
}

bool QFileDialog_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QFileDialog_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_focusOutEvent(event);
}

bool QFileDialog_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QFileDialog_virtualbase_enterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_enterEvent(event);
}

bool QFileDialog_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QFileDialog_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_leaveEvent(event);
}

bool QFileDialog_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QFileDialog_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_paintEvent(event);
}

bool QFileDialog_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QFileDialog_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_moveEvent(event);
}

bool QFileDialog_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QFileDialog_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_tabletEvent(event);
}

bool QFileDialog_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QFileDialog_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_actionEvent(event);
}

bool QFileDialog_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QFileDialog_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QFileDialog_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QFileDialog_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QFileDialog_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QFileDialog_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QFileDialog_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QFileDialog_virtualbase_dropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_dropEvent(event);
}

bool QFileDialog_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QFileDialog_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_hideEvent(event);
}

bool QFileDialog_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QFileDialog_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQFileDialog*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QFileDialog_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QFileDialog_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQFileDialog*)(self) )->virtualbase_metric(param1);
}

bool QFileDialog_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QFileDialog_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQFileDialog*)(self) )->virtualbase_initPainter(painter);
}

bool QFileDialog_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QFileDialog_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQFileDialog*)(self) )->virtualbase_redirected(offset);
}

bool QFileDialog_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QFileDialog_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQFileDialog*)(self) )->virtualbase_sharedPainter();
}

bool QFileDialog_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QFileDialog_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QFileDialog_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QFileDialog_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQFileDialog*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QFileDialog_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QFileDialog_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQFileDialog*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QFileDialog_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QFileDialog_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_timerEvent(event);
}

bool QFileDialog_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QFileDialog_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_childEvent(event);
}

bool QFileDialog_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QFileDialog_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_customEvent(event);
}

bool QFileDialog_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QFileDialog_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_connectNotify(signal);
}

bool QFileDialog_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QFileDialog_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_disconnectNotify(signal);
}

void QFileDialog_protectedbase_adjustPosition(bool* _dynamic_cast_ok, void* self, QWidget* param1) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->adjustPosition(param1);

}

void QFileDialog_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QFileDialog_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QFileDialog_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QFileDialog_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QFileDialog_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QFileDialog_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QFileDialog_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QFileDialog_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QFileDialog_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QFileDialog_delete(QFileDialog* self) {
	delete self;
}

