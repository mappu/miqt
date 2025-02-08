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
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFrame>
#include <QHideEvent>
#include <QImage>
#include <QInputMethodEvent>
#include <QKeyEvent>
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
#include <QPixmap>
#include <QPoint>
#include <QRect>
#include <QResizeEvent>
#include <QScrollBar>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qsciscintillabase.h>
#include "gen_qsciscintillabase.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QsciScintillaBase_QSCN_SELCHANGED(intptr_t, bool);
void miqt_exec_callback_QsciScintillaBase_SCN_AUTOCCANCELLED(intptr_t);
void miqt_exec_callback_QsciScintillaBase_SCN_AUTOCCHARDELETED(intptr_t);
void miqt_exec_callback_QsciScintillaBase_SCN_AUTOCCOMPLETED(intptr_t, const char*, int, int, int);
void miqt_exec_callback_QsciScintillaBase_SCN_AUTOCSELECTION(intptr_t, const char*, int, int, int);
void miqt_exec_callback_QsciScintillaBase_SCN_AUTOCSELECTION2(intptr_t, const char*, int);
void miqt_exec_callback_QsciScintillaBase_SCN_AUTOCSELECTIONCHANGE(intptr_t, const char*, int, int);
void miqt_exec_callback_QsciScintillaBase_SCEN_CHANGE(intptr_t);
void miqt_exec_callback_QsciScintillaBase_SCN_CALLTIPCLICK(intptr_t, int);
void miqt_exec_callback_QsciScintillaBase_SCN_CHARADDED(intptr_t, int);
void miqt_exec_callback_QsciScintillaBase_SCN_DOUBLECLICK(intptr_t, int, int, int);
void miqt_exec_callback_QsciScintillaBase_SCN_DWELLEND(intptr_t, int, int, int);
void miqt_exec_callback_QsciScintillaBase_SCN_DWELLSTART(intptr_t, int, int, int);
void miqt_exec_callback_QsciScintillaBase_SCN_FOCUSIN(intptr_t);
void miqt_exec_callback_QsciScintillaBase_SCN_FOCUSOUT(intptr_t);
void miqt_exec_callback_QsciScintillaBase_SCN_HOTSPOTCLICK(intptr_t, int, int);
void miqt_exec_callback_QsciScintillaBase_SCN_HOTSPOTDOUBLECLICK(intptr_t, int, int);
void miqt_exec_callback_QsciScintillaBase_SCN_HOTSPOTRELEASECLICK(intptr_t, int, int);
void miqt_exec_callback_QsciScintillaBase_SCN_INDICATORCLICK(intptr_t, int, int);
void miqt_exec_callback_QsciScintillaBase_SCN_INDICATORRELEASE(intptr_t, int, int);
void miqt_exec_callback_QsciScintillaBase_SCN_MACRORECORD(intptr_t, unsigned int, unsigned long, void*);
void miqt_exec_callback_QsciScintillaBase_SCN_MARGINCLICK(intptr_t, int, int, int);
void miqt_exec_callback_QsciScintillaBase_SCN_MARGINRIGHTCLICK(intptr_t, int, int, int);
void miqt_exec_callback_QsciScintillaBase_SCN_MODIFIED(intptr_t, int, int, const char*, int, int, int, int, int, int, int);
void miqt_exec_callback_QsciScintillaBase_SCN_MODIFYATTEMPTRO(intptr_t);
void miqt_exec_callback_QsciScintillaBase_SCN_NEEDSHOWN(intptr_t, int, int);
void miqt_exec_callback_QsciScintillaBase_SCN_PAINTED(intptr_t);
void miqt_exec_callback_QsciScintillaBase_SCN_SAVEPOINTLEFT(intptr_t);
void miqt_exec_callback_QsciScintillaBase_SCN_SAVEPOINTREACHED(intptr_t);
void miqt_exec_callback_QsciScintillaBase_SCN_STYLENEEDED(intptr_t, int);
void miqt_exec_callback_QsciScintillaBase_SCN_URIDROPPED(intptr_t, QUrl*);
void miqt_exec_callback_QsciScintillaBase_SCN_UPDATEUI(intptr_t, int);
void miqt_exec_callback_QsciScintillaBase_SCN_USERLISTSELECTION(intptr_t, const char*, int, int, int, int);
void miqt_exec_callback_QsciScintillaBase_SCN_USERLISTSELECTION2(intptr_t, const char*, int, int, int);
void miqt_exec_callback_QsciScintillaBase_SCN_USERLISTSELECTION3(intptr_t, const char*, int);
void miqt_exec_callback_QsciScintillaBase_SCN_ZOOM(intptr_t);
bool miqt_exec_callback_QsciScintillaBase_canInsertFromMimeData(const QsciScintillaBase*, intptr_t, QMimeData*);
struct miqt_string miqt_exec_callback_QsciScintillaBase_fromMimeData(const QsciScintillaBase*, intptr_t, QMimeData*, bool*);
QMimeData* miqt_exec_callback_QsciScintillaBase_toMimeData(const QsciScintillaBase*, intptr_t, struct miqt_string, bool);
void miqt_exec_callback_QsciScintillaBase_changeEvent(QsciScintillaBase*, intptr_t, QEvent*);
void miqt_exec_callback_QsciScintillaBase_contextMenuEvent(QsciScintillaBase*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QsciScintillaBase_dragEnterEvent(QsciScintillaBase*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QsciScintillaBase_dragLeaveEvent(QsciScintillaBase*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QsciScintillaBase_dragMoveEvent(QsciScintillaBase*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QsciScintillaBase_dropEvent(QsciScintillaBase*, intptr_t, QDropEvent*);
void miqt_exec_callback_QsciScintillaBase_focusInEvent(QsciScintillaBase*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QsciScintillaBase_focusOutEvent(QsciScintillaBase*, intptr_t, QFocusEvent*);
bool miqt_exec_callback_QsciScintillaBase_focusNextPrevChild(QsciScintillaBase*, intptr_t, bool);
void miqt_exec_callback_QsciScintillaBase_keyPressEvent(QsciScintillaBase*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QsciScintillaBase_inputMethodEvent(QsciScintillaBase*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QsciScintillaBase_inputMethodQuery(const QsciScintillaBase*, intptr_t, int);
void miqt_exec_callback_QsciScintillaBase_mouseDoubleClickEvent(QsciScintillaBase*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QsciScintillaBase_mouseMoveEvent(QsciScintillaBase*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QsciScintillaBase_mousePressEvent(QsciScintillaBase*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QsciScintillaBase_mouseReleaseEvent(QsciScintillaBase*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QsciScintillaBase_paintEvent(QsciScintillaBase*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QsciScintillaBase_resizeEvent(QsciScintillaBase*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QsciScintillaBase_scrollContentsBy(QsciScintillaBase*, intptr_t, int, int);
QSize* miqt_exec_callback_QsciScintillaBase_minimumSizeHint(const QsciScintillaBase*, intptr_t);
QSize* miqt_exec_callback_QsciScintillaBase_sizeHint(const QsciScintillaBase*, intptr_t);
void miqt_exec_callback_QsciScintillaBase_setupViewport(QsciScintillaBase*, intptr_t, QWidget*);
bool miqt_exec_callback_QsciScintillaBase_eventFilter(QsciScintillaBase*, intptr_t, QObject*, QEvent*);
bool miqt_exec_callback_QsciScintillaBase_event(QsciScintillaBase*, intptr_t, QEvent*);
bool miqt_exec_callback_QsciScintillaBase_viewportEvent(QsciScintillaBase*, intptr_t, QEvent*);
void miqt_exec_callback_QsciScintillaBase_wheelEvent(QsciScintillaBase*, intptr_t, QWheelEvent*);
QSize* miqt_exec_callback_QsciScintillaBase_viewportSizeHint(const QsciScintillaBase*, intptr_t);
void miqt_exec_callback_QsciScintillaBase_initStyleOption(const QsciScintillaBase*, intptr_t, QStyleOptionFrame*);
int miqt_exec_callback_QsciScintillaBase_devType(const QsciScintillaBase*, intptr_t);
void miqt_exec_callback_QsciScintillaBase_setVisible(QsciScintillaBase*, intptr_t, bool);
int miqt_exec_callback_QsciScintillaBase_heightForWidth(const QsciScintillaBase*, intptr_t, int);
bool miqt_exec_callback_QsciScintillaBase_hasHeightForWidth(const QsciScintillaBase*, intptr_t);
QPaintEngine* miqt_exec_callback_QsciScintillaBase_paintEngine(const QsciScintillaBase*, intptr_t);
void miqt_exec_callback_QsciScintillaBase_keyReleaseEvent(QsciScintillaBase*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QsciScintillaBase_enterEvent(QsciScintillaBase*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QsciScintillaBase_leaveEvent(QsciScintillaBase*, intptr_t, QEvent*);
void miqt_exec_callback_QsciScintillaBase_moveEvent(QsciScintillaBase*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QsciScintillaBase_closeEvent(QsciScintillaBase*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QsciScintillaBase_tabletEvent(QsciScintillaBase*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QsciScintillaBase_actionEvent(QsciScintillaBase*, intptr_t, QActionEvent*);
void miqt_exec_callback_QsciScintillaBase_showEvent(QsciScintillaBase*, intptr_t, QShowEvent*);
void miqt_exec_callback_QsciScintillaBase_hideEvent(QsciScintillaBase*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QsciScintillaBase_nativeEvent(QsciScintillaBase*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QsciScintillaBase_metric(const QsciScintillaBase*, intptr_t, int);
void miqt_exec_callback_QsciScintillaBase_initPainter(const QsciScintillaBase*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QsciScintillaBase_redirected(const QsciScintillaBase*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QsciScintillaBase_sharedPainter(const QsciScintillaBase*, intptr_t);
void miqt_exec_callback_QsciScintillaBase_timerEvent(QsciScintillaBase*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QsciScintillaBase_childEvent(QsciScintillaBase*, intptr_t, QChildEvent*);
void miqt_exec_callback_QsciScintillaBase_customEvent(QsciScintillaBase*, intptr_t, QEvent*);
void miqt_exec_callback_QsciScintillaBase_connectNotify(QsciScintillaBase*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QsciScintillaBase_disconnectNotify(QsciScintillaBase*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciScintillaBase final : public QsciScintillaBase {
public:

	MiqtVirtualQsciScintillaBase(QWidget* parent): QsciScintillaBase(parent) {};
	MiqtVirtualQsciScintillaBase(): QsciScintillaBase() {};

	virtual ~MiqtVirtualQsciScintillaBase() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canInsertFromMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canInsertFromMimeData(const QMimeData* source) const override {
		if (handle__canInsertFromMimeData == 0) {
			return QsciScintillaBase::canInsertFromMimeData(source);
		}
		
		QMimeData* sigval1 = (QMimeData*) source;

		bool callback_return_value = miqt_exec_callback_QsciScintillaBase_canInsertFromMimeData(this, handle__canInsertFromMimeData, sigval1);

		return callback_return_value;
	}

	friend bool QsciScintillaBase_virtualbase_canInsertFromMimeData(const void* self, QMimeData* source);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__fromMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual QByteArray fromMimeData(const QMimeData* source, bool& rectangular) const override {
		if (handle__fromMimeData == 0) {
			return QsciScintillaBase::fromMimeData(source, rectangular);
		}
		
		QMimeData* sigval1 = (QMimeData*) source;
		bool* sigval2 = &rectangular;

		struct miqt_string callback_return_value = miqt_exec_callback_QsciScintillaBase_fromMimeData(this, handle__fromMimeData, sigval1, sigval2);
		QByteArray callback_return_value_QByteArray(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QByteArray;
	}

	friend struct miqt_string QsciScintillaBase_virtualbase_fromMimeData(const void* self, QMimeData* source, bool* rectangular);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__toMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMimeData* toMimeData(const QByteArray& text, bool rectangular) const override {
		if (handle__toMimeData == 0) {
			return QsciScintillaBase::toMimeData(text, rectangular);
		}
		
		const QByteArray text_qb = text;
		struct miqt_string text_ms;
		text_ms.len = text_qb.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_qb.data(), text_ms.len);
		struct miqt_string sigval1 = text_ms;
		bool sigval2 = rectangular;

		QMimeData* callback_return_value = miqt_exec_callback_QsciScintillaBase_toMimeData(this, handle__toMimeData, sigval1, sigval2);

		return callback_return_value;
	}

	friend QMimeData* QsciScintillaBase_virtualbase_toMimeData(const void* self, struct miqt_string text, bool rectangular);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (handle__changeEvent == 0) {
			QsciScintillaBase::changeEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QsciScintillaBase_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	friend void QsciScintillaBase_virtualbase_changeEvent(void* self, QEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* e) override {
		if (handle__contextMenuEvent == 0) {
			QsciScintillaBase::contextMenuEvent(e);
			return;
		}
		
		QContextMenuEvent* sigval1 = e;

		miqt_exec_callback_QsciScintillaBase_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	friend void QsciScintillaBase_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* e) override {
		if (handle__dragEnterEvent == 0) {
			QsciScintillaBase::dragEnterEvent(e);
			return;
		}
		
		QDragEnterEvent* sigval1 = e;

		miqt_exec_callback_QsciScintillaBase_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	friend void QsciScintillaBase_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
		if (handle__dragLeaveEvent == 0) {
			QsciScintillaBase::dragLeaveEvent(e);
			return;
		}
		
		QDragLeaveEvent* sigval1 = e;

		miqt_exec_callback_QsciScintillaBase_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	friend void QsciScintillaBase_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* e) override {
		if (handle__dragMoveEvent == 0) {
			QsciScintillaBase::dragMoveEvent(e);
			return;
		}
		
		QDragMoveEvent* sigval1 = e;

		miqt_exec_callback_QsciScintillaBase_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	friend void QsciScintillaBase_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* e) override {
		if (handle__dropEvent == 0) {
			QsciScintillaBase::dropEvent(e);
			return;
		}
		
		QDropEvent* sigval1 = e;

		miqt_exec_callback_QsciScintillaBase_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	friend void QsciScintillaBase_virtualbase_dropEvent(void* self, QDropEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* e) override {
		if (handle__focusInEvent == 0) {
			QsciScintillaBase::focusInEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QsciScintillaBase_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	friend void QsciScintillaBase_virtualbase_focusInEvent(void* self, QFocusEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* e) override {
		if (handle__focusOutEvent == 0) {
			QsciScintillaBase::focusOutEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QsciScintillaBase_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	friend void QsciScintillaBase_virtualbase_focusOutEvent(void* self, QFocusEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QsciScintillaBase::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QsciScintillaBase_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	friend bool QsciScintillaBase_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* e) override {
		if (handle__keyPressEvent == 0) {
			QsciScintillaBase::keyPressEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QsciScintillaBase_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	friend void QsciScintillaBase_virtualbase_keyPressEvent(void* self, QKeyEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__inputMethodEvent == 0) {
			QsciScintillaBase::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QsciScintillaBase_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	friend void QsciScintillaBase_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__inputMethodQuery == 0) {
			return QsciScintillaBase::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QsciScintillaBase_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	friend QVariant* QsciScintillaBase_virtualbase_inputMethodQuery(const void* self, int query);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QsciScintillaBase::mouseDoubleClickEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QsciScintillaBase_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	friend void QsciScintillaBase_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* e) override {
		if (handle__mouseMoveEvent == 0) {
			QsciScintillaBase::mouseMoveEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QsciScintillaBase_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	friend void QsciScintillaBase_virtualbase_mouseMoveEvent(void* self, QMouseEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* e) override {
		if (handle__mousePressEvent == 0) {
			QsciScintillaBase::mousePressEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QsciScintillaBase_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	friend void QsciScintillaBase_virtualbase_mousePressEvent(void* self, QMouseEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (handle__mouseReleaseEvent == 0) {
			QsciScintillaBase::mouseReleaseEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QsciScintillaBase_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	friend void QsciScintillaBase_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* e) override {
		if (handle__paintEvent == 0) {
			QsciScintillaBase::paintEvent(e);
			return;
		}
		
		QPaintEvent* sigval1 = e;

		miqt_exec_callback_QsciScintillaBase_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	friend void QsciScintillaBase_virtualbase_paintEvent(void* self, QPaintEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* e) override {
		if (handle__resizeEvent == 0) {
			QsciScintillaBase::resizeEvent(e);
			return;
		}
		
		QResizeEvent* sigval1 = e;

		miqt_exec_callback_QsciScintillaBase_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	friend void QsciScintillaBase_virtualbase_resizeEvent(void* self, QResizeEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (handle__scrollContentsBy == 0) {
			QsciScintillaBase::scrollContentsBy(dx, dy);
			return;
		}
		
		int sigval1 = dx;
		int sigval2 = dy;

		miqt_exec_callback_QsciScintillaBase_scrollContentsBy(this, handle__scrollContentsBy, sigval1, sigval2);

		
	}

	friend void QsciScintillaBase_virtualbase_scrollContentsBy(void* self, int dx, int dy);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QsciScintillaBase::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QsciScintillaBase_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	friend QSize* QsciScintillaBase_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QsciScintillaBase::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QsciScintillaBase_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	friend QSize* QsciScintillaBase_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setupViewport = 0;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (handle__setupViewport == 0) {
			QsciScintillaBase::setupViewport(viewport);
			return;
		}
		
		QWidget* sigval1 = viewport;

		miqt_exec_callback_QsciScintillaBase_setupViewport(this, handle__setupViewport, sigval1);

		
	}

	friend void QsciScintillaBase_virtualbase_setupViewport(void* self, QWidget* viewport);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__eventFilter == 0) {
			return QsciScintillaBase::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QsciScintillaBase_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QsciScintillaBase_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__event == 0) {
			return QsciScintillaBase::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QsciScintillaBase_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool QsciScintillaBase_virtualbase_event(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewportEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* param1) override {
		if (handle__viewportEvent == 0) {
			return QsciScintillaBase::viewportEvent(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QsciScintillaBase_viewportEvent(this, handle__viewportEvent, sigval1);

		return callback_return_value;
	}

	friend bool QsciScintillaBase_virtualbase_viewportEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (handle__wheelEvent == 0) {
			QsciScintillaBase::wheelEvent(param1);
			return;
		}
		
		QWheelEvent* sigval1 = param1;

		miqt_exec_callback_QsciScintillaBase_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	friend void QsciScintillaBase_virtualbase_wheelEvent(void* self, QWheelEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewportSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (handle__viewportSizeHint == 0) {
			return QsciScintillaBase::viewportSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QsciScintillaBase_viewportSizeHint(this, handle__viewportSizeHint);

		return *callback_return_value;
	}

	friend QSize* QsciScintillaBase_virtualbase_viewportSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionFrame* option) const override {
		if (handle__initStyleOption == 0) {
			QsciScintillaBase::initStyleOption(option);
			return;
		}
		
		QStyleOptionFrame* sigval1 = option;

		miqt_exec_callback_QsciScintillaBase_initStyleOption(this, handle__initStyleOption, sigval1);

		
	}

	friend void QsciScintillaBase_virtualbase_initStyleOption(const void* self, QStyleOptionFrame* option);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QsciScintillaBase::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QsciScintillaBase_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	friend int QsciScintillaBase_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QsciScintillaBase::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QsciScintillaBase_setVisible(this, handle__setVisible, sigval1);

		
	}

	friend void QsciScintillaBase_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QsciScintillaBase::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QsciScintillaBase_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	friend int QsciScintillaBase_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QsciScintillaBase::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QsciScintillaBase_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	friend bool QsciScintillaBase_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QsciScintillaBase::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QsciScintillaBase_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	friend QPaintEngine* QsciScintillaBase_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QsciScintillaBase::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QsciScintillaBase_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	friend void QsciScintillaBase_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__enterEvent == 0) {
			QsciScintillaBase::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QsciScintillaBase_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	friend void QsciScintillaBase_virtualbase_enterEvent(void* self, QEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QsciScintillaBase::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QsciScintillaBase_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	friend void QsciScintillaBase_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QsciScintillaBase::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QsciScintillaBase_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	friend void QsciScintillaBase_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QsciScintillaBase::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QsciScintillaBase_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	friend void QsciScintillaBase_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QsciScintillaBase::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QsciScintillaBase_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	friend void QsciScintillaBase_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QsciScintillaBase::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QsciScintillaBase_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	friend void QsciScintillaBase_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QsciScintillaBase::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QsciScintillaBase_showEvent(this, handle__showEvent, sigval1);

		
	}

	friend void QsciScintillaBase_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QsciScintillaBase::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QsciScintillaBase_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	friend void QsciScintillaBase_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__nativeEvent == 0) {
			return QsciScintillaBase::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QsciScintillaBase_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	friend bool QsciScintillaBase_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QsciScintillaBase::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QsciScintillaBase_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	friend int QsciScintillaBase_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QsciScintillaBase::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QsciScintillaBase_initPainter(this, handle__initPainter, sigval1);

		
	}

	friend void QsciScintillaBase_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QsciScintillaBase::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QsciScintillaBase_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	friend QPaintDevice* QsciScintillaBase_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QsciScintillaBase::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QsciScintillaBase_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	friend QPainter* QsciScintillaBase_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QsciScintillaBase::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QsciScintillaBase_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void QsciScintillaBase_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QsciScintillaBase::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QsciScintillaBase_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void QsciScintillaBase_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QsciScintillaBase::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QsciScintillaBase_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void QsciScintillaBase_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QsciScintillaBase::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciScintillaBase_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void QsciScintillaBase_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QsciScintillaBase::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciScintillaBase_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void QsciScintillaBase_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QsciScintillaBase_protectedbase_setScrollBars(bool* _dynamic_cast_ok, void* self);
	friend struct miqt_string QsciScintillaBase_protectedbase_textAsBytes(bool* _dynamic_cast_ok, const void* self, struct miqt_string text);
	friend struct miqt_string QsciScintillaBase_protectedbase_bytesAsText(bool* _dynamic_cast_ok, const void* self, const char* bytes);
	friend bool QsciScintillaBase_protectedbase_contextMenuNeeded(bool* _dynamic_cast_ok, const void* self, int x, int y);
	friend void QsciScintillaBase_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom);
	friend QMargins* QsciScintillaBase_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self);
	friend void QsciScintillaBase_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
	friend void QsciScintillaBase_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QsciScintillaBase_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QsciScintillaBase_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QsciScintillaBase_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QsciScintillaBase_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QsciScintillaBase_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QsciScintillaBase_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QsciScintillaBase_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QsciScintillaBase_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QsciScintillaBase* QsciScintillaBase_new(QWidget* parent) {
	return new MiqtVirtualQsciScintillaBase(parent);
}

QsciScintillaBase* QsciScintillaBase_new2() {
	return new MiqtVirtualQsciScintillaBase();
}

void QsciScintillaBase_virtbase(QsciScintillaBase* src, QAbstractScrollArea** outptr_QAbstractScrollArea) {
	*outptr_QAbstractScrollArea = static_cast<QAbstractScrollArea*>(src);
}

QMetaObject* QsciScintillaBase_metaObject(const QsciScintillaBase* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciScintillaBase_metacast(QsciScintillaBase* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciScintillaBase_tr(const char* s) {
	QString _ret = QsciScintillaBase::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QsciScintillaBase* QsciScintillaBase_pool() {
	return QsciScintillaBase::pool();
}

void QsciScintillaBase_replaceHorizontalScrollBar(QsciScintillaBase* self, QScrollBar* scrollBar) {
	self->replaceHorizontalScrollBar(scrollBar);
}

void QsciScintillaBase_replaceVerticalScrollBar(QsciScintillaBase* self, QScrollBar* scrollBar) {
	self->replaceVerticalScrollBar(scrollBar);
}

long QsciScintillaBase_SendScintilla(const QsciScintillaBase* self, unsigned int msg) {
	return self->SendScintilla(static_cast<unsigned int>(msg));
}

long QsciScintillaBase_SendScintilla2(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, void* lParam) {
	return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<unsigned long>(wParam), lParam);
}

long QsciScintillaBase_SendScintilla3(const QsciScintillaBase* self, unsigned int msg, uintptr_t wParam, const char* lParam) {
	return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<uintptr_t>(wParam), lParam);
}

long QsciScintillaBase_SendScintilla4(const QsciScintillaBase* self, unsigned int msg, const char* lParam) {
	return self->SendScintilla(static_cast<unsigned int>(msg), lParam);
}

long QsciScintillaBase_SendScintilla5(const QsciScintillaBase* self, unsigned int msg, const char* wParam, const char* lParam) {
	return self->SendScintilla(static_cast<unsigned int>(msg), wParam, lParam);
}

long QsciScintillaBase_SendScintilla6(const QsciScintillaBase* self, unsigned int msg, long wParam) {
	return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<long>(wParam));
}

long QsciScintillaBase_SendScintilla7(const QsciScintillaBase* self, unsigned int msg, int wParam) {
	return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<int>(wParam));
}

long QsciScintillaBase_SendScintilla8(const QsciScintillaBase* self, unsigned int msg, long cpMin, long cpMax, char* lpstrText) {
	return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<long>(cpMin), static_cast<long>(cpMax), lpstrText);
}

long QsciScintillaBase_SendScintilla9(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, QColor* col) {
	return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<unsigned long>(wParam), *col);
}

long QsciScintillaBase_SendScintilla10(const QsciScintillaBase* self, unsigned int msg, QColor* col) {
	return self->SendScintilla(static_cast<unsigned int>(msg), *col);
}

long QsciScintillaBase_SendScintilla11(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, QPainter* hdc, QRect* rc, long cpMin, long cpMax) {
	return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<unsigned long>(wParam), hdc, *rc, static_cast<long>(cpMin), static_cast<long>(cpMax));
}

long QsciScintillaBase_SendScintilla12(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, QPixmap* lParam) {
	return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<unsigned long>(wParam), *lParam);
}

long QsciScintillaBase_SendScintilla13(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, QImage* lParam) {
	return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<unsigned long>(wParam), *lParam);
}

void* QsciScintillaBase_SendScintillaPtrResult(const QsciScintillaBase* self, unsigned int msg) {
	return self->SendScintillaPtrResult(static_cast<unsigned int>(msg));
}

int QsciScintillaBase_commandKey(int qt_key, int* modifiers) {
	return QsciScintillaBase::commandKey(static_cast<int>(qt_key), static_cast<int&>(*modifiers));
}

void QsciScintillaBase_QSCN_SELCHANGED(QsciScintillaBase* self, bool yes) {
	self->QSCN_SELCHANGED(yes);
}

void QsciScintillaBase_connect_QSCN_SELCHANGED(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(bool)>(&QsciScintillaBase::QSCN_SELCHANGED), self, [=](bool yes) {
		bool sigval1 = yes;
		miqt_exec_callback_QsciScintillaBase_QSCN_SELCHANGED(slot, sigval1);
	});
}

void QsciScintillaBase_SCN_AUTOCCANCELLED(QsciScintillaBase* self) {
	self->SCN_AUTOCCANCELLED();
}

void QsciScintillaBase_connect_SCN_AUTOCCANCELLED(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)()>(&QsciScintillaBase::SCN_AUTOCCANCELLED), self, [=]() {
		miqt_exec_callback_QsciScintillaBase_SCN_AUTOCCANCELLED(slot);
	});
}

void QsciScintillaBase_SCN_AUTOCCHARDELETED(QsciScintillaBase* self) {
	self->SCN_AUTOCCHARDELETED();
}

void QsciScintillaBase_connect_SCN_AUTOCCHARDELETED(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)()>(&QsciScintillaBase::SCN_AUTOCCHARDELETED), self, [=]() {
		miqt_exec_callback_QsciScintillaBase_SCN_AUTOCCHARDELETED(slot);
	});
}

void QsciScintillaBase_SCN_AUTOCCOMPLETED(QsciScintillaBase* self, const char* selection, int position, int ch, int method) {
	self->SCN_AUTOCCOMPLETED(selection, static_cast<int>(position), static_cast<int>(ch), static_cast<int>(method));
}

void QsciScintillaBase_connect_SCN_AUTOCCOMPLETED(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(const char*, int, int, int)>(&QsciScintillaBase::SCN_AUTOCCOMPLETED), self, [=](const char* selection, int position, int ch, int method) {
		const char* sigval1 = (const char*) selection;
		int sigval2 = position;
		int sigval3 = ch;
		int sigval4 = method;
		miqt_exec_callback_QsciScintillaBase_SCN_AUTOCCOMPLETED(slot, sigval1, sigval2, sigval3, sigval4);
	});
}

void QsciScintillaBase_SCN_AUTOCSELECTION(QsciScintillaBase* self, const char* selection, int position, int ch, int method) {
	self->SCN_AUTOCSELECTION(selection, static_cast<int>(position), static_cast<int>(ch), static_cast<int>(method));
}

void QsciScintillaBase_connect_SCN_AUTOCSELECTION(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(const char*, int, int, int)>(&QsciScintillaBase::SCN_AUTOCSELECTION), self, [=](const char* selection, int position, int ch, int method) {
		const char* sigval1 = (const char*) selection;
		int sigval2 = position;
		int sigval3 = ch;
		int sigval4 = method;
		miqt_exec_callback_QsciScintillaBase_SCN_AUTOCSELECTION(slot, sigval1, sigval2, sigval3, sigval4);
	});
}

void QsciScintillaBase_SCN_AUTOCSELECTION2(QsciScintillaBase* self, const char* selection, int position) {
	self->SCN_AUTOCSELECTION(selection, static_cast<int>(position));
}

void QsciScintillaBase_connect_SCN_AUTOCSELECTION2(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(const char*, int)>(&QsciScintillaBase::SCN_AUTOCSELECTION), self, [=](const char* selection, int position) {
		const char* sigval1 = (const char*) selection;
		int sigval2 = position;
		miqt_exec_callback_QsciScintillaBase_SCN_AUTOCSELECTION2(slot, sigval1, sigval2);
	});
}

void QsciScintillaBase_SCN_AUTOCSELECTIONCHANGE(QsciScintillaBase* self, const char* selection, int id, int position) {
	self->SCN_AUTOCSELECTIONCHANGE(selection, static_cast<int>(id), static_cast<int>(position));
}

void QsciScintillaBase_connect_SCN_AUTOCSELECTIONCHANGE(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(const char*, int, int)>(&QsciScintillaBase::SCN_AUTOCSELECTIONCHANGE), self, [=](const char* selection, int id, int position) {
		const char* sigval1 = (const char*) selection;
		int sigval2 = id;
		int sigval3 = position;
		miqt_exec_callback_QsciScintillaBase_SCN_AUTOCSELECTIONCHANGE(slot, sigval1, sigval2, sigval3);
	});
}

void QsciScintillaBase_SCEN_CHANGE(QsciScintillaBase* self) {
	self->SCEN_CHANGE();
}

void QsciScintillaBase_connect_SCEN_CHANGE(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)()>(&QsciScintillaBase::SCEN_CHANGE), self, [=]() {
		miqt_exec_callback_QsciScintillaBase_SCEN_CHANGE(slot);
	});
}

void QsciScintillaBase_SCN_CALLTIPCLICK(QsciScintillaBase* self, int direction) {
	self->SCN_CALLTIPCLICK(static_cast<int>(direction));
}

void QsciScintillaBase_connect_SCN_CALLTIPCLICK(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int)>(&QsciScintillaBase::SCN_CALLTIPCLICK), self, [=](int direction) {
		int sigval1 = direction;
		miqt_exec_callback_QsciScintillaBase_SCN_CALLTIPCLICK(slot, sigval1);
	});
}

void QsciScintillaBase_SCN_CHARADDED(QsciScintillaBase* self, int charadded) {
	self->SCN_CHARADDED(static_cast<int>(charadded));
}

void QsciScintillaBase_connect_SCN_CHARADDED(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int)>(&QsciScintillaBase::SCN_CHARADDED), self, [=](int charadded) {
		int sigval1 = charadded;
		miqt_exec_callback_QsciScintillaBase_SCN_CHARADDED(slot, sigval1);
	});
}

void QsciScintillaBase_SCN_DOUBLECLICK(QsciScintillaBase* self, int position, int line, int modifiers) {
	self->SCN_DOUBLECLICK(static_cast<int>(position), static_cast<int>(line), static_cast<int>(modifiers));
}

void QsciScintillaBase_connect_SCN_DOUBLECLICK(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int, int, int)>(&QsciScintillaBase::SCN_DOUBLECLICK), self, [=](int position, int line, int modifiers) {
		int sigval1 = position;
		int sigval2 = line;
		int sigval3 = modifiers;
		miqt_exec_callback_QsciScintillaBase_SCN_DOUBLECLICK(slot, sigval1, sigval2, sigval3);
	});
}

void QsciScintillaBase_SCN_DWELLEND(QsciScintillaBase* self, int position, int x, int y) {
	self->SCN_DWELLEND(static_cast<int>(position), static_cast<int>(x), static_cast<int>(y));
}

void QsciScintillaBase_connect_SCN_DWELLEND(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int, int, int)>(&QsciScintillaBase::SCN_DWELLEND), self, [=](int position, int x, int y) {
		int sigval1 = position;
		int sigval2 = x;
		int sigval3 = y;
		miqt_exec_callback_QsciScintillaBase_SCN_DWELLEND(slot, sigval1, sigval2, sigval3);
	});
}

void QsciScintillaBase_SCN_DWELLSTART(QsciScintillaBase* self, int position, int x, int y) {
	self->SCN_DWELLSTART(static_cast<int>(position), static_cast<int>(x), static_cast<int>(y));
}

void QsciScintillaBase_connect_SCN_DWELLSTART(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int, int, int)>(&QsciScintillaBase::SCN_DWELLSTART), self, [=](int position, int x, int y) {
		int sigval1 = position;
		int sigval2 = x;
		int sigval3 = y;
		miqt_exec_callback_QsciScintillaBase_SCN_DWELLSTART(slot, sigval1, sigval2, sigval3);
	});
}

void QsciScintillaBase_SCN_FOCUSIN(QsciScintillaBase* self) {
	self->SCN_FOCUSIN();
}

void QsciScintillaBase_connect_SCN_FOCUSIN(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)()>(&QsciScintillaBase::SCN_FOCUSIN), self, [=]() {
		miqt_exec_callback_QsciScintillaBase_SCN_FOCUSIN(slot);
	});
}

void QsciScintillaBase_SCN_FOCUSOUT(QsciScintillaBase* self) {
	self->SCN_FOCUSOUT();
}

void QsciScintillaBase_connect_SCN_FOCUSOUT(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)()>(&QsciScintillaBase::SCN_FOCUSOUT), self, [=]() {
		miqt_exec_callback_QsciScintillaBase_SCN_FOCUSOUT(slot);
	});
}

void QsciScintillaBase_SCN_HOTSPOTCLICK(QsciScintillaBase* self, int position, int modifiers) {
	self->SCN_HOTSPOTCLICK(static_cast<int>(position), static_cast<int>(modifiers));
}

void QsciScintillaBase_connect_SCN_HOTSPOTCLICK(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int, int)>(&QsciScintillaBase::SCN_HOTSPOTCLICK), self, [=](int position, int modifiers) {
		int sigval1 = position;
		int sigval2 = modifiers;
		miqt_exec_callback_QsciScintillaBase_SCN_HOTSPOTCLICK(slot, sigval1, sigval2);
	});
}

void QsciScintillaBase_SCN_HOTSPOTDOUBLECLICK(QsciScintillaBase* self, int position, int modifiers) {
	self->SCN_HOTSPOTDOUBLECLICK(static_cast<int>(position), static_cast<int>(modifiers));
}

void QsciScintillaBase_connect_SCN_HOTSPOTDOUBLECLICK(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int, int)>(&QsciScintillaBase::SCN_HOTSPOTDOUBLECLICK), self, [=](int position, int modifiers) {
		int sigval1 = position;
		int sigval2 = modifiers;
		miqt_exec_callback_QsciScintillaBase_SCN_HOTSPOTDOUBLECLICK(slot, sigval1, sigval2);
	});
}

void QsciScintillaBase_SCN_HOTSPOTRELEASECLICK(QsciScintillaBase* self, int position, int modifiers) {
	self->SCN_HOTSPOTRELEASECLICK(static_cast<int>(position), static_cast<int>(modifiers));
}

void QsciScintillaBase_connect_SCN_HOTSPOTRELEASECLICK(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int, int)>(&QsciScintillaBase::SCN_HOTSPOTRELEASECLICK), self, [=](int position, int modifiers) {
		int sigval1 = position;
		int sigval2 = modifiers;
		miqt_exec_callback_QsciScintillaBase_SCN_HOTSPOTRELEASECLICK(slot, sigval1, sigval2);
	});
}

void QsciScintillaBase_SCN_INDICATORCLICK(QsciScintillaBase* self, int position, int modifiers) {
	self->SCN_INDICATORCLICK(static_cast<int>(position), static_cast<int>(modifiers));
}

void QsciScintillaBase_connect_SCN_INDICATORCLICK(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int, int)>(&QsciScintillaBase::SCN_INDICATORCLICK), self, [=](int position, int modifiers) {
		int sigval1 = position;
		int sigval2 = modifiers;
		miqt_exec_callback_QsciScintillaBase_SCN_INDICATORCLICK(slot, sigval1, sigval2);
	});
}

