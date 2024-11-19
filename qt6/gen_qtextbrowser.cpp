#include <QAbstractScrollArea>
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
#include <QMetaObject>
#include <QMimeData>
#include <QMouseEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QShowEvent>
#include <QString>
#include <QByteArray>
#include <cstring>
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
#include "_cgo_export.h"

class MiqtVirtualQTextBrowser : public virtual QTextBrowser {
public:

	MiqtVirtualQTextBrowser(QWidget* parent): QTextBrowser(parent) {};
	MiqtVirtualQTextBrowser(): QTextBrowser() {};

	virtual ~MiqtVirtualQTextBrowser() = default;

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

		QVariant* callback_return_value = miqt_exec_callback_QTextBrowser_InputMethodQuery(const_cast<MiqtVirtualQTextBrowser*>(this), handle__InputMethodQuery, sigval1);

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
		

		QMimeData* callback_return_value = miqt_exec_callback_QTextBrowser_CreateMimeDataFromSelection(const_cast<MiqtVirtualQTextBrowser*>(this), handle__CreateMimeDataFromSelection);

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

		bool callback_return_value = miqt_exec_callback_QTextBrowser_CanInsertFromMimeData(const_cast<MiqtVirtualQTextBrowser*>(this), handle__CanInsertFromMimeData, sigval1);

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

};

void QTextBrowser_new(QWidget* parent, QTextBrowser** outptr_QTextBrowser, QTextEdit** outptr_QTextEdit, QAbstractScrollArea** outptr_QAbstractScrollArea, QFrame** outptr_QFrame, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQTextBrowser* ret = new MiqtVirtualQTextBrowser(parent);
	*outptr_QTextBrowser = ret;
	*outptr_QTextEdit = static_cast<QTextEdit*>(ret);
	*outptr_QAbstractScrollArea = static_cast<QAbstractScrollArea*>(ret);
	*outptr_QFrame = static_cast<QFrame*>(ret);
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

void QTextBrowser_new2(QTextBrowser** outptr_QTextBrowser, QTextEdit** outptr_QTextEdit, QAbstractScrollArea** outptr_QAbstractScrollArea, QFrame** outptr_QFrame, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQTextBrowser* ret = new MiqtVirtualQTextBrowser();
	*outptr_QTextBrowser = ret;
	*outptr_QTextEdit = static_cast<QTextEdit*>(ret);
	*outptr_QAbstractScrollArea = static_cast<QAbstractScrollArea*>(ret);
	*outptr_QFrame = static_cast<QFrame*>(ret);
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
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

void QTextBrowser_override_virtual_LoadResource(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) )->handle__LoadResource = slot;
}

QVariant* QTextBrowser_virtualbase_LoadResource(void* self, int typeVal, QUrl* name) {
	return ( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_LoadResource(typeVal, name);
}

void QTextBrowser_override_virtual_Backward(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) )->handle__Backward = slot;
}

void QTextBrowser_virtualbase_Backward(void* self) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_Backward();
}

void QTextBrowser_override_virtual_Forward(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) )->handle__Forward = slot;
}

void QTextBrowser_virtualbase_Forward(void* self) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_Forward();
}

void QTextBrowser_override_virtual_Home(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) )->handle__Home = slot;
}

void QTextBrowser_virtualbase_Home(void* self) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_Home();
}

void QTextBrowser_override_virtual_Reload(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) )->handle__Reload = slot;
}

void QTextBrowser_virtualbase_Reload(void* self) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_Reload();
}

void QTextBrowser_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) )->handle__Event = slot;
}

bool QTextBrowser_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_Event(e);
}

void QTextBrowser_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) )->handle__KeyPressEvent = slot;
}

void QTextBrowser_virtualbase_KeyPressEvent(void* self, QKeyEvent* ev) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_KeyPressEvent(ev);
}

void QTextBrowser_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) )->handle__MouseMoveEvent = slot;
}

void QTextBrowser_virtualbase_MouseMoveEvent(void* self, QMouseEvent* ev) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_MouseMoveEvent(ev);
}

void QTextBrowser_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) )->handle__MousePressEvent = slot;
}

void QTextBrowser_virtualbase_MousePressEvent(void* self, QMouseEvent* ev) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_MousePressEvent(ev);
}

void QTextBrowser_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) )->handle__MouseReleaseEvent = slot;
}

void QTextBrowser_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* ev) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_MouseReleaseEvent(ev);
}

void QTextBrowser_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) )->handle__FocusOutEvent = slot;
}

void QTextBrowser_virtualbase_FocusOutEvent(void* self, QFocusEvent* ev) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_FocusOutEvent(ev);
}

void QTextBrowser_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) )->handle__FocusNextPrevChild = slot;
}

bool QTextBrowser_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_FocusNextPrevChild(next);
}

void QTextBrowser_override_virtual_PaintEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) )->handle__PaintEvent = slot;
}

