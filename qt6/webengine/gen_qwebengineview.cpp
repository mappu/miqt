#include <QAction>
#include <QActionEvent>
#include <QByteArray>
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
#include <QIcon>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMenu>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPageLayout>
#include <QPageRanges>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QPrinter>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QUrl>
#include <QVariant>
#include <QWebEngineContextMenuRequest>
#include <QWebEngineHistory>
#include <QWebEngineHttpRequest>
#include <QWebEnginePage>
#include <QWebEngineProfile>
#include <QWebEngineSettings>
#include <QWebEngineView>
#include <QWheelEvent>
#include <QWidget>
#include <qwebengineview.h>
#include "gen_qwebengineview.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QWebEngineView_LoadStarted(intptr_t);
void miqt_exec_callback_QWebEngineView_LoadProgress(intptr_t, int);
void miqt_exec_callback_QWebEngineView_LoadFinished(intptr_t, bool);
void miqt_exec_callback_QWebEngineView_TitleChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QWebEngineView_SelectionChanged(intptr_t);
void miqt_exec_callback_QWebEngineView_UrlChanged(intptr_t, QUrl*);
void miqt_exec_callback_QWebEngineView_IconUrlChanged(intptr_t, QUrl*);
void miqt_exec_callback_QWebEngineView_IconChanged(intptr_t, QIcon*);
void miqt_exec_callback_QWebEngineView_RenderProcessTerminated(intptr_t, int, int);
void miqt_exec_callback_QWebEngineView_PdfPrintingFinished(intptr_t, struct miqt_string, bool);
void miqt_exec_callback_QWebEngineView_PrintRequested(intptr_t);
void miqt_exec_callback_QWebEngineView_PrintFinished(intptr_t, bool);
QSize* miqt_exec_callback_QWebEngineView_SizeHint(void*, intptr_t);
QWebEngineView* miqt_exec_callback_QWebEngineView_CreateWindow(void*, intptr_t, int);
void miqt_exec_callback_QWebEngineView_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
bool miqt_exec_callback_QWebEngineView_Event(void*, intptr_t, QEvent*);
void miqt_exec_callback_QWebEngineView_ShowEvent(void*, intptr_t, QShowEvent*);
void miqt_exec_callback_QWebEngineView_HideEvent(void*, intptr_t, QHideEvent*);
void miqt_exec_callback_QWebEngineView_CloseEvent(void*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QWebEngineView_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QWebEngineView_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QWebEngineView_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QWebEngineView_DropEvent(void*, intptr_t, QDropEvent*);
int miqt_exec_callback_QWebEngineView_DevType(void*, intptr_t);
void miqt_exec_callback_QWebEngineView_SetVisible(void*, intptr_t, bool);
QSize* miqt_exec_callback_QWebEngineView_MinimumSizeHint(void*, intptr_t);
int miqt_exec_callback_QWebEngineView_HeightForWidth(void*, intptr_t, int);
bool miqt_exec_callback_QWebEngineView_HasHeightForWidth(void*, intptr_t);
QPaintEngine* miqt_exec_callback_QWebEngineView_PaintEngine(void*, intptr_t);
void miqt_exec_callback_QWebEngineView_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWebEngineView_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWebEngineView_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWebEngineView_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWebEngineView_WheelEvent(void*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QWebEngineView_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QWebEngineView_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QWebEngineView_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QWebEngineView_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QWebEngineView_EnterEvent(void*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QWebEngineView_LeaveEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QWebEngineView_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QWebEngineView_MoveEvent(void*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QWebEngineView_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QWebEngineView_TabletEvent(void*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QWebEngineView_ActionEvent(void*, intptr_t, QActionEvent*);
bool miqt_exec_callback_QWebEngineView_NativeEvent(void*, intptr_t, struct miqt_string, void*, intptr_t*);
void miqt_exec_callback_QWebEngineView_ChangeEvent(void*, intptr_t, QEvent*);
int miqt_exec_callback_QWebEngineView_Metric(void*, intptr_t, int);
void miqt_exec_callback_QWebEngineView_InitPainter(void*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QWebEngineView_Redirected(void*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QWebEngineView_SharedPainter(void*, intptr_t);
void miqt_exec_callback_QWebEngineView_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QWebEngineView_InputMethodQuery(void*, intptr_t, int);
bool miqt_exec_callback_QWebEngineView_FocusNextPrevChild(void*, intptr_t, bool);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQWebEngineView final : public QWebEngineView {
public:

	MiqtVirtualQWebEngineView(QWidget* parent): QWebEngineView(parent) {};
	MiqtVirtualQWebEngineView(): QWebEngineView() {};
	MiqtVirtualQWebEngineView(QWebEngineProfile* profile): QWebEngineView(profile) {};
	MiqtVirtualQWebEngineView(QWebEnginePage* page): QWebEngineView(page) {};
	MiqtVirtualQWebEngineView(QWebEngineProfile* profile, QWidget* parent): QWebEngineView(profile, parent) {};
	MiqtVirtualQWebEngineView(QWebEnginePage* page, QWidget* parent): QWebEngineView(page, parent) {};

	virtual ~MiqtVirtualQWebEngineView() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QWebEngineView::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QWebEngineView_SizeHint(const_cast<MiqtVirtualQWebEngineView*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QWebEngineView::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CreateWindow = 0;

	// Subclass to allow providing a Go implementation
	virtual QWebEngineView* createWindow(QWebEnginePage::WebWindowType typeVal) override {
		if (handle__CreateWindow == 0) {
			return QWebEngineView::createWindow(typeVal);
		}
		
		QWebEnginePage::WebWindowType typeVal_ret = typeVal;
		int sigval1 = static_cast<int>(typeVal_ret);

		QWebEngineView* callback_return_value = miqt_exec_callback_QWebEngineView_CreateWindow(this, handle__CreateWindow, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QWebEngineView* virtualbase_CreateWindow(int typeVal) {

		return QWebEngineView::createWindow(static_cast<QWebEnginePage::WebWindowType>(typeVal));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__ContextMenuEvent == 0) {
			QWebEngineView::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QWebEngineView_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* param1) {

		QWebEngineView::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__Event == 0) {
			return QWebEngineView::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QWebEngineView_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* param1) {

		return QWebEngineView::event(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (handle__ShowEvent == 0) {
			QWebEngineView::showEvent(param1);
			return;
		}
		
		QShowEvent* sigval1 = param1;

		miqt_exec_callback_QWebEngineView_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* param1) {

		QWebEngineView::showEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* param1) override {
		if (handle__HideEvent == 0) {
			QWebEngineView::hideEvent(param1);
			return;
		}
		
		QHideEvent* sigval1 = param1;

		miqt_exec_callback_QWebEngineView_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* param1) {

		QWebEngineView::hideEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* param1) override {
		if (handle__CloseEvent == 0) {
			QWebEngineView::closeEvent(param1);
			return;
		}
		
		QCloseEvent* sigval1 = param1;

		miqt_exec_callback_QWebEngineView_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* param1) {

		QWebEngineView::closeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* e) override {
		if (handle__DragEnterEvent == 0) {
			QWebEngineView::dragEnterEvent(e);
			return;
		}
		
		QDragEnterEvent* sigval1 = e;

		miqt_exec_callback_QWebEngineView_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* e) {

		QWebEngineView::dragEnterEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
		if (handle__DragLeaveEvent == 0) {
			QWebEngineView::dragLeaveEvent(e);
			return;
		}
		
		QDragLeaveEvent* sigval1 = e;

		miqt_exec_callback_QWebEngineView_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* e) {

		QWebEngineView::dragLeaveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* e) override {
		if (handle__DragMoveEvent == 0) {
			QWebEngineView::dragMoveEvent(e);
			return;
		}
		
		QDragMoveEvent* sigval1 = e;

		miqt_exec_callback_QWebEngineView_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* e) {

		QWebEngineView::dragMoveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* e) override {
		if (handle__DropEvent == 0) {
			QWebEngineView::dropEvent(e);
			return;
		}
		
		QDropEvent* sigval1 = e;

		miqt_exec_callback_QWebEngineView_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* e) {

		QWebEngineView::dropEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QWebEngineView::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QWebEngineView_DevType(const_cast<MiqtVirtualQWebEngineView*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QWebEngineView::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QWebEngineView::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QWebEngineView_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QWebEngineView::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QWebEngineView::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QWebEngineView_MinimumSizeHint(const_cast<MiqtVirtualQWebEngineView*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QWebEngineView::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QWebEngineView::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QWebEngineView_HeightForWidth(const_cast<MiqtVirtualQWebEngineView*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QWebEngineView::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QWebEngineView::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QWebEngineView_HasHeightForWidth(const_cast<MiqtVirtualQWebEngineView*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QWebEngineView::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QWebEngineView::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QWebEngineView_PaintEngine(const_cast<MiqtVirtualQWebEngineView*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QWebEngineView::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QWebEngineView::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineView_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QWebEngineView::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QWebEngineView::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineView_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QWebEngineView::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QWebEngineView::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineView_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QWebEngineView::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QWebEngineView::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineView_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QWebEngineView::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QWebEngineView::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineView_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QWebEngineView::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QWebEngineView::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineView_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QWebEngineView::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QWebEngineView::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineView_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QWebEngineView::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QWebEngineView::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineView_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QWebEngineView::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QWebEngineView::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineView_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QWebEngineView::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__EnterEvent == 0) {
			QWebEngineView::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineView_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEnterEvent* event) {

		QWebEngineView::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QWebEngineView::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineView_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QWebEngineView::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__PaintEvent == 0) {
			QWebEngineView::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineView_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* event) {

		QWebEngineView::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QWebEngineView::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineView_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QWebEngineView::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QWebEngineView::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineView_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QWebEngineView::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QWebEngineView::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineView_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QWebEngineView::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QWebEngineView::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineView_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QWebEngineView::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__NativeEvent == 0) {
			return QWebEngineView::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QWebEngineView_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QWebEngineView::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QWebEngineView::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QWebEngineView_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QWebEngineView::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QWebEngineView::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QWebEngineView_Metric(const_cast<MiqtVirtualQWebEngineView*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QWebEngineView::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QWebEngineView::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QWebEngineView_InitPainter(const_cast<MiqtVirtualQWebEngineView*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QWebEngineView::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QWebEngineView::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QWebEngineView_Redirected(const_cast<MiqtVirtualQWebEngineView*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QWebEngineView::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QWebEngineView::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QWebEngineView_SharedPainter(const_cast<MiqtVirtualQWebEngineView*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QWebEngineView::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QWebEngineView::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QWebEngineView_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QWebEngineView::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QWebEngineView::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QWebEngineView_InputMethodQuery(const_cast<MiqtVirtualQWebEngineView*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QWebEngineView::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QWebEngineView::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QWebEngineView_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QWebEngineView::focusNextPrevChild(next);

	}

};

QWebEngineView* QWebEngineView_new(QWidget* parent) {
	return new MiqtVirtualQWebEngineView(parent);
}

QWebEngineView* QWebEngineView_new2() {
	return new MiqtVirtualQWebEngineView();
}

QWebEngineView* QWebEngineView_new3(QWebEngineProfile* profile) {
	return new MiqtVirtualQWebEngineView(profile);
}

QWebEngineView* QWebEngineView_new4(QWebEnginePage* page) {
	return new MiqtVirtualQWebEngineView(page);
}

QWebEngineView* QWebEngineView_new5(QWebEngineProfile* profile, QWidget* parent) {
	return new MiqtVirtualQWebEngineView(profile, parent);
}

QWebEngineView* QWebEngineView_new6(QWebEnginePage* page, QWidget* parent) {
	return new MiqtVirtualQWebEngineView(page, parent);
}

void QWebEngineView_virtbase(QWebEngineView* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QWebEngineView_MetaObject(const QWebEngineView* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebEngineView_Metacast(QWebEngineView* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebEngineView_Tr(const char* s) {
	QString _ret = QWebEngineView::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QWebEngineView* QWebEngineView_ForPage(QWebEnginePage* page) {
	return QWebEngineView::forPage(page);
}

QWebEnginePage* QWebEngineView_Page(const QWebEngineView* self) {
	return self->page();
}

void QWebEngineView_SetPage(QWebEngineView* self, QWebEnginePage* page) {
	self->setPage(page);
}

void QWebEngineView_Load(QWebEngineView* self, QUrl* url) {
	self->load(*url);
}

void QWebEngineView_LoadWithRequest(QWebEngineView* self, QWebEngineHttpRequest* request) {
	self->load(*request);
}

void QWebEngineView_SetHtml(QWebEngineView* self, struct miqt_string html) {
	QString html_QString = QString::fromUtf8(html.data, html.len);
	self->setHtml(html_QString);
}

void QWebEngineView_SetContent(QWebEngineView* self, struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	self->setContent(data_QByteArray);
}

QWebEngineHistory* QWebEngineView_History(const QWebEngineView* self) {
	return self->history();
}

struct miqt_string QWebEngineView_Title(const QWebEngineView* self) {
	QString _ret = self->title();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEngineView_SetUrl(QWebEngineView* self, QUrl* url) {
	self->setUrl(*url);
}

QUrl* QWebEngineView_Url(const QWebEngineView* self) {
	return new QUrl(self->url());
}

QUrl* QWebEngineView_IconUrl(const QWebEngineView* self) {
	return new QUrl(self->iconUrl());
}

QIcon* QWebEngineView_Icon(const QWebEngineView* self) {
	return new QIcon(self->icon());
}

bool QWebEngineView_HasSelection(const QWebEngineView* self) {
	return self->hasSelection();
}

struct miqt_string QWebEngineView_SelectedText(const QWebEngineView* self) {
	QString _ret = self->selectedText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAction* QWebEngineView_PageAction(const QWebEngineView* self, int action) {
	return self->pageAction(static_cast<QWebEnginePage::WebAction>(action));
}

void QWebEngineView_TriggerPageAction(QWebEngineView* self, int action) {
	self->triggerPageAction(static_cast<QWebEnginePage::WebAction>(action));
}

double QWebEngineView_ZoomFactor(const QWebEngineView* self) {
	qreal _ret = self->zoomFactor();
	return static_cast<double>(_ret);
}

void QWebEngineView_SetZoomFactor(QWebEngineView* self, double factor) {
	self->setZoomFactor(static_cast<qreal>(factor));
}

QSize* QWebEngineView_SizeHint(const QWebEngineView* self) {
	return new QSize(self->sizeHint());
}

QWebEngineSettings* QWebEngineView_Settings(const QWebEngineView* self) {
	return self->settings();
}

QMenu* QWebEngineView_CreateStandardContextMenu(QWebEngineView* self) {
	return self->createStandardContextMenu();
}

QWebEngineContextMenuRequest* QWebEngineView_LastContextMenuRequest(const QWebEngineView* self) {
	return self->lastContextMenuRequest();
}

void QWebEngineView_PrintToPdf(QWebEngineView* self, struct miqt_string filePath) {
	QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
	self->printToPdf(filePath_QString);
}

void QWebEngineView_Print(QWebEngineView* self, QPrinter* printer) {
	self->print(printer);
}

void QWebEngineView_Stop(QWebEngineView* self) {
	self->stop();
}

void QWebEngineView_Back(QWebEngineView* self) {
	self->back();
}

void QWebEngineView_Forward(QWebEngineView* self) {
	self->forward();
}

void QWebEngineView_Reload(QWebEngineView* self) {
	self->reload();
}

void QWebEngineView_LoadStarted(QWebEngineView* self) {
	self->loadStarted();
}

void QWebEngineView_connect_LoadStarted(QWebEngineView* self, intptr_t slot) {
	MiqtVirtualQWebEngineView::connect(self, static_cast<void (QWebEngineView::*)()>(&QWebEngineView::loadStarted), self, [=]() {
		miqt_exec_callback_QWebEngineView_LoadStarted(slot);
	});
}

void QWebEngineView_LoadProgress(QWebEngineView* self, int progress) {
	self->loadProgress(static_cast<int>(progress));
}

void QWebEngineView_connect_LoadProgress(QWebEngineView* self, intptr_t slot) {
	MiqtVirtualQWebEngineView::connect(self, static_cast<void (QWebEngineView::*)(int)>(&QWebEngineView::loadProgress), self, [=](int progress) {
		int sigval1 = progress;
		miqt_exec_callback_QWebEngineView_LoadProgress(slot, sigval1);
	});
}

void QWebEngineView_LoadFinished(QWebEngineView* self, bool param1) {
	self->loadFinished(param1);
}

void QWebEngineView_connect_LoadFinished(QWebEngineView* self, intptr_t slot) {
	MiqtVirtualQWebEngineView::connect(self, static_cast<void (QWebEngineView::*)(bool)>(&QWebEngineView::loadFinished), self, [=](bool param1) {
		bool sigval1 = param1;
		miqt_exec_callback_QWebEngineView_LoadFinished(slot, sigval1);
	});
}

void QWebEngineView_TitleChanged(QWebEngineView* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	self->titleChanged(title_QString);
}

void QWebEngineView_connect_TitleChanged(QWebEngineView* self, intptr_t slot) {
	MiqtVirtualQWebEngineView::connect(self, static_cast<void (QWebEngineView::*)(const QString&)>(&QWebEngineView::titleChanged), self, [=](const QString& title) {
		const QString title_ret = title;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray title_b = title_ret.toUtf8();
		struct miqt_string title_ms;
		title_ms.len = title_b.length();
		title_ms.data = static_cast<char*>(malloc(title_ms.len));
		memcpy(title_ms.data, title_b.data(), title_ms.len);
		struct miqt_string sigval1 = title_ms;
		miqt_exec_callback_QWebEngineView_TitleChanged(slot, sigval1);
	});
}

void QWebEngineView_SelectionChanged(QWebEngineView* self) {
	self->selectionChanged();
}

void QWebEngineView_connect_SelectionChanged(QWebEngineView* self, intptr_t slot) {
	MiqtVirtualQWebEngineView::connect(self, static_cast<void (QWebEngineView::*)()>(&QWebEngineView::selectionChanged), self, [=]() {
		miqt_exec_callback_QWebEngineView_SelectionChanged(slot);
	});
}

void QWebEngineView_UrlChanged(QWebEngineView* self, QUrl* param1) {
	self->urlChanged(*param1);
}

void QWebEngineView_connect_UrlChanged(QWebEngineView* self, intptr_t slot) {
	MiqtVirtualQWebEngineView::connect(self, static_cast<void (QWebEngineView::*)(const QUrl&)>(&QWebEngineView::urlChanged), self, [=](const QUrl& param1) {
		const QUrl& param1_ret = param1;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&param1_ret);
		miqt_exec_callback_QWebEngineView_UrlChanged(slot, sigval1);
	});
}

void QWebEngineView_IconUrlChanged(QWebEngineView* self, QUrl* param1) {
	self->iconUrlChanged(*param1);
}

void QWebEngineView_connect_IconUrlChanged(QWebEngineView* self, intptr_t slot) {
	MiqtVirtualQWebEngineView::connect(self, static_cast<void (QWebEngineView::*)(const QUrl&)>(&QWebEngineView::iconUrlChanged), self, [=](const QUrl& param1) {
		const QUrl& param1_ret = param1;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&param1_ret);
		miqt_exec_callback_QWebEngineView_IconUrlChanged(slot, sigval1);
	});
}

void QWebEngineView_IconChanged(QWebEngineView* self, QIcon* param1) {
	self->iconChanged(*param1);
}

void QWebEngineView_connect_IconChanged(QWebEngineView* self, intptr_t slot) {
	MiqtVirtualQWebEngineView::connect(self, static_cast<void (QWebEngineView::*)(const QIcon&)>(&QWebEngineView::iconChanged), self, [=](const QIcon& param1) {
		const QIcon& param1_ret = param1;
		// Cast returned reference into pointer
		QIcon* sigval1 = const_cast<QIcon*>(&param1_ret);
		miqt_exec_callback_QWebEngineView_IconChanged(slot, sigval1);
	});
}

void QWebEngineView_RenderProcessTerminated(QWebEngineView* self, int terminationStatus, int exitCode) {
	self->renderProcessTerminated(static_cast<QWebEnginePage::RenderProcessTerminationStatus>(terminationStatus), static_cast<int>(exitCode));
}

void QWebEngineView_connect_RenderProcessTerminated(QWebEngineView* self, intptr_t slot) {
	MiqtVirtualQWebEngineView::connect(self, static_cast<void (QWebEngineView::*)(QWebEnginePage::RenderProcessTerminationStatus, int)>(&QWebEngineView::renderProcessTerminated), self, [=](QWebEnginePage::RenderProcessTerminationStatus terminationStatus, int exitCode) {
		QWebEnginePage::RenderProcessTerminationStatus terminationStatus_ret = terminationStatus;
		int sigval1 = static_cast<int>(terminationStatus_ret);
		int sigval2 = exitCode;
		miqt_exec_callback_QWebEngineView_RenderProcessTerminated(slot, sigval1, sigval2);
	});
}

void QWebEngineView_PdfPrintingFinished(QWebEngineView* self, struct miqt_string filePath, bool success) {
	QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
	self->pdfPrintingFinished(filePath_QString, success);
}

void QWebEngineView_connect_PdfPrintingFinished(QWebEngineView* self, intptr_t slot) {
	MiqtVirtualQWebEngineView::connect(self, static_cast<void (QWebEngineView::*)(const QString&, bool)>(&QWebEngineView::pdfPrintingFinished), self, [=](const QString& filePath, bool success) {
		const QString filePath_ret = filePath;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray filePath_b = filePath_ret.toUtf8();
		struct miqt_string filePath_ms;
		filePath_ms.len = filePath_b.length();
		filePath_ms.data = static_cast<char*>(malloc(filePath_ms.len));
		memcpy(filePath_ms.data, filePath_b.data(), filePath_ms.len);
		struct miqt_string sigval1 = filePath_ms;
		bool sigval2 = success;
		miqt_exec_callback_QWebEngineView_PdfPrintingFinished(slot, sigval1, sigval2);
	});
}

void QWebEngineView_PrintRequested(QWebEngineView* self) {
	self->printRequested();
}

void QWebEngineView_connect_PrintRequested(QWebEngineView* self, intptr_t slot) {
	MiqtVirtualQWebEngineView::connect(self, static_cast<void (QWebEngineView::*)()>(&QWebEngineView::printRequested), self, [=]() {
		miqt_exec_callback_QWebEngineView_PrintRequested(slot);
	});
}

void QWebEngineView_PrintFinished(QWebEngineView* self, bool success) {
	self->printFinished(success);
}

void QWebEngineView_connect_PrintFinished(QWebEngineView* self, intptr_t slot) {
	MiqtVirtualQWebEngineView::connect(self, static_cast<void (QWebEngineView::*)(bool)>(&QWebEngineView::printFinished), self, [=](bool success) {
		bool sigval1 = success;
		miqt_exec_callback_QWebEngineView_PrintFinished(slot, sigval1);
	});
}

struct miqt_string QWebEngineView_Tr2(const char* s, const char* c) {
	QString _ret = QWebEngineView::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineView_Tr3(const char* s, const char* c, int n) {
	QString _ret = QWebEngineView::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEngineView_SetHtml2(QWebEngineView* self, struct miqt_string html, QUrl* baseUrl) {
	QString html_QString = QString::fromUtf8(html.data, html.len);
	self->setHtml(html_QString, *baseUrl);
}

void QWebEngineView_SetContent2(QWebEngineView* self, struct miqt_string data, struct miqt_string mimeType) {
	QByteArray data_QByteArray(data.data, data.len);
	QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
	self->setContent(data_QByteArray, mimeType_QString);
}

void QWebEngineView_SetContent3(QWebEngineView* self, struct miqt_string data, struct miqt_string mimeType, QUrl* baseUrl) {
	QByteArray data_QByteArray(data.data, data.len);
	QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
	self->setContent(data_QByteArray, mimeType_QString, *baseUrl);
}

void QWebEngineView_TriggerPageAction2(QWebEngineView* self, int action, bool checked) {
	self->triggerPageAction(static_cast<QWebEnginePage::WebAction>(action), checked);
}

void QWebEngineView_PrintToPdf2(QWebEngineView* self, struct miqt_string filePath, QPageLayout* layout) {
	QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
	self->printToPdf(filePath_QString, *layout);
}

void QWebEngineView_PrintToPdf3(QWebEngineView* self, struct miqt_string filePath, QPageLayout* layout, QPageRanges* ranges) {
	QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
	self->printToPdf(filePath_QString, *layout, *ranges);
}

void QWebEngineView_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) )->handle__SizeHint = slot;
}

QSize* QWebEngineView_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQWebEngineView*)(self) )->virtualbase_SizeHint();
}

void QWebEngineView_override_virtual_CreateWindow(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) )->handle__CreateWindow = slot;
}

QWebEngineView* QWebEngineView_virtualbase_CreateWindow(void* self, int typeVal) {
	return ( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_CreateWindow(typeVal);
}

void QWebEngineView_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) )->handle__ContextMenuEvent = slot;
}

void QWebEngineView_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_ContextMenuEvent(param1);
}

void QWebEngineView_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) )->handle__Event = slot;
}

bool QWebEngineView_virtualbase_Event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_Event(param1);
}

void QWebEngineView_override_virtual_ShowEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) )->handle__ShowEvent = slot;
}

void QWebEngineView_virtualbase_ShowEvent(void* self, QShowEvent* param1) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_ShowEvent(param1);
}

void QWebEngineView_override_virtual_HideEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) )->handle__HideEvent = slot;
}

void QWebEngineView_virtualbase_HideEvent(void* self, QHideEvent* param1) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_HideEvent(param1);
}

void QWebEngineView_override_virtual_CloseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) )->handle__CloseEvent = slot;
}

void QWebEngineView_virtualbase_CloseEvent(void* self, QCloseEvent* param1) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_CloseEvent(param1);
}