void QsciScintillaBase_SCN_INDICATORRELEASE(QsciScintillaBase* self, int position, int modifiers) {
	self->SCN_INDICATORRELEASE(static_cast<int>(position), static_cast<int>(modifiers));
}

void QsciScintillaBase_connect_SCN_INDICATORRELEASE(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int, int)>(&QsciScintillaBase::SCN_INDICATORRELEASE), self, [=](int position, int modifiers) {
		int sigval1 = position;
		int sigval2 = modifiers;
		miqt_exec_callback_QsciScintillaBase_SCN_INDICATORRELEASE(slot, sigval1, sigval2);
	});
}

void QsciScintillaBase_SCN_MACRORECORD(QsciScintillaBase* self, unsigned int param1, unsigned long param2, void* param3) {
	self->SCN_MACRORECORD(static_cast<unsigned int>(param1), static_cast<unsigned long>(param2), param3);
}

void QsciScintillaBase_connect_SCN_MACRORECORD(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(unsigned int, unsigned long, void*)>(&QsciScintillaBase::SCN_MACRORECORD), self, [=](unsigned int param1, unsigned long param2, void* param3) {
		unsigned int sigval1 = param1;
		unsigned long sigval2 = param2;
		void* sigval3 = param3;
		miqt_exec_callback_QsciScintillaBase_SCN_MACRORECORD(slot, sigval1, sigval2, sigval3);
	});
}

