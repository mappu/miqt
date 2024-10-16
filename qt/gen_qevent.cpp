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
#include <qevent.h>
#include "gen_qevent.h"
#include "_cgo_export.h"

QInputEvent* QInputEvent_new(int typeVal) {
	return new QInputEvent(static_cast<QEvent::Type>(typeVal));
}

QInputEvent* QInputEvent_new2(QInputEvent* param1) {
	return new QInputEvent(*param1);
}

QInputEvent* QInputEvent_new3(int typeVal, int modifiers) {
	return new QInputEvent(static_cast<QEvent::Type>(typeVal), static_cast<Qt::KeyboardModifiers>(modifiers));
}

int QInputEvent_Modifiers(const QInputEvent* self) {
	Qt::KeyboardModifiers _ret = self->modifiers();
	return static_cast<int>(_ret);
}

void QInputEvent_SetModifiers(QInputEvent* self, int amodifiers) {
	self->setModifiers(static_cast<Qt::KeyboardModifiers>(amodifiers));
}

unsigned long QInputEvent_Timestamp(const QInputEvent* self) {
	ulong _ret = self->timestamp();
	return static_cast<unsigned long>(_ret);
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
	return new QPoint(self->pos());
}

QPoint* QEnterEvent_GlobalPos(const QEnterEvent* self) {
	return new QPoint(self->globalPos());
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
	const QPointF& _ret = self->localPos();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&_ret);
}

QPointF* QEnterEvent_WindowPos(const QEnterEvent* self) {
	const QPointF& _ret = self->windowPos();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&_ret);
}

QPointF* QEnterEvent_ScreenPos(const QEnterEvent* self) {
	const QPointF& _ret = self->screenPos();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&_ret);
}

void QEnterEvent_Delete(QEnterEvent* self) {
	delete self;
}

QMouseEvent* QMouseEvent_new(int typeVal, QPointF* localPos, int button, int buttons, int modifiers) {
	return new QMouseEvent(static_cast<QEvent::Type>(typeVal), *localPos, static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
}

QMouseEvent* QMouseEvent_new2(int typeVal, QPointF* localPos, QPointF* screenPos, int button, int buttons, int modifiers) {
	return new QMouseEvent(static_cast<QEvent::Type>(typeVal), *localPos, *screenPos, static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
}

QMouseEvent* QMouseEvent_new3(int typeVal, QPointF* localPos, QPointF* windowPos, QPointF* screenPos, int button, int buttons, int modifiers) {
	return new QMouseEvent(static_cast<QEvent::Type>(typeVal), *localPos, *windowPos, *screenPos, static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
}

QMouseEvent* QMouseEvent_new4(int typeVal, QPointF* localPos, QPointF* windowPos, QPointF* screenPos, int button, int buttons, int modifiers, int source) {
	return new QMouseEvent(static_cast<QEvent::Type>(typeVal), *localPos, *windowPos, *screenPos, static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::MouseEventSource>(source));
}

QMouseEvent* QMouseEvent_new5(QMouseEvent* param1) {
	return new QMouseEvent(*param1);
}

QPoint* QMouseEvent_Pos(const QMouseEvent* self) {
	return new QPoint(self->pos());
}

QPoint* QMouseEvent_GlobalPos(const QMouseEvent* self) {
	return new QPoint(self->globalPos());
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
	const QPointF& _ret = self->localPos();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&_ret);
}

QPointF* QMouseEvent_WindowPos(const QMouseEvent* self) {
	const QPointF& _ret = self->windowPos();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&_ret);
}

QPointF* QMouseEvent_ScreenPos(const QMouseEvent* self) {
	const QPointF& _ret = self->screenPos();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&_ret);
}

int QMouseEvent_Button(const QMouseEvent* self) {
	Qt::MouseButton _ret = self->button();
	return static_cast<int>(_ret);
}

int QMouseEvent_Buttons(const QMouseEvent* self) {
	Qt::MouseButtons _ret = self->buttons();
	return static_cast<int>(_ret);
}

void QMouseEvent_SetLocalPos(QMouseEvent* self, QPointF* localPosition) {
	self->setLocalPos(*localPosition);
}

int QMouseEvent_Source(const QMouseEvent* self) {
	Qt::MouseEventSource _ret = self->source();
	return static_cast<int>(_ret);
}

int QMouseEvent_Flags(const QMouseEvent* self) {
	Qt::MouseEventFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

void QMouseEvent_Delete(QMouseEvent* self) {
	delete self;
}

QHoverEvent* QHoverEvent_new(int typeVal, QPointF* pos, QPointF* oldPos) {
	return new QHoverEvent(static_cast<QEvent::Type>(typeVal), *pos, *oldPos);
}

QHoverEvent* QHoverEvent_new2(QHoverEvent* param1) {
	return new QHoverEvent(*param1);
}

QHoverEvent* QHoverEvent_new3(int typeVal, QPointF* pos, QPointF* oldPos, int modifiers) {
	return new QHoverEvent(static_cast<QEvent::Type>(typeVal), *pos, *oldPos, static_cast<Qt::KeyboardModifiers>(modifiers));
}

QPoint* QHoverEvent_Pos(const QHoverEvent* self) {
	return new QPoint(self->pos());
}

QPoint* QHoverEvent_OldPos(const QHoverEvent* self) {
	return new QPoint(self->oldPos());
}

QPointF* QHoverEvent_PosF(const QHoverEvent* self) {
	const QPointF& _ret = self->posF();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&_ret);
}

