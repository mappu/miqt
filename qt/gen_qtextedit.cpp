#include <QAbstractScrollArea>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QColor>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QFrame>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QList>
#include <QMargins>
#include <QMenu>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMimeData>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPagedPaintDevice>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QRect>
#include <QRegExp>
#include <QRegularExpression>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTextCharFormat>
#include <QTextCursor>
#include <QTextDocument>
#include <QTextEdit>
#define WORKAROUND_INNER_CLASS_DEFINITION_QTextEdit__ExtraSelection
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qtextedit.h>
#include "gen_qtextedit.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QTextEdit_textChanged(intptr_t);
void miqt_exec_callback_QTextEdit_undoAvailable(intptr_t, bool);
void miqt_exec_callback_QTextEdit_redoAvailable(intptr_t, bool);
void miqt_exec_callback_QTextEdit_currentCharFormatChanged(intptr_t, QTextCharFormat*);
void miqt_exec_callback_QTextEdit_copyAvailable(intptr_t, bool);
void miqt_exec_callback_QTextEdit_selectionChanged(intptr_t);
void miqt_exec_callback_QTextEdit_cursorPositionChanged(intptr_t);
QVariant* miqt_exec_callback_QTextEdit_loadResource(QTextEdit*, intptr_t, int, QUrl*);
QVariant* miqt_exec_callback_QTextEdit_inputMethodQuery(const QTextEdit*, intptr_t, int);
bool miqt_exec_callback_QTextEdit_event(QTextEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QTextEdit_timerEvent(QTextEdit*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QTextEdit_keyPressEvent(QTextEdit*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QTextEdit_keyReleaseEvent(QTextEdit*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QTextEdit_resizeEvent(QTextEdit*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QTextEdit_paintEvent(QTextEdit*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QTextEdit_mousePressEvent(QTextEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTextEdit_mouseMoveEvent(QTextEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTextEdit_mouseReleaseEvent(QTextEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTextEdit_mouseDoubleClickEvent(QTextEdit*, intptr_t, QMouseEvent*);
bool miqt_exec_callback_QTextEdit_focusNextPrevChild(QTextEdit*, intptr_t, bool);
void miqt_exec_callback_QTextEdit_contextMenuEvent(QTextEdit*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QTextEdit_dragEnterEvent(QTextEdit*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QTextEdit_dragLeaveEvent(QTextEdit*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QTextEdit_dragMoveEvent(QTextEdit*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QTextEdit_dropEvent(QTextEdit*, intptr_t, QDropEvent*);
void miqt_exec_callback_QTextEdit_focusInEvent(QTextEdit*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QTextEdit_focusOutEvent(QTextEdit*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QTextEdit_showEvent(QTextEdit*, intptr_t, QShowEvent*);
void miqt_exec_callback_QTextEdit_changeEvent(QTextEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QTextEdit_wheelEvent(QTextEdit*, intptr_t, QWheelEvent*);
QMimeData* miqt_exec_callback_QTextEdit_createMimeDataFromSelection(const QTextEdit*, intptr_t);
bool miqt_exec_callback_QTextEdit_canInsertFromMimeData(const QTextEdit*, intptr_t, QMimeData*);
void miqt_exec_callback_QTextEdit_insertFromMimeData(QTextEdit*, intptr_t, QMimeData*);
void miqt_exec_callback_QTextEdit_inputMethodEvent(QTextEdit*, intptr_t, QInputMethodEvent*);
void miqt_exec_callback_QTextEdit_scrollContentsBy(QTextEdit*, intptr_t, int, int);
void miqt_exec_callback_QTextEdit_doSetTextCursor(QTextEdit*, intptr_t, QTextCursor*);
QSize* miqt_exec_callback_QTextEdit_minimumSizeHint(const QTextEdit*, intptr_t);
QSize* miqt_exec_callback_QTextEdit_sizeHint(const QTextEdit*, intptr_t);
void miqt_exec_callback_QTextEdit_setupViewport(QTextEdit*, intptr_t, QWidget*);
bool miqt_exec_callback_QTextEdit_eventFilter(QTextEdit*, intptr_t, QObject*, QEvent*);
bool miqt_exec_callback_QTextEdit_viewportEvent(QTextEdit*, intptr_t, QEvent*);
QSize* miqt_exec_callback_QTextEdit_viewportSizeHint(const QTextEdit*, intptr_t);
int miqt_exec_callback_QTextEdit_devType(const QTextEdit*, intptr_t);
void miqt_exec_callback_QTextEdit_setVisible(QTextEdit*, intptr_t, bool);
int miqt_exec_callback_QTextEdit_heightForWidth(const QTextEdit*, intptr_t, int);
bool miqt_exec_callback_QTextEdit_hasHeightForWidth(const QTextEdit*, intptr_t);
QPaintEngine* miqt_exec_callback_QTextEdit_paintEngine(const QTextEdit*, intptr_t);
void miqt_exec_callback_QTextEdit_enterEvent(QTextEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QTextEdit_leaveEvent(QTextEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QTextEdit_moveEvent(QTextEdit*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QTextEdit_closeEvent(QTextEdit*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QTextEdit_tabletEvent(QTextEdit*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QTextEdit_actionEvent(QTextEdit*, intptr_t, QActionEvent*);
void miqt_exec_callback_QTextEdit_hideEvent(QTextEdit*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QTextEdit_nativeEvent(QTextEdit*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QTextEdit_metric(const QTextEdit*, intptr_t, int);
void miqt_exec_callback_QTextEdit_initPainter(const QTextEdit*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QTextEdit_redirected(const QTextEdit*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QTextEdit_sharedPainter(const QTextEdit*, intptr_t);
void miqt_exec_callback_QTextEdit_childEvent(QTextEdit*, intptr_t, QChildEvent*);
void miqt_exec_callback_QTextEdit_customEvent(QTextEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QTextEdit_connectNotify(QTextEdit*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QTextEdit_disconnectNotify(QTextEdit*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQTextEdit final : public QTextEdit {
public:

	MiqtVirtualQTextEdit(QWidget* parent): QTextEdit(parent) {};
	MiqtVirtualQTextEdit(): QTextEdit() {};
	MiqtVirtualQTextEdit(const QString& text): QTextEdit(text) {};
	MiqtVirtualQTextEdit(const QString& text, QWidget* parent): QTextEdit(text, parent) {};

	virtual ~MiqtVirtualQTextEdit() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__loadResource = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant loadResource(int type, const QUrl& name) override {
		if (handle__loadResource == 0) {
			return QTextEdit::loadResource(type, name);
		}
		
		int sigval1 = type;
		const QUrl& name_ret = name;
		// Cast returned reference into pointer
		QUrl* sigval2 = const_cast<QUrl*>(&name_ret);

		QVariant* callback_return_value = miqt_exec_callback_QTextEdit_loadResource(this, handle__loadResource, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_loadResource(int type, QUrl* name) {

		return new QVariant(QTextEdit::loadResource(static_cast<int>(type), *name));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery property) const override {
		if (handle__inputMethodQuery == 0) {
			return QTextEdit::inputMethodQuery(property);
		}
		
		Qt::InputMethodQuery property_ret = property;
		int sigval1 = static_cast<int>(property_ret);

		QVariant* callback_return_value = miqt_exec_callback_QTextEdit_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int property) const {

		return new QVariant(QTextEdit::inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__event == 0) {
			return QTextEdit::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QTextEdit_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* e) {

		return QTextEdit::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* e) override {
		if (handle__timerEvent == 0) {
			QTextEdit::timerEvent(e);
			return;
		}
		
		QTimerEvent* sigval1 = e;

		miqt_exec_callback_QTextEdit_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* e) {

		QTextEdit::timerEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* e) override {
		if (handle__keyPressEvent == 0) {
			QTextEdit::keyPressEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QTextEdit_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* e) {

		QTextEdit::keyPressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* e) override {
		if (handle__keyReleaseEvent == 0) {
			QTextEdit::keyReleaseEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QTextEdit_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* e) {

		QTextEdit::keyReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* e) override {
		if (handle__resizeEvent == 0) {
			QTextEdit::resizeEvent(e);
			return;
		}
		
		QResizeEvent* sigval1 = e;

		miqt_exec_callback_QTextEdit_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* e) {

		QTextEdit::resizeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* e) override {
		if (handle__paintEvent == 0) {
			QTextEdit::paintEvent(e);
			return;
		}
		
		QPaintEvent* sigval1 = e;

		miqt_exec_callback_QTextEdit_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* e) {

		QTextEdit::paintEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* e) override {
		if (handle__mousePressEvent == 0) {
			QTextEdit::mousePressEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QTextEdit_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* e) {

		QTextEdit::mousePressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* e) override {
		if (handle__mouseMoveEvent == 0) {
			QTextEdit::mouseMoveEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QTextEdit_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* e) {

		QTextEdit::mouseMoveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (handle__mouseReleaseEvent == 0) {
			QTextEdit::mouseReleaseEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QTextEdit_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* e) {

		QTextEdit::mouseReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QTextEdit::mouseDoubleClickEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QTextEdit_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* e) {

		QTextEdit::mouseDoubleClickEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QTextEdit::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QTextEdit_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QTextEdit::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* e) override {
		if (handle__contextMenuEvent == 0) {
			QTextEdit::contextMenuEvent(e);
			return;
		}
		
		QContextMenuEvent* sigval1 = e;

		miqt_exec_callback_QTextEdit_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* e) {

		QTextEdit::contextMenuEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* e) override {
		if (handle__dragEnterEvent == 0) {
			QTextEdit::dragEnterEvent(e);
			return;
		}
		
		QDragEnterEvent* sigval1 = e;

		miqt_exec_callback_QTextEdit_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* e) {

		QTextEdit::dragEnterEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
		if (handle__dragLeaveEvent == 0) {
			QTextEdit::dragLeaveEvent(e);
			return;
		}
		
		QDragLeaveEvent* sigval1 = e;

		miqt_exec_callback_QTextEdit_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* e) {

		QTextEdit::dragLeaveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* e) override {
		if (handle__dragMoveEvent == 0) {
			QTextEdit::dragMoveEvent(e);
			return;
		}
		
		QDragMoveEvent* sigval1 = e;

		miqt_exec_callback_QTextEdit_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* e) {

		QTextEdit::dragMoveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* e) override {
		if (handle__dropEvent == 0) {
			QTextEdit::dropEvent(e);
			return;
		}
		
		QDropEvent* sigval1 = e;

		miqt_exec_callback_QTextEdit_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* e) {

		QTextEdit::dropEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* e) override {
		if (handle__focusInEvent == 0) {
			QTextEdit::focusInEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QTextEdit_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* e) {

		QTextEdit::focusInEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* e) override {
		if (handle__focusOutEvent == 0) {
			QTextEdit::focusOutEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QTextEdit_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* e) {

		QTextEdit::focusOutEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (handle__showEvent == 0) {
			QTextEdit::showEvent(param1);
			return;
		}
		
		QShowEvent* sigval1 = param1;

		miqt_exec_callback_QTextEdit_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* param1) {

		QTextEdit::showEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (handle__changeEvent == 0) {
			QTextEdit::changeEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QTextEdit_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* e) {

		QTextEdit::changeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* e) override {
		if (handle__wheelEvent == 0) {
			QTextEdit::wheelEvent(e);
			return;
		}
		
		QWheelEvent* sigval1 = e;

		miqt_exec_callback_QTextEdit_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* e) {

		QTextEdit::wheelEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__createMimeDataFromSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual QMimeData* createMimeDataFromSelection() const override {
		if (handle__createMimeDataFromSelection == 0) {
			return QTextEdit::createMimeDataFromSelection();
		}
		

		QMimeData* callback_return_value = miqt_exec_callback_QTextEdit_createMimeDataFromSelection(this, handle__createMimeDataFromSelection);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QMimeData* virtualbase_createMimeDataFromSelection() const {

		return QTextEdit::createMimeDataFromSelection();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canInsertFromMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canInsertFromMimeData(const QMimeData* source) const override {
		if (handle__canInsertFromMimeData == 0) {
			return QTextEdit::canInsertFromMimeData(source);
		}
		
		QMimeData* sigval1 = (QMimeData*) source;

		bool callback_return_value = miqt_exec_callback_QTextEdit_canInsertFromMimeData(this, handle__canInsertFromMimeData, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_canInsertFromMimeData(QMimeData* source) const {

		return QTextEdit::canInsertFromMimeData(source);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__insertFromMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual void insertFromMimeData(const QMimeData* source) override {
		if (handle__insertFromMimeData == 0) {
			QTextEdit::insertFromMimeData(source);
			return;
		}
		
		QMimeData* sigval1 = (QMimeData*) source;

		miqt_exec_callback_QTextEdit_insertFromMimeData(this, handle__insertFromMimeData, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_insertFromMimeData(QMimeData* source) {

		QTextEdit::insertFromMimeData(source);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QTextEdit::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QTextEdit_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QTextEdit::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (handle__scrollContentsBy == 0) {
			QTextEdit::scrollContentsBy(dx, dy);
			return;
		}
		
		int sigval1 = dx;
		int sigval2 = dy;

		miqt_exec_callback_QTextEdit_scrollContentsBy(this, handle__scrollContentsBy, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_scrollContentsBy(int dx, int dy) {

		QTextEdit::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__doSetTextCursor = 0;

	// Subclass to allow providing a Go implementation
	virtual void doSetTextCursor(const QTextCursor& cursor) override {
		if (handle__doSetTextCursor == 0) {
			QTextEdit::doSetTextCursor(cursor);
			return;
		}
		
		const QTextCursor& cursor_ret = cursor;
		// Cast returned reference into pointer
		QTextCursor* sigval1 = const_cast<QTextCursor*>(&cursor_ret);

		miqt_exec_callback_QTextEdit_doSetTextCursor(this, handle__doSetTextCursor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_doSetTextCursor(QTextCursor* cursor) {

		QTextEdit::doSetTextCursor(*cursor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QTextEdit::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QTextEdit_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QTextEdit::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QTextEdit::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QTextEdit_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QTextEdit::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setupViewport = 0;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (handle__setupViewport == 0) {
			QTextEdit::setupViewport(viewport);
			return;
		}
		
		QWidget* sigval1 = viewport;

		miqt_exec_callback_QTextEdit_setupViewport(this, handle__setupViewport, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setupViewport(QWidget* viewport) {

		QTextEdit::setupViewport(viewport);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__eventFilter == 0) {
			return QTextEdit::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QTextEdit_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* param1, QEvent* param2) {

		return QTextEdit::eventFilter(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewportEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* param1) override {
		if (handle__viewportEvent == 0) {
			return QTextEdit::viewportEvent(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QTextEdit_viewportEvent(this, handle__viewportEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_viewportEvent(QEvent* param1) {

		return QTextEdit::viewportEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewportSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (handle__viewportSizeHint == 0) {
			return QTextEdit::viewportSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QTextEdit_viewportSizeHint(this, handle__viewportSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_viewportSizeHint() const {

		return new QSize(QTextEdit::viewportSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QTextEdit::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QTextEdit_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QTextEdit::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QTextEdit::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QTextEdit_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QTextEdit::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QTextEdit::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QTextEdit_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QTextEdit::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QTextEdit::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QTextEdit_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QTextEdit::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QTextEdit::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QTextEdit_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QTextEdit::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QTextEdit::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTextEdit_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEvent* event) {

		QTextEdit::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QTextEdit::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTextEdit_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QTextEdit::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QTextEdit::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QTextEdit_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QTextEdit::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QTextEdit::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QTextEdit_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QTextEdit::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QTextEdit::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QTextEdit_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QTextEdit::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QTextEdit::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QTextEdit_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QTextEdit::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QTextEdit::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QTextEdit_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QTextEdit::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QTextEdit::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QTextEdit_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QTextEdit::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QTextEdit::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QTextEdit_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QTextEdit::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QTextEdit::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QTextEdit_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QTextEdit::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QTextEdit::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QTextEdit_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QTextEdit::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QTextEdit::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QTextEdit_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QTextEdit::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QTextEdit::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QTextEdit_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QTextEdit::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QTextEdit::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTextEdit_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QTextEdit::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QTextEdit::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTextEdit_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QTextEdit::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QTextEdit::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTextEdit_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QTextEdit::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QTextEdit_protectedbase_zoomInF(bool* _dynamic_cast_ok, void* self, float range);
	friend void QTextEdit_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom);
	friend QMargins* QTextEdit_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self);
	friend void QTextEdit_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
	friend void QTextEdit_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option);
	friend void QTextEdit_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QTextEdit_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QTextEdit_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QTextEdit_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QTextEdit_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QTextEdit_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QTextEdit_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QTextEdit_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QTextEdit_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QTextEdit* QTextEdit_new(QWidget* parent) {
	return new MiqtVirtualQTextEdit(parent);
}

QTextEdit* QTextEdit_new2() {
	return new MiqtVirtualQTextEdit();
}

QTextEdit* QTextEdit_new3(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQTextEdit(text_QString);
}

QTextEdit* QTextEdit_new4(struct miqt_string text, QWidget* parent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQTextEdit(text_QString, parent);
}

void QTextEdit_virtbase(QTextEdit* src, QAbstractScrollArea** outptr_QAbstractScrollArea) {
	*outptr_QAbstractScrollArea = static_cast<QAbstractScrollArea*>(src);
}

QMetaObject* QTextEdit_metaObject(const QTextEdit* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTextEdit_metacast(QTextEdit* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTextEdit_tr(const char* s) {
	QString _ret = QTextEdit::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextEdit_trUtf8(const char* s) {
	QString _ret = QTextEdit::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextEdit_setDocument(QTextEdit* self, QTextDocument* document) {
	self->setDocument(document);
}

QTextDocument* QTextEdit_document(const QTextEdit* self) {
	return self->document();
}

void QTextEdit_setPlaceholderText(QTextEdit* self, struct miqt_string placeholderText) {
	QString placeholderText_QString = QString::fromUtf8(placeholderText.data, placeholderText.len);
	self->setPlaceholderText(placeholderText_QString);
}

struct miqt_string QTextEdit_placeholderText(const QTextEdit* self) {
	QString _ret = self->placeholderText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextEdit_setTextCursor(QTextEdit* self, QTextCursor* cursor) {
	self->setTextCursor(*cursor);
}

QTextCursor* QTextEdit_textCursor(const QTextEdit* self) {
	return new QTextCursor(self->textCursor());
}

bool QTextEdit_isReadOnly(const QTextEdit* self) {
	return self->isReadOnly();
}

void QTextEdit_setReadOnly(QTextEdit* self, bool ro) {
	self->setReadOnly(ro);
}

void QTextEdit_setTextInteractionFlags(QTextEdit* self, int flags) {
	self->setTextInteractionFlags(static_cast<Qt::TextInteractionFlags>(flags));
}

int QTextEdit_textInteractionFlags(const QTextEdit* self) {
	Qt::TextInteractionFlags _ret = self->textInteractionFlags();
	return static_cast<int>(_ret);
}

double QTextEdit_fontPointSize(const QTextEdit* self) {
	qreal _ret = self->fontPointSize();
	return static_cast<double>(_ret);
}

struct miqt_string QTextEdit_fontFamily(const QTextEdit* self) {
	QString _ret = self->fontFamily();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QTextEdit_fontWeight(const QTextEdit* self) {
	return self->fontWeight();
}

bool QTextEdit_fontUnderline(const QTextEdit* self) {
	return self->fontUnderline();
}

bool QTextEdit_fontItalic(const QTextEdit* self) {
	return self->fontItalic();
}

QColor* QTextEdit_textColor(const QTextEdit* self) {
	return new QColor(self->textColor());
}

QColor* QTextEdit_textBackgroundColor(const QTextEdit* self) {
	return new QColor(self->textBackgroundColor());
}

QFont* QTextEdit_currentFont(const QTextEdit* self) {
	return new QFont(self->currentFont());
}

int QTextEdit_alignment(const QTextEdit* self) {
	Qt::Alignment _ret = self->alignment();
	return static_cast<int>(_ret);
}

void QTextEdit_mergeCurrentCharFormat(QTextEdit* self, QTextCharFormat* modifier) {
	self->mergeCurrentCharFormat(*modifier);
}

void QTextEdit_setCurrentCharFormat(QTextEdit* self, QTextCharFormat* format) {
	self->setCurrentCharFormat(*format);
}

QTextCharFormat* QTextEdit_currentCharFormat(const QTextEdit* self) {
	return new QTextCharFormat(self->currentCharFormat());
}

int QTextEdit_autoFormatting(const QTextEdit* self) {
	QTextEdit::AutoFormatting _ret = self->autoFormatting();
	return static_cast<int>(_ret);
}

void QTextEdit_setAutoFormatting(QTextEdit* self, int features) {
	self->setAutoFormatting(static_cast<QTextEdit::AutoFormatting>(features));
}

bool QTextEdit_tabChangesFocus(const QTextEdit* self) {
	return self->tabChangesFocus();
}

void QTextEdit_setTabChangesFocus(QTextEdit* self, bool b) {
	self->setTabChangesFocus(b);
}

void QTextEdit_setDocumentTitle(QTextEdit* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	self->setDocumentTitle(title_QString);
}

struct miqt_string QTextEdit_documentTitle(const QTextEdit* self) {
	QString _ret = self->documentTitle();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTextEdit_isUndoRedoEnabled(const QTextEdit* self) {
	return self->isUndoRedoEnabled();
}

void QTextEdit_setUndoRedoEnabled(QTextEdit* self, bool enable) {
	self->setUndoRedoEnabled(enable);
}

int QTextEdit_lineWrapMode(const QTextEdit* self) {
	QTextEdit::LineWrapMode _ret = self->lineWrapMode();
	return static_cast<int>(_ret);
}

void QTextEdit_setLineWrapMode(QTextEdit* self, int mode) {
	self->setLineWrapMode(static_cast<QTextEdit::LineWrapMode>(mode));
}

int QTextEdit_lineWrapColumnOrWidth(const QTextEdit* self) {
	return self->lineWrapColumnOrWidth();
}

void QTextEdit_setLineWrapColumnOrWidth(QTextEdit* self, int w) {
	self->setLineWrapColumnOrWidth(static_cast<int>(w));
}

int QTextEdit_wordWrapMode(const QTextEdit* self) {
	QTextOption::WrapMode _ret = self->wordWrapMode();
	return static_cast<int>(_ret);
}

void QTextEdit_setWordWrapMode(QTextEdit* self, int policy) {
	self->setWordWrapMode(static_cast<QTextOption::WrapMode>(policy));
}

bool QTextEdit_find(QTextEdit* self, struct miqt_string exp) {
	QString exp_QString = QString::fromUtf8(exp.data, exp.len);
	return self->find(exp_QString);
}

bool QTextEdit_findWithExp(QTextEdit* self, QRegExp* exp) {
	return self->find(*exp);
}

bool QTextEdit_find2(QTextEdit* self, QRegularExpression* exp) {
	return self->find(*exp);
}

struct miqt_string QTextEdit_toPlainText(const QTextEdit* self) {
	QString _ret = self->toPlainText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextEdit_toHtml(const QTextEdit* self) {
	QString _ret = self->toHtml();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextEdit_toMarkdown(const QTextEdit* self) {
	QString _ret = self->toMarkdown();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextEdit_ensureCursorVisible(QTextEdit* self) {
	self->ensureCursorVisible();
}

QVariant* QTextEdit_loadResource(QTextEdit* self, int type, QUrl* name) {
	return new QVariant(self->loadResource(static_cast<int>(type), *name));
}

QMenu* QTextEdit_createStandardContextMenu(QTextEdit* self) {
	return self->createStandardContextMenu();
}

QMenu* QTextEdit_createStandardContextMenuWithPosition(QTextEdit* self, QPoint* position) {
	return self->createStandardContextMenu(*position);
}

QTextCursor* QTextEdit_cursorForPosition(const QTextEdit* self, QPoint* pos) {
	return new QTextCursor(self->cursorForPosition(*pos));
}

QRect* QTextEdit_cursorRect(const QTextEdit* self, QTextCursor* cursor) {
	return new QRect(self->cursorRect(*cursor));
}

QRect* QTextEdit_cursorRect2(const QTextEdit* self) {
	return new QRect(self->cursorRect());
}

struct miqt_string QTextEdit_anchorAt(const QTextEdit* self, QPoint* pos) {
	QString _ret = self->anchorAt(*pos);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTextEdit_overwriteMode(const QTextEdit* self) {
	return self->overwriteMode();
}

void QTextEdit_setOverwriteMode(QTextEdit* self, bool overwrite) {
	self->setOverwriteMode(overwrite);
}

int QTextEdit_tabStopWidth(const QTextEdit* self) {
	return self->tabStopWidth();
}

void QTextEdit_setTabStopWidth(QTextEdit* self, int width) {
	self->setTabStopWidth(static_cast<int>(width));
}

double QTextEdit_tabStopDistance(const QTextEdit* self) {
	qreal _ret = self->tabStopDistance();
	return static_cast<double>(_ret);
}

void QTextEdit_setTabStopDistance(QTextEdit* self, double distance) {
	self->setTabStopDistance(static_cast<qreal>(distance));
}

int QTextEdit_cursorWidth(const QTextEdit* self) {
	return self->cursorWidth();
}

void QTextEdit_setCursorWidth(QTextEdit* self, int width) {
	self->setCursorWidth(static_cast<int>(width));
}

bool QTextEdit_acceptRichText(const QTextEdit* self) {
	return self->acceptRichText();
}

void QTextEdit_setAcceptRichText(QTextEdit* self, bool accept) {
	self->setAcceptRichText(accept);
}

void QTextEdit_setExtraSelections(QTextEdit* self, struct miqt_array /* of QTextEdit__ExtraSelection* */  selections) {
	QList<QTextEdit::ExtraSelection> selections_QList;
	selections_QList.reserve(selections.len);
	QTextEdit__ExtraSelection** selections_arr = static_cast<QTextEdit__ExtraSelection**>(selections.data);
	for(size_t i = 0; i < selections.len; ++i) {
		selections_QList.push_back(*(selections_arr[i]));
	}
	self->setExtraSelections(selections_QList);
}

struct miqt_array /* of QTextEdit__ExtraSelection* */  QTextEdit_extraSelections(const QTextEdit* self) {
	QList<QTextEdit::ExtraSelection> _ret = self->extraSelections();
	// Convert QList<> from C++ memory to manually-managed C memory
	QTextEdit__ExtraSelection** _arr = static_cast<QTextEdit__ExtraSelection**>(malloc(sizeof(QTextEdit__ExtraSelection*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QTextEdit::ExtraSelection(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QTextEdit_moveCursor(QTextEdit* self, int operation) {
	self->moveCursor(static_cast<QTextCursor::MoveOperation>(operation));
}

bool QTextEdit_canPaste(const QTextEdit* self) {
	return self->canPaste();
}

void QTextEdit_print(const QTextEdit* self, QPagedPaintDevice* printer) {
	self->print(printer);
}

QVariant* QTextEdit_inputMethodQuery(const QTextEdit* self, int property) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
}

QVariant* QTextEdit_inputMethodQuery2(const QTextEdit* self, int query, QVariant* argument) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query), *argument));
}

void QTextEdit_setFontPointSize(QTextEdit* self, double s) {
	self->setFontPointSize(static_cast<qreal>(s));
}

void QTextEdit_setFontFamily(QTextEdit* self, struct miqt_string fontFamily) {
	QString fontFamily_QString = QString::fromUtf8(fontFamily.data, fontFamily.len);
	self->setFontFamily(fontFamily_QString);
}

void QTextEdit_setFontWeight(QTextEdit* self, int w) {
	self->setFontWeight(static_cast<int>(w));
}

void QTextEdit_setFontUnderline(QTextEdit* self, bool b) {
	self->setFontUnderline(b);
}

void QTextEdit_setFontItalic(QTextEdit* self, bool b) {
	self->setFontItalic(b);
}

void QTextEdit_setTextColor(QTextEdit* self, QColor* c) {
	self->setTextColor(*c);
}

void QTextEdit_setTextBackgroundColor(QTextEdit* self, QColor* c) {
	self->setTextBackgroundColor(*c);
}

void QTextEdit_setCurrentFont(QTextEdit* self, QFont* f) {
	self->setCurrentFont(*f);
}

void QTextEdit_setAlignment(QTextEdit* self, int a) {
	self->setAlignment(static_cast<Qt::Alignment>(a));
}

void QTextEdit_setPlainText(QTextEdit* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setPlainText(text_QString);
}

void QTextEdit_setHtml(QTextEdit* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setHtml(text_QString);
}

void QTextEdit_setMarkdown(QTextEdit* self, struct miqt_string markdown) {
	QString markdown_QString = QString::fromUtf8(markdown.data, markdown.len);
	self->setMarkdown(markdown_QString);
}

void QTextEdit_setText(QTextEdit* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(text_QString);
}

void QTextEdit_cut(QTextEdit* self) {
	self->cut();
}

void QTextEdit_copy(QTextEdit* self) {
	self->copy();
}

void QTextEdit_paste(QTextEdit* self) {
	self->paste();
}

void QTextEdit_undo(QTextEdit* self) {
	self->undo();
}

void QTextEdit_redo(QTextEdit* self) {
	self->redo();
}

void QTextEdit_clear(QTextEdit* self) {
	self->clear();
}

void QTextEdit_selectAll(QTextEdit* self) {
	self->selectAll();
}

void QTextEdit_insertPlainText(QTextEdit* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->insertPlainText(text_QString);
}

void QTextEdit_insertHtml(QTextEdit* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->insertHtml(text_QString);
}

void QTextEdit_append(QTextEdit* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->append(text_QString);
}

void QTextEdit_scrollToAnchor(QTextEdit* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->scrollToAnchor(name_QString);
}

void QTextEdit_zoomIn(QTextEdit* self) {
	self->zoomIn();
}

void QTextEdit_zoomOut(QTextEdit* self) {
	self->zoomOut();
}

void QTextEdit_textChanged(QTextEdit* self) {
	self->textChanged();
}

void QTextEdit_connect_textChanged(QTextEdit* self, intptr_t slot) {
	MiqtVirtualQTextEdit::connect(self, static_cast<void (QTextEdit::*)()>(&QTextEdit::textChanged), self, [=]() {
		miqt_exec_callback_QTextEdit_textChanged(slot);
	});
}

void QTextEdit_undoAvailable(QTextEdit* self, bool b) {
	self->undoAvailable(b);
}

void QTextEdit_connect_undoAvailable(QTextEdit* self, intptr_t slot) {
	MiqtVirtualQTextEdit::connect(self, static_cast<void (QTextEdit::*)(bool)>(&QTextEdit::undoAvailable), self, [=](bool b) {
		bool sigval1 = b;
		miqt_exec_callback_QTextEdit_undoAvailable(slot, sigval1);
	});
}

void QTextEdit_redoAvailable(QTextEdit* self, bool b) {
	self->redoAvailable(b);
}

void QTextEdit_connect_redoAvailable(QTextEdit* self, intptr_t slot) {
	MiqtVirtualQTextEdit::connect(self, static_cast<void (QTextEdit::*)(bool)>(&QTextEdit::redoAvailable), self, [=](bool b) {
		bool sigval1 = b;
		miqt_exec_callback_QTextEdit_redoAvailable(slot, sigval1);
	});
}

void QTextEdit_currentCharFormatChanged(QTextEdit* self, QTextCharFormat* format) {
	self->currentCharFormatChanged(*format);
}

void QTextEdit_connect_currentCharFormatChanged(QTextEdit* self, intptr_t slot) {
	MiqtVirtualQTextEdit::connect(self, static_cast<void (QTextEdit::*)(const QTextCharFormat&)>(&QTextEdit::currentCharFormatChanged), self, [=](const QTextCharFormat& format) {
		const QTextCharFormat& format_ret = format;
		// Cast returned reference into pointer
		QTextCharFormat* sigval1 = const_cast<QTextCharFormat*>(&format_ret);
		miqt_exec_callback_QTextEdit_currentCharFormatChanged(slot, sigval1);
	});
}

void QTextEdit_copyAvailable(QTextEdit* self, bool b) {
	self->copyAvailable(b);
}

void QTextEdit_connect_copyAvailable(QTextEdit* self, intptr_t slot) {
	MiqtVirtualQTextEdit::connect(self, static_cast<void (QTextEdit::*)(bool)>(&QTextEdit::copyAvailable), self, [=](bool b) {
		bool sigval1 = b;
		miqt_exec_callback_QTextEdit_copyAvailable(slot, sigval1);
	});
}

void QTextEdit_selectionChanged(QTextEdit* self) {
	self->selectionChanged();
}

void QTextEdit_connect_selectionChanged(QTextEdit* self, intptr_t slot) {
	MiqtVirtualQTextEdit::connect(self, static_cast<void (QTextEdit::*)()>(&QTextEdit::selectionChanged), self, [=]() {
		miqt_exec_callback_QTextEdit_selectionChanged(slot);
	});
}

void QTextEdit_cursorPositionChanged(QTextEdit* self) {
	self->cursorPositionChanged();
}

void QTextEdit_connect_cursorPositionChanged(QTextEdit* self, intptr_t slot) {
	MiqtVirtualQTextEdit::connect(self, static_cast<void (QTextEdit::*)()>(&QTextEdit::cursorPositionChanged), self, [=]() {
		miqt_exec_callback_QTextEdit_cursorPositionChanged(slot);
	});
}

struct miqt_string QTextEdit_tr2(const char* s, const char* c) {
	QString _ret = QTextEdit::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextEdit_tr3(const char* s, const char* c, int n) {
	QString _ret = QTextEdit::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextEdit_trUtf82(const char* s, const char* c) {
	QString _ret = QTextEdit::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextEdit_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QTextEdit::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTextEdit_find22(QTextEdit* self, struct miqt_string exp, int options) {
	QString exp_QString = QString::fromUtf8(exp.data, exp.len);
	return self->find(exp_QString, static_cast<QTextDocument::FindFlags>(options));
}

bool QTextEdit_find23(QTextEdit* self, QRegExp* exp, int options) {
	return self->find(*exp, static_cast<QTextDocument::FindFlags>(options));
}

bool QTextEdit_find24(QTextEdit* self, QRegularExpression* exp, int options) {
	return self->find(*exp, static_cast<QTextDocument::FindFlags>(options));
}

struct miqt_string QTextEdit_toMarkdown1(const QTextEdit* self, int features) {
	QString _ret = self->toMarkdown(static_cast<QTextDocument::MarkdownFeatures>(features));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextEdit_moveCursor2(QTextEdit* self, int operation, int mode) {
	self->moveCursor(static_cast<QTextCursor::MoveOperation>(operation), static_cast<QTextCursor::MoveMode>(mode));
}

void QTextEdit_zoomIn1(QTextEdit* self, int range) {
	self->zoomIn(static_cast<int>(range));
}

void QTextEdit_zoomOut1(QTextEdit* self, int range) {
	self->zoomOut(static_cast<int>(range));
}

bool QTextEdit_override_virtual_loadResource(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__loadResource = slot;
	return true;
}

QVariant* QTextEdit_virtualbase_loadResource(void* self, int type, QUrl* name) {
	return ( (MiqtVirtualQTextEdit*)(self) )->virtualbase_loadResource(type, name);
}

bool QTextEdit_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QTextEdit_virtualbase_inputMethodQuery(const void* self, int property) {
	return ( (const MiqtVirtualQTextEdit*)(self) )->virtualbase_inputMethodQuery(property);
}

bool QTextEdit_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QTextEdit_virtualbase_event(void* self, QEvent* e) {
	return ( (MiqtVirtualQTextEdit*)(self) )->virtualbase_event(e);
}

bool QTextEdit_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QTextEdit_virtualbase_timerEvent(void* self, QTimerEvent* e) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_timerEvent(e);
}

bool QTextEdit_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QTextEdit_virtualbase_keyPressEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_keyPressEvent(e);
}

bool QTextEdit_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QTextEdit_virtualbase_keyReleaseEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_keyReleaseEvent(e);
}

bool QTextEdit_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QTextEdit_virtualbase_resizeEvent(void* self, QResizeEvent* e) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_resizeEvent(e);
}

bool QTextEdit_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QTextEdit_virtualbase_paintEvent(void* self, QPaintEvent* e) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_paintEvent(e);
}

bool QTextEdit_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QTextEdit_virtualbase_mousePressEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_mousePressEvent(e);
}

bool QTextEdit_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QTextEdit_virtualbase_mouseMoveEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_mouseMoveEvent(e);
}

bool QTextEdit_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QTextEdit_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_mouseReleaseEvent(e);
}

bool QTextEdit_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QTextEdit_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_mouseDoubleClickEvent(e);
}

bool QTextEdit_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QTextEdit_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQTextEdit*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QTextEdit_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QTextEdit_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* e) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_contextMenuEvent(e);
}

bool QTextEdit_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QTextEdit_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* e) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_dragEnterEvent(e);
}

bool QTextEdit_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QTextEdit_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* e) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_dragLeaveEvent(e);
}

bool QTextEdit_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QTextEdit_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* e) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_dragMoveEvent(e);
}

bool QTextEdit_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QTextEdit_virtualbase_dropEvent(void* self, QDropEvent* e) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_dropEvent(e);
}

bool QTextEdit_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QTextEdit_virtualbase_focusInEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_focusInEvent(e);
}

bool QTextEdit_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QTextEdit_virtualbase_focusOutEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_focusOutEvent(e);
}

bool QTextEdit_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QTextEdit_virtualbase_showEvent(void* self, QShowEvent* param1) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_showEvent(param1);
}

bool QTextEdit_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QTextEdit_virtualbase_changeEvent(void* self, QEvent* e) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_changeEvent(e);
}

bool QTextEdit_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QTextEdit_virtualbase_wheelEvent(void* self, QWheelEvent* e) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_wheelEvent(e);
}

bool QTextEdit_override_virtual_createMimeDataFromSelection(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__createMimeDataFromSelection = slot;
	return true;
}

QMimeData* QTextEdit_virtualbase_createMimeDataFromSelection(const void* self) {
	return ( (const MiqtVirtualQTextEdit*)(self) )->virtualbase_createMimeDataFromSelection();
}

bool QTextEdit_override_virtual_canInsertFromMimeData(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__canInsertFromMimeData = slot;
	return true;
}

bool QTextEdit_virtualbase_canInsertFromMimeData(const void* self, QMimeData* source) {
	return ( (const MiqtVirtualQTextEdit*)(self) )->virtualbase_canInsertFromMimeData(source);
}

bool QTextEdit_override_virtual_insertFromMimeData(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__insertFromMimeData = slot;
	return true;
}

void QTextEdit_virtualbase_insertFromMimeData(void* self, QMimeData* source) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_insertFromMimeData(source);
}

bool QTextEdit_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QTextEdit_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QTextEdit_override_virtual_scrollContentsBy(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__scrollContentsBy = slot;
	return true;
}

void QTextEdit_virtualbase_scrollContentsBy(void* self, int dx, int dy) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_scrollContentsBy(dx, dy);
}

bool QTextEdit_override_virtual_doSetTextCursor(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__doSetTextCursor = slot;
	return true;
}

void QTextEdit_virtualbase_doSetTextCursor(void* self, QTextCursor* cursor) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_doSetTextCursor(cursor);
}

bool QTextEdit_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QTextEdit_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQTextEdit*)(self) )->virtualbase_minimumSizeHint();
}

bool QTextEdit_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QTextEdit_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQTextEdit*)(self) )->virtualbase_sizeHint();
}

bool QTextEdit_override_virtual_setupViewport(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setupViewport = slot;
	return true;
}

void QTextEdit_virtualbase_setupViewport(void* self, QWidget* viewport) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_setupViewport(viewport);
}

bool QTextEdit_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QTextEdit_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQTextEdit*)(self) )->virtualbase_eventFilter(param1, param2);
}

bool QTextEdit_override_virtual_viewportEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__viewportEvent = slot;
	return true;
}

bool QTextEdit_virtualbase_viewportEvent(void* self, QEvent* param1) {
	return ( (MiqtVirtualQTextEdit*)(self) )->virtualbase_viewportEvent(param1);
}

bool QTextEdit_override_virtual_viewportSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__viewportSizeHint = slot;
	return true;
}

QSize* QTextEdit_virtualbase_viewportSizeHint(const void* self) {
	return ( (const MiqtVirtualQTextEdit*)(self) )->virtualbase_viewportSizeHint();
}

bool QTextEdit_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QTextEdit_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQTextEdit*)(self) )->virtualbase_devType();
}

bool QTextEdit_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QTextEdit_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_setVisible(visible);
}

bool QTextEdit_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QTextEdit_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQTextEdit*)(self) )->virtualbase_heightForWidth(param1);
}

bool QTextEdit_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QTextEdit_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQTextEdit*)(self) )->virtualbase_hasHeightForWidth();
}

bool QTextEdit_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QTextEdit_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQTextEdit*)(self) )->virtualbase_paintEngine();
}

bool QTextEdit_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QTextEdit_virtualbase_enterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_enterEvent(event);
}

bool QTextEdit_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QTextEdit_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_leaveEvent(event);
}

bool QTextEdit_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QTextEdit_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_moveEvent(event);
}

bool QTextEdit_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QTextEdit_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_closeEvent(event);
}

bool QTextEdit_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QTextEdit_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_tabletEvent(event);
}

bool QTextEdit_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QTextEdit_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_actionEvent(event);
}

bool QTextEdit_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QTextEdit_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_hideEvent(event);
}

bool QTextEdit_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QTextEdit_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQTextEdit*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QTextEdit_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QTextEdit_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQTextEdit*)(self) )->virtualbase_metric(param1);
}

bool QTextEdit_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QTextEdit_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQTextEdit*)(self) )->virtualbase_initPainter(painter);
}

bool QTextEdit_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QTextEdit_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQTextEdit*)(self) )->virtualbase_redirected(offset);
}

bool QTextEdit_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QTextEdit_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQTextEdit*)(self) )->virtualbase_sharedPainter();
}

bool QTextEdit_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QTextEdit_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_childEvent(event);
}

bool QTextEdit_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QTextEdit_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_customEvent(event);
}

bool QTextEdit_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QTextEdit_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_connectNotify(signal);
}

bool QTextEdit_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QTextEdit_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_disconnectNotify(signal);
}

void QTextEdit_protectedbase_zoomInF(bool* _dynamic_cast_ok, void* self, float range) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->zoomInF(static_cast<float>(range));

}

void QTextEdit_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));

}

QMargins* QTextEdit_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QMargins(self_cast->viewportMargins());

}

void QTextEdit_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->drawFrame(param1);

}

void QTextEdit_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->initStyleOption(option);

}

void QTextEdit_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QTextEdit_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QTextEdit_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QTextEdit_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QTextEdit_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QTextEdit_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QTextEdit_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QTextEdit_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QTextEdit_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQTextEdit* self_cast = dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QTextEdit_delete(QTextEdit* self) {
	delete self;
}

QTextEdit__ExtraSelection* QTextEdit__ExtraSelection_new(QTextEdit__ExtraSelection* param1) {
	return new QTextEdit::ExtraSelection(*param1);
}

void QTextEdit__ExtraSelection_operatorAssign(QTextEdit__ExtraSelection* self, QTextEdit__ExtraSelection* param1) {
	self->operator=(*param1);
}

void QTextEdit__ExtraSelection_delete(QTextEdit__ExtraSelection* self) {
	delete self;
}

