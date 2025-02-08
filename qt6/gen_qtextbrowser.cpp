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
#include <QMargins>
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

void miqt_exec_callback_QTextBrowser_backwardAvailable(intptr_t, bool);
void miqt_exec_callback_QTextBrowser_forwardAvailable(intptr_t, bool);
void miqt_exec_callback_QTextBrowser_historyChanged(intptr_t);
void miqt_exec_callback_QTextBrowser_sourceChanged(intptr_t, QUrl*);
void miqt_exec_callback_QTextBrowser_highlighted(intptr_t, QUrl*);
void miqt_exec_callback_QTextBrowser_anchorClicked(intptr_t, QUrl*);
QVariant* miqt_exec_callback_QTextBrowser_loadResource(QTextBrowser*, intptr_t, int, QUrl*);
void miqt_exec_callback_QTextBrowser_backward(QTextBrowser*, intptr_t);
void miqt_exec_callback_QTextBrowser_forward(QTextBrowser*, intptr_t);
void miqt_exec_callback_QTextBrowser_home(QTextBrowser*, intptr_t);
void miqt_exec_callback_QTextBrowser_reload(QTextBrowser*, intptr_t);
bool miqt_exec_callback_QTextBrowser_event(QTextBrowser*, intptr_t, QEvent*);
void miqt_exec_callback_QTextBrowser_keyPressEvent(QTextBrowser*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QTextBrowser_mouseMoveEvent(QTextBrowser*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTextBrowser_mousePressEvent(QTextBrowser*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTextBrowser_mouseReleaseEvent(QTextBrowser*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTextBrowser_focusOutEvent(QTextBrowser*, intptr_t, QFocusEvent*);
bool miqt_exec_callback_QTextBrowser_focusNextPrevChild(QTextBrowser*, intptr_t, bool);
void miqt_exec_callback_QTextBrowser_paintEvent(QTextBrowser*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QTextBrowser_doSetSource(QTextBrowser*, intptr_t, QUrl*, int);
QVariant* miqt_exec_callback_QTextBrowser_inputMethodQuery(const QTextBrowser*, intptr_t, int);
void miqt_exec_callback_QTextBrowser_timerEvent(QTextBrowser*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QTextBrowser_keyReleaseEvent(QTextBrowser*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QTextBrowser_resizeEvent(QTextBrowser*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QTextBrowser_mouseDoubleClickEvent(QTextBrowser*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTextBrowser_contextMenuEvent(QTextBrowser*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QTextBrowser_dragEnterEvent(QTextBrowser*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QTextBrowser_dragLeaveEvent(QTextBrowser*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QTextBrowser_dragMoveEvent(QTextBrowser*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QTextBrowser_dropEvent(QTextBrowser*, intptr_t, QDropEvent*);
void miqt_exec_callback_QTextBrowser_focusInEvent(QTextBrowser*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QTextBrowser_showEvent(QTextBrowser*, intptr_t, QShowEvent*);
void miqt_exec_callback_QTextBrowser_changeEvent(QTextBrowser*, intptr_t, QEvent*);
void miqt_exec_callback_QTextBrowser_wheelEvent(QTextBrowser*, intptr_t, QWheelEvent*);
QMimeData* miqt_exec_callback_QTextBrowser_createMimeDataFromSelection(const QTextBrowser*, intptr_t);
bool miqt_exec_callback_QTextBrowser_canInsertFromMimeData(const QTextBrowser*, intptr_t, QMimeData*);
void miqt_exec_callback_QTextBrowser_insertFromMimeData(QTextBrowser*, intptr_t, QMimeData*);
void miqt_exec_callback_QTextBrowser_inputMethodEvent(QTextBrowser*, intptr_t, QInputMethodEvent*);
void miqt_exec_callback_QTextBrowser_scrollContentsBy(QTextBrowser*, intptr_t, int, int);
void miqt_exec_callback_QTextBrowser_doSetTextCursor(QTextBrowser*, intptr_t, QTextCursor*);
QSize* miqt_exec_callback_QTextBrowser_minimumSizeHint(const QTextBrowser*, intptr_t);
QSize* miqt_exec_callback_QTextBrowser_sizeHint(const QTextBrowser*, intptr_t);
void miqt_exec_callback_QTextBrowser_setupViewport(QTextBrowser*, intptr_t, QWidget*);
bool miqt_exec_callback_QTextBrowser_eventFilter(QTextBrowser*, intptr_t, QObject*, QEvent*);
bool miqt_exec_callback_QTextBrowser_viewportEvent(QTextBrowser*, intptr_t, QEvent*);
QSize* miqt_exec_callback_QTextBrowser_viewportSizeHint(const QTextBrowser*, intptr_t);
void miqt_exec_callback_QTextBrowser_initStyleOption(const QTextBrowser*, intptr_t, QStyleOptionFrame*);
int miqt_exec_callback_QTextBrowser_devType(const QTextBrowser*, intptr_t);
void miqt_exec_callback_QTextBrowser_setVisible(QTextBrowser*, intptr_t, bool);
int miqt_exec_callback_QTextBrowser_heightForWidth(const QTextBrowser*, intptr_t, int);
bool miqt_exec_callback_QTextBrowser_hasHeightForWidth(const QTextBrowser*, intptr_t);
QPaintEngine* miqt_exec_callback_QTextBrowser_paintEngine(const QTextBrowser*, intptr_t);
void miqt_exec_callback_QTextBrowser_enterEvent(QTextBrowser*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QTextBrowser_leaveEvent(QTextBrowser*, intptr_t, QEvent*);
void miqt_exec_callback_QTextBrowser_moveEvent(QTextBrowser*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QTextBrowser_closeEvent(QTextBrowser*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QTextBrowser_tabletEvent(QTextBrowser*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QTextBrowser_actionEvent(QTextBrowser*, intptr_t, QActionEvent*);
void miqt_exec_callback_QTextBrowser_hideEvent(QTextBrowser*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QTextBrowser_nativeEvent(QTextBrowser*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QTextBrowser_metric(const QTextBrowser*, intptr_t, int);
void miqt_exec_callback_QTextBrowser_initPainter(const QTextBrowser*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QTextBrowser_redirected(const QTextBrowser*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QTextBrowser_sharedPainter(const QTextBrowser*, intptr_t);
void miqt_exec_callback_QTextBrowser_childEvent(QTextBrowser*, intptr_t, QChildEvent*);
void miqt_exec_callback_QTextBrowser_customEvent(QTextBrowser*, intptr_t, QEvent*);
void miqt_exec_callback_QTextBrowser_connectNotify(QTextBrowser*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QTextBrowser_disconnectNotify(QTextBrowser*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQTextBrowser final : public QTextBrowser {
public:

	MiqtVirtualQTextBrowser(QWidget* parent): QTextBrowser(parent) {};
	MiqtVirtualQTextBrowser(): QTextBrowser() {};

	virtual ~MiqtVirtualQTextBrowser() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__loadResource = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant loadResource(int type, const QUrl& name) override {
		if (handle__loadResource == 0) {
			return QTextBrowser::loadResource(type, name);
		}
		
		int sigval1 = type;
		const QUrl& name_ret = name;
		// Cast returned reference into pointer
		QUrl* sigval2 = const_cast<QUrl*>(&name_ret);

		QVariant* callback_return_value = miqt_exec_callback_QTextBrowser_loadResource(this, handle__loadResource, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_loadResource(int type, QUrl* name) {

		return new QVariant(QTextBrowser::loadResource(static_cast<int>(type), *name));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__backward = 0;

	// Subclass to allow providing a Go implementation
	virtual void backward() override {
		if (handle__backward == 0) {
			QTextBrowser::backward();
			return;
		}
		

		miqt_exec_callback_QTextBrowser_backward(this, handle__backward);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_backward() {

		QTextBrowser::backward();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__forward = 0;

	// Subclass to allow providing a Go implementation
	virtual void forward() override {
		if (handle__forward == 0) {
			QTextBrowser::forward();
			return;
		}
		

		miqt_exec_callback_QTextBrowser_forward(this, handle__forward);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_forward() {

		QTextBrowser::forward();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__home = 0;

	// Subclass to allow providing a Go implementation
	virtual void home() override {
		if (handle__home == 0) {
			QTextBrowser::home();
			return;
		}
		

		miqt_exec_callback_QTextBrowser_home(this, handle__home);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_home() {

		QTextBrowser::home();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__reload = 0;

	// Subclass to allow providing a Go implementation
	virtual void reload() override {
		if (handle__reload == 0) {
			QTextBrowser::reload();
			return;
		}
		

		miqt_exec_callback_QTextBrowser_reload(this, handle__reload);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_reload() {

		QTextBrowser::reload();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__event == 0) {
			return QTextBrowser::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QTextBrowser_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* e) {

		return QTextBrowser::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* ev) override {
		if (handle__keyPressEvent == 0) {
			QTextBrowser::keyPressEvent(ev);
			return;
		}
		
		QKeyEvent* sigval1 = ev;

		miqt_exec_callback_QTextBrowser_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* ev) {

		QTextBrowser::keyPressEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* ev) override {
		if (handle__mouseMoveEvent == 0) {
			QTextBrowser::mouseMoveEvent(ev);
			return;
		}
		
		QMouseEvent* sigval1 = ev;

		miqt_exec_callback_QTextBrowser_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* ev) {

		QTextBrowser::mouseMoveEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* ev) override {
		if (handle__mousePressEvent == 0) {
			QTextBrowser::mousePressEvent(ev);
			return;
		}
		
		QMouseEvent* sigval1 = ev;

		miqt_exec_callback_QTextBrowser_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* ev) {

		QTextBrowser::mousePressEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* ev) override {
		if (handle__mouseReleaseEvent == 0) {
			QTextBrowser::mouseReleaseEvent(ev);
			return;
		}
		
		QMouseEvent* sigval1 = ev;

		miqt_exec_callback_QTextBrowser_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* ev) {

		QTextBrowser::mouseReleaseEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* ev) override {
		if (handle__focusOutEvent == 0) {
			QTextBrowser::focusOutEvent(ev);
			return;
		}
		
		QFocusEvent* sigval1 = ev;

		miqt_exec_callback_QTextBrowser_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* ev) {

		QTextBrowser::focusOutEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QTextBrowser::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QTextBrowser_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QTextBrowser::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* e) override {
		if (handle__paintEvent == 0) {
			QTextBrowser::paintEvent(e);
			return;
		}
		
		QPaintEvent* sigval1 = e;

		miqt_exec_callback_QTextBrowser_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* e) {

		QTextBrowser::paintEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__doSetSource = 0;

	// Subclass to allow providing a Go implementation
	virtual void doSetSource(const QUrl& name, QTextDocument::ResourceType type) override {
		if (handle__doSetSource == 0) {
			QTextBrowser::doSetSource(name, type);
			return;
		}
		
		const QUrl& name_ret = name;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&name_ret);
		QTextDocument::ResourceType type_ret = type;
		int sigval2 = static_cast<int>(type_ret);

		miqt_exec_callback_QTextBrowser_doSetSource(this, handle__doSetSource, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_doSetSource(QUrl* name, int type) {

		QTextBrowser::doSetSource(*name, static_cast<QTextDocument::ResourceType>(type));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery property) const override {
		if (handle__inputMethodQuery == 0) {
			return QTextBrowser::inputMethodQuery(property);
		}
		
		Qt::InputMethodQuery property_ret = property;
		int sigval1 = static_cast<int>(property_ret);

		QVariant* callback_return_value = miqt_exec_callback_QTextBrowser_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int property) const {

		return new QVariant(QTextBrowser::inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* e) override {
		if (handle__timerEvent == 0) {
			QTextBrowser::timerEvent(e);
			return;
		}
		
		QTimerEvent* sigval1 = e;

		miqt_exec_callback_QTextBrowser_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* e) {

		QTextBrowser::timerEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* e) override {
		if (handle__keyReleaseEvent == 0) {
			QTextBrowser::keyReleaseEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QTextBrowser_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* e) {

		QTextBrowser::keyReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* e) override {
		if (handle__resizeEvent == 0) {
			QTextBrowser::resizeEvent(e);
			return;
		}
		
		QResizeEvent* sigval1 = e;

		miqt_exec_callback_QTextBrowser_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* e) {

		QTextBrowser::resizeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QTextBrowser::mouseDoubleClickEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QTextBrowser_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* e) {

		QTextBrowser::mouseDoubleClickEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* e) override {
		if (handle__contextMenuEvent == 0) {
			QTextBrowser::contextMenuEvent(e);
			return;
		}
		
		QContextMenuEvent* sigval1 = e;

		miqt_exec_callback_QTextBrowser_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* e) {

		QTextBrowser::contextMenuEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* e) override {
		if (handle__dragEnterEvent == 0) {
			QTextBrowser::dragEnterEvent(e);
			return;
		}
		
		QDragEnterEvent* sigval1 = e;

		miqt_exec_callback_QTextBrowser_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* e) {

		QTextBrowser::dragEnterEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
		if (handle__dragLeaveEvent == 0) {
			QTextBrowser::dragLeaveEvent(e);
			return;
		}
		
		QDragLeaveEvent* sigval1 = e;

		miqt_exec_callback_QTextBrowser_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* e) {

		QTextBrowser::dragLeaveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* e) override {
		if (handle__dragMoveEvent == 0) {
			QTextBrowser::dragMoveEvent(e);
			return;
		}
		
		QDragMoveEvent* sigval1 = e;

		miqt_exec_callback_QTextBrowser_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* e) {

		QTextBrowser::dragMoveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* e) override {
		if (handle__dropEvent == 0) {
			QTextBrowser::dropEvent(e);
			return;
		}
		
		QDropEvent* sigval1 = e;

		miqt_exec_callback_QTextBrowser_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* e) {

		QTextBrowser::dropEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* e) override {
		if (handle__focusInEvent == 0) {
			QTextBrowser::focusInEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QTextBrowser_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* e) {

		QTextBrowser::focusInEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (handle__showEvent == 0) {
			QTextBrowser::showEvent(param1);
			return;
		}
		
		QShowEvent* sigval1 = param1;

		miqt_exec_callback_QTextBrowser_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* param1) {

		QTextBrowser::showEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (handle__changeEvent == 0) {
			QTextBrowser::changeEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QTextBrowser_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* e) {

		QTextBrowser::changeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* e) override {
		if (handle__wheelEvent == 0) {
			QTextBrowser::wheelEvent(e);
			return;
		}
		
		QWheelEvent* sigval1 = e;

		miqt_exec_callback_QTextBrowser_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* e) {

		QTextBrowser::wheelEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__createMimeDataFromSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual QMimeData* createMimeDataFromSelection() const override {
		if (handle__createMimeDataFromSelection == 0) {
			return QTextBrowser::createMimeDataFromSelection();
		}
		

		QMimeData* callback_return_value = miqt_exec_callback_QTextBrowser_createMimeDataFromSelection(this, handle__createMimeDataFromSelection);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QMimeData* virtualbase_createMimeDataFromSelection() const {

		return QTextBrowser::createMimeDataFromSelection();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canInsertFromMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canInsertFromMimeData(const QMimeData* source) const override {
		if (handle__canInsertFromMimeData == 0) {
			return QTextBrowser::canInsertFromMimeData(source);
		}
		
		QMimeData* sigval1 = (QMimeData*) source;

		bool callback_return_value = miqt_exec_callback_QTextBrowser_canInsertFromMimeData(this, handle__canInsertFromMimeData, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_canInsertFromMimeData(QMimeData* source) const {

		return QTextBrowser::canInsertFromMimeData(source);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__insertFromMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual void insertFromMimeData(const QMimeData* source) override {
		if (handle__insertFromMimeData == 0) {
			QTextBrowser::insertFromMimeData(source);
			return;
		}
		
		QMimeData* sigval1 = (QMimeData*) source;

		miqt_exec_callback_QTextBrowser_insertFromMimeData(this, handle__insertFromMimeData, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_insertFromMimeData(QMimeData* source) {

		QTextBrowser::insertFromMimeData(source);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QTextBrowser::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QTextBrowser_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QTextBrowser::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (handle__scrollContentsBy == 0) {
			QTextBrowser::scrollContentsBy(dx, dy);
			return;
		}
		
		int sigval1 = dx;
		int sigval2 = dy;

		miqt_exec_callback_QTextBrowser_scrollContentsBy(this, handle__scrollContentsBy, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_scrollContentsBy(int dx, int dy) {

		QTextBrowser::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__doSetTextCursor = 0;

	// Subclass to allow providing a Go implementation
	virtual void doSetTextCursor(const QTextCursor& cursor) override {
		if (handle__doSetTextCursor == 0) {
			QTextBrowser::doSetTextCursor(cursor);
			return;
		}
		
		const QTextCursor& cursor_ret = cursor;
		// Cast returned reference into pointer
		QTextCursor* sigval1 = const_cast<QTextCursor*>(&cursor_ret);

		miqt_exec_callback_QTextBrowser_doSetTextCursor(this, handle__doSetTextCursor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_doSetTextCursor(QTextCursor* cursor) {

		QTextBrowser::doSetTextCursor(*cursor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QTextBrowser::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QTextBrowser_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QTextBrowser::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QTextBrowser::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QTextBrowser_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QTextBrowser::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setupViewport = 0;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (handle__setupViewport == 0) {
			QTextBrowser::setupViewport(viewport);
			return;
		}
		
		QWidget* sigval1 = viewport;

		miqt_exec_callback_QTextBrowser_setupViewport(this, handle__setupViewport, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setupViewport(QWidget* viewport) {

		QTextBrowser::setupViewport(viewport);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__eventFilter == 0) {
			return QTextBrowser::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QTextBrowser_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* param1, QEvent* param2) {

		return QTextBrowser::eventFilter(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewportEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* param1) override {
		if (handle__viewportEvent == 0) {
			return QTextBrowser::viewportEvent(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QTextBrowser_viewportEvent(this, handle__viewportEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_viewportEvent(QEvent* param1) {

		return QTextBrowser::viewportEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewportSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (handle__viewportSizeHint == 0) {
			return QTextBrowser::viewportSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QTextBrowser_viewportSizeHint(this, handle__viewportSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_viewportSizeHint() const {

		return new QSize(QTextBrowser::viewportSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionFrame* option) const override {
		if (handle__initStyleOption == 0) {
			QTextBrowser::initStyleOption(option);
			return;
		}
		
		QStyleOptionFrame* sigval1 = option;

		miqt_exec_callback_QTextBrowser_initStyleOption(this, handle__initStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initStyleOption(QStyleOptionFrame* option) const {

		QTextBrowser::initStyleOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QTextBrowser::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QTextBrowser_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QTextBrowser::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QTextBrowser::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QTextBrowser_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QTextBrowser::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QTextBrowser::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QTextBrowser_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QTextBrowser::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QTextBrowser::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QTextBrowser_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QTextBrowser::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QTextBrowser::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QTextBrowser_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QTextBrowser::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__enterEvent == 0) {
			QTextBrowser::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QTextBrowser_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEnterEvent* event) {

		QTextBrowser::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QTextBrowser::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTextBrowser_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QTextBrowser::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QTextBrowser::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QTextBrowser_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QTextBrowser::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QTextBrowser::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QTextBrowser_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QTextBrowser::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QTextBrowser::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QTextBrowser_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QTextBrowser::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QTextBrowser::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QTextBrowser_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QTextBrowser::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QTextBrowser::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QTextBrowser_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QTextBrowser::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__nativeEvent == 0) {
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

		bool callback_return_value = miqt_exec_callback_QTextBrowser_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QTextBrowser::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QTextBrowser::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QTextBrowser_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QTextBrowser::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QTextBrowser::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QTextBrowser_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QTextBrowser::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QTextBrowser::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QTextBrowser_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QTextBrowser::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QTextBrowser::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QTextBrowser_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QTextBrowser::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QTextBrowser::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QTextBrowser_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QTextBrowser::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QTextBrowser::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTextBrowser_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QTextBrowser::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QTextBrowser::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTextBrowser_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QTextBrowser::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QTextBrowser::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTextBrowser_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QTextBrowser::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QTextBrowser_protectedbase_zoomInF(bool* _dynamic_cast_ok, void* self, float range);
	friend void QTextBrowser_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom);
	friend QMargins* QTextBrowser_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self);
	friend void QTextBrowser_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
	friend void QTextBrowser_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QTextBrowser_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QTextBrowser_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QTextBrowser_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QTextBrowser_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QTextBrowser_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QTextBrowser_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QTextBrowser_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QTextBrowser_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QTextBrowser_metaObject(const QTextBrowser* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTextBrowser_metacast(QTextBrowser* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTextBrowser_tr(const char* s) {
	QString _ret = QTextBrowser::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QUrl* QTextBrowser_source(const QTextBrowser* self) {
	return new QUrl(self->source());
}

int QTextBrowser_sourceType(const QTextBrowser* self) {
	QTextDocument::ResourceType _ret = self->sourceType();
	return static_cast<int>(_ret);
}

struct miqt_array /* of struct miqt_string */  QTextBrowser_searchPaths(const QTextBrowser* self) {
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

void QTextBrowser_setSearchPaths(QTextBrowser* self, struct miqt_array /* of struct miqt_string */  paths) {
	QStringList paths_QList;
	paths_QList.reserve(paths.len);
	struct miqt_string* paths_arr = static_cast<struct miqt_string*>(paths.data);
	for(size_t i = 0; i < paths.len; ++i) {
		QString paths_arr_i_QString = QString::fromUtf8(paths_arr[i].data, paths_arr[i].len);
		paths_QList.push_back(paths_arr_i_QString);
	}
	self->setSearchPaths(paths_QList);
}

QVariant* QTextBrowser_loadResource(QTextBrowser* self, int type, QUrl* name) {
	return new QVariant(self->loadResource(static_cast<int>(type), *name));
}

bool QTextBrowser_isBackwardAvailable(const QTextBrowser* self) {
	return self->isBackwardAvailable();
}

bool QTextBrowser_isForwardAvailable(const QTextBrowser* self) {
	return self->isForwardAvailable();
}

void QTextBrowser_clearHistory(QTextBrowser* self) {
	self->clearHistory();
}

struct miqt_string QTextBrowser_historyTitle(const QTextBrowser* self, int param1) {
	QString _ret = self->historyTitle(static_cast<int>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QUrl* QTextBrowser_historyUrl(const QTextBrowser* self, int param1) {
	return new QUrl(self->historyUrl(static_cast<int>(param1)));
}

int QTextBrowser_backwardHistoryCount(const QTextBrowser* self) {
	return self->backwardHistoryCount();
}

int QTextBrowser_forwardHistoryCount(const QTextBrowser* self) {
	return self->forwardHistoryCount();
}

bool QTextBrowser_openExternalLinks(const QTextBrowser* self) {
	return self->openExternalLinks();
}

void QTextBrowser_setOpenExternalLinks(QTextBrowser* self, bool open) {
	self->setOpenExternalLinks(open);
}

bool QTextBrowser_openLinks(const QTextBrowser* self) {
	return self->openLinks();
}

void QTextBrowser_setOpenLinks(QTextBrowser* self, bool open) {
	self->setOpenLinks(open);
}

void QTextBrowser_setSource(QTextBrowser* self, QUrl* name) {
	self->setSource(*name);
}

void QTextBrowser_backward(QTextBrowser* self) {
	self->backward();
}

void QTextBrowser_forward(QTextBrowser* self) {
	self->forward();
}

void QTextBrowser_home(QTextBrowser* self) {
	self->home();
}

void QTextBrowser_reload(QTextBrowser* self) {
	self->reload();
}

void QTextBrowser_backwardAvailable(QTextBrowser* self, bool param1) {
	self->backwardAvailable(param1);
}

void QTextBrowser_connect_backwardAvailable(QTextBrowser* self, intptr_t slot) {
	MiqtVirtualQTextBrowser::connect(self, static_cast<void (QTextBrowser::*)(bool)>(&QTextBrowser::backwardAvailable), self, [=](bool param1) {
		bool sigval1 = param1;
		miqt_exec_callback_QTextBrowser_backwardAvailable(slot, sigval1);
	});
}

void QTextBrowser_forwardAvailable(QTextBrowser* self, bool param1) {
	self->forwardAvailable(param1);
}

void QTextBrowser_connect_forwardAvailable(QTextBrowser* self, intptr_t slot) {
	MiqtVirtualQTextBrowser::connect(self, static_cast<void (QTextBrowser::*)(bool)>(&QTextBrowser::forwardAvailable), self, [=](bool param1) {
		bool sigval1 = param1;
		miqt_exec_callback_QTextBrowser_forwardAvailable(slot, sigval1);
	});
}

void QTextBrowser_historyChanged(QTextBrowser* self) {
	self->historyChanged();
}

void QTextBrowser_connect_historyChanged(QTextBrowser* self, intptr_t slot) {
	MiqtVirtualQTextBrowser::connect(self, static_cast<void (QTextBrowser::*)()>(&QTextBrowser::historyChanged), self, [=]() {
		miqt_exec_callback_QTextBrowser_historyChanged(slot);
	});
}

void QTextBrowser_sourceChanged(QTextBrowser* self, QUrl* param1) {
	self->sourceChanged(*param1);
}

void QTextBrowser_connect_sourceChanged(QTextBrowser* self, intptr_t slot) {
	MiqtVirtualQTextBrowser::connect(self, static_cast<void (QTextBrowser::*)(const QUrl&)>(&QTextBrowser::sourceChanged), self, [=](const QUrl& param1) {
		const QUrl& param1_ret = param1;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&param1_ret);
		miqt_exec_callback_QTextBrowser_sourceChanged(slot, sigval1);
	});
}

void QTextBrowser_highlighted(QTextBrowser* self, QUrl* param1) {
	self->highlighted(*param1);
}

void QTextBrowser_connect_highlighted(QTextBrowser* self, intptr_t slot) {
	MiqtVirtualQTextBrowser::connect(self, static_cast<void (QTextBrowser::*)(const QUrl&)>(&QTextBrowser::highlighted), self, [=](const QUrl& param1) {
		const QUrl& param1_ret = param1;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&param1_ret);
		miqt_exec_callback_QTextBrowser_highlighted(slot, sigval1);
	});
}

void QTextBrowser_anchorClicked(QTextBrowser* self, QUrl* param1) {
	self->anchorClicked(*param1);
}

void QTextBrowser_connect_anchorClicked(QTextBrowser* self, intptr_t slot) {
	MiqtVirtualQTextBrowser::connect(self, static_cast<void (QTextBrowser::*)(const QUrl&)>(&QTextBrowser::anchorClicked), self, [=](const QUrl& param1) {
		const QUrl& param1_ret = param1;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&param1_ret);
		miqt_exec_callback_QTextBrowser_anchorClicked(slot, sigval1);
	});
}

struct miqt_string QTextBrowser_tr2(const char* s, const char* c) {
	QString _ret = QTextBrowser::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextBrowser_tr3(const char* s, const char* c, int n) {
	QString _ret = QTextBrowser::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextBrowser_setSource2(QTextBrowser* self, QUrl* name, int type) {
	self->setSource(*name, static_cast<QTextDocument::ResourceType>(type));
}

bool QTextBrowser_override_virtual_loadResource(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__loadResource = slot;
	return true;
}

QVariant* QTextBrowser_virtualbase_loadResource(void* self, int type, QUrl* name) {
	return ( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_loadResource(type, name);
}

bool QTextBrowser_override_virtual_backward(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__backward = slot;
	return true;
}

void QTextBrowser_virtualbase_backward(void* self) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_backward();
}

bool QTextBrowser_override_virtual_forward(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__forward = slot;
	return true;
}

void QTextBrowser_virtualbase_forward(void* self) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_forward();
}

bool QTextBrowser_override_virtual_home(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__home = slot;
	return true;
}

void QTextBrowser_virtualbase_home(void* self) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_home();
}

bool QTextBrowser_override_virtual_reload(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__reload = slot;
	return true;
}

void QTextBrowser_virtualbase_reload(void* self) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_reload();
}

bool QTextBrowser_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QTextBrowser_virtualbase_event(void* self, QEvent* e) {
	return ( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_event(e);
}

bool QTextBrowser_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_keyPressEvent(void* self, QKeyEvent* ev) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_keyPressEvent(ev);
}

bool QTextBrowser_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_mouseMoveEvent(void* self, QMouseEvent* ev) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_mouseMoveEvent(ev);
}

bool QTextBrowser_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_mousePressEvent(void* self, QMouseEvent* ev) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_mousePressEvent(ev);
}

bool QTextBrowser_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* ev) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_mouseReleaseEvent(ev);
}

bool QTextBrowser_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_focusOutEvent(void* self, QFocusEvent* ev) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_focusOutEvent(ev);
}

bool QTextBrowser_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QTextBrowser_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QTextBrowser_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_paintEvent(void* self, QPaintEvent* e) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_paintEvent(e);
}

bool QTextBrowser_override_virtual_doSetSource(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__doSetSource = slot;
	return true;
}

void QTextBrowser_virtualbase_doSetSource(void* self, QUrl* name, int type) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_doSetSource(name, type);
}

bool QTextBrowser_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QTextBrowser_virtualbase_inputMethodQuery(const void* self, int property) {
	return ( (const MiqtVirtualQTextBrowser*)(self) )->virtualbase_inputMethodQuery(property);
}

bool QTextBrowser_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_timerEvent(void* self, QTimerEvent* e) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_timerEvent(e);
}

bool QTextBrowser_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_keyReleaseEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_keyReleaseEvent(e);
}

bool QTextBrowser_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_resizeEvent(void* self, QResizeEvent* e) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_resizeEvent(e);
}

bool QTextBrowser_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_mouseDoubleClickEvent(e);
}

bool QTextBrowser_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* e) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_contextMenuEvent(e);
}

bool QTextBrowser_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* e) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_dragEnterEvent(e);
}

bool QTextBrowser_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* e) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_dragLeaveEvent(e);
}

bool QTextBrowser_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* e) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_dragMoveEvent(e);
}

bool QTextBrowser_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_dropEvent(void* self, QDropEvent* e) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_dropEvent(e);
}

bool QTextBrowser_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_focusInEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_focusInEvent(e);
}

bool QTextBrowser_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_showEvent(void* self, QShowEvent* param1) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_showEvent(param1);
}

bool QTextBrowser_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_changeEvent(void* self, QEvent* e) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_changeEvent(e);
}

bool QTextBrowser_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_wheelEvent(void* self, QWheelEvent* e) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_wheelEvent(e);
}

bool QTextBrowser_override_virtual_createMimeDataFromSelection(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__createMimeDataFromSelection = slot;
	return true;
}

QMimeData* QTextBrowser_virtualbase_createMimeDataFromSelection(const void* self) {
	return ( (const MiqtVirtualQTextBrowser*)(self) )->virtualbase_createMimeDataFromSelection();
}

bool QTextBrowser_override_virtual_canInsertFromMimeData(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__canInsertFromMimeData = slot;
	return true;
}

bool QTextBrowser_virtualbase_canInsertFromMimeData(const void* self, QMimeData* source) {
	return ( (const MiqtVirtualQTextBrowser*)(self) )->virtualbase_canInsertFromMimeData(source);
}

bool QTextBrowser_override_virtual_insertFromMimeData(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__insertFromMimeData = slot;
	return true;
}

void QTextBrowser_virtualbase_insertFromMimeData(void* self, QMimeData* source) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_insertFromMimeData(source);
}

bool QTextBrowser_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QTextBrowser_override_virtual_scrollContentsBy(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__scrollContentsBy = slot;
	return true;
}

void QTextBrowser_virtualbase_scrollContentsBy(void* self, int dx, int dy) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_scrollContentsBy(dx, dy);
}

bool QTextBrowser_override_virtual_doSetTextCursor(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__doSetTextCursor = slot;
	return true;
}

void QTextBrowser_virtualbase_doSetTextCursor(void* self, QTextCursor* cursor) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_doSetTextCursor(cursor);
}

bool QTextBrowser_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QTextBrowser_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQTextBrowser*)(self) )->virtualbase_minimumSizeHint();
}

bool QTextBrowser_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QTextBrowser_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQTextBrowser*)(self) )->virtualbase_sizeHint();
}

bool QTextBrowser_override_virtual_setupViewport(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setupViewport = slot;
	return true;
}

void QTextBrowser_virtualbase_setupViewport(void* self, QWidget* viewport) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_setupViewport(viewport);
}

bool QTextBrowser_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QTextBrowser_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_eventFilter(param1, param2);
}

bool QTextBrowser_override_virtual_viewportEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__viewportEvent = slot;
	return true;
}

bool QTextBrowser_virtualbase_viewportEvent(void* self, QEvent* param1) {
	return ( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_viewportEvent(param1);
}

bool QTextBrowser_override_virtual_viewportSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__viewportSizeHint = slot;
	return true;
}

QSize* QTextBrowser_virtualbase_viewportSizeHint(const void* self) {
	return ( (const MiqtVirtualQTextBrowser*)(self) )->virtualbase_viewportSizeHint();
}

bool QTextBrowser_override_virtual_initStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initStyleOption = slot;
	return true;
}

void QTextBrowser_virtualbase_initStyleOption(const void* self, QStyleOptionFrame* option) {
	( (const MiqtVirtualQTextBrowser*)(self) )->virtualbase_initStyleOption(option);
}

bool QTextBrowser_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QTextBrowser_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQTextBrowser*)(self) )->virtualbase_devType();
}

bool QTextBrowser_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QTextBrowser_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_setVisible(visible);
}

bool QTextBrowser_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QTextBrowser_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQTextBrowser*)(self) )->virtualbase_heightForWidth(param1);
}

bool QTextBrowser_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QTextBrowser_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQTextBrowser*)(self) )->virtualbase_hasHeightForWidth();
}

bool QTextBrowser_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QTextBrowser_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQTextBrowser*)(self) )->virtualbase_paintEngine();
}

bool QTextBrowser_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_enterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_enterEvent(event);
}

bool QTextBrowser_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_leaveEvent(event);
}

bool QTextBrowser_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_moveEvent(event);
}

bool QTextBrowser_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_closeEvent(event);
}

bool QTextBrowser_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_tabletEvent(event);
}

bool QTextBrowser_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_actionEvent(event);
}

bool QTextBrowser_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_hideEvent(event);
}

bool QTextBrowser_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QTextBrowser_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QTextBrowser_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QTextBrowser_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQTextBrowser*)(self) )->virtualbase_metric(param1);
}

bool QTextBrowser_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QTextBrowser_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQTextBrowser*)(self) )->virtualbase_initPainter(painter);
}

bool QTextBrowser_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QTextBrowser_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQTextBrowser*)(self) )->virtualbase_redirected(offset);
}

bool QTextBrowser_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QTextBrowser_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQTextBrowser*)(self) )->virtualbase_sharedPainter();
}

bool QTextBrowser_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_childEvent(event);
}

bool QTextBrowser_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QTextBrowser_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_customEvent(event);
}

bool QTextBrowser_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QTextBrowser_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_connectNotify(signal);
}

bool QTextBrowser_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QTextBrowser_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_disconnectNotify(signal);
}

void QTextBrowser_protectedbase_zoomInF(bool* _dynamic_cast_ok, void* self, float range) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->zoomInF(static_cast<float>(range));

}

void QTextBrowser_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));

}

QMargins* QTextBrowser_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QMargins(self_cast->viewportMargins());

}

void QTextBrowser_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->drawFrame(param1);

}

void QTextBrowser_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QTextBrowser_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QTextBrowser_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QTextBrowser_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QTextBrowser_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QTextBrowser_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QTextBrowser_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QTextBrowser_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QTextBrowser_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQTextBrowser* self_cast = dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QTextBrowser_delete(QTextBrowser* self) {
	delete self;
}