QPointF* QHoverEvent_OldPosF(const QHoverEvent* self) {
	const QPointF& _ret = self->oldPosF();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&_ret);
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

QWheelEvent* QWheelEvent_new3(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int qt4Delta, int qt4Orientation, int buttons, int modifiers) {
	return new QWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, static_cast<int>(qt4Delta), static_cast<Qt::Orientation>(qt4Orientation), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
}

QWheelEvent* QWheelEvent_new4(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int qt4Delta, int qt4Orientation, int buttons, int modifiers, int phase) {
	return new QWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, static_cast<int>(qt4Delta), static_cast<Qt::Orientation>(qt4Orientation), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::ScrollPhase>(phase));
}

QWheelEvent* QWheelEvent_new5(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int qt4Delta, int qt4Orientation, int buttons, int modifiers, int phase, int source) {
	return new QWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, static_cast<int>(qt4Delta), static_cast<Qt::Orientation>(qt4Orientation), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::ScrollPhase>(phase), static_cast<Qt::MouseEventSource>(source));
}

QWheelEvent* QWheelEvent_new6(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int qt4Delta, int qt4Orientation, int buttons, int modifiers, int phase, int source, bool inverted) {
	return new QWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, static_cast<int>(qt4Delta), static_cast<Qt::Orientation>(qt4Orientation), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::ScrollPhase>(phase), static_cast<Qt::MouseEventSource>(source), inverted);
}

QWheelEvent* QWheelEvent_new7(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int buttons, int modifiers, int phase, bool inverted) {
	return new QWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::ScrollPhase>(phase), inverted);
}

QWheelEvent* QWheelEvent_new8(QWheelEvent* param1) {
	return new QWheelEvent(*param1);
}

QWheelEvent* QWheelEvent_new9(QPointF* pos, int delta, int buttons, int modifiers, int orient) {
	return new QWheelEvent(*pos, static_cast<int>(delta), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::Orientation>(orient));
}

QWheelEvent* QWheelEvent_new10(QPointF* pos, QPointF* globalPos, int delta, int buttons, int modifiers, int orient) {
	return new QWheelEvent(*pos, *globalPos, static_cast<int>(delta), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::Orientation>(orient));
}

QWheelEvent* QWheelEvent_new11(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int buttons, int modifiers, int phase, bool inverted, int source) {
	return new QWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::ScrollPhase>(phase), inverted, static_cast<Qt::MouseEventSource>(source));
}

QPoint* QWheelEvent_PixelDelta(const QWheelEvent* self) {
	return new QPoint(self->pixelDelta());
}

QPoint* QWheelEvent_AngleDelta(const QWheelEvent* self) {
	return new QPoint(self->angleDelta());
}

int QWheelEvent_Delta(const QWheelEvent* self) {
	return self->delta();
}

int QWheelEvent_Orientation(const QWheelEvent* self) {
	Qt::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

QPoint* QWheelEvent_Pos(const QWheelEvent* self) {
	return new QPoint(self->pos());
}

QPoint* QWheelEvent_GlobalPos(const QWheelEvent* self) {
	return new QPoint(self->globalPos());
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
	const QPointF& _ret = self->posF();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&_ret);
}

QPointF* QWheelEvent_GlobalPosF(const QWheelEvent* self) {
	const QPointF& _ret = self->globalPosF();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&_ret);
}

QPointF* QWheelEvent_Position(const QWheelEvent* self) {
	return new QPointF(self->position());
}

QPointF* QWheelEvent_GlobalPosition(const QWheelEvent* self) {
	return new QPointF(self->globalPosition());
}

int QWheelEvent_Buttons(const QWheelEvent* self) {
	Qt::MouseButtons _ret = self->buttons();
	return static_cast<int>(_ret);
}

int QWheelEvent_Phase(const QWheelEvent* self) {
	Qt::ScrollPhase _ret = self->phase();
	return static_cast<int>(_ret);
}

bool QWheelEvent_Inverted(const QWheelEvent* self) {
	return self->inverted();
}

int QWheelEvent_Source(const QWheelEvent* self) {
	Qt::MouseEventSource _ret = self->source();
	return static_cast<int>(_ret);
}

void QWheelEvent_Delete(QWheelEvent* self) {
	delete self;
}

QTabletEvent* QTabletEvent_new(int t, QPointF* pos, QPointF* globalPos, int device, int pointerType, double pressure, int xTilt, int yTilt, double tangentialPressure, double rotation, int z, int keyState, long long uniqueID) {
	return new QTabletEvent(static_cast<QEvent::Type>(t), *pos, *globalPos, static_cast<int>(device), static_cast<int>(pointerType), static_cast<qreal>(pressure), static_cast<int>(xTilt), static_cast<int>(yTilt), static_cast<qreal>(tangentialPressure), static_cast<qreal>(rotation), static_cast<int>(z), static_cast<Qt::KeyboardModifiers>(keyState), static_cast<qint64>(uniqueID));
}

QTabletEvent* QTabletEvent_new2(int t, QPointF* pos, QPointF* globalPos, int device, int pointerType, double pressure, int xTilt, int yTilt, double tangentialPressure, double rotation, int z, int keyState, long long uniqueID, int button, int buttons) {
	return new QTabletEvent(static_cast<QEvent::Type>(t), *pos, *globalPos, static_cast<int>(device), static_cast<int>(pointerType), static_cast<qreal>(pressure), static_cast<int>(xTilt), static_cast<int>(yTilt), static_cast<qreal>(tangentialPressure), static_cast<qreal>(rotation), static_cast<int>(z), static_cast<Qt::KeyboardModifiers>(keyState), static_cast<qint64>(uniqueID), static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons));
}

