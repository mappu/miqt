#include <QAbstractScrollArea>
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

void miqt_exec_callback_QTextEdit_TextChanged(intptr_t);
void miqt_exec_callback_QTextEdit_UndoAvailable(intptr_t, bool);
void miqt_exec_callback_QTextEdit_RedoAvailable(intptr_t, bool);
void miqt_exec_callback_QTextEdit_CurrentCharFormatChanged(intptr_t, QTextCharFormat*);
void miqt_exec_callback_QTextEdit_CopyAvailable(intptr_t, bool);
void miqt_exec_callback_QTextEdit_SelectionChanged(intptr_t);
void miqt_exec_callback_QTextEdit_CursorPositionChanged(intptr_t);
QVariant* miqt_exec_callback_QTextEdit_LoadResource(void*, intptr_t, int, QUrl*);
QVariant* miqt_exec_callback_QTextEdit_InputMethodQuery(void*, intptr_t, int);
bool miqt_exec_callback_QTextEdit_Event(void*, intptr_t, QEvent*);
void miqt_exec_callback_QTextEdit_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QTextEdit_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QTextEdit_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QTextEdit_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QTextEdit_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QTextEdit_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTextEdit_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTextEdit_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTextEdit_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
bool miqt_exec_callback_QTextEdit_FocusNextPrevChild(void*, intptr_t, bool);
void miqt_exec_callback_QTextEdit_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QTextEdit_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QTextEdit_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QTextEdit_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QTextEdit_DropEvent(void*, intptr_t, QDropEvent*);
void miqt_exec_callback_QTextEdit_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QTextEdit_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QTextEdit_ShowEvent(void*, intptr_t, QShowEvent*);
void miqt_exec_callback_QTextEdit_ChangeEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QTextEdit_WheelEvent(void*, intptr_t, QWheelEvent*);
QMimeData* miqt_exec_callback_QTextEdit_CreateMimeDataFromSelection(void*, intptr_t);
bool miqt_exec_callback_QTextEdit_CanInsertFromMimeData(void*, intptr_t, QMimeData*);
void miqt_exec_callback_QTextEdit_InsertFromMimeData(void*, intptr_t, QMimeData*);
void miqt_exec_callback_QTextEdit_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
void miqt_exec_callback_QTextEdit_ScrollContentsBy(void*, intptr_t, int, int);
void miqt_exec_callback_QTextEdit_DoSetTextCursor(void*, intptr_t, QTextCursor*);
QSize* miqt_exec_callback_QTextEdit_MinimumSizeHint(void*, intptr_t);
QSize* miqt_exec_callback_QTextEdit_SizeHint(void*, intptr_t);
void miqt_exec_callback_QTextEdit_SetupViewport(void*, intptr_t, QWidget*);
bool miqt_exec_callback_QTextEdit_EventFilter(void*, intptr_t, QObject*, QEvent*);
bool miqt_exec_callback_QTextEdit_ViewportEvent(void*, intptr_t, QEvent*);
QSize* miqt_exec_callback_QTextEdit_ViewportSizeHint(void*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQTextEdit : public virtual QTextEdit {
public:

	MiqtVirtualQTextEdit(QWidget* parent): QTextEdit(parent) {};
	MiqtVirtualQTextEdit(): QTextEdit() {};
	MiqtVirtualQTextEdit(const QString& text): QTextEdit(text) {};
	MiqtVirtualQTextEdit(const QString& text, QWidget* parent): QTextEdit(text, parent) {};

	virtual ~MiqtVirtualQTextEdit() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LoadResource = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant loadResource(int typeVal, const QUrl& name) override {
		if (handle__LoadResource == 0) {
			return QTextEdit::loadResource(typeVal, name);
		}
		
		int sigval1 = typeVal;
		const QUrl& name_ret = name;
		// Cast returned reference into pointer
		QUrl* sigval2 = const_cast<QUrl*>(&name_ret);

		QVariant* callback_return_value = miqt_exec_callback_QTextEdit_LoadResource(this, handle__LoadResource, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_LoadResource(int typeVal, QUrl* name) {

		return new QVariant(QTextEdit::loadResource(static_cast<int>(typeVal), *name));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery property) const override {
		if (handle__InputMethodQuery == 0) {
			return QTextEdit::inputMethodQuery(property);
		}
		
		Qt::InputMethodQuery property_ret = property;
		int sigval1 = static_cast<int>(property_ret);

		QVariant* callback_return_value = miqt_exec_callback_QTextEdit_InputMethodQuery(const_cast<MiqtVirtualQTextEdit*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int property) const {

		return new QVariant(QTextEdit::inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QTextEdit::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QTextEdit_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QTextEdit::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* e) override {
		if (handle__TimerEvent == 0) {
			QTextEdit::timerEvent(e);
			return;
		}
		
		QTimerEvent* sigval1 = e;

		miqt_exec_callback_QTextEdit_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* e) {

		QTextEdit::timerEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* e) override {
		if (handle__KeyPressEvent == 0) {
			QTextEdit::keyPressEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QTextEdit_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* e) {

		QTextEdit::keyPressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* e) override {
		if (handle__KeyReleaseEvent == 0) {
			QTextEdit::keyReleaseEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QTextEdit_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* e) {

		QTextEdit::keyReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* e) override {
		if (handle__ResizeEvent == 0) {
			QTextEdit::resizeEvent(e);
			return;
		}
		
		QResizeEvent* sigval1 = e;

		miqt_exec_callback_QTextEdit_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* e) {

		QTextEdit::resizeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* e) override {
		if (handle__PaintEvent == 0) {
			QTextEdit::paintEvent(e);
			return;
		}
		
		QPaintEvent* sigval1 = e;

		miqt_exec_callback_QTextEdit_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* e) {

		QTextEdit::paintEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* e) override {
		if (handle__MousePressEvent == 0) {
			QTextEdit::mousePressEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QTextEdit_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* e) {

		QTextEdit::mousePressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* e) override {
		if (handle__MouseMoveEvent == 0) {
			QTextEdit::mouseMoveEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QTextEdit_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* e) {

		QTextEdit::mouseMoveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (handle__MouseReleaseEvent == 0) {
			QTextEdit::mouseReleaseEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QTextEdit_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* e) {

		QTextEdit::mouseReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QTextEdit::mouseDoubleClickEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QTextEdit_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* e) {

		QTextEdit::mouseDoubleClickEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QTextEdit::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QTextEdit_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QTextEdit::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* e) override {
		if (handle__ContextMenuEvent == 0) {
			QTextEdit::contextMenuEvent(e);
			return;
		}
		
		QContextMenuEvent* sigval1 = e;

		miqt_exec_callback_QTextEdit_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* e) {

		QTextEdit::contextMenuEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* e) override {
		if (handle__DragEnterEvent == 0) {
			QTextEdit::dragEnterEvent(e);
			return;
		}
		
		QDragEnterEvent* sigval1 = e;

		miqt_exec_callback_QTextEdit_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* e) {

		QTextEdit::dragEnterEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
		if (handle__DragLeaveEvent == 0) {
			QTextEdit::dragLeaveEvent(e);
			return;
		}
		
		QDragLeaveEvent* sigval1 = e;

		miqt_exec_callback_QTextEdit_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* e) {

		QTextEdit::dragLeaveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* e) override {
		if (handle__DragMoveEvent == 0) {
			QTextEdit::dragMoveEvent(e);
			return;
		}
		
		QDragMoveEvent* sigval1 = e;

		miqt_exec_callback_QTextEdit_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* e) {

		QTextEdit::dragMoveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* e) override {
		if (handle__DropEvent == 0) {
			QTextEdit::dropEvent(e);
			return;
		}
		
		QDropEvent* sigval1 = e;

		miqt_exec_callback_QTextEdit_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* e) {

		QTextEdit::dropEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* e) override {
		if (handle__FocusInEvent == 0) {
			QTextEdit::focusInEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QTextEdit_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* e) {

		QTextEdit::focusInEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* e) override {
		if (handle__FocusOutEvent == 0) {
			QTextEdit::focusOutEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QTextEdit_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* e) {

		QTextEdit::focusOutEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (handle__ShowEvent == 0) {
			QTextEdit::showEvent(param1);
			return;
		}
		
		QShowEvent* sigval1 = param1;

		miqt_exec_callback_QTextEdit_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* param1) {

		QTextEdit::showEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (handle__ChangeEvent == 0) {
			QTextEdit::changeEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QTextEdit_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* e) {

		QTextEdit::changeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* e) override {
		if (handle__WheelEvent == 0) {
			QTextEdit::wheelEvent(e);
			return;
		}
		
		QWheelEvent* sigval1 = e;

		miqt_exec_callback_QTextEdit_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* e) {

		QTextEdit::wheelEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CreateMimeDataFromSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual QMimeData* createMimeDataFromSelection() const override {
		if (handle__CreateMimeDataFromSelection == 0) {
			return QTextEdit::createMimeDataFromSelection();
		}
		

		QMimeData* callback_return_value = miqt_exec_callback_QTextEdit_CreateMimeDataFromSelection(const_cast<MiqtVirtualQTextEdit*>(this), handle__CreateMimeDataFromSelection);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QMimeData* virtualbase_CreateMimeDataFromSelection() const {

		return QTextEdit::createMimeDataFromSelection();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CanInsertFromMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canInsertFromMimeData(const QMimeData* source) const override {
		if (handle__CanInsertFromMimeData == 0) {
			return QTextEdit::canInsertFromMimeData(source);
		}
		
		QMimeData* sigval1 = (QMimeData*) source;

		bool callback_return_value = miqt_exec_callback_QTextEdit_CanInsertFromMimeData(const_cast<MiqtVirtualQTextEdit*>(this), handle__CanInsertFromMimeData, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CanInsertFromMimeData(QMimeData* source) const {

		return QTextEdit::canInsertFromMimeData(source);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InsertFromMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual void insertFromMimeData(const QMimeData* source) override {
		if (handle__InsertFromMimeData == 0) {
			QTextEdit::insertFromMimeData(source);
			return;
		}
		
		QMimeData* sigval1 = (QMimeData*) source;

		miqt_exec_callback_QTextEdit_InsertFromMimeData(this, handle__InsertFromMimeData, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InsertFromMimeData(QMimeData* source) {

		QTextEdit::insertFromMimeData(source);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QTextEdit::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QTextEdit_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QTextEdit::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ScrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (handle__ScrollContentsBy == 0) {
			QTextEdit::scrollContentsBy(dx, dy);
			return;
		}
		
		int sigval1 = dx;
		int sigval2 = dy;

		miqt_exec_callback_QTextEdit_ScrollContentsBy(this, handle__ScrollContentsBy, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ScrollContentsBy(int dx, int dy) {

		QTextEdit::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DoSetTextCursor = 0;

	// Subclass to allow providing a Go implementation
	virtual void doSetTextCursor(const QTextCursor& cursor) override {
		if (handle__DoSetTextCursor == 0) {
			QTextEdit::doSetTextCursor(cursor);
			return;
		}
		
		const QTextCursor& cursor_ret = cursor;
		// Cast returned reference into pointer
		QTextCursor* sigval1 = const_cast<QTextCursor*>(&cursor_ret);

		miqt_exec_callback_QTextEdit_DoSetTextCursor(this, handle__DoSetTextCursor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DoSetTextCursor(QTextCursor* cursor) {

		QTextEdit::doSetTextCursor(*cursor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QTextEdit::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QTextEdit_MinimumSizeHint(const_cast<MiqtVirtualQTextEdit*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QTextEdit::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QTextEdit::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QTextEdit_SizeHint(const_cast<MiqtVirtualQTextEdit*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QTextEdit::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetupViewport = 0;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (handle__SetupViewport == 0) {
			QTextEdit::setupViewport(viewport);
			return;
		}
		
		QWidget* sigval1 = viewport;

		miqt_exec_callback_QTextEdit_SetupViewport(this, handle__SetupViewport, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetupViewport(QWidget* viewport) {

		QTextEdit::setupViewport(viewport);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__EventFilter == 0) {
			return QTextEdit::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QTextEdit_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* param1, QEvent* param2) {

		return QTextEdit::eventFilter(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewportEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* param1) override {
		if (handle__ViewportEvent == 0) {
			return QTextEdit::viewportEvent(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QTextEdit_ViewportEvent(this, handle__ViewportEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_ViewportEvent(QEvent* param1) {

		return QTextEdit::viewportEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewportSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (handle__ViewportSizeHint == 0) {
			return QTextEdit::viewportSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QTextEdit_ViewportSizeHint(const_cast<MiqtVirtualQTextEdit*>(this), handle__ViewportSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_ViewportSizeHint() const {

		return new QSize(QTextEdit::viewportSizeHint());

	}

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

QMetaObject* QTextEdit_MetaObject(const QTextEdit* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTextEdit_Metacast(QTextEdit* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTextEdit_Tr(const char* s) {
	QString _ret = QTextEdit::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextEdit_TrUtf8(const char* s) {
	QString _ret = QTextEdit::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextEdit_SetDocument(QTextEdit* self, QTextDocument* document) {
	self->setDocument(document);
}

QTextDocument* QTextEdit_Document(const QTextEdit* self) {
	return self->document();
}

void QTextEdit_SetPlaceholderText(QTextEdit* self, struct miqt_string placeholderText) {
	QString placeholderText_QString = QString::fromUtf8(placeholderText.data, placeholderText.len);
	self->setPlaceholderText(placeholderText_QString);
}

struct miqt_string QTextEdit_PlaceholderText(const QTextEdit* self) {
	QString _ret = self->placeholderText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextEdit_SetTextCursor(QTextEdit* self, QTextCursor* cursor) {
	self->setTextCursor(*cursor);
}

QTextCursor* QTextEdit_TextCursor(const QTextEdit* self) {
	return new QTextCursor(self->textCursor());
}

bool QTextEdit_IsReadOnly(const QTextEdit* self) {
	return self->isReadOnly();
}

void QTextEdit_SetReadOnly(QTextEdit* self, bool ro) {
	self->setReadOnly(ro);
}

void QTextEdit_SetTextInteractionFlags(QTextEdit* self, int flags) {
	self->setTextInteractionFlags(static_cast<Qt::TextInteractionFlags>(flags));
}

int QTextEdit_TextInteractionFlags(const QTextEdit* self) {
	Qt::TextInteractionFlags _ret = self->textInteractionFlags();
	return static_cast<int>(_ret);
}

double QTextEdit_FontPointSize(const QTextEdit* self) {
	qreal _ret = self->fontPointSize();
	return static_cast<double>(_ret);
}

struct miqt_string QTextEdit_FontFamily(const QTextEdit* self) {
	QString _ret = self->fontFamily();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QTextEdit_FontWeight(const QTextEdit* self) {
	return self->fontWeight();
}

bool QTextEdit_FontUnderline(const QTextEdit* self) {
	return self->fontUnderline();
}

bool QTextEdit_FontItalic(const QTextEdit* self) {
	return self->fontItalic();
}

QColor* QTextEdit_TextColor(const QTextEdit* self) {
	return new QColor(self->textColor());
}

QColor* QTextEdit_TextBackgroundColor(const QTextEdit* self) {
	return new QColor(self->textBackgroundColor());
}

QFont* QTextEdit_CurrentFont(const QTextEdit* self) {
	return new QFont(self->currentFont());
}

int QTextEdit_Alignment(const QTextEdit* self) {
	Qt::Alignment _ret = self->alignment();
	return static_cast<int>(_ret);
}

void QTextEdit_MergeCurrentCharFormat(QTextEdit* self, QTextCharFormat* modifier) {
	self->mergeCurrentCharFormat(*modifier);
}

void QTextEdit_SetCurrentCharFormat(QTextEdit* self, QTextCharFormat* format) {
	self->setCurrentCharFormat(*format);
}

QTextCharFormat* QTextEdit_CurrentCharFormat(const QTextEdit* self) {
	return new QTextCharFormat(self->currentCharFormat());
}

int QTextEdit_AutoFormatting(const QTextEdit* self) {
	QTextEdit::AutoFormatting _ret = self->autoFormatting();
	return static_cast<int>(_ret);
}

void QTextEdit_SetAutoFormatting(QTextEdit* self, int features) {
	self->setAutoFormatting(static_cast<QTextEdit::AutoFormatting>(features));
}

bool QTextEdit_TabChangesFocus(const QTextEdit* self) {
	return self->tabChangesFocus();
}

void QTextEdit_SetTabChangesFocus(QTextEdit* self, bool b) {
	self->setTabChangesFocus(b);
}

void QTextEdit_SetDocumentTitle(QTextEdit* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	self->setDocumentTitle(title_QString);
}

struct miqt_string QTextEdit_DocumentTitle(const QTextEdit* self) {
	QString _ret = self->documentTitle();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTextEdit_IsUndoRedoEnabled(const QTextEdit* self) {
	return self->isUndoRedoEnabled();
}

void QTextEdit_SetUndoRedoEnabled(QTextEdit* self, bool enable) {
	self->setUndoRedoEnabled(enable);
}

int QTextEdit_LineWrapMode(const QTextEdit* self) {
	QTextEdit::LineWrapMode _ret = self->lineWrapMode();
	return static_cast<int>(_ret);
}

void QTextEdit_SetLineWrapMode(QTextEdit* self, int mode) {
	self->setLineWrapMode(static_cast<QTextEdit::LineWrapMode>(mode));
}

int QTextEdit_LineWrapColumnOrWidth(const QTextEdit* self) {
	return self->lineWrapColumnOrWidth();
}

void QTextEdit_SetLineWrapColumnOrWidth(QTextEdit* self, int w) {
	self->setLineWrapColumnOrWidth(static_cast<int>(w));
}

int QTextEdit_WordWrapMode(const QTextEdit* self) {
	QTextOption::WrapMode _ret = self->wordWrapMode();
	return static_cast<int>(_ret);
}

void QTextEdit_SetWordWrapMode(QTextEdit* self, int policy) {
	self->setWordWrapMode(static_cast<QTextOption::WrapMode>(policy));
}

bool QTextEdit_Find(QTextEdit* self, struct miqt_string exp) {
	QString exp_QString = QString::fromUtf8(exp.data, exp.len);
	return self->find(exp_QString);
}

bool QTextEdit_FindWithExp(QTextEdit* self, QRegExp* exp) {
	return self->find(*exp);
}

bool QTextEdit_Find2(QTextEdit* self, QRegularExpression* exp) {
	return self->find(*exp);
}

struct miqt_string QTextEdit_ToPlainText(const QTextEdit* self) {
	QString _ret = self->toPlainText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextEdit_ToHtml(const QTextEdit* self) {
	QString _ret = self->toHtml();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextEdit_ToMarkdown(const QTextEdit* self) {
	QString _ret = self->toMarkdown();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextEdit_EnsureCursorVisible(QTextEdit* self) {
	self->ensureCursorVisible();
}

QVariant* QTextEdit_LoadResource(QTextEdit* self, int typeVal, QUrl* name) {
	return new QVariant(self->loadResource(static_cast<int>(typeVal), *name));
}

QMenu* QTextEdit_CreateStandardContextMenu(QTextEdit* self) {
	return self->createStandardContextMenu();
}

QMenu* QTextEdit_CreateStandardContextMenuWithPosition(QTextEdit* self, QPoint* position) {
	return self->createStandardContextMenu(*position);
}

QTextCursor* QTextEdit_CursorForPosition(const QTextEdit* self, QPoint* pos) {
	return new QTextCursor(self->cursorForPosition(*pos));
}

QRect* QTextEdit_CursorRect(const QTextEdit* self, QTextCursor* cursor) {
	return new QRect(self->cursorRect(*cursor));
}

QRect* QTextEdit_CursorRect2(const QTextEdit* self) {
	return new QRect(self->cursorRect());
}

struct miqt_string QTextEdit_AnchorAt(const QTextEdit* self, QPoint* pos) {
	QString _ret = self->anchorAt(*pos);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTextEdit_OverwriteMode(const QTextEdit* self) {
	return self->overwriteMode();
}

void QTextEdit_SetOverwriteMode(QTextEdit* self, bool overwrite) {
	self->setOverwriteMode(overwrite);
}

int QTextEdit_TabStopWidth(const QTextEdit* self) {
	return self->tabStopWidth();
}

void QTextEdit_SetTabStopWidth(QTextEdit* self, int width) {
	self->setTabStopWidth(static_cast<int>(width));
}

double QTextEdit_TabStopDistance(const QTextEdit* self) {
	qreal _ret = self->tabStopDistance();
	return static_cast<double>(_ret);
}

void QTextEdit_SetTabStopDistance(QTextEdit* self, double distance) {
	self->setTabStopDistance(static_cast<qreal>(distance));
}

int QTextEdit_CursorWidth(const QTextEdit* self) {
	return self->cursorWidth();
}

void QTextEdit_SetCursorWidth(QTextEdit* self, int width) {
	self->setCursorWidth(static_cast<int>(width));
}

bool QTextEdit_AcceptRichText(const QTextEdit* self) {
	return self->acceptRichText();
}

void QTextEdit_SetAcceptRichText(QTextEdit* self, bool accept) {
	self->setAcceptRichText(accept);
}

void QTextEdit_SetExtraSelections(QTextEdit* self, struct miqt_array /* of QTextEdit__ExtraSelection* */  selections) {
	QList<QTextEdit::ExtraSelection> selections_QList;
	selections_QList.reserve(selections.len);
	QTextEdit__ExtraSelection** selections_arr = static_cast<QTextEdit__ExtraSelection**>(selections.data);
	for(size_t i = 0; i < selections.len; ++i) {
		selections_QList.push_back(*(selections_arr[i]));
	}
	self->setExtraSelections(selections_QList);
}

struct miqt_array /* of QTextEdit__ExtraSelection* */  QTextEdit_ExtraSelections(const QTextEdit* self) {
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

void QTextEdit_MoveCursor(QTextEdit* self, int operation) {
	self->moveCursor(static_cast<QTextCursor::MoveOperation>(operation));
}

bool QTextEdit_CanPaste(const QTextEdit* self) {
	return self->canPaste();
}

void QTextEdit_Print(const QTextEdit* self, QPagedPaintDevice* printer) {
	self->print(printer);
}

QVariant* QTextEdit_InputMethodQuery(const QTextEdit* self, int property) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
}

QVariant* QTextEdit_InputMethodQuery2(const QTextEdit* self, int query, QVariant* argument) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query), *argument));
}

void QTextEdit_SetFontPointSize(QTextEdit* self, double s) {
	self->setFontPointSize(static_cast<qreal>(s));
}

void QTextEdit_SetFontFamily(QTextEdit* self, struct miqt_string fontFamily) {
	QString fontFamily_QString = QString::fromUtf8(fontFamily.data, fontFamily.len);
	self->setFontFamily(fontFamily_QString);
}

void QTextEdit_SetFontWeight(QTextEdit* self, int w) {
	self->setFontWeight(static_cast<int>(w));
}

void QTextEdit_SetFontUnderline(QTextEdit* self, bool b) {
	self->setFontUnderline(b);
}

void QTextEdit_SetFontItalic(QTextEdit* self, bool b) {
	self->setFontItalic(b);
}

void QTextEdit_SetTextColor(QTextEdit* self, QColor* c) {
	self->setTextColor(*c);
}

void QTextEdit_SetTextBackgroundColor(QTextEdit* self, QColor* c) {
	self->setTextBackgroundColor(*c);
}

void QTextEdit_SetCurrentFont(QTextEdit* self, QFont* f) {
	self->setCurrentFont(*f);
}

void QTextEdit_SetAlignment(QTextEdit* self, int a) {
	self->setAlignment(static_cast<Qt::Alignment>(a));
}

void QTextEdit_SetPlainText(QTextEdit* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setPlainText(text_QString);
}

void QTextEdit_SetHtml(QTextEdit* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setHtml(text_QString);
}

void QTextEdit_SetMarkdown(QTextEdit* self, struct miqt_string markdown) {
	QString markdown_QString = QString::fromUtf8(markdown.data, markdown.len);
	self->setMarkdown(markdown_QString);
}

void QTextEdit_SetText(QTextEdit* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(text_QString);
}

void QTextEdit_Cut(QTextEdit* self) {
	self->cut();
}

void QTextEdit_Copy(QTextEdit* self) {
	self->copy();
}

void QTextEdit_Paste(QTextEdit* self) {
	self->paste();
}

void QTextEdit_Undo(QTextEdit* self) {
	self->undo();
}

void QTextEdit_Redo(QTextEdit* self) {
	self->redo();
}

void QTextEdit_Clear(QTextEdit* self) {
	self->clear();
}

void QTextEdit_SelectAll(QTextEdit* self) {
	self->selectAll();
}

void QTextEdit_InsertPlainText(QTextEdit* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->insertPlainText(text_QString);
}

void QTextEdit_InsertHtml(QTextEdit* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->insertHtml(text_QString);
}

void QTextEdit_Append(QTextEdit* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->append(text_QString);
}

void QTextEdit_ScrollToAnchor(QTextEdit* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->scrollToAnchor(name_QString);
}

void QTextEdit_ZoomIn(QTextEdit* self) {
	self->zoomIn();
}

void QTextEdit_ZoomOut(QTextEdit* self) {
	self->zoomOut();
}

void QTextEdit_TextChanged(QTextEdit* self) {
	self->textChanged();
}

void QTextEdit_connect_TextChanged(QTextEdit* self, intptr_t slot) {
	MiqtVirtualQTextEdit::connect(self, static_cast<void (QTextEdit::*)()>(&QTextEdit::textChanged), self, [=]() {
		miqt_exec_callback_QTextEdit_TextChanged(slot);
	});
}

void QTextEdit_UndoAvailable(QTextEdit* self, bool b) {
	self->undoAvailable(b);
}

void QTextEdit_connect_UndoAvailable(QTextEdit* self, intptr_t slot) {
	MiqtVirtualQTextEdit::connect(self, static_cast<void (QTextEdit::*)(bool)>(&QTextEdit::undoAvailable), self, [=](bool b) {
		bool sigval1 = b;
		miqt_exec_callback_QTextEdit_UndoAvailable(slot, sigval1);
	});
}

void QTextEdit_RedoAvailable(QTextEdit* self, bool b) {
	self->redoAvailable(b);
}

void QTextEdit_connect_RedoAvailable(QTextEdit* self, intptr_t slot) {
	MiqtVirtualQTextEdit::connect(self, static_cast<void (QTextEdit::*)(bool)>(&QTextEdit::redoAvailable), self, [=](bool b) {
		bool sigval1 = b;
		miqt_exec_callback_QTextEdit_RedoAvailable(slot, sigval1);
	});
}

void QTextEdit_CurrentCharFormatChanged(QTextEdit* self, QTextCharFormat* format) {
	self->currentCharFormatChanged(*format);
}

void QTextEdit_connect_CurrentCharFormatChanged(QTextEdit* self, intptr_t slot) {
	MiqtVirtualQTextEdit::connect(self, static_cast<void (QTextEdit::*)(const QTextCharFormat&)>(&QTextEdit::currentCharFormatChanged), self, [=](const QTextCharFormat& format) {
		const QTextCharFormat& format_ret = format;
		// Cast returned reference into pointer
		QTextCharFormat* sigval1 = const_cast<QTextCharFormat*>(&format_ret);
		miqt_exec_callback_QTextEdit_CurrentCharFormatChanged(slot, sigval1);
	});
}

void QTextEdit_CopyAvailable(QTextEdit* self, bool b) {
	self->copyAvailable(b);
}

void QTextEdit_connect_CopyAvailable(QTextEdit* self, intptr_t slot) {
	MiqtVirtualQTextEdit::connect(self, static_cast<void (QTextEdit::*)(bool)>(&QTextEdit::copyAvailable), self, [=](bool b) {
		bool sigval1 = b;
		miqt_exec_callback_QTextEdit_CopyAvailable(slot, sigval1);
	});
}

void QTextEdit_SelectionChanged(QTextEdit* self) {
	self->selectionChanged();
}

void QTextEdit_connect_SelectionChanged(QTextEdit* self, intptr_t slot) {
	MiqtVirtualQTextEdit::connect(self, static_cast<void (QTextEdit::*)()>(&QTextEdit::selectionChanged), self, [=]() {
		miqt_exec_callback_QTextEdit_SelectionChanged(slot);
	});
}

void QTextEdit_CursorPositionChanged(QTextEdit* self) {
	self->cursorPositionChanged();
}

void QTextEdit_connect_CursorPositionChanged(QTextEdit* self, intptr_t slot) {
	MiqtVirtualQTextEdit::connect(self, static_cast<void (QTextEdit::*)()>(&QTextEdit::cursorPositionChanged), self, [=]() {
		miqt_exec_callback_QTextEdit_CursorPositionChanged(slot);
	});
}

struct miqt_string QTextEdit_Tr2(const char* s, const char* c) {
	QString _ret = QTextEdit::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextEdit_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTextEdit::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextEdit_TrUtf82(const char* s, const char* c) {
	QString _ret = QTextEdit::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextEdit_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QTextEdit::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTextEdit_Find22(QTextEdit* self, struct miqt_string exp, int options) {
	QString exp_QString = QString::fromUtf8(exp.data, exp.len);
	return self->find(exp_QString, static_cast<QTextDocument::FindFlags>(options));
}

bool QTextEdit_Find23(QTextEdit* self, QRegExp* exp, int options) {
	return self->find(*exp, static_cast<QTextDocument::FindFlags>(options));
}

bool QTextEdit_Find24(QTextEdit* self, QRegularExpression* exp, int options) {
	return self->find(*exp, static_cast<QTextDocument::FindFlags>(options));
}

struct miqt_string QTextEdit_ToMarkdown1(const QTextEdit* self, int features) {
	QString _ret = self->toMarkdown(static_cast<QTextDocument::MarkdownFeatures>(features));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextEdit_MoveCursor2(QTextEdit* self, int operation, int mode) {
	self->moveCursor(static_cast<QTextCursor::MoveOperation>(operation), static_cast<QTextCursor::MoveMode>(mode));
}

void QTextEdit_ZoomIn1(QTextEdit* self, int rangeVal) {
	self->zoomIn(static_cast<int>(rangeVal));
}

void QTextEdit_ZoomOut1(QTextEdit* self, int rangeVal) {
	self->zoomOut(static_cast<int>(rangeVal));
}

void QTextEdit_override_virtual_LoadResource(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) )->handle__LoadResource = slot;
}

QVariant* QTextEdit_virtualbase_LoadResource(void* self, int typeVal, QUrl* name) {
	return ( (MiqtVirtualQTextEdit*)(self) )->virtualbase_LoadResource(typeVal, name);
}

void QTextEdit_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) )->handle__InputMethodQuery = slot;
}

QVariant* QTextEdit_virtualbase_InputMethodQuery(const void* self, int property) {
	return ( (const MiqtVirtualQTextEdit*)(self) )->virtualbase_InputMethodQuery(property);
}

void QTextEdit_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) )->handle__Event = slot;
}

bool QTextEdit_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQTextEdit*)(self) )->virtualbase_Event(e);
}

void QTextEdit_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) )->handle__TimerEvent = slot;
}

void QTextEdit_virtualbase_TimerEvent(void* self, QTimerEvent* e) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_TimerEvent(e);
}

void QTextEdit_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) )->handle__KeyPressEvent = slot;
}

void QTextEdit_virtualbase_KeyPressEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_KeyPressEvent(e);
}

void QTextEdit_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) )->handle__KeyReleaseEvent = slot;
}

void QTextEdit_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_KeyReleaseEvent(e);
}

void QTextEdit_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) )->handle__ResizeEvent = slot;
}

void QTextEdit_virtualbase_ResizeEvent(void* self, QResizeEvent* e) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_ResizeEvent(e);
}

void QTextEdit_override_virtual_PaintEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) )->handle__PaintEvent = slot;
}

void QTextEdit_virtualbase_PaintEvent(void* self, QPaintEvent* e) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_PaintEvent(e);
}

void QTextEdit_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) )->handle__MousePressEvent = slot;
}

void QTextEdit_virtualbase_MousePressEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_MousePressEvent(e);
}

void QTextEdit_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) )->handle__MouseMoveEvent = slot;
}

void QTextEdit_virtualbase_MouseMoveEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_MouseMoveEvent(e);
}

void QTextEdit_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) )->handle__MouseReleaseEvent = slot;
}

void QTextEdit_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_MouseReleaseEvent(e);
}

void QTextEdit_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) )->handle__MouseDoubleClickEvent = slot;
}

void QTextEdit_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_MouseDoubleClickEvent(e);
}

void QTextEdit_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) )->handle__FocusNextPrevChild = slot;
}

