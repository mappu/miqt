#include "gen_qevent.h"
#include "qevent.h"

#include <QAction>
#include <QActionEvent>
#include <QApplicationStateChangeEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QExposeEvent>
#include <QFileOpenEvent>
#include <QFocusEvent>
#include <QHelpEvent>
#include <QHideEvent>
#include <QHoverEvent>
#include <QIconDragEvent>
#include <QInputEvent>
#include <QInputMethodEvent>
#include <QInputMethodQueryEvent>
#include <QKeyEvent>
#include <QKeySequence>
#include <QMimeData>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QNativeGestureEvent>
#include <QObject>
#include <QPaintEvent>
#include <QPoint>
#include <QPointF>
#include <QPointingDeviceUniqueId>
#include <QRect>
#include <QRectF>
#include <QRegion>
#include <QResizeEvent>
#include <QScreen>
#include <QScreenOrientationChangeEvent>
#include <QScrollEvent>
#include <QScrollPrepareEvent>
#include <QShortcutEvent>
#include <QShowEvent>
#include <QSize>
#include <QSizeF>
#include <QStatusTipEvent>
#include <QString>
#include <QTabletEvent>
#include <QToolBarChangeEvent>
#include <QTouchDevice>
#include <QTouchEvent>
#include <QUrl>
#include <QWhatsThisClickedEvent>
#include <QWheelEvent>
#include <QWindow>
#include <QWindowStateChangeEvent>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QInputEvent* QInputEvent_new(QInputEvent* param1) {
	return new QInputEvent(*param1);
}

unsigned long QInputEvent_Timestamp(QInputEvent* self) {
	return self->timestamp();
}

void QInputEvent_SetTimestamp(QInputEvent* self, unsigned long atimestamp) {
	self->setTimestamp(static_cast<ulong>(atimestamp));
}

void QInputEvent_Delete(QInputEvent* self) {
	delete self;
}

QEnterEvent* QEnterEvent_new(QPointF* localPos, QPointF* windowPos, QPointF* screenPos) {
	return new QEnterEvent(*localPos, *windowPos, *screenPos);
}

QEnterEvent* QEnterEvent_new2(QEnterEvent* param1) {
	return new QEnterEvent(*param1);
}

QPoint* QEnterEvent_Pos(QEnterEvent* self) {
	QPoint ret = self->pos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QPoint* QEnterEvent_GlobalPos(QEnterEvent* self) {
	QPoint ret = self->globalPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

int QEnterEvent_X(QEnterEvent* self) {
	return self->x();
}

int QEnterEvent_Y(QEnterEvent* self) {
	return self->y();
}

int QEnterEvent_GlobalX(QEnterEvent* self) {
	return self->globalX();
}

int QEnterEvent_GlobalY(QEnterEvent* self) {
	return self->globalY();
}

QPointF* QEnterEvent_LocalPos(QEnterEvent* self) {
	const QPointF& ret = self->localPos();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&ret);
}

QPointF* QEnterEvent_WindowPos(QEnterEvent* self) {
	const QPointF& ret = self->windowPos();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&ret);
}

QPointF* QEnterEvent_ScreenPos(QEnterEvent* self) {
	const QPointF& ret = self->screenPos();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&ret);
}

void QEnterEvent_Delete(QEnterEvent* self) {
	delete self;
}

QMouseEvent* QMouseEvent_new(QMouseEvent* param1) {
	return new QMouseEvent(*param1);
}

QPoint* QMouseEvent_Pos(QMouseEvent* self) {
	QPoint ret = self->pos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QPoint* QMouseEvent_GlobalPos(QMouseEvent* self) {
	QPoint ret = self->globalPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

int QMouseEvent_X(QMouseEvent* self) {
	return self->x();
}

int QMouseEvent_Y(QMouseEvent* self) {
	return self->y();
}

int QMouseEvent_GlobalX(QMouseEvent* self) {
	return self->globalX();
}

int QMouseEvent_GlobalY(QMouseEvent* self) {
	return self->globalY();
}

QPointF* QMouseEvent_LocalPos(QMouseEvent* self) {
	const QPointF& ret = self->localPos();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&ret);
}

QPointF* QMouseEvent_WindowPos(QMouseEvent* self) {
	const QPointF& ret = self->windowPos();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&ret);
}