void QWebEngineView_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) )->handle__DragEnterEvent = slot;
}

void QWebEngineView_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* e) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_DragEnterEvent(e);
}

void QWebEngineView_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) )->handle__DragLeaveEvent = slot;
}

void QWebEngineView_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* e) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_DragLeaveEvent(e);
}

void QWebEngineView_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) )->handle__DragMoveEvent = slot;
}

void QWebEngineView_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* e) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_DragMoveEvent(e);
}

void QWebEngineView_override_virtual_DropEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) )->handle__DropEvent = slot;
}

void QWebEngineView_virtualbase_DropEvent(void* self, QDropEvent* e) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_DropEvent(e);
}

void QWebEngineView_override_virtual_DevType(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) )->handle__DevType = slot;
}

int QWebEngineView_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQWebEngineView*)(self) )->virtualbase_DevType();
}

void QWebEngineView_override_virtual_SetVisible(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) )->handle__SetVisible = slot;
}

void QWebEngineView_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_SetVisible(visible);
}

void QWebEngineView_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) )->handle__MinimumSizeHint = slot;
}

QSize* QWebEngineView_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQWebEngineView*)(self) )->virtualbase_MinimumSizeHint();
}

void QWebEngineView_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) )->handle__HeightForWidth = slot;
}

int QWebEngineView_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQWebEngineView*)(self) )->virtualbase_HeightForWidth(param1);
}