bool QTextEdit_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQTextEdit*)(self) )->virtualbase_FocusNextPrevChild(next);
}

void QTextEdit_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) )->handle__ContextMenuEvent = slot;
}

void QTextEdit_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* e) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_ContextMenuEvent(e);
}

void QTextEdit_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) )->handle__DragEnterEvent = slot;
}

void QTextEdit_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* e) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_DragEnterEvent(e);
}

void QTextEdit_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) )->handle__DragLeaveEvent = slot;
}

void QTextEdit_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* e) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_DragLeaveEvent(e);
}

void QTextEdit_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) )->handle__DragMoveEvent = slot;
}

void QTextEdit_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* e) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_DragMoveEvent(e);
}

void QTextEdit_override_virtual_DropEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) )->handle__DropEvent = slot;
}

void QTextEdit_virtualbase_DropEvent(void* self, QDropEvent* e) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_DropEvent(e);
}

void QTextEdit_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) )->handle__FocusInEvent = slot;
}

void QTextEdit_virtualbase_FocusInEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_FocusInEvent(e);
}

void QTextEdit_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) )->handle__FocusOutEvent = slot;
}

void QTextEdit_virtualbase_FocusOutEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_FocusOutEvent(e);
}

void QTextEdit_override_virtual_ShowEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) )->handle__ShowEvent = slot;
}

