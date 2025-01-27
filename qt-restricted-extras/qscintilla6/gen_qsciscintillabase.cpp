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
bool miqt_exec_callback_QsciScintillaBase_CanInsertFromMimeData(const QsciScintillaBase*, intptr_t, QMimeData*);
struct miqt_string miqt_exec_callback_QsciScintillaBase_FromMimeData(const QsciScintillaBase*, intptr_t, QMimeData*, bool*);
QMimeData* miqt_exec_callback_QsciScintillaBase_ToMimeData(const QsciScintillaBase*, intptr_t, struct miqt_string, bool);
void miqt_exec_callback_QsciScintillaBase_ChangeEvent(QsciScintillaBase*, intptr_t, QEvent*);
void miqt_exec_callback_QsciScintillaBase_ContextMenuEvent(QsciScintillaBase*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QsciScintillaBase_DragEnterEvent(QsciScintillaBase*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QsciScintillaBase_DragLeaveEvent(QsciScintillaBase*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QsciScintillaBase_DragMoveEvent(QsciScintillaBase*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QsciScintillaBase_DropEvent(QsciScintillaBase*, intptr_t, QDropEvent*);
void miqt_exec_callback_QsciScintillaBase_FocusInEvent(QsciScintillaBase*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QsciScintillaBase_FocusOutEvent(QsciScintillaBase*, intptr_t, QFocusEvent*);
bool miqt_exec_callback_QsciScintillaBase_FocusNextPrevChild(QsciScintillaBase*, intptr_t, bool);
void miqt_exec_callback_QsciScintillaBase_KeyPressEvent(QsciScintillaBase*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QsciScintillaBase_InputMethodEvent(QsciScintillaBase*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QsciScintillaBase_InputMethodQuery(const QsciScintillaBase*, intptr_t, int);
void miqt_exec_callback_QsciScintillaBase_MouseDoubleClickEvent(QsciScintillaBase*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QsciScintillaBase_MouseMoveEvent(QsciScintillaBase*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QsciScintillaBase_MousePressEvent(QsciScintillaBase*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QsciScintillaBase_MouseReleaseEvent(QsciScintillaBase*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QsciScintillaBase_PaintEvent(QsciScintillaBase*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QsciScintillaBase_ResizeEvent(QsciScintillaBase*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QsciScintillaBase_ScrollContentsBy(QsciScintillaBase*, intptr_t, int, int);
QSize* miqt_exec_callback_QsciScintillaBase_MinimumSizeHint(const QsciScintillaBase*, intptr_t);
QSize* miqt_exec_callback_QsciScintillaBase_SizeHint(const QsciScintillaBase*, intptr_t);
void miqt_exec_callback_QsciScintillaBase_SetupViewport(QsciScintillaBase*, intptr_t, QWidget*);
bool miqt_exec_callback_QsciScintillaBase_EventFilter(QsciScintillaBase*, intptr_t, QObject*, QEvent*);
bool miqt_exec_callback_QsciScintillaBase_Event(QsciScintillaBase*, intptr_t, QEvent*);
bool miqt_exec_callback_QsciScintillaBase_ViewportEvent(QsciScintillaBase*, intptr_t, QEvent*);
void miqt_exec_callback_QsciScintillaBase_WheelEvent(QsciScintillaBase*, intptr_t, QWheelEvent*);
QSize* miqt_exec_callback_QsciScintillaBase_ViewportSizeHint(const QsciScintillaBase*, intptr_t);
void miqt_exec_callback_QsciScintillaBase_InitStyleOption(const QsciScintillaBase*, intptr_t, QStyleOptionFrame*);
int miqt_exec_callback_QsciScintillaBase_DevType(const QsciScintillaBase*, intptr_t);
void miqt_exec_callback_QsciScintillaBase_SetVisible(QsciScintillaBase*, intptr_t, bool);
int miqt_exec_callback_QsciScintillaBase_HeightForWidth(const QsciScintillaBase*, intptr_t, int);
bool miqt_exec_callback_QsciScintillaBase_HasHeightForWidth(const QsciScintillaBase*, intptr_t);
QPaintEngine* miqt_exec_callback_QsciScintillaBase_PaintEngine(const QsciScintillaBase*, intptr_t);
void miqt_exec_callback_QsciScintillaBase_KeyReleaseEvent(QsciScintillaBase*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QsciScintillaBase_EnterEvent(QsciScintillaBase*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QsciScintillaBase_LeaveEvent(QsciScintillaBase*, intptr_t, QEvent*);
void miqt_exec_callback_QsciScintillaBase_MoveEvent(QsciScintillaBase*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QsciScintillaBase_CloseEvent(QsciScintillaBase*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QsciScintillaBase_TabletEvent(QsciScintillaBase*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QsciScintillaBase_ActionEvent(QsciScintillaBase*, intptr_t, QActionEvent*);
void miqt_exec_callback_QsciScintillaBase_ShowEvent(QsciScintillaBase*, intptr_t, QShowEvent*);
void miqt_exec_callback_QsciScintillaBase_HideEvent(QsciScintillaBase*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QsciScintillaBase_NativeEvent(QsciScintillaBase*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QsciScintillaBase_Metric(const QsciScintillaBase*, intptr_t, int);
void miqt_exec_callback_QsciScintillaBase_InitPainter(const QsciScintillaBase*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QsciScintillaBase_Redirected(const QsciScintillaBase*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QsciScintillaBase_SharedPainter(const QsciScintillaBase*, intptr_t);
void miqt_exec_callback_QsciScintillaBase_TimerEvent(QsciScintillaBase*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QsciScintillaBase_ChildEvent(QsciScintillaBase*, intptr_t, QChildEvent*);
void miqt_exec_callback_QsciScintillaBase_CustomEvent(QsciScintillaBase*, intptr_t, QEvent*);
void miqt_exec_callback_QsciScintillaBase_ConnectNotify(QsciScintillaBase*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QsciScintillaBase_DisconnectNotify(QsciScintillaBase*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciScintillaBase final : public QsciScintillaBase {
public:

	MiqtVirtualQsciScintillaBase(QWidget* parent): QsciScintillaBase(parent) {};
	MiqtVirtualQsciScintillaBase(): QsciScintillaBase() {};

	virtual ~MiqtVirtualQsciScintillaBase() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CanInsertFromMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canInsertFromMimeData(const QMimeData* source) const override {
		if (handle__CanInsertFromMimeData == 0) {
			return QsciScintillaBase::canInsertFromMimeData(source);
		}
		
		QMimeData* sigval1 = (QMimeData*) source;

		bool callback_return_value = miqt_exec_callback_QsciScintillaBase_CanInsertFromMimeData(this, handle__CanInsertFromMimeData, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CanInsertFromMimeData(QMimeData* source) const {

		return QsciScintillaBase::canInsertFromMimeData(source);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FromMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual QByteArray fromMimeData(const QMimeData* source, bool& rectangular) const override {
		if (handle__FromMimeData == 0) {
			return QsciScintillaBase::fromMimeData(source, rectangular);
		}
		
		QMimeData* sigval1 = (QMimeData*) source;
		bool* sigval2 = &rectangular;

		struct miqt_string callback_return_value = miqt_exec_callback_QsciScintillaBase_FromMimeData(this, handle__FromMimeData, sigval1, sigval2);
		QByteArray callback_return_value_QByteArray(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QByteArray;
	}

	// Wrapper to allow calling protected method
	struct miqt_string virtualbase_FromMimeData(QMimeData* source, bool* rectangular) const {

		QByteArray _qb = QsciScintillaBase::fromMimeData(source, *rectangular);
		struct miqt_string _ms;
		_ms.len = _qb.length();
		_ms.data = static_cast<char*>(malloc(_ms.len));
		memcpy(_ms.data, _qb.data(), _ms.len);
		return _ms;

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ToMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMimeData* toMimeData(const QByteArray& text, bool rectangular) const override {
		if (handle__ToMimeData == 0) {
			return QsciScintillaBase::toMimeData(text, rectangular);
		}
		
		const QByteArray text_qb = text;
		struct miqt_string text_ms;
		text_ms.len = text_qb.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_qb.data(), text_ms.len);
		struct miqt_string sigval1 = text_ms;
		bool sigval2 = rectangular;

		QMimeData* callback_return_value = miqt_exec_callback_QsciScintillaBase_ToMimeData(this, handle__ToMimeData, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QMimeData* virtualbase_ToMimeData(struct miqt_string text, bool rectangular) const {
		QByteArray text_QByteArray(text.data, text.len);

		return QsciScintillaBase::toMimeData(text_QByteArray, rectangular);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (handle__ChangeEvent == 0) {
			QsciScintillaBase::changeEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QsciScintillaBase_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* e) {

		QsciScintillaBase::changeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* e) override {
		if (handle__ContextMenuEvent == 0) {
			QsciScintillaBase::contextMenuEvent(e);
			return;
		}
		
		QContextMenuEvent* sigval1 = e;

		miqt_exec_callback_QsciScintillaBase_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* e) {

		QsciScintillaBase::contextMenuEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* e) override {
		if (handle__DragEnterEvent == 0) {
			QsciScintillaBase::dragEnterEvent(e);
			return;
		}
		
		QDragEnterEvent* sigval1 = e;

		miqt_exec_callback_QsciScintillaBase_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* e) {

		QsciScintillaBase::dragEnterEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
		if (handle__DragLeaveEvent == 0) {
			QsciScintillaBase::dragLeaveEvent(e);
			return;
		}
		
		QDragLeaveEvent* sigval1 = e;

		miqt_exec_callback_QsciScintillaBase_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* e) {

		QsciScintillaBase::dragLeaveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* e) override {
		if (handle__DragMoveEvent == 0) {
			QsciScintillaBase::dragMoveEvent(e);
			return;
		}
		
		QDragMoveEvent* sigval1 = e;

		miqt_exec_callback_QsciScintillaBase_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* e) {

		QsciScintillaBase::dragMoveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* e) override {
		if (handle__DropEvent == 0) {
			QsciScintillaBase::dropEvent(e);
			return;
		}
		
		QDropEvent* sigval1 = e;

		miqt_exec_callback_QsciScintillaBase_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* e) {

		QsciScintillaBase::dropEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* e) override {
		if (handle__FocusInEvent == 0) {
			QsciScintillaBase::focusInEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QsciScintillaBase_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* e) {

		QsciScintillaBase::focusInEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* e) override {
		if (handle__FocusOutEvent == 0) {
			QsciScintillaBase::focusOutEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QsciScintillaBase_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* e) {

		QsciScintillaBase::focusOutEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QsciScintillaBase::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QsciScintillaBase_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QsciScintillaBase::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* e) override {
		if (handle__KeyPressEvent == 0) {
			QsciScintillaBase::keyPressEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QsciScintillaBase_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* e) {

		QsciScintillaBase::keyPressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__InputMethodEvent == 0) {
			QsciScintillaBase::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QsciScintillaBase_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* event) {

		QsciScintillaBase::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__InputMethodQuery == 0) {
			return QsciScintillaBase::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QsciScintillaBase_InputMethodQuery(this, handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int query) const {

		return new QVariant(QsciScintillaBase::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QsciScintillaBase::mouseDoubleClickEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QsciScintillaBase_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* e) {

		QsciScintillaBase::mouseDoubleClickEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* e) override {
		if (handle__MouseMoveEvent == 0) {
			QsciScintillaBase::mouseMoveEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QsciScintillaBase_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* e) {

		QsciScintillaBase::mouseMoveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* e) override {
		if (handle__MousePressEvent == 0) {
			QsciScintillaBase::mousePressEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QsciScintillaBase_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* e) {

		QsciScintillaBase::mousePressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (handle__MouseReleaseEvent == 0) {
			QsciScintillaBase::mouseReleaseEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QsciScintillaBase_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* e) {

		QsciScintillaBase::mouseReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* e) override {
		if (handle__PaintEvent == 0) {
			QsciScintillaBase::paintEvent(e);
			return;
		}
		
		QPaintEvent* sigval1 = e;

		miqt_exec_callback_QsciScintillaBase_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* e) {

		QsciScintillaBase::paintEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* e) override {
		if (handle__ResizeEvent == 0) {
			QsciScintillaBase::resizeEvent(e);
			return;
		}
		
		QResizeEvent* sigval1 = e;

		miqt_exec_callback_QsciScintillaBase_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* e) {

		QsciScintillaBase::resizeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ScrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (handle__ScrollContentsBy == 0) {
			QsciScintillaBase::scrollContentsBy(dx, dy);
			return;
		}
		
		int sigval1 = dx;
		int sigval2 = dy;

		miqt_exec_callback_QsciScintillaBase_ScrollContentsBy(this, handle__ScrollContentsBy, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ScrollContentsBy(int dx, int dy) {

		QsciScintillaBase::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QsciScintillaBase::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QsciScintillaBase_MinimumSizeHint(this, handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QsciScintillaBase::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QsciScintillaBase::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QsciScintillaBase_SizeHint(this, handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QsciScintillaBase::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetupViewport = 0;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (handle__SetupViewport == 0) {
			QsciScintillaBase::setupViewport(viewport);
			return;
		}
		
		QWidget* sigval1 = viewport;

		miqt_exec_callback_QsciScintillaBase_SetupViewport(this, handle__SetupViewport, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetupViewport(QWidget* viewport) {

		QsciScintillaBase::setupViewport(viewport);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__EventFilter == 0) {
			return QsciScintillaBase::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QsciScintillaBase_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* param1, QEvent* param2) {

		return QsciScintillaBase::eventFilter(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__Event == 0) {
			return QsciScintillaBase::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QsciScintillaBase_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* param1) {

		return QsciScintillaBase::event(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewportEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* param1) override {
		if (handle__ViewportEvent == 0) {
			return QsciScintillaBase::viewportEvent(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QsciScintillaBase_ViewportEvent(this, handle__ViewportEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_ViewportEvent(QEvent* param1) {

		return QsciScintillaBase::viewportEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (handle__WheelEvent == 0) {
			QsciScintillaBase::wheelEvent(param1);
			return;
		}
		
		QWheelEvent* sigval1 = param1;

		miqt_exec_callback_QsciScintillaBase_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* param1) {

		QsciScintillaBase::wheelEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewportSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (handle__ViewportSizeHint == 0) {
			return QsciScintillaBase::viewportSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QsciScintillaBase_ViewportSizeHint(this, handle__ViewportSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_ViewportSizeHint() const {

		return new QSize(QsciScintillaBase::viewportSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionFrame* option) const override {
		if (handle__InitStyleOption == 0) {
			QsciScintillaBase::initStyleOption(option);
			return;
		}
		
		QStyleOptionFrame* sigval1 = option;

		miqt_exec_callback_QsciScintillaBase_InitStyleOption(this, handle__InitStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitStyleOption(QStyleOptionFrame* option) const {

		QsciScintillaBase::initStyleOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QsciScintillaBase::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QsciScintillaBase_DevType(this, handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QsciScintillaBase::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QsciScintillaBase::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QsciScintillaBase_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QsciScintillaBase::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QsciScintillaBase::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QsciScintillaBase_HeightForWidth(this, handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QsciScintillaBase::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QsciScintillaBase::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QsciScintillaBase_HasHeightForWidth(this, handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QsciScintillaBase::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QsciScintillaBase::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QsciScintillaBase_PaintEngine(this, handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QsciScintillaBase::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QsciScintillaBase::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QsciScintillaBase_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QsciScintillaBase::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__EnterEvent == 0) {
			QsciScintillaBase::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QsciScintillaBase_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEnterEvent* event) {

		QsciScintillaBase::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QsciScintillaBase::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QsciScintillaBase_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QsciScintillaBase::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QsciScintillaBase::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QsciScintillaBase_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QsciScintillaBase::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QsciScintillaBase::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QsciScintillaBase_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QsciScintillaBase::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QsciScintillaBase::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QsciScintillaBase_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QsciScintillaBase::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QsciScintillaBase::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QsciScintillaBase_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QsciScintillaBase::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QsciScintillaBase::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QsciScintillaBase_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QsciScintillaBase::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QsciScintillaBase::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QsciScintillaBase_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QsciScintillaBase::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__NativeEvent == 0) {
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

		bool callback_return_value = miqt_exec_callback_QsciScintillaBase_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QsciScintillaBase::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QsciScintillaBase::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QsciScintillaBase_Metric(this, handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QsciScintillaBase::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QsciScintillaBase::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QsciScintillaBase_InitPainter(this, handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QsciScintillaBase::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QsciScintillaBase::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QsciScintillaBase_Redirected(this, handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QsciScintillaBase::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QsciScintillaBase::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QsciScintillaBase_SharedPainter(this, handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QsciScintillaBase::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QsciScintillaBase::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QsciScintillaBase_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QsciScintillaBase::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QsciScintillaBase::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QsciScintillaBase_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QsciScintillaBase::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QsciScintillaBase::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QsciScintillaBase_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QsciScintillaBase::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QsciScintillaBase::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciScintillaBase_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QsciScintillaBase::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QsciScintillaBase::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciScintillaBase_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QsciScintillaBase::disconnectNotify(*signal);

	}

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

QMetaObject* QsciScintillaBase_MetaObject(const QsciScintillaBase* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciScintillaBase_Metacast(QsciScintillaBase* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciScintillaBase_Tr(const char* s) {
	QString _ret = QsciScintillaBase::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QsciScintillaBase* QsciScintillaBase_Pool() {
	return QsciScintillaBase::pool();
}

void QsciScintillaBase_ReplaceHorizontalScrollBar(QsciScintillaBase* self, QScrollBar* scrollBar) {
	self->replaceHorizontalScrollBar(scrollBar);
}

void QsciScintillaBase_ReplaceVerticalScrollBar(QsciScintillaBase* self, QScrollBar* scrollBar) {
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

int QsciScintillaBase_CommandKey(int qt_key, int* modifiers) {
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

struct miqt_string QsciScintillaBase_Tr2(const char* s, const char* c) {
	QString _ret = QsciScintillaBase::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciScintillaBase_Tr3(const char* s, const char* c, int n) {
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

bool QsciScintillaBase_override_virtual_CanInsertFromMimeData(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CanInsertFromMimeData = slot;
	return true;
}

bool QsciScintillaBase_virtualbase_CanInsertFromMimeData(const void* self, QMimeData* source) {
	return ( (const MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_CanInsertFromMimeData(source);
}

bool QsciScintillaBase_override_virtual_FromMimeData(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FromMimeData = slot;
	return true;
}

struct miqt_string QsciScintillaBase_virtualbase_FromMimeData(const void* self, QMimeData* source, bool* rectangular) {
	return ( (const MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_FromMimeData(source, rectangular);
}

bool QsciScintillaBase_override_virtual_ToMimeData(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ToMimeData = slot;
	return true;
}

QMimeData* QsciScintillaBase_virtualbase_ToMimeData(const void* self, struct miqt_string text, bool rectangular) {
	return ( (const MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_ToMimeData(text, rectangular);
}

bool QsciScintillaBase_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_ChangeEvent(void* self, QEvent* e) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_ChangeEvent(e);
}

bool QsciScintillaBase_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* e) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_ContextMenuEvent(e);
}

bool QsciScintillaBase_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* e) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_DragEnterEvent(e);
}

bool QsciScintillaBase_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* e) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_DragLeaveEvent(e);
}

bool QsciScintillaBase_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* e) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_DragMoveEvent(e);
}

bool QsciScintillaBase_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_DropEvent(void* self, QDropEvent* e) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_DropEvent(e);
}

bool QsciScintillaBase_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_FocusInEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_FocusInEvent(e);
}

bool QsciScintillaBase_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_FocusOutEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_FocusOutEvent(e);
}

bool QsciScintillaBase_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QsciScintillaBase_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QsciScintillaBase_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_KeyPressEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_KeyPressEvent(e);
}

bool QsciScintillaBase_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_InputMethodEvent(event);
}

bool QsciScintillaBase_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QsciScintillaBase_virtualbase_InputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_InputMethodQuery(query);
}

bool QsciScintillaBase_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_MouseDoubleClickEvent(e);
}

bool QsciScintillaBase_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_MouseMoveEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_MouseMoveEvent(e);
}

bool QsciScintillaBase_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_MousePressEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_MousePressEvent(e);
}

bool QsciScintillaBase_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_MouseReleaseEvent(e);
}

bool QsciScintillaBase_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_PaintEvent(void* self, QPaintEvent* e) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_PaintEvent(e);
}

bool QsciScintillaBase_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_ResizeEvent(void* self, QResizeEvent* e) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_ResizeEvent(e);
}

bool QsciScintillaBase_override_virtual_ScrollContentsBy(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ScrollContentsBy = slot;
	return true;
}

void QsciScintillaBase_virtualbase_ScrollContentsBy(void* self, int dx, int dy) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_ScrollContentsBy(dx, dy);
}

bool QsciScintillaBase_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QsciScintillaBase_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_MinimumSizeHint();
}

bool QsciScintillaBase_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QsciScintillaBase_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_SizeHint();
}

bool QsciScintillaBase_override_virtual_SetupViewport(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetupViewport = slot;
	return true;
}

void QsciScintillaBase_virtualbase_SetupViewport(void* self, QWidget* viewport) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_SetupViewport(viewport);
}

bool QsciScintillaBase_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QsciScintillaBase_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_EventFilter(param1, param2);
}

bool QsciScintillaBase_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QsciScintillaBase_virtualbase_Event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_Event(param1);
}

bool QsciScintillaBase_override_virtual_ViewportEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ViewportEvent = slot;
	return true;
}

bool QsciScintillaBase_virtualbase_ViewportEvent(void* self, QEvent* param1) {
	return ( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_ViewportEvent(param1);
}

bool QsciScintillaBase_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_WheelEvent(void* self, QWheelEvent* param1) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_WheelEvent(param1);
}

bool QsciScintillaBase_override_virtual_ViewportSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ViewportSizeHint = slot;
	return true;
}

QSize* QsciScintillaBase_virtualbase_ViewportSizeHint(const void* self) {
	return ( (const MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_ViewportSizeHint();
}

bool QsciScintillaBase_override_virtual_InitStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitStyleOption = slot;
	return true;
}

void QsciScintillaBase_virtualbase_InitStyleOption(const void* self, QStyleOptionFrame* option) {
	( (const MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_InitStyleOption(option);
}

bool QsciScintillaBase_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QsciScintillaBase_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_DevType();
}

bool QsciScintillaBase_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QsciScintillaBase_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_SetVisible(visible);
}

bool QsciScintillaBase_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QsciScintillaBase_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QsciScintillaBase_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QsciScintillaBase_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_HasHeightForWidth();
}

bool QsciScintillaBase_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QsciScintillaBase_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_PaintEngine();
}

bool QsciScintillaBase_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QsciScintillaBase_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_EnterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_EnterEvent(event);
}

bool QsciScintillaBase_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_LeaveEvent(event);
}

bool QsciScintillaBase_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_MoveEvent(event);
}

bool QsciScintillaBase_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_CloseEvent(event);
}

bool QsciScintillaBase_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_TabletEvent(event);
}

bool QsciScintillaBase_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_ActionEvent(event);
}

bool QsciScintillaBase_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_ShowEvent(event);
}

bool QsciScintillaBase_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_HideEvent(event);
}

bool QsciScintillaBase_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QsciScintillaBase_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QsciScintillaBase_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QsciScintillaBase_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_Metric(param1);
}

bool QsciScintillaBase_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QsciScintillaBase_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_InitPainter(painter);
}

bool QsciScintillaBase_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QsciScintillaBase_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_Redirected(offset);
}

bool QsciScintillaBase_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QsciScintillaBase_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_SharedPainter();
}

bool QsciScintillaBase_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_TimerEvent(event);
}

bool QsciScintillaBase_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_ChildEvent(event);
}

bool QsciScintillaBase_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QsciScintillaBase_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_CustomEvent(event);
}

bool QsciScintillaBase_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QsciScintillaBase_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QsciScintillaBase_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciScintillaBase* self_cast = dynamic_cast<MiqtVirtualQsciScintillaBase*>( (QsciScintillaBase*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QsciScintillaBase_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQsciScintillaBase*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QsciScintillaBase_Delete(QsciScintillaBase* self) {
	delete self;
}

