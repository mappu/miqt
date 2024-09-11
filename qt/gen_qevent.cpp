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
#include <QFile>
#include <QFileOpenEvent>
#include <QFocusEvent>
#include <QHelpEvent>
#include <QHideEvent>
#include <QHoverEvent>
#include <QIconDragEvent>
#include <QInputEvent>
#include <QInputMethodEvent>
#define WORKAROUND_INNER_CLASS_DEFINITION_QInputMethodEvent__Attribute
#include <QInputMethodQueryEvent>
#include <QKeyEvent>
#include <QKeySequence>
#include <QList>
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
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QToolBarChangeEvent>
#include <QTouchDevice>
#include <QTouchEvent>
#define WORKAROUND_INNER_CLASS_DEFINITION_QTouchEvent__TouchPoint
#include <QUrl>
#include <QVariant>
#include <QVector2D>
#include <QWhatsThisClickedEvent>
#include <QWheelEvent>
#include <QWindow>
#include <QWindowStateChangeEvent>
#include "qevent.h"

#include "gen_qevent.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QInputEvent* QInputEvent_new(uintptr_t typeVal) {
	return new QInputEvent(static_cast<QEvent::Type>(typeVal));
}

QInputEvent* QInputEvent_new2(QInputEvent* param1) {
	return new QInputEvent(*param1);
}

QInputEvent* QInputEvent_new3(uintptr_t typeVal, int modifiers) {
	return new QInputEvent(static_cast<QEvent::Type>(typeVal), static_cast<Qt::KeyboardModifiers>(modifiers));
}

int QInputEvent_Modifiers(const QInputEvent* self) {
	Qt::KeyboardModifiers ret = self->modifiers();
	return static_cast<int>(ret);
}

void QInputEvent_SetModifiers(QInputEvent* self, int amodifiers) {
	self->setModifiers(static_cast<Qt::KeyboardModifiers>(amodifiers));
}

unsigned long QInputEvent_Timestamp(const QInputEvent* self) {
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

QPoint* QEnterEvent_Pos(const QEnterEvent* self) {
	QPoint ret = self->pos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QPoint* QEnterEvent_GlobalPos(const QEnterEvent* self) {
	QPoint ret = self->globalPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

int QEnterEvent_X(const QEnterEvent* self) {
	return self->x();
}

int QEnterEvent_Y(const QEnterEvent* self) {
	return self->y();
}

int QEnterEvent_GlobalX(const QEnterEvent* self) {
	return self->globalX();
}

int QEnterEvent_GlobalY(const QEnterEvent* self) {
	return self->globalY();
}

QPointF* QEnterEvent_LocalPos(const QEnterEvent* self) {
	const QPointF& ret = self->localPos();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&ret);
}

QPointF* QEnterEvent_WindowPos(const QEnterEvent* self) {
	const QPointF& ret = self->windowPos();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&ret);
}

QPointF* QEnterEvent_ScreenPos(const QEnterEvent* self) {
	const QPointF& ret = self->screenPos();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&ret);
}

void QEnterEvent_Delete(QEnterEvent* self) {
	delete self;
}

QMouseEvent* QMouseEvent_new(uintptr_t typeVal, QPointF* localPos, uintptr_t button, int buttons, int modifiers) {
	return new QMouseEvent(static_cast<QEvent::Type>(typeVal), *localPos, static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
}

QMouseEvent* QMouseEvent_new2(uintptr_t typeVal, QPointF* localPos, QPointF* screenPos, uintptr_t button, int buttons, int modifiers) {
	return new QMouseEvent(static_cast<QEvent::Type>(typeVal), *localPos, *screenPos, static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
}

QMouseEvent* QMouseEvent_new3(uintptr_t typeVal, QPointF* localPos, QPointF* windowPos, QPointF* screenPos, uintptr_t button, int buttons, int modifiers) {
	return new QMouseEvent(static_cast<QEvent::Type>(typeVal), *localPos, *windowPos, *screenPos, static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
}

QMouseEvent* QMouseEvent_new4(uintptr_t typeVal, QPointF* localPos, QPointF* windowPos, QPointF* screenPos, uintptr_t button, int buttons, int modifiers, uintptr_t source) {
	return new QMouseEvent(static_cast<QEvent::Type>(typeVal), *localPos, *windowPos, *screenPos, static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::MouseEventSource>(source));
}

QMouseEvent* QMouseEvent_new5(QMouseEvent* param1) {
	return new QMouseEvent(*param1);
}

QPoint* QMouseEvent_Pos(const QMouseEvent* self) {
	QPoint ret = self->pos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QPoint* QMouseEvent_GlobalPos(const QMouseEvent* self) {
	QPoint ret = self->globalPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

int QMouseEvent_X(const QMouseEvent* self) {
	return self->x();
}

int QMouseEvent_Y(const QMouseEvent* self) {
	return self->y();
}

int QMouseEvent_GlobalX(const QMouseEvent* self) {
	return self->globalX();
}

int QMouseEvent_GlobalY(const QMouseEvent* self) {
	return self->globalY();
}

QPointF* QMouseEvent_LocalPos(const QMouseEvent* self) {
	const QPointF& ret = self->localPos();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&ret);
}

QPointF* QMouseEvent_WindowPos(const QMouseEvent* self) {
	const QPointF& ret = self->windowPos();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&ret);
}

QPointF* QMouseEvent_ScreenPos(const QMouseEvent* self) {
	const QPointF& ret = self->screenPos();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&ret);
}

uintptr_t QMouseEvent_Button(const QMouseEvent* self) {
	Qt::MouseButton ret = self->button();
	return static_cast<uintptr_t>(ret);
}

int QMouseEvent_Buttons(const QMouseEvent* self) {
	Qt::MouseButtons ret = self->buttons();
	return static_cast<int>(ret);
}

void QMouseEvent_SetLocalPos(QMouseEvent* self, QPointF* localPosition) {
	self->setLocalPos(*localPosition);
}

uintptr_t QMouseEvent_Source(const QMouseEvent* self) {
	Qt::MouseEventSource ret = self->source();
	return static_cast<uintptr_t>(ret);
}

int QMouseEvent_Flags(const QMouseEvent* self) {
	Qt::MouseEventFlags ret = self->flags();
	return static_cast<int>(ret);
}

void QMouseEvent_Delete(QMouseEvent* self) {
	delete self;
}

QHoverEvent* QHoverEvent_new(uintptr_t typeVal, QPointF* pos, QPointF* oldPos) {
	return new QHoverEvent(static_cast<QEvent::Type>(typeVal), *pos, *oldPos);
}

QHoverEvent* QHoverEvent_new2(QHoverEvent* param1) {
	return new QHoverEvent(*param1);
}

QHoverEvent* QHoverEvent_new3(uintptr_t typeVal, QPointF* pos, QPointF* oldPos, int modifiers) {
	return new QHoverEvent(static_cast<QEvent::Type>(typeVal), *pos, *oldPos, static_cast<Qt::KeyboardModifiers>(modifiers));
}

QPoint* QHoverEvent_Pos(const QHoverEvent* self) {
	QPoint ret = self->pos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QPoint* QHoverEvent_OldPos(const QHoverEvent* self) {
	QPoint ret = self->oldPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QPointF* QHoverEvent_PosF(const QHoverEvent* self) {
	const QPointF& ret = self->posF();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&ret);
}

QPointF* QHoverEvent_OldPosF(const QHoverEvent* self) {
	const QPointF& ret = self->oldPosF();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&ret);
}

void QHoverEvent_Delete(QHoverEvent* self) {
	delete self;
}

QWheelEvent* QWheelEvent_new(QPointF* pos, int delta, int buttons, int modifiers) {
	return new QWheelEvent(*pos, static_cast<int>(delta), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
}

QWheelEvent* QWheelEvent_new2(QPointF* pos, QPointF* globalPos, int delta, int buttons, int modifiers) {
	return new QWheelEvent(*pos, *globalPos, static_cast<int>(delta), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
}

QWheelEvent* QWheelEvent_new3(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int qt4Delta, uintptr_t qt4Orientation, int buttons, int modifiers) {
	return new QWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, static_cast<int>(qt4Delta), static_cast<Qt::Orientation>(qt4Orientation), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
}

QWheelEvent* QWheelEvent_new4(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int qt4Delta, uintptr_t qt4Orientation, int buttons, int modifiers, uintptr_t phase) {
	return new QWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, static_cast<int>(qt4Delta), static_cast<Qt::Orientation>(qt4Orientation), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::ScrollPhase>(phase));
}

QWheelEvent* QWheelEvent_new5(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int qt4Delta, uintptr_t qt4Orientation, int buttons, int modifiers, uintptr_t phase, uintptr_t source) {
	return new QWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, static_cast<int>(qt4Delta), static_cast<Qt::Orientation>(qt4Orientation), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::ScrollPhase>(phase), static_cast<Qt::MouseEventSource>(source));
}

QWheelEvent* QWheelEvent_new6(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int qt4Delta, uintptr_t qt4Orientation, int buttons, int modifiers, uintptr_t phase, uintptr_t source, bool inverted) {
	return new QWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, static_cast<int>(qt4Delta), static_cast<Qt::Orientation>(qt4Orientation), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::ScrollPhase>(phase), static_cast<Qt::MouseEventSource>(source), inverted);
}

QWheelEvent* QWheelEvent_new7(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int buttons, int modifiers, uintptr_t phase, bool inverted) {
	return new QWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::ScrollPhase>(phase), inverted);
}

