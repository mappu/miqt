#include <QAbstractScrollArea>
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
#include <QFrame>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMimeData>
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
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTextBrowser>
#include <QTextCursor>
#include <QTextEdit>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qtextbrowser.h>
#include "gen_qtextbrowser.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QTextBrowser_BackwardAvailable(intptr_t, bool);
void miqt_exec_callback_QTextBrowser_ForwardAvailable(intptr_t, bool);
void miqt_exec_callback_QTextBrowser_HistoryChanged(intptr_t);
void miqt_exec_callback_QTextBrowser_SourceChanged(intptr_t, QUrl*);
void miqt_exec_callback_QTextBrowser_Highlighted(intptr_t, QUrl*);
void miqt_exec_callback_QTextBrowser_AnchorClicked(intptr_t, QUrl*);
QVariant* miqt_exec_callback_QTextBrowser_LoadResource(QTextBrowser*, intptr_t, int, QUrl*);
void miqt_exec_callback_QTextBrowser_Backward(QTextBrowser*, intptr_t);
void miqt_exec_callback_QTextBrowser_Forward(QTextBrowser*, intptr_t);
void miqt_exec_callback_QTextBrowser_Home(QTextBrowser*, intptr_t);
void miqt_exec_callback_QTextBrowser_Reload(QTextBrowser*, intptr_t);
bool miqt_exec_callback_QTextBrowser_Event(QTextBrowser*, intptr_t, QEvent*);
void miqt_exec_callback_QTextBrowser_KeyPressEvent(QTextBrowser*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QTextBrowser_MouseMoveEvent(QTextBrowser*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTextBrowser_MousePressEvent(QTextBrowser*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTextBrowser_MouseReleaseEvent(QTextBrowser*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTextBrowser_FocusOutEvent(QTextBrowser*, intptr_t, QFocusEvent*);
bool miqt_exec_callback_QTextBrowser_FocusNextPrevChild(QTextBrowser*, intptr_t, bool);
void miqt_exec_callback_QTextBrowser_PaintEvent(QTextBrowser*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QTextBrowser_DoSetSource(QTextBrowser*, intptr_t, QUrl*, int);
QVariant* miqt_exec_callback_QTextBrowser_InputMethodQuery(const QTextBrowser*, intptr_t, int);
void miqt_exec_callback_QTextBrowser_TimerEvent(QTextBrowser*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QTextBrowser_KeyReleaseEvent(QTextBrowser*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QTextBrowser_ResizeEvent(QTextBrowser*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QTextBrowser_MouseDoubleClickEvent(QTextBrowser*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTextBrowser_ContextMenuEvent(QTextBrowser*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QTextBrowser_DragEnterEvent(QTextBrowser*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QTextBrowser_DragLeaveEvent(QTextBrowser*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QTextBrowser_DragMoveEvent(QTextBrowser*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QTextBrowser_DropEvent(QTextBrowser*, intptr_t, QDropEvent*);
void miqt_exec_callback_QTextBrowser_FocusInEvent(QTextBrowser*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QTextBrowser_ShowEvent(QTextBrowser*, intptr_t, QShowEvent*);
void miqt_exec_callback_QTextBrowser_ChangeEvent(QTextBrowser*, intptr_t, QEvent*);
void miqt_exec_callback_QTextBrowser_WheelEvent(QTextBrowser*, intptr_t, QWheelEvent*);
QMimeData* miqt_exec_callback_QTextBrowser_CreateMimeDataFromSelection(const QTextBrowser*, intptr_t);
bool miqt_exec_callback_QTextBrowser_CanInsertFromMimeData(const QTextBrowser*, intptr_t, QMimeData*);
void miqt_exec_callback_QTextBrowser_InsertFromMimeData(QTextBrowser*, intptr_t, QMimeData*);
void miqt_exec_callback_QTextBrowser_InputMethodEvent(QTextBrowser*, intptr_t, QInputMethodEvent*);
void miqt_exec_callback_QTextBrowser_ScrollContentsBy(QTextBrowser*, intptr_t, int, int);
void miqt_exec_callback_QTextBrowser_DoSetTextCursor(QTextBrowser*, intptr_t, QTextCursor*);
QSize* miqt_exec_callback_QTextBrowser_MinimumSizeHint(const QTextBrowser*, intptr_t);
QSize* miqt_exec_callback_QTextBrowser_SizeHint(const QTextBrowser*, intptr_t);
void miqt_exec_callback_QTextBrowser_SetupViewport(QTextBrowser*, intptr_t, QWidget*);
bool miqt_exec_callback_QTextBrowser_EventFilter(QTextBrowser*, intptr_t, QObject*, QEvent*);
bool miqt_exec_callback_QTextBrowser_ViewportEvent(QTextBrowser*, intptr_t, QEvent*);
QSize* miqt_exec_callback_QTextBrowser_ViewportSizeHint(const QTextBrowser*, intptr_t);
void miqt_exec_callback_QTextBrowser_InitStyleOption(const QTextBrowser*, intptr_t, QStyleOptionFrame*);
int miqt_exec_callback_QTextBrowser_DevType(const QTextBrowser*, intptr_t);
void miqt_exec_callback_QTextBrowser_SetVisible(QTextBrowser*, intptr_t, bool);
int miqt_exec_callback_QTextBrowser_HeightForWidth(const QTextBrowser*, intptr_t, int);
bool miqt_exec_callback_QTextBrowser_HasHeightForWidth(const QTextBrowser*, intptr_t);
QPaintEngine* miqt_exec_callback_QTextBrowser_PaintEngine(const QTextBrowser*, intptr_t);
void miqt_exec_callback_QTextBrowser_EnterEvent(QTextBrowser*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QTextBrowser_LeaveEvent(QTextBrowser*, intptr_t, QEvent*);
void miqt_exec_callback_QTextBrowser_MoveEvent(QTextBrowser*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QTextBrowser_CloseEvent(QTextBrowser*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QTextBrowser_TabletEvent(QTextBrowser*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QTextBrowser_ActionEvent(QTextBrowser*, intptr_t, QActionEvent*);
void miqt_exec_callback_QTextBrowser_HideEvent(QTextBrowser*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QTextBrowser_NativeEvent(QTextBrowser*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QTextBrowser_Metric(const QTextBrowser*, intptr_t, int);
void miqt_exec_callback_QTextBrowser_InitPainter(const QTextBrowser*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QTextBrowser_Redirected(const QTextBrowser*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QTextBrowser_SharedPainter(const QTextBrowser*, intptr_t);
void miqt_exec_callback_QTextBrowser_ChildEvent(QTextBrowser*, intptr_t, QChildEvent*);
void miqt_exec_callback_QTextBrowser_CustomEvent(QTextBrowser*, intptr_t, QEvent*);
void miqt_exec_callback_QTextBrowser_ConnectNotify(QTextBrowser*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QTextBrowser_DisconnectNotify(QTextBrowser*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQTextBrowser final : public QTextBrowser {
public:

	MiqtVirtualQTextBrowser(QWidget* parent): QTextBrowser(parent) {};
	MiqtVirtualQTextBrowser(): QTextBrowser() {};

	virtual ~MiqtVirtualQTextBrowser() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LoadResource = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant loadResource(int typeVal, const QUrl& name) override {
		if (handle__LoadResource == 0) {
			return QTextBrowser::loadResource(typeVal, name);
		}
		
		int sigval1 = typeVal;
		const QUrl& name_ret = name;
		// Cast returned reference into pointer
		QUrl* sigval2 = const_cast<QUrl*>(&name_ret);

		QVariant* callback_return_value = miqt_exec_callback_QTextBrowser_LoadResource(this, handle__LoadResource, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_LoadResource(int typeVal, QUrl* name) {

		return new QVariant(QTextBrowser::loadResource(static_cast<int>(typeVal), *name));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Backward = 0;

	// Subclass to allow providing a Go implementation
	virtual void backward() override {
		if (handle__Backward == 0) {
			QTextBrowser::backward();
			return;
		}
		

		miqt_exec_callback_QTextBrowser_Backward(this, handle__Backward);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Backward() {

		QTextBrowser::backward();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Forward = 0;

	// Subclass to allow providing a Go implementation
	virtual void forward() override {
		if (handle__Forward == 0) {
			QTextBrowser::forward();
			return;
		}
		

		miqt_exec_callback_QTextBrowser_Forward(this, handle__Forward);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Forward() {

		QTextBrowser::forward();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Home = 0;

	// Subclass to allow providing a Go implementation
	virtual void home() override {
		if (handle__Home == 0) {
			QTextBrowser::home();
			return;
		}
		

		miqt_exec_callback_QTextBrowser_Home(this, handle__Home);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Home() {

		QTextBrowser::home();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Reload = 0;

	// Subclass to allow providing a Go implementation
	virtual void reload() override {
		if (handle__Reload == 0) {
			QTextBrowser::reload();
			return;
		}
		

		miqt_exec_callback_QTextBrowser_Reload(this, handle__Reload);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Reload() {

		QTextBrowser::reload();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QTextBrowser::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QTextBrowser_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QTextBrowser::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* ev) override {
		if (handle__KeyPressEvent == 0) {
			QTextBrowser::keyPressEvent(ev);
			return;
		}
		
		QKeyEvent* sigval1 = ev;

		miqt_exec_callback_QTextBrowser_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* ev) {

		QTextBrowser::keyPressEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* ev) override {
		if (handle__MouseMoveEvent == 0) {
			QTextBrowser::mouseMoveEvent(ev);
			return;
		}
		
		QMouseEvent* sigval1 = ev;

		miqt_exec_callback_QTextBrowser_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* ev) {

		QTextBrowser::mouseMoveEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* ev) override {
		if (handle__MousePressEvent == 0) {
			QTextBrowser::mousePressEvent(ev);
			return;
		}
		
		QMouseEvent* sigval1 = ev;

		miqt_exec_callback_QTextBrowser_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* ev) {

		QTextBrowser::mousePressEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* ev) override {
		if (handle__MouseReleaseEvent == 0) {
			QTextBrowser::mouseReleaseEvent(ev);
			return;
		}
		
		QMouseEvent* sigval1 = ev;

		miqt_exec_callback_QTextBrowser_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* ev) {

		QTextBrowser::mouseReleaseEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* ev) override {
		if (handle__FocusOutEvent == 0) {
			QTextBrowser::focusOutEvent(ev);
			return;
		}
		
		QFocusEvent* sigval1 = ev;

		miqt_exec_callback_QTextBrowser_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* ev) {

		QTextBrowser::focusOutEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QTextBrowser::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QTextBrowser_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QTextBrowser::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* e) override {
		if (handle__PaintEvent == 0) {
			QTextBrowser::paintEvent(e);
			return;
		}
		
		QPaintEvent* sigval1 = e;

		miqt_exec_callback_QTextBrowser_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* e) {

		QTextBrowser::paintEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DoSetSource = 0;

	// Subclass to allow providing a Go implementation
	virtual void doSetSource(const QUrl& name, QTextDocument::ResourceType typeVal) override {
		if (handle__DoSetSource == 0) {
			QTextBrowser::doSetSource(name, typeVal);
			return;
		}
		
		const QUrl& name_ret = name;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&name_ret);
		QTextDocument::ResourceType typeVal_ret = typeVal;
		int sigval2 = static_cast<int>(typeVal_ret);

		miqt_exec_callback_QTextBrowser_DoSetSource(this, handle__DoSetSource, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DoSetSource(QUrl* name, int typeVal) {

		QTextBrowser::doSetSource(*name, static_cast<QTextDocument::ResourceType>(typeVal));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery property) const override {
		if (handle__InputMethodQuery == 0) {
			return QTextBrowser::inputMethodQuery(property);
		}
		
		Qt::InputMethodQuery property_ret = property;
		int sigval1 = static_cast<int>(property_ret);

		QVariant* callback_return_value = miqt_exec_callback_QTextBrowser_InputMethodQuery(this, handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int property) const {

		return new QVariant(QTextBrowser::inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* e) override {
		if (handle__TimerEvent == 0) {
			QTextBrowser::timerEvent(e);
			return;
		}
		
		QTimerEvent* sigval1 = e;

		miqt_exec_callback_QTextBrowser_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* e) {

		QTextBrowser::timerEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* e) override {
		if (handle__KeyReleaseEvent == 0) {
			QTextBrowser::keyReleaseEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QTextBrowser_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* e) {

		QTextBrowser::keyReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* e) override {
		if (handle__ResizeEvent == 0) {
			QTextBrowser::resizeEvent(e);
			return;
		}
		
		QResizeEvent* sigval1 = e;

		miqt_exec_callback_QTextBrowser_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* e) {

		QTextBrowser::resizeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QTextBrowser::mouseDoubleClickEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QTextBrowser_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* e) {

		QTextBrowser::mouseDoubleClickEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* e) override {
		if (handle__ContextMenuEvent == 0) {
			QTextBrowser::contextMenuEvent(e);
			return;
		}
		
		QContextMenuEvent* sigval1 = e;

		miqt_exec_callback_QTextBrowser_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* e) {

		QTextBrowser::contextMenuEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* e) override {
		if (handle__DragEnterEvent == 0) {
			QTextBrowser::dragEnterEvent(e);
			return;
		}
		
		QDragEnterEvent* sigval1 = e;

		miqt_exec_callback_QTextBrowser_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* e) {

		QTextBrowser::dragEnterEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
		if (handle__DragLeaveEvent == 0) {
			QTextBrowser::dragLeaveEvent(e);
			return;
		}
		
		QDragLeaveEvent* sigval1 = e;

		miqt_exec_callback_QTextBrowser_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* e) {

		QTextBrowser::dragLeaveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* e) override {
		if (handle__DragMoveEvent == 0) {
			QTextBrowser::dragMoveEvent(e);
			return;
		}
		
		QDragMoveEvent* sigval1 = e;

		miqt_exec_callback_QTextBrowser_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* e) {

		QTextBrowser::dragMoveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* e) override {
		if (handle__DropEvent == 0) {
			QTextBrowser::dropEvent(e);
			return;
		}
		
		QDropEvent* sigval1 = e;

		miqt_exec_callback_QTextBrowser_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* e) {

		QTextBrowser::dropEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* e) override {
		if (handle__FocusInEvent == 0) {
			QTextBrowser::focusInEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QTextBrowser_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* e) {

		QTextBrowser::focusInEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (handle__ShowEvent == 0) {
			QTextBrowser::showEvent(param1);
			return;
		}
		
		QShowEvent* sigval1 = param1;

		miqt_exec_callback_QTextBrowser_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* param1) {

		QTextBrowser::showEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (handle__ChangeEvent == 0) {
			QTextBrowser::changeEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QTextBrowser_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* e) {

		QTextBrowser::changeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* e) override {
		if (handle__WheelEvent == 0) {
			QTextBrowser::wheelEvent(e);
			return;
		}
		
		QWheelEvent* sigval1 = e;

		miqt_exec_callback_QTextBrowser_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* e) {

		QTextBrowser::wheelEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CreateMimeDataFromSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual QMimeData* createMimeDataFromSelection() const override {
		if (handle__CreateMimeDataFromSelection == 0) {
			return QTextBrowser::createMimeDataFromSelection();
		}
		

		QMimeData* callback_return_value = miqt_exec_callback_QTextBrowser_CreateMimeDataFromSelection(this, handle__CreateMimeDataFromSelection);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QMimeData* virtualbase_CreateMimeDataFromSelection() const {

		return QTextBrowser::createMimeDataFromSelection();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CanInsertFromMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canInsertFromMimeData(const QMimeData* source) const override {
		if (handle__CanInsertFromMimeData == 0) {
			return QTextBrowser::canInsertFromMimeData(source);
		}
		
		QMimeData* sigval1 = (QMimeData*) source;

		bool callback_return_value = miqt_exec_callback_QTextBrowser_CanInsertFromMimeData(this, handle__CanInsertFromMimeData, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CanInsertFromMimeData(QMimeData* source) const {

		return QTextBrowser::canInsertFromMimeData(source);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InsertFromMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual void insertFromMimeData(const QMimeData* source) override {
		if (handle__InsertFromMimeData == 0) {
			QTextBrowser::insertFromMimeData(source);
			return;
		}
		
		QMimeData* sigval1 = (QMimeData*) source;

		miqt_exec_callback_QTextBrowser_InsertFromMimeData(this, handle__InsertFromMimeData, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InsertFromMimeData(QMimeData* source) {

		QTextBrowser::insertFromMimeData(source);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QTextBrowser::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QTextBrowser_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QTextBrowser::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ScrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (handle__ScrollContentsBy == 0) {
			QTextBrowser::scrollContentsBy(dx, dy);
			return;
		}
		
		int sigval1 = dx;
		int sigval2 = dy;

		miqt_exec_callback_QTextBrowser_ScrollContentsBy(this, handle__ScrollContentsBy, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ScrollContentsBy(int dx, int dy) {

		QTextBrowser::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DoSetTextCursor = 0;

	// Subclass to allow providing a Go implementation
	virtual void doSetTextCursor(const QTextCursor& cursor) override {
		if (handle__DoSetTextCursor == 0) {
			QTextBrowser::doSetTextCursor(cursor);
			return;
		}
		
		const QTextCursor& cursor_ret = cursor;
		// Cast returned reference into pointer
		QTextCursor* sigval1 = const_cast<QTextCursor*>(&cursor_ret);

		miqt_exec_callback_QTextBrowser_DoSetTextCursor(this, handle__DoSetTextCursor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DoSetTextCursor(QTextCursor* cursor) {

		QTextBrowser::doSetTextCursor(*cursor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QTextBrowser::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QTextBrowser_MinimumSizeHint(this, handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QTextBrowser::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QTextBrowser::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QTextBrowser_SizeHint(this, handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QTextBrowser::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetupViewport = 0;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (handle__SetupViewport == 0) {
			QTextBrowser::setupViewport(viewport);
			return;
		}
		
		QWidget* sigval1 = viewport;

		miqt_exec_callback_QTextBrowser_SetupViewport(this, handle__SetupViewport, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetupViewport(QWidget* viewport) {

		QTextBrowser::setupViewport(viewport);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__EventFilter == 0) {
			return QTextBrowser::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QTextBrowser_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* param1, QEvent* param2) {

		return QTextBrowser::eventFilter(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewportEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* param1) override {
		if (handle__ViewportEvent == 0) {
			return QTextBrowser::viewportEvent(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QTextBrowser_ViewportEvent(this, handle__ViewportEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_ViewportEvent(QEvent* param1) {

		return QTextBrowser::viewportEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewportSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (handle__ViewportSizeHint == 0) {
			return QTextBrowser::viewportSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QTextBrowser_ViewportSizeHint(this, handle__ViewportSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_ViewportSizeHint() const {

		return new QSize(QTextBrowser::viewportSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionFrame* option) const override {
		if (handle__InitStyleOption == 0) {
			QTextBrowser::initStyleOption(option);
			return;
		}
		
		QStyleOptionFrame* sigval1 = option;

		miqt_exec_callback_QTextBrowser_InitStyleOption(this, handle__InitStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitStyleOption(QStyleOptionFrame* option) const {

		QTextBrowser::initStyleOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QTextBrowser::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QTextBrowser_DevType(this, handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QTextBrowser::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QTextBrowser::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QTextBrowser_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QTextBrowser::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QTextBrowser::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QTextBrowser_HeightForWidth(this, handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QTextBrowser::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QTextBrowser::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QTextBrowser_HasHeightForWidth(this, handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QTextBrowser::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QTextBrowser::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QTextBrowser_PaintEngine(this, handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QTextBrowser::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__EnterEvent == 0) {
			QTextBrowser::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QTextBrowser_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEnterEvent* event) {

		QTextBrowser::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QTextBrowser::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTextBrowser_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QTextBrowser::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QTextBrowser::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QTextBrowser_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QTextBrowser::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QTextBrowser::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QTextBrowser_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QTextBrowser::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QTextBrowser::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QTextBrowser_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QTextBrowser::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QTextBrowser::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QTextBrowser_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QTextBrowser::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QTextBrowser::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QTextBrowser_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QTextBrowser::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__NativeEvent == 0) {
			return QTextBrowser::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QTextBrowser_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QTextBrowser::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QTextBrowser::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QTextBrowser_Metric(this, handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QTextBrowser::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QTextBrowser::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QTextBrowser_InitPainter(this, handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QTextBrowser::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QTextBrowser::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QTextBrowser_Redirected(this, handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QTextBrowser::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QTextBrowser::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QTextBrowser_SharedPainter(this, handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QTextBrowser::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QTextBrowser::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QTextBrowser_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QTextBrowser::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QTextBrowser::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTextBrowser_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QTextBrowser::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QTextBrowser::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTextBrowser_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QTextBrowser::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QTextBrowser::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTextBrowser_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QTextBrowser::disconnectNotify(*signal);

	}

};

QTextBrowser* QTextBrowser_new(QWidget* parent) {
	return new MiqtVirtualQTextBrowser(parent);
}

QTextBrowser* QTextBrowser_new2() {
	return new MiqtVirtualQTextBrowser();
}

void QTextBrowser_virtbase(QTextBrowser* src, QTextEdit** outptr_QTextEdit) {
	*outptr_QTextEdit = static_cast<QTextEdit*>(src);
}

QMetaObject* QTextBrowser_MetaObject(const QTextBrowser* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTextBrowser_Metacast(QTextBrowser* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTextBrowser_Tr(const char* s) {
	QString _ret = QTextBrowser::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QUrl* QTextBrowser_Source(const QTextBrowser* self) {
	return new QUrl(self->source());
}

int QTextBrowser_SourceType(const QTextBrowser* self) {
	QTextDocument::ResourceType _ret = self->sourceType();
	return static_cast<int>(_ret);
}

struct miqt_array /* of struct miqt_string */  QTextBrowser_SearchPaths(const QTextBrowser* self) {
	QStringList _ret = self->searchPaths();
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

void QTextBrowser_SetSearchPaths(QTextBrowser* self, struct miqt_array /* of struct miqt_string */  paths) {
	QStringList paths_QList;
	paths_QList.reserve(paths.len);
	struct miqt_string* paths_arr = static_cast<struct miqt_string*>(paths.data);
	for(size_t i = 0; i < paths.len; ++i) {
		QString paths_arr_i_QString = QString::fromUtf8(paths_arr[i].data, paths_arr[i].len);
		paths_QList.push_back(paths_arr_i_QString);
	}
	self->setSearchPaths(paths_QList);
}

QVariant* QTextBrowser_LoadResource(QTextBrowser* self, int typeVal, QUrl* name) {
	return new QVariant(self->loadResource(static_cast<int>(typeVal), *name));
}

bool QTextBrowser_IsBackwardAvailable(const QTextBrowser* self) {
	return self->isBackwardAvailable();
}

bool QTextBrowser_IsForwardAvailable(const QTextBrowser* self) {
	return self->isForwardAvailable();
}

void QTextBrowser_ClearHistory(QTextBrowser* self) {
	self->clearHistory();
}

struct miqt_string QTextBrowser_HistoryTitle(const QTextBrowser* self, int param1) {
	QString _ret = self->historyTitle(static_cast<int>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QUrl* QTextBrowser_HistoryUrl(const QTextBrowser* self, int param1) {
	return new QUrl(self->historyUrl(static_cast<int>(param1)));
}

int QTextBrowser_BackwardHistoryCount(const QTextBrowser* self) {
	return self->backwardHistoryCount();
}

int QTextBrowser_ForwardHistoryCount(const QTextBrowser* self) {
	return self->forwardHistoryCount();
}

bool QTextBrowser_OpenExternalLinks(const QTextBrowser* self) {
	return self->openExternalLinks();
}

void QTextBrowser_SetOpenExternalLinks(QTextBrowser* self, bool open) {
	self->setOpenExternalLinks(open);
}

bool QTextBrowser_OpenLinks(const QTextBrowser* self) {
	return self->openLinks();
}

void QTextBrowser_SetOpenLinks(QTextBrowser* self, bool open) {
	self->setOpenLinks(open);
}

void QTextBrowser_SetSource(QTextBrowser* self, QUrl* name) {
	self->setSource(*name);
}

void QTextBrowser_Backward(QTextBrowser* self) {
	self->backward();
}

void QTextBrowser_Forward(QTextBrowser* self) {
	self->forward();
}

void QTextBrowser_Home(QTextBrowser* self) {
	self->home();
}

void QTextBrowser_Reload(QTextBrowser* self) {
	self->reload();
}

void QTextBrowser_BackwardAvailable(QTextBrowser* self, bool param1) {
	self->backwardAvailable(param1);
}

void QTextBrowser_connect_BackwardAvailable(QTextBrowser* self, intptr_t slot) {
	MiqtVirtualQTextBrowser::connect(self, static_cast<void (QTextBrowser::*)(bool)>(&QTextBrowser::backwardAvailable), self, [=](bool param1) {
		bool sigval1 = param1;
		miqt_exec_callback_QTextBrowser_BackwardAvailable(slot, sigval1);
	});
}

void QTextBrowser_ForwardAvailable(QTextBrowser* self, bool param1) {
	self->forwardAvailable(param1);
}

void QTextBrowser_connect_ForwardAvailable(QTextBrowser* self, intptr_t slot) {
	MiqtVirtualQTextBrowser::connect(self, static_cast<void (QTextBrowser::*)(bool)>(&QTextBrowser::forwardAvailable), self, [=](bool param1) {
		bool sigval1 = param1;
		miqt_exec_callback_QTextBrowser_ForwardAvailable(slot, sigval1);
	});
}

void QTextBrowser_HistoryChanged(QTextBrowser* self) {
	self->historyChanged();
}

void QTextBrowser_connect_HistoryChanged(QTextBrowser* self, intptr_t slot) {
	MiqtVirtualQTextBrowser::connect(self, static_cast<void (QTextBrowser::*)()>(&QTextBrowser::historyChanged), self, [=]() {
		miqt_exec_callback_QTextBrowser_HistoryChanged(slot);
	});
}

void QTextBrowser_SourceChanged(QTextBrowser* self, QUrl* param1) {
	self->sourceChanged(*param1);
}

void QTextBrowser_connect_SourceChanged(QTextBrowser* self, intptr_t slot) {
	MiqtVirtualQTextBrowser::connect(self, static_cast<void (QTextBrowser::*)(const QUrl&)>(&QTextBrowser::sourceChanged), self, [=](const QUrl& param1) {
		const QUrl& param1_ret = param1;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&param1_ret);
		miqt_exec_callback_QTextBrowser_SourceChanged(slot, sigval1);
	});
}

void QTextBrowser_Highlighted(QTextBrowser* self, QUrl* param1) {
	self->highlighted(*param1);
}

void QTextBrowser_connect_Highlighted(QTextBrowser* self, intptr_t slot) {
	MiqtVirtualQTextBrowser::connect(self, static_cast<void (QTextBrowser::*)(const QUrl&)>(&QTextBrowser::highlighted), self, [=](const QUrl& param1) {
		const QUrl& param1_ret = param1;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&param1_ret);
		miqt_exec_callback_QTextBrowser_Highlighted(slot, sigval1);
	});
}

void QTextBrowser_AnchorClicked(QTextBrowser* self, QUrl* param1) {
	self->anchorClicked(*param1);
}

void QTextBrowser_connect_AnchorClicked(QTextBrowser* self, intptr_t slot) {
	MiqtVirtualQTextBrowser::connect(self, static_cast<void (QTextBrowser::*)(const QUrl&)>(&QTextBrowser::anchorClicked), self, [=](const QUrl& param1) {
		const QUrl& param1_ret = param1;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&param1_ret);
		miqt_exec_callback_QTextBrowser_AnchorClicked(slot, sigval1);
	});
}

struct miqt_string QTextBrowser_Tr2(const char* s, const char* c) {
	QString _ret = QTextBrowser::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextBrowser_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTextBrowser::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextBrowser_SetSource2(QTextBrowser* self, QUrl* name, int typeVal) {
	self->setSource(*name, static_cast<QTextDocument::ResourceType>(typeVal));
}

bool QTextBrowser_override_virtual_LoadResource(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LoadResource = slot;
	return true;
}

QVariant* QTextBrowser_virtualbase_LoadResource(void* self, int typeVal, QUrl* name) {
	return ( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_LoadResource(typeVal, name);
}

bool QTextBrowser_override_virtual_Backward(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Backward = slot;
	return true;
}

void QTextBrowser_virtualbase_Backward(void* self) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_Backward();
}

bool QTextBrowser_override_virtual_Forward(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Forward = slot;
	return true;
}

void QTextBrowser_virtualbase_Forward(void* self) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_Forward();
}

bool QTextBrowser_override_virtual_Home(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Home = slot;
	return true;
}

void QTextBrowser_virtualbase_Home(void* self) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_Home();
}

bool QTextBrowser_override_virtual_Reload(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Reload = slot;
	return true;
}

void QTextBrowser_virtualbase_Reload(void* self) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_Reload();
}

bool QTextBrowser_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QTextBrowser_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_Event(e);
}

bool QTextBrowser_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_KeyPressEvent(void* self, QKeyEvent* ev) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_KeyPressEvent(ev);
}

bool QTextBrowser_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_MouseMoveEvent(void* self, QMouseEvent* ev) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_MouseMoveEvent(ev);
}

bool QTextBrowser_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_MousePressEvent(void* self, QMouseEvent* ev) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_MousePressEvent(ev);
}

bool QTextBrowser_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* ev) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_MouseReleaseEvent(ev);
}

bool QTextBrowser_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_FocusOutEvent(void* self, QFocusEvent* ev) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_FocusOutEvent(ev);
}

bool QTextBrowser_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QTextBrowser_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QTextBrowser_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_PaintEvent(void* self, QPaintEvent* e) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_PaintEvent(e);
}

bool QTextBrowser_override_virtual_DoSetSource(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DoSetSource = slot;
	return true;
}

void QTextBrowser_virtualbase_DoSetSource(void* self, QUrl* name, int typeVal) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_DoSetSource(name, typeVal);
}

bool QTextBrowser_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QTextBrowser_virtualbase_InputMethodQuery(const void* self, int property) {
	return ( (const MiqtVirtualQTextBrowser*)(self) )->virtualbase_InputMethodQuery(property);
}

bool QTextBrowser_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_TimerEvent(void* self, QTimerEvent* e) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_TimerEvent(e);
}

bool QTextBrowser_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_KeyReleaseEvent(e);
}

bool QTextBrowser_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_ResizeEvent(void* self, QResizeEvent* e) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_ResizeEvent(e);
}

bool QTextBrowser_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_MouseDoubleClickEvent(e);
}

bool QTextBrowser_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* e) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_ContextMenuEvent(e);
}

bool QTextBrowser_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* e) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_DragEnterEvent(e);
}

bool QTextBrowser_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* e) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_DragLeaveEvent(e);
}

bool QTextBrowser_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* e) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_DragMoveEvent(e);
}

bool QTextBrowser_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_DropEvent(void* self, QDropEvent* e) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_DropEvent(e);
}

bool QTextBrowser_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_FocusInEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_FocusInEvent(e);
}

bool QTextBrowser_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_ShowEvent(void* self, QShowEvent* param1) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_ShowEvent(param1);
}

bool QTextBrowser_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_ChangeEvent(void* self, QEvent* e) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_ChangeEvent(e);
}

bool QTextBrowser_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_WheelEvent(void* self, QWheelEvent* e) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_WheelEvent(e);
}

bool QTextBrowser_override_virtual_CreateMimeDataFromSelection(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CreateMimeDataFromSelection = slot;
	return true;
}

QMimeData* QTextBrowser_virtualbase_CreateMimeDataFromSelection(const void* self) {
	return ( (const MiqtVirtualQTextBrowser*)(self) )->virtualbase_CreateMimeDataFromSelection();
}

bool QTextBrowser_override_virtual_CanInsertFromMimeData(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CanInsertFromMimeData = slot;
	return true;
}

bool QTextBrowser_virtualbase_CanInsertFromMimeData(const void* self, QMimeData* source) {
	return ( (const MiqtVirtualQTextBrowser*)(self) )->virtualbase_CanInsertFromMimeData(source);
}

bool QTextBrowser_override_virtual_InsertFromMimeData(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InsertFromMimeData = slot;
	return true;
}

void QTextBrowser_virtualbase_InsertFromMimeData(void* self, QMimeData* source) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_InsertFromMimeData(source);
}

bool QTextBrowser_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QTextBrowser_override_virtual_ScrollContentsBy(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ScrollContentsBy = slot;
	return true;
}

void QTextBrowser_virtualbase_ScrollContentsBy(void* self, int dx, int dy) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_ScrollContentsBy(dx, dy);
}

bool QTextBrowser_override_virtual_DoSetTextCursor(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DoSetTextCursor = slot;
	return true;
}

void QTextBrowser_virtualbase_DoSetTextCursor(void* self, QTextCursor* cursor) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_DoSetTextCursor(cursor);
}

bool QTextBrowser_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QTextBrowser_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQTextBrowser*)(self) )->virtualbase_MinimumSizeHint();
}

bool QTextBrowser_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QTextBrowser_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQTextBrowser*)(self) )->virtualbase_SizeHint();
}

bool QTextBrowser_override_virtual_SetupViewport(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetupViewport = slot;
	return true;
}

void QTextBrowser_virtualbase_SetupViewport(void* self, QWidget* viewport) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_SetupViewport(viewport);
}

bool QTextBrowser_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QTextBrowser_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_EventFilter(param1, param2);
}

bool QTextBrowser_override_virtual_ViewportEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ViewportEvent = slot;
	return true;
}

bool QTextBrowser_virtualbase_ViewportEvent(void* self, QEvent* param1) {
	return ( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_ViewportEvent(param1);
}

bool QTextBrowser_override_virtual_ViewportSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ViewportSizeHint = slot;
	return true;
}

QSize* QTextBrowser_virtualbase_ViewportSizeHint(const void* self) {
	return ( (const MiqtVirtualQTextBrowser*)(self) )->virtualbase_ViewportSizeHint();
}

bool QTextBrowser_override_virtual_InitStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitStyleOption = slot;
	return true;
}

void QTextBrowser_virtualbase_InitStyleOption(const void* self, QStyleOptionFrame* option) {
	( (const MiqtVirtualQTextBrowser*)(self) )->virtualbase_InitStyleOption(option);
}

bool QTextBrowser_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QTextBrowser_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQTextBrowser*)(self) )->virtualbase_DevType();
}

bool QTextBrowser_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QTextBrowser_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_SetVisible(visible);
}

bool QTextBrowser_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QTextBrowser_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQTextBrowser*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QTextBrowser_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QTextBrowser_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQTextBrowser*)(self) )->virtualbase_HasHeightForWidth();
}

bool QTextBrowser_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QTextBrowser_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQTextBrowser*)(self) )->virtualbase_PaintEngine();
}

bool QTextBrowser_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_EnterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_EnterEvent(event);
}

bool QTextBrowser_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_LeaveEvent(event);
}

bool QTextBrowser_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_MoveEvent(event);
}

bool QTextBrowser_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_CloseEvent(event);
}

bool QTextBrowser_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_TabletEvent(event);
}

bool QTextBrowser_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_ActionEvent(event);
}

bool QTextBrowser_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_HideEvent(event);
}

bool QTextBrowser_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QTextBrowser_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QTextBrowser_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QTextBrowser_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQTextBrowser*)(self) )->virtualbase_Metric(param1);
}

bool QTextBrowser_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QTextBrowser_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQTextBrowser*)(self) )->virtualbase_InitPainter(painter);
}

bool QTextBrowser_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QTextBrowser_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQTextBrowser*)(self) )->virtualbase_Redirected(offset);
}

bool QTextBrowser_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QTextBrowser_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQTextBrowser*)(self) )->virtualbase_SharedPainter();
}

bool QTextBrowser_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_ChildEvent(event);
}

bool QTextBrowser_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_CustomEvent(event);
}

bool QTextBrowser_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QTextBrowser_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QTextBrowser_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QTextBrowser_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QTextBrowser_Delete(QTextBrowser* self) {
	delete self;
}

