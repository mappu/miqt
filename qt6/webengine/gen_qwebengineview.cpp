#include <QAction>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
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
#include <QMetaMethod>
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
#include <QTimerEvent>
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

void miqt_exec_callback_QWebEngineView_loadStarted(intptr_t);
void miqt_exec_callback_QWebEngineView_loadProgress(intptr_t, int);
void miqt_exec_callback_QWebEngineView_loadFinished(intptr_t, bool);
void miqt_exec_callback_QWebEngineView_titleChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QWebEngineView_selectionChanged(intptr_t);
void miqt_exec_callback_QWebEngineView_urlChanged(intptr_t, QUrl*);
void miqt_exec_callback_QWebEngineView_iconUrlChanged(intptr_t, QUrl*);
void miqt_exec_callback_QWebEngineView_iconChanged(intptr_t, QIcon*);
void miqt_exec_callback_QWebEngineView_renderProcessTerminated(intptr_t, int, int);
void miqt_exec_callback_QWebEngineView_pdfPrintingFinished(intptr_t, struct miqt_string, bool);
void miqt_exec_callback_QWebEngineView_printRequested(intptr_t);
void miqt_exec_callback_QWebEngineView_printFinished(intptr_t, bool);
QSize* miqt_exec_callback_QWebEngineView_sizeHint(const QWebEngineView*, intptr_t);
QWebEngineView* miqt_exec_callback_QWebEngineView_createWindow(QWebEngineView*, intptr_t, int);
void miqt_exec_callback_QWebEngineView_contextMenuEvent(QWebEngineView*, intptr_t, QContextMenuEvent*);
bool miqt_exec_callback_QWebEngineView_event(QWebEngineView*, intptr_t, QEvent*);
void miqt_exec_callback_QWebEngineView_showEvent(QWebEngineView*, intptr_t, QShowEvent*);
void miqt_exec_callback_QWebEngineView_hideEvent(QWebEngineView*, intptr_t, QHideEvent*);
void miqt_exec_callback_QWebEngineView_closeEvent(QWebEngineView*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QWebEngineView_dragEnterEvent(QWebEngineView*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QWebEngineView_dragLeaveEvent(QWebEngineView*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QWebEngineView_dragMoveEvent(QWebEngineView*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QWebEngineView_dropEvent(QWebEngineView*, intptr_t, QDropEvent*);
int miqt_exec_callback_QWebEngineView_devType(const QWebEngineView*, intptr_t);
void miqt_exec_callback_QWebEngineView_setVisible(QWebEngineView*, intptr_t, bool);
QSize* miqt_exec_callback_QWebEngineView_minimumSizeHint(const QWebEngineView*, intptr_t);
int miqt_exec_callback_QWebEngineView_heightForWidth(const QWebEngineView*, intptr_t, int);
bool miqt_exec_callback_QWebEngineView_hasHeightForWidth(const QWebEngineView*, intptr_t);
QPaintEngine* miqt_exec_callback_QWebEngineView_paintEngine(const QWebEngineView*, intptr_t);
void miqt_exec_callback_QWebEngineView_mousePressEvent(QWebEngineView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWebEngineView_mouseReleaseEvent(QWebEngineView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWebEngineView_mouseDoubleClickEvent(QWebEngineView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWebEngineView_mouseMoveEvent(QWebEngineView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWebEngineView_wheelEvent(QWebEngineView*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QWebEngineView_keyPressEvent(QWebEngineView*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QWebEngineView_keyReleaseEvent(QWebEngineView*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QWebEngineView_focusInEvent(QWebEngineView*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QWebEngineView_focusOutEvent(QWebEngineView*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QWebEngineView_enterEvent(QWebEngineView*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QWebEngineView_leaveEvent(QWebEngineView*, intptr_t, QEvent*);
void miqt_exec_callback_QWebEngineView_paintEvent(QWebEngineView*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QWebEngineView_moveEvent(QWebEngineView*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QWebEngineView_resizeEvent(QWebEngineView*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QWebEngineView_tabletEvent(QWebEngineView*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QWebEngineView_actionEvent(QWebEngineView*, intptr_t, QActionEvent*);
bool miqt_exec_callback_QWebEngineView_nativeEvent(QWebEngineView*, intptr_t, struct miqt_string, void*, intptr_t*);
void miqt_exec_callback_QWebEngineView_changeEvent(QWebEngineView*, intptr_t, QEvent*);
int miqt_exec_callback_QWebEngineView_metric(const QWebEngineView*, intptr_t, int);
void miqt_exec_callback_QWebEngineView_initPainter(const QWebEngineView*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QWebEngineView_redirected(const QWebEngineView*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QWebEngineView_sharedPainter(const QWebEngineView*, intptr_t);
void miqt_exec_callback_QWebEngineView_inputMethodEvent(QWebEngineView*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QWebEngineView_inputMethodQuery(const QWebEngineView*, intptr_t, int);
bool miqt_exec_callback_QWebEngineView_focusNextPrevChild(QWebEngineView*, intptr_t, bool);
bool miqt_exec_callback_QWebEngineView_eventFilter(QWebEngineView*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QWebEngineView_timerEvent(QWebEngineView*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QWebEngineView_childEvent(QWebEngineView*, intptr_t, QChildEvent*);
void miqt_exec_callback_QWebEngineView_customEvent(QWebEngineView*, intptr_t, QEvent*);
void miqt_exec_callback_QWebEngineView_connectNotify(QWebEngineView*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QWebEngineView_disconnectNotify(QWebEngineView*, intptr_t, QMetaMethod*);
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
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QWebEngineView::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QWebEngineView_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QWebEngineView::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__createWindow = 0;

	// Subclass to allow providing a Go implementation
	virtual QWebEngineView* createWindow(QWebEnginePage::WebWindowType type) override {
		if (handle__createWindow == 0) {
			return QWebEngineView::createWindow(type);
		}
		
		QWebEnginePage::WebWindowType type_ret = type;
		int sigval1 = static_cast<int>(type_ret);

		QWebEngineView* callback_return_value = miqt_exec_callback_QWebEngineView_createWindow(this, handle__createWindow, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QWebEngineView* virtualbase_createWindow(int type) {

		return QWebEngineView::createWindow(static_cast<QWebEnginePage::WebWindowType>(type));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__contextMenuEvent == 0) {
			QWebEngineView::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QWebEngineView_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* param1) {

		QWebEngineView::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__event == 0) {
			return QWebEngineView::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QWebEngineView_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* param1) {

		return QWebEngineView::event(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (handle__showEvent == 0) {
			QWebEngineView::showEvent(param1);
			return;
		}
		
		QShowEvent* sigval1 = param1;

		miqt_exec_callback_QWebEngineView_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* param1) {

		QWebEngineView::showEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* param1) override {
		if (handle__hideEvent == 0) {
			QWebEngineView::hideEvent(param1);
			return;
		}
		
		QHideEvent* sigval1 = param1;

		miqt_exec_callback_QWebEngineView_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* param1) {

		QWebEngineView::hideEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* param1) override {
		if (handle__closeEvent == 0) {
			QWebEngineView::closeEvent(param1);
			return;
		}
		
		QCloseEvent* sigval1 = param1;

		miqt_exec_callback_QWebEngineView_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* param1) {

		QWebEngineView::closeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* e) override {
		if (handle__dragEnterEvent == 0) {
			QWebEngineView::dragEnterEvent(e);
			return;
		}
		
		QDragEnterEvent* sigval1 = e;

		miqt_exec_callback_QWebEngineView_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* e) {

		QWebEngineView::dragEnterEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
		if (handle__dragLeaveEvent == 0) {
			QWebEngineView::dragLeaveEvent(e);
			return;
		}
		
		QDragLeaveEvent* sigval1 = e;

		miqt_exec_callback_QWebEngineView_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* e) {

		QWebEngineView::dragLeaveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* e) override {
		if (handle__dragMoveEvent == 0) {
			QWebEngineView::dragMoveEvent(e);
			return;
		}
		
		QDragMoveEvent* sigval1 = e;

		miqt_exec_callback_QWebEngineView_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* e) {

		QWebEngineView::dragMoveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* e) override {
		if (handle__dropEvent == 0) {
			QWebEngineView::dropEvent(e);
			return;
		}
		
		QDropEvent* sigval1 = e;

		miqt_exec_callback_QWebEngineView_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* e) {

		QWebEngineView::dropEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QWebEngineView::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QWebEngineView_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QWebEngineView::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QWebEngineView::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QWebEngineView_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QWebEngineView::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QWebEngineView::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QWebEngineView_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QWebEngineView::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QWebEngineView::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QWebEngineView_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QWebEngineView::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QWebEngineView::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QWebEngineView_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QWebEngineView::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QWebEngineView::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QWebEngineView_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QWebEngineView::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QWebEngineView::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineView_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* event) {

		QWebEngineView::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QWebEngineView::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineView_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* event) {

		QWebEngineView::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QWebEngineView::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineView_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* event) {

		QWebEngineView::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QWebEngineView::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineView_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* event) {

		QWebEngineView::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QWebEngineView::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineView_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* event) {

		QWebEngineView::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QWebEngineView::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineView_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* event) {

		QWebEngineView::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QWebEngineView::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineView_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QWebEngineView::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QWebEngineView::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineView_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QWebEngineView::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QWebEngineView::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineView_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QWebEngineView::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__enterEvent == 0) {
			QWebEngineView::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineView_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEnterEvent* event) {

		QWebEngineView::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QWebEngineView::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineView_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QWebEngineView::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QWebEngineView::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineView_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* event) {

		QWebEngineView::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QWebEngineView::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineView_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QWebEngineView::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QWebEngineView::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineView_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* event) {

		QWebEngineView::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QWebEngineView::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineView_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QWebEngineView::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QWebEngineView::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineView_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QWebEngineView::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__nativeEvent == 0) {
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

		bool callback_return_value = miqt_exec_callback_QWebEngineView_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QWebEngineView::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QWebEngineView::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QWebEngineView_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* param1) {

		QWebEngineView::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QWebEngineView::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QWebEngineView_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QWebEngineView::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QWebEngineView::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QWebEngineView_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QWebEngineView::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QWebEngineView::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QWebEngineView_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QWebEngineView::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QWebEngineView::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QWebEngineView_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QWebEngineView::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QWebEngineView::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QWebEngineView_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QWebEngineView::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QWebEngineView::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QWebEngineView_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int param1) const {

		return new QVariant(QWebEngineView::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QWebEngineView::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QWebEngineView_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QWebEngineView::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QWebEngineView::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QWebEngineView_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QWebEngineView::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QWebEngineView::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineView_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QWebEngineView::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QWebEngineView::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineView_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QWebEngineView::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QWebEngineView::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWebEngineView_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QWebEngineView::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QWebEngineView::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWebEngineView_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QWebEngineView::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QWebEngineView::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWebEngineView_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QWebEngineView::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QWebEngineView_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QWebEngineView_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QWebEngineView_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QWebEngineView_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QWebEngineView_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QWebEngineView_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QWebEngineView_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QWebEngineView_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QWebEngineView_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QWebEngineView_metaObject(const QWebEngineView* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebEngineView_metacast(QWebEngineView* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebEngineView_tr(const char* s) {
	QString _ret = QWebEngineView::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QWebEngineView* QWebEngineView_forPage(QWebEnginePage* page) {
	return QWebEngineView::forPage(page);
}

QWebEnginePage* QWebEngineView_page(const QWebEngineView* self) {
	return self->page();
}

void QWebEngineView_setPage(QWebEngineView* self, QWebEnginePage* page) {
	self->setPage(page);
}

void QWebEngineView_load(QWebEngineView* self, QUrl* url) {
	self->load(*url);
}

void QWebEngineView_loadWithRequest(QWebEngineView* self, QWebEngineHttpRequest* request) {
	self->load(*request);
}

void QWebEngineView_setHtml(QWebEngineView* self, struct miqt_string html) {
	QString html_QString = QString::fromUtf8(html.data, html.len);
	self->setHtml(html_QString);
}

void QWebEngineView_setContent(QWebEngineView* self, struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	self->setContent(data_QByteArray);
}

QWebEngineHistory* QWebEngineView_history(const QWebEngineView* self) {
	return self->history();
}

struct miqt_string QWebEngineView_title(const QWebEngineView* self) {
	QString _ret = self->title();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEngineView_setUrl(QWebEngineView* self, QUrl* url) {
	self->setUrl(*url);
}

QUrl* QWebEngineView_url(const QWebEngineView* self) {
	return new QUrl(self->url());
}

QUrl* QWebEngineView_iconUrl(const QWebEngineView* self) {
	return new QUrl(self->iconUrl());
}

QIcon* QWebEngineView_icon(const QWebEngineView* self) {
	return new QIcon(self->icon());
}

bool QWebEngineView_hasSelection(const QWebEngineView* self) {
	return self->hasSelection();
}

struct miqt_string QWebEngineView_selectedText(const QWebEngineView* self) {
	QString _ret = self->selectedText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAction* QWebEngineView_pageAction(const QWebEngineView* self, int action) {
	return self->pageAction(static_cast<QWebEnginePage::WebAction>(action));
}

void QWebEngineView_triggerPageAction(QWebEngineView* self, int action) {
	self->triggerPageAction(static_cast<QWebEnginePage::WebAction>(action));
}

double QWebEngineView_zoomFactor(const QWebEngineView* self) {
	qreal _ret = self->zoomFactor();
	return static_cast<double>(_ret);
}

void QWebEngineView_setZoomFactor(QWebEngineView* self, double factor) {
	self->setZoomFactor(static_cast<qreal>(factor));
}

QSize* QWebEngineView_sizeHint(const QWebEngineView* self) {
	return new QSize(self->sizeHint());
}

QWebEngineSettings* QWebEngineView_settings(const QWebEngineView* self) {
	return self->settings();
}

QMenu* QWebEngineView_createStandardContextMenu(QWebEngineView* self) {
	return self->createStandardContextMenu();
}

QWebEngineContextMenuRequest* QWebEngineView_lastContextMenuRequest(const QWebEngineView* self) {
	return self->lastContextMenuRequest();
}

void QWebEngineView_printToPdf(QWebEngineView* self, struct miqt_string filePath) {
	QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
	self->printToPdf(filePath_QString);
}

void QWebEngineView_print(QWebEngineView* self, QPrinter* printer) {
	self->print(printer);
}

void QWebEngineView_stop(QWebEngineView* self) {
	self->stop();
}

void QWebEngineView_back(QWebEngineView* self) {
	self->back();
}

void QWebEngineView_forward(QWebEngineView* self) {
	self->forward();
}

void QWebEngineView_reload(QWebEngineView* self) {
	self->reload();
}

void QWebEngineView_loadStarted(QWebEngineView* self) {
	self->loadStarted();
}

void QWebEngineView_connect_loadStarted(QWebEngineView* self, intptr_t slot) {
	MiqtVirtualQWebEngineView::connect(self, static_cast<void (QWebEngineView::*)()>(&QWebEngineView::loadStarted), self, [=]() {
		miqt_exec_callback_QWebEngineView_loadStarted(slot);
	});
}

void QWebEngineView_loadProgress(QWebEngineView* self, int progress) {
	self->loadProgress(static_cast<int>(progress));
}

void QWebEngineView_connect_loadProgress(QWebEngineView* self, intptr_t slot) {
	MiqtVirtualQWebEngineView::connect(self, static_cast<void (QWebEngineView::*)(int)>(&QWebEngineView::loadProgress), self, [=](int progress) {
		int sigval1 = progress;
		miqt_exec_callback_QWebEngineView_loadProgress(slot, sigval1);
	});
}

void QWebEngineView_loadFinished(QWebEngineView* self, bool param1) {
	self->loadFinished(param1);
}

void QWebEngineView_connect_loadFinished(QWebEngineView* self, intptr_t slot) {
	MiqtVirtualQWebEngineView::connect(self, static_cast<void (QWebEngineView::*)(bool)>(&QWebEngineView::loadFinished), self, [=](bool param1) {
		bool sigval1 = param1;
		miqt_exec_callback_QWebEngineView_loadFinished(slot, sigval1);
	});
}

void QWebEngineView_titleChanged(QWebEngineView* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	self->titleChanged(title_QString);
}

void QWebEngineView_connect_titleChanged(QWebEngineView* self, intptr_t slot) {
	MiqtVirtualQWebEngineView::connect(self, static_cast<void (QWebEngineView::*)(const QString&)>(&QWebEngineView::titleChanged), self, [=](const QString& title) {
		const QString title_ret = title;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray title_b = title_ret.toUtf8();
		struct miqt_string title_ms;
		title_ms.len = title_b.length();
		title_ms.data = static_cast<char*>(malloc(title_ms.len));
		memcpy(title_ms.data, title_b.data(), title_ms.len);
		struct miqt_string sigval1 = title_ms;
		miqt_exec_callback_QWebEngineView_titleChanged(slot, sigval1);
	});
}

void QWebEngineView_selectionChanged(QWebEngineView* self) {
	self->selectionChanged();
}

void QWebEngineView_connect_selectionChanged(QWebEngineView* self, intptr_t slot) {
	MiqtVirtualQWebEngineView::connect(self, static_cast<void (QWebEngineView::*)()>(&QWebEngineView::selectionChanged), self, [=]() {
		miqt_exec_callback_QWebEngineView_selectionChanged(slot);
	});
}

void QWebEngineView_urlChanged(QWebEngineView* self, QUrl* param1) {
	self->urlChanged(*param1);
}

void QWebEngineView_connect_urlChanged(QWebEngineView* self, intptr_t slot) {
	MiqtVirtualQWebEngineView::connect(self, static_cast<void (QWebEngineView::*)(const QUrl&)>(&QWebEngineView::urlChanged), self, [=](const QUrl& param1) {
		const QUrl& param1_ret = param1;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&param1_ret);
		miqt_exec_callback_QWebEngineView_urlChanged(slot, sigval1);
	});
}

void QWebEngineView_iconUrlChanged(QWebEngineView* self, QUrl* param1) {
	self->iconUrlChanged(*param1);
}

void QWebEngineView_connect_iconUrlChanged(QWebEngineView* self, intptr_t slot) {
	MiqtVirtualQWebEngineView::connect(self, static_cast<void (QWebEngineView::*)(const QUrl&)>(&QWebEngineView::iconUrlChanged), self, [=](const QUrl& param1) {
		const QUrl& param1_ret = param1;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&param1_ret);
		miqt_exec_callback_QWebEngineView_iconUrlChanged(slot, sigval1);
	});
}

void QWebEngineView_iconChanged(QWebEngineView* self, QIcon* param1) {
	self->iconChanged(*param1);
}

void QWebEngineView_connect_iconChanged(QWebEngineView* self, intptr_t slot) {
	MiqtVirtualQWebEngineView::connect(self, static_cast<void (QWebEngineView::*)(const QIcon&)>(&QWebEngineView::iconChanged), self, [=](const QIcon& param1) {
		const QIcon& param1_ret = param1;
		// Cast returned reference into pointer
		QIcon* sigval1 = const_cast<QIcon*>(&param1_ret);
		miqt_exec_callback_QWebEngineView_iconChanged(slot, sigval1);
	});
}

void QWebEngineView_renderProcessTerminated(QWebEngineView* self, int terminationStatus, int exitCode) {
	self->renderProcessTerminated(static_cast<QWebEnginePage::RenderProcessTerminationStatus>(terminationStatus), static_cast<int>(exitCode));
}

void QWebEngineView_connect_renderProcessTerminated(QWebEngineView* self, intptr_t slot) {
	MiqtVirtualQWebEngineView::connect(self, static_cast<void (QWebEngineView::*)(QWebEnginePage::RenderProcessTerminationStatus, int)>(&QWebEngineView::renderProcessTerminated), self, [=](QWebEnginePage::RenderProcessTerminationStatus terminationStatus, int exitCode) {
		QWebEnginePage::RenderProcessTerminationStatus terminationStatus_ret = terminationStatus;
		int sigval1 = static_cast<int>(terminationStatus_ret);
		int sigval2 = exitCode;
		miqt_exec_callback_QWebEngineView_renderProcessTerminated(slot, sigval1, sigval2);
	});
}

void QWebEngineView_pdfPrintingFinished(QWebEngineView* self, struct miqt_string filePath, bool success) {
	QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
	self->pdfPrintingFinished(filePath_QString, success);
}

void QWebEngineView_connect_pdfPrintingFinished(QWebEngineView* self, intptr_t slot) {
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
		miqt_exec_callback_QWebEngineView_pdfPrintingFinished(slot, sigval1, sigval2);
	});
}

void QWebEngineView_printRequested(QWebEngineView* self) {
	self->printRequested();
}

void QWebEngineView_connect_printRequested(QWebEngineView* self, intptr_t slot) {
	MiqtVirtualQWebEngineView::connect(self, static_cast<void (QWebEngineView::*)()>(&QWebEngineView::printRequested), self, [=]() {
		miqt_exec_callback_QWebEngineView_printRequested(slot);
	});
}

void QWebEngineView_printFinished(QWebEngineView* self, bool success) {
	self->printFinished(success);
}

void QWebEngineView_connect_printFinished(QWebEngineView* self, intptr_t slot) {
	MiqtVirtualQWebEngineView::connect(self, static_cast<void (QWebEngineView::*)(bool)>(&QWebEngineView::printFinished), self, [=](bool success) {
		bool sigval1 = success;
		miqt_exec_callback_QWebEngineView_printFinished(slot, sigval1);
	});
}

struct miqt_string QWebEngineView_tr2(const char* s, const char* c) {
	QString _ret = QWebEngineView::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineView_tr3(const char* s, const char* c, int n) {
	QString _ret = QWebEngineView::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEngineView_setHtml2(QWebEngineView* self, struct miqt_string html, QUrl* baseUrl) {
	QString html_QString = QString::fromUtf8(html.data, html.len);
	self->setHtml(html_QString, *baseUrl);
}

void QWebEngineView_setContent2(QWebEngineView* self, struct miqt_string data, struct miqt_string mimeType) {
	QByteArray data_QByteArray(data.data, data.len);
	QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
	self->setContent(data_QByteArray, mimeType_QString);
}

void QWebEngineView_setContent3(QWebEngineView* self, struct miqt_string data, struct miqt_string mimeType, QUrl* baseUrl) {
	QByteArray data_QByteArray(data.data, data.len);
	QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
	self->setContent(data_QByteArray, mimeType_QString, *baseUrl);
}

void QWebEngineView_triggerPageAction2(QWebEngineView* self, int action, bool checked) {
	self->triggerPageAction(static_cast<QWebEnginePage::WebAction>(action), checked);
}

void QWebEngineView_printToPdf2(QWebEngineView* self, struct miqt_string filePath, QPageLayout* layout) {
	QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
	self->printToPdf(filePath_QString, *layout);
}

void QWebEngineView_printToPdf3(QWebEngineView* self, struct miqt_string filePath, QPageLayout* layout, QPageRanges* ranges) {
	QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
	self->printToPdf(filePath_QString, *layout, *ranges);
}

bool QWebEngineView_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QWebEngineView_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQWebEngineView*)(self) )->virtualbase_sizeHint();
}

bool QWebEngineView_override_virtual_createWindow(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__createWindow = slot;
	return true;
}

QWebEngineView* QWebEngineView_virtualbase_createWindow(void* self, int type) {
	return ( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_createWindow(type);
}

bool QWebEngineView_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QWebEngineView_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_contextMenuEvent(param1);
}

bool QWebEngineView_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QWebEngineView_virtualbase_event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_event(param1);
}

bool QWebEngineView_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QWebEngineView_virtualbase_showEvent(void* self, QShowEvent* param1) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_showEvent(param1);
}

bool QWebEngineView_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QWebEngineView_virtualbase_hideEvent(void* self, QHideEvent* param1) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_hideEvent(param1);
}

bool QWebEngineView_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QWebEngineView_virtualbase_closeEvent(void* self, QCloseEvent* param1) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_closeEvent(param1);
}

bool QWebEngineView_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QWebEngineView_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* e) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_dragEnterEvent(e);
}

bool QWebEngineView_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QWebEngineView_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* e) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_dragLeaveEvent(e);
}

bool QWebEngineView_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QWebEngineView_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* e) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_dragMoveEvent(e);
}

bool QWebEngineView_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QWebEngineView_virtualbase_dropEvent(void* self, QDropEvent* e) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_dropEvent(e);
}

bool QWebEngineView_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QWebEngineView_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQWebEngineView*)(self) )->virtualbase_devType();
}

bool QWebEngineView_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QWebEngineView_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_setVisible(visible);
}

bool QWebEngineView_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QWebEngineView_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQWebEngineView*)(self) )->virtualbase_minimumSizeHint();
}

bool QWebEngineView_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QWebEngineView_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQWebEngineView*)(self) )->virtualbase_heightForWidth(param1);
}

bool QWebEngineView_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QWebEngineView_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQWebEngineView*)(self) )->virtualbase_hasHeightForWidth();
}

bool QWebEngineView_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QWebEngineView_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQWebEngineView*)(self) )->virtualbase_paintEngine();
}

bool QWebEngineView_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QWebEngineView_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_mousePressEvent(event);
}

bool QWebEngineView_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QWebEngineView_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QWebEngineView_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QWebEngineView_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QWebEngineView_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QWebEngineView_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QWebEngineView_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QWebEngineView_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_wheelEvent(event);
}

