#include <QAbstractFileIconProvider>
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
#include <QEnterEvent>
#include <QEvent>
#include <QFileDialog>
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

void miqt_exec_callback_QFileDialog_FileSelected(intptr_t, struct miqt_string);
void miqt_exec_callback_QFileDialog_FilesSelected(intptr_t, struct miqt_array /* of struct miqt_string */ );
void miqt_exec_callback_QFileDialog_CurrentChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QFileDialog_DirectoryEntered(intptr_t, struct miqt_string);
void miqt_exec_callback_QFileDialog_UrlSelected(intptr_t, QUrl*);
void miqt_exec_callback_QFileDialog_UrlsSelected(intptr_t, struct miqt_array /* of QUrl* */ );
void miqt_exec_callback_QFileDialog_CurrentUrlChanged(intptr_t, QUrl*);
void miqt_exec_callback_QFileDialog_DirectoryUrlEntered(intptr_t, QUrl*);
void miqt_exec_callback_QFileDialog_FilterSelected(intptr_t, struct miqt_string);
void miqt_exec_callback_QFileDialog_SetVisible(void*, intptr_t, bool);
void miqt_exec_callback_QFileDialog_Done(void*, intptr_t, int);
void miqt_exec_callback_QFileDialog_Accept(void*, intptr_t);
void miqt_exec_callback_QFileDialog_ChangeEvent(void*, intptr_t, QEvent*);
QSize* miqt_exec_callback_QFileDialog_SizeHint(void*, intptr_t);
QSize* miqt_exec_callback_QFileDialog_MinimumSizeHint(void*, intptr_t);
void miqt_exec_callback_QFileDialog_Open(void*, intptr_t);
int miqt_exec_callback_QFileDialog_Exec(void*, intptr_t);
void miqt_exec_callback_QFileDialog_Reject(void*, intptr_t);
void miqt_exec_callback_QFileDialog_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QFileDialog_CloseEvent(void*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QFileDialog_ShowEvent(void*, intptr_t, QShowEvent*);
void miqt_exec_callback_QFileDialog_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QFileDialog_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
bool miqt_exec_callback_QFileDialog_EventFilter(void*, intptr_t, QObject*, QEvent*);
int miqt_exec_callback_QFileDialog_DevType(void*, intptr_t);
int miqt_exec_callback_QFileDialog_HeightForWidth(void*, intptr_t, int);
bool miqt_exec_callback_QFileDialog_HasHeightForWidth(void*, intptr_t);
QPaintEngine* miqt_exec_callback_QFileDialog_PaintEngine(void*, intptr_t);
bool miqt_exec_callback_QFileDialog_Event(void*, intptr_t, QEvent*);
void miqt_exec_callback_QFileDialog_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QFileDialog_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QFileDialog_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QFileDialog_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QFileDialog_WheelEvent(void*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QFileDialog_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QFileDialog_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QFileDialog_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QFileDialog_EnterEvent(void*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QFileDialog_LeaveEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QFileDialog_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QFileDialog_MoveEvent(void*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QFileDialog_TabletEvent(void*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QFileDialog_ActionEvent(void*, intptr_t, QActionEvent*);
void miqt_exec_callback_QFileDialog_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QFileDialog_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QFileDialog_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QFileDialog_DropEvent(void*, intptr_t, QDropEvent*);
void miqt_exec_callback_QFileDialog_HideEvent(void*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QFileDialog_NativeEvent(void*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QFileDialog_Metric(void*, intptr_t, int);
void miqt_exec_callback_QFileDialog_InitPainter(void*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QFileDialog_Redirected(void*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QFileDialog_SharedPainter(void*, intptr_t);
void miqt_exec_callback_QFileDialog_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QFileDialog_InputMethodQuery(void*, intptr_t, int);
bool miqt_exec_callback_QFileDialog_FocusNextPrevChild(void*, intptr_t, bool);
void miqt_exec_callback_QFileDialog_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QFileDialog_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QFileDialog_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QFileDialog_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QFileDialog_DisconnectNotify(void*, intptr_t, QMetaMethod*);
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
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QFileDialog::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QFileDialog_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QFileDialog::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Done = 0;

	// Subclass to allow providing a Go implementation
	virtual void done(int result) override {
		if (handle__Done == 0) {
			QFileDialog::done(result);
			return;
		}
		
		int sigval1 = result;

		miqt_exec_callback_QFileDialog_Done(this, handle__Done, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Done(int result) {

		QFileDialog::done(static_cast<int>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Accept = 0;

	// Subclass to allow providing a Go implementation
	virtual void accept() override {
		if (handle__Accept == 0) {
			QFileDialog::accept();
			return;
		}
		

		miqt_exec_callback_QFileDialog_Accept(this, handle__Accept);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Accept() {

		QFileDialog::accept();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (handle__ChangeEvent == 0) {
			QFileDialog::changeEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QFileDialog_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* e) {

		QFileDialog::changeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QFileDialog::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QFileDialog_SizeHint(const_cast<MiqtVirtualQFileDialog*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QFileDialog::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QFileDialog::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QFileDialog_MinimumSizeHint(const_cast<MiqtVirtualQFileDialog*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QFileDialog::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Open = 0;

	// Subclass to allow providing a Go implementation
	virtual void open() override {
		if (handle__Open == 0) {
			QFileDialog::open();
			return;
		}
		

		miqt_exec_callback_QFileDialog_Open(this, handle__Open);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Open() {

		QFileDialog::open();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Exec = 0;

	// Subclass to allow providing a Go implementation
	virtual int exec() override {
		if (handle__Exec == 0) {
			return QFileDialog::exec();
		}
		

		int callback_return_value = miqt_exec_callback_QFileDialog_Exec(this, handle__Exec);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Exec() {

		return QFileDialog::exec();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Reject = 0;

	// Subclass to allow providing a Go implementation
	virtual void reject() override {
		if (handle__Reject == 0) {
			QFileDialog::reject();
			return;
		}
		

		miqt_exec_callback_QFileDialog_Reject(this, handle__Reject);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Reject() {

		QFileDialog::reject();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__KeyPressEvent == 0) {
			QFileDialog::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QFileDialog_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* param1) {

		QFileDialog::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* param1) override {
		if (handle__CloseEvent == 0) {
			QFileDialog::closeEvent(param1);
			return;
		}
		
		QCloseEvent* sigval1 = param1;

		miqt_exec_callback_QFileDialog_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* param1) {

		QFileDialog::closeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (handle__ShowEvent == 0) {
			QFileDialog::showEvent(param1);
			return;
		}
		
		QShowEvent* sigval1 = param1;

		miqt_exec_callback_QFileDialog_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* param1) {

		QFileDialog::showEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__ResizeEvent == 0) {
			QFileDialog::resizeEvent(param1);
			return;
		}
		
		QResizeEvent* sigval1 = param1;

		miqt_exec_callback_QFileDialog_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* param1) {

		QFileDialog::resizeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__ContextMenuEvent == 0) {
			QFileDialog::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QFileDialog_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* param1) {

		QFileDialog::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__EventFilter == 0) {
			return QFileDialog::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QFileDialog_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* param1, QEvent* param2) {

		return QFileDialog::eventFilter(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QFileDialog::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QFileDialog_DevType(const_cast<MiqtVirtualQFileDialog*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QFileDialog::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QFileDialog::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QFileDialog_HeightForWidth(const_cast<MiqtVirtualQFileDialog*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QFileDialog::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QFileDialog::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QFileDialog_HasHeightForWidth(const_cast<MiqtVirtualQFileDialog*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QFileDialog::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QFileDialog::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QFileDialog_PaintEngine(const_cast<MiqtVirtualQFileDialog*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QFileDialog::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QFileDialog::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QFileDialog_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QFileDialog::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QFileDialog::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QFileDialog_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QFileDialog::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QFileDialog::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QFileDialog_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QFileDialog::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QFileDialog::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QFileDialog_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QFileDialog::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QFileDialog::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QFileDialog_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QFileDialog::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QFileDialog::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QFileDialog_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QFileDialog::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QFileDialog::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QFileDialog_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QFileDialog::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QFileDialog::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QFileDialog_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QFileDialog::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QFileDialog::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QFileDialog_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QFileDialog::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__EnterEvent == 0) {
			QFileDialog::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QFileDialog_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEnterEvent* event) {

		QFileDialog::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QFileDialog::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QFileDialog_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QFileDialog::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__PaintEvent == 0) {
			QFileDialog::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QFileDialog_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* event) {

		QFileDialog::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QFileDialog::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QFileDialog_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QFileDialog::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QFileDialog::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QFileDialog_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QFileDialog::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QFileDialog::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QFileDialog_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QFileDialog::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QFileDialog::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QFileDialog_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QFileDialog::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QFileDialog::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QFileDialog_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QFileDialog::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QFileDialog::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QFileDialog_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QFileDialog::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QFileDialog::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QFileDialog_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QFileDialog::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QFileDialog::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QFileDialog_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QFileDialog::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__NativeEvent == 0) {
			return QFileDialog::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QFileDialog_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QFileDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QFileDialog::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QFileDialog_Metric(const_cast<MiqtVirtualQFileDialog*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QFileDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QFileDialog::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QFileDialog_InitPainter(const_cast<MiqtVirtualQFileDialog*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QFileDialog::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QFileDialog::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QFileDialog_Redirected(const_cast<MiqtVirtualQFileDialog*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QFileDialog::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QFileDialog::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QFileDialog_SharedPainter(const_cast<MiqtVirtualQFileDialog*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QFileDialog::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QFileDialog::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QFileDialog_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QFileDialog::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QFileDialog::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QFileDialog_InputMethodQuery(const_cast<MiqtVirtualQFileDialog*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QFileDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QFileDialog::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QFileDialog_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QFileDialog::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QFileDialog::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QFileDialog_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QFileDialog::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QFileDialog::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QFileDialog_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QFileDialog::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QFileDialog::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QFileDialog_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QFileDialog::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QFileDialog::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QFileDialog_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QFileDialog::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QFileDialog::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QFileDialog_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QFileDialog::disconnectNotify(*signal);

	}

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

QMetaObject* QFileDialog_MetaObject(const QFileDialog* self) {
	return (QMetaObject*) self->metaObject();
}

void* QFileDialog_Metacast(QFileDialog* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QFileDialog_Tr(const char* s) {
	QString _ret = QFileDialog::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFileDialog_SetDirectory(QFileDialog* self, struct miqt_string directory) {
	QString directory_QString = QString::fromUtf8(directory.data, directory.len);
	self->setDirectory(directory_QString);
}

void QFileDialog_SetDirectoryWithDirectory(QFileDialog* self, QDir* directory) {
	self->setDirectory(*directory);
}

QDir* QFileDialog_Directory(const QFileDialog* self) {
	return new QDir(self->directory());
}

void QFileDialog_SetDirectoryUrl(QFileDialog* self, QUrl* directory) {
	self->setDirectoryUrl(*directory);
}

QUrl* QFileDialog_DirectoryUrl(const QFileDialog* self) {
	return new QUrl(self->directoryUrl());
}

void QFileDialog_SelectFile(QFileDialog* self, struct miqt_string filename) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	self->selectFile(filename_QString);
}

struct miqt_array /* of struct miqt_string */  QFileDialog_SelectedFiles(const QFileDialog* self) {
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

void QFileDialog_SelectUrl(QFileDialog* self, QUrl* url) {
	self->selectUrl(*url);
}

struct miqt_array /* of QUrl* */  QFileDialog_SelectedUrls(const QFileDialog* self) {
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

void QFileDialog_SetNameFilter(QFileDialog* self, struct miqt_string filter) {
	QString filter_QString = QString::fromUtf8(filter.data, filter.len);
	self->setNameFilter(filter_QString);
}

void QFileDialog_SetNameFilters(QFileDialog* self, struct miqt_array /* of struct miqt_string */  filters) {
	QStringList filters_QList;
	filters_QList.reserve(filters.len);
	struct miqt_string* filters_arr = static_cast<struct miqt_string*>(filters.data);
	for(size_t i = 0; i < filters.len; ++i) {
		QString filters_arr_i_QString = QString::fromUtf8(filters_arr[i].data, filters_arr[i].len);
		filters_QList.push_back(filters_arr_i_QString);
	}
	self->setNameFilters(filters_QList);
}

struct miqt_array /* of struct miqt_string */  QFileDialog_NameFilters(const QFileDialog* self) {
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

void QFileDialog_SelectNameFilter(QFileDialog* self, struct miqt_string filter) {
	QString filter_QString = QString::fromUtf8(filter.data, filter.len);
	self->selectNameFilter(filter_QString);
}

struct miqt_string QFileDialog_SelectedMimeTypeFilter(const QFileDialog* self) {
	QString _ret = self->selectedMimeTypeFilter();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileDialog_SelectedNameFilter(const QFileDialog* self) {
	QString _ret = self->selectedNameFilter();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFileDialog_SetMimeTypeFilters(QFileDialog* self, struct miqt_array /* of struct miqt_string */  filters) {
	QStringList filters_QList;
	filters_QList.reserve(filters.len);
	struct miqt_string* filters_arr = static_cast<struct miqt_string*>(filters.data);
	for(size_t i = 0; i < filters.len; ++i) {
		QString filters_arr_i_QString = QString::fromUtf8(filters_arr[i].data, filters_arr[i].len);
		filters_QList.push_back(filters_arr_i_QString);
	}
	self->setMimeTypeFilters(filters_QList);
}

struct miqt_array /* of struct miqt_string */  QFileDialog_MimeTypeFilters(const QFileDialog* self) {
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

void QFileDialog_SelectMimeTypeFilter(QFileDialog* self, struct miqt_string filter) {
	QString filter_QString = QString::fromUtf8(filter.data, filter.len);
	self->selectMimeTypeFilter(filter_QString);
}

int QFileDialog_Filter(const QFileDialog* self) {
	QDir::Filters _ret = self->filter();
	return static_cast<int>(_ret);
}

void QFileDialog_SetFilter(QFileDialog* self, int filters) {
	self->setFilter(static_cast<QDir::Filters>(filters));
}

void QFileDialog_SetViewMode(QFileDialog* self, int mode) {
	self->setViewMode(static_cast<QFileDialog::ViewMode>(mode));
}

int QFileDialog_ViewMode(const QFileDialog* self) {
	QFileDialog::ViewMode _ret = self->viewMode();
	return static_cast<int>(_ret);
}

void QFileDialog_SetFileMode(QFileDialog* self, int mode) {
	self->setFileMode(static_cast<QFileDialog::FileMode>(mode));
}

int QFileDialog_FileMode(const QFileDialog* self) {
	QFileDialog::FileMode _ret = self->fileMode();
	return static_cast<int>(_ret);
}

void QFileDialog_SetAcceptMode(QFileDialog* self, int mode) {
	self->setAcceptMode(static_cast<QFileDialog::AcceptMode>(mode));
}

int QFileDialog_AcceptMode(const QFileDialog* self) {
	QFileDialog::AcceptMode _ret = self->acceptMode();
	return static_cast<int>(_ret);
}

void QFileDialog_SetSidebarUrls(QFileDialog* self, struct miqt_array /* of QUrl* */  urls) {
	QList<QUrl> urls_QList;
	urls_QList.reserve(urls.len);
	QUrl** urls_arr = static_cast<QUrl**>(urls.data);
	for(size_t i = 0; i < urls.len; ++i) {
		urls_QList.push_back(*(urls_arr[i]));
	}
	self->setSidebarUrls(urls_QList);
}

struct miqt_array /* of QUrl* */  QFileDialog_SidebarUrls(const QFileDialog* self) {
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

struct miqt_string QFileDialog_SaveState(const QFileDialog* self) {
	QByteArray _qb = self->saveState();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

bool QFileDialog_RestoreState(QFileDialog* self, struct miqt_string state) {
	QByteArray state_QByteArray(state.data, state.len);
	return self->restoreState(state_QByteArray);
}

void QFileDialog_SetDefaultSuffix(QFileDialog* self, struct miqt_string suffix) {
	QString suffix_QString = QString::fromUtf8(suffix.data, suffix.len);
	self->setDefaultSuffix(suffix_QString);
}

struct miqt_string QFileDialog_DefaultSuffix(const QFileDialog* self) {
	QString _ret = self->defaultSuffix();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFileDialog_SetHistory(QFileDialog* self, struct miqt_array /* of struct miqt_string */  paths) {
	QStringList paths_QList;
	paths_QList.reserve(paths.len);
	struct miqt_string* paths_arr = static_cast<struct miqt_string*>(paths.data);
	for(size_t i = 0; i < paths.len; ++i) {
		QString paths_arr_i_QString = QString::fromUtf8(paths_arr[i].data, paths_arr[i].len);
		paths_QList.push_back(paths_arr_i_QString);
	}
	self->setHistory(paths_QList);
}

struct miqt_array /* of struct miqt_string */  QFileDialog_History(const QFileDialog* self) {
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

void QFileDialog_SetItemDelegate(QFileDialog* self, QAbstractItemDelegate* delegate) {
	self->setItemDelegate(delegate);
}

QAbstractItemDelegate* QFileDialog_ItemDelegate(const QFileDialog* self) {
	return self->itemDelegate();
}

void QFileDialog_SetIconProvider(QFileDialog* self, QAbstractFileIconProvider* provider) {
	self->setIconProvider(provider);
}

QAbstractFileIconProvider* QFileDialog_IconProvider(const QFileDialog* self) {
	return self->iconProvider();
}

void QFileDialog_SetLabelText(QFileDialog* self, int label, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setLabelText(static_cast<QFileDialog::DialogLabel>(label), text_QString);
}

struct miqt_string QFileDialog_LabelText(const QFileDialog* self, int label) {
	QString _ret = self->labelText(static_cast<QFileDialog::DialogLabel>(label));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFileDialog_SetSupportedSchemes(QFileDialog* self, struct miqt_array /* of struct miqt_string */  schemes) {
	QStringList schemes_QList;
	schemes_QList.reserve(schemes.len);
	struct miqt_string* schemes_arr = static_cast<struct miqt_string*>(schemes.data);
	for(size_t i = 0; i < schemes.len; ++i) {
		QString schemes_arr_i_QString = QString::fromUtf8(schemes_arr[i].data, schemes_arr[i].len);
		schemes_QList.push_back(schemes_arr_i_QString);
	}
	self->setSupportedSchemes(schemes_QList);
}

struct miqt_array /* of struct miqt_string */  QFileDialog_SupportedSchemes(const QFileDialog* self) {
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

void QFileDialog_SetProxyModel(QFileDialog* self, QAbstractProxyModel* model) {
	self->setProxyModel(model);
}

QAbstractProxyModel* QFileDialog_ProxyModel(const QFileDialog* self) {
	return self->proxyModel();
}

void QFileDialog_SetOption(QFileDialog* self, int option) {
	self->setOption(static_cast<QFileDialog::Option>(option));
}

bool QFileDialog_TestOption(const QFileDialog* self, int option) {
	return self->testOption(static_cast<QFileDialog::Option>(option));
}

void QFileDialog_SetOptions(QFileDialog* self, int options) {
	self->setOptions(static_cast<QFileDialog::Options>(options));
}

int QFileDialog_Options(const QFileDialog* self) {
	QFileDialog::Options _ret = self->options();
	return static_cast<int>(_ret);
}

void QFileDialog_SetVisible(QFileDialog* self, bool visible) {
	self->setVisible(visible);
}

void QFileDialog_FileSelected(QFileDialog* self, struct miqt_string file) {
	QString file_QString = QString::fromUtf8(file.data, file.len);
	self->fileSelected(file_QString);
}

void QFileDialog_connect_FileSelected(QFileDialog* self, intptr_t slot) {
	MiqtVirtualQFileDialog::connect(self, static_cast<void (QFileDialog::*)(const QString&)>(&QFileDialog::fileSelected), self, [=](const QString& file) {
		const QString file_ret = file;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray file_b = file_ret.toUtf8();
		struct miqt_string file_ms;
		file_ms.len = file_b.length();
		file_ms.data = static_cast<char*>(malloc(file_ms.len));
		memcpy(file_ms.data, file_b.data(), file_ms.len);
		struct miqt_string sigval1 = file_ms;
		miqt_exec_callback_QFileDialog_FileSelected(slot, sigval1);
	});
}

void QFileDialog_FilesSelected(QFileDialog* self, struct miqt_array /* of struct miqt_string */  files) {
	QStringList files_QList;
	files_QList.reserve(files.len);
	struct miqt_string* files_arr = static_cast<struct miqt_string*>(files.data);
	for(size_t i = 0; i < files.len; ++i) {
		QString files_arr_i_QString = QString::fromUtf8(files_arr[i].data, files_arr[i].len);
		files_QList.push_back(files_arr_i_QString);
	}
	self->filesSelected(files_QList);
}

void QFileDialog_connect_FilesSelected(QFileDialog* self, intptr_t slot) {
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
		miqt_exec_callback_QFileDialog_FilesSelected(slot, sigval1);
	});
}

void QFileDialog_CurrentChanged(QFileDialog* self, struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	self->currentChanged(path_QString);
}

void QFileDialog_connect_CurrentChanged(QFileDialog* self, intptr_t slot) {
	MiqtVirtualQFileDialog::connect(self, static_cast<void (QFileDialog::*)(const QString&)>(&QFileDialog::currentChanged), self, [=](const QString& path) {
		const QString path_ret = path;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray path_b = path_ret.toUtf8();
		struct miqt_string path_ms;
		path_ms.len = path_b.length();
		path_ms.data = static_cast<char*>(malloc(path_ms.len));
		memcpy(path_ms.data, path_b.data(), path_ms.len);
		struct miqt_string sigval1 = path_ms;
		miqt_exec_callback_QFileDialog_CurrentChanged(slot, sigval1);
	});
}

void QFileDialog_DirectoryEntered(QFileDialog* self, struct miqt_string directory) {
	QString directory_QString = QString::fromUtf8(directory.data, directory.len);
	self->directoryEntered(directory_QString);
}

void QFileDialog_connect_DirectoryEntered(QFileDialog* self, intptr_t slot) {
	MiqtVirtualQFileDialog::connect(self, static_cast<void (QFileDialog::*)(const QString&)>(&QFileDialog::directoryEntered), self, [=](const QString& directory) {
		const QString directory_ret = directory;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray directory_b = directory_ret.toUtf8();
		struct miqt_string directory_ms;
		directory_ms.len = directory_b.length();
		directory_ms.data = static_cast<char*>(malloc(directory_ms.len));
		memcpy(directory_ms.data, directory_b.data(), directory_ms.len);
		struct miqt_string sigval1 = directory_ms;
		miqt_exec_callback_QFileDialog_DirectoryEntered(slot, sigval1);
	});
}

void QFileDialog_UrlSelected(QFileDialog* self, QUrl* url) {
	self->urlSelected(*url);
}

void QFileDialog_connect_UrlSelected(QFileDialog* self, intptr_t slot) {
	MiqtVirtualQFileDialog::connect(self, static_cast<void (QFileDialog::*)(const QUrl&)>(&QFileDialog::urlSelected), self, [=](const QUrl& url) {
		const QUrl& url_ret = url;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
		miqt_exec_callback_QFileDialog_UrlSelected(slot, sigval1);
	});
}

void QFileDialog_UrlsSelected(QFileDialog* self, struct miqt_array /* of QUrl* */  urls) {
	QList<QUrl> urls_QList;
	urls_QList.reserve(urls.len);
	QUrl** urls_arr = static_cast<QUrl**>(urls.data);
	for(size_t i = 0; i < urls.len; ++i) {
		urls_QList.push_back(*(urls_arr[i]));
	}
	self->urlsSelected(urls_QList);
}

void QFileDialog_connect_UrlsSelected(QFileDialog* self, intptr_t slot) {
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
		miqt_exec_callback_QFileDialog_UrlsSelected(slot, sigval1);
	});
}

void QFileDialog_CurrentUrlChanged(QFileDialog* self, QUrl* url) {
	self->currentUrlChanged(*url);
}

void QFileDialog_connect_CurrentUrlChanged(QFileDialog* self, intptr_t slot) {
	MiqtVirtualQFileDialog::connect(self, static_cast<void (QFileDialog::*)(const QUrl&)>(&QFileDialog::currentUrlChanged), self, [=](const QUrl& url) {
		const QUrl& url_ret = url;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
		miqt_exec_callback_QFileDialog_CurrentUrlChanged(slot, sigval1);
	});
}

void QFileDialog_DirectoryUrlEntered(QFileDialog* self, QUrl* directory) {
	self->directoryUrlEntered(*directory);
}

void QFileDialog_connect_DirectoryUrlEntered(QFileDialog* self, intptr_t slot) {
	MiqtVirtualQFileDialog::connect(self, static_cast<void (QFileDialog::*)(const QUrl&)>(&QFileDialog::directoryUrlEntered), self, [=](const QUrl& directory) {
		const QUrl& directory_ret = directory;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&directory_ret);
		miqt_exec_callback_QFileDialog_DirectoryUrlEntered(slot, sigval1);
	});
}

void QFileDialog_FilterSelected(QFileDialog* self, struct miqt_string filter) {
	QString filter_QString = QString::fromUtf8(filter.data, filter.len);
	self->filterSelected(filter_QString);
}

void QFileDialog_connect_FilterSelected(QFileDialog* self, intptr_t slot) {
	MiqtVirtualQFileDialog::connect(self, static_cast<void (QFileDialog::*)(const QString&)>(&QFileDialog::filterSelected), self, [=](const QString& filter) {
		const QString filter_ret = filter;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray filter_b = filter_ret.toUtf8();
		struct miqt_string filter_ms;
		filter_ms.len = filter_b.length();
		filter_ms.data = static_cast<char*>(malloc(filter_ms.len));
		memcpy(filter_ms.data, filter_b.data(), filter_ms.len);
		struct miqt_string sigval1 = filter_ms;
		miqt_exec_callback_QFileDialog_FilterSelected(slot, sigval1);
	});
}

struct miqt_string QFileDialog_GetOpenFileName() {
	QString _ret = QFileDialog::getOpenFileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QUrl* QFileDialog_GetOpenFileUrl() {
	return new QUrl(QFileDialog::getOpenFileUrl());
}

struct miqt_string QFileDialog_GetSaveFileName() {
	QString _ret = QFileDialog::getSaveFileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QUrl* QFileDialog_GetSaveFileUrl() {
	return new QUrl(QFileDialog::getSaveFileUrl());
}

struct miqt_string QFileDialog_GetExistingDirectory() {
	QString _ret = QFileDialog::getExistingDirectory();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QUrl* QFileDialog_GetExistingDirectoryUrl() {
	return new QUrl(QFileDialog::getExistingDirectoryUrl());
}

struct miqt_array /* of struct miqt_string */  QFileDialog_GetOpenFileNames() {
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

struct miqt_array /* of QUrl* */  QFileDialog_GetOpenFileUrls() {
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

void QFileDialog_SaveFileContent(struct miqt_string fileContent, struct miqt_string fileNameHint) {
	QByteArray fileContent_QByteArray(fileContent.data, fileContent.len);
	QString fileNameHint_QString = QString::fromUtf8(fileNameHint.data, fileNameHint.len);
	QFileDialog::saveFileContent(fileContent_QByteArray, fileNameHint_QString);
}

struct miqt_string QFileDialog_Tr2(const char* s, const char* c) {
	QString _ret = QFileDialog::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileDialog_Tr3(const char* s, const char* c, int n) {
	QString _ret = QFileDialog::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFileDialog_SetOption2(QFileDialog* self, int option, bool on) {
	self->setOption(static_cast<QFileDialog::Option>(option), on);
}

struct miqt_string QFileDialog_GetOpenFileName1(QWidget* parent) {
	QString _ret = QFileDialog::getOpenFileName(parent);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileDialog_GetOpenFileName2(QWidget* parent, struct miqt_string caption) {
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

struct miqt_string QFileDialog_GetOpenFileName3(QWidget* parent, struct miqt_string caption, struct miqt_string dir) {
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

struct miqt_string QFileDialog_GetOpenFileName4(QWidget* parent, struct miqt_string caption, struct miqt_string dir, struct miqt_string filter) {
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

QUrl* QFileDialog_GetOpenFileUrl1(QWidget* parent) {
	return new QUrl(QFileDialog::getOpenFileUrl(parent));
}

QUrl* QFileDialog_GetOpenFileUrl2(QWidget* parent, struct miqt_string caption) {
	QString caption_QString = QString::fromUtf8(caption.data, caption.len);
	return new QUrl(QFileDialog::getOpenFileUrl(parent, caption_QString));
}

QUrl* QFileDialog_GetOpenFileUrl3(QWidget* parent, struct miqt_string caption, QUrl* dir) {
	QString caption_QString = QString::fromUtf8(caption.data, caption.len);
	return new QUrl(QFileDialog::getOpenFileUrl(parent, caption_QString, *dir));
}

QUrl* QFileDialog_GetOpenFileUrl4(QWidget* parent, struct miqt_string caption, QUrl* dir, struct miqt_string filter) {
	QString caption_QString = QString::fromUtf8(caption.data, caption.len);
	QString filter_QString = QString::fromUtf8(filter.data, filter.len);
	return new QUrl(QFileDialog::getOpenFileUrl(parent, caption_QString, *dir, filter_QString));
}

struct miqt_string QFileDialog_GetSaveFileName1(QWidget* parent) {
	QString _ret = QFileDialog::getSaveFileName(parent);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileDialog_GetSaveFileName2(QWidget* parent, struct miqt_string caption) {
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

struct miqt_string QFileDialog_GetSaveFileName3(QWidget* parent, struct miqt_string caption, struct miqt_string dir) {
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

struct miqt_string QFileDialog_GetSaveFileName4(QWidget* parent, struct miqt_string caption, struct miqt_string dir, struct miqt_string filter) {
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

QUrl* QFileDialog_GetSaveFileUrl1(QWidget* parent) {
	return new QUrl(QFileDialog::getSaveFileUrl(parent));
}

QUrl* QFileDialog_GetSaveFileUrl2(QWidget* parent, struct miqt_string caption) {
	QString caption_QString = QString::fromUtf8(caption.data, caption.len);
	return new QUrl(QFileDialog::getSaveFileUrl(parent, caption_QString));
}

QUrl* QFileDialog_GetSaveFileUrl3(QWidget* parent, struct miqt_string caption, QUrl* dir) {
	QString caption_QString = QString::fromUtf8(caption.data, caption.len);
	return new QUrl(QFileDialog::getSaveFileUrl(parent, caption_QString, *dir));
}

QUrl* QFileDialog_GetSaveFileUrl4(QWidget* parent, struct miqt_string caption, QUrl* dir, struct miqt_string filter) {
	QString caption_QString = QString::fromUtf8(caption.data, caption.len);
	QString filter_QString = QString::fromUtf8(filter.data, filter.len);
	return new QUrl(QFileDialog::getSaveFileUrl(parent, caption_QString, *dir, filter_QString));
}

struct miqt_string QFileDialog_GetExistingDirectory1(QWidget* parent) {
	QString _ret = QFileDialog::getExistingDirectory(parent);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileDialog_GetExistingDirectory2(QWidget* parent, struct miqt_string caption) {
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

struct miqt_string QFileDialog_GetExistingDirectory3(QWidget* parent, struct miqt_string caption, struct miqt_string dir) {
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

struct miqt_string QFileDialog_GetExistingDirectory4(QWidget* parent, struct miqt_string caption, struct miqt_string dir, int options) {
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

QUrl* QFileDialog_GetExistingDirectoryUrl1(QWidget* parent) {
	return new QUrl(QFileDialog::getExistingDirectoryUrl(parent));
}

QUrl* QFileDialog_GetExistingDirectoryUrl2(QWidget* parent, struct miqt_string caption) {
	QString caption_QString = QString::fromUtf8(caption.data, caption.len);
	return new QUrl(QFileDialog::getExistingDirectoryUrl(parent, caption_QString));
}

QUrl* QFileDialog_GetExistingDirectoryUrl3(QWidget* parent, struct miqt_string caption, QUrl* dir) {
	QString caption_QString = QString::fromUtf8(caption.data, caption.len);
	return new QUrl(QFileDialog::getExistingDirectoryUrl(parent, caption_QString, *dir));
}

QUrl* QFileDialog_GetExistingDirectoryUrl4(QWidget* parent, struct miqt_string caption, QUrl* dir, int options) {
	QString caption_QString = QString::fromUtf8(caption.data, caption.len);
	return new QUrl(QFileDialog::getExistingDirectoryUrl(parent, caption_QString, *dir, static_cast<QFileDialog::Options>(options)));
}

QUrl* QFileDialog_GetExistingDirectoryUrl5(QWidget* parent, struct miqt_string caption, QUrl* dir, int options, struct miqt_array /* of struct miqt_string */  supportedSchemes) {
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

struct miqt_array /* of struct miqt_string */  QFileDialog_GetOpenFileNames1(QWidget* parent) {
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

struct miqt_array /* of struct miqt_string */  QFileDialog_GetOpenFileNames2(QWidget* parent, struct miqt_string caption) {
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

struct miqt_array /* of struct miqt_string */  QFileDialog_GetOpenFileNames3(QWidget* parent, struct miqt_string caption, struct miqt_string dir) {
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

struct miqt_array /* of struct miqt_string */  QFileDialog_GetOpenFileNames4(QWidget* parent, struct miqt_string caption, struct miqt_string dir, struct miqt_string filter) {
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

struct miqt_array /* of QUrl* */  QFileDialog_GetOpenFileUrls1(QWidget* parent) {
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

struct miqt_array /* of QUrl* */  QFileDialog_GetOpenFileUrls2(QWidget* parent, struct miqt_string caption) {
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

struct miqt_array /* of QUrl* */  QFileDialog_GetOpenFileUrls3(QWidget* parent, struct miqt_string caption, QUrl* dir) {
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

struct miqt_array /* of QUrl* */  QFileDialog_GetOpenFileUrls4(QWidget* parent, struct miqt_string caption, QUrl* dir, struct miqt_string filter) {
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

bool QFileDialog_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QFileDialog_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_SetVisible(visible);
}

bool QFileDialog_override_virtual_Done(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Done = slot;
	return true;
}

void QFileDialog_virtualbase_Done(void* self, int result) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_Done(result);
}

bool QFileDialog_override_virtual_Accept(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Accept = slot;
	return true;
}

void QFileDialog_virtualbase_Accept(void* self) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_Accept();
}

bool QFileDialog_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QFileDialog_virtualbase_ChangeEvent(void* self, QEvent* e) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_ChangeEvent(e);
}

bool QFileDialog_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QFileDialog_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQFileDialog*)(self) )->virtualbase_SizeHint();
}

bool QFileDialog_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QFileDialog_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQFileDialog*)(self) )->virtualbase_MinimumSizeHint();
}

bool QFileDialog_override_virtual_Open(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Open = slot;
	return true;
}

void QFileDialog_virtualbase_Open(void* self) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_Open();
}

bool QFileDialog_override_virtual_Exec(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Exec = slot;
	return true;
}

int QFileDialog_virtualbase_Exec(void* self) {
	return ( (MiqtVirtualQFileDialog*)(self) )->virtualbase_Exec();
}

bool QFileDialog_override_virtual_Reject(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Reject = slot;
	return true;
}

void QFileDialog_virtualbase_Reject(void* self) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_Reject();
}

bool QFileDialog_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QFileDialog_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_KeyPressEvent(param1);
}

bool QFileDialog_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QFileDialog_virtualbase_CloseEvent(void* self, QCloseEvent* param1) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_CloseEvent(param1);
}

bool QFileDialog_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QFileDialog_virtualbase_ShowEvent(void* self, QShowEvent* param1) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_ShowEvent(param1);
}

bool QFileDialog_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QFileDialog_virtualbase_ResizeEvent(void* self, QResizeEvent* param1) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_ResizeEvent(param1);
}

bool QFileDialog_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QFileDialog_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_ContextMenuEvent(param1);
}

bool QFileDialog_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QFileDialog_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQFileDialog*)(self) )->virtualbase_EventFilter(param1, param2);
}

bool QFileDialog_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QFileDialog_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQFileDialog*)(self) )->virtualbase_DevType();
}

bool QFileDialog_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QFileDialog_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQFileDialog*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QFileDialog_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QFileDialog_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQFileDialog*)(self) )->virtualbase_HasHeightForWidth();
}

bool QFileDialog_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QFileDialog_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQFileDialog*)(self) )->virtualbase_PaintEngine();
}

bool QFileDialog_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QFileDialog_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQFileDialog*)(self) )->virtualbase_Event(event);
}

bool QFileDialog_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QFileDialog_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_MousePressEvent(event);
}

bool QFileDialog_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QFileDialog_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QFileDialog_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QFileDialog_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QFileDialog_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QFileDialog_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QFileDialog_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QFileDialog_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_WheelEvent(event);
}

bool QFileDialog_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QFileDialog_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QFileDialog_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QFileDialog_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_FocusInEvent(event);
}

bool QFileDialog_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QFileDialog_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QFileDialog_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QFileDialog_virtualbase_EnterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_EnterEvent(event);
}

bool QFileDialog_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QFileDialog_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_LeaveEvent(event);
}

bool QFileDialog_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QFileDialog_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_PaintEvent(event);
}

bool QFileDialog_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QFileDialog_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_MoveEvent(event);
}

bool QFileDialog_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QFileDialog_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_TabletEvent(event);
}

bool QFileDialog_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QFileDialog_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_ActionEvent(event);
}

bool QFileDialog_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QFileDialog_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QFileDialog_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QFileDialog_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QFileDialog_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QFileDialog_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QFileDialog_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QFileDialog_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_DropEvent(event);
}

bool QFileDialog_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QFileDialog_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_HideEvent(event);
}

bool QFileDialog_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QFileDialog_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQFileDialog*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QFileDialog_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QFileDialog_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQFileDialog*)(self) )->virtualbase_Metric(param1);
}

bool QFileDialog_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QFileDialog_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQFileDialog*)(self) )->virtualbase_InitPainter(painter);
}

bool QFileDialog_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QFileDialog_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQFileDialog*)(self) )->virtualbase_Redirected(offset);
}

bool QFileDialog_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QFileDialog_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQFileDialog*)(self) )->virtualbase_SharedPainter();
}

bool QFileDialog_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QFileDialog_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QFileDialog_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QFileDialog_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQFileDialog*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QFileDialog_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QFileDialog_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQFileDialog*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QFileDialog_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QFileDialog_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_TimerEvent(event);
}

bool QFileDialog_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QFileDialog_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_ChildEvent(event);
}

bool QFileDialog_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QFileDialog_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_CustomEvent(event);
}

bool QFileDialog_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QFileDialog_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QFileDialog_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQFileDialog* self_cast = dynamic_cast<MiqtVirtualQFileDialog*>( (QFileDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QFileDialog_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQFileDialog*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QFileDialog_Delete(QFileDialog* self) {
	delete self;
}