void QsciScintillaBase_SCN_MARGINCLICK(QsciScintillaBase* self, int position, int modifiers, int margin) {
	self->SCN_MARGINCLICK(static_cast<int>(position), static_cast<int>(modifiers), static_cast<int>(margin));
}

void QsciScintillaBase_connect_SCN_MARGINCLICK(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int, int, int)>(&QsciScintillaBase::SCN_MARGINCLICK), self, [=](int position, int modifiers, int margin) {
		int sigval1 = position;
		int sigval2 = modifiers;
		int sigval3 = margin;
		miqt_exec_callback_QsciScintillaBase_SCN_MARGINCLICK(slot, sigval1, sigval2, sigval3);
	});
}

void QsciScintillaBase_SCN_MARGINRIGHTCLICK(QsciScintillaBase* self, int position, int modifiers, int margin) {
	self->SCN_MARGINRIGHTCLICK(static_cast<int>(position), static_cast<int>(modifiers), static_cast<int>(margin));
}

void QsciScintillaBase_connect_SCN_MARGINRIGHTCLICK(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int, int, int)>(&QsciScintillaBase::SCN_MARGINRIGHTCLICK), self, [=](int position, int modifiers, int margin) {
		int sigval1 = position;
		int sigval2 = modifiers;
		int sigval3 = margin;
		miqt_exec_callback_QsciScintillaBase_SCN_MARGINRIGHTCLICK(slot, sigval1, sigval2, sigval3);
	});
}

