#include <QAbstractScrollArea>
#include <QAbstractTextDocumentLayout>
#define WORKAROUND_INNER_CLASS_DEFINITION_QAbstractTextDocumentLayout__PaintContext
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
#include <QPlainTextDocumentLayout>
#include <QPlainTextEdit>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRectF>
#include <QRegularExpression>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTextBlock>
#include <QTextCharFormat>
#include <QTextCursor>
#include <QTextDocument>
#define WORKAROUND_INNER_CLASS_DEFINITION_QTextEdit__ExtraSelection
#include <QTextFormat>
#include <QTextFrame>
#include <QTextInlineObject>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qplaintextedit.h>
#include "gen_qplaintextedit.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QPlainTextEdit_textChanged(intptr_t);
void miqt_exec_callback_QPlainTextEdit_undoAvailable(intptr_t, bool);
void miqt_exec_callback_QPlainTextEdit_redoAvailable(intptr_t, bool);
void miqt_exec_callback_QPlainTextEdit_copyAvailable(intptr_t, bool);
void miqt_exec_callback_QPlainTextEdit_selectionChanged(intptr_t);
void miqt_exec_callback_QPlainTextEdit_cursorPositionChanged(intptr_t);
void miqt_exec_callback_QPlainTextEdit_updateRequest(intptr_t, QRect*, int);
void miqt_exec_callback_QPlainTextEdit_blockCountChanged(intptr_t, int);
void miqt_exec_callback_QPlainTextEdit_modificationChanged(intptr_t, bool);
QVariant* miqt_exec_callback_QPlainTextEdit_loadResource(QPlainTextEdit*, intptr_t, int, QUrl*);
QVariant* miqt_exec_callback_QPlainTextEdit_inputMethodQuery(const QPlainTextEdit*, intptr_t, int);
bool miqt_exec_callback_QPlainTextEdit_event(QPlainTextEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QPlainTextEdit_timerEvent(QPlainTextEdit*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QPlainTextEdit_keyPressEvent(QPlainTextEdit*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QPlainTextEdit_keyReleaseEvent(QPlainTextEdit*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QPlainTextEdit_resizeEvent(QPlainTextEdit*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QPlainTextEdit_paintEvent(QPlainTextEdit*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QPlainTextEdit_mousePressEvent(QPlainTextEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPlainTextEdit_mouseMoveEvent(QPlainTextEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPlainTextEdit_mouseReleaseEvent(QPlainTextEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPlainTextEdit_mouseDoubleClickEvent(QPlainTextEdit*, intptr_t, QMouseEvent*);
bool miqt_exec_callback_QPlainTextEdit_focusNextPrevChild(QPlainTextEdit*, intptr_t, bool);
void miqt_exec_callback_QPlainTextEdit_contextMenuEvent(QPlainTextEdit*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QPlainTextEdit_dragEnterEvent(QPlainTextEdit*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QPlainTextEdit_dragLeaveEvent(QPlainTextEdit*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QPlainTextEdit_dragMoveEvent(QPlainTextEdit*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QPlainTextEdit_dropEvent(QPlainTextEdit*, intptr_t, QDropEvent*);
void miqt_exec_callback_QPlainTextEdit_focusInEvent(QPlainTextEdit*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QPlainTextEdit_focusOutEvent(QPlainTextEdit*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QPlainTextEdit_showEvent(QPlainTextEdit*, intptr_t, QShowEvent*);
void miqt_exec_callback_QPlainTextEdit_changeEvent(QPlainTextEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QPlainTextEdit_wheelEvent(QPlainTextEdit*, intptr_t, QWheelEvent*);
QMimeData* miqt_exec_callback_QPlainTextEdit_createMimeDataFromSelection(const QPlainTextEdit*, intptr_t);
bool miqt_exec_callback_QPlainTextEdit_canInsertFromMimeData(const QPlainTextEdit*, intptr_t, QMimeData*);
void miqt_exec_callback_QPlainTextEdit_insertFromMimeData(QPlainTextEdit*, intptr_t, QMimeData*);
void miqt_exec_callback_QPlainTextEdit_inputMethodEvent(QPlainTextEdit*, intptr_t, QInputMethodEvent*);
void miqt_exec_callback_QPlainTextEdit_scrollContentsBy(QPlainTextEdit*, intptr_t, int, int);
void miqt_exec_callback_QPlainTextEdit_doSetTextCursor(QPlainTextEdit*, intptr_t, QTextCursor*);
QSize* miqt_exec_callback_QPlainTextEdit_minimumSizeHint(const QPlainTextEdit*, intptr_t);
QSize* miqt_exec_callback_QPlainTextEdit_sizeHint(const QPlainTextEdit*, intptr_t);
void miqt_exec_callback_QPlainTextEdit_setupViewport(QPlainTextEdit*, intptr_t, QWidget*);
bool miqt_exec_callback_QPlainTextEdit_eventFilter(QPlainTextEdit*, intptr_t, QObject*, QEvent*);
bool miqt_exec_callback_QPlainTextEdit_viewportEvent(QPlainTextEdit*, intptr_t, QEvent*);
QSize* miqt_exec_callback_QPlainTextEdit_viewportSizeHint(const QPlainTextEdit*, intptr_t);
void miqt_exec_callback_QPlainTextEdit_initStyleOption(const QPlainTextEdit*, intptr_t, QStyleOptionFrame*);
int miqt_exec_callback_QPlainTextEdit_devType(const QPlainTextEdit*, intptr_t);
void miqt_exec_callback_QPlainTextEdit_setVisible(QPlainTextEdit*, intptr_t, bool);
int miqt_exec_callback_QPlainTextEdit_heightForWidth(const QPlainTextEdit*, intptr_t, int);
bool miqt_exec_callback_QPlainTextEdit_hasHeightForWidth(const QPlainTextEdit*, intptr_t);
QPaintEngine* miqt_exec_callback_QPlainTextEdit_paintEngine(const QPlainTextEdit*, intptr_t);
void miqt_exec_callback_QPlainTextEdit_enterEvent(QPlainTextEdit*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QPlainTextEdit_leaveEvent(QPlainTextEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QPlainTextEdit_moveEvent(QPlainTextEdit*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QPlainTextEdit_closeEvent(QPlainTextEdit*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QPlainTextEdit_tabletEvent(QPlainTextEdit*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QPlainTextEdit_actionEvent(QPlainTextEdit*, intptr_t, QActionEvent*);
void miqt_exec_callback_QPlainTextEdit_hideEvent(QPlainTextEdit*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QPlainTextEdit_nativeEvent(QPlainTextEdit*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QPlainTextEdit_metric(const QPlainTextEdit*, intptr_t, int);
void miqt_exec_callback_QPlainTextEdit_initPainter(const QPlainTextEdit*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QPlainTextEdit_redirected(const QPlainTextEdit*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QPlainTextEdit_sharedPainter(const QPlainTextEdit*, intptr_t);
void miqt_exec_callback_QPlainTextEdit_childEvent(QPlainTextEdit*, intptr_t, QChildEvent*);
void miqt_exec_callback_QPlainTextEdit_customEvent(QPlainTextEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QPlainTextEdit_connectNotify(QPlainTextEdit*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QPlainTextEdit_disconnectNotify(QPlainTextEdit*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QPlainTextDocumentLayout_draw(QPlainTextDocumentLayout*, intptr_t, QPainter*, QAbstractTextDocumentLayout__PaintContext*);
int miqt_exec_callback_QPlainTextDocumentLayout_hitTest(const QPlainTextDocumentLayout*, intptr_t, QPointF*, int);
int miqt_exec_callback_QPlainTextDocumentLayout_pageCount(const QPlainTextDocumentLayout*, intptr_t);
QSizeF* miqt_exec_callback_QPlainTextDocumentLayout_documentSize(const QPlainTextDocumentLayout*, intptr_t);
QRectF* miqt_exec_callback_QPlainTextDocumentLayout_frameBoundingRect(const QPlainTextDocumentLayout*, intptr_t, QTextFrame*);
QRectF* miqt_exec_callback_QPlainTextDocumentLayout_blockBoundingRect(const QPlainTextDocumentLayout*, intptr_t, QTextBlock*);
void miqt_exec_callback_QPlainTextDocumentLayout_documentChanged(QPlainTextDocumentLayout*, intptr_t, int, int, int);
void miqt_exec_callback_QPlainTextDocumentLayout_resizeInlineObject(QPlainTextDocumentLayout*, intptr_t, QTextInlineObject*, int, QTextFormat*);
void miqt_exec_callback_QPlainTextDocumentLayout_positionInlineObject(QPlainTextDocumentLayout*, intptr_t, QTextInlineObject*, int, QTextFormat*);
void miqt_exec_callback_QPlainTextDocumentLayout_drawInlineObject(QPlainTextDocumentLayout*, intptr_t, QPainter*, QRectF*, QTextInlineObject*, int, QTextFormat*);
bool miqt_exec_callback_QPlainTextDocumentLayout_event(QPlainTextDocumentLayout*, intptr_t, QEvent*);
bool miqt_exec_callback_QPlainTextDocumentLayout_eventFilter(QPlainTextDocumentLayout*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QPlainTextDocumentLayout_timerEvent(QPlainTextDocumentLayout*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QPlainTextDocumentLayout_childEvent(QPlainTextDocumentLayout*, intptr_t, QChildEvent*);
void miqt_exec_callback_QPlainTextDocumentLayout_customEvent(QPlainTextDocumentLayout*, intptr_t, QEvent*);
void miqt_exec_callback_QPlainTextDocumentLayout_connectNotify(QPlainTextDocumentLayout*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QPlainTextDocumentLayout_disconnectNotify(QPlainTextDocumentLayout*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQPlainTextEdit final : public QPlainTextEdit {
public:

	MiqtVirtualQPlainTextEdit(QWidget* parent): QPlainTextEdit(parent) {};
	MiqtVirtualQPlainTextEdit(): QPlainTextEdit() {};
	MiqtVirtualQPlainTextEdit(const QString& text): QPlainTextEdit(text) {};
	MiqtVirtualQPlainTextEdit(const QString& text, QWidget* parent): QPlainTextEdit(text, parent) {};

	virtual ~MiqtVirtualQPlainTextEdit() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__loadResource = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant loadResource(int type, const QUrl& name) override {
		if (handle__loadResource == 0) {
			return QPlainTextEdit::loadResource(type, name);
		}
		
		int sigval1 = type;
		const QUrl& name_ret = name;
		// Cast returned reference into pointer
		QUrl* sigval2 = const_cast<QUrl*>(&name_ret);

		QVariant* callback_return_value = miqt_exec_callback_QPlainTextEdit_loadResource(this, handle__loadResource, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_loadResource(int type, QUrl* name) {

		return new QVariant(QPlainTextEdit::loadResource(static_cast<int>(type), *name));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery property) const override {
		if (handle__inputMethodQuery == 0) {
			return QPlainTextEdit::inputMethodQuery(property);
		}
		
		Qt::InputMethodQuery property_ret = property;
		int sigval1 = static_cast<int>(property_ret);

		QVariant* callback_return_value = miqt_exec_callback_QPlainTextEdit_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int property) const {

		return new QVariant(QPlainTextEdit::inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__event == 0) {
			return QPlainTextEdit::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QPlainTextEdit_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* e) {

		return QPlainTextEdit::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* e) override {
		if (handle__timerEvent == 0) {
			QPlainTextEdit::timerEvent(e);
			return;
		}
		
		QTimerEvent* sigval1 = e;

		miqt_exec_callback_QPlainTextEdit_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* e) {

		QPlainTextEdit::timerEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* e) override {
		if (handle__keyPressEvent == 0) {
			QPlainTextEdit::keyPressEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QPlainTextEdit_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* e) {

		QPlainTextEdit::keyPressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* e) override {
		if (handle__keyReleaseEvent == 0) {
			QPlainTextEdit::keyReleaseEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QPlainTextEdit_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* e) {

		QPlainTextEdit::keyReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* e) override {
		if (handle__resizeEvent == 0) {
			QPlainTextEdit::resizeEvent(e);
			return;
		}
		
		QResizeEvent* sigval1 = e;

		miqt_exec_callback_QPlainTextEdit_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QResizeEvent* e) {

		QPlainTextEdit::resizeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* e) override {
		if (handle__paintEvent == 0) {
			QPlainTextEdit::paintEvent(e);
			return;
		}
		
		QPaintEvent* sigval1 = e;

		miqt_exec_callback_QPlainTextEdit_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintEvent(QPaintEvent* e) {

		QPlainTextEdit::paintEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* e) override {
		if (handle__mousePressEvent == 0) {
			QPlainTextEdit::mousePressEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QPlainTextEdit_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QMouseEvent* e) {

		QPlainTextEdit::mousePressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* e) override {
		if (handle__mouseMoveEvent == 0) {
			QPlainTextEdit::mouseMoveEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QPlainTextEdit_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QMouseEvent* e) {

		QPlainTextEdit::mouseMoveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (handle__mouseReleaseEvent == 0) {
			QPlainTextEdit::mouseReleaseEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QPlainTextEdit_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QMouseEvent* e) {

		QPlainTextEdit::mouseReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QPlainTextEdit::mouseDoubleClickEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QPlainTextEdit_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QMouseEvent* e) {

		QPlainTextEdit::mouseDoubleClickEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QPlainTextEdit::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QPlainTextEdit_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QPlainTextEdit::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* e) override {
		if (handle__contextMenuEvent == 0) {
			QPlainTextEdit::contextMenuEvent(e);
			return;
		}
		
		QContextMenuEvent* sigval1 = e;

		miqt_exec_callback_QPlainTextEdit_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QContextMenuEvent* e) {

		QPlainTextEdit::contextMenuEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* e) override {
		if (handle__dragEnterEvent == 0) {
			QPlainTextEdit::dragEnterEvent(e);
			return;
		}
		
		QDragEnterEvent* sigval1 = e;

		miqt_exec_callback_QPlainTextEdit_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QDragEnterEvent* e) {

		QPlainTextEdit::dragEnterEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
		if (handle__dragLeaveEvent == 0) {
			QPlainTextEdit::dragLeaveEvent(e);
			return;
		}
		
		QDragLeaveEvent* sigval1 = e;

		miqt_exec_callback_QPlainTextEdit_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QDragLeaveEvent* e) {

		QPlainTextEdit::dragLeaveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* e) override {
		if (handle__dragMoveEvent == 0) {
			QPlainTextEdit::dragMoveEvent(e);
			return;
		}
		
		QDragMoveEvent* sigval1 = e;

		miqt_exec_callback_QPlainTextEdit_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QDragMoveEvent* e) {

		QPlainTextEdit::dragMoveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* e) override {
		if (handle__dropEvent == 0) {
			QPlainTextEdit::dropEvent(e);
			return;
		}
		
		QDropEvent* sigval1 = e;

		miqt_exec_callback_QPlainTextEdit_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QDropEvent* e) {

		QPlainTextEdit::dropEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* e) override {
		if (handle__focusInEvent == 0) {
			QPlainTextEdit::focusInEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QPlainTextEdit_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* e) {

		QPlainTextEdit::focusInEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* e) override {
		if (handle__focusOutEvent == 0) {
			QPlainTextEdit::focusOutEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QPlainTextEdit_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* e) {

		QPlainTextEdit::focusOutEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (handle__showEvent == 0) {
			QPlainTextEdit::showEvent(param1);
			return;
		}
		
		QShowEvent* sigval1 = param1;

		miqt_exec_callback_QPlainTextEdit_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* param1) {

		QPlainTextEdit::showEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (handle__changeEvent == 0) {
			QPlainTextEdit::changeEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QPlainTextEdit_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* e) {

		QPlainTextEdit::changeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* e) override {
		if (handle__wheelEvent == 0) {
			QPlainTextEdit::wheelEvent(e);
			return;
		}
		
		QWheelEvent* sigval1 = e;

		miqt_exec_callback_QPlainTextEdit_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QWheelEvent* e) {

		QPlainTextEdit::wheelEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__createMimeDataFromSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual QMimeData* createMimeDataFromSelection() const override {
		if (handle__createMimeDataFromSelection == 0) {
			return QPlainTextEdit::createMimeDataFromSelection();
		}
		

		QMimeData* callback_return_value = miqt_exec_callback_QPlainTextEdit_createMimeDataFromSelection(this, handle__createMimeDataFromSelection);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QMimeData* virtualbase_createMimeDataFromSelection() const {

		return QPlainTextEdit::createMimeDataFromSelection();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canInsertFromMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canInsertFromMimeData(const QMimeData* source) const override {
		if (handle__canInsertFromMimeData == 0) {
			return QPlainTextEdit::canInsertFromMimeData(source);
		}
		
		QMimeData* sigval1 = (QMimeData*) source;

		bool callback_return_value = miqt_exec_callback_QPlainTextEdit_canInsertFromMimeData(this, handle__canInsertFromMimeData, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_canInsertFromMimeData(QMimeData* source) const {

		return QPlainTextEdit::canInsertFromMimeData(source);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__insertFromMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual void insertFromMimeData(const QMimeData* source) override {
		if (handle__insertFromMimeData == 0) {
			QPlainTextEdit::insertFromMimeData(source);
			return;
		}
		
		QMimeData* sigval1 = (QMimeData*) source;

		miqt_exec_callback_QPlainTextEdit_insertFromMimeData(this, handle__insertFromMimeData, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_insertFromMimeData(QMimeData* source) {

		QPlainTextEdit::insertFromMimeData(source);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QPlainTextEdit::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QPlainTextEdit_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QPlainTextEdit::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (handle__scrollContentsBy == 0) {
			QPlainTextEdit::scrollContentsBy(dx, dy);
			return;
		}
		
		int sigval1 = dx;
		int sigval2 = dy;

		miqt_exec_callback_QPlainTextEdit_scrollContentsBy(this, handle__scrollContentsBy, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_scrollContentsBy(int dx, int dy) {

		QPlainTextEdit::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__doSetTextCursor = 0;

	// Subclass to allow providing a Go implementation
	virtual void doSetTextCursor(const QTextCursor& cursor) override {
		if (handle__doSetTextCursor == 0) {
			QPlainTextEdit::doSetTextCursor(cursor);
			return;
		}
		
		const QTextCursor& cursor_ret = cursor;
		// Cast returned reference into pointer
		QTextCursor* sigval1 = const_cast<QTextCursor*>(&cursor_ret);

		miqt_exec_callback_QPlainTextEdit_doSetTextCursor(this, handle__doSetTextCursor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_doSetTextCursor(QTextCursor* cursor) {

		QPlainTextEdit::doSetTextCursor(*cursor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QPlainTextEdit::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QPlainTextEdit_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_minimumSizeHint() const {

		return new QSize(QPlainTextEdit::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QPlainTextEdit::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QPlainTextEdit_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_sizeHint() const {

		return new QSize(QPlainTextEdit::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setupViewport = 0;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (handle__setupViewport == 0) {
			QPlainTextEdit::setupViewport(viewport);
			return;
		}
		
		QWidget* sigval1 = viewport;

		miqt_exec_callback_QPlainTextEdit_setupViewport(this, handle__setupViewport, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setupViewport(QWidget* viewport) {

		QPlainTextEdit::setupViewport(viewport);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__eventFilter == 0) {
			return QPlainTextEdit::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QPlainTextEdit_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* param1, QEvent* param2) {

		return QPlainTextEdit::eventFilter(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewportEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* param1) override {
		if (handle__viewportEvent == 0) {
			return QPlainTextEdit::viewportEvent(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QPlainTextEdit_viewportEvent(this, handle__viewportEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_viewportEvent(QEvent* param1) {

		return QPlainTextEdit::viewportEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewportSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (handle__viewportSizeHint == 0) {
			return QPlainTextEdit::viewportSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QPlainTextEdit_viewportSizeHint(this, handle__viewportSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_viewportSizeHint() const {

		return new QSize(QPlainTextEdit::viewportSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionFrame* option) const override {
		if (handle__initStyleOption == 0) {
			QPlainTextEdit::initStyleOption(option);
			return;
		}
		
		QStyleOptionFrame* sigval1 = option;

		miqt_exec_callback_QPlainTextEdit_initStyleOption(this, handle__initStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initStyleOption(QStyleOptionFrame* option) const {

		QPlainTextEdit::initStyleOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QPlainTextEdit::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QPlainTextEdit_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QPlainTextEdit::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QPlainTextEdit::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QPlainTextEdit_setVisible(this, handle__setVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setVisible(bool visible) {

		QPlainTextEdit::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QPlainTextEdit::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QPlainTextEdit_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_heightForWidth(int param1) const {

		return QPlainTextEdit::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QPlainTextEdit::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QPlainTextEdit_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasHeightForWidth() const {

		return QPlainTextEdit::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QPlainTextEdit::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QPlainTextEdit_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QPlainTextEdit::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__enterEvent == 0) {
			QPlainTextEdit::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QPlainTextEdit_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_enterEvent(QEnterEvent* event) {

		QPlainTextEdit::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QPlainTextEdit::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPlainTextEdit_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_leaveEvent(QEvent* event) {

		QPlainTextEdit::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QPlainTextEdit::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QPlainTextEdit_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QMoveEvent* event) {

		QPlainTextEdit::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QPlainTextEdit::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QPlainTextEdit_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QPlainTextEdit::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QPlainTextEdit::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QPlainTextEdit_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_tabletEvent(QTabletEvent* event) {

		QPlainTextEdit::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QPlainTextEdit::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QPlainTextEdit_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_actionEvent(QActionEvent* event) {

		QPlainTextEdit::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QPlainTextEdit::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QPlainTextEdit_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QPlainTextEdit::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__nativeEvent == 0) {
			return QPlainTextEdit::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QPlainTextEdit_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_nativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QPlainTextEdit::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QPlainTextEdit::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QPlainTextEdit_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QPlainTextEdit::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QPlainTextEdit::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QPlainTextEdit_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QPlainTextEdit::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QPlainTextEdit::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QPlainTextEdit_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QPlainTextEdit::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QPlainTextEdit::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QPlainTextEdit_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QPlainTextEdit::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QPlainTextEdit::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QPlainTextEdit_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QPlainTextEdit::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QPlainTextEdit::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPlainTextEdit_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QPlainTextEdit::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QPlainTextEdit::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPlainTextEdit_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QPlainTextEdit::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QPlainTextEdit::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPlainTextEdit_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QPlainTextEdit::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QTextBlock* QPlainTextEdit_protectedbase_firstVisibleBlock(bool* _dynamic_cast_ok, const void* self);
	friend QPointF* QPlainTextEdit_protectedbase_contentOffset(bool* _dynamic_cast_ok, const void* self);
	friend QRectF* QPlainTextEdit_protectedbase_blockBoundingRect(bool* _dynamic_cast_ok, const void* self, QTextBlock* block);
	friend QRectF* QPlainTextEdit_protectedbase_blockBoundingGeometry(bool* _dynamic_cast_ok, const void* self, QTextBlock* block);
	friend QAbstractTextDocumentLayout__PaintContext* QPlainTextEdit_protectedbase_getPaintContext(bool* _dynamic_cast_ok, const void* self);
	friend void QPlainTextEdit_protectedbase_zoomInF(bool* _dynamic_cast_ok, void* self, float range);
	friend void QPlainTextEdit_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom);
	friend QMargins* QPlainTextEdit_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self);
	friend void QPlainTextEdit_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
	friend void QPlainTextEdit_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QPlainTextEdit_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QPlainTextEdit_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QPlainTextEdit_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QPlainTextEdit_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QPlainTextEdit_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QPlainTextEdit_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QPlainTextEdit_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QPlainTextEdit_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QPlainTextEdit* QPlainTextEdit_new(QWidget* parent) {
	return new MiqtVirtualQPlainTextEdit(parent);
}

QPlainTextEdit* QPlainTextEdit_new2() {
	return new MiqtVirtualQPlainTextEdit();
}

QPlainTextEdit* QPlainTextEdit_new3(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQPlainTextEdit(text_QString);
}

QPlainTextEdit* QPlainTextEdit_new4(struct miqt_string text, QWidget* parent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQPlainTextEdit(text_QString, parent);
}

void QPlainTextEdit_virtbase(QPlainTextEdit* src, QAbstractScrollArea** outptr_QAbstractScrollArea) {
	*outptr_QAbstractScrollArea = static_cast<QAbstractScrollArea*>(src);
}

QMetaObject* QPlainTextEdit_metaObject(const QPlainTextEdit* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPlainTextEdit_metacast(QPlainTextEdit* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPlainTextEdit_tr(const char* s) {
	QString _ret = QPlainTextEdit::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPlainTextEdit_setDocument(QPlainTextEdit* self, QTextDocument* document) {
	self->setDocument(document);
}

QTextDocument* QPlainTextEdit_document(const QPlainTextEdit* self) {
	return self->document();
}

void QPlainTextEdit_setPlaceholderText(QPlainTextEdit* self, struct miqt_string placeholderText) {
	QString placeholderText_QString = QString::fromUtf8(placeholderText.data, placeholderText.len);
	self->setPlaceholderText(placeholderText_QString);
}

struct miqt_string QPlainTextEdit_placeholderText(const QPlainTextEdit* self) {
	QString _ret = self->placeholderText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPlainTextEdit_setTextCursor(QPlainTextEdit* self, QTextCursor* cursor) {
	self->setTextCursor(*cursor);
}

QTextCursor* QPlainTextEdit_textCursor(const QPlainTextEdit* self) {
	return new QTextCursor(self->textCursor());
}

bool QPlainTextEdit_isReadOnly(const QPlainTextEdit* self) {
	return self->isReadOnly();
}

void QPlainTextEdit_setReadOnly(QPlainTextEdit* self, bool ro) {
	self->setReadOnly(ro);
}

void QPlainTextEdit_setTextInteractionFlags(QPlainTextEdit* self, int flags) {
	self->setTextInteractionFlags(static_cast<Qt::TextInteractionFlags>(flags));
}

int QPlainTextEdit_textInteractionFlags(const QPlainTextEdit* self) {
	Qt::TextInteractionFlags _ret = self->textInteractionFlags();
	return static_cast<int>(_ret);
}

void QPlainTextEdit_mergeCurrentCharFormat(QPlainTextEdit* self, QTextCharFormat* modifier) {
	self->mergeCurrentCharFormat(*modifier);
}

void QPlainTextEdit_setCurrentCharFormat(QPlainTextEdit* self, QTextCharFormat* format) {
	self->setCurrentCharFormat(*format);
}

QTextCharFormat* QPlainTextEdit_currentCharFormat(const QPlainTextEdit* self) {
	return new QTextCharFormat(self->currentCharFormat());
}

bool QPlainTextEdit_tabChangesFocus(const QPlainTextEdit* self) {
	return self->tabChangesFocus();
}

void QPlainTextEdit_setTabChangesFocus(QPlainTextEdit* self, bool b) {
	self->setTabChangesFocus(b);
}

void QPlainTextEdit_setDocumentTitle(QPlainTextEdit* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	self->setDocumentTitle(title_QString);
}

struct miqt_string QPlainTextEdit_documentTitle(const QPlainTextEdit* self) {
	QString _ret = self->documentTitle();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QPlainTextEdit_isUndoRedoEnabled(const QPlainTextEdit* self) {
	return self->isUndoRedoEnabled();
}

void QPlainTextEdit_setUndoRedoEnabled(QPlainTextEdit* self, bool enable) {
	self->setUndoRedoEnabled(enable);
}

void QPlainTextEdit_setMaximumBlockCount(QPlainTextEdit* self, int maximum) {
	self->setMaximumBlockCount(static_cast<int>(maximum));
}

int QPlainTextEdit_maximumBlockCount(const QPlainTextEdit* self) {
	return self->maximumBlockCount();
}

int QPlainTextEdit_lineWrapMode(const QPlainTextEdit* self) {
	QPlainTextEdit::LineWrapMode _ret = self->lineWrapMode();
	return static_cast<int>(_ret);
}

void QPlainTextEdit_setLineWrapMode(QPlainTextEdit* self, int mode) {
	self->setLineWrapMode(static_cast<QPlainTextEdit::LineWrapMode>(mode));
}

int QPlainTextEdit_wordWrapMode(const QPlainTextEdit* self) {
	QTextOption::WrapMode _ret = self->wordWrapMode();
	return static_cast<int>(_ret);
}

void QPlainTextEdit_setWordWrapMode(QPlainTextEdit* self, int policy) {
	self->setWordWrapMode(static_cast<QTextOption::WrapMode>(policy));
}

void QPlainTextEdit_setBackgroundVisible(QPlainTextEdit* self, bool visible) {
	self->setBackgroundVisible(visible);
}

bool QPlainTextEdit_backgroundVisible(const QPlainTextEdit* self) {
	return self->backgroundVisible();
}

void QPlainTextEdit_setCenterOnScroll(QPlainTextEdit* self, bool enabled) {
	self->setCenterOnScroll(enabled);
}

bool QPlainTextEdit_centerOnScroll(const QPlainTextEdit* self) {
	return self->centerOnScroll();
}

bool QPlainTextEdit_find(QPlainTextEdit* self, struct miqt_string exp) {
	QString exp_QString = QString::fromUtf8(exp.data, exp.len);
	return self->find(exp_QString);
}

bool QPlainTextEdit_findWithExp(QPlainTextEdit* self, QRegularExpression* exp) {
	return self->find(*exp);
}

struct miqt_string QPlainTextEdit_toPlainText(const QPlainTextEdit* self) {
	QString _ret = self->toPlainText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPlainTextEdit_ensureCursorVisible(QPlainTextEdit* self) {
	self->ensureCursorVisible();
}

QVariant* QPlainTextEdit_loadResource(QPlainTextEdit* self, int type, QUrl* name) {
	return new QVariant(self->loadResource(static_cast<int>(type), *name));
}

QMenu* QPlainTextEdit_createStandardContextMenu(QPlainTextEdit* self) {
	return self->createStandardContextMenu();
}

QMenu* QPlainTextEdit_createStandardContextMenuWithPosition(QPlainTextEdit* self, QPoint* position) {
	return self->createStandardContextMenu(*position);
}

QTextCursor* QPlainTextEdit_cursorForPosition(const QPlainTextEdit* self, QPoint* pos) {
	return new QTextCursor(self->cursorForPosition(*pos));
}

QRect* QPlainTextEdit_cursorRect(const QPlainTextEdit* self, QTextCursor* cursor) {
	return new QRect(self->cursorRect(*cursor));
}

QRect* QPlainTextEdit_cursorRect2(const QPlainTextEdit* self) {
	return new QRect(self->cursorRect());
}

struct miqt_string QPlainTextEdit_anchorAt(const QPlainTextEdit* self, QPoint* pos) {
	QString _ret = self->anchorAt(*pos);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QPlainTextEdit_overwriteMode(const QPlainTextEdit* self) {
	return self->overwriteMode();
}

void QPlainTextEdit_setOverwriteMode(QPlainTextEdit* self, bool overwrite) {
	self->setOverwriteMode(overwrite);
}

double QPlainTextEdit_tabStopDistance(const QPlainTextEdit* self) {
	qreal _ret = self->tabStopDistance();
	return static_cast<double>(_ret);
}

void QPlainTextEdit_setTabStopDistance(QPlainTextEdit* self, double distance) {
	self->setTabStopDistance(static_cast<qreal>(distance));
}

int QPlainTextEdit_cursorWidth(const QPlainTextEdit* self) {
	return self->cursorWidth();
}

void QPlainTextEdit_setCursorWidth(QPlainTextEdit* self, int width) {
	self->setCursorWidth(static_cast<int>(width));
}

void QPlainTextEdit_setExtraSelections(QPlainTextEdit* self, struct miqt_array /* of QTextEdit__ExtraSelection* */  selections) {
	QList<QTextEdit::ExtraSelection> selections_QList;
	selections_QList.reserve(selections.len);
	QTextEdit__ExtraSelection** selections_arr = static_cast<QTextEdit__ExtraSelection**>(selections.data);
	for(size_t i = 0; i < selections.len; ++i) {
		selections_QList.push_back(*(selections_arr[i]));
	}
	self->setExtraSelections(selections_QList);
}

struct miqt_array /* of QTextEdit__ExtraSelection* */  QPlainTextEdit_extraSelections(const QPlainTextEdit* self) {
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

void QPlainTextEdit_moveCursor(QPlainTextEdit* self, int operation) {
	self->moveCursor(static_cast<QTextCursor::MoveOperation>(operation));
}

bool QPlainTextEdit_canPaste(const QPlainTextEdit* self) {
	return self->canPaste();
}

void QPlainTextEdit_print(const QPlainTextEdit* self, QPagedPaintDevice* printer) {
	self->print(printer);
}

int QPlainTextEdit_blockCount(const QPlainTextEdit* self) {
	return self->blockCount();
}

QVariant* QPlainTextEdit_inputMethodQuery(const QPlainTextEdit* self, int property) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
}

QVariant* QPlainTextEdit_inputMethodQuery2(const QPlainTextEdit* self, int query, QVariant* argument) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query), *argument));
}

void QPlainTextEdit_setPlainText(QPlainTextEdit* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setPlainText(text_QString);
}

void QPlainTextEdit_cut(QPlainTextEdit* self) {
	self->cut();
}

void QPlainTextEdit_copy(QPlainTextEdit* self) {
	self->copy();
}

void QPlainTextEdit_paste(QPlainTextEdit* self) {
	self->paste();
}

void QPlainTextEdit_undo(QPlainTextEdit* self) {
	self->undo();
}

void QPlainTextEdit_redo(QPlainTextEdit* self) {
	self->redo();
}

void QPlainTextEdit_clear(QPlainTextEdit* self) {
	self->clear();
}

void QPlainTextEdit_selectAll(QPlainTextEdit* self) {
	self->selectAll();
}

void QPlainTextEdit_insertPlainText(QPlainTextEdit* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->insertPlainText(text_QString);
}

void QPlainTextEdit_appendPlainText(QPlainTextEdit* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->appendPlainText(text_QString);
}

void QPlainTextEdit_appendHtml(QPlainTextEdit* self, struct miqt_string html) {
	QString html_QString = QString::fromUtf8(html.data, html.len);
	self->appendHtml(html_QString);
}

void QPlainTextEdit_centerCursor(QPlainTextEdit* self) {
	self->centerCursor();
}

void QPlainTextEdit_zoomIn(QPlainTextEdit* self) {
	self->zoomIn();
}

void QPlainTextEdit_zoomOut(QPlainTextEdit* self) {
	self->zoomOut();
}

void QPlainTextEdit_textChanged(QPlainTextEdit* self) {
	self->textChanged();
}

void QPlainTextEdit_connect_textChanged(QPlainTextEdit* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit::connect(self, static_cast<void (QPlainTextEdit::*)()>(&QPlainTextEdit::textChanged), self, [=]() {
		miqt_exec_callback_QPlainTextEdit_textChanged(slot);
	});
}

void QPlainTextEdit_undoAvailable(QPlainTextEdit* self, bool b) {
	self->undoAvailable(b);
}

void QPlainTextEdit_connect_undoAvailable(QPlainTextEdit* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit::connect(self, static_cast<void (QPlainTextEdit::*)(bool)>(&QPlainTextEdit::undoAvailable), self, [=](bool b) {
		bool sigval1 = b;
		miqt_exec_callback_QPlainTextEdit_undoAvailable(slot, sigval1);
	});
}

void QPlainTextEdit_redoAvailable(QPlainTextEdit* self, bool b) {
	self->redoAvailable(b);
}

void QPlainTextEdit_connect_redoAvailable(QPlainTextEdit* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit::connect(self, static_cast<void (QPlainTextEdit::*)(bool)>(&QPlainTextEdit::redoAvailable), self, [=](bool b) {
		bool sigval1 = b;
		miqt_exec_callback_QPlainTextEdit_redoAvailable(slot, sigval1);
	});
}

void QPlainTextEdit_copyAvailable(QPlainTextEdit* self, bool b) {
	self->copyAvailable(b);
}

void QPlainTextEdit_connect_copyAvailable(QPlainTextEdit* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit::connect(self, static_cast<void (QPlainTextEdit::*)(bool)>(&QPlainTextEdit::copyAvailable), self, [=](bool b) {
		bool sigval1 = b;
		miqt_exec_callback_QPlainTextEdit_copyAvailable(slot, sigval1);
	});
}

void QPlainTextEdit_selectionChanged(QPlainTextEdit* self) {
	self->selectionChanged();
}

void QPlainTextEdit_connect_selectionChanged(QPlainTextEdit* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit::connect(self, static_cast<void (QPlainTextEdit::*)()>(&QPlainTextEdit::selectionChanged), self, [=]() {
		miqt_exec_callback_QPlainTextEdit_selectionChanged(slot);
	});
}

void QPlainTextEdit_cursorPositionChanged(QPlainTextEdit* self) {
	self->cursorPositionChanged();
}

void QPlainTextEdit_connect_cursorPositionChanged(QPlainTextEdit* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit::connect(self, static_cast<void (QPlainTextEdit::*)()>(&QPlainTextEdit::cursorPositionChanged), self, [=]() {
		miqt_exec_callback_QPlainTextEdit_cursorPositionChanged(slot);
	});
}

void QPlainTextEdit_updateRequest(QPlainTextEdit* self, QRect* rect, int dy) {
	self->updateRequest(*rect, static_cast<int>(dy));
}

void QPlainTextEdit_connect_updateRequest(QPlainTextEdit* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit::connect(self, static_cast<void (QPlainTextEdit::*)(const QRect&, int)>(&QPlainTextEdit::updateRequest), self, [=](const QRect& rect, int dy) {
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&rect_ret);
		int sigval2 = dy;
		miqt_exec_callback_QPlainTextEdit_updateRequest(slot, sigval1, sigval2);
	});
}

void QPlainTextEdit_blockCountChanged(QPlainTextEdit* self, int newBlockCount) {
	self->blockCountChanged(static_cast<int>(newBlockCount));
}

void QPlainTextEdit_connect_blockCountChanged(QPlainTextEdit* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit::connect(self, static_cast<void (QPlainTextEdit::*)(int)>(&QPlainTextEdit::blockCountChanged), self, [=](int newBlockCount) {
		int sigval1 = newBlockCount;
		miqt_exec_callback_QPlainTextEdit_blockCountChanged(slot, sigval1);
	});
}

void QPlainTextEdit_modificationChanged(QPlainTextEdit* self, bool param1) {
	self->modificationChanged(param1);
}

void QPlainTextEdit_connect_modificationChanged(QPlainTextEdit* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit::connect(self, static_cast<void (QPlainTextEdit::*)(bool)>(&QPlainTextEdit::modificationChanged), self, [=](bool param1) {
		bool sigval1 = param1;
		miqt_exec_callback_QPlainTextEdit_modificationChanged(slot, sigval1);
	});
}

struct miqt_string QPlainTextEdit_tr2(const char* s, const char* c) {
	QString _ret = QPlainTextEdit::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPlainTextEdit_tr3(const char* s, const char* c, int n) {
	QString _ret = QPlainTextEdit::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QPlainTextEdit_find2(QPlainTextEdit* self, struct miqt_string exp, int options) {
	QString exp_QString = QString::fromUtf8(exp.data, exp.len);
	return self->find(exp_QString, static_cast<QTextDocument::FindFlags>(options));
}

bool QPlainTextEdit_find22(QPlainTextEdit* self, QRegularExpression* exp, int options) {
	return self->find(*exp, static_cast<QTextDocument::FindFlags>(options));
}

void QPlainTextEdit_moveCursor2(QPlainTextEdit* self, int operation, int mode) {
	self->moveCursor(static_cast<QTextCursor::MoveOperation>(operation), static_cast<QTextCursor::MoveMode>(mode));
}

void QPlainTextEdit_zoomIn1(QPlainTextEdit* self, int range) {
	self->zoomIn(static_cast<int>(range));
}

void QPlainTextEdit_zoomOut1(QPlainTextEdit* self, int range) {
	self->zoomOut(static_cast<int>(range));
}

bool QPlainTextEdit_override_virtual_loadResource(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__loadResource = slot;
	return true;
}

QVariant* QPlainTextEdit_virtualbase_loadResource(void* self, int type, QUrl* name) {
	return ( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_loadResource(type, name);
}

bool QPlainTextEdit_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QPlainTextEdit_virtualbase_inputMethodQuery(const void* self, int property) {
	return ( (const MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_inputMethodQuery(property);
}

bool QPlainTextEdit_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QPlainTextEdit_virtualbase_event(void* self, QEvent* e) {
	return ( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_event(e);
}

bool QPlainTextEdit_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_timerEvent(void* self, QTimerEvent* e) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_timerEvent(e);
}

bool QPlainTextEdit_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_keyPressEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_keyPressEvent(e);
}

bool QPlainTextEdit_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_keyReleaseEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_keyReleaseEvent(e);
}

bool QPlainTextEdit_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_resizeEvent(void* self, QResizeEvent* e) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_resizeEvent(e);
}

bool QPlainTextEdit_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_paintEvent(void* self, QPaintEvent* e) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_paintEvent(e);
}

bool QPlainTextEdit_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_mousePressEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_mousePressEvent(e);
}

bool QPlainTextEdit_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_mouseMoveEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_mouseMoveEvent(e);
}

bool QPlainTextEdit_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_mouseReleaseEvent(e);
}

bool QPlainTextEdit_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_mouseDoubleClickEvent(e);
}

bool QPlainTextEdit_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QPlainTextEdit_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QPlainTextEdit_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* e) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_contextMenuEvent(e);
}

bool QPlainTextEdit_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* e) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_dragEnterEvent(e);
}

bool QPlainTextEdit_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* e) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_dragLeaveEvent(e);
}

bool QPlainTextEdit_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* e) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_dragMoveEvent(e);
}

bool QPlainTextEdit_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_dropEvent(void* self, QDropEvent* e) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_dropEvent(e);
}

bool QPlainTextEdit_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_focusInEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_focusInEvent(e);
}

bool QPlainTextEdit_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_focusOutEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_focusOutEvent(e);
}

bool QPlainTextEdit_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_showEvent(void* self, QShowEvent* param1) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_showEvent(param1);
}

bool QPlainTextEdit_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_changeEvent(void* self, QEvent* e) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_changeEvent(e);
}

bool QPlainTextEdit_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_wheelEvent(void* self, QWheelEvent* e) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_wheelEvent(e);
}

bool QPlainTextEdit_override_virtual_createMimeDataFromSelection(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__createMimeDataFromSelection = slot;
	return true;
}

QMimeData* QPlainTextEdit_virtualbase_createMimeDataFromSelection(const void* self) {
	return ( (const MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_createMimeDataFromSelection();
}

bool QPlainTextEdit_override_virtual_canInsertFromMimeData(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__canInsertFromMimeData = slot;
	return true;
}

bool QPlainTextEdit_virtualbase_canInsertFromMimeData(const void* self, QMimeData* source) {
	return ( (const MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_canInsertFromMimeData(source);
}

bool QPlainTextEdit_override_virtual_insertFromMimeData(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__insertFromMimeData = slot;
	return true;
}

void QPlainTextEdit_virtualbase_insertFromMimeData(void* self, QMimeData* source) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_insertFromMimeData(source);
}

bool QPlainTextEdit_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QPlainTextEdit_override_virtual_scrollContentsBy(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__scrollContentsBy = slot;
	return true;
}

void QPlainTextEdit_virtualbase_scrollContentsBy(void* self, int dx, int dy) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_scrollContentsBy(dx, dy);
}

bool QPlainTextEdit_override_virtual_doSetTextCursor(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__doSetTextCursor = slot;
	return true;
}

void QPlainTextEdit_virtualbase_doSetTextCursor(void* self, QTextCursor* cursor) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_doSetTextCursor(cursor);
}

bool QPlainTextEdit_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QPlainTextEdit_virtualbase_minimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_minimumSizeHint();
}

bool QPlainTextEdit_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QPlainTextEdit_virtualbase_sizeHint(const void* self) {
	return ( (const MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_sizeHint();
}

bool QPlainTextEdit_override_virtual_setupViewport(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setupViewport = slot;
	return true;
}

void QPlainTextEdit_virtualbase_setupViewport(void* self, QWidget* viewport) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_setupViewport(viewport);
}

bool QPlainTextEdit_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QPlainTextEdit_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_eventFilter(param1, param2);
}

bool QPlainTextEdit_override_virtual_viewportEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__viewportEvent = slot;
	return true;
}

bool QPlainTextEdit_virtualbase_viewportEvent(void* self, QEvent* param1) {
	return ( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_viewportEvent(param1);
}

bool QPlainTextEdit_override_virtual_viewportSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__viewportSizeHint = slot;
	return true;
}

QSize* QPlainTextEdit_virtualbase_viewportSizeHint(const void* self) {
	return ( (const MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_viewportSizeHint();
}

bool QPlainTextEdit_override_virtual_initStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initStyleOption = slot;
	return true;
}

void QPlainTextEdit_virtualbase_initStyleOption(const void* self, QStyleOptionFrame* option) {
	( (const MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_initStyleOption(option);
}

bool QPlainTextEdit_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QPlainTextEdit_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_devType();
}

bool QPlainTextEdit_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QPlainTextEdit_virtualbase_setVisible(void* self, bool visible) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_setVisible(visible);
}

bool QPlainTextEdit_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QPlainTextEdit_virtualbase_heightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_heightForWidth(param1);
}

bool QPlainTextEdit_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QPlainTextEdit_virtualbase_hasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_hasHeightForWidth();
}

bool QPlainTextEdit_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QPlainTextEdit_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_paintEngine();
}

bool QPlainTextEdit_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_enterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_enterEvent(event);
}

bool QPlainTextEdit_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_leaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_leaveEvent(event);
}

bool QPlainTextEdit_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_moveEvent(event);
}

bool QPlainTextEdit_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_closeEvent(event);
}

bool QPlainTextEdit_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_tabletEvent(event);
}

bool QPlainTextEdit_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_actionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_actionEvent(event);
}

bool QPlainTextEdit_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_hideEvent(event);
}

bool QPlainTextEdit_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QPlainTextEdit_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_nativeEvent(eventType, message, result);
}

bool QPlainTextEdit_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QPlainTextEdit_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_metric(param1);
}

bool QPlainTextEdit_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QPlainTextEdit_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_initPainter(painter);
}

bool QPlainTextEdit_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QPlainTextEdit_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_redirected(offset);
}

bool QPlainTextEdit_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QPlainTextEdit_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_sharedPainter();
}

bool QPlainTextEdit_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_childEvent(event);
}

bool QPlainTextEdit_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_customEvent(event);
}

bool QPlainTextEdit_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QPlainTextEdit_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_connectNotify(signal);
}

bool QPlainTextEdit_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QPlainTextEdit_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_disconnectNotify(signal);
}

QTextBlock* QPlainTextEdit_protectedbase_firstVisibleBlock(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QTextBlock(self_cast->firstVisibleBlock());

}

QPointF* QPlainTextEdit_protectedbase_contentOffset(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QPointF(self_cast->contentOffset());

}

QRectF* QPlainTextEdit_protectedbase_blockBoundingRect(bool* _dynamic_cast_ok, const void* self, QTextBlock* block) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QRectF(self_cast->blockBoundingRect(*block));

}

QRectF* QPlainTextEdit_protectedbase_blockBoundingGeometry(bool* _dynamic_cast_ok, const void* self, QTextBlock* block) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QRectF(self_cast->blockBoundingGeometry(*block));

}

QAbstractTextDocumentLayout__PaintContext* QPlainTextEdit_protectedbase_getPaintContext(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QAbstractTextDocumentLayout::PaintContext(self_cast->getPaintContext());

}

void QPlainTextEdit_protectedbase_zoomInF(bool* _dynamic_cast_ok, void* self, float range) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->zoomInF(static_cast<float>(range));

}

void QPlainTextEdit_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));

}

QMargins* QPlainTextEdit_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QMargins(self_cast->viewportMargins());

}

void QPlainTextEdit_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->drawFrame(param1);

}

void QPlainTextEdit_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QPlainTextEdit_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QPlainTextEdit_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QPlainTextEdit_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QPlainTextEdit_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QPlainTextEdit_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QPlainTextEdit_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QPlainTextEdit_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QPlainTextEdit_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QPlainTextEdit_delete(QPlainTextEdit* self) {
	delete self;
}

class MiqtVirtualQPlainTextDocumentLayout final : public QPlainTextDocumentLayout {
public:

	MiqtVirtualQPlainTextDocumentLayout(QTextDocument* document): QPlainTextDocumentLayout(document) {};

	virtual ~MiqtVirtualQPlainTextDocumentLayout() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__draw = 0;

	// Subclass to allow providing a Go implementation
	virtual void draw(QPainter* param1, const QAbstractTextDocumentLayout::PaintContext& param2) override {
		if (handle__draw == 0) {
			QPlainTextDocumentLayout::draw(param1, param2);
			return;
		}
		
		QPainter* sigval1 = param1;
		const QAbstractTextDocumentLayout::PaintContext& param2_ret = param2;
		// Cast returned reference into pointer
		QAbstractTextDocumentLayout__PaintContext* sigval2 = const_cast<QAbstractTextDocumentLayout::PaintContext*>(&param2_ret);

		miqt_exec_callback_QPlainTextDocumentLayout_draw(this, handle__draw, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_draw(QPainter* param1, QAbstractTextDocumentLayout__PaintContext* param2) {

		QPlainTextDocumentLayout::draw(param1, *param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hitTest = 0;

	// Subclass to allow providing a Go implementation
	virtual int hitTest(const QPointF& param1, Qt::HitTestAccuracy param2) const override {
		if (handle__hitTest == 0) {
			return QPlainTextDocumentLayout::hitTest(param1, param2);
		}
		
		const QPointF& param1_ret = param1;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&param1_ret);
		Qt::HitTestAccuracy param2_ret = param2;
		int sigval2 = static_cast<int>(param2_ret);

		int callback_return_value = miqt_exec_callback_QPlainTextDocumentLayout_hitTest(this, handle__hitTest, sigval1, sigval2);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_hitTest(QPointF* param1, int param2) const {

		return QPlainTextDocumentLayout::hitTest(*param1, static_cast<Qt::HitTestAccuracy>(param2));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__pageCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int pageCount() const override {
		if (handle__pageCount == 0) {
			return QPlainTextDocumentLayout::pageCount();
		}
		

		int callback_return_value = miqt_exec_callback_QPlainTextDocumentLayout_pageCount(this, handle__pageCount);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_pageCount() const {

		return QPlainTextDocumentLayout::pageCount();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__documentSize = 0;

	// Subclass to allow providing a Go implementation
	virtual QSizeF documentSize() const override {
		if (handle__documentSize == 0) {
			return QPlainTextDocumentLayout::documentSize();
		}
		

		QSizeF* callback_return_value = miqt_exec_callback_QPlainTextDocumentLayout_documentSize(this, handle__documentSize);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSizeF* virtualbase_documentSize() const {

		return new QSizeF(QPlainTextDocumentLayout::documentSize());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__frameBoundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF frameBoundingRect(QTextFrame* param1) const override {
		if (handle__frameBoundingRect == 0) {
			return QPlainTextDocumentLayout::frameBoundingRect(param1);
		}
		
		QTextFrame* sigval1 = param1;

		QRectF* callback_return_value = miqt_exec_callback_QPlainTextDocumentLayout_frameBoundingRect(this, handle__frameBoundingRect, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_frameBoundingRect(QTextFrame* param1) const {

		return new QRectF(QPlainTextDocumentLayout::frameBoundingRect(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockBoundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF blockBoundingRect(const QTextBlock& block) const override {
		if (handle__blockBoundingRect == 0) {
			return QPlainTextDocumentLayout::blockBoundingRect(block);
		}
		
		const QTextBlock& block_ret = block;
		// Cast returned reference into pointer
		QTextBlock* sigval1 = const_cast<QTextBlock*>(&block_ret);

		QRectF* callback_return_value = miqt_exec_callback_QPlainTextDocumentLayout_blockBoundingRect(this, handle__blockBoundingRect, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_blockBoundingRect(QTextBlock* block) const {

		return new QRectF(QPlainTextDocumentLayout::blockBoundingRect(*block));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__documentChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void documentChanged(int from, int param2, int charsAdded) override {
		if (handle__documentChanged == 0) {
			QPlainTextDocumentLayout::documentChanged(from, param2, charsAdded);
			return;
		}
		
		int sigval1 = from;
		int sigval2 = param2;
		int sigval3 = charsAdded;

		miqt_exec_callback_QPlainTextDocumentLayout_documentChanged(this, handle__documentChanged, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_documentChanged(int from, int param2, int charsAdded) {

		QPlainTextDocumentLayout::documentChanged(static_cast<int>(from), static_cast<int>(param2), static_cast<int>(charsAdded));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeInlineObject = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeInlineObject(QTextInlineObject item, int posInDocument, const QTextFormat& format) override {
		if (handle__resizeInlineObject == 0) {
			QPlainTextDocumentLayout::resizeInlineObject(item, posInDocument, format);
			return;
		}
		
		QTextInlineObject* sigval1 = new QTextInlineObject(item);
		int sigval2 = posInDocument;
		const QTextFormat& format_ret = format;
		// Cast returned reference into pointer
		QTextFormat* sigval3 = const_cast<QTextFormat*>(&format_ret);

		miqt_exec_callback_QPlainTextDocumentLayout_resizeInlineObject(this, handle__resizeInlineObject, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeInlineObject(QTextInlineObject* item, int posInDocument, QTextFormat* format) {

		QPlainTextDocumentLayout::resizeInlineObject(*item, static_cast<int>(posInDocument), *format);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__positionInlineObject = 0;

	// Subclass to allow providing a Go implementation
	virtual void positionInlineObject(QTextInlineObject item, int posInDocument, const QTextFormat& format) override {
		if (handle__positionInlineObject == 0) {
			QPlainTextDocumentLayout::positionInlineObject(item, posInDocument, format);
			return;
		}
		
		QTextInlineObject* sigval1 = new QTextInlineObject(item);
		int sigval2 = posInDocument;
		const QTextFormat& format_ret = format;
		// Cast returned reference into pointer
		QTextFormat* sigval3 = const_cast<QTextFormat*>(&format_ret);

		miqt_exec_callback_QPlainTextDocumentLayout_positionInlineObject(this, handle__positionInlineObject, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_positionInlineObject(QTextInlineObject* item, int posInDocument, QTextFormat* format) {

		QPlainTextDocumentLayout::positionInlineObject(*item, static_cast<int>(posInDocument), *format);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawInlineObject = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawInlineObject(QPainter* painter, const QRectF& rect, QTextInlineObject object, int posInDocument, const QTextFormat& format) override {
		if (handle__drawInlineObject == 0) {
			QPlainTextDocumentLayout::drawInlineObject(painter, rect, object, posInDocument, format);
			return;
		}
		
		QPainter* sigval1 = painter;
		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval2 = const_cast<QRectF*>(&rect_ret);
		QTextInlineObject* sigval3 = new QTextInlineObject(object);
		int sigval4 = posInDocument;
		const QTextFormat& format_ret = format;
		// Cast returned reference into pointer
		QTextFormat* sigval5 = const_cast<QTextFormat*>(&format_ret);

		miqt_exec_callback_QPlainTextDocumentLayout_drawInlineObject(this, handle__drawInlineObject, sigval1, sigval2, sigval3, sigval4, sigval5);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_drawInlineObject(QPainter* painter, QRectF* rect, QTextInlineObject* object, int posInDocument, QTextFormat* format) {

		QPlainTextDocumentLayout::drawInlineObject(painter, *rect, *object, static_cast<int>(posInDocument), *format);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QPlainTextDocumentLayout::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QPlainTextDocumentLayout_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QPlainTextDocumentLayout::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QPlainTextDocumentLayout::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QPlainTextDocumentLayout_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QPlainTextDocumentLayout::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QPlainTextDocumentLayout::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QPlainTextDocumentLayout_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QPlainTextDocumentLayout::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QPlainTextDocumentLayout::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QPlainTextDocumentLayout_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QPlainTextDocumentLayout::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QPlainTextDocumentLayout::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPlainTextDocumentLayout_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QPlainTextDocumentLayout::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QPlainTextDocumentLayout::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPlainTextDocumentLayout_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QPlainTextDocumentLayout::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QPlainTextDocumentLayout::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPlainTextDocumentLayout_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QPlainTextDocumentLayout::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend int QPlainTextDocumentLayout_protectedbase_formatIndex(bool* _dynamic_cast_ok, void* self, int pos);
	friend QTextCharFormat* QPlainTextDocumentLayout_protectedbase_format(bool* _dynamic_cast_ok, void* self, int pos);
	friend QObject* QPlainTextDocumentLayout_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QPlainTextDocumentLayout_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QPlainTextDocumentLayout_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QPlainTextDocumentLayout_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QPlainTextDocumentLayout* QPlainTextDocumentLayout_new(QTextDocument* document) {
	return new MiqtVirtualQPlainTextDocumentLayout(document);
}

void QPlainTextDocumentLayout_virtbase(QPlainTextDocumentLayout* src, QAbstractTextDocumentLayout** outptr_QAbstractTextDocumentLayout) {
	*outptr_QAbstractTextDocumentLayout = static_cast<QAbstractTextDocumentLayout*>(src);
}

QMetaObject* QPlainTextDocumentLayout_metaObject(const QPlainTextDocumentLayout* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPlainTextDocumentLayout_metacast(QPlainTextDocumentLayout* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPlainTextDocumentLayout_tr(const char* s) {
	QString _ret = QPlainTextDocumentLayout::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPlainTextDocumentLayout_draw(QPlainTextDocumentLayout* self, QPainter* param1, QAbstractTextDocumentLayout__PaintContext* param2) {
	self->draw(param1, *param2);
}

int QPlainTextDocumentLayout_hitTest(const QPlainTextDocumentLayout* self, QPointF* param1, int param2) {
	return self->hitTest(*param1, static_cast<Qt::HitTestAccuracy>(param2));
}

int QPlainTextDocumentLayout_pageCount(const QPlainTextDocumentLayout* self) {
	return self->pageCount();
}

QSizeF* QPlainTextDocumentLayout_documentSize(const QPlainTextDocumentLayout* self) {
	return new QSizeF(self->documentSize());
}

QRectF* QPlainTextDocumentLayout_frameBoundingRect(const QPlainTextDocumentLayout* self, QTextFrame* param1) {
	return new QRectF(self->frameBoundingRect(param1));
}

QRectF* QPlainTextDocumentLayout_blockBoundingRect(const QPlainTextDocumentLayout* self, QTextBlock* block) {
	return new QRectF(self->blockBoundingRect(*block));
}

void QPlainTextDocumentLayout_ensureBlockLayout(const QPlainTextDocumentLayout* self, QTextBlock* block) {
	self->ensureBlockLayout(*block);
}

void QPlainTextDocumentLayout_setCursorWidth(QPlainTextDocumentLayout* self, int width) {
	self->setCursorWidth(static_cast<int>(width));
}

int QPlainTextDocumentLayout_cursorWidth(const QPlainTextDocumentLayout* self) {
	return self->cursorWidth();
}

void QPlainTextDocumentLayout_requestUpdate(QPlainTextDocumentLayout* self) {
	self->requestUpdate();
}

struct miqt_string QPlainTextDocumentLayout_tr2(const char* s, const char* c) {
	QString _ret = QPlainTextDocumentLayout::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPlainTextDocumentLayout_tr3(const char* s, const char* c, int n) {
	QString _ret = QPlainTextDocumentLayout::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QPlainTextDocumentLayout_override_virtual_draw(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__draw = slot;
	return true;
}

void QPlainTextDocumentLayout_virtualbase_draw(void* self, QPainter* param1, QAbstractTextDocumentLayout__PaintContext* param2) {
	( (MiqtVirtualQPlainTextDocumentLayout*)(self) )->virtualbase_draw(param1, param2);
}

bool QPlainTextDocumentLayout_override_virtual_hitTest(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hitTest = slot;
	return true;
}

int QPlainTextDocumentLayout_virtualbase_hitTest(const void* self, QPointF* param1, int param2) {
	return ( (const MiqtVirtualQPlainTextDocumentLayout*)(self) )->virtualbase_hitTest(param1, param2);
}

bool QPlainTextDocumentLayout_override_virtual_pageCount(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__pageCount = slot;
	return true;
}

int QPlainTextDocumentLayout_virtualbase_pageCount(const void* self) {
	return ( (const MiqtVirtualQPlainTextDocumentLayout*)(self) )->virtualbase_pageCount();
}

bool QPlainTextDocumentLayout_override_virtual_documentSize(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__documentSize = slot;
	return true;
}

QSizeF* QPlainTextDocumentLayout_virtualbase_documentSize(const void* self) {
	return ( (const MiqtVirtualQPlainTextDocumentLayout*)(self) )->virtualbase_documentSize();
}

bool QPlainTextDocumentLayout_override_virtual_frameBoundingRect(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__frameBoundingRect = slot;
	return true;
}

QRectF* QPlainTextDocumentLayout_virtualbase_frameBoundingRect(const void* self, QTextFrame* param1) {
	return ( (const MiqtVirtualQPlainTextDocumentLayout*)(self) )->virtualbase_frameBoundingRect(param1);
}

bool QPlainTextDocumentLayout_override_virtual_blockBoundingRect(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__blockBoundingRect = slot;
	return true;
}

QRectF* QPlainTextDocumentLayout_virtualbase_blockBoundingRect(const void* self, QTextBlock* block) {
	return ( (const MiqtVirtualQPlainTextDocumentLayout*)(self) )->virtualbase_blockBoundingRect(block);
}

bool QPlainTextDocumentLayout_override_virtual_documentChanged(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__documentChanged = slot;
	return true;
}

void QPlainTextDocumentLayout_virtualbase_documentChanged(void* self, int from, int param2, int charsAdded) {
	( (MiqtVirtualQPlainTextDocumentLayout*)(self) )->virtualbase_documentChanged(from, param2, charsAdded);
}

bool QPlainTextDocumentLayout_override_virtual_resizeInlineObject(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeInlineObject = slot;
	return true;
}

void QPlainTextDocumentLayout_virtualbase_resizeInlineObject(void* self, QTextInlineObject* item, int posInDocument, QTextFormat* format) {
	( (MiqtVirtualQPlainTextDocumentLayout*)(self) )->virtualbase_resizeInlineObject(item, posInDocument, format);
}

bool QPlainTextDocumentLayout_override_virtual_positionInlineObject(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__positionInlineObject = slot;
	return true;
}

void QPlainTextDocumentLayout_virtualbase_positionInlineObject(void* self, QTextInlineObject* item, int posInDocument, QTextFormat* format) {
	( (MiqtVirtualQPlainTextDocumentLayout*)(self) )->virtualbase_positionInlineObject(item, posInDocument, format);
}

bool QPlainTextDocumentLayout_override_virtual_drawInlineObject(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__drawInlineObject = slot;
	return true;
}

void QPlainTextDocumentLayout_virtualbase_drawInlineObject(void* self, QPainter* painter, QRectF* rect, QTextInlineObject* object, int posInDocument, QTextFormat* format) {
	( (MiqtVirtualQPlainTextDocumentLayout*)(self) )->virtualbase_drawInlineObject(painter, rect, object, posInDocument, format);
}

bool QPlainTextDocumentLayout_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QPlainTextDocumentLayout_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQPlainTextDocumentLayout*)(self) )->virtualbase_event(event);
}

bool QPlainTextDocumentLayout_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QPlainTextDocumentLayout_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQPlainTextDocumentLayout*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QPlainTextDocumentLayout_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QPlainTextDocumentLayout_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQPlainTextDocumentLayout*)(self) )->virtualbase_timerEvent(event);
}

bool QPlainTextDocumentLayout_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QPlainTextDocumentLayout_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQPlainTextDocumentLayout*)(self) )->virtualbase_childEvent(event);
}

bool QPlainTextDocumentLayout_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QPlainTextDocumentLayout_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQPlainTextDocumentLayout*)(self) )->virtualbase_customEvent(event);
}

bool QPlainTextDocumentLayout_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QPlainTextDocumentLayout_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQPlainTextDocumentLayout*)(self) )->virtualbase_connectNotify(signal);
}

bool QPlainTextDocumentLayout_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QPlainTextDocumentLayout_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQPlainTextDocumentLayout*)(self) )->virtualbase_disconnectNotify(signal);
}

int QPlainTextDocumentLayout_protectedbase_formatIndex(bool* _dynamic_cast_ok, void* self, int pos) {
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->formatIndex(static_cast<int>(pos));

}

QTextCharFormat* QPlainTextDocumentLayout_protectedbase_format(bool* _dynamic_cast_ok, void* self, int pos) {
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QTextCharFormat(self_cast->format(static_cast<int>(pos)));

}

QObject* QPlainTextDocumentLayout_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QPlainTextDocumentLayout_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QPlainTextDocumentLayout_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QPlainTextDocumentLayout_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QPlainTextDocumentLayout_delete(QPlainTextDocumentLayout* self) {
	delete self;
}