void QTextBrowser_virtualbase_PaintEvent(void* self, QPaintEvent* e) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_PaintEvent(e);
}

void QTextBrowser_override_virtual_DoSetSource(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) )->handle__DoSetSource = slot;
}

void QTextBrowser_virtualbase_DoSetSource(void* self, QUrl* name, int typeVal) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_DoSetSource(name, typeVal);
}

void QTextBrowser_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) )->handle__InputMethodQuery = slot;
}

QVariant* QTextBrowser_virtualbase_InputMethodQuery(const void* self, int property) {
	return ( (const MiqtVirtualQTextBrowser*)(self) )->virtualbase_InputMethodQuery(property);
}

void QTextBrowser_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) )->handle__TimerEvent = slot;
}

void QTextBrowser_virtualbase_TimerEvent(void* self, QTimerEvent* e) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_TimerEvent(e);
}

void QTextBrowser_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) )->handle__KeyReleaseEvent = slot;
}

void QTextBrowser_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_KeyReleaseEvent(e);
}

void QTextBrowser_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) )->handle__ResizeEvent = slot;
}

void QTextBrowser_virtualbase_ResizeEvent(void* self, QResizeEvent* e) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_ResizeEvent(e);
}

void QTextBrowser_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) )->handle__MouseDoubleClickEvent = slot;
}

void QTextBrowser_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_MouseDoubleClickEvent(e);
}

void QTextBrowser_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) )->handle__ContextMenuEvent = slot;
}

void QTextBrowser_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* e) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_ContextMenuEvent(e);
}

void QTextBrowser_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) )->handle__DragEnterEvent = slot;
}

void QTextBrowser_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* e) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_DragEnterEvent(e);
}

void QTextBrowser_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) )->handle__DragLeaveEvent = slot;
}

void QTextBrowser_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* e) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_DragLeaveEvent(e);
}

void QTextBrowser_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) )->handle__DragMoveEvent = slot;
}

void QTextBrowser_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* e) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_DragMoveEvent(e);
}

void QTextBrowser_override_virtual_DropEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) )->handle__DropEvent = slot;
}

void QTextBrowser_virtualbase_DropEvent(void* self, QDropEvent* e) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_DropEvent(e);
}

void QTextBrowser_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) )->handle__FocusInEvent = slot;
}

void QTextBrowser_virtualbase_FocusInEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_FocusInEvent(e);
}

void QTextBrowser_override_virtual_ShowEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) )->handle__ShowEvent = slot;
}

void QTextBrowser_virtualbase_ShowEvent(void* self, QShowEvent* param1) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_ShowEvent(param1);
}

void QTextBrowser_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) )->handle__ChangeEvent = slot;
}

void QTextBrowser_virtualbase_ChangeEvent(void* self, QEvent* e) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_ChangeEvent(e);
}

void QTextBrowser_override_virtual_WheelEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) )->handle__WheelEvent = slot;
}

void QTextBrowser_virtualbase_WheelEvent(void* self, QWheelEvent* e) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_WheelEvent(e);
}

void QTextBrowser_override_virtual_CreateMimeDataFromSelection(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) )->handle__CreateMimeDataFromSelection = slot;
}

QMimeData* QTextBrowser_virtualbase_CreateMimeDataFromSelection(const void* self) {
	return ( (const MiqtVirtualQTextBrowser*)(self) )->virtualbase_CreateMimeDataFromSelection();
}

void QTextBrowser_override_virtual_CanInsertFromMimeData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) )->handle__CanInsertFromMimeData = slot;
}

bool QTextBrowser_virtualbase_CanInsertFromMimeData(const void* self, QMimeData* source) {
	return ( (const MiqtVirtualQTextBrowser*)(self) )->virtualbase_CanInsertFromMimeData(source);
}

void QTextBrowser_override_virtual_InsertFromMimeData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) )->handle__InsertFromMimeData = slot;
}

void QTextBrowser_virtualbase_InsertFromMimeData(void* self, QMimeData* source) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_InsertFromMimeData(source);
}

void QTextBrowser_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) )->handle__InputMethodEvent = slot;
}

void QTextBrowser_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_InputMethodEvent(param1);
}

void QTextBrowser_override_virtual_ScrollContentsBy(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) )->handle__ScrollContentsBy = slot;
}

void QTextBrowser_virtualbase_ScrollContentsBy(void* self, int dx, int dy) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_ScrollContentsBy(dx, dy);
}

void QTextBrowser_override_virtual_DoSetTextCursor(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTextBrowser*>( (QTextBrowser*)(self) )->handle__DoSetTextCursor = slot;
}

void QTextBrowser_virtualbase_DoSetTextCursor(void* self, QTextCursor* cursor) {
	( (MiqtVirtualQTextBrowser*)(self) )->virtualbase_DoSetTextCursor(cursor);
}

void QTextBrowser_Delete(QTextBrowser* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQTextBrowser*>( self );
	} else {
		delete self;
	}
}