void QsciScintillaBase_SCN_MODIFIED(QsciScintillaBase* self, int param1, int param2, const char* param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10) {
	self->SCN_MODIFIED(static_cast<int>(param1), static_cast<int>(param2), param3, static_cast<int>(param4), static_cast<int>(param5), static_cast<int>(param6), static_cast<int>(param7), static_cast<int>(param8), static_cast<int>(param9), static_cast<int>(param10));
}

void QsciScintillaBase_connect_SCN_MODIFIED(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int, int, const char*, int, int, int, int, int, int, int)>(&QsciScintillaBase::SCN_MODIFIED), self, [=](int param1, int param2, const char* param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10) {
		int sigval1 = param1;
		int sigval2 = param2;
		const char* sigval3 = (const char*) param3;
		int sigval4 = param4;
		int sigval5 = param5;
		int sigval6 = param6;
		int sigval7 = param7;
		int sigval8 = param8;
		int sigval9 = param9;
		int sigval10 = param10;
		miqt_exec_callback_QsciScintillaBase_SCN_MODIFIED(slot, sigval1, sigval2, sigval3, sigval4, sigval5, sigval6, sigval7, sigval8, sigval9, sigval10);
	});
}

void QsciScintillaBase_SCN_MODIFYATTEMPTRO(QsciScintillaBase* self) {
	self->SCN_MODIFYATTEMPTRO();
}