QTabletEvent* QTabletEvent_new3(QTabletEvent* param1) {
	return new QTabletEvent(*param1);
}

QPoint* QTabletEvent_Pos(const QTabletEvent* self) {
	return new QPoint(self->pos());
}

QPoint* QTabletEvent_GlobalPos(const QTabletEvent* self) {
	return new QPoint(self->globalPos());
}

QPointF* QTabletEvent_PosF(const QTabletEvent* self) {
	const QPointF& _ret = self->posF();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&_ret);
}

QPointF* QTabletEvent_GlobalPosF(const QTabletEvent* self) {
	const QPointF& _ret = self->globalPosF();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&_ret);
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
	qreal _ret = self->hiResGlobalX();
	return static_cast<double>(_ret);
}

double QTabletEvent_HiResGlobalY(const QTabletEvent* self) {
	qreal _ret = self->hiResGlobalY();
	return static_cast<double>(_ret);
}

int QTabletEvent_Device(const QTabletEvent* self) {
	QTabletEvent::TabletDevice _ret = self->device();
	return static_cast<int>(_ret);
}

int QTabletEvent_DeviceType(const QTabletEvent* self) {
	QTabletEvent::TabletDevice _ret = self->deviceType();
	return static_cast<int>(_ret);
}

int QTabletEvent_PointerType(const QTabletEvent* self) {
	QTabletEvent::PointerType _ret = self->pointerType();
	return static_cast<int>(_ret);
}

long long QTabletEvent_UniqueId(const QTabletEvent* self) {
	qint64 _ret = self->uniqueId();
	return static_cast<long long>(_ret);
}

double QTabletEvent_Pressure(const QTabletEvent* self) {
	qreal _ret = self->pressure();
	return static_cast<double>(_ret);
}

int QTabletEvent_Z(const QTabletEvent* self) {
	return self->z();
}

double QTabletEvent_TangentialPressure(const QTabletEvent* self) {
	qreal _ret = self->tangentialPressure();
	return static_cast<double>(_ret);
}

double QTabletEvent_Rotation(const QTabletEvent* self) {
	qreal _ret = self->rotation();
	return static_cast<double>(_ret);
}

int QTabletEvent_XTilt(const QTabletEvent* self) {
	return self->xTilt();
}

int QTabletEvent_YTilt(const QTabletEvent* self) {
	return self->yTilt();
}

int QTabletEvent_Button(const QTabletEvent* self) {
	Qt::MouseButton _ret = self->button();
	return static_cast<int>(_ret);
}

int QTabletEvent_Buttons(const QTabletEvent* self) {
	Qt::MouseButtons _ret = self->buttons();
	return static_cast<int>(_ret);
}

void QTabletEvent_Delete(QTabletEvent* self) {
	delete self;
}

QNativeGestureEvent* QNativeGestureEvent_new(int typeVal, QPointF* localPos, QPointF* windowPos, QPointF* screenPos, double value, unsigned long sequenceId, unsigned long long intArgument) {
	return new QNativeGestureEvent(static_cast<Qt::NativeGestureType>(typeVal), *localPos, *windowPos, *screenPos, static_cast<qreal>(value), static_cast<ulong>(sequenceId), static_cast<quint64>(intArgument));
}

QNativeGestureEvent* QNativeGestureEvent_new2(int typeVal, QTouchDevice* dev, QPointF* localPos, QPointF* windowPos, QPointF* screenPos, double value, unsigned long sequenceId, unsigned long long intArgument) {
	return new QNativeGestureEvent(static_cast<Qt::NativeGestureType>(typeVal), dev, *localPos, *windowPos, *screenPos, static_cast<qreal>(value), static_cast<ulong>(sequenceId), static_cast<quint64>(intArgument));
}

QNativeGestureEvent* QNativeGestureEvent_new3(QNativeGestureEvent* param1) {
	return new QNativeGestureEvent(*param1);
}

int QNativeGestureEvent_GestureType(const QNativeGestureEvent* self) {
	Qt::NativeGestureType _ret = self->gestureType();
	return static_cast<int>(_ret);
}

double QNativeGestureEvent_Value(const QNativeGestureEvent* self) {
	qreal _ret = self->value();
	return static_cast<double>(_ret);
}

QPoint* QNativeGestureEvent_Pos(const QNativeGestureEvent* self) {
	return new QPoint(self->pos());
}

QPoint* QNativeGestureEvent_GlobalPos(const QNativeGestureEvent* self) {
	return new QPoint(self->globalPos());
}

QPointF* QNativeGestureEvent_LocalPos(const QNativeGestureEvent* self) {
	const QPointF& _ret = self->localPos();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&_ret);
}

QPointF* QNativeGestureEvent_WindowPos(const QNativeGestureEvent* self) {
	const QPointF& _ret = self->windowPos();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&_ret);
}

QPointF* QNativeGestureEvent_ScreenPos(const QNativeGestureEvent* self) {
	const QPointF& _ret = self->screenPos();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&_ret);
}

QTouchDevice* QNativeGestureEvent_Device(const QNativeGestureEvent* self) {
	return (QTouchDevice*) self->device();
}

void QNativeGestureEvent_Delete(QNativeGestureEvent* self) {
	delete self;
}