bool QWebEngineView_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QWebEngineView_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_keyPressEvent(event);
}

bool QWebEngineView_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QWebEngineView_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QWebEngineView_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QWebEngineView_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_focusInEvent(event);
}

bool QWebEngineView_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QWebEngineView_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_focusOutEvent(event);
}

bool QWebEngineView_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QWebEngineView_virtualbase_enterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_enterEvent(event);
}

bool QWebEngineView_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QWebEngineView_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_leaveEvent(event);
}

bool QWebEngineView_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QWebEngineView_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_paintEvent(event);
}

bool QWebEngineView_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QWebEngineView_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_moveEvent(event);
}

bool QWebEngineView_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QWebEngineView_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_resizeEvent(event);
}

bool QWebEngineView_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QWebEngineView_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_tabletEvent(event);
}

bool QWebEngineView_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QWebEngineView_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_actionEvent(event);
}

bool QWebEngineView_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QWebEngineView_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QWebEngineView_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QWebEngineView_virtualbase_changeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_changeEvent(param1);
}

bool QWebEngineView_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QWebEngineView_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQWebEngineView*)(self) )->virtualbase_metric(param1);
}

bool QWebEngineView_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QWebEngineView_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQWebEngineView*)(self) )->virtualbase_initPainter(painter);
}

bool QWebEngineView_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QWebEngineView_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQWebEngineView*)(self) )->virtualbase_redirected(offset);
}

bool QWebEngineView_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QWebEngineView_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQWebEngineView*)(self) )->virtualbase_sharedPainter();
}

bool QWebEngineView_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QWebEngineView_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QWebEngineView_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QWebEngineView_virtualbase_inputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQWebEngineView*)(self) )->virtualbase_inputMethodQuery(param1);
}

bool QWebEngineView_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QWebEngineView_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QWebEngineView_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QWebEngineView_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QWebEngineView_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QWebEngineView_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_timerEvent(event);
}

bool QWebEngineView_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QWebEngineView_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_childEvent(event);
}

bool QWebEngineView_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QWebEngineView_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_customEvent(event);
}

bool QWebEngineView_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QWebEngineView_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_connectNotify(signal);
}

bool QWebEngineView_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QWebEngineView_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWebEngineView*)(self) )->virtualbase_disconnectNotify(signal);
}

void QWebEngineView_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QWebEngineView_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QWebEngineView_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QWebEngineView_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QWebEngineView_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QWebEngineView_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QWebEngineView_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QWebEngineView_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QWebEngineView_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QWebEngineView_delete(QWebEngineView* self) {
	delete self;
}