void QsciScintillaBase_connect_SCN_MODIFYATTEMPTRO(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)()>(&QsciScintillaBase::SCN_MODIFYATTEMPTRO), self, [=]() {
		miqt_exec_callback_QsciScintillaBase_SCN_MODIFYATTEMPTRO(slot);
	});
}

void QsciScintillaBase_SCN_NEEDSHOWN(QsciScintillaBase* self, int param1, int param2) {
	self->SCN_NEEDSHOWN(static_cast<int>(param1), static_cast<int>(param2));
}

void QsciScintillaBase_connect_SCN_NEEDSHOWN(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int, int)>(&QsciScintillaBase::SCN_NEEDSHOWN), self, [=](int param1, int param2) {
		int sigval1 = param1;
		int sigval2 = param2;
		miqt_exec_callback_QsciScintillaBase_SCN_NEEDSHOWN(slot, sigval1, sigval2);
	});
}

void QsciScintillaBase_SCN_PAINTED(QsciScintillaBase* self) {
	self->SCN_PAINTED();
}

void QsciScintillaBase_connect_SCN_PAINTED(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)()>(&QsciScintillaBase::SCN_PAINTED), self, [=]() {
		miqt_exec_callback_QsciScintillaBase_SCN_PAINTED(slot);
	});
}