QKeyEvent* QKeyEvent_new(int typeVal, int key, int modifiers) {
	return new QKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers));
}

QKeyEvent* QKeyEvent_new2(int typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers) {
	return new QKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<quint32>(nativeScanCode), static_cast<quint32>(nativeVirtualKey), static_cast<quint32>(nativeModifiers));
}

QKeyEvent* QKeyEvent_new3(QKeyEvent* param1) {
	return new QKeyEvent(*param1);
}

QKeyEvent* QKeyEvent_new4(int typeVal, int key, int modifiers, struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	return new QKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), text_QString);
}

QKeyEvent* QKeyEvent_new5(int typeVal, int key, int modifiers, struct miqt_string* text, bool autorep) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	return new QKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), text_QString, autorep);
}

QKeyEvent* QKeyEvent_new6(int typeVal, int key, int modifiers, struct miqt_string* text, bool autorep, uint16_t count) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	return new QKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), text_QString, autorep, static_cast<ushort>(count));
}

QKeyEvent* QKeyEvent_new7(int typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, struct miqt_string* text) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	return new QKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<quint32>(nativeScanCode), static_cast<quint32>(nativeVirtualKey), static_cast<quint32>(nativeModifiers), text_QString);
}

QKeyEvent* QKeyEvent_new8(int typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, struct miqt_string* text, bool autorep) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	return new QKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<quint32>(nativeScanCode), static_cast<quint32>(nativeVirtualKey), static_cast<quint32>(nativeModifiers), text_QString, autorep);
}

QKeyEvent* QKeyEvent_new9(int typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, struct miqt_string* text, bool autorep, uint16_t count) {
	QString text_QString = QString::fromUtf8(&text->data, text->len);
	return new QKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<quint32>(nativeScanCode), static_cast<quint32>(nativeVirtualKey), static_cast<quint32>(nativeModifiers), text_QString, autorep, static_cast<ushort>(count));
}

int QKeyEvent_Key(const QKeyEvent* self) {
	return self->key();
}

bool QKeyEvent_Matches(const QKeyEvent* self, int key) {
	return self->matches(static_cast<QKeySequence::StandardKey>(key));
}

int QKeyEvent_Modifiers(const QKeyEvent* self) {
	Qt::KeyboardModifiers _ret = self->modifiers();
	return static_cast<int>(_ret);
}