void QWebEngineView_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) )->handle__HasHeightForWidth = slot;
}

bool QWebEngineView_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQWebEngineView*)(self) )->virtualbase_HasHeightForWidth();
}

void QWebEngineView_override_virtual_PaintEngine(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) )->handle__PaintEngine = slot;
}

QPaintEngine* QWebEngineView_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQWebEngineView*)(self) )->virtualbase_PaintEngine();
}

void QWebEngineView_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) )->handle__MousePressEvent = slot;
}

void QWebEngineView_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_MousePressEvent(event);
}

void QWebEngineView_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) )->handle__MouseReleaseEvent = slot;
}

void QWebEngineView_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_MouseReleaseEvent(event);
}

void QWebEngineView_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) )->handle__MouseDoubleClickEvent = slot;
}

void QWebEngineView_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

void QWebEngineView_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) )->handle__MouseMoveEvent = slot;
}

void QWebEngineView_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_MouseMoveEvent(event);
}

void QWebEngineView_override_virtual_WheelEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) )->handle__WheelEvent = slot;
}

void QWebEngineView_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_WheelEvent(event);
}

void QWebEngineView_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) )->handle__KeyPressEvent = slot;
}

void QWebEngineView_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_KeyPressEvent(event);
}

void QWebEngineView_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) )->handle__KeyReleaseEvent = slot;
}