void QsciScintillaBase_SCN_SAVEPOINTLEFT(QsciScintillaBase* self) {
	self->SCN_SAVEPOINTLEFT();
}

void QsciScintillaBase_connect_SCN_SAVEPOINTLEFT(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)()>(&QsciScintillaBase::SCN_SAVEPOINTLEFT), self, [=]() {
		miqt_exec_callback_QsciScintillaBase_SCN_SAVEPOINTLEFT(slot);
	});
}

void QsciScintillaBase_SCN_SAVEPOINTREACHED(QsciScintillaBase* self) {
	self->SCN_SAVEPOINTREACHED();
}

void QsciScintillaBase_connect_SCN_SAVEPOINTREACHED(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)()>(&QsciScintillaBase::SCN_SAVEPOINTREACHED), self, [=]() {
		miqt_exec_callback_QsciScintillaBase_SCN_SAVEPOINTREACHED(slot);
	});
}

void QsciScintillaBase_SCN_STYLENEEDED(QsciScintillaBase* self, int position) {
	self->SCN_STYLENEEDED(static_cast<int>(position));
}

void QsciScintillaBase_connect_SCN_STYLENEEDED(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int)>(&QsciScintillaBase::SCN_STYLENEEDED), self, [=](int position) {
		int sigval1 = position;
		miqt_exec_callback_QsciScintillaBase_SCN_STYLENEEDED(slot, sigval1);
	});
}