QWheelEvent* QWheelEvent_new8(QWheelEvent* param1) {
	return new QWheelEvent(*param1);
}

QWheelEvent* QWheelEvent_new9(QPointF* pos, int delta, int buttons, int modifiers, uintptr_t orient) {
	return new QWheelEvent(*pos, static_cast<int>(delta), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::Orientation>(orient));
}

QWheelEvent* QWheelEvent_new10(QPointF* pos, QPointF* globalPos, int delta, int buttons, int modifiers, uintptr_t orient) {
	return new QWheelEvent(*pos, *globalPos, static_cast<int>(delta), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::Orientation>(orient));
}

QWheelEvent* QWheelEvent_new11(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int buttons, int modifiers, uintptr_t phase, bool inverted, uintptr_t source) {
	return new QWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::ScrollPhase>(phase), inverted, static_cast<Qt::MouseEventSource>(source));
}

QPoint* QWheelEvent_PixelDelta(const QWheelEvent* self) {
	QPoint ret = self->pixelDelta();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QPoint* QWheelEvent_AngleDelta(const QWheelEvent* self) {
	QPoint ret = self->angleDelta();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

int QWheelEvent_Delta(const QWheelEvent* self) {
	return self->delta();
}

uintptr_t QWheelEvent_Orientation(const QWheelEvent* self) {
	Qt::Orientation ret = self->orientation();
	return static_cast<uintptr_t>(ret);
}

QPoint* QWheelEvent_Pos(const QWheelEvent* self) {
	QPoint ret = self->pos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QPoint* QWheelEvent_GlobalPos(const QWheelEvent* self) {
	QPoint ret = self->globalPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

int QWheelEvent_X(const QWheelEvent* self) {
	return self->x();
}

int QWheelEvent_Y(const QWheelEvent* self) {
	return self->y();
}

int QWheelEvent_GlobalX(const QWheelEvent* self) {
	return self->globalX();
}

int QWheelEvent_GlobalY(const QWheelEvent* self) {
	return self->globalY();
}

QPointF* QWheelEvent_PosF(const QWheelEvent* self) {
	const QPointF& ret = self->posF();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&ret);
}

QPointF* QWheelEvent_GlobalPosF(const QWheelEvent* self) {
	const QPointF& ret = self->globalPosF();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&ret);
}

QPointF* QWheelEvent_Position(const QWheelEvent* self) {
	QPointF ret = self->position();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QPointF* QWheelEvent_GlobalPosition(const QWheelEvent* self) {
	QPointF ret = self->globalPosition();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

int QWheelEvent_Buttons(const QWheelEvent* self) {
	Qt::MouseButtons ret = self->buttons();
	return static_cast<int>(ret);
}

uintptr_t QWheelEvent_Phase(const QWheelEvent* self) {
	Qt::ScrollPhase ret = self->phase();
	return static_cast<uintptr_t>(ret);
}

bool QWheelEvent_Inverted(const QWheelEvent* self) {
	return self->inverted();
}

uintptr_t QWheelEvent_Source(const QWheelEvent* self) {
	Qt::MouseEventSource ret = self->source();
	return static_cast<uintptr_t>(ret);
}

void QWheelEvent_Delete(QWheelEvent* self) {
	delete self;
}

QTabletEvent* QTabletEvent_new(uintptr_t t, QPointF* pos, QPointF* globalPos, int device, int pointerType, double pressure, int xTilt, int yTilt, double tangentialPressure, double rotation, int z, int keyState, long long uniqueID) {
	return new QTabletEvent(static_cast<QEvent::Type>(t), *pos, *globalPos, static_cast<int>(device), static_cast<int>(pointerType), static_cast<qreal>(pressure), static_cast<int>(xTilt), static_cast<int>(yTilt), static_cast<qreal>(tangentialPressure), static_cast<qreal>(rotation), static_cast<int>(z), static_cast<Qt::KeyboardModifiers>(keyState), static_cast<qint64>(uniqueID));
}

QTabletEvent* QTabletEvent_new2(uintptr_t t, QPointF* pos, QPointF* globalPos, int device, int pointerType, double pressure, int xTilt, int yTilt, double tangentialPressure, double rotation, int z, int keyState, long long uniqueID, uintptr_t button, int buttons) {
	return new QTabletEvent(static_cast<QEvent::Type>(t), *pos, *globalPos, static_cast<int>(device), static_cast<int>(pointerType), static_cast<qreal>(pressure), static_cast<int>(xTilt), static_cast<int>(yTilt), static_cast<qreal>(tangentialPressure), static_cast<qreal>(rotation), static_cast<int>(z), static_cast<Qt::KeyboardModifiers>(keyState), static_cast<qint64>(uniqueID), static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons));
}

QTabletEvent* QTabletEvent_new3(QTabletEvent* param1) {
	return new QTabletEvent(*param1);
}

QPoint* QTabletEvent_Pos(const QTabletEvent* self) {
	QPoint ret = self->pos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QPoint* QTabletEvent_GlobalPos(const QTabletEvent* self) {
	QPoint ret = self->globalPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QPointF* QTabletEvent_PosF(const QTabletEvent* self) {
	const QPointF& ret = self->posF();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&ret);
}

QPointF* QTabletEvent_GlobalPosF(const QTabletEvent* self) {
	const QPointF& ret = self->globalPosF();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&ret);
}

int QTabletEvent_X(const QTabletEvent* self) {
	return self->x();
}

int QTabletEvent_Y(const QTabletEvent* self) {
	return self->y();
}

int QTabletEvent_GlobalX(const QTabletEvent* self) {
	return self->globalX();
}

int QTabletEvent_GlobalY(const QTabletEvent* self) {
	return self->globalY();
}

double QTabletEvent_HiResGlobalX(const QTabletEvent* self) {
	return self->hiResGlobalX();
}

double QTabletEvent_HiResGlobalY(const QTabletEvent* self) {
	return self->hiResGlobalY();
}

uintptr_t QTabletEvent_Device(const QTabletEvent* self) {
	QTabletEvent::TabletDevice ret = self->device();
	return static_cast<uintptr_t>(ret);
}

uintptr_t QTabletEvent_DeviceType(const QTabletEvent* self) {
	QTabletEvent::TabletDevice ret = self->deviceType();
	return static_cast<uintptr_t>(ret);
}

uintptr_t QTabletEvent_PointerType(const QTabletEvent* self) {
	QTabletEvent::PointerType ret = self->pointerType();
	return static_cast<uintptr_t>(ret);
}

long long QTabletEvent_UniqueId(const QTabletEvent* self) {
	return self->uniqueId();
}

double QTabletEvent_Pressure(const QTabletEvent* self) {
	return self->pressure();
}

int QTabletEvent_Z(const QTabletEvent* self) {
	return self->z();
}

double QTabletEvent_TangentialPressure(const QTabletEvent* self) {
	return self->tangentialPressure();
}

double QTabletEvent_Rotation(const QTabletEvent* self) {
	return self->rotation();
}

int QTabletEvent_XTilt(const QTabletEvent* self) {
	return self->xTilt();
}

int QTabletEvent_YTilt(const QTabletEvent* self) {
	return self->yTilt();
}

uintptr_t QTabletEvent_Button(const QTabletEvent* self) {
	Qt::MouseButton ret = self->button();
	return static_cast<uintptr_t>(ret);
}

int QTabletEvent_Buttons(const QTabletEvent* self) {
	Qt::MouseButtons ret = self->buttons();
	return static_cast<int>(ret);
}

void QTabletEvent_Delete(QTabletEvent* self) {
	delete self;
}

QNativeGestureEvent* QNativeGestureEvent_new(uintptr_t typeVal, QPointF* localPos, QPointF* windowPos, QPointF* screenPos, double value, unsigned long sequenceId, unsigned long long intArgument) {
	return new QNativeGestureEvent(static_cast<Qt::NativeGestureType>(typeVal), *localPos, *windowPos, *screenPos, static_cast<qreal>(value), static_cast<ulong>(sequenceId), static_cast<quint64>(intArgument));
}

QNativeGestureEvent* QNativeGestureEvent_new2(uintptr_t typeVal, QTouchDevice* dev, QPointF* localPos, QPointF* windowPos, QPointF* screenPos, double value, unsigned long sequenceId, unsigned long long intArgument) {
	return new QNativeGestureEvent(static_cast<Qt::NativeGestureType>(typeVal), dev, *localPos, *windowPos, *screenPos, static_cast<qreal>(value), static_cast<ulong>(sequenceId), static_cast<quint64>(intArgument));
}

QNativeGestureEvent* QNativeGestureEvent_new3(QNativeGestureEvent* param1) {
	return new QNativeGestureEvent(*param1);
}

uintptr_t QNativeGestureEvent_GestureType(const QNativeGestureEvent* self) {
	Qt::NativeGestureType ret = self->gestureType();
	return static_cast<uintptr_t>(ret);
}

double QNativeGestureEvent_Value(const QNativeGestureEvent* self) {
	return self->value();
}

QPoint* QNativeGestureEvent_Pos(const QNativeGestureEvent* self) {
	QPoint ret = self->pos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QPoint* QNativeGestureEvent_GlobalPos(const QNativeGestureEvent* self) {
	QPoint ret = self->globalPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QPointF* QNativeGestureEvent_LocalPos(const QNativeGestureEvent* self) {
	const QPointF& ret = self->localPos();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&ret);
}

QPointF* QNativeGestureEvent_WindowPos(const QNativeGestureEvent* self) {
	const QPointF& ret = self->windowPos();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&ret);
}

QPointF* QNativeGestureEvent_ScreenPos(const QNativeGestureEvent* self) {
	const QPointF& ret = self->screenPos();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&ret);
}

QTouchDevice* QNativeGestureEvent_Device(const QNativeGestureEvent* self) {
	return (QTouchDevice*) self->device();
}

void QNativeGestureEvent_Delete(QNativeGestureEvent* self) {
	delete self;
}

QKeyEvent* QKeyEvent_new(uintptr_t typeVal, int key, int modifiers) {
	return new QKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers));
}