void QTextEdit_virtualbase_ShowEvent(void* self, QShowEvent* param1) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_ShowEvent(param1);
}

void QTextEdit_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) )->handle__ChangeEvent = slot;
}

void QTextEdit_virtualbase_ChangeEvent(void* self, QEvent* e) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_ChangeEvent(e);
}

void QTextEdit_override_virtual_WheelEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) )->handle__WheelEvent = slot;
}

void QTextEdit_virtualbase_WheelEvent(void* self, QWheelEvent* e) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_WheelEvent(e);
}

void QTextEdit_override_virtual_CreateMimeDataFromSelection(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) )->handle__CreateMimeDataFromSelection = slot;
}

QMimeData* QTextEdit_virtualbase_CreateMimeDataFromSelection(const void* self) {
	return ( (const MiqtVirtualQTextEdit*)(self) )->virtualbase_CreateMimeDataFromSelection();
}

void QTextEdit_override_virtual_CanInsertFromMimeData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) )->handle__CanInsertFromMimeData = slot;
}

bool QTextEdit_virtualbase_CanInsertFromMimeData(const void* self, QMimeData* source) {
	return ( (const MiqtVirtualQTextEdit*)(self) )->virtualbase_CanInsertFromMimeData(source);
}

void QTextEdit_override_virtual_InsertFromMimeData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) )->handle__InsertFromMimeData = slot;
}