void QsciScintillaBase_SCN_URIDROPPED(QsciScintillaBase* self, QUrl* url) {
	self->SCN_URIDROPPED(*url);
}

void QsciScintillaBase_connect_SCN_URIDROPPED(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(const QUrl&)>(&QsciScintillaBase::SCN_URIDROPPED), self, [=](const QUrl& url) {
		const QUrl& url_ret = url;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
		miqt_exec_callback_QsciScintillaBase_SCN_URIDROPPED(slot, sigval1);
	});
}

void QsciScintillaBase_SCN_UPDATEUI(QsciScintillaBase* self, int updated) {
	self->SCN_UPDATEUI(static_cast<int>(updated));
}

void QsciScintillaBase_connect_SCN_UPDATEUI(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(int)>(&QsciScintillaBase::SCN_UPDATEUI), self, [=](int updated) {
		int sigval1 = updated;
		miqt_exec_callback_QsciScintillaBase_SCN_UPDATEUI(slot, sigval1);
	});
}

void QsciScintillaBase_SCN_USERLISTSELECTION(QsciScintillaBase* self, const char* selection, int id, int ch, int method, int position) {
	self->SCN_USERLISTSELECTION(selection, static_cast<int>(id), static_cast<int>(ch), static_cast<int>(method), static_cast<int>(position));
}

void QsciScintillaBase_connect_SCN_USERLISTSELECTION(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(const char*, int, int, int, int)>(&QsciScintillaBase::SCN_USERLISTSELECTION), self, [=](const char* selection, int id, int ch, int method, int position) {
		const char* sigval1 = (const char*) selection;
		int sigval2 = id;
		int sigval3 = ch;
		int sigval4 = method;
		int sigval5 = position;
		miqt_exec_callback_QsciScintillaBase_SCN_USERLISTSELECTION(slot, sigval1, sigval2, sigval3, sigval4, sigval5);
	});
}

void QsciScintillaBase_SCN_USERLISTSELECTION2(QsciScintillaBase* self, const char* selection, int id, int ch, int method) {
	self->SCN_USERLISTSELECTION(selection, static_cast<int>(id), static_cast<int>(ch), static_cast<int>(method));
}

void QsciScintillaBase_connect_SCN_USERLISTSELECTION2(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(const char*, int, int, int)>(&QsciScintillaBase::SCN_USERLISTSELECTION), self, [=](const char* selection, int id, int ch, int method) {
		const char* sigval1 = (const char*) selection;
		int sigval2 = id;
		int sigval3 = ch;
		int sigval4 = method;
		miqt_exec_callback_QsciScintillaBase_SCN_USERLISTSELECTION2(slot, sigval1, sigval2, sigval3, sigval4);
	});
}

void QsciScintillaBase_SCN_USERLISTSELECTION3(QsciScintillaBase* self, const char* selection, int id) {
	self->SCN_USERLISTSELECTION(selection, static_cast<int>(id));
}

void QsciScintillaBase_connect_SCN_USERLISTSELECTION3(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)(const char*, int)>(&QsciScintillaBase::SCN_USERLISTSELECTION), self, [=](const char* selection, int id) {
		const char* sigval1 = (const char*) selection;
		int sigval2 = id;
		miqt_exec_callback_QsciScintillaBase_SCN_USERLISTSELECTION3(slot, sigval1, sigval2);
	});
}

void QsciScintillaBase_SCN_ZOOM(QsciScintillaBase* self) {
	self->SCN_ZOOM();
}

void QsciScintillaBase_connect_SCN_ZOOM(QsciScintillaBase* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase::connect(self, static_cast<void (QsciScintillaBase::*)()>(&QsciScintillaBase::SCN_ZOOM), self, [=]() {
		miqt_exec_callback_QsciScintillaBase_SCN_ZOOM(slot);
	});
}

struct miqt_string QsciScintillaBase_tr2(const char* s, const char* c) {
	QString _ret = QsciScintillaBase::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciScintillaBase_tr3(const char* s, const char* c, int n) {
	QString _ret = QsciScintillaBase::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

long QsciScintillaBase_SendScintilla22(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam) {
	return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<unsigned long>(wParam));
}

long QsciScintillaBase_SendScintilla32(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, long lParam) {
	return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<unsigned long>(wParam), static_cast<long>(lParam));
}

bool QsciScintillaBase_override_virtual_canInsertFromMimeData(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__canInsertFromMimeData = slot;
	return true;
}