QPointF* QMouseEvent_ScreenPos(QMouseEvent* self) {
	const QPointF& ret = self->screenPos();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&ret);
}

void QMouseEvent_SetLocalPos(QMouseEvent* self, QPointF* localPosition) {
	self->setLocalPos(*localPosition);
}

void QMouseEvent_Delete(QMouseEvent* self) {
	delete self;
}

QHoverEvent* QHoverEvent_new(QHoverEvent* param1) {
	return new QHoverEvent(*param1);
}

QPoint* QHoverEvent_Pos(QHoverEvent* self) {
	QPoint ret = self->pos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QPoint* QHoverEvent_OldPos(QHoverEvent* self) {
	QPoint ret = self->oldPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QPointF* QHoverEvent_PosF(QHoverEvent* self) {
	const QPointF& ret = self->posF();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&ret);
}

QPointF* QHoverEvent_OldPosF(QHoverEvent* self) {
	const QPointF& ret = self->oldPosF();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&ret);
}

void QHoverEvent_Delete(QHoverEvent* self) {
	delete self;
}

QWheelEvent* QWheelEvent_new(QWheelEvent* param1) {
	return new QWheelEvent(*param1);
}

QPoint* QWheelEvent_PixelDelta(QWheelEvent* self) {
	QPoint ret = self->pixelDelta();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QPoint* QWheelEvent_AngleDelta(QWheelEvent* self) {
	QPoint ret = self->angleDelta();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

int QWheelEvent_Delta(QWheelEvent* self) {
	return self->delta();
}

QPoint* QWheelEvent_Pos(QWheelEvent* self) {
	QPoint ret = self->pos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QPoint* QWheelEvent_GlobalPos(QWheelEvent* self) {
	QPoint ret = self->globalPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

int QWheelEvent_X(QWheelEvent* self) {
	return self->x();
}

int QWheelEvent_Y(QWheelEvent* self) {
	return self->y();
}

int QWheelEvent_GlobalX(QWheelEvent* self) {
	return self->globalX();
}

int QWheelEvent_GlobalY(QWheelEvent* self) {
	return self->globalY();
}

QPointF* QWheelEvent_PosF(QWheelEvent* self) {
	const QPointF& ret = self->posF();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&ret);
}

QPointF* QWheelEvent_GlobalPosF(QWheelEvent* self) {
	const QPointF& ret = self->globalPosF();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&ret);
}

QPointF* QWheelEvent_Position(QWheelEvent* self) {
	QPointF ret = self->position();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QPointF* QWheelEvent_GlobalPosition(QWheelEvent* self) {
	QPointF ret = self->globalPosition();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

bool QWheelEvent_Inverted(QWheelEvent* self) {
	return self->inverted();
}

void QWheelEvent_Delete(QWheelEvent* self) {
	delete self;
}

QTabletEvent* QTabletEvent_new(QTabletEvent* param1) {
	return new QTabletEvent(*param1);
}

QPoint* QTabletEvent_Pos(QTabletEvent* self) {
	QPoint ret = self->pos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QPoint* QTabletEvent_GlobalPos(QTabletEvent* self) {
	QPoint ret = self->globalPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QPointF* QTabletEvent_PosF(QTabletEvent* self) {
	const QPointF& ret = self->posF();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&ret);
}

QPointF* QTabletEvent_GlobalPosF(QTabletEvent* self) {
	const QPointF& ret = self->globalPosF();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&ret);
}

int QTabletEvent_X(QTabletEvent* self) {
	return self->x();
}

int QTabletEvent_Y(QTabletEvent* self) {
	return self->y();
}

int QTabletEvent_GlobalX(QTabletEvent* self) {
	return self->globalX();
}

int QTabletEvent_GlobalY(QTabletEvent* self) {
	return self->globalY();
}

double QTabletEvent_HiResGlobalX(QTabletEvent* self) {
	return self->hiResGlobalX();
}

double QTabletEvent_HiResGlobalY(QTabletEvent* self) {
	return self->hiResGlobalY();
}

int64_t QTabletEvent_UniqueId(QTabletEvent* self) {
	return self->uniqueId();
}

double QTabletEvent_Pressure(QTabletEvent* self) {
	return self->pressure();
}

int QTabletEvent_Z(QTabletEvent* self) {
	return self->z();
}

double QTabletEvent_TangentialPressure(QTabletEvent* self) {
	return self->tangentialPressure();
}

double QTabletEvent_Rotation(QTabletEvent* self) {
	return self->rotation();
}

int QTabletEvent_XTilt(QTabletEvent* self) {
	return self->xTilt();
}

int QTabletEvent_YTilt(QTabletEvent* self) {
	return self->yTilt();
}

void QTabletEvent_Delete(QTabletEvent* self) {
	delete self;
}

QNativeGestureEvent* QNativeGestureEvent_new(QNativeGestureEvent* param1) {
	return new QNativeGestureEvent(*param1);
}

double QNativeGestureEvent_Value(QNativeGestureEvent* self) {
	return self->value();
}

QPoint* QNativeGestureEvent_Pos(QNativeGestureEvent* self) {
	QPoint ret = self->pos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QPoint* QNativeGestureEvent_GlobalPos(QNativeGestureEvent* self) {
	QPoint ret = self->globalPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QPointF* QNativeGestureEvent_LocalPos(QNativeGestureEvent* self) {
	const QPointF& ret = self->localPos();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&ret);
}

QPointF* QNativeGestureEvent_WindowPos(QNativeGestureEvent* self) {
	const QPointF& ret = self->windowPos();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&ret);
}

QPointF* QNativeGestureEvent_ScreenPos(QNativeGestureEvent* self) {
	const QPointF& ret = self->screenPos();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&ret);
}

QTouchDevice* QNativeGestureEvent_Device(QNativeGestureEvent* self) {
	return (QTouchDevice*) self->device();
}

void QNativeGestureEvent_Delete(QNativeGestureEvent* self) {
	delete self;
}

QKeyEvent* QKeyEvent_new(QKeyEvent* param1) {
	return new QKeyEvent(*param1);
}

int QKeyEvent_Key(QKeyEvent* self) {
	return self->key();
}

void QKeyEvent_Text(QKeyEvent* self, char** _out, int* _out_Strlen) {
	QString ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QKeyEvent_IsAutoRepeat(QKeyEvent* self) {
	return self->isAutoRepeat();
}

int QKeyEvent_Count(QKeyEvent* self) {
	return self->count();
}

uint32_t QKeyEvent_NativeScanCode(QKeyEvent* self) {
	return self->nativeScanCode();
}

uint32_t QKeyEvent_NativeVirtualKey(QKeyEvent* self) {
	return self->nativeVirtualKey();
}

uint32_t QKeyEvent_NativeModifiers(QKeyEvent* self) {
	return self->nativeModifiers();
}

void QKeyEvent_Delete(QKeyEvent* self) {
	delete self;
}

QFocusEvent* QFocusEvent_new(QFocusEvent* param1) {
	return new QFocusEvent(*param1);
}

bool QFocusEvent_GotFocus(QFocusEvent* self) {
	return self->gotFocus();
}

bool QFocusEvent_LostFocus(QFocusEvent* self) {
	return self->lostFocus();
}

void QFocusEvent_Delete(QFocusEvent* self) {
	delete self;
}

QPaintEvent* QPaintEvent_new(QRegion* paintRegion) {
	return new QPaintEvent(*paintRegion);
}

QPaintEvent* QPaintEvent_new2(QRect* paintRect) {
	return new QPaintEvent(*paintRect);
}

QPaintEvent* QPaintEvent_new3(QPaintEvent* param1) {
	return new QPaintEvent(*param1);
}

QRect* QPaintEvent_Rect(QPaintEvent* self) {
	const QRect& ret = self->rect();
	// Cast returned reference into pointer
	return const_cast<QRect*>(&ret);
}

QRegion* QPaintEvent_Region(QPaintEvent* self) {
	const QRegion& ret = self->region();
	// Cast returned reference into pointer
	return const_cast<QRegion*>(&ret);
}

void QPaintEvent_Delete(QPaintEvent* self) {
	delete self;
}

QMoveEvent* QMoveEvent_new(QPoint* pos, QPoint* oldPos) {
	return new QMoveEvent(*pos, *oldPos);
}

QMoveEvent* QMoveEvent_new2(QMoveEvent* param1) {
	return new QMoveEvent(*param1);
}

QPoint* QMoveEvent_Pos(QMoveEvent* self) {
	const QPoint& ret = self->pos();
	// Cast returned reference into pointer
	return const_cast<QPoint*>(&ret);
}

QPoint* QMoveEvent_OldPos(QMoveEvent* self) {
	const QPoint& ret = self->oldPos();
	// Cast returned reference into pointer
	return const_cast<QPoint*>(&ret);
}

void QMoveEvent_Delete(QMoveEvent* self) {
	delete self;
}

QExposeEvent* QExposeEvent_new(QRegion* rgn) {
	return new QExposeEvent(*rgn);
}

QExposeEvent* QExposeEvent_new2(QExposeEvent* param1) {
	return new QExposeEvent(*param1);
}

QRegion* QExposeEvent_Region(QExposeEvent* self) {
	const QRegion& ret = self->region();
	// Cast returned reference into pointer
	return const_cast<QRegion*>(&ret);
}

void QExposeEvent_Delete(QExposeEvent* self) {
	delete self;
}

QPlatformSurfaceEvent* QPlatformSurfaceEvent_new(QPlatformSurfaceEvent* param1) {
	return new QPlatformSurfaceEvent(*param1);
}

void QPlatformSurfaceEvent_Delete(QPlatformSurfaceEvent* self) {
	delete self;
}

QResizeEvent* QResizeEvent_new(QSize* size, QSize* oldSize) {
	return new QResizeEvent(*size, *oldSize);
}

QResizeEvent* QResizeEvent_new2(QResizeEvent* param1) {
	return new QResizeEvent(*param1);
}

QSize* QResizeEvent_Size(QResizeEvent* self) {
	const QSize& ret = self->size();
	// Cast returned reference into pointer
	return const_cast<QSize*>(&ret);
}

QSize* QResizeEvent_OldSize(QResizeEvent* self) {
	const QSize& ret = self->oldSize();
	// Cast returned reference into pointer
	return const_cast<QSize*>(&ret);
}

void QResizeEvent_Delete(QResizeEvent* self) {
	delete self;
}

QCloseEvent* QCloseEvent_new() {
	return new QCloseEvent();
}

QCloseEvent* QCloseEvent_new2(QCloseEvent* param1) {
	return new QCloseEvent(*param1);
}

void QCloseEvent_OperatorAssign(QCloseEvent* self, QCloseEvent* param1) {
	self->operator=(*param1);
}

void QCloseEvent_Delete(QCloseEvent* self) {
	delete self;
}

QIconDragEvent* QIconDragEvent_new() {
	return new QIconDragEvent();
}

QIconDragEvent* QIconDragEvent_new2(QIconDragEvent* param1) {
	return new QIconDragEvent(*param1);
}

void QIconDragEvent_OperatorAssign(QIconDragEvent* self, QIconDragEvent* param1) {
	self->operator=(*param1);
}

void QIconDragEvent_Delete(QIconDragEvent* self) {
	delete self;
}

QShowEvent* QShowEvent_new() {
	return new QShowEvent();
}

QShowEvent* QShowEvent_new2(QShowEvent* param1) {
	return new QShowEvent(*param1);
}

void QShowEvent_OperatorAssign(QShowEvent* self, QShowEvent* param1) {
	self->operator=(*param1);
}

void QShowEvent_Delete(QShowEvent* self) {
	delete self;
}

QHideEvent* QHideEvent_new() {
	return new QHideEvent();
}

QHideEvent* QHideEvent_new2(QHideEvent* param1) {
	return new QHideEvent(*param1);
}

void QHideEvent_OperatorAssign(QHideEvent* self, QHideEvent* param1) {
	self->operator=(*param1);
}

void QHideEvent_Delete(QHideEvent* self) {
	delete self;
}

QContextMenuEvent* QContextMenuEvent_new(QContextMenuEvent* param1) {
	return new QContextMenuEvent(*param1);
}

int QContextMenuEvent_X(QContextMenuEvent* self) {
	return self->x();
}

int QContextMenuEvent_Y(QContextMenuEvent* self) {
	return self->y();
}

int QContextMenuEvent_GlobalX(QContextMenuEvent* self) {
	return self->globalX();
}

int QContextMenuEvent_GlobalY(QContextMenuEvent* self) {
	return self->globalY();
}

QPoint* QContextMenuEvent_Pos(QContextMenuEvent* self) {
	const QPoint& ret = self->pos();
	// Cast returned reference into pointer
	return const_cast<QPoint*>(&ret);
}

QPoint* QContextMenuEvent_GlobalPos(QContextMenuEvent* self) {
	const QPoint& ret = self->globalPos();
	// Cast returned reference into pointer
	return const_cast<QPoint*>(&ret);
}

void QContextMenuEvent_Delete(QContextMenuEvent* self) {
	delete self;
}

QInputMethodEvent* QInputMethodEvent_new() {
	return new QInputMethodEvent();
}

QInputMethodEvent* QInputMethodEvent_new2(QInputMethodEvent* other) {
	return new QInputMethodEvent(*other);
}

void QInputMethodEvent_SetCommitString(QInputMethodEvent* self, const char* commitString, size_t commitString_Strlen) {
	QString commitString_QString = QString::fromUtf8(commitString, commitString_Strlen);
	self->setCommitString(commitString_QString);
}

void QInputMethodEvent_PreeditString(QInputMethodEvent* self, char** _out, int* _out_Strlen) {
	const QString ret = self->preeditString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QInputMethodEvent_CommitString(QInputMethodEvent* self, char** _out, int* _out_Strlen) {
	const QString ret = self->commitString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QInputMethodEvent_ReplacementStart(QInputMethodEvent* self) {
	return self->replacementStart();
}

int QInputMethodEvent_ReplacementLength(QInputMethodEvent* self) {
	return self->replacementLength();
}

void QInputMethodEvent_SetCommitString2(QInputMethodEvent* self, const char* commitString, size_t commitString_Strlen, int replaceFrom) {
	QString commitString_QString = QString::fromUtf8(commitString, commitString_Strlen);
	self->setCommitString(commitString_QString, static_cast<int>(replaceFrom));
}

void QInputMethodEvent_SetCommitString3(QInputMethodEvent* self, const char* commitString, size_t commitString_Strlen, int replaceFrom, int replaceLength) {
	QString commitString_QString = QString::fromUtf8(commitString, commitString_Strlen);
	self->setCommitString(commitString_QString, static_cast<int>(replaceFrom), static_cast<int>(replaceLength));
}

void QInputMethodEvent_Delete(QInputMethodEvent* self) {
	delete self;
}

QInputMethodQueryEvent* QInputMethodQueryEvent_new(QInputMethodQueryEvent* param1) {
	return new QInputMethodQueryEvent(*param1);
}

void QInputMethodQueryEvent_Delete(QInputMethodQueryEvent* self) {
	delete self;
}

QDropEvent* QDropEvent_new(QDropEvent* param1) {
	return new QDropEvent(*param1);
}

QPoint* QDropEvent_Pos(QDropEvent* self) {
	QPoint ret = self->pos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QPointF* QDropEvent_PosF(QDropEvent* self) {
	const QPointF& ret = self->posF();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&ret);
}

void QDropEvent_AcceptProposedAction(QDropEvent* self) {
	self->acceptProposedAction();
}

QObject* QDropEvent_Source(QDropEvent* self) {
	return self->source();
}

QMimeData* QDropEvent_MimeData(QDropEvent* self) {
	return (QMimeData*) self->mimeData();
}

void QDropEvent_Delete(QDropEvent* self) {
	delete self;
}

QDragMoveEvent* QDragMoveEvent_new(QDragMoveEvent* param1) {
	return new QDragMoveEvent(*param1);
}

QRect* QDragMoveEvent_AnswerRect(QDragMoveEvent* self) {
	QRect ret = self->answerRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

void QDragMoveEvent_Accept(QDragMoveEvent* self) {
	self->accept();
}

void QDragMoveEvent_Ignore(QDragMoveEvent* self) {
	self->ignore();
}

void QDragMoveEvent_AcceptWithQRect(QDragMoveEvent* self, QRect* r) {
	self->accept(*r);
}

void QDragMoveEvent_IgnoreWithQRect(QDragMoveEvent* self, QRect* r) {
	self->ignore(*r);
}

void QDragMoveEvent_Delete(QDragMoveEvent* self) {
	delete self;
}

QDragEnterEvent* QDragEnterEvent_new(QDragEnterEvent* param1) {
	return new QDragEnterEvent(*param1);
}

void QDragEnterEvent_OperatorAssign(QDragEnterEvent* self, QDragEnterEvent* param1) {
	self->operator=(*param1);
}

void QDragEnterEvent_Delete(QDragEnterEvent* self) {
	delete self;
}

QDragLeaveEvent* QDragLeaveEvent_new() {
	return new QDragLeaveEvent();
}

QDragLeaveEvent* QDragLeaveEvent_new2(QDragLeaveEvent* param1) {
	return new QDragLeaveEvent(*param1);
}

void QDragLeaveEvent_OperatorAssign(QDragLeaveEvent* self, QDragLeaveEvent* param1) {
	self->operator=(*param1);
}

void QDragLeaveEvent_Delete(QDragLeaveEvent* self) {
	delete self;
}

QHelpEvent* QHelpEvent_new(QHelpEvent* param1) {
	return new QHelpEvent(*param1);
}

int QHelpEvent_X(QHelpEvent* self) {
	return self->x();
}

int QHelpEvent_Y(QHelpEvent* self) {
	return self->y();
}

int QHelpEvent_GlobalX(QHelpEvent* self) {
	return self->globalX();
}

int QHelpEvent_GlobalY(QHelpEvent* self) {
	return self->globalY();
}

QPoint* QHelpEvent_Pos(QHelpEvent* self) {
	const QPoint& ret = self->pos();
	// Cast returned reference into pointer
	return const_cast<QPoint*>(&ret);
}

QPoint* QHelpEvent_GlobalPos(QHelpEvent* self) {
	const QPoint& ret = self->globalPos();
	// Cast returned reference into pointer
	return const_cast<QPoint*>(&ret);
}

void QHelpEvent_Delete(QHelpEvent* self) {
	delete self;
}

QStatusTipEvent* QStatusTipEvent_new(const char* tip, size_t tip_Strlen) {
	QString tip_QString = QString::fromUtf8(tip, tip_Strlen);
	return new QStatusTipEvent(tip_QString);
}

QStatusTipEvent* QStatusTipEvent_new2(QStatusTipEvent* param1) {
	return new QStatusTipEvent(*param1);
}

void QStatusTipEvent_Tip(QStatusTipEvent* self, char** _out, int* _out_Strlen) {
	QString ret = self->tip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStatusTipEvent_Delete(QStatusTipEvent* self) {
	delete self;
}

QWhatsThisClickedEvent* QWhatsThisClickedEvent_new(const char* href, size_t href_Strlen) {
	QString href_QString = QString::fromUtf8(href, href_Strlen);
	return new QWhatsThisClickedEvent(href_QString);
}

QWhatsThisClickedEvent* QWhatsThisClickedEvent_new2(QWhatsThisClickedEvent* param1) {
	return new QWhatsThisClickedEvent(*param1);
}

void QWhatsThisClickedEvent_Href(QWhatsThisClickedEvent* self, char** _out, int* _out_Strlen) {
	QString ret = self->href();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QWhatsThisClickedEvent_Delete(QWhatsThisClickedEvent* self) {
	delete self;
}

QActionEvent* QActionEvent_new(int typeVal, QAction* action) {
	return new QActionEvent(static_cast<int>(typeVal), action);
}

QActionEvent* QActionEvent_new2(QActionEvent* param1) {
	return new QActionEvent(*param1);
}

QActionEvent* QActionEvent_new3(int typeVal, QAction* action, QAction* before) {
	return new QActionEvent(static_cast<int>(typeVal), action, before);
}

QAction* QActionEvent_Action(QActionEvent* self) {
	return self->action();
}

QAction* QActionEvent_Before(QActionEvent* self) {
	return self->before();
}

void QActionEvent_OperatorAssign(QActionEvent* self, QActionEvent* param1) {
	self->operator=(*param1);
}

void QActionEvent_Delete(QActionEvent* self) {
	delete self;
}

QFileOpenEvent* QFileOpenEvent_new(const char* file, size_t file_Strlen) {
	QString file_QString = QString::fromUtf8(file, file_Strlen);
	return new QFileOpenEvent(file_QString);
}

QFileOpenEvent* QFileOpenEvent_new2(QUrl* url) {
	return new QFileOpenEvent(*url);
}

QFileOpenEvent* QFileOpenEvent_new3(QFileOpenEvent* param1) {
	return new QFileOpenEvent(*param1);
}

void QFileOpenEvent_File(QFileOpenEvent* self, char** _out, int* _out_Strlen) {
	QString ret = self->file();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QUrl* QFileOpenEvent_Url(QFileOpenEvent* self) {
	QUrl ret = self->url();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUrl*>(new QUrl(ret));
}

void QFileOpenEvent_Delete(QFileOpenEvent* self) {
	delete self;
}

QToolBarChangeEvent* QToolBarChangeEvent_new(bool t) {
	return new QToolBarChangeEvent(t);
}

QToolBarChangeEvent* QToolBarChangeEvent_new2(QToolBarChangeEvent* param1) {
	return new QToolBarChangeEvent(*param1);
}

bool QToolBarChangeEvent_Toggle(QToolBarChangeEvent* self) {
	return self->toggle();
}

void QToolBarChangeEvent_Delete(QToolBarChangeEvent* self) {
	delete self;
}

QShortcutEvent* QShortcutEvent_new(QKeySequence* key, int id) {
	return new QShortcutEvent(*key, static_cast<int>(id));
}

QShortcutEvent* QShortcutEvent_new2(QShortcutEvent* param1) {
	return new QShortcutEvent(*param1);
}

QShortcutEvent* QShortcutEvent_new3(QKeySequence* key, int id, bool ambiguous) {
	return new QShortcutEvent(*key, static_cast<int>(id), ambiguous);
}

QKeySequence* QShortcutEvent_Key(QShortcutEvent* self) {
	const QKeySequence& ret = self->key();
	// Cast returned reference into pointer
	return const_cast<QKeySequence*>(&ret);
}

int QShortcutEvent_ShortcutId(QShortcutEvent* self) {
	return self->shortcutId();
}

bool QShortcutEvent_IsAmbiguous(QShortcutEvent* self) {
	return self->isAmbiguous();
}

void QShortcutEvent_Delete(QShortcutEvent* self) {
	delete self;
}

QWindowStateChangeEvent* QWindowStateChangeEvent_new(QWindowStateChangeEvent* param1) {
	return new QWindowStateChangeEvent(*param1);
}

bool QWindowStateChangeEvent_IsOverride(QWindowStateChangeEvent* self) {
	return self->isOverride();
}

void QWindowStateChangeEvent_Delete(QWindowStateChangeEvent* self) {
	delete self;
}

QPointingDeviceUniqueId* QPointingDeviceUniqueId_new() {
	return new QPointingDeviceUniqueId();
}

QPointingDeviceUniqueId* QPointingDeviceUniqueId_new2(QPointingDeviceUniqueId* param1) {
	return new QPointingDeviceUniqueId(*param1);
}

QPointingDeviceUniqueId* QPointingDeviceUniqueId_FromNumericId(int64_t id) {
	QPointingDeviceUniqueId ret = QPointingDeviceUniqueId::fromNumericId((qint64)(id));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointingDeviceUniqueId*>(new QPointingDeviceUniqueId(ret));
}

bool QPointingDeviceUniqueId_IsValid(QPointingDeviceUniqueId* self) {
	return self->isValid();
}

int64_t QPointingDeviceUniqueId_NumericId(QPointingDeviceUniqueId* self) {
	return self->numericId();
}

void QPointingDeviceUniqueId_Delete(QPointingDeviceUniqueId* self) {
	delete self;
}

QTouchEvent* QTouchEvent_new(QTouchEvent* param1) {
	return new QTouchEvent(*param1);
}

QWindow* QTouchEvent_Window(QTouchEvent* self) {
	return self->window();
}

QObject* QTouchEvent_Target(QTouchEvent* self) {
	return self->target();
}

QTouchDevice* QTouchEvent_Device(QTouchEvent* self) {
	return self->device();
}

void QTouchEvent_SetWindow(QTouchEvent* self, QWindow* awindow) {
	self->setWindow(awindow);
}

void QTouchEvent_SetTarget(QTouchEvent* self, QObject* atarget) {
	self->setTarget(atarget);
}

void QTouchEvent_SetDevice(QTouchEvent* self, QTouchDevice* adevice) {
	self->setDevice(adevice);
}

void QTouchEvent_Delete(QTouchEvent* self) {
	delete self;
}

QScrollPrepareEvent* QScrollPrepareEvent_new(QPointF* startPos) {
	return new QScrollPrepareEvent(*startPos);
}

QScrollPrepareEvent* QScrollPrepareEvent_new2(QScrollPrepareEvent* param1) {
	return new QScrollPrepareEvent(*param1);
}

QPointF* QScrollPrepareEvent_StartPos(QScrollPrepareEvent* self) {
	QPointF ret = self->startPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QSizeF* QScrollPrepareEvent_ViewportSize(QScrollPrepareEvent* self) {
	QSizeF ret = self->viewportSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

QRectF* QScrollPrepareEvent_ContentPosRange(QScrollPrepareEvent* self) {
	QRectF ret = self->contentPosRange();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QPointF* QScrollPrepareEvent_ContentPos(QScrollPrepareEvent* self) {
	QPointF ret = self->contentPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QScrollPrepareEvent_SetViewportSize(QScrollPrepareEvent* self, QSizeF* size) {
	self->setViewportSize(*size);
}

void QScrollPrepareEvent_SetContentPosRange(QScrollPrepareEvent* self, QRectF* rect) {
	self->setContentPosRange(*rect);
}

void QScrollPrepareEvent_SetContentPos(QScrollPrepareEvent* self, QPointF* pos) {
	self->setContentPos(*pos);
}

void QScrollPrepareEvent_Delete(QScrollPrepareEvent* self) {
	delete self;
}

QScrollEvent* QScrollEvent_new(QScrollEvent* param1) {
	return new QScrollEvent(*param1);
}

QPointF* QScrollEvent_ContentPos(QScrollEvent* self) {
	QPointF ret = self->contentPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QPointF* QScrollEvent_OvershootDistance(QScrollEvent* self) {
	QPointF ret = self->overshootDistance();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QScrollEvent_Delete(QScrollEvent* self) {
	delete self;
}

QScreenOrientationChangeEvent* QScreenOrientationChangeEvent_new(QScreenOrientationChangeEvent* param1) {
	return new QScreenOrientationChangeEvent(*param1);
}

QScreen* QScreenOrientationChangeEvent_Screen(QScreenOrientationChangeEvent* self) {
	return self->screen();
}

void QScreenOrientationChangeEvent_Delete(QScreenOrientationChangeEvent* self) {
	delete self;
}

QApplicationStateChangeEvent* QApplicationStateChangeEvent_new(QApplicationStateChangeEvent* param1) {
	return new QApplicationStateChangeEvent(*param1);
}

void QApplicationStateChangeEvent_Delete(QApplicationStateChangeEvent* self) {
	delete self;
}