void QWebEngineView_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_KeyReleaseEvent(event);
}

void QWebEngineView_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) )->handle__FocusInEvent = slot;
}

void QWebEngineView_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_FocusInEvent(event);
}

void QWebEngineView_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) )->handle__FocusOutEvent = slot;
}

void QWebEngineView_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_FocusOutEvent(event);
}

void QWebEngineView_override_virtual_EnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) )->handle__EnterEvent = slot;
}

void QWebEngineView_virtualbase_EnterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_EnterEvent(event);
}

void QWebEngineView_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) )->handle__LeaveEvent = slot;
}

void QWebEngineView_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_LeaveEvent(event);
}

void QWebEngineView_override_virtual_PaintEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) )->handle__PaintEvent = slot;
}

void QWebEngineView_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_PaintEvent(event);
}

void QWebEngineView_override_virtual_MoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) )->handle__MoveEvent = slot;
}

void QWebEngineView_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_MoveEvent(event);
}

void QWebEngineView_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) )->handle__ResizeEvent = slot;
}

void QWebEngineView_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_ResizeEvent(event);
}

void QWebEngineView_override_virtual_TabletEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) )->handle__TabletEvent = slot;
}

void QWebEngineView_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_TabletEvent(event);
}

void QWebEngineView_override_virtual_ActionEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) )->handle__ActionEvent = slot;
}

