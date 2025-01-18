#include <QAbstractScrollArea>
#include <QAbstractTextDocumentLayout>
#define WORKAROUND_INNER_CLASS_DEFINITION_QAbstractTextDocumentLayout__PaintContext
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFrame>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QList>
#include <QMenu>
#include <QMetaObject>
#include <QMimeData>
#include <QMouseEvent>
#include <QObject>
#include <QPagedPaintDevice>
#include <QPaintDevice>
#include <QPaintEvent>
#include <QPainter>
#include <QPlainTextDocumentLayout>
#include <QPlainTextEdit>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRectF>
#include <QRegExp>
#include <QRegularExpression>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
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

void miqt_exec_callback_QPlainTextEdit_TextChanged(intptr_t);
void miqt_exec_callback_QPlainTextEdit_UndoAvailable(intptr_t, bool);
void miqt_exec_callback_QPlainTextEdit_RedoAvailable(intptr_t, bool);
void miqt_exec_callback_QPlainTextEdit_CopyAvailable(intptr_t, bool);
void miqt_exec_callback_QPlainTextEdit_SelectionChanged(intptr_t);
void miqt_exec_callback_QPlainTextEdit_CursorPositionChanged(intptr_t);
void miqt_exec_callback_QPlainTextEdit_UpdateRequest(intptr_t, QRect*, int);
void miqt_exec_callback_QPlainTextEdit_BlockCountChanged(intptr_t, int);
void miqt_exec_callback_QPlainTextEdit_ModificationChanged(intptr_t, bool);
QVariant* miqt_exec_callback_QPlainTextEdit_LoadResource(void*, intptr_t, int, QUrl*);
QVariant* miqt_exec_callback_QPlainTextEdit_InputMethodQuery(void*, intptr_t, int);
bool miqt_exec_callback_QPlainTextEdit_Event(void*, intptr_t, QEvent*);
void miqt_exec_callback_QPlainTextEdit_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QPlainTextEdit_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QPlainTextEdit_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QPlainTextEdit_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QPlainTextEdit_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QPlainTextEdit_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPlainTextEdit_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPlainTextEdit_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPlainTextEdit_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
bool miqt_exec_callback_QPlainTextEdit_FocusNextPrevChild(void*, intptr_t, bool);
void miqt_exec_callback_QPlainTextEdit_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QPlainTextEdit_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QPlainTextEdit_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QPlainTextEdit_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QPlainTextEdit_DropEvent(void*, intptr_t, QDropEvent*);
void miqt_exec_callback_QPlainTextEdit_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QPlainTextEdit_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QPlainTextEdit_ShowEvent(void*, intptr_t, QShowEvent*);
void miqt_exec_callback_QPlainTextEdit_ChangeEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QPlainTextEdit_WheelEvent(void*, intptr_t, QWheelEvent*);
QMimeData* miqt_exec_callback_QPlainTextEdit_CreateMimeDataFromSelection(void*, intptr_t);
bool miqt_exec_callback_QPlainTextEdit_CanInsertFromMimeData(void*, intptr_t, QMimeData*);
void miqt_exec_callback_QPlainTextEdit_InsertFromMimeData(void*, intptr_t, QMimeData*);
void miqt_exec_callback_QPlainTextEdit_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
void miqt_exec_callback_QPlainTextEdit_ScrollContentsBy(void*, intptr_t, int, int);
void miqt_exec_callback_QPlainTextEdit_DoSetTextCursor(void*, intptr_t, QTextCursor*);
QSize* miqt_exec_callback_QPlainTextEdit_MinimumSizeHint(void*, intptr_t);
QSize* miqt_exec_callback_QPlainTextEdit_SizeHint(void*, intptr_t);
void miqt_exec_callback_QPlainTextEdit_SetupViewport(void*, intptr_t, QWidget*);
bool miqt_exec_callback_QPlainTextEdit_EventFilter(void*, intptr_t, QObject*, QEvent*);
bool miqt_exec_callback_QPlainTextEdit_ViewportEvent(void*, intptr_t, QEvent*);
QSize* miqt_exec_callback_QPlainTextEdit_ViewportSizeHint(void*, intptr_t);
void miqt_exec_callback_QPlainTextDocumentLayout_Draw(void*, intptr_t, QPainter*, QAbstractTextDocumentLayout__PaintContext*);
int miqt_exec_callback_QPlainTextDocumentLayout_HitTest(void*, intptr_t, QPointF*, int);
int miqt_exec_callback_QPlainTextDocumentLayout_PageCount(void*, intptr_t);
QSizeF* miqt_exec_callback_QPlainTextDocumentLayout_DocumentSize(void*, intptr_t);
QRectF* miqt_exec_callback_QPlainTextDocumentLayout_FrameBoundingRect(void*, intptr_t, QTextFrame*);
QRectF* miqt_exec_callback_QPlainTextDocumentLayout_BlockBoundingRect(void*, intptr_t, QTextBlock*);
void miqt_exec_callback_QPlainTextDocumentLayout_DocumentChanged(void*, intptr_t, int, int, int);
void miqt_exec_callback_QPlainTextDocumentLayout_ResizeInlineObject(void*, intptr_t, QTextInlineObject*, int, QTextFormat*);
void miqt_exec_callback_QPlainTextDocumentLayout_PositionInlineObject(void*, intptr_t, QTextInlineObject*, int, QTextFormat*);
void miqt_exec_callback_QPlainTextDocumentLayout_DrawInlineObject(void*, intptr_t, QPainter*, QRectF*, QTextInlineObject*, int, QTextFormat*);
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
	intptr_t handle__LoadResource = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant loadResource(int typeVal, const QUrl& name) override {
		if (handle__LoadResource == 0) {
			return QPlainTextEdit::loadResource(typeVal, name);
		}
		
		int sigval1 = typeVal;
		const QUrl& name_ret = name;
		// Cast returned reference into pointer
		QUrl* sigval2 = const_cast<QUrl*>(&name_ret);

		QVariant* callback_return_value = miqt_exec_callback_QPlainTextEdit_LoadResource(this, handle__LoadResource, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_LoadResource(int typeVal, QUrl* name) {

		return new QVariant(QPlainTextEdit::loadResource(static_cast<int>(typeVal), *name));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery property) const override {
		if (handle__InputMethodQuery == 0) {
			return QPlainTextEdit::inputMethodQuery(property);
		}
		
		Qt::InputMethodQuery property_ret = property;
		int sigval1 = static_cast<int>(property_ret);

		QVariant* callback_return_value = miqt_exec_callback_QPlainTextEdit_InputMethodQuery(const_cast<MiqtVirtualQPlainTextEdit*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int property) const {

		return new QVariant(QPlainTextEdit::inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QPlainTextEdit::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QPlainTextEdit_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QPlainTextEdit::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* e) override {
		if (handle__TimerEvent == 0) {
			QPlainTextEdit::timerEvent(e);
			return;
		}
		
		QTimerEvent* sigval1 = e;

		miqt_exec_callback_QPlainTextEdit_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* e) {

		QPlainTextEdit::timerEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* e) override {
		if (handle__KeyPressEvent == 0) {
			QPlainTextEdit::keyPressEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QPlainTextEdit_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* e) {

		QPlainTextEdit::keyPressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* e) override {
		if (handle__KeyReleaseEvent == 0) {
			QPlainTextEdit::keyReleaseEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QPlainTextEdit_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* e) {

		QPlainTextEdit::keyReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* e) override {
		if (handle__ResizeEvent == 0) {
			QPlainTextEdit::resizeEvent(e);
			return;
		}
		
		QResizeEvent* sigval1 = e;

		miqt_exec_callback_QPlainTextEdit_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* e) {

		QPlainTextEdit::resizeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* e) override {
		if (handle__PaintEvent == 0) {
			QPlainTextEdit::paintEvent(e);
			return;
		}
		
		QPaintEvent* sigval1 = e;

		miqt_exec_callback_QPlainTextEdit_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* e) {

		QPlainTextEdit::paintEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* e) override {
		if (handle__MousePressEvent == 0) {
			QPlainTextEdit::mousePressEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QPlainTextEdit_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* e) {

		QPlainTextEdit::mousePressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* e) override {
		if (handle__MouseMoveEvent == 0) {
			QPlainTextEdit::mouseMoveEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QPlainTextEdit_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* e) {

		QPlainTextEdit::mouseMoveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (handle__MouseReleaseEvent == 0) {
			QPlainTextEdit::mouseReleaseEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QPlainTextEdit_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* e) {

		QPlainTextEdit::mouseReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QPlainTextEdit::mouseDoubleClickEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QPlainTextEdit_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* e) {

		QPlainTextEdit::mouseDoubleClickEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QPlainTextEdit::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QPlainTextEdit_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QPlainTextEdit::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* e) override {
		if (handle__ContextMenuEvent == 0) {
			QPlainTextEdit::contextMenuEvent(e);
			return;
		}
		
		QContextMenuEvent* sigval1 = e;

		miqt_exec_callback_QPlainTextEdit_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* e) {

		QPlainTextEdit::contextMenuEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* e) override {
		if (handle__DragEnterEvent == 0) {
			QPlainTextEdit::dragEnterEvent(e);
			return;
		}
		
		QDragEnterEvent* sigval1 = e;

		miqt_exec_callback_QPlainTextEdit_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* e) {

		QPlainTextEdit::dragEnterEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
		if (handle__DragLeaveEvent == 0) {
			QPlainTextEdit::dragLeaveEvent(e);
			return;
		}
		
		QDragLeaveEvent* sigval1 = e;

		miqt_exec_callback_QPlainTextEdit_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* e) {

		QPlainTextEdit::dragLeaveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* e) override {
		if (handle__DragMoveEvent == 0) {
			QPlainTextEdit::dragMoveEvent(e);
			return;
		}
		
		QDragMoveEvent* sigval1 = e;

		miqt_exec_callback_QPlainTextEdit_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* e) {

		QPlainTextEdit::dragMoveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* e) override {
		if (handle__DropEvent == 0) {
			QPlainTextEdit::dropEvent(e);
			return;
		}
		
		QDropEvent* sigval1 = e;

		miqt_exec_callback_QPlainTextEdit_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* e) {

		QPlainTextEdit::dropEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* e) override {
		if (handle__FocusInEvent == 0) {
			QPlainTextEdit::focusInEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QPlainTextEdit_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* e) {

		QPlainTextEdit::focusInEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* e) override {
		if (handle__FocusOutEvent == 0) {
			QPlainTextEdit::focusOutEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QPlainTextEdit_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* e) {

		QPlainTextEdit::focusOutEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (handle__ShowEvent == 0) {
			QPlainTextEdit::showEvent(param1);
			return;
		}
		
		QShowEvent* sigval1 = param1;

		miqt_exec_callback_QPlainTextEdit_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* param1) {

		QPlainTextEdit::showEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (handle__ChangeEvent == 0) {
			QPlainTextEdit::changeEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QPlainTextEdit_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* e) {

		QPlainTextEdit::changeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* e) override {
		if (handle__WheelEvent == 0) {
			QPlainTextEdit::wheelEvent(e);
			return;
		}
		
		QWheelEvent* sigval1 = e;

		miqt_exec_callback_QPlainTextEdit_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* e) {

		QPlainTextEdit::wheelEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CreateMimeDataFromSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual QMimeData* createMimeDataFromSelection() const override {
		if (handle__CreateMimeDataFromSelection == 0) {
			return QPlainTextEdit::createMimeDataFromSelection();
		}
		

		QMimeData* callback_return_value = miqt_exec_callback_QPlainTextEdit_CreateMimeDataFromSelection(const_cast<MiqtVirtualQPlainTextEdit*>(this), handle__CreateMimeDataFromSelection);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QMimeData* virtualbase_CreateMimeDataFromSelection() const {

		return QPlainTextEdit::createMimeDataFromSelection();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CanInsertFromMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canInsertFromMimeData(const QMimeData* source) const override {
		if (handle__CanInsertFromMimeData == 0) {
			return QPlainTextEdit::canInsertFromMimeData(source);
		}
		
		QMimeData* sigval1 = (QMimeData*) source;

		bool callback_return_value = miqt_exec_callback_QPlainTextEdit_CanInsertFromMimeData(const_cast<MiqtVirtualQPlainTextEdit*>(this), handle__CanInsertFromMimeData, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CanInsertFromMimeData(QMimeData* source) const {

		return QPlainTextEdit::canInsertFromMimeData(source);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InsertFromMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual void insertFromMimeData(const QMimeData* source) override {
		if (handle__InsertFromMimeData == 0) {
			QPlainTextEdit::insertFromMimeData(source);
			return;
		}
		
		QMimeData* sigval1 = (QMimeData*) source;

		miqt_exec_callback_QPlainTextEdit_InsertFromMimeData(this, handle__InsertFromMimeData, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InsertFromMimeData(QMimeData* source) {

		QPlainTextEdit::insertFromMimeData(source);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QPlainTextEdit::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QPlainTextEdit_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QPlainTextEdit::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ScrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (handle__ScrollContentsBy == 0) {
			QPlainTextEdit::scrollContentsBy(dx, dy);
			return;
		}
		
		int sigval1 = dx;
		int sigval2 = dy;

		miqt_exec_callback_QPlainTextEdit_ScrollContentsBy(this, handle__ScrollContentsBy, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ScrollContentsBy(int dx, int dy) {

		QPlainTextEdit::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DoSetTextCursor = 0;

	// Subclass to allow providing a Go implementation
	virtual void doSetTextCursor(const QTextCursor& cursor) override {
		if (handle__DoSetTextCursor == 0) {
			QPlainTextEdit::doSetTextCursor(cursor);
			return;
		}
		
		const QTextCursor& cursor_ret = cursor;
		// Cast returned reference into pointer
		QTextCursor* sigval1 = const_cast<QTextCursor*>(&cursor_ret);

		miqt_exec_callback_QPlainTextEdit_DoSetTextCursor(this, handle__DoSetTextCursor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DoSetTextCursor(QTextCursor* cursor) {

		QPlainTextEdit::doSetTextCursor(*cursor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QPlainTextEdit::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QPlainTextEdit_MinimumSizeHint(const_cast<MiqtVirtualQPlainTextEdit*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QPlainTextEdit::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QPlainTextEdit::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QPlainTextEdit_SizeHint(const_cast<MiqtVirtualQPlainTextEdit*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QPlainTextEdit::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetupViewport = 0;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (handle__SetupViewport == 0) {
			QPlainTextEdit::setupViewport(viewport);
			return;
		}
		
		QWidget* sigval1 = viewport;

		miqt_exec_callback_QPlainTextEdit_SetupViewport(this, handle__SetupViewport, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetupViewport(QWidget* viewport) {

		QPlainTextEdit::setupViewport(viewport);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__EventFilter == 0) {
			return QPlainTextEdit::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QPlainTextEdit_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* param1, QEvent* param2) {

		return QPlainTextEdit::eventFilter(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewportEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* param1) override {
		if (handle__ViewportEvent == 0) {
			return QPlainTextEdit::viewportEvent(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QPlainTextEdit_ViewportEvent(this, handle__ViewportEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_ViewportEvent(QEvent* param1) {

		return QPlainTextEdit::viewportEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewportSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (handle__ViewportSizeHint == 0) {
			return QPlainTextEdit::viewportSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QPlainTextEdit_ViewportSizeHint(const_cast<MiqtVirtualQPlainTextEdit*>(this), handle__ViewportSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_ViewportSizeHint() const {

		return new QSize(QPlainTextEdit::viewportSizeHint());

	}

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

QMetaObject* QPlainTextEdit_MetaObject(const QPlainTextEdit* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPlainTextEdit_Metacast(QPlainTextEdit* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPlainTextEdit_Tr(const char* s) {
	QString _ret = QPlainTextEdit::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPlainTextEdit_TrUtf8(const char* s) {
	QString _ret = QPlainTextEdit::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPlainTextEdit_SetDocument(QPlainTextEdit* self, QTextDocument* document) {
	self->setDocument(document);
}

QTextDocument* QPlainTextEdit_Document(const QPlainTextEdit* self) {
	return self->document();
}

void QPlainTextEdit_SetPlaceholderText(QPlainTextEdit* self, struct miqt_string placeholderText) {
	QString placeholderText_QString = QString::fromUtf8(placeholderText.data, placeholderText.len);
	self->setPlaceholderText(placeholderText_QString);
}

struct miqt_string QPlainTextEdit_PlaceholderText(const QPlainTextEdit* self) {
	QString _ret = self->placeholderText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPlainTextEdit_SetTextCursor(QPlainTextEdit* self, QTextCursor* cursor) {
	self->setTextCursor(*cursor);
}

QTextCursor* QPlainTextEdit_TextCursor(const QPlainTextEdit* self) {
	return new QTextCursor(self->textCursor());
}

bool QPlainTextEdit_IsReadOnly(const QPlainTextEdit* self) {
	return self->isReadOnly();
}

void QPlainTextEdit_SetReadOnly(QPlainTextEdit* self, bool ro) {
	self->setReadOnly(ro);
}

void QPlainTextEdit_SetTextInteractionFlags(QPlainTextEdit* self, int flags) {
	self->setTextInteractionFlags(static_cast<Qt::TextInteractionFlags>(flags));
}

int QPlainTextEdit_TextInteractionFlags(const QPlainTextEdit* self) {
	Qt::TextInteractionFlags _ret = self->textInteractionFlags();
	return static_cast<int>(_ret);
}

void QPlainTextEdit_MergeCurrentCharFormat(QPlainTextEdit* self, QTextCharFormat* modifier) {
	self->mergeCurrentCharFormat(*modifier);
}

void QPlainTextEdit_SetCurrentCharFormat(QPlainTextEdit* self, QTextCharFormat* format) {
	self->setCurrentCharFormat(*format);
}

QTextCharFormat* QPlainTextEdit_CurrentCharFormat(const QPlainTextEdit* self) {
	return new QTextCharFormat(self->currentCharFormat());
}

bool QPlainTextEdit_TabChangesFocus(const QPlainTextEdit* self) {
	return self->tabChangesFocus();
}

void QPlainTextEdit_SetTabChangesFocus(QPlainTextEdit* self, bool b) {
	self->setTabChangesFocus(b);
}

void QPlainTextEdit_SetDocumentTitle(QPlainTextEdit* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	self->setDocumentTitle(title_QString);
}

struct miqt_string QPlainTextEdit_DocumentTitle(const QPlainTextEdit* self) {
	QString _ret = self->documentTitle();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QPlainTextEdit_IsUndoRedoEnabled(const QPlainTextEdit* self) {
	return self->isUndoRedoEnabled();
}

void QPlainTextEdit_SetUndoRedoEnabled(QPlainTextEdit* self, bool enable) {
	self->setUndoRedoEnabled(enable);
}

void QPlainTextEdit_SetMaximumBlockCount(QPlainTextEdit* self, int maximum) {
	self->setMaximumBlockCount(static_cast<int>(maximum));
}

int QPlainTextEdit_MaximumBlockCount(const QPlainTextEdit* self) {
	return self->maximumBlockCount();
}

int QPlainTextEdit_LineWrapMode(const QPlainTextEdit* self) {
	QPlainTextEdit::LineWrapMode _ret = self->lineWrapMode();
	return static_cast<int>(_ret);
}

void QPlainTextEdit_SetLineWrapMode(QPlainTextEdit* self, int mode) {
	self->setLineWrapMode(static_cast<QPlainTextEdit::LineWrapMode>(mode));
}

int QPlainTextEdit_WordWrapMode(const QPlainTextEdit* self) {
	QTextOption::WrapMode _ret = self->wordWrapMode();
	return static_cast<int>(_ret);
}

void QPlainTextEdit_SetWordWrapMode(QPlainTextEdit* self, int policy) {
	self->setWordWrapMode(static_cast<QTextOption::WrapMode>(policy));
}

void QPlainTextEdit_SetBackgroundVisible(QPlainTextEdit* self, bool visible) {
	self->setBackgroundVisible(visible);
}

bool QPlainTextEdit_BackgroundVisible(const QPlainTextEdit* self) {
	return self->backgroundVisible();
}

void QPlainTextEdit_SetCenterOnScroll(QPlainTextEdit* self, bool enabled) {
	self->setCenterOnScroll(enabled);
}

bool QPlainTextEdit_CenterOnScroll(const QPlainTextEdit* self) {
	return self->centerOnScroll();
}

bool QPlainTextEdit_Find(QPlainTextEdit* self, struct miqt_string exp) {
	QString exp_QString = QString::fromUtf8(exp.data, exp.len);
	return self->find(exp_QString);
}

bool QPlainTextEdit_FindWithExp(QPlainTextEdit* self, QRegExp* exp) {
	return self->find(*exp);
}

bool QPlainTextEdit_Find2(QPlainTextEdit* self, QRegularExpression* exp) {
	return self->find(*exp);
}

struct miqt_string QPlainTextEdit_ToPlainText(const QPlainTextEdit* self) {
	QString _ret = self->toPlainText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPlainTextEdit_EnsureCursorVisible(QPlainTextEdit* self) {
	self->ensureCursorVisible();
}

QVariant* QPlainTextEdit_LoadResource(QPlainTextEdit* self, int typeVal, QUrl* name) {
	return new QVariant(self->loadResource(static_cast<int>(typeVal), *name));
}

QMenu* QPlainTextEdit_CreateStandardContextMenu(QPlainTextEdit* self) {
	return self->createStandardContextMenu();
}

QMenu* QPlainTextEdit_CreateStandardContextMenuWithPosition(QPlainTextEdit* self, QPoint* position) {
	return self->createStandardContextMenu(*position);
}

QTextCursor* QPlainTextEdit_CursorForPosition(const QPlainTextEdit* self, QPoint* pos) {
	return new QTextCursor(self->cursorForPosition(*pos));
}

QRect* QPlainTextEdit_CursorRect(const QPlainTextEdit* self, QTextCursor* cursor) {
	return new QRect(self->cursorRect(*cursor));
}

QRect* QPlainTextEdit_CursorRect2(const QPlainTextEdit* self) {
	return new QRect(self->cursorRect());
}

struct miqt_string QPlainTextEdit_AnchorAt(const QPlainTextEdit* self, QPoint* pos) {
	QString _ret = self->anchorAt(*pos);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QPlainTextEdit_OverwriteMode(const QPlainTextEdit* self) {
	return self->overwriteMode();
}

void QPlainTextEdit_SetOverwriteMode(QPlainTextEdit* self, bool overwrite) {
	self->setOverwriteMode(overwrite);
}

int QPlainTextEdit_TabStopWidth(const QPlainTextEdit* self) {
	return self->tabStopWidth();
}

void QPlainTextEdit_SetTabStopWidth(QPlainTextEdit* self, int width) {
	self->setTabStopWidth(static_cast<int>(width));
}

double QPlainTextEdit_TabStopDistance(const QPlainTextEdit* self) {
	qreal _ret = self->tabStopDistance();
	return static_cast<double>(_ret);
}

void QPlainTextEdit_SetTabStopDistance(QPlainTextEdit* self, double distance) {
	self->setTabStopDistance(static_cast<qreal>(distance));
}

int QPlainTextEdit_CursorWidth(const QPlainTextEdit* self) {
	return self->cursorWidth();
}

void QPlainTextEdit_SetCursorWidth(QPlainTextEdit* self, int width) {
	self->setCursorWidth(static_cast<int>(width));
}

void QPlainTextEdit_SetExtraSelections(QPlainTextEdit* self, struct miqt_array /* of QTextEdit__ExtraSelection* */  selections) {
	QList<QTextEdit::ExtraSelection> selections_QList;
	selections_QList.reserve(selections.len);
	QTextEdit__ExtraSelection** selections_arr = static_cast<QTextEdit__ExtraSelection**>(selections.data);
	for(size_t i = 0; i < selections.len; ++i) {
		selections_QList.push_back(*(selections_arr[i]));
	}
	self->setExtraSelections(selections_QList);
}

struct miqt_array /* of QTextEdit__ExtraSelection* */  QPlainTextEdit_ExtraSelections(const QPlainTextEdit* self) {
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

void QPlainTextEdit_MoveCursor(QPlainTextEdit* self, int operation) {
	self->moveCursor(static_cast<QTextCursor::MoveOperation>(operation));
}

bool QPlainTextEdit_CanPaste(const QPlainTextEdit* self) {
	return self->canPaste();
}

void QPlainTextEdit_Print(const QPlainTextEdit* self, QPagedPaintDevice* printer) {
	self->print(printer);
}

int QPlainTextEdit_BlockCount(const QPlainTextEdit* self) {
	return self->blockCount();
}

QVariant* QPlainTextEdit_InputMethodQuery(const QPlainTextEdit* self, int property) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
}

QVariant* QPlainTextEdit_InputMethodQuery2(const QPlainTextEdit* self, int query, QVariant* argument) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query), *argument));
}

void QPlainTextEdit_SetPlainText(QPlainTextEdit* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setPlainText(text_QString);
}

void QPlainTextEdit_Cut(QPlainTextEdit* self) {
	self->cut();
}

void QPlainTextEdit_Copy(QPlainTextEdit* self) {
	self->copy();
}

void QPlainTextEdit_Paste(QPlainTextEdit* self) {
	self->paste();
}

void QPlainTextEdit_Undo(QPlainTextEdit* self) {
	self->undo();
}

void QPlainTextEdit_Redo(QPlainTextEdit* self) {
	self->redo();
}

void QPlainTextEdit_Clear(QPlainTextEdit* self) {
	self->clear();
}

void QPlainTextEdit_SelectAll(QPlainTextEdit* self) {
	self->selectAll();
}

void QPlainTextEdit_InsertPlainText(QPlainTextEdit* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->insertPlainText(text_QString);
}

void QPlainTextEdit_AppendPlainText(QPlainTextEdit* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->appendPlainText(text_QString);
}

void QPlainTextEdit_AppendHtml(QPlainTextEdit* self, struct miqt_string html) {
	QString html_QString = QString::fromUtf8(html.data, html.len);
	self->appendHtml(html_QString);
}

void QPlainTextEdit_CenterCursor(QPlainTextEdit* self) {
	self->centerCursor();
}

void QPlainTextEdit_ZoomIn(QPlainTextEdit* self) {
	self->zoomIn();
}

void QPlainTextEdit_ZoomOut(QPlainTextEdit* self) {
	self->zoomOut();
}

void QPlainTextEdit_TextChanged(QPlainTextEdit* self) {
	self->textChanged();
}

void QPlainTextEdit_connect_TextChanged(QPlainTextEdit* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit::connect(self, static_cast<void (QPlainTextEdit::*)()>(&QPlainTextEdit::textChanged), self, [=]() {
		miqt_exec_callback_QPlainTextEdit_TextChanged(slot);
	});
}

void QPlainTextEdit_UndoAvailable(QPlainTextEdit* self, bool b) {
	self->undoAvailable(b);
}

void QPlainTextEdit_connect_UndoAvailable(QPlainTextEdit* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit::connect(self, static_cast<void (QPlainTextEdit::*)(bool)>(&QPlainTextEdit::undoAvailable), self, [=](bool b) {
		bool sigval1 = b;
		miqt_exec_callback_QPlainTextEdit_UndoAvailable(slot, sigval1);
	});
}

void QPlainTextEdit_RedoAvailable(QPlainTextEdit* self, bool b) {
	self->redoAvailable(b);
}

void QPlainTextEdit_connect_RedoAvailable(QPlainTextEdit* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit::connect(self, static_cast<void (QPlainTextEdit::*)(bool)>(&QPlainTextEdit::redoAvailable), self, [=](bool b) {
		bool sigval1 = b;
		miqt_exec_callback_QPlainTextEdit_RedoAvailable(slot, sigval1);
	});
}

void QPlainTextEdit_CopyAvailable(QPlainTextEdit* self, bool b) {
	self->copyAvailable(b);
}

void QPlainTextEdit_connect_CopyAvailable(QPlainTextEdit* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit::connect(self, static_cast<void (QPlainTextEdit::*)(bool)>(&QPlainTextEdit::copyAvailable), self, [=](bool b) {
		bool sigval1 = b;
		miqt_exec_callback_QPlainTextEdit_CopyAvailable(slot, sigval1);
	});
}

void QPlainTextEdit_SelectionChanged(QPlainTextEdit* self) {
	self->selectionChanged();
}

void QPlainTextEdit_connect_SelectionChanged(QPlainTextEdit* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit::connect(self, static_cast<void (QPlainTextEdit::*)()>(&QPlainTextEdit::selectionChanged), self, [=]() {
		miqt_exec_callback_QPlainTextEdit_SelectionChanged(slot);
	});
}

void QPlainTextEdit_CursorPositionChanged(QPlainTextEdit* self) {
	self->cursorPositionChanged();
}

void QPlainTextEdit_connect_CursorPositionChanged(QPlainTextEdit* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit::connect(self, static_cast<void (QPlainTextEdit::*)()>(&QPlainTextEdit::cursorPositionChanged), self, [=]() {
		miqt_exec_callback_QPlainTextEdit_CursorPositionChanged(slot);
	});
}

void QPlainTextEdit_UpdateRequest(QPlainTextEdit* self, QRect* rect, int dy) {
	self->updateRequest(*rect, static_cast<int>(dy));
}

void QPlainTextEdit_connect_UpdateRequest(QPlainTextEdit* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit::connect(self, static_cast<void (QPlainTextEdit::*)(const QRect&, int)>(&QPlainTextEdit::updateRequest), self, [=](const QRect& rect, int dy) {
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&rect_ret);
		int sigval2 = dy;
		miqt_exec_callback_QPlainTextEdit_UpdateRequest(slot, sigval1, sigval2);
	});
}

void QPlainTextEdit_BlockCountChanged(QPlainTextEdit* self, int newBlockCount) {
	self->blockCountChanged(static_cast<int>(newBlockCount));
}

void QPlainTextEdit_connect_BlockCountChanged(QPlainTextEdit* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit::connect(self, static_cast<void (QPlainTextEdit::*)(int)>(&QPlainTextEdit::blockCountChanged), self, [=](int newBlockCount) {
		int sigval1 = newBlockCount;
		miqt_exec_callback_QPlainTextEdit_BlockCountChanged(slot, sigval1);
	});
}

void QPlainTextEdit_ModificationChanged(QPlainTextEdit* self, bool param1) {
	self->modificationChanged(param1);
}

void QPlainTextEdit_connect_ModificationChanged(QPlainTextEdit* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit::connect(self, static_cast<void (QPlainTextEdit::*)(bool)>(&QPlainTextEdit::modificationChanged), self, [=](bool param1) {
		bool sigval1 = param1;
		miqt_exec_callback_QPlainTextEdit_ModificationChanged(slot, sigval1);
	});
}

struct miqt_string QPlainTextEdit_Tr2(const char* s, const char* c) {
	QString _ret = QPlainTextEdit::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPlainTextEdit_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPlainTextEdit::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPlainTextEdit_TrUtf82(const char* s, const char* c) {
	QString _ret = QPlainTextEdit::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPlainTextEdit_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QPlainTextEdit::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QPlainTextEdit_Find22(QPlainTextEdit* self, struct miqt_string exp, int options) {
	QString exp_QString = QString::fromUtf8(exp.data, exp.len);
	return self->find(exp_QString, static_cast<QTextDocument::FindFlags>(options));
}

bool QPlainTextEdit_Find23(QPlainTextEdit* self, QRegExp* exp, int options) {
	return self->find(*exp, static_cast<QTextDocument::FindFlags>(options));
}

bool QPlainTextEdit_Find24(QPlainTextEdit* self, QRegularExpression* exp, int options) {
	return self->find(*exp, static_cast<QTextDocument::FindFlags>(options));
}

void QPlainTextEdit_MoveCursor2(QPlainTextEdit* self, int operation, int mode) {
	self->moveCursor(static_cast<QTextCursor::MoveOperation>(operation), static_cast<QTextCursor::MoveMode>(mode));
}

void QPlainTextEdit_ZoomIn1(QPlainTextEdit* self, int rangeVal) {
	self->zoomIn(static_cast<int>(rangeVal));
}

void QPlainTextEdit_ZoomOut1(QPlainTextEdit* self, int rangeVal) {
	self->zoomOut(static_cast<int>(rangeVal));
}

bool QPlainTextEdit_override_virtual_LoadResource(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LoadResource = slot;
	return true;
}

QVariant* QPlainTextEdit_virtualbase_LoadResource(void* self, int typeVal, QUrl* name) {
	return ( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_LoadResource(typeVal, name);
}

bool QPlainTextEdit_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QPlainTextEdit_virtualbase_InputMethodQuery(const void* self, int property) {
	return ( (const MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_InputMethodQuery(property);
}

bool QPlainTextEdit_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QPlainTextEdit_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_Event(e);
}

bool QPlainTextEdit_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_TimerEvent(void* self, QTimerEvent* e) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_TimerEvent(e);
}

bool QPlainTextEdit_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_KeyPressEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_KeyPressEvent(e);
}

bool QPlainTextEdit_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_KeyReleaseEvent(e);
}

bool QPlainTextEdit_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_ResizeEvent(void* self, QResizeEvent* e) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_ResizeEvent(e);
}

bool QPlainTextEdit_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_PaintEvent(void* self, QPaintEvent* e) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_PaintEvent(e);
}

bool QPlainTextEdit_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_MousePressEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_MousePressEvent(e);
}

bool QPlainTextEdit_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_MouseMoveEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_MouseMoveEvent(e);
}

bool QPlainTextEdit_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_MouseReleaseEvent(e);
}

bool QPlainTextEdit_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_MouseDoubleClickEvent(e);
}

bool QPlainTextEdit_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QPlainTextEdit_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QPlainTextEdit_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* e) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_ContextMenuEvent(e);
}

bool QPlainTextEdit_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* e) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_DragEnterEvent(e);
}

bool QPlainTextEdit_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* e) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_DragLeaveEvent(e);
}

bool QPlainTextEdit_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* e) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_DragMoveEvent(e);
}

bool QPlainTextEdit_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_DropEvent(void* self, QDropEvent* e) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_DropEvent(e);
}

bool QPlainTextEdit_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_FocusInEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_FocusInEvent(e);
}

bool QPlainTextEdit_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_FocusOutEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_FocusOutEvent(e);
}

bool QPlainTextEdit_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_ShowEvent(void* self, QShowEvent* param1) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_ShowEvent(param1);
}

bool QPlainTextEdit_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_ChangeEvent(void* self, QEvent* e) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_ChangeEvent(e);
}

bool QPlainTextEdit_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_WheelEvent(void* self, QWheelEvent* e) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_WheelEvent(e);
}

bool QPlainTextEdit_override_virtual_CreateMimeDataFromSelection(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CreateMimeDataFromSelection = slot;
	return true;
}

QMimeData* QPlainTextEdit_virtualbase_CreateMimeDataFromSelection(const void* self) {
	return ( (const MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_CreateMimeDataFromSelection();
}

bool QPlainTextEdit_override_virtual_CanInsertFromMimeData(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CanInsertFromMimeData = slot;
	return true;
}

bool QPlainTextEdit_virtualbase_CanInsertFromMimeData(const void* self, QMimeData* source) {
	return ( (const MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_CanInsertFromMimeData(source);
}

bool QPlainTextEdit_override_virtual_InsertFromMimeData(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InsertFromMimeData = slot;
	return true;
}

void QPlainTextEdit_virtualbase_InsertFromMimeData(void* self, QMimeData* source) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_InsertFromMimeData(source);
}

bool QPlainTextEdit_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QPlainTextEdit_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QPlainTextEdit_override_virtual_ScrollContentsBy(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ScrollContentsBy = slot;
	return true;
}

void QPlainTextEdit_virtualbase_ScrollContentsBy(void* self, int dx, int dy) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_ScrollContentsBy(dx, dy);
}

bool QPlainTextEdit_override_virtual_DoSetTextCursor(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DoSetTextCursor = slot;
	return true;
}

void QPlainTextEdit_virtualbase_DoSetTextCursor(void* self, QTextCursor* cursor) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_DoSetTextCursor(cursor);
}

bool QPlainTextEdit_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QPlainTextEdit_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_MinimumSizeHint();
}

bool QPlainTextEdit_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QPlainTextEdit_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_SizeHint();
}

bool QPlainTextEdit_override_virtual_SetupViewport(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetupViewport = slot;
	return true;
}

void QPlainTextEdit_virtualbase_SetupViewport(void* self, QWidget* viewport) {
	( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_SetupViewport(viewport);
}

bool QPlainTextEdit_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QPlainTextEdit_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_EventFilter(param1, param2);
}

bool QPlainTextEdit_override_virtual_ViewportEvent(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ViewportEvent = slot;
	return true;
}

bool QPlainTextEdit_virtualbase_ViewportEvent(void* self, QEvent* param1) {
	return ( (MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_ViewportEvent(param1);
}

bool QPlainTextEdit_override_virtual_ViewportSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ViewportSizeHint = slot;
	return true;
}

QSize* QPlainTextEdit_virtualbase_ViewportSizeHint(const void* self) {
	return ( (const MiqtVirtualQPlainTextEdit*)(self) )->virtualbase_ViewportSizeHint();
}

void QPlainTextEdit_Delete(QPlainTextEdit* self) {
	delete self;
}

class MiqtVirtualQPlainTextDocumentLayout final : public QPlainTextDocumentLayout {
public:

	MiqtVirtualQPlainTextDocumentLayout(QTextDocument* document): QPlainTextDocumentLayout(document) {};

	virtual ~MiqtVirtualQPlainTextDocumentLayout() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Draw = 0;

	// Subclass to allow providing a Go implementation
	virtual void draw(QPainter* param1, const QAbstractTextDocumentLayout::PaintContext& param2) override {
		if (handle__Draw == 0) {
			QPlainTextDocumentLayout::draw(param1, param2);
			return;
		}
		
		QPainter* sigval1 = param1;
		const QAbstractTextDocumentLayout::PaintContext& param2_ret = param2;
		// Cast returned reference into pointer
		QAbstractTextDocumentLayout__PaintContext* sigval2 = const_cast<QAbstractTextDocumentLayout::PaintContext*>(&param2_ret);

		miqt_exec_callback_QPlainTextDocumentLayout_Draw(this, handle__Draw, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Draw(QPainter* param1, QAbstractTextDocumentLayout__PaintContext* param2) {

		QPlainTextDocumentLayout::draw(param1, *param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HitTest = 0;

	// Subclass to allow providing a Go implementation
	virtual int hitTest(const QPointF& param1, Qt::HitTestAccuracy param2) const override {
		if (handle__HitTest == 0) {
			return QPlainTextDocumentLayout::hitTest(param1, param2);
		}
		
		const QPointF& param1_ret = param1;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&param1_ret);
		Qt::HitTestAccuracy param2_ret = param2;
		int sigval2 = static_cast<int>(param2_ret);

		int callback_return_value = miqt_exec_callback_QPlainTextDocumentLayout_HitTest(const_cast<MiqtVirtualQPlainTextDocumentLayout*>(this), handle__HitTest, sigval1, sigval2);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HitTest(QPointF* param1, int param2) const {

		return QPlainTextDocumentLayout::hitTest(*param1, static_cast<Qt::HitTestAccuracy>(param2));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PageCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int pageCount() const override {
		if (handle__PageCount == 0) {
			return QPlainTextDocumentLayout::pageCount();
		}
		

		int callback_return_value = miqt_exec_callback_QPlainTextDocumentLayout_PageCount(const_cast<MiqtVirtualQPlainTextDocumentLayout*>(this), handle__PageCount);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_PageCount() const {

		return QPlainTextDocumentLayout::pageCount();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DocumentSize = 0;

	// Subclass to allow providing a Go implementation
	virtual QSizeF documentSize() const override {
		if (handle__DocumentSize == 0) {
			return QPlainTextDocumentLayout::documentSize();
		}
		

		QSizeF* callback_return_value = miqt_exec_callback_QPlainTextDocumentLayout_DocumentSize(const_cast<MiqtVirtualQPlainTextDocumentLayout*>(this), handle__DocumentSize);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSizeF* virtualbase_DocumentSize() const {

		return new QSizeF(QPlainTextDocumentLayout::documentSize());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FrameBoundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF frameBoundingRect(QTextFrame* param1) const override {
		if (handle__FrameBoundingRect == 0) {
			return QPlainTextDocumentLayout::frameBoundingRect(param1);
		}
		
		QTextFrame* sigval1 = param1;

		QRectF* callback_return_value = miqt_exec_callback_QPlainTextDocumentLayout_FrameBoundingRect(const_cast<MiqtVirtualQPlainTextDocumentLayout*>(this), handle__FrameBoundingRect, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_FrameBoundingRect(QTextFrame* param1) const {

		return new QRectF(QPlainTextDocumentLayout::frameBoundingRect(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockBoundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF blockBoundingRect(const QTextBlock& block) const override {
		if (handle__BlockBoundingRect == 0) {
			return QPlainTextDocumentLayout::blockBoundingRect(block);
		}
		
		const QTextBlock& block_ret = block;
		// Cast returned reference into pointer
		QTextBlock* sigval1 = const_cast<QTextBlock*>(&block_ret);

		QRectF* callback_return_value = miqt_exec_callback_QPlainTextDocumentLayout_BlockBoundingRect(const_cast<MiqtVirtualQPlainTextDocumentLayout*>(this), handle__BlockBoundingRect, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_BlockBoundingRect(QTextBlock* block) const {

		return new QRectF(QPlainTextDocumentLayout::blockBoundingRect(*block));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DocumentChanged = 0;

	// Subclass to allow providing a Go implementation
	virtual void documentChanged(int from, int param2, int charsAdded) override {
		if (handle__DocumentChanged == 0) {
			QPlainTextDocumentLayout::documentChanged(from, param2, charsAdded);
			return;
		}
		
		int sigval1 = from;
		int sigval2 = param2;
		int sigval3 = charsAdded;

		miqt_exec_callback_QPlainTextDocumentLayout_DocumentChanged(this, handle__DocumentChanged, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DocumentChanged(int from, int param2, int charsAdded) {

		QPlainTextDocumentLayout::documentChanged(static_cast<int>(from), static_cast<int>(param2), static_cast<int>(charsAdded));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeInlineObject = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeInlineObject(QTextInlineObject item, int posInDocument, const QTextFormat& format) override {
		if (handle__ResizeInlineObject == 0) {
			QPlainTextDocumentLayout::resizeInlineObject(item, posInDocument, format);
			return;
		}
		
		QTextInlineObject* sigval1 = new QTextInlineObject(item);
		int sigval2 = posInDocument;
		const QTextFormat& format_ret = format;
		// Cast returned reference into pointer
		QTextFormat* sigval3 = const_cast<QTextFormat*>(&format_ret);

		miqt_exec_callback_QPlainTextDocumentLayout_ResizeInlineObject(this, handle__ResizeInlineObject, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeInlineObject(QTextInlineObject* item, int posInDocument, QTextFormat* format) {

		QPlainTextDocumentLayout::resizeInlineObject(*item, static_cast<int>(posInDocument), *format);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PositionInlineObject = 0;

	// Subclass to allow providing a Go implementation
	virtual void positionInlineObject(QTextInlineObject item, int posInDocument, const QTextFormat& format) override {
		if (handle__PositionInlineObject == 0) {
			QPlainTextDocumentLayout::positionInlineObject(item, posInDocument, format);
			return;
		}
		
		QTextInlineObject* sigval1 = new QTextInlineObject(item);
		int sigval2 = posInDocument;
		const QTextFormat& format_ret = format;
		// Cast returned reference into pointer
		QTextFormat* sigval3 = const_cast<QTextFormat*>(&format_ret);

		miqt_exec_callback_QPlainTextDocumentLayout_PositionInlineObject(this, handle__PositionInlineObject, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PositionInlineObject(QTextInlineObject* item, int posInDocument, QTextFormat* format) {

		QPlainTextDocumentLayout::positionInlineObject(*item, static_cast<int>(posInDocument), *format);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DrawInlineObject = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawInlineObject(QPainter* painter, const QRectF& rect, QTextInlineObject object, int posInDocument, const QTextFormat& format) override {
		if (handle__DrawInlineObject == 0) {
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

		miqt_exec_callback_QPlainTextDocumentLayout_DrawInlineObject(this, handle__DrawInlineObject, sigval1, sigval2, sigval3, sigval4, sigval5);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DrawInlineObject(QPainter* painter, QRectF* rect, QTextInlineObject* object, int posInDocument, QTextFormat* format) {

		QPlainTextDocumentLayout::drawInlineObject(painter, *rect, *object, static_cast<int>(posInDocument), *format);

	}

};

QPlainTextDocumentLayout* QPlainTextDocumentLayout_new(QTextDocument* document) {
	return new MiqtVirtualQPlainTextDocumentLayout(document);
}

void QPlainTextDocumentLayout_virtbase(QPlainTextDocumentLayout* src, QAbstractTextDocumentLayout** outptr_QAbstractTextDocumentLayout) {
	*outptr_QAbstractTextDocumentLayout = static_cast<QAbstractTextDocumentLayout*>(src);
}

QMetaObject* QPlainTextDocumentLayout_MetaObject(const QPlainTextDocumentLayout* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPlainTextDocumentLayout_Metacast(QPlainTextDocumentLayout* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPlainTextDocumentLayout_Tr(const char* s) {
	QString _ret = QPlainTextDocumentLayout::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPlainTextDocumentLayout_TrUtf8(const char* s) {
	QString _ret = QPlainTextDocumentLayout::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPlainTextDocumentLayout_Draw(QPlainTextDocumentLayout* self, QPainter* param1, QAbstractTextDocumentLayout__PaintContext* param2) {
	self->draw(param1, *param2);
}

int QPlainTextDocumentLayout_HitTest(const QPlainTextDocumentLayout* self, QPointF* param1, int param2) {
	return self->hitTest(*param1, static_cast<Qt::HitTestAccuracy>(param2));
}

int QPlainTextDocumentLayout_PageCount(const QPlainTextDocumentLayout* self) {
	return self->pageCount();
}

QSizeF* QPlainTextDocumentLayout_DocumentSize(const QPlainTextDocumentLayout* self) {
	return new QSizeF(self->documentSize());
}

QRectF* QPlainTextDocumentLayout_FrameBoundingRect(const QPlainTextDocumentLayout* self, QTextFrame* param1) {
	return new QRectF(self->frameBoundingRect(param1));
}

QRectF* QPlainTextDocumentLayout_BlockBoundingRect(const QPlainTextDocumentLayout* self, QTextBlock* block) {
	return new QRectF(self->blockBoundingRect(*block));
}

void QPlainTextDocumentLayout_EnsureBlockLayout(const QPlainTextDocumentLayout* self, QTextBlock* block) {
	self->ensureBlockLayout(*block);
}

void QPlainTextDocumentLayout_SetCursorWidth(QPlainTextDocumentLayout* self, int width) {
	self->setCursorWidth(static_cast<int>(width));
}

int QPlainTextDocumentLayout_CursorWidth(const QPlainTextDocumentLayout* self) {
	return self->cursorWidth();
}

void QPlainTextDocumentLayout_RequestUpdate(QPlainTextDocumentLayout* self) {
	self->requestUpdate();
}

struct miqt_string QPlainTextDocumentLayout_Tr2(const char* s, const char* c) {
	QString _ret = QPlainTextDocumentLayout::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPlainTextDocumentLayout_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPlainTextDocumentLayout::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPlainTextDocumentLayout_TrUtf82(const char* s, const char* c) {
	QString _ret = QPlainTextDocumentLayout::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPlainTextDocumentLayout_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QPlainTextDocumentLayout::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QPlainTextDocumentLayout_override_virtual_Draw(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Draw = slot;
	return true;
}

void QPlainTextDocumentLayout_virtualbase_Draw(void* self, QPainter* param1, QAbstractTextDocumentLayout__PaintContext* param2) {
	( (MiqtVirtualQPlainTextDocumentLayout*)(self) )->virtualbase_Draw(param1, param2);
}

bool QPlainTextDocumentLayout_override_virtual_HitTest(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HitTest = slot;
	return true;
}

int QPlainTextDocumentLayout_virtualbase_HitTest(const void* self, QPointF* param1, int param2) {
	return ( (const MiqtVirtualQPlainTextDocumentLayout*)(self) )->virtualbase_HitTest(param1, param2);
}

bool QPlainTextDocumentLayout_override_virtual_PageCount(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PageCount = slot;
	return true;
}

int QPlainTextDocumentLayout_virtualbase_PageCount(const void* self) {
	return ( (const MiqtVirtualQPlainTextDocumentLayout*)(self) )->virtualbase_PageCount();
}

bool QPlainTextDocumentLayout_override_virtual_DocumentSize(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DocumentSize = slot;
	return true;
}

QSizeF* QPlainTextDocumentLayout_virtualbase_DocumentSize(const void* self) {
	return ( (const MiqtVirtualQPlainTextDocumentLayout*)(self) )->virtualbase_DocumentSize();
}

bool QPlainTextDocumentLayout_override_virtual_FrameBoundingRect(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FrameBoundingRect = slot;
	return true;
}

QRectF* QPlainTextDocumentLayout_virtualbase_FrameBoundingRect(const void* self, QTextFrame* param1) {
	return ( (const MiqtVirtualQPlainTextDocumentLayout*)(self) )->virtualbase_FrameBoundingRect(param1);
}

bool QPlainTextDocumentLayout_override_virtual_BlockBoundingRect(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BlockBoundingRect = slot;
	return true;
}

QRectF* QPlainTextDocumentLayout_virtualbase_BlockBoundingRect(const void* self, QTextBlock* block) {
	return ( (const MiqtVirtualQPlainTextDocumentLayout*)(self) )->virtualbase_BlockBoundingRect(block);
}

bool QPlainTextDocumentLayout_override_virtual_DocumentChanged(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DocumentChanged = slot;
	return true;
}

void QPlainTextDocumentLayout_virtualbase_DocumentChanged(void* self, int from, int param2, int charsAdded) {
	( (MiqtVirtualQPlainTextDocumentLayout*)(self) )->virtualbase_DocumentChanged(from, param2, charsAdded);
}

bool QPlainTextDocumentLayout_override_virtual_ResizeInlineObject(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeInlineObject = slot;
	return true;
}

void QPlainTextDocumentLayout_virtualbase_ResizeInlineObject(void* self, QTextInlineObject* item, int posInDocument, QTextFormat* format) {
	( (MiqtVirtualQPlainTextDocumentLayout*)(self) )->virtualbase_ResizeInlineObject(item, posInDocument, format);
}

bool QPlainTextDocumentLayout_override_virtual_PositionInlineObject(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PositionInlineObject = slot;
	return true;
}

void QPlainTextDocumentLayout_virtualbase_PositionInlineObject(void* self, QTextInlineObject* item, int posInDocument, QTextFormat* format) {
	( (MiqtVirtualQPlainTextDocumentLayout*)(self) )->virtualbase_PositionInlineObject(item, posInDocument, format);
}

bool QPlainTextDocumentLayout_override_virtual_DrawInlineObject(void* self, intptr_t slot) {
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DrawInlineObject = slot;
	return true;
}

void QPlainTextDocumentLayout_virtualbase_DrawInlineObject(void* self, QPainter* painter, QRectF* rect, QTextInlineObject* object, int posInDocument, QTextFormat* format) {
	( (MiqtVirtualQPlainTextDocumentLayout*)(self) )->virtualbase_DrawInlineObject(painter, rect, object, posInDocument, format);
}

void QPlainTextDocumentLayout_Delete(QPlainTextDocumentLayout* self) {
	delete self;
}