bool QsciScintillaBase_virtualbase_canInsertFromMimeData(const void* self, QMimeData* source) {

	return ( (const MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::canInsertFromMimeData(source);

}

bool QsciScintillaBase_override_virtual_fromMimeData(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__fromMimeData = slot;
	return true;
}

struct miqt_string QsciScintillaBase_virtualbase_fromMimeData(const void* self, QMimeData* source, bool* rectangular) {

	QByteArray _qb = ( (const MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::fromMimeData(source, *rectangular);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;

}

bool QsciScintillaBase_override_virtual_toMimeData(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__toMimeData = slot;
	return true;
}

QMimeData* QsciScintillaBase_virtualbase_toMimeData(const void* self, struct miqt_string text, bool rectangular) {
	QByteArray text_QByteArray(text.data, text.len);

	return ( (const MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::toMimeData(text_QByteArray, rectangular);

}

bool QsciScintillaBase_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_changeEvent(void* self, QEvent* e) {

	( (MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::changeEvent(e);

}

bool QsciScintillaBase_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* e) {

	( (MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::contextMenuEvent(e);

}

bool QsciScintillaBase_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* e) {

	( (MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::dragEnterEvent(e);

}

bool QsciScintillaBase_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* e) {

	( (MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::dragLeaveEvent(e);

}

bool QsciScintillaBase_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* e) {

	( (MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::dragMoveEvent(e);

}

bool QsciScintillaBase_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_dropEvent(void* self, QDropEvent* e) {

	( (MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::dropEvent(e);

}

bool QsciScintillaBase_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_focusInEvent(void* self, QFocusEvent* e) {

	( (MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::focusInEvent(e);

}

bool QsciScintillaBase_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_focusOutEvent(void* self, QFocusEvent* e) {

	( (MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::focusOutEvent(e);

}

bool QsciScintillaBase_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QsciScintillaBase_virtualbase_focusNextPrevChild(void* self, bool next) {

	return ( (MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::focusNextPrevChild(next);

}

bool QsciScintillaBase_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_keyPressEvent(void* self, QKeyEvent* e) {

	( (MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::keyPressEvent(e);

}

bool QsciScintillaBase_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event) {

	( (MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::inputMethodEvent(event);

}

bool QsciScintillaBase_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QsciScintillaBase_virtualbase_inputMethodQuery(const void* self, int query) {

	return new QVariant(( (const MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

}

bool QsciScintillaBase_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* e) {

	( (MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::mouseDoubleClickEvent(e);

}

bool QsciScintillaBase_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_mouseMoveEvent(void* self, QMouseEvent* e) {

	( (MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::mouseMoveEvent(e);

}

bool QsciScintillaBase_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_mousePressEvent(void* self, QMouseEvent* e) {

	( (MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::mousePressEvent(e);

}

bool QsciScintillaBase_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* e) {

	( (MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::mouseReleaseEvent(e);

}

bool QsciScintillaBase_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_paintEvent(void* self, QPaintEvent* e) {

	( (MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::paintEvent(e);

}

bool QsciScintillaBase_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_resizeEvent(void* self, QResizeEvent* e) {

	( (MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::resizeEvent(e);

}

bool QsciScintillaBase_override_virtual_scrollContentsBy(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__scrollContentsBy = slot;
	return true;
}

void QsciScintillaBase_virtualbase_scrollContentsBy(void* self, int dx, int dy) {

	( (MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));

}

bool QsciScintillaBase_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QsciScintillaBase_virtualbase_minimumSizeHint(const void* self) {

	return new QSize(( (const MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::minimumSizeHint());

}

bool QsciScintillaBase_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QsciScintillaBase_virtualbase_sizeHint(const void* self) {

	return new QSize(( (const MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::sizeHint());

}

bool QsciScintillaBase_override_virtual_setupViewport(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setupViewport = slot;
	return true;
}

void QsciScintillaBase_virtualbase_setupViewport(void* self, QWidget* viewport) {

	( (MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::setupViewport(viewport);

}

bool QsciScintillaBase_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QsciScintillaBase_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2) {

	return ( (MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::eventFilter(param1, param2);

}

bool QsciScintillaBase_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QsciScintillaBase_virtualbase_event(void* self, QEvent* param1) {

	return ( (MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::event(param1);

}

bool QsciScintillaBase_override_virtual_viewportEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__viewportEvent = slot;
	return true;
}

bool QsciScintillaBase_virtualbase_viewportEvent(void* self, QEvent* param1) {

	return ( (MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::viewportEvent(param1);

}

bool QsciScintillaBase_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_wheelEvent(void* self, QWheelEvent* param1) {

	( (MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::wheelEvent(param1);

}

bool QsciScintillaBase_override_virtual_viewportSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__viewportSizeHint = slot;
	return true;
}

QSize* QsciScintillaBase_virtualbase_viewportSizeHint(const void* self) {

	return new QSize(( (const MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::viewportSizeHint());

}

bool QsciScintillaBase_override_virtual_initStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initStyleOption = slot;
	return true;
}

void QsciScintillaBase_virtualbase_initStyleOption(const void* self, QStyleOptionFrame* option) {

	( (const MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::initStyleOption(option);

}

bool QsciScintillaBase_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QsciScintillaBase_virtualbase_devType(const void* self) {

	return ( (const MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::devType();

}

bool QsciScintillaBase_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QsciScintillaBase_virtualbase_setVisible(void* self, bool visible) {

	( (MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::setVisible(visible);

}

bool QsciScintillaBase_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QsciScintillaBase_virtualbase_heightForWidth(const void* self, int param1) {

	return ( (const MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::heightForWidth(static_cast<int>(param1));

}

bool QsciScintillaBase_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QsciScintillaBase_virtualbase_hasHeightForWidth(const void* self) {

	return ( (const MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::hasHeightForWidth();

}

bool QsciScintillaBase_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QsciScintillaBase_virtualbase_paintEngine(const void* self) {

	return ( (const MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::paintEngine();

}

bool QsciScintillaBase_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {

	( (MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::keyReleaseEvent(event);

}

bool QsciScintillaBase_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_enterEvent(void* self, QEnterEvent* event) {

	( (MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::enterEvent(event);

}

bool QsciScintillaBase_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_leaveEvent(void* self, QEvent* event) {

	( (MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::leaveEvent(event);

}

bool QsciScintillaBase_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_moveEvent(void* self, QMoveEvent* event) {

	( (MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::moveEvent(event);

}

bool QsciScintillaBase_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_closeEvent(void* self, QCloseEvent* event) {

	( (MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::closeEvent(event);

}

bool QsciScintillaBase_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_tabletEvent(void* self, QTabletEvent* event) {

	( (MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::tabletEvent(event);

}

bool QsciScintillaBase_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_actionEvent(void* self, QActionEvent* event) {

	( (MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::actionEvent(event);

}

bool QsciScintillaBase_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_showEvent(void* self, QShowEvent* event) {

	( (MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::showEvent(event);

}

bool QsciScintillaBase_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_hideEvent(void* self, QHideEvent* event) {

	( (MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::hideEvent(event);

}

bool QsciScintillaBase_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QsciScintillaBase_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);

	return ( (MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

}

bool QsciScintillaBase_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QsciScintillaBase_virtualbase_metric(const void* self, int param1) {

	return ( (const MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::metric(static_cast<MiqtVirtualQsciScintillaBase::PaintDeviceMetric>(param1));

}

bool QsciScintillaBase_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QsciScintillaBase_virtualbase_initPainter(const void* self, QPainter* painter) {

	( (const MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::initPainter(painter);

}

bool QsciScintillaBase_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QsciScintillaBase_virtualbase_redirected(const void* self, QPoint* offset) {

	return ( (const MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::redirected(offset);

}

bool QsciScintillaBase_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QsciScintillaBase_virtualbase_sharedPainter(const void* self) {

	return ( (const MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::sharedPainter();

}

bool QsciScintillaBase_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::timerEvent(event);

}

bool QsciScintillaBase_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::childEvent(event);

}

bool QsciScintillaBase_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_customEvent(void* self, QEvent* event) {

	( (MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::customEvent(event);

}

bool QsciScintillaBase_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QsciScintillaBase_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::connectNotify(*signal);

}

bool QsciScintillaBase_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QsciScintillaBase_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQsciScintillaBase*)(self) )->MiqtVirtualQsciScintillaBase::disconnectNotify(*signal);

}

void QsciScintillaBase_protectedbase_setScrollBars(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setScrollBars();

}

struct miqt_string QsciScintillaBase_protectedbase_textAsBytes(bool* _dynamic_cast_ok, const void* self, struct miqt_string text) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (struct miqt_string){};
	}
	
	*_dynamic_cast_ok = true;
			QString text_QString = QString::fromUtf8(text.data, text.len);

	QByteArray _qb = self_cast->textAsBytes(text_QString);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;

}

struct miqt_string QsciScintillaBase_protectedbase_bytesAsText(bool* _dynamic_cast_ok, const void* self, const char* bytes) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (struct miqt_string){};
	}
	
	*_dynamic_cast_ok = true;
	
	QString _ret = self_cast->bytesAsText(bytes);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;

}

bool QsciScintillaBase_protectedbase_contextMenuNeeded(bool* _dynamic_cast_ok, const void* self, int x, int y) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->contextMenuNeeded(static_cast<int>(x), static_cast<int>(y));

}

void QsciScintillaBase_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));

}

QMargins* QsciScintillaBase_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QMargins(self_cast->viewportMargins());

}

void QsciScintillaBase_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->drawFrame(param1);

}

void QsciScintillaBase_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QsciScintillaBase_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QsciScintillaBase_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QsciScintillaBase_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QsciScintillaBase_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QsciScintillaBase_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QsciScintillaBase_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QsciScintillaBase_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QsciScintillaBase_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QsciScintillaBase_delete(QsciScintillaBase* self) {
	delete self;
}