void QWebEngineView_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_ActionEvent(event);
}

void QWebEngineView_override_virtual_NativeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) )->handle__NativeEvent = slot;
}

bool QWebEngineView_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

void QWebEngineView_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) )->handle__ChangeEvent = slot;
}

void QWebEngineView_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_ChangeEvent(param1);
}

void QWebEngineView_override_virtual_Metric(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) )->handle__Metric = slot;
}

int QWebEngineView_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQWebEngineView*)(self) )->virtualbase_Metric(param1);
}

void QWebEngineView_override_virtual_InitPainter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) )->handle__InitPainter = slot;
}

void QWebEngineView_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQWebEngineView*)(self) )->virtualbase_InitPainter(painter);
}

void QWebEngineView_override_virtual_Redirected(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) )->handle__Redirected = slot;
}

QPaintDevice* QWebEngineView_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQWebEngineView*)(self) )->virtualbase_Redirected(offset);
}

void QWebEngineView_override_virtual_SharedPainter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) )->handle__SharedPainter = slot;
}

QPainter* QWebEngineView_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQWebEngineView*)(self) )->virtualbase_SharedPainter();
}

void QWebEngineView_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) )->handle__InputMethodEvent = slot;
}

void QWebEngineView_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_InputMethodEvent(param1);
}

void QWebEngineView_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) )->handle__InputMethodQuery = slot;
}

QVariant* QWebEngineView_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQWebEngineView*)(self) )->virtualbase_InputMethodQuery(param1);
}

void QWebEngineView_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) )->handle__FocusNextPrevChild = slot;
}

bool QWebEngineView_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_FocusNextPrevChild(next);
}

void QWebEngineView_Delete(QWebEngineView* self) {
	delete self;
}