void QTextEdit_virtualbase_InsertFromMimeData(void* self, QMimeData* source) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_InsertFromMimeData(source);
}

void QTextEdit_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) )->handle__InputMethodEvent = slot;
}

void QTextEdit_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_InputMethodEvent(param1);
}

void QTextEdit_override_virtual_ScrollContentsBy(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) )->handle__ScrollContentsBy = slot;
}

void QTextEdit_virtualbase_ScrollContentsBy(void* self, int dx, int dy) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_ScrollContentsBy(dx, dy);
}

void QTextEdit_override_virtual_DoSetTextCursor(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) )->handle__DoSetTextCursor = slot;
}

void QTextEdit_virtualbase_DoSetTextCursor(void* self, QTextCursor* cursor) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_DoSetTextCursor(cursor);
}

void QTextEdit_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) )->handle__MinimumSizeHint = slot;
}

QSize* QTextEdit_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQTextEdit*)(self) )->virtualbase_MinimumSizeHint();
}

void QTextEdit_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) )->handle__SizeHint = slot;
}

QSize* QTextEdit_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQTextEdit*)(self) )->virtualbase_SizeHint();
}

void QTextEdit_override_virtual_SetupViewport(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) )->handle__SetupViewport = slot;
}

void QTextEdit_virtualbase_SetupViewport(void* self, QWidget* viewport) {
	( (MiqtVirtualQTextEdit*)(self) )->virtualbase_SetupViewport(viewport);
}