struct miqt_string* QKeyEvent_Text(const QKeyEvent* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

bool QKeyEvent_IsAutoRepeat(const QKeyEvent* self) {
	return self->isAutoRepeat();
}

int QKeyEvent_Count(const QKeyEvent* self) {
	return self->count();
}

unsigned int QKeyEvent_NativeScanCode(const QKeyEvent* self) {
	quint32 _ret = self->nativeScanCode();
	return static_cast<unsigned int>(_ret);
}

unsigned int QKeyEvent_NativeVirtualKey(const QKeyEvent* self) {
	quint32 _ret = self->nativeVirtualKey();
	return static_cast<unsigned int>(_ret);
}

unsigned int QKeyEvent_NativeModifiers(const QKeyEvent* self) {
	quint32 _ret = self->nativeModifiers();
	return static_cast<unsigned int>(_ret);
}

void QKeyEvent_Delete(QKeyEvent* self) {
	delete self;
}

QFocusEvent* QFocusEvent_new(int typeVal) {
	return new QFocusEvent(static_cast<QEvent::Type>(typeVal));
}

QFocusEvent* QFocusEvent_new2(QFocusEvent* param1) {
	return new QFocusEvent(*param1);
}

QFocusEvent* QFocusEvent_new3(int typeVal, int reason) {
	return new QFocusEvent(static_cast<QEvent::Type>(typeVal), static_cast<Qt::FocusReason>(reason));
}

bool QFocusEvent_GotFocus(const QFocusEvent* self) {
	return self->gotFocus();
}

bool QFocusEvent_LostFocus(const QFocusEvent* self) {
	return self->lostFocus();
}

int QFocusEvent_Reason(const QFocusEvent* self) {
	Qt::FocusReason _ret = self->reason();
	return static_cast<int>(_ret);
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
	const QRect& _ret = self->rect();
	// Cast returned reference into pointer
	return const_cast<QRect*>(&_ret);
}

QRegion* QPaintEvent_Region(const QPaintEvent* self) {
	const QRegion& _ret = self->region();
	// Cast returned reference into pointer
	return const_cast<QRegion*>(&_ret);
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
	const QPoint& _ret = self->pos();
	// Cast returned reference into pointer
	return const_cast<QPoint*>(&_ret);
}

QPoint* QMoveEvent_OldPos(const QMoveEvent* self) {
	const QPoint& _ret = self->oldPos();
	// Cast returned reference into pointer
	return const_cast<QPoint*>(&_ret);
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
	const QRegion& _ret = self->region();
	// Cast returned reference into pointer
	return const_cast<QRegion*>(&_ret);
}

void QExposeEvent_Delete(QExposeEvent* self) {
	delete self;
}

QPlatformSurfaceEvent* QPlatformSurfaceEvent_new(int surfaceEventType) {
	return new QPlatformSurfaceEvent(static_cast<QPlatformSurfaceEvent::SurfaceEventType>(surfaceEventType));
}

QPlatformSurfaceEvent* QPlatformSurfaceEvent_new2(QPlatformSurfaceEvent* param1) {
	return new QPlatformSurfaceEvent(*param1);
}

int QPlatformSurfaceEvent_SurfaceEventType(const QPlatformSurfaceEvent* self) {
	QPlatformSurfaceEvent::SurfaceEventType _ret = self->surfaceEventType();
	return static_cast<int>(_ret);
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
	const QSize& _ret = self->size();
	// Cast returned reference into pointer
	return const_cast<QSize*>(&_ret);
}

QSize* QResizeEvent_OldSize(const QResizeEvent* self) {
	const QSize& _ret = self->oldSize();
	// Cast returned reference into pointer
	return const_cast<QSize*>(&_ret);
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

QContextMenuEvent* QContextMenuEvent_new(int reason, QPoint* pos, QPoint* globalPos, int modifiers) {
	return new QContextMenuEvent(static_cast<QContextMenuEvent::Reason>(reason), *pos, *globalPos, static_cast<Qt::KeyboardModifiers>(modifiers));
}

QContextMenuEvent* QContextMenuEvent_new2(int reason, QPoint* pos, QPoint* globalPos) {
	return new QContextMenuEvent(static_cast<QContextMenuEvent::Reason>(reason), *pos, *globalPos);
}

QContextMenuEvent* QContextMenuEvent_new3(int reason, QPoint* pos) {
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
	const QPoint& _ret = self->pos();
	// Cast returned reference into pointer
	return const_cast<QPoint*>(&_ret);
}

QPoint* QContextMenuEvent_GlobalPos(const QContextMenuEvent* self) {
	const QPoint& _ret = self->globalPos();
	// Cast returned reference into pointer
	return const_cast<QPoint*>(&_ret);
}

int QContextMenuEvent_Reason(const QContextMenuEvent* self) {
	QContextMenuEvent::Reason _ret = self->reason();
	return static_cast<int>(_ret);
}

void QContextMenuEvent_Delete(QContextMenuEvent* self) {
	delete self;
}

QInputMethodEvent* QInputMethodEvent_new() {
	return new QInputMethodEvent();
}

QInputMethodEvent* QInputMethodEvent_new2(struct miqt_string* preeditText, struct miqt_array* /* of QInputMethodEvent__Attribute* */ attributes) {
	QString preeditText_QString = QString::fromUtf8(&preeditText->data, preeditText->len);
	QList<QInputMethodEvent::Attribute> attributes_QList;
	attributes_QList.reserve(attributes->len);
	QInputMethodEvent__Attribute** attributes_arr = static_cast<QInputMethodEvent__Attribute**>(attributes->data);
	for(size_t i = 0; i < attributes->len; ++i) {
		attributes_QList.push_back(*(attributes_arr[i]));
	}
	return new QInputMethodEvent(preeditText_QString, attributes_QList);
}

QInputMethodEvent* QInputMethodEvent_new3(QInputMethodEvent* other) {
	return new QInputMethodEvent(*other);
}

void QInputMethodEvent_SetCommitString(QInputMethodEvent* self, struct miqt_string* commitString) {
	QString commitString_QString = QString::fromUtf8(&commitString->data, commitString->len);
	self->setCommitString(commitString_QString);
}

struct miqt_array* QInputMethodEvent_Attributes(const QInputMethodEvent* self) {
	const QList<QInputMethodEvent::Attribute>& _ret = self->attributes();
	// Convert QList<> from C++ memory to manually-managed C memory
	QInputMethodEvent__Attribute** _arr = static_cast<QInputMethodEvent__Attribute**>(malloc(sizeof(QInputMethodEvent__Attribute*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QInputMethodEvent::Attribute(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string* QInputMethodEvent_PreeditString(const QInputMethodEvent* self) {
	const QString _ret = self->preeditString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QInputMethodEvent_CommitString(const QInputMethodEvent* self) {
	const QString _ret = self->commitString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

int QInputMethodEvent_ReplacementStart(const QInputMethodEvent* self) {
	return self->replacementStart();
}

int QInputMethodEvent_ReplacementLength(const QInputMethodEvent* self) {
	return self->replacementLength();
}

void QInputMethodEvent_SetCommitString2(QInputMethodEvent* self, struct miqt_string* commitString, int replaceFrom) {
	QString commitString_QString = QString::fromUtf8(&commitString->data, commitString->len);
	self->setCommitString(commitString_QString, static_cast<int>(replaceFrom));
}

void QInputMethodEvent_SetCommitString3(QInputMethodEvent* self, struct miqt_string* commitString, int replaceFrom, int replaceLength) {
	QString commitString_QString = QString::fromUtf8(&commitString->data, commitString->len);
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
	Qt::InputMethodQueries _ret = self->queries();
	return static_cast<int>(_ret);
}

void QInputMethodQueryEvent_SetValue(QInputMethodQueryEvent* self, int query, QVariant* value) {
	self->setValue(static_cast<Qt::InputMethodQuery>(query), *value);
}

QVariant* QInputMethodQueryEvent_Value(const QInputMethodQueryEvent* self, int query) {
	return new QVariant(self->value(static_cast<Qt::InputMethodQuery>(query)));
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

QDropEvent* QDropEvent_new3(QPointF* pos, int actions, QMimeData* data, int buttons, int modifiers, int typeVal) {
	return new QDropEvent(*pos, static_cast<Qt::DropActions>(actions), data, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<QEvent::Type>(typeVal));
}

QPoint* QDropEvent_Pos(const QDropEvent* self) {
	return new QPoint(self->pos());
}

QPointF* QDropEvent_PosF(const QDropEvent* self) {
	const QPointF& _ret = self->posF();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&_ret);
}

int QDropEvent_MouseButtons(const QDropEvent* self) {
	Qt::MouseButtons _ret = self->mouseButtons();
	return static_cast<int>(_ret);
}

int QDropEvent_KeyboardModifiers(const QDropEvent* self) {
	Qt::KeyboardModifiers _ret = self->keyboardModifiers();
	return static_cast<int>(_ret);
}

int QDropEvent_PossibleActions(const QDropEvent* self) {
	Qt::DropActions _ret = self->possibleActions();
	return static_cast<int>(_ret);
}

int QDropEvent_ProposedAction(const QDropEvent* self) {
	Qt::DropAction _ret = self->proposedAction();
	return static_cast<int>(_ret);
}

void QDropEvent_AcceptProposedAction(QDropEvent* self) {
	self->acceptProposedAction();
}

int QDropEvent_DropAction(const QDropEvent* self) {
	Qt::DropAction _ret = self->dropAction();
	return static_cast<int>(_ret);
}

void QDropEvent_SetDropAction(QDropEvent* self, int action) {
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

QDragMoveEvent* QDragMoveEvent_new3(QPoint* pos, int actions, QMimeData* data, int buttons, int modifiers, int typeVal) {
	return new QDragMoveEvent(*pos, static_cast<Qt::DropActions>(actions), data, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<QEvent::Type>(typeVal));
}

QRect* QDragMoveEvent_AnswerRect(const QDragMoveEvent* self) {
	return new QRect(self->answerRect());
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

QHelpEvent* QHelpEvent_new(int typeVal, QPoint* pos, QPoint* globalPos) {
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
	const QPoint& _ret = self->pos();
	// Cast returned reference into pointer
	return const_cast<QPoint*>(&_ret);
}

QPoint* QHelpEvent_GlobalPos(const QHelpEvent* self) {
	const QPoint& _ret = self->globalPos();
	// Cast returned reference into pointer
	return const_cast<QPoint*>(&_ret);
}

void QHelpEvent_Delete(QHelpEvent* self) {
	delete self;
}

QStatusTipEvent* QStatusTipEvent_new(struct miqt_string* tip) {
	QString tip_QString = QString::fromUtf8(&tip->data, tip->len);
	return new QStatusTipEvent(tip_QString);
}

QStatusTipEvent* QStatusTipEvent_new2(QStatusTipEvent* param1) {
	return new QStatusTipEvent(*param1);
}

struct miqt_string* QStatusTipEvent_Tip(const QStatusTipEvent* self) {
	QString _ret = self->tip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QStatusTipEvent_Delete(QStatusTipEvent* self) {
	delete self;
}

QWhatsThisClickedEvent* QWhatsThisClickedEvent_new(struct miqt_string* href) {
	QString href_QString = QString::fromUtf8(&href->data, href->len);
	return new QWhatsThisClickedEvent(href_QString);
}

QWhatsThisClickedEvent* QWhatsThisClickedEvent_new2(QWhatsThisClickedEvent* param1) {
	return new QWhatsThisClickedEvent(*param1);
}

struct miqt_string* QWhatsThisClickedEvent_Href(const QWhatsThisClickedEvent* self) {
	QString _ret = self->href();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
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

QFileOpenEvent* QFileOpenEvent_new(struct miqt_string* file) {
	QString file_QString = QString::fromUtf8(&file->data, file->len);
	return new QFileOpenEvent(file_QString);
}

QFileOpenEvent* QFileOpenEvent_new2(QUrl* url) {
	return new QFileOpenEvent(*url);
}

QFileOpenEvent* QFileOpenEvent_new3(QFileOpenEvent* param1) {
	return new QFileOpenEvent(*param1);
}

struct miqt_string* QFileOpenEvent_File(const QFileOpenEvent* self) {
	QString _ret = self->file();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QUrl* QFileOpenEvent_Url(const QFileOpenEvent* self) {
	return new QUrl(self->url());
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
	const QKeySequence& _ret = self->key();
	// Cast returned reference into pointer
	return const_cast<QKeySequence*>(&_ret);
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
	Qt::WindowStates _ret = self->oldState();
	return static_cast<int>(_ret);
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
	return new QPointingDeviceUniqueId(QPointingDeviceUniqueId::fromNumericId(static_cast<qint64>(id)));
}

bool QPointingDeviceUniqueId_IsValid(const QPointingDeviceUniqueId* self) {
	return self->isValid();
}

long long QPointingDeviceUniqueId_NumericId(const QPointingDeviceUniqueId* self) {
	qint64 _ret = self->numericId();
	return static_cast<long long>(_ret);
}

void QPointingDeviceUniqueId_Delete(QPointingDeviceUniqueId* self) {
	delete self;
}

QTouchEvent* QTouchEvent_new(int eventType) {
	return new QTouchEvent(static_cast<QEvent::Type>(eventType));
}

QTouchEvent* QTouchEvent_new2(QTouchEvent* param1) {
	return new QTouchEvent(*param1);
}

QTouchEvent* QTouchEvent_new3(int eventType, QTouchDevice* device) {
	return new QTouchEvent(static_cast<QEvent::Type>(eventType), device);
}

QTouchEvent* QTouchEvent_new4(int eventType, QTouchDevice* device, int modifiers) {
	return new QTouchEvent(static_cast<QEvent::Type>(eventType), device, static_cast<Qt::KeyboardModifiers>(modifiers));
}

QTouchEvent* QTouchEvent_new5(int eventType, QTouchDevice* device, int modifiers, int touchPointStates) {
	return new QTouchEvent(static_cast<QEvent::Type>(eventType), device, static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::TouchPointStates>(touchPointStates));
}

QTouchEvent* QTouchEvent_new6(int eventType, QTouchDevice* device, int modifiers, int touchPointStates, struct miqt_array* /* of QTouchEvent__TouchPoint* */ touchPoints) {
	QList<QTouchEvent::TouchPoint> touchPoints_QList;
	touchPoints_QList.reserve(touchPoints->len);
	QTouchEvent__TouchPoint** touchPoints_arr = static_cast<QTouchEvent__TouchPoint**>(touchPoints->data);
	for(size_t i = 0; i < touchPoints->len; ++i) {
		touchPoints_QList.push_back(*(touchPoints_arr[i]));
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
	Qt::TouchPointStates _ret = self->touchPointStates();
	return static_cast<int>(_ret);
}

struct miqt_array* QTouchEvent_TouchPoints(const QTouchEvent* self) {
	const QList<QTouchEvent::TouchPoint>& _ret = self->touchPoints();
	// Convert QList<> from C++ memory to manually-managed C memory
	QTouchEvent__TouchPoint** _arr = static_cast<QTouchEvent__TouchPoint**>(malloc(sizeof(QTouchEvent__TouchPoint*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QTouchEvent::TouchPoint(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
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

void QTouchEvent_SetTouchPoints(QTouchEvent* self, struct miqt_array* /* of QTouchEvent__TouchPoint* */ atouchPoints) {
	QList<QTouchEvent::TouchPoint> atouchPoints_QList;
	atouchPoints_QList.reserve(atouchPoints->len);
	QTouchEvent__TouchPoint** atouchPoints_arr = static_cast<QTouchEvent__TouchPoint**>(atouchPoints->data);
	for(size_t i = 0; i < atouchPoints->len; ++i) {
		atouchPoints_QList.push_back(*(atouchPoints_arr[i]));
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
	return new QPointF(self->startPos());
}

QSizeF* QScrollPrepareEvent_ViewportSize(const QScrollPrepareEvent* self) {
	return new QSizeF(self->viewportSize());
}

QRectF* QScrollPrepareEvent_ContentPosRange(const QScrollPrepareEvent* self) {
	return new QRectF(self->contentPosRange());
}

QPointF* QScrollPrepareEvent_ContentPos(const QScrollPrepareEvent* self) {
	return new QPointF(self->contentPos());
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

QScrollEvent* QScrollEvent_new(QPointF* contentPos, QPointF* overshoot, int scrollState) {
	return new QScrollEvent(*contentPos, *overshoot, static_cast<QScrollEvent::ScrollState>(scrollState));
}

QScrollEvent* QScrollEvent_new2(QScrollEvent* param1) {
	return new QScrollEvent(*param1);
}

QPointF* QScrollEvent_ContentPos(const QScrollEvent* self) {
	return new QPointF(self->contentPos());
}

QPointF* QScrollEvent_OvershootDistance(const QScrollEvent* self) {
	return new QPointF(self->overshootDistance());
}

int QScrollEvent_ScrollState(const QScrollEvent* self) {
	QScrollEvent::ScrollState _ret = self->scrollState();
	return static_cast<int>(_ret);
}

void QScrollEvent_Delete(QScrollEvent* self) {
	delete self;
}

QScreenOrientationChangeEvent* QScreenOrientationChangeEvent_new(QScreen* screen, int orientation) {
	return new QScreenOrientationChangeEvent(screen, static_cast<Qt::ScreenOrientation>(orientation));
}

QScreenOrientationChangeEvent* QScreenOrientationChangeEvent_new2(QScreenOrientationChangeEvent* param1) {
	return new QScreenOrientationChangeEvent(*param1);
}

QScreen* QScreenOrientationChangeEvent_Screen(const QScreenOrientationChangeEvent* self) {
	return self->screen();
}

int QScreenOrientationChangeEvent_Orientation(const QScreenOrientationChangeEvent* self) {
	Qt::ScreenOrientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

void QScreenOrientationChangeEvent_Delete(QScreenOrientationChangeEvent* self) {
	delete self;
}

QApplicationStateChangeEvent* QApplicationStateChangeEvent_new(int state) {
	return new QApplicationStateChangeEvent(static_cast<Qt::ApplicationState>(state));
}

QApplicationStateChangeEvent* QApplicationStateChangeEvent_new2(QApplicationStateChangeEvent* param1) {
	return new QApplicationStateChangeEvent(*param1);
}

int QApplicationStateChangeEvent_ApplicationState(const QApplicationStateChangeEvent* self) {
	Qt::ApplicationState _ret = self->applicationState();
	return static_cast<int>(_ret);
}

void QApplicationStateChangeEvent_Delete(QApplicationStateChangeEvent* self) {
	delete self;
}

QInputMethodEvent__Attribute* QInputMethodEvent__Attribute_new(int typ, int s, int l, QVariant* val) {
	return new QInputMethodEvent::Attribute(static_cast<QInputMethodEvent::AttributeType>(typ), static_cast<int>(s), static_cast<int>(l), *val);
}

QInputMethodEvent__Attribute* QInputMethodEvent__Attribute_new2(int typ, int s, int l) {
	return new QInputMethodEvent::Attribute(static_cast<QInputMethodEvent::AttributeType>(typ), static_cast<int>(s), static_cast<int>(l));
}

QInputMethodEvent__Attribute* QInputMethodEvent__Attribute_new3(QInputMethodEvent__Attribute* param1) {
	return new QInputMethodEvent::Attribute(*param1);
}

void QInputMethodEvent__Attribute_OperatorAssign(QInputMethodEvent__Attribute* self, QInputMethodEvent__Attribute* param1) {
	self->operator=(*param1);
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

void QTouchEvent__TouchPoint_OperatorAssign(QTouchEvent__TouchPoint* self, QTouchEvent__TouchPoint* other) {
	self->operator=(*other);
}

void QTouchEvent__TouchPoint_Swap(QTouchEvent__TouchPoint* self, QTouchEvent__TouchPoint* other) {
	self->swap(*other);
}

int QTouchEvent__TouchPoint_Id(const QTouchEvent__TouchPoint* self) {
	return self->id();
}

QPointingDeviceUniqueId* QTouchEvent__TouchPoint_UniqueId(const QTouchEvent__TouchPoint* self) {
	return new QPointingDeviceUniqueId(self->uniqueId());
}

int QTouchEvent__TouchPoint_State(const QTouchEvent__TouchPoint* self) {
	Qt::TouchPointState _ret = self->state();
	return static_cast<int>(_ret);
}

QPointF* QTouchEvent__TouchPoint_Pos(const QTouchEvent__TouchPoint* self) {
	return new QPointF(self->pos());
}

QPointF* QTouchEvent__TouchPoint_StartPos(const QTouchEvent__TouchPoint* self) {
	return new QPointF(self->startPos());
}

QPointF* QTouchEvent__TouchPoint_LastPos(const QTouchEvent__TouchPoint* self) {
	return new QPointF(self->lastPos());
}

QPointF* QTouchEvent__TouchPoint_ScenePos(const QTouchEvent__TouchPoint* self) {
	return new QPointF(self->scenePos());
}

QPointF* QTouchEvent__TouchPoint_StartScenePos(const QTouchEvent__TouchPoint* self) {
	return new QPointF(self->startScenePos());
}

QPointF* QTouchEvent__TouchPoint_LastScenePos(const QTouchEvent__TouchPoint* self) {
	return new QPointF(self->lastScenePos());
}

QPointF* QTouchEvent__TouchPoint_ScreenPos(const QTouchEvent__TouchPoint* self) {
	return new QPointF(self->screenPos());
}

QPointF* QTouchEvent__TouchPoint_StartScreenPos(const QTouchEvent__TouchPoint* self) {
	return new QPointF(self->startScreenPos());
}

QPointF* QTouchEvent__TouchPoint_LastScreenPos(const QTouchEvent__TouchPoint* self) {
	return new QPointF(self->lastScreenPos());
}

QPointF* QTouchEvent__TouchPoint_NormalizedPos(const QTouchEvent__TouchPoint* self) {
	return new QPointF(self->normalizedPos());
}

QPointF* QTouchEvent__TouchPoint_StartNormalizedPos(const QTouchEvent__TouchPoint* self) {
	return new QPointF(self->startNormalizedPos());
}

QPointF* QTouchEvent__TouchPoint_LastNormalizedPos(const QTouchEvent__TouchPoint* self) {
	return new QPointF(self->lastNormalizedPos());
}

QRectF* QTouchEvent__TouchPoint_Rect(const QTouchEvent__TouchPoint* self) {
	return new QRectF(self->rect());
}

QRectF* QTouchEvent__TouchPoint_SceneRect(const QTouchEvent__TouchPoint* self) {
	return new QRectF(self->sceneRect());
}

QRectF* QTouchEvent__TouchPoint_ScreenRect(const QTouchEvent__TouchPoint* self) {
	return new QRectF(self->screenRect());
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
	qreal _ret = self->pressure();
	return static_cast<double>(_ret);
}

double QTouchEvent__TouchPoint_Rotation(const QTouchEvent__TouchPoint* self) {
	qreal _ret = self->rotation();
	return static_cast<double>(_ret);
}

QSizeF* QTouchEvent__TouchPoint_EllipseDiameters(const QTouchEvent__TouchPoint* self) {
	return new QSizeF(self->ellipseDiameters());
}

QVector2D* QTouchEvent__TouchPoint_Velocity(const QTouchEvent__TouchPoint* self) {
	return new QVector2D(self->velocity());
}

int QTouchEvent__TouchPoint_Flags(const QTouchEvent__TouchPoint* self) {
	QTouchEvent::TouchPoint::InfoFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

struct miqt_array* QTouchEvent__TouchPoint_RawScreenPositions(const QTouchEvent__TouchPoint* self) {
	QVector<QPointF> _ret = self->rawScreenPositions();
	// Convert QList<> from C++ memory to manually-managed C memory
	QPointF** _arr = static_cast<QPointF**>(malloc(sizeof(QPointF*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QPointF(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
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

void QTouchEvent__TouchPoint_SetRawScreenPositions(QTouchEvent__TouchPoint* self, struct miqt_array* /* of QPointF* */ positions) {
	QVector<QPointF> positions_QList;
	positions_QList.reserve(positions->len);
	QPointF** positions_arr = static_cast<QPointF**>(positions->data);
	for(size_t i = 0; i < positions->len; ++i) {
		positions_QList.push_back(*(positions_arr[i]));
	}
	self->setRawScreenPositions(positions_QList);
}

void QTouchEvent__TouchPoint_Delete(QTouchEvent__TouchPoint* self) {
	delete self;
}