QKeyEvent* QKeyEvent_new2(uintptr_t typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers) {
	return new QKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<quint32>(nativeScanCode), static_cast<quint32>(nativeVirtualKey), static_cast<quint32>(nativeModifiers));
}

QKeyEvent* QKeyEvent_new3(QKeyEvent* param1) {
	return new QKeyEvent(*param1);
}

QKeyEvent* QKeyEvent_new4(uintptr_t typeVal, int key, int modifiers, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), text_QString);
}

QKeyEvent* QKeyEvent_new5(uintptr_t typeVal, int key, int modifiers, const char* text, size_t text_Strlen, bool autorep) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), text_QString, autorep);
}

QKeyEvent* QKeyEvent_new6(uintptr_t typeVal, int key, int modifiers, const char* text, size_t text_Strlen, bool autorep, uint16_t count) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), text_QString, autorep, static_cast<ushort>(count));
}

QKeyEvent* QKeyEvent_new7(uintptr_t typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<quint32>(nativeScanCode), static_cast<quint32>(nativeVirtualKey), static_cast<quint32>(nativeModifiers), text_QString);
}

QKeyEvent* QKeyEvent_new8(uintptr_t typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, const char* text, size_t text_Strlen, bool autorep) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<quint32>(nativeScanCode), static_cast<quint32>(nativeVirtualKey), static_cast<quint32>(nativeModifiers), text_QString, autorep);
}