void QTextEdit_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) )->handle__EventFilter = slot;
}

bool QTextEdit_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQTextEdit*)(self) )->virtualbase_EventFilter(param1, param2);
}

void QTextEdit_override_virtual_ViewportEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) )->handle__ViewportEvent = slot;
}

bool QTextEdit_virtualbase_ViewportEvent(void* self, QEvent* param1) {
	return ( (MiqtVirtualQTextEdit*)(self) )->virtualbase_ViewportEvent(param1);
}

void QTextEdit_override_virtual_ViewportSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextEdit*>( (QTextEdit*)(self) )->handle__ViewportSizeHint = slot;
}

QSize* QTextEdit_virtualbase_ViewportSizeHint(const void* self) {
	return ( (const MiqtVirtualQTextEdit*)(self) )->virtualbase_ViewportSizeHint();
}

void QTextEdit_Delete(QTextEdit* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQTextEdit*>( self );
	} else {
		delete self;
	}
}

QTextEdit__ExtraSelection* QTextEdit__ExtraSelection_new(QTextEdit__ExtraSelection* param1) {
	return new QTextEdit::ExtraSelection(*param1);
}

void QTextEdit__ExtraSelection_OperatorAssign(QTextEdit__ExtraSelection* self, QTextEdit__ExtraSelection* param1) {
	self->operator=(*param1);
}

void QTextEdit__ExtraSelection_Delete(QTextEdit__ExtraSelection* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QTextEdit::ExtraSelection*>( self );
	} else {
		delete self;
	}
}