QKeyEvent* QKeyEvent_new9(uintptr_t typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, const char* text, size_t text_Strlen, bool autorep, uint16_t count) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<quint32>(nativeScanCode), static_cast<quint32>(nativeVirtualKey), static_cast<quint32>(nativeModifiers), text_QString, autorep, static_cast<ushort>(count));
}

int QKeyEvent_Key(const QKeyEvent* self) {
	return self->key();
}

bool QKeyEvent_Matches(const QKeyEvent* self, uintptr_t key) {
	return self->matches(static_cast<QKeySequence::StandardKey>(key));
}

int QKeyEvent_Modifiers(const QKeyEvent* self) {
	Qt::KeyboardModifiers ret = self->modifiers();
	return static_cast<int>(ret);
}

void QKeyEvent_Text(const QKeyEvent* self, char** _out, int* _out_Strlen) {
	QString ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QKeyEvent_IsAutoRepeat(const QKeyEvent* self) {
	return self->isAutoRepeat();
}

int QKeyEvent_Count(const QKeyEvent* self) {
	return self->count();
}

unsigned int QKeyEvent_NativeScanCode(const QKeyEvent* self) {
	return self->nativeScanCode();
}

unsigned int QKeyEvent_NativeVirtualKey(const QKeyEvent* self) {
	return self->nativeVirtualKey();
}

unsigned int QKeyEvent_NativeModifiers(const QKeyEvent* self) {
	return self->nativeModifiers();
}

void QKeyEvent_Delete(QKeyEvent* self) {
	delete self;
}

QFocusEvent* QFocusEvent_new(uintptr_t typeVal) {
	return new QFocusEvent(static_cast<QEvent::Type>(typeVal));
}

QFocusEvent* QFocusEvent_new2(QFocusEvent* param1) {
	return new QFocusEvent(*param1);
}

QFocusEvent* QFocusEvent_new3(uintptr_t typeVal, uintptr_t reason) {
	return new QFocusEvent(static_cast<QEvent::Type>(typeVal), static_cast<Qt::FocusReason>(reason));
}

bool QFocusEvent_GotFocus(const QFocusEvent* self) {
	return self->gotFocus();
}

bool QFocusEvent_LostFocus(const QFocusEvent* self) {
	return self->lostFocus();
}

uintptr_t QFocusEvent_Reason(const QFocusEvent* self) {
	Qt::FocusReason ret = self->reason();
	return static_cast<uintptr_t>(ret);
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

QRect* QPaintEvent_Rect(const QPaintEvent* self) {
	const QRect& ret = self->rect();
	// Cast returned reference into pointer
	return const_cast<QRect*>(&ret);
}

QRegion* QPaintEvent_Region(const QPaintEvent* self) {
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

QPoint* QMoveEvent_Pos(const QMoveEvent* self) {
	const QPoint& ret = self->pos();
	// Cast returned reference into pointer
	return const_cast<QPoint*>(&ret);
}

QPoint* QMoveEvent_OldPos(const QMoveEvent* self) {
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

QRegion* QExposeEvent_Region(const QExposeEvent* self) {
	const QRegion& ret = self->region();
	// Cast returned reference into pointer
	return const_cast<QRegion*>(&ret);
}

void QExposeEvent_Delete(QExposeEvent* self) {
	delete self;
}

QPlatformSurfaceEvent* QPlatformSurfaceEvent_new(uintptr_t surfaceEventType) {
	return new QPlatformSurfaceEvent(static_cast<QPlatformSurfaceEvent::SurfaceEventType>(surfaceEventType));
}

QPlatformSurfaceEvent* QPlatformSurfaceEvent_new2(QPlatformSurfaceEvent* param1) {
	return new QPlatformSurfaceEvent(*param1);
}

uintptr_t QPlatformSurfaceEvent_SurfaceEventType(const QPlatformSurfaceEvent* self) {
	QPlatformSurfaceEvent::SurfaceEventType ret = self->surfaceEventType();
	return static_cast<uintptr_t>(ret);
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

QSize* QResizeEvent_Size(const QResizeEvent* self) {
	const QSize& ret = self->size();
	// Cast returned reference into pointer
	return const_cast<QSize*>(&ret);
}

QSize* QResizeEvent_OldSize(const QResizeEvent* self) {
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

QContextMenuEvent* QContextMenuEvent_new(uintptr_t reason, QPoint* pos, QPoint* globalPos, int modifiers) {
	return new QContextMenuEvent(static_cast<QContextMenuEvent::Reason>(reason), *pos, *globalPos, static_cast<Qt::KeyboardModifiers>(modifiers));
}

QContextMenuEvent* QContextMenuEvent_new2(uintptr_t reason, QPoint* pos, QPoint* globalPos) {
	return new QContextMenuEvent(static_cast<QContextMenuEvent::Reason>(reason), *pos, *globalPos);
}

QContextMenuEvent* QContextMenuEvent_new3(uintptr_t reason, QPoint* pos) {
	return new QContextMenuEvent(static_cast<QContextMenuEvent::Reason>(reason), *pos);
}

QContextMenuEvent* QContextMenuEvent_new4(QContextMenuEvent* param1) {
	return new QContextMenuEvent(*param1);
}

int QContextMenuEvent_X(const QContextMenuEvent* self) {
	return self->x();
}

int QContextMenuEvent_Y(const QContextMenuEvent* self) {
	return self->y();
}

int QContextMenuEvent_GlobalX(const QContextMenuEvent* self) {
	return self->globalX();
}

int QContextMenuEvent_GlobalY(const QContextMenuEvent* self) {
	return self->globalY();
}

QPoint* QContextMenuEvent_Pos(const QContextMenuEvent* self) {
	const QPoint& ret = self->pos();
	// Cast returned reference into pointer
	return const_cast<QPoint*>(&ret);
}

QPoint* QContextMenuEvent_GlobalPos(const QContextMenuEvent* self) {
	const QPoint& ret = self->globalPos();
	// Cast returned reference into pointer
	return const_cast<QPoint*>(&ret);
}

uintptr_t QContextMenuEvent_Reason(const QContextMenuEvent* self) {
	QContextMenuEvent::Reason ret = self->reason();
	return static_cast<uintptr_t>(ret);
}

void QContextMenuEvent_Delete(QContextMenuEvent* self) {
	delete self;
}

QInputMethodEvent* QInputMethodEvent_new() {
	return new QInputMethodEvent();
}

QInputMethodEvent* QInputMethodEvent_new2(const char* preeditText, size_t preeditText_Strlen, QInputMethodEvent__Attribute** attributes, size_t attributes_len) {
	QString preeditText_QString = QString::fromUtf8(preeditText, preeditText_Strlen);
	QList<QInputMethodEvent::Attribute> attributes_QList;
	attributes_QList.reserve(attributes_len);
	for(size_t i = 0; i < attributes_len; ++i) {
		attributes_QList.push_back(*(attributes[i]));
	}
	return new QInputMethodEvent(preeditText_QString, attributes_QList);
}

QInputMethodEvent* QInputMethodEvent_new3(QInputMethodEvent* other) {
	return new QInputMethodEvent(*other);
}

void QInputMethodEvent_SetCommitString(QInputMethodEvent* self, const char* commitString, size_t commitString_Strlen) {
	QString commitString_QString = QString::fromUtf8(commitString, commitString_Strlen);
	self->setCommitString(commitString_QString);
}

void QInputMethodEvent_PreeditString(const QInputMethodEvent* self, char** _out, int* _out_Strlen) {
	const QString ret = self->preeditString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QInputMethodEvent_CommitString(const QInputMethodEvent* self, char** _out, int* _out_Strlen) {
	const QString ret = self->commitString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QInputMethodEvent_ReplacementStart(const QInputMethodEvent* self) {
	return self->replacementStart();
}

int QInputMethodEvent_ReplacementLength(const QInputMethodEvent* self) {
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

QInputMethodQueryEvent* QInputMethodQueryEvent_new(int queries) {
	return new QInputMethodQueryEvent(static_cast<Qt::InputMethodQueries>(queries));
}

QInputMethodQueryEvent* QInputMethodQueryEvent_new2(QInputMethodQueryEvent* param1) {
	return new QInputMethodQueryEvent(*param1);
}

int QInputMethodQueryEvent_Queries(const QInputMethodQueryEvent* self) {
	Qt::InputMethodQueries ret = self->queries();
	return static_cast<int>(ret);
}

void QInputMethodQueryEvent_SetValue(QInputMethodQueryEvent* self, uintptr_t query, QVariant* value) {
	self->setValue(static_cast<Qt::InputMethodQuery>(query), *value);
}

QVariant* QInputMethodQueryEvent_Value(const QInputMethodQueryEvent* self, uintptr_t query) {
	QVariant ret = self->value(static_cast<Qt::InputMethodQuery>(query));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

void QInputMethodQueryEvent_Delete(QInputMethodQueryEvent* self) {
	delete self;
}

QDropEvent* QDropEvent_new(QPointF* pos, int actions, QMimeData* data, int buttons, int modifiers) {
	return new QDropEvent(*pos, static_cast<Qt::DropActions>(actions), data, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
}

QDropEvent* QDropEvent_new2(QDropEvent* param1) {
	return new QDropEvent(*param1);
}

QDropEvent* QDropEvent_new3(QPointF* pos, int actions, QMimeData* data, int buttons, int modifiers, uintptr_t typeVal) {
	return new QDropEvent(*pos, static_cast<Qt::DropActions>(actions), data, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<QEvent::Type>(typeVal));
}

QPoint* QDropEvent_Pos(const QDropEvent* self) {
	QPoint ret = self->pos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QPointF* QDropEvent_PosF(const QDropEvent* self) {
	const QPointF& ret = self->posF();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&ret);
}

int QDropEvent_MouseButtons(const QDropEvent* self) {
	Qt::MouseButtons ret = self->mouseButtons();
	return static_cast<int>(ret);
}

int QDropEvent_KeyboardModifiers(const QDropEvent* self) {
	Qt::KeyboardModifiers ret = self->keyboardModifiers();
	return static_cast<int>(ret);
}

int QDropEvent_PossibleActions(const QDropEvent* self) {
	Qt::DropActions ret = self->possibleActions();
	return static_cast<int>(ret);
}

uintptr_t QDropEvent_ProposedAction(const QDropEvent* self) {
	Qt::DropAction ret = self->proposedAction();
	return static_cast<uintptr_t>(ret);
}

void QDropEvent_AcceptProposedAction(QDropEvent* self) {
	self->acceptProposedAction();
}

uintptr_t QDropEvent_DropAction(const QDropEvent* self) {
	Qt::DropAction ret = self->dropAction();
	return static_cast<uintptr_t>(ret);
}

void QDropEvent_SetDropAction(QDropEvent* self, uintptr_t action) {
	self->setDropAction(static_cast<Qt::DropAction>(action));
}

QObject* QDropEvent_Source(const QDropEvent* self) {
	return self->source();
}

QMimeData* QDropEvent_MimeData(const QDropEvent* self) {
	return (QMimeData*) self->mimeData();
}

void QDropEvent_Delete(QDropEvent* self) {
	delete self;
}

QDragMoveEvent* QDragMoveEvent_new(QPoint* pos, int actions, QMimeData* data, int buttons, int modifiers) {
	return new QDragMoveEvent(*pos, static_cast<Qt::DropActions>(actions), data, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
}

QDragMoveEvent* QDragMoveEvent_new2(QDragMoveEvent* param1) {
	return new QDragMoveEvent(*param1);
}

QDragMoveEvent* QDragMoveEvent_new3(QPoint* pos, int actions, QMimeData* data, int buttons, int modifiers, uintptr_t typeVal) {
	return new QDragMoveEvent(*pos, static_cast<Qt::DropActions>(actions), data, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<QEvent::Type>(typeVal));
}

QRect* QDragMoveEvent_AnswerRect(const QDragMoveEvent* self) {
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

QDragEnterEvent* QDragEnterEvent_new(QPoint* pos, int actions, QMimeData* data, int buttons, int modifiers) {
	return new QDragEnterEvent(*pos, static_cast<Qt::DropActions>(actions), data, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
}

QDragEnterEvent* QDragEnterEvent_new2(QDragEnterEvent* param1) {
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

QHelpEvent* QHelpEvent_new(uintptr_t typeVal, QPoint* pos, QPoint* globalPos) {
	return new QHelpEvent(static_cast<QEvent::Type>(typeVal), *pos, *globalPos);
}

QHelpEvent* QHelpEvent_new2(QHelpEvent* param1) {
	return new QHelpEvent(*param1);
}

int QHelpEvent_X(const QHelpEvent* self) {
	return self->x();
}

int QHelpEvent_Y(const QHelpEvent* self) {
	return self->y();
}

int QHelpEvent_GlobalX(const QHelpEvent* self) {
	return self->globalX();
}

int QHelpEvent_GlobalY(const QHelpEvent* self) {
	return self->globalY();
}

QPoint* QHelpEvent_Pos(const QHelpEvent* self) {
	const QPoint& ret = self->pos();
	// Cast returned reference into pointer
	return const_cast<QPoint*>(&ret);
}

QPoint* QHelpEvent_GlobalPos(const QHelpEvent* self) {
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

void QStatusTipEvent_Tip(const QStatusTipEvent* self, char** _out, int* _out_Strlen) {
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

void QWhatsThisClickedEvent_Href(const QWhatsThisClickedEvent* self, char** _out, int* _out_Strlen) {
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

QAction* QActionEvent_Action(const QActionEvent* self) {
	return self->action();
}

QAction* QActionEvent_Before(const QActionEvent* self) {
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

void QFileOpenEvent_File(const QFileOpenEvent* self, char** _out, int* _out_Strlen) {
	QString ret = self->file();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QUrl* QFileOpenEvent_Url(const QFileOpenEvent* self) {
	QUrl ret = self->url();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUrl*>(new QUrl(ret));
}

bool QFileOpenEvent_OpenFile(const QFileOpenEvent* self, QFile* file, int flags) {
	return self->openFile(*file, static_cast<QIODevice::OpenMode>(flags));
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

bool QToolBarChangeEvent_Toggle(const QToolBarChangeEvent* self) {
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

QKeySequence* QShortcutEvent_Key(const QShortcutEvent* self) {
	const QKeySequence& ret = self->key();
	// Cast returned reference into pointer
	return const_cast<QKeySequence*>(&ret);
}

int QShortcutEvent_ShortcutId(const QShortcutEvent* self) {
	return self->shortcutId();
}

bool QShortcutEvent_IsAmbiguous(const QShortcutEvent* self) {
	return self->isAmbiguous();
}

void QShortcutEvent_Delete(QShortcutEvent* self) {
	delete self;
}

QWindowStateChangeEvent* QWindowStateChangeEvent_new(int aOldState) {
	return new QWindowStateChangeEvent(static_cast<Qt::WindowStates>(aOldState));
}

QWindowStateChangeEvent* QWindowStateChangeEvent_new2(QWindowStateChangeEvent* param1) {
	return new QWindowStateChangeEvent(*param1);
}

QWindowStateChangeEvent* QWindowStateChangeEvent_new3(int aOldState, bool isOverride) {
	return new QWindowStateChangeEvent(static_cast<Qt::WindowStates>(aOldState), isOverride);
}

int QWindowStateChangeEvent_OldState(const QWindowStateChangeEvent* self) {
	Qt::WindowStates ret = self->oldState();
	return static_cast<int>(ret);
}

bool QWindowStateChangeEvent_IsOverride(const QWindowStateChangeEvent* self) {
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

QPointingDeviceUniqueId* QPointingDeviceUniqueId_FromNumericId(long long id) {
	QPointingDeviceUniqueId ret = QPointingDeviceUniqueId::fromNumericId(static_cast<qint64>(id));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointingDeviceUniqueId*>(new QPointingDeviceUniqueId(ret));
}

bool QPointingDeviceUniqueId_IsValid(const QPointingDeviceUniqueId* self) {
	return self->isValid();
}

long long QPointingDeviceUniqueId_NumericId(const QPointingDeviceUniqueId* self) {
	return self->numericId();
}

void QPointingDeviceUniqueId_Delete(QPointingDeviceUniqueId* self) {
	delete self;
}

QTouchEvent* QTouchEvent_new(uintptr_t eventType) {
	return new QTouchEvent(static_cast<QEvent::Type>(eventType));
}

QTouchEvent* QTouchEvent_new2(QTouchEvent* param1) {
	return new QTouchEvent(*param1);
}

QTouchEvent* QTouchEvent_new3(uintptr_t eventType, QTouchDevice* device) {
	return new QTouchEvent(static_cast<QEvent::Type>(eventType), device);
}

QTouchEvent* QTouchEvent_new4(uintptr_t eventType, QTouchDevice* device, int modifiers) {
	return new QTouchEvent(static_cast<QEvent::Type>(eventType), device, static_cast<Qt::KeyboardModifiers>(modifiers));
}

QTouchEvent* QTouchEvent_new5(uintptr_t eventType, QTouchDevice* device, int modifiers, int touchPointStates) {
	return new QTouchEvent(static_cast<QEvent::Type>(eventType), device, static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::TouchPointStates>(touchPointStates));
}

QTouchEvent* QTouchEvent_new6(uintptr_t eventType, QTouchDevice* device, int modifiers, int touchPointStates, QTouchEvent__TouchPoint** touchPoints, size_t touchPoints_len) {
	QList<QTouchEvent::TouchPoint> touchPoints_QList;
	touchPoints_QList.reserve(touchPoints_len);
	for(size_t i = 0; i < touchPoints_len; ++i) {
		touchPoints_QList.push_back(*(touchPoints[i]));
	}
	return new QTouchEvent(static_cast<QEvent::Type>(eventType), device, static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::TouchPointStates>(touchPointStates), touchPoints_QList);
}

QWindow* QTouchEvent_Window(const QTouchEvent* self) {
	return self->window();
}

QObject* QTouchEvent_Target(const QTouchEvent* self) {
	return self->target();
}

int QTouchEvent_TouchPointStates(const QTouchEvent* self) {
	Qt::TouchPointStates ret = self->touchPointStates();
	return static_cast<int>(ret);
}

QTouchDevice* QTouchEvent_Device(const QTouchEvent* self) {
	return self->device();
}

void QTouchEvent_SetWindow(QTouchEvent* self, QWindow* awindow) {
	self->setWindow(awindow);
}

void QTouchEvent_SetTarget(QTouchEvent* self, QObject* atarget) {
	self->setTarget(atarget);
}

void QTouchEvent_SetTouchPointStates(QTouchEvent* self, int aTouchPointStates) {
	self->setTouchPointStates(static_cast<Qt::TouchPointStates>(aTouchPointStates));
}

void QTouchEvent_SetTouchPoints(QTouchEvent* self, QTouchEvent__TouchPoint** atouchPoints, size_t atouchPoints_len) {
	QList<QTouchEvent::TouchPoint> atouchPoints_QList;
	atouchPoints_QList.reserve(atouchPoints_len);
	for(size_t i = 0; i < atouchPoints_len; ++i) {
		atouchPoints_QList.push_back(*(atouchPoints[i]));
	}
	self->setTouchPoints(atouchPoints_QList);
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

QPointF* QScrollPrepareEvent_StartPos(const QScrollPrepareEvent* self) {
	QPointF ret = self->startPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QSizeF* QScrollPrepareEvent_ViewportSize(const QScrollPrepareEvent* self) {
	QSizeF ret = self->viewportSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

QRectF* QScrollPrepareEvent_ContentPosRange(const QScrollPrepareEvent* self) {
	QRectF ret = self->contentPosRange();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QPointF* QScrollPrepareEvent_ContentPos(const QScrollPrepareEvent* self) {
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

QScrollEvent* QScrollEvent_new(QPointF* contentPos, QPointF* overshoot, uintptr_t scrollState) {
	return new QScrollEvent(*contentPos, *overshoot, static_cast<QScrollEvent::ScrollState>(scrollState));
}

QScrollEvent* QScrollEvent_new2(QScrollEvent* param1) {
	return new QScrollEvent(*param1);
}

QPointF* QScrollEvent_ContentPos(const QScrollEvent* self) {
	QPointF ret = self->contentPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QPointF* QScrollEvent_OvershootDistance(const QScrollEvent* self) {
	QPointF ret = self->overshootDistance();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

uintptr_t QScrollEvent_ScrollState(const QScrollEvent* self) {
	QScrollEvent::ScrollState ret = self->scrollState();
	return static_cast<uintptr_t>(ret);
}

void QScrollEvent_Delete(QScrollEvent* self) {
	delete self;
}

QScreenOrientationChangeEvent* QScreenOrientationChangeEvent_new(QScreen* screen, uintptr_t orientation) {
	return new QScreenOrientationChangeEvent(screen, static_cast<Qt::ScreenOrientation>(orientation));
}

QScreenOrientationChangeEvent* QScreenOrientationChangeEvent_new2(QScreenOrientationChangeEvent* param1) {
	return new QScreenOrientationChangeEvent(*param1);
}

QScreen* QScreenOrientationChangeEvent_Screen(const QScreenOrientationChangeEvent* self) {
	return self->screen();
}

uintptr_t QScreenOrientationChangeEvent_Orientation(const QScreenOrientationChangeEvent* self) {
	Qt::ScreenOrientation ret = self->orientation();
	return static_cast<uintptr_t>(ret);
}

void QScreenOrientationChangeEvent_Delete(QScreenOrientationChangeEvent* self) {
	delete self;
}

QApplicationStateChangeEvent* QApplicationStateChangeEvent_new(uintptr_t state) {
	return new QApplicationStateChangeEvent(static_cast<Qt::ApplicationState>(state));
}

QApplicationStateChangeEvent* QApplicationStateChangeEvent_new2(QApplicationStateChangeEvent* param1) {
	return new QApplicationStateChangeEvent(*param1);
}

uintptr_t QApplicationStateChangeEvent_ApplicationState(const QApplicationStateChangeEvent* self) {
	Qt::ApplicationState ret = self->applicationState();
	return static_cast<uintptr_t>(ret);
}

void QApplicationStateChangeEvent_Delete(QApplicationStateChangeEvent* self) {
	delete self;
}

QInputMethodEvent__Attribute* QInputMethodEvent__Attribute_new(uintptr_t typ, int s, int l, QVariant* val) {
	return new QInputMethodEvent::Attribute(static_cast<QInputMethodEvent::AttributeType>(typ), static_cast<int>(s), static_cast<int>(l), *val);
}

QInputMethodEvent__Attribute* QInputMethodEvent__Attribute_new2(uintptr_t typ, int s, int l) {
	return new QInputMethodEvent::Attribute(static_cast<QInputMethodEvent::AttributeType>(typ), static_cast<int>(s), static_cast<int>(l));
}

QInputMethodEvent__Attribute* QInputMethodEvent__Attribute_new3(QInputMethodEvent__Attribute* param1) {
	return new QInputMethodEvent::Attribute(*param1);
}

void QInputMethodEvent__Attribute_Delete(QInputMethodEvent__Attribute* self) {
	delete self;
}

QTouchEvent__TouchPoint* QTouchEvent__TouchPoint_new() {
	return new QTouchEvent::TouchPoint();
}

QTouchEvent__TouchPoint* QTouchEvent__TouchPoint_new2(QTouchEvent__TouchPoint* other) {
	return new QTouchEvent::TouchPoint(*other);
}

QTouchEvent__TouchPoint* QTouchEvent__TouchPoint_new3(int id) {
	return new QTouchEvent::TouchPoint(static_cast<int>(id));
}

void QTouchEvent__TouchPoint_Swap(QTouchEvent__TouchPoint* self, QTouchEvent__TouchPoint* other) {
	self->swap(*other);
}

int QTouchEvent__TouchPoint_Id(const QTouchEvent__TouchPoint* self) {
	return self->id();
}

QPointingDeviceUniqueId* QTouchEvent__TouchPoint_UniqueId(const QTouchEvent__TouchPoint* self) {
	QPointingDeviceUniqueId ret = self->uniqueId();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointingDeviceUniqueId*>(new QPointingDeviceUniqueId(ret));
}

uintptr_t QTouchEvent__TouchPoint_State(const QTouchEvent__TouchPoint* self) {
	Qt::TouchPointState ret = self->state();
	return static_cast<uintptr_t>(ret);
}

QPointF* QTouchEvent__TouchPoint_Pos(const QTouchEvent__TouchPoint* self) {
	QPointF ret = self->pos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QPointF* QTouchEvent__TouchPoint_StartPos(const QTouchEvent__TouchPoint* self) {
	QPointF ret = self->startPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QPointF* QTouchEvent__TouchPoint_LastPos(const QTouchEvent__TouchPoint* self) {
	QPointF ret = self->lastPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QPointF* QTouchEvent__TouchPoint_ScenePos(const QTouchEvent__TouchPoint* self) {
	QPointF ret = self->scenePos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QPointF* QTouchEvent__TouchPoint_StartScenePos(const QTouchEvent__TouchPoint* self) {
	QPointF ret = self->startScenePos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QPointF* QTouchEvent__TouchPoint_LastScenePos(const QTouchEvent__TouchPoint* self) {
	QPointF ret = self->lastScenePos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QPointF* QTouchEvent__TouchPoint_ScreenPos(const QTouchEvent__TouchPoint* self) {
	QPointF ret = self->screenPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QPointF* QTouchEvent__TouchPoint_StartScreenPos(const QTouchEvent__TouchPoint* self) {
	QPointF ret = self->startScreenPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QPointF* QTouchEvent__TouchPoint_LastScreenPos(const QTouchEvent__TouchPoint* self) {
	QPointF ret = self->lastScreenPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QPointF* QTouchEvent__TouchPoint_NormalizedPos(const QTouchEvent__TouchPoint* self) {
	QPointF ret = self->normalizedPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QPointF* QTouchEvent__TouchPoint_StartNormalizedPos(const QTouchEvent__TouchPoint* self) {
	QPointF ret = self->startNormalizedPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QPointF* QTouchEvent__TouchPoint_LastNormalizedPos(const QTouchEvent__TouchPoint* self) {
	QPointF ret = self->lastNormalizedPos();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QRectF* QTouchEvent__TouchPoint_Rect(const QTouchEvent__TouchPoint* self) {
	QRectF ret = self->rect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QRectF* QTouchEvent__TouchPoint_SceneRect(const QTouchEvent__TouchPoint* self) {
	QRectF ret = self->sceneRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QRectF* QTouchEvent__TouchPoint_ScreenRect(const QTouchEvent__TouchPoint* self) {
	QRectF ret = self->screenRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

void QTouchEvent__TouchPoint_SetRect(QTouchEvent__TouchPoint* self, QRectF* rect) {
	self->setRect(*rect);
}

void QTouchEvent__TouchPoint_SetSceneRect(QTouchEvent__TouchPoint* self, QRectF* sceneRect) {
	self->setSceneRect(*sceneRect);
}

void QTouchEvent__TouchPoint_SetScreenRect(QTouchEvent__TouchPoint* self, QRectF* screenRect) {
	self->setScreenRect(*screenRect);
}

double QTouchEvent__TouchPoint_Pressure(const QTouchEvent__TouchPoint* self) {
	return self->pressure();
}

double QTouchEvent__TouchPoint_Rotation(const QTouchEvent__TouchPoint* self) {
	return self->rotation();
}

QSizeF* QTouchEvent__TouchPoint_EllipseDiameters(const QTouchEvent__TouchPoint* self) {
	QSizeF ret = self->ellipseDiameters();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

QVector2D* QTouchEvent__TouchPoint_Velocity(const QTouchEvent__TouchPoint* self) {
	QVector2D ret = self->velocity();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVector2D*>(new QVector2D(ret));
}

int QTouchEvent__TouchPoint_Flags(const QTouchEvent__TouchPoint* self) {
	QTouchEvent::TouchPoint::InfoFlags ret = self->flags();
	return static_cast<int>(ret);
}

void QTouchEvent__TouchPoint_RawScreenPositions(const QTouchEvent__TouchPoint* self, QPointF*** _out, size_t* _out_len) {
	QVector<QPointF> ret = self->rawScreenPositions();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QPointF** __out = static_cast<QPointF**>(malloc(sizeof(QPointF**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QPointF(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QTouchEvent__TouchPoint_SetId(QTouchEvent__TouchPoint* self, int id) {
	self->setId(static_cast<int>(id));
}

void QTouchEvent__TouchPoint_SetUniqueId(QTouchEvent__TouchPoint* self, long long uid) {
	self->setUniqueId(static_cast<qint64>(uid));
}

void QTouchEvent__TouchPoint_SetState(QTouchEvent__TouchPoint* self, int state) {
	self->setState(static_cast<Qt::TouchPointStates>(state));
}

void QTouchEvent__TouchPoint_SetPos(QTouchEvent__TouchPoint* self, QPointF* pos) {
	self->setPos(*pos);
}

void QTouchEvent__TouchPoint_SetScenePos(QTouchEvent__TouchPoint* self, QPointF* scenePos) {
	self->setScenePos(*scenePos);
}

void QTouchEvent__TouchPoint_SetScreenPos(QTouchEvent__TouchPoint* self, QPointF* screenPos) {
	self->setScreenPos(*screenPos);
}

void QTouchEvent__TouchPoint_SetNormalizedPos(QTouchEvent__TouchPoint* self, QPointF* normalizedPos) {
	self->setNormalizedPos(*normalizedPos);
}

void QTouchEvent__TouchPoint_SetStartPos(QTouchEvent__TouchPoint* self, QPointF* startPos) {
	self->setStartPos(*startPos);
}

void QTouchEvent__TouchPoint_SetStartScenePos(QTouchEvent__TouchPoint* self, QPointF* startScenePos) {
	self->setStartScenePos(*startScenePos);
}

void QTouchEvent__TouchPoint_SetStartScreenPos(QTouchEvent__TouchPoint* self, QPointF* startScreenPos) {
	self->setStartScreenPos(*startScreenPos);
}

void QTouchEvent__TouchPoint_SetStartNormalizedPos(QTouchEvent__TouchPoint* self, QPointF* startNormalizedPos) {
	self->setStartNormalizedPos(*startNormalizedPos);
}

void QTouchEvent__TouchPoint_SetLastPos(QTouchEvent__TouchPoint* self, QPointF* lastPos) {
	self->setLastPos(*lastPos);
}

void QTouchEvent__TouchPoint_SetLastScenePos(QTouchEvent__TouchPoint* self, QPointF* lastScenePos) {
	self->setLastScenePos(*lastScenePos);
}

void QTouchEvent__TouchPoint_SetLastScreenPos(QTouchEvent__TouchPoint* self, QPointF* lastScreenPos) {
	self->setLastScreenPos(*lastScreenPos);
}

void QTouchEvent__TouchPoint_SetLastNormalizedPos(QTouchEvent__TouchPoint* self, QPointF* lastNormalizedPos) {
	self->setLastNormalizedPos(*lastNormalizedPos);
}

void QTouchEvent__TouchPoint_SetPressure(QTouchEvent__TouchPoint* self, double pressure) {
	self->setPressure(static_cast<qreal>(pressure));
}

void QTouchEvent__TouchPoint_SetRotation(QTouchEvent__TouchPoint* self, double angle) {
	self->setRotation(static_cast<qreal>(angle));
}

void QTouchEvent__TouchPoint_SetEllipseDiameters(QTouchEvent__TouchPoint* self, QSizeF* dia) {
	self->setEllipseDiameters(*dia);
}

void QTouchEvent__TouchPoint_SetVelocity(QTouchEvent__TouchPoint* self, QVector2D* v) {
	self->setVelocity(*v);
}

void QTouchEvent__TouchPoint_SetFlags(QTouchEvent__TouchPoint* self, int flags) {
	self->setFlags(static_cast<QTouchEvent::TouchPoint::InfoFlags>(flags));
}

void QTouchEvent__TouchPoint_SetRawScreenPositions(QTouchEvent__TouchPoint* self, QPointF** positions, size_t positions_len) {
	QVector<QPointF> positions_QList;
	positions_QList.reserve(positions_len);
	for(size_t i = 0; i < positions_len; ++i) {
		positions_QList.push_back(*(positions[i]));
	}
	self->setRawScreenPositions(positions_QList);
}

void QTouchEvent__TouchPoint_Delete(QTouchEvent__TouchPoint* self) {
	delete self;
}

