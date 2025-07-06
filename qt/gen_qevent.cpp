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
#include <QEvent>
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
#include <QVector>
#include <QVector2D>
#include <QWhatsThisClickedEvent>
#include <QWheelEvent>
#include <QWindow>
#include <QWindowStateChangeEvent>
#include <qevent.h>
#include "gen_qevent.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QInputEvent* QInputEvent_new(int type) {
	return new (std::nothrow) QInputEvent(static_cast<QEvent::Type>(type));
}

QInputEvent* QInputEvent_new2(QInputEvent* param1) {
	return new (std::nothrow) QInputEvent(*param1);
}

QInputEvent* QInputEvent_new3(int type, int modifiers) {
	return new (std::nothrow) QInputEvent(static_cast<QEvent::Type>(type), static_cast<Qt::KeyboardModifiers>(modifiers));
}

void QInputEvent_virtbase(QInputEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

int QInputEvent_modifiers(const QInputEvent* self) {
	Qt::KeyboardModifiers _ret = self->modifiers();
	return static_cast<int>(_ret);
}

void QInputEvent_setModifiers(QInputEvent* self, int amodifiers) {
	self->setModifiers(static_cast<Qt::KeyboardModifiers>(amodifiers));
}

unsigned long QInputEvent_timestamp(const QInputEvent* self) {
	ulong _ret = self->timestamp();
	return static_cast<unsigned long>(_ret);
}

void QInputEvent_setTimestamp(QInputEvent* self, unsigned long atimestamp) {
	self->setTimestamp(static_cast<ulong>(atimestamp));
}

void QInputEvent_delete(QInputEvent* self) {
	delete self;
}

QEnterEvent* QEnterEvent_new(QPointF* localPos, QPointF* windowPos, QPointF* screenPos) {
	return new (std::nothrow) QEnterEvent(*localPos, *windowPos, *screenPos);
}

QEnterEvent* QEnterEvent_new2(QEnterEvent* param1) {
	return new (std::nothrow) QEnterEvent(*param1);
}

void QEnterEvent_virtbase(QEnterEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QPoint* QEnterEvent_pos(const QEnterEvent* self) {
	return new QPoint(self->pos());
}

QPoint* QEnterEvent_globalPos(const QEnterEvent* self) {
	return new QPoint(self->globalPos());
}

int QEnterEvent_x(const QEnterEvent* self) {
	return self->x();
}

int QEnterEvent_y(const QEnterEvent* self) {
	return self->y();
}

int QEnterEvent_globalX(const QEnterEvent* self) {
	return self->globalX();
}

int QEnterEvent_globalY(const QEnterEvent* self) {
	return self->globalY();
}

QPointF* QEnterEvent_localPos(const QEnterEvent* self) {
	const QPointF& _ret = self->localPos();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&_ret);
}

QPointF* QEnterEvent_windowPos(const QEnterEvent* self) {
	const QPointF& _ret = self->windowPos();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&_ret);
}

QPointF* QEnterEvent_screenPos(const QEnterEvent* self) {
	const QPointF& _ret = self->screenPos();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&_ret);
}

void QEnterEvent_delete(QEnterEvent* self) {
	delete self;
}

QMouseEvent* QMouseEvent_new(int type, QPointF* localPos, int button, int buttons, int modifiers) {
	return new (std::nothrow) QMouseEvent(static_cast<QEvent::Type>(type), *localPos, static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
}

QMouseEvent* QMouseEvent_new2(int type, QPointF* localPos, QPointF* screenPos, int button, int buttons, int modifiers) {
	return new (std::nothrow) QMouseEvent(static_cast<QEvent::Type>(type), *localPos, *screenPos, static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
}

QMouseEvent* QMouseEvent_new3(int type, QPointF* localPos, QPointF* windowPos, QPointF* screenPos, int button, int buttons, int modifiers) {
	return new (std::nothrow) QMouseEvent(static_cast<QEvent::Type>(type), *localPos, *windowPos, *screenPos, static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
}

QMouseEvent* QMouseEvent_new4(int type, QPointF* localPos, QPointF* windowPos, QPointF* screenPos, int button, int buttons, int modifiers, int source) {
	return new (std::nothrow) QMouseEvent(static_cast<QEvent::Type>(type), *localPos, *windowPos, *screenPos, static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::MouseEventSource>(source));
}

QMouseEvent* QMouseEvent_new5(QMouseEvent* param1) {
	return new (std::nothrow) QMouseEvent(*param1);
}

void QMouseEvent_virtbase(QMouseEvent* src, QInputEvent** outptr_QInputEvent) {
	*outptr_QInputEvent = static_cast<QInputEvent*>(src);
}

QPoint* QMouseEvent_pos(const QMouseEvent* self) {
	return new QPoint(self->pos());
}

QPoint* QMouseEvent_globalPos(const QMouseEvent* self) {
	return new QPoint(self->globalPos());
}

int QMouseEvent_x(const QMouseEvent* self) {
	return self->x();
}

int QMouseEvent_y(const QMouseEvent* self) {
	return self->y();
}

int QMouseEvent_globalX(const QMouseEvent* self) {
	return self->globalX();
}

int QMouseEvent_globalY(const QMouseEvent* self) {
	return self->globalY();
}

QPointF* QMouseEvent_localPos(const QMouseEvent* self) {
	const QPointF& _ret = self->localPos();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&_ret);
}

QPointF* QMouseEvent_windowPos(const QMouseEvent* self) {
	const QPointF& _ret = self->windowPos();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&_ret);
}

QPointF* QMouseEvent_screenPos(const QMouseEvent* self) {
	const QPointF& _ret = self->screenPos();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&_ret);
}

int QMouseEvent_button(const QMouseEvent* self) {
	Qt::MouseButton _ret = self->button();
	return static_cast<int>(_ret);
}

int QMouseEvent_buttons(const QMouseEvent* self) {
	Qt::MouseButtons _ret = self->buttons();
	return static_cast<int>(_ret);
}

void QMouseEvent_setLocalPos(QMouseEvent* self, QPointF* localPosition) {
	self->setLocalPos(*localPosition);
}

int QMouseEvent_source(const QMouseEvent* self) {
	Qt::MouseEventSource _ret = self->source();
	return static_cast<int>(_ret);
}

int QMouseEvent_flags(const QMouseEvent* self) {
	Qt::MouseEventFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

void QMouseEvent_delete(QMouseEvent* self) {
	delete self;
}

QHoverEvent* QHoverEvent_new(int type, QPointF* pos, QPointF* oldPos) {
	return new (std::nothrow) QHoverEvent(static_cast<QEvent::Type>(type), *pos, *oldPos);
}

QHoverEvent* QHoverEvent_new2(QHoverEvent* param1) {
	return new (std::nothrow) QHoverEvent(*param1);
}

QHoverEvent* QHoverEvent_new3(int type, QPointF* pos, QPointF* oldPos, int modifiers) {
	return new (std::nothrow) QHoverEvent(static_cast<QEvent::Type>(type), *pos, *oldPos, static_cast<Qt::KeyboardModifiers>(modifiers));
}

void QHoverEvent_virtbase(QHoverEvent* src, QInputEvent** outptr_QInputEvent) {
	*outptr_QInputEvent = static_cast<QInputEvent*>(src);
}

QPoint* QHoverEvent_pos(const QHoverEvent* self) {
	return new QPoint(self->pos());
}

QPoint* QHoverEvent_oldPos(const QHoverEvent* self) {
	return new QPoint(self->oldPos());
}

QPointF* QHoverEvent_posF(const QHoverEvent* self) {
	const QPointF& _ret = self->posF();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&_ret);
}

QPointF* QHoverEvent_oldPosF(const QHoverEvent* self) {
	const QPointF& _ret = self->oldPosF();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&_ret);
}

void QHoverEvent_delete(QHoverEvent* self) {
	delete self;
}

QWheelEvent* QWheelEvent_new(QPointF* pos, int delta, int buttons, int modifiers) {
	return new (std::nothrow) QWheelEvent(*pos, static_cast<int>(delta), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
}

QWheelEvent* QWheelEvent_new2(QPointF* pos, QPointF* globalPos, int delta, int buttons, int modifiers) {
	return new (std::nothrow) QWheelEvent(*pos, *globalPos, static_cast<int>(delta), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
}

QWheelEvent* QWheelEvent_new3(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int qt4Delta, int qt4Orientation, int buttons, int modifiers) {
	return new (std::nothrow) QWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, static_cast<int>(qt4Delta), static_cast<Qt::Orientation>(qt4Orientation), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
}

QWheelEvent* QWheelEvent_new4(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int qt4Delta, int qt4Orientation, int buttons, int modifiers, int phase) {
	return new (std::nothrow) QWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, static_cast<int>(qt4Delta), static_cast<Qt::Orientation>(qt4Orientation), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::ScrollPhase>(phase));
}

QWheelEvent* QWheelEvent_new5(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int qt4Delta, int qt4Orientation, int buttons, int modifiers, int phase, int source) {
	return new (std::nothrow) QWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, static_cast<int>(qt4Delta), static_cast<Qt::Orientation>(qt4Orientation), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::ScrollPhase>(phase), static_cast<Qt::MouseEventSource>(source));
}

QWheelEvent* QWheelEvent_new6(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int qt4Delta, int qt4Orientation, int buttons, int modifiers, int phase, int source, bool inverted) {
	return new (std::nothrow) QWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, static_cast<int>(qt4Delta), static_cast<Qt::Orientation>(qt4Orientation), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::ScrollPhase>(phase), static_cast<Qt::MouseEventSource>(source), inverted);
}

QWheelEvent* QWheelEvent_new7(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int buttons, int modifiers, int phase, bool inverted) {
	return new (std::nothrow) QWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::ScrollPhase>(phase), inverted);
}

QWheelEvent* QWheelEvent_new8(QWheelEvent* param1) {
	return new (std::nothrow) QWheelEvent(*param1);
}

QWheelEvent* QWheelEvent_new9(QPointF* pos, int delta, int buttons, int modifiers, int orient) {
	return new (std::nothrow) QWheelEvent(*pos, static_cast<int>(delta), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::Orientation>(orient));
}

QWheelEvent* QWheelEvent_new10(QPointF* pos, QPointF* globalPos, int delta, int buttons, int modifiers, int orient) {
	return new (std::nothrow) QWheelEvent(*pos, *globalPos, static_cast<int>(delta), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::Orientation>(orient));
}

QWheelEvent* QWheelEvent_new11(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int buttons, int modifiers, int phase, bool inverted, int source) {
	return new (std::nothrow) QWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::ScrollPhase>(phase), inverted, static_cast<Qt::MouseEventSource>(source));
}

void QWheelEvent_virtbase(QWheelEvent* src, QInputEvent** outptr_QInputEvent) {
	*outptr_QInputEvent = static_cast<QInputEvent*>(src);
}

QPoint* QWheelEvent_pixelDelta(const QWheelEvent* self) {
	return new QPoint(self->pixelDelta());
}

QPoint* QWheelEvent_angleDelta(const QWheelEvent* self) {
	return new QPoint(self->angleDelta());
}

int QWheelEvent_delta(const QWheelEvent* self) {
	return self->delta();
}

int QWheelEvent_orientation(const QWheelEvent* self) {
	Qt::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

QPoint* QWheelEvent_pos(const QWheelEvent* self) {
	return new QPoint(self->pos());
}

QPoint* QWheelEvent_globalPos(const QWheelEvent* self) {
	return new QPoint(self->globalPos());
}

int QWheelEvent_x(const QWheelEvent* self) {
	return self->x();
}

int QWheelEvent_y(const QWheelEvent* self) {
	return self->y();
}

int QWheelEvent_globalX(const QWheelEvent* self) {
	return self->globalX();
}

int QWheelEvent_globalY(const QWheelEvent* self) {
	return self->globalY();
}

QPointF* QWheelEvent_posF(const QWheelEvent* self) {
	const QPointF& _ret = self->posF();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&_ret);
}

QPointF* QWheelEvent_globalPosF(const QWheelEvent* self) {
	const QPointF& _ret = self->globalPosF();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&_ret);
}

QPointF* QWheelEvent_position(const QWheelEvent* self) {
	return new QPointF(self->position());
}

QPointF* QWheelEvent_globalPosition(const QWheelEvent* self) {
	return new QPointF(self->globalPosition());
}

int QWheelEvent_buttons(const QWheelEvent* self) {
	Qt::MouseButtons _ret = self->buttons();
	return static_cast<int>(_ret);
}

int QWheelEvent_phase(const QWheelEvent* self) {
	Qt::ScrollPhase _ret = self->phase();
	return static_cast<int>(_ret);
}

bool QWheelEvent_inverted(const QWheelEvent* self) {
	return self->inverted();
}

int QWheelEvent_source(const QWheelEvent* self) {
	Qt::MouseEventSource _ret = self->source();
	return static_cast<int>(_ret);
}

void QWheelEvent_delete(QWheelEvent* self) {
	delete self;
}

QTabletEvent* QTabletEvent_new(int t, QPointF* pos, QPointF* globalPos, int device, int pointerType, double pressure, int xTilt, int yTilt, double tangentialPressure, double rotation, int z, int keyState, long long uniqueID) {
	return new (std::nothrow) QTabletEvent(static_cast<QEvent::Type>(t), *pos, *globalPos, static_cast<int>(device), static_cast<int>(pointerType), static_cast<qreal>(pressure), static_cast<int>(xTilt), static_cast<int>(yTilt), static_cast<qreal>(tangentialPressure), static_cast<qreal>(rotation), static_cast<int>(z), static_cast<Qt::KeyboardModifiers>(keyState), static_cast<qint64>(uniqueID));
}

QTabletEvent* QTabletEvent_new2(int t, QPointF* pos, QPointF* globalPos, int device, int pointerType, double pressure, int xTilt, int yTilt, double tangentialPressure, double rotation, int z, int keyState, long long uniqueID, int button, int buttons) {
	return new (std::nothrow) QTabletEvent(static_cast<QEvent::Type>(t), *pos, *globalPos, static_cast<int>(device), static_cast<int>(pointerType), static_cast<qreal>(pressure), static_cast<int>(xTilt), static_cast<int>(yTilt), static_cast<qreal>(tangentialPressure), static_cast<qreal>(rotation), static_cast<int>(z), static_cast<Qt::KeyboardModifiers>(keyState), static_cast<qint64>(uniqueID), static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons));
}

QTabletEvent* QTabletEvent_new3(QTabletEvent* param1) {
	return new (std::nothrow) QTabletEvent(*param1);
}

void QTabletEvent_virtbase(QTabletEvent* src, QInputEvent** outptr_QInputEvent) {
	*outptr_QInputEvent = static_cast<QInputEvent*>(src);
}

QPoint* QTabletEvent_pos(const QTabletEvent* self) {
	return new QPoint(self->pos());
}

QPoint* QTabletEvent_globalPos(const QTabletEvent* self) {
	return new QPoint(self->globalPos());
}

QPointF* QTabletEvent_posF(const QTabletEvent* self) {
	const QPointF& _ret = self->posF();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&_ret);
}

QPointF* QTabletEvent_globalPosF(const QTabletEvent* self) {
	const QPointF& _ret = self->globalPosF();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&_ret);
}

int QTabletEvent_x(const QTabletEvent* self) {
	return self->x();
}

int QTabletEvent_y(const QTabletEvent* self) {
	return self->y();
}

int QTabletEvent_globalX(const QTabletEvent* self) {
	return self->globalX();
}

int QTabletEvent_globalY(const QTabletEvent* self) {
	return self->globalY();
}

double QTabletEvent_hiResGlobalX(const QTabletEvent* self) {
	qreal _ret = self->hiResGlobalX();
	return static_cast<double>(_ret);
}

double QTabletEvent_hiResGlobalY(const QTabletEvent* self) {
	qreal _ret = self->hiResGlobalY();
	return static_cast<double>(_ret);
}

int QTabletEvent_device(const QTabletEvent* self) {
	QTabletEvent::TabletDevice _ret = self->device();
	return static_cast<int>(_ret);
}

int QTabletEvent_deviceType(const QTabletEvent* self) {
	QTabletEvent::TabletDevice _ret = self->deviceType();
	return static_cast<int>(_ret);
}

int QTabletEvent_pointerType(const QTabletEvent* self) {
	QTabletEvent::PointerType _ret = self->pointerType();
	return static_cast<int>(_ret);
}

long long QTabletEvent_uniqueId(const QTabletEvent* self) {
	qint64 _ret = self->uniqueId();
	return static_cast<long long>(_ret);
}

double QTabletEvent_pressure(const QTabletEvent* self) {
	qreal _ret = self->pressure();
	return static_cast<double>(_ret);
}

int QTabletEvent_z(const QTabletEvent* self) {
	return self->z();
}

double QTabletEvent_tangentialPressure(const QTabletEvent* self) {
	qreal _ret = self->tangentialPressure();
	return static_cast<double>(_ret);
}

double QTabletEvent_rotation(const QTabletEvent* self) {
	qreal _ret = self->rotation();
	return static_cast<double>(_ret);
}

int QTabletEvent_xTilt(const QTabletEvent* self) {
	return self->xTilt();
}

int QTabletEvent_yTilt(const QTabletEvent* self) {
	return self->yTilt();
}

int QTabletEvent_button(const QTabletEvent* self) {
	Qt::MouseButton _ret = self->button();
	return static_cast<int>(_ret);
}

int QTabletEvent_buttons(const QTabletEvent* self) {
	Qt::MouseButtons _ret = self->buttons();
	return static_cast<int>(_ret);
}

void QTabletEvent_delete(QTabletEvent* self) {
	delete self;
}

QNativeGestureEvent* QNativeGestureEvent_new(int type, QPointF* localPos, QPointF* windowPos, QPointF* screenPos, double value, unsigned long sequenceId, unsigned long long intArgument) {
	return new (std::nothrow) QNativeGestureEvent(static_cast<Qt::NativeGestureType>(type), *localPos, *windowPos, *screenPos, static_cast<qreal>(value), static_cast<ulong>(sequenceId), static_cast<quint64>(intArgument));
}

QNativeGestureEvent* QNativeGestureEvent_new2(int type, QTouchDevice* dev, QPointF* localPos, QPointF* windowPos, QPointF* screenPos, double value, unsigned long sequenceId, unsigned long long intArgument) {
	return new (std::nothrow) QNativeGestureEvent(static_cast<Qt::NativeGestureType>(type), dev, *localPos, *windowPos, *screenPos, static_cast<qreal>(value), static_cast<ulong>(sequenceId), static_cast<quint64>(intArgument));
}

QNativeGestureEvent* QNativeGestureEvent_new3(QNativeGestureEvent* param1) {
	return new (std::nothrow) QNativeGestureEvent(*param1);
}

void QNativeGestureEvent_virtbase(QNativeGestureEvent* src, QInputEvent** outptr_QInputEvent) {
	*outptr_QInputEvent = static_cast<QInputEvent*>(src);
}

int QNativeGestureEvent_gestureType(const QNativeGestureEvent* self) {
	Qt::NativeGestureType _ret = self->gestureType();
	return static_cast<int>(_ret);
}

double QNativeGestureEvent_value(const QNativeGestureEvent* self) {
	qreal _ret = self->value();
	return static_cast<double>(_ret);
}

QPoint* QNativeGestureEvent_pos(const QNativeGestureEvent* self) {
	return new QPoint(self->pos());
}

QPoint* QNativeGestureEvent_globalPos(const QNativeGestureEvent* self) {
	return new QPoint(self->globalPos());
}

QPointF* QNativeGestureEvent_localPos(const QNativeGestureEvent* self) {
	const QPointF& _ret = self->localPos();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&_ret);
}

QPointF* QNativeGestureEvent_windowPos(const QNativeGestureEvent* self) {
	const QPointF& _ret = self->windowPos();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&_ret);
}

QPointF* QNativeGestureEvent_screenPos(const QNativeGestureEvent* self) {
	const QPointF& _ret = self->screenPos();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&_ret);
}

QTouchDevice* QNativeGestureEvent_device(const QNativeGestureEvent* self) {
	return (QTouchDevice*) self->device();
}

void QNativeGestureEvent_delete(QNativeGestureEvent* self) {
	delete self;
}

QKeyEvent* QKeyEvent_new(int type, int key, int modifiers) {
	return new (std::nothrow) QKeyEvent(static_cast<QEvent::Type>(type), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers));
}

QKeyEvent* QKeyEvent_new2(int type, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers) {
	return new (std::nothrow) QKeyEvent(static_cast<QEvent::Type>(type), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<quint32>(nativeScanCode), static_cast<quint32>(nativeVirtualKey), static_cast<quint32>(nativeModifiers));
}

QKeyEvent* QKeyEvent_new3(QKeyEvent* param1) {
	return new (std::nothrow) QKeyEvent(*param1);
}

QKeyEvent* QKeyEvent_new4(int type, int key, int modifiers, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new (std::nothrow) QKeyEvent(static_cast<QEvent::Type>(type), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), text_QString);
}

QKeyEvent* QKeyEvent_new5(int type, int key, int modifiers, struct miqt_string text, bool autorep) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new (std::nothrow) QKeyEvent(static_cast<QEvent::Type>(type), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), text_QString, autorep);
}

QKeyEvent* QKeyEvent_new6(int type, int key, int modifiers, struct miqt_string text, bool autorep, unsigned short count) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new (std::nothrow) QKeyEvent(static_cast<QEvent::Type>(type), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), text_QString, autorep, static_cast<ushort>(count));
}

QKeyEvent* QKeyEvent_new7(int type, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new (std::nothrow) QKeyEvent(static_cast<QEvent::Type>(type), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<quint32>(nativeScanCode), static_cast<quint32>(nativeVirtualKey), static_cast<quint32>(nativeModifiers), text_QString);
}

QKeyEvent* QKeyEvent_new8(int type, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, struct miqt_string text, bool autorep) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new (std::nothrow) QKeyEvent(static_cast<QEvent::Type>(type), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<quint32>(nativeScanCode), static_cast<quint32>(nativeVirtualKey), static_cast<quint32>(nativeModifiers), text_QString, autorep);
}

QKeyEvent* QKeyEvent_new9(int type, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, struct miqt_string text, bool autorep, unsigned short count) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new (std::nothrow) QKeyEvent(static_cast<QEvent::Type>(type), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<quint32>(nativeScanCode), static_cast<quint32>(nativeVirtualKey), static_cast<quint32>(nativeModifiers), text_QString, autorep, static_cast<ushort>(count));
}

void QKeyEvent_virtbase(QKeyEvent* src, QInputEvent** outptr_QInputEvent) {
	*outptr_QInputEvent = static_cast<QInputEvent*>(src);
}

int QKeyEvent_key(const QKeyEvent* self) {
	return self->key();
}

bool QKeyEvent_matches(const QKeyEvent* self, int key) {
	return self->matches(static_cast<QKeySequence::StandardKey>(key));
}

int QKeyEvent_modifiers(const QKeyEvent* self) {
	Qt::KeyboardModifiers _ret = self->modifiers();
	return static_cast<int>(_ret);
}

struct miqt_string QKeyEvent_text(const QKeyEvent* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QKeyEvent_isAutoRepeat(const QKeyEvent* self) {
	return self->isAutoRepeat();
}

int QKeyEvent_count(const QKeyEvent* self) {
	return self->count();
}

unsigned int QKeyEvent_nativeScanCode(const QKeyEvent* self) {
	quint32 _ret = self->nativeScanCode();
	return static_cast<unsigned int>(_ret);
}

unsigned int QKeyEvent_nativeVirtualKey(const QKeyEvent* self) {
	quint32 _ret = self->nativeVirtualKey();
	return static_cast<unsigned int>(_ret);
}

unsigned int QKeyEvent_nativeModifiers(const QKeyEvent* self) {
	quint32 _ret = self->nativeModifiers();
	return static_cast<unsigned int>(_ret);
}

void QKeyEvent_delete(QKeyEvent* self) {
	delete self;
}

QFocusEvent* QFocusEvent_new(int type) {
	return new (std::nothrow) QFocusEvent(static_cast<QEvent::Type>(type));
}

QFocusEvent* QFocusEvent_new2(QFocusEvent* param1) {
	return new (std::nothrow) QFocusEvent(*param1);
}

QFocusEvent* QFocusEvent_new3(int type, int reason) {
	return new (std::nothrow) QFocusEvent(static_cast<QEvent::Type>(type), static_cast<Qt::FocusReason>(reason));
}

void QFocusEvent_virtbase(QFocusEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

bool QFocusEvent_gotFocus(const QFocusEvent* self) {
	return self->gotFocus();
}

bool QFocusEvent_lostFocus(const QFocusEvent* self) {
	return self->lostFocus();
}

int QFocusEvent_reason(const QFocusEvent* self) {
	Qt::FocusReason _ret = self->reason();
	return static_cast<int>(_ret);
}

void QFocusEvent_delete(QFocusEvent* self) {
	delete self;
}

QPaintEvent* QPaintEvent_new(QRegion* paintRegion) {
	return new (std::nothrow) QPaintEvent(*paintRegion);
}

QPaintEvent* QPaintEvent_new2(QRect* paintRect) {
	return new (std::nothrow) QPaintEvent(*paintRect);
}

QPaintEvent* QPaintEvent_new3(QPaintEvent* param1) {
	return new (std::nothrow) QPaintEvent(*param1);
}

void QPaintEvent_virtbase(QPaintEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QRect* QPaintEvent_rect(const QPaintEvent* self) {
	const QRect& _ret = self->rect();
	// Cast returned reference into pointer
	return const_cast<QRect*>(&_ret);
}

QRegion* QPaintEvent_region(const QPaintEvent* self) {
	const QRegion& _ret = self->region();
	// Cast returned reference into pointer
	return const_cast<QRegion*>(&_ret);
}

void QPaintEvent_delete(QPaintEvent* self) {
	delete self;
}

QMoveEvent* QMoveEvent_new(QPoint* pos, QPoint* oldPos) {
	return new (std::nothrow) QMoveEvent(*pos, *oldPos);
}

QMoveEvent* QMoveEvent_new2(QMoveEvent* param1) {
	return new (std::nothrow) QMoveEvent(*param1);
}

void QMoveEvent_virtbase(QMoveEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QPoint* QMoveEvent_pos(const QMoveEvent* self) {
	const QPoint& _ret = self->pos();
	// Cast returned reference into pointer
	return const_cast<QPoint*>(&_ret);
}

QPoint* QMoveEvent_oldPos(const QMoveEvent* self) {
	const QPoint& _ret = self->oldPos();
	// Cast returned reference into pointer
	return const_cast<QPoint*>(&_ret);
}

void QMoveEvent_delete(QMoveEvent* self) {
	delete self;
}

QExposeEvent* QExposeEvent_new(QRegion* rgn) {
	return new (std::nothrow) QExposeEvent(*rgn);
}

QExposeEvent* QExposeEvent_new2(QExposeEvent* param1) {
	return new (std::nothrow) QExposeEvent(*param1);
}

void QExposeEvent_virtbase(QExposeEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QRegion* QExposeEvent_region(const QExposeEvent* self) {
	const QRegion& _ret = self->region();
	// Cast returned reference into pointer
	return const_cast<QRegion*>(&_ret);
}

void QExposeEvent_delete(QExposeEvent* self) {
	delete self;
}

QPlatformSurfaceEvent* QPlatformSurfaceEvent_new(int surfaceEventType) {
	return new (std::nothrow) QPlatformSurfaceEvent(static_cast<QPlatformSurfaceEvent::SurfaceEventType>(surfaceEventType));
}

QPlatformSurfaceEvent* QPlatformSurfaceEvent_new2(QPlatformSurfaceEvent* param1) {
	return new (std::nothrow) QPlatformSurfaceEvent(*param1);
}

void QPlatformSurfaceEvent_virtbase(QPlatformSurfaceEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

int QPlatformSurfaceEvent_surfaceEventType(const QPlatformSurfaceEvent* self) {
	QPlatformSurfaceEvent::SurfaceEventType _ret = self->surfaceEventType();
	return static_cast<int>(_ret);
}

void QPlatformSurfaceEvent_delete(QPlatformSurfaceEvent* self) {
	delete self;
}

QResizeEvent* QResizeEvent_new(QSize* size, QSize* oldSize) {
	return new (std::nothrow) QResizeEvent(*size, *oldSize);
}

QResizeEvent* QResizeEvent_new2(QResizeEvent* param1) {
	return new (std::nothrow) QResizeEvent(*param1);
}

void QResizeEvent_virtbase(QResizeEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QSize* QResizeEvent_size(const QResizeEvent* self) {
	const QSize& _ret = self->size();
	// Cast returned reference into pointer
	return const_cast<QSize*>(&_ret);
}

QSize* QResizeEvent_oldSize(const QResizeEvent* self) {
	const QSize& _ret = self->oldSize();
	// Cast returned reference into pointer
	return const_cast<QSize*>(&_ret);
}

void QResizeEvent_delete(QResizeEvent* self) {
	delete self;
}

QCloseEvent* QCloseEvent_new() {
	return new (std::nothrow) QCloseEvent();
}

QCloseEvent* QCloseEvent_new2(QCloseEvent* param1) {
	return new (std::nothrow) QCloseEvent(*param1);
}

void QCloseEvent_virtbase(QCloseEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

void QCloseEvent_operatorAssign(QCloseEvent* self, QCloseEvent* param1) {
	self->operator=(*param1);
}

void QCloseEvent_delete(QCloseEvent* self) {
	delete self;
}

QIconDragEvent* QIconDragEvent_new() {
	return new (std::nothrow) QIconDragEvent();
}

QIconDragEvent* QIconDragEvent_new2(QIconDragEvent* param1) {
	return new (std::nothrow) QIconDragEvent(*param1);
}

void QIconDragEvent_virtbase(QIconDragEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

void QIconDragEvent_operatorAssign(QIconDragEvent* self, QIconDragEvent* param1) {
	self->operator=(*param1);
}

void QIconDragEvent_delete(QIconDragEvent* self) {
	delete self;
}

QShowEvent* QShowEvent_new() {
	return new (std::nothrow) QShowEvent();
}

QShowEvent* QShowEvent_new2(QShowEvent* param1) {
	return new (std::nothrow) QShowEvent(*param1);
}

void QShowEvent_virtbase(QShowEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

void QShowEvent_operatorAssign(QShowEvent* self, QShowEvent* param1) {
	self->operator=(*param1);
}

void QShowEvent_delete(QShowEvent* self) {
	delete self;
}

QHideEvent* QHideEvent_new() {
	return new (std::nothrow) QHideEvent();
}

QHideEvent* QHideEvent_new2(QHideEvent* param1) {
	return new (std::nothrow) QHideEvent(*param1);
}

void QHideEvent_virtbase(QHideEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

void QHideEvent_operatorAssign(QHideEvent* self, QHideEvent* param1) {
	self->operator=(*param1);
}

void QHideEvent_delete(QHideEvent* self) {
	delete self;
}

QContextMenuEvent* QContextMenuEvent_new(int reason, QPoint* pos, QPoint* globalPos, int modifiers) {
	return new (std::nothrow) QContextMenuEvent(static_cast<QContextMenuEvent::Reason>(reason), *pos, *globalPos, static_cast<Qt::KeyboardModifiers>(modifiers));
}

QContextMenuEvent* QContextMenuEvent_new2(int reason, QPoint* pos, QPoint* globalPos) {
	return new (std::nothrow) QContextMenuEvent(static_cast<QContextMenuEvent::Reason>(reason), *pos, *globalPos);
}

QContextMenuEvent* QContextMenuEvent_new3(int reason, QPoint* pos) {
	return new (std::nothrow) QContextMenuEvent(static_cast<QContextMenuEvent::Reason>(reason), *pos);
}

QContextMenuEvent* QContextMenuEvent_new4(QContextMenuEvent* param1) {
	return new (std::nothrow) QContextMenuEvent(*param1);
}

void QContextMenuEvent_virtbase(QContextMenuEvent* src, QInputEvent** outptr_QInputEvent) {
	*outptr_QInputEvent = static_cast<QInputEvent*>(src);
}

int QContextMenuEvent_x(const QContextMenuEvent* self) {
	return self->x();
}

int QContextMenuEvent_y(const QContextMenuEvent* self) {
	return self->y();
}

int QContextMenuEvent_globalX(const QContextMenuEvent* self) {
	return self->globalX();
}

int QContextMenuEvent_globalY(const QContextMenuEvent* self) {
	return self->globalY();
}

QPoint* QContextMenuEvent_pos(const QContextMenuEvent* self) {
	const QPoint& _ret = self->pos();
	// Cast returned reference into pointer
	return const_cast<QPoint*>(&_ret);
}

QPoint* QContextMenuEvent_globalPos(const QContextMenuEvent* self) {
	const QPoint& _ret = self->globalPos();
	// Cast returned reference into pointer
	return const_cast<QPoint*>(&_ret);
}

int QContextMenuEvent_reason(const QContextMenuEvent* self) {
	QContextMenuEvent::Reason _ret = self->reason();
	return static_cast<int>(_ret);
}

void QContextMenuEvent_delete(QContextMenuEvent* self) {
	delete self;
}

QInputMethodEvent* QInputMethodEvent_new() {
	return new (std::nothrow) QInputMethodEvent();
}

QInputMethodEvent* QInputMethodEvent_new2(struct miqt_string preeditText, struct miqt_array /* of QInputMethodEvent__Attribute* */  attributes) {
	QString preeditText_QString = QString::fromUtf8(preeditText.data, preeditText.len);
	QList<QInputMethodEvent::Attribute> attributes_QList;
	attributes_QList.reserve(attributes.len);
	QInputMethodEvent__Attribute** attributes_arr = static_cast<QInputMethodEvent__Attribute**>(attributes.data);
	for(size_t i = 0; i < attributes.len; ++i) {
		attributes_QList.push_back(*(attributes_arr[i]));
	}
	return new (std::nothrow) QInputMethodEvent(preeditText_QString, attributes_QList);
}

QInputMethodEvent* QInputMethodEvent_new3(QInputMethodEvent* other) {
	return new (std::nothrow) QInputMethodEvent(*other);
}

void QInputMethodEvent_virtbase(QInputMethodEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

void QInputMethodEvent_setCommitString(QInputMethodEvent* self, struct miqt_string commitString) {
	QString commitString_QString = QString::fromUtf8(commitString.data, commitString.len);
	self->setCommitString(commitString_QString);
}

struct miqt_array /* of QInputMethodEvent__Attribute* */  QInputMethodEvent_attributes(const QInputMethodEvent* self) {
	const QList<QInputMethodEvent::Attribute>& _ret = self->attributes();
	// Convert QList<> from C++ memory to manually-managed C memory
	QInputMethodEvent__Attribute** _arr = static_cast<QInputMethodEvent__Attribute**>(malloc(sizeof(QInputMethodEvent__Attribute*) * _ret.size()));
	for (size_t i = 0, e = _ret.size(); i < e; ++i) {
		_arr[i] = new QInputMethodEvent::Attribute(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.size();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QInputMethodEvent_preeditString(const QInputMethodEvent* self) {
	const QString _ret = self->preeditString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputMethodEvent_commitString(const QInputMethodEvent* self) {
	const QString _ret = self->commitString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QInputMethodEvent_replacementStart(const QInputMethodEvent* self) {
	return self->replacementStart();
}

int QInputMethodEvent_replacementLength(const QInputMethodEvent* self) {
	return self->replacementLength();
}

void QInputMethodEvent_setCommitString2(QInputMethodEvent* self, struct miqt_string commitString, int replaceFrom) {
	QString commitString_QString = QString::fromUtf8(commitString.data, commitString.len);
	self->setCommitString(commitString_QString, static_cast<int>(replaceFrom));
}

void QInputMethodEvent_setCommitString3(QInputMethodEvent* self, struct miqt_string commitString, int replaceFrom, int replaceLength) {
	QString commitString_QString = QString::fromUtf8(commitString.data, commitString.len);
	self->setCommitString(commitString_QString, static_cast<int>(replaceFrom), static_cast<int>(replaceLength));
}

void QInputMethodEvent_delete(QInputMethodEvent* self) {
	delete self;
}

QInputMethodQueryEvent* QInputMethodQueryEvent_new(int queries) {
	return new (std::nothrow) QInputMethodQueryEvent(static_cast<Qt::InputMethodQueries>(queries));
}

QInputMethodQueryEvent* QInputMethodQueryEvent_new2(QInputMethodQueryEvent* param1) {
	return new (std::nothrow) QInputMethodQueryEvent(*param1);
}

void QInputMethodQueryEvent_virtbase(QInputMethodQueryEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

int QInputMethodQueryEvent_queries(const QInputMethodQueryEvent* self) {
	Qt::InputMethodQueries _ret = self->queries();
	return static_cast<int>(_ret);
}

void QInputMethodQueryEvent_setValue(QInputMethodQueryEvent* self, int query, QVariant* value) {
	self->setValue(static_cast<Qt::InputMethodQuery>(query), *value);
}

QVariant* QInputMethodQueryEvent_value(const QInputMethodQueryEvent* self, int query) {
	return new QVariant(self->value(static_cast<Qt::InputMethodQuery>(query)));
}

void QInputMethodQueryEvent_delete(QInputMethodQueryEvent* self) {
	delete self;
}

QDropEvent* QDropEvent_new(QPointF* pos, int actions, QMimeData* data, int buttons, int modifiers) {
	return new (std::nothrow) QDropEvent(*pos, static_cast<Qt::DropActions>(actions), data, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
}

QDropEvent* QDropEvent_new2(QDropEvent* param1) {
	return new (std::nothrow) QDropEvent(*param1);
}

QDropEvent* QDropEvent_new3(QPointF* pos, int actions, QMimeData* data, int buttons, int modifiers, int type) {
	return new (std::nothrow) QDropEvent(*pos, static_cast<Qt::DropActions>(actions), data, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<QEvent::Type>(type));
}

void QDropEvent_virtbase(QDropEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QPoint* QDropEvent_pos(const QDropEvent* self) {
	return new QPoint(self->pos());
}

QPointF* QDropEvent_posF(const QDropEvent* self) {
	const QPointF& _ret = self->posF();
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&_ret);
}

int QDropEvent_mouseButtons(const QDropEvent* self) {
	Qt::MouseButtons _ret = self->mouseButtons();
	return static_cast<int>(_ret);
}

int QDropEvent_keyboardModifiers(const QDropEvent* self) {
	Qt::KeyboardModifiers _ret = self->keyboardModifiers();
	return static_cast<int>(_ret);
}

int QDropEvent_possibleActions(const QDropEvent* self) {
	Qt::DropActions _ret = self->possibleActions();
	return static_cast<int>(_ret);
}

int QDropEvent_proposedAction(const QDropEvent* self) {
	Qt::DropAction _ret = self->proposedAction();
	return static_cast<int>(_ret);
}

void QDropEvent_acceptProposedAction(QDropEvent* self) {
	self->acceptProposedAction();
}

int QDropEvent_dropAction(const QDropEvent* self) {
	Qt::DropAction _ret = self->dropAction();
	return static_cast<int>(_ret);
}

void QDropEvent_setDropAction(QDropEvent* self, int action) {
	self->setDropAction(static_cast<Qt::DropAction>(action));
}

QObject* QDropEvent_source(const QDropEvent* self) {
	return self->source();
}

QMimeData* QDropEvent_mimeData(const QDropEvent* self) {
	return (QMimeData*) self->mimeData();
}

void QDropEvent_delete(QDropEvent* self) {
	delete self;
}

QDragMoveEvent* QDragMoveEvent_new(QPoint* pos, int actions, QMimeData* data, int buttons, int modifiers) {
	return new (std::nothrow) QDragMoveEvent(*pos, static_cast<Qt::DropActions>(actions), data, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
}

QDragMoveEvent* QDragMoveEvent_new2(QDragMoveEvent* param1) {
	return new (std::nothrow) QDragMoveEvent(*param1);
}

QDragMoveEvent* QDragMoveEvent_new3(QPoint* pos, int actions, QMimeData* data, int buttons, int modifiers, int type) {
	return new (std::nothrow) QDragMoveEvent(*pos, static_cast<Qt::DropActions>(actions), data, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<QEvent::Type>(type));
}

void QDragMoveEvent_virtbase(QDragMoveEvent* src, QDropEvent** outptr_QDropEvent) {
	*outptr_QDropEvent = static_cast<QDropEvent*>(src);
}

QRect* QDragMoveEvent_answerRect(const QDragMoveEvent* self) {
	return new QRect(self->answerRect());
}

void QDragMoveEvent_accept(QDragMoveEvent* self) {
	self->accept();
}

void QDragMoveEvent_ignore(QDragMoveEvent* self) {
	self->ignore();
}

void QDragMoveEvent_acceptWithQRect(QDragMoveEvent* self, QRect* r) {
	self->accept(*r);
}

void QDragMoveEvent_ignoreWithQRect(QDragMoveEvent* self, QRect* r) {
	self->ignore(*r);
}

void QDragMoveEvent_delete(QDragMoveEvent* self) {
	delete self;
}

QDragEnterEvent* QDragEnterEvent_new(QPoint* pos, int actions, QMimeData* data, int buttons, int modifiers) {
	return new (std::nothrow) QDragEnterEvent(*pos, static_cast<Qt::DropActions>(actions), data, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
}

QDragEnterEvent* QDragEnterEvent_new2(QDragEnterEvent* param1) {
	return new (std::nothrow) QDragEnterEvent(*param1);
}

void QDragEnterEvent_virtbase(QDragEnterEvent* src, QDragMoveEvent** outptr_QDragMoveEvent) {
	*outptr_QDragMoveEvent = static_cast<QDragMoveEvent*>(src);
}

void QDragEnterEvent_operatorAssign(QDragEnterEvent* self, QDragEnterEvent* param1) {
	self->operator=(*param1);
}

void QDragEnterEvent_delete(QDragEnterEvent* self) {
	delete self;
}

QDragLeaveEvent* QDragLeaveEvent_new() {
	return new (std::nothrow) QDragLeaveEvent();
}

QDragLeaveEvent* QDragLeaveEvent_new2(QDragLeaveEvent* param1) {
	return new (std::nothrow) QDragLeaveEvent(*param1);
}

void QDragLeaveEvent_virtbase(QDragLeaveEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

void QDragLeaveEvent_operatorAssign(QDragLeaveEvent* self, QDragLeaveEvent* param1) {
	self->operator=(*param1);
}

void QDragLeaveEvent_delete(QDragLeaveEvent* self) {
	delete self;
}

QHelpEvent* QHelpEvent_new(int type, QPoint* pos, QPoint* globalPos) {
	return new (std::nothrow) QHelpEvent(static_cast<QEvent::Type>(type), *pos, *globalPos);
}

QHelpEvent* QHelpEvent_new2(QHelpEvent* param1) {
	return new (std::nothrow) QHelpEvent(*param1);
}

void QHelpEvent_virtbase(QHelpEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

int QHelpEvent_x(const QHelpEvent* self) {
	return self->x();
}

int QHelpEvent_y(const QHelpEvent* self) {
	return self->y();
}

int QHelpEvent_globalX(const QHelpEvent* self) {
	return self->globalX();
}

int QHelpEvent_globalY(const QHelpEvent* self) {
	return self->globalY();
}

QPoint* QHelpEvent_pos(const QHelpEvent* self) {
	const QPoint& _ret = self->pos();
	// Cast returned reference into pointer
	return const_cast<QPoint*>(&_ret);
}

QPoint* QHelpEvent_globalPos(const QHelpEvent* self) {
	const QPoint& _ret = self->globalPos();
	// Cast returned reference into pointer
	return const_cast<QPoint*>(&_ret);
}

void QHelpEvent_delete(QHelpEvent* self) {
	delete self;
}

QStatusTipEvent* QStatusTipEvent_new(struct miqt_string tip) {
	QString tip_QString = QString::fromUtf8(tip.data, tip.len);
	return new (std::nothrow) QStatusTipEvent(tip_QString);
}

QStatusTipEvent* QStatusTipEvent_new2(QStatusTipEvent* param1) {
	return new (std::nothrow) QStatusTipEvent(*param1);
}

void QStatusTipEvent_virtbase(QStatusTipEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

struct miqt_string QStatusTipEvent_tip(const QStatusTipEvent* self) {
	QString _ret = self->tip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QStatusTipEvent_delete(QStatusTipEvent* self) {
	delete self;
}

QWhatsThisClickedEvent* QWhatsThisClickedEvent_new(struct miqt_string href) {
	QString href_QString = QString::fromUtf8(href.data, href.len);
	return new (std::nothrow) QWhatsThisClickedEvent(href_QString);
}

QWhatsThisClickedEvent* QWhatsThisClickedEvent_new2(QWhatsThisClickedEvent* param1) {
	return new (std::nothrow) QWhatsThisClickedEvent(*param1);
}

void QWhatsThisClickedEvent_virtbase(QWhatsThisClickedEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

struct miqt_string QWhatsThisClickedEvent_href(const QWhatsThisClickedEvent* self) {
	QString _ret = self->href();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWhatsThisClickedEvent_delete(QWhatsThisClickedEvent* self) {
	delete self;
}

QActionEvent* QActionEvent_new(int type, QAction* action) {
	return new (std::nothrow) QActionEvent(static_cast<int>(type), action);
}

QActionEvent* QActionEvent_new2(QActionEvent* param1) {
	return new (std::nothrow) QActionEvent(*param1);
}

QActionEvent* QActionEvent_new3(int type, QAction* action, QAction* before) {
	return new (std::nothrow) QActionEvent(static_cast<int>(type), action, before);
}

void QActionEvent_virtbase(QActionEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QAction* QActionEvent_action(const QActionEvent* self) {
	return self->action();
}

QAction* QActionEvent_before(const QActionEvent* self) {
	return self->before();
}

void QActionEvent_operatorAssign(QActionEvent* self, QActionEvent* param1) {
	self->operator=(*param1);
}

void QActionEvent_delete(QActionEvent* self) {
	delete self;
}

QFileOpenEvent* QFileOpenEvent_new(struct miqt_string file) {
	QString file_QString = QString::fromUtf8(file.data, file.len);
	return new (std::nothrow) QFileOpenEvent(file_QString);
}

QFileOpenEvent* QFileOpenEvent_new2(QUrl* url) {
	return new (std::nothrow) QFileOpenEvent(*url);
}

QFileOpenEvent* QFileOpenEvent_new3(QFileOpenEvent* param1) {
	return new (std::nothrow) QFileOpenEvent(*param1);
}

void QFileOpenEvent_virtbase(QFileOpenEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

struct miqt_string QFileOpenEvent_file(const QFileOpenEvent* self) {
	QString _ret = self->file();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QUrl* QFileOpenEvent_url(const QFileOpenEvent* self) {
	return new QUrl(self->url());
}

bool QFileOpenEvent_openFile(const QFileOpenEvent* self, QFile* file, int flags) {
	return self->openFile(*file, static_cast<QIODevice::OpenMode>(flags));
}

void QFileOpenEvent_delete(QFileOpenEvent* self) {
	delete self;
}

QToolBarChangeEvent* QToolBarChangeEvent_new(bool t) {
	return new (std::nothrow) QToolBarChangeEvent(t);
}

QToolBarChangeEvent* QToolBarChangeEvent_new2(QToolBarChangeEvent* param1) {
	return new (std::nothrow) QToolBarChangeEvent(*param1);
}

void QToolBarChangeEvent_virtbase(QToolBarChangeEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

bool QToolBarChangeEvent_toggle(const QToolBarChangeEvent* self) {
	return self->toggle();
}

void QToolBarChangeEvent_delete(QToolBarChangeEvent* self) {
	delete self;
}

QShortcutEvent* QShortcutEvent_new(QKeySequence* key, int id) {
	return new (std::nothrow) QShortcutEvent(*key, static_cast<int>(id));
}

QShortcutEvent* QShortcutEvent_new2(QShortcutEvent* param1) {
	return new (std::nothrow) QShortcutEvent(*param1);
}

QShortcutEvent* QShortcutEvent_new3(QKeySequence* key, int id, bool ambiguous) {
	return new (std::nothrow) QShortcutEvent(*key, static_cast<int>(id), ambiguous);
}

void QShortcutEvent_virtbase(QShortcutEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QKeySequence* QShortcutEvent_key(const QShortcutEvent* self) {
	const QKeySequence& _ret = self->key();
	// Cast returned reference into pointer
	return const_cast<QKeySequence*>(&_ret);
}

int QShortcutEvent_shortcutId(const QShortcutEvent* self) {
	return self->shortcutId();
}

bool QShortcutEvent_isAmbiguous(const QShortcutEvent* self) {
	return self->isAmbiguous();
}

void QShortcutEvent_delete(QShortcutEvent* self) {
	delete self;
}

QWindowStateChangeEvent* QWindowStateChangeEvent_new(int aOldState) {
	return new (std::nothrow) QWindowStateChangeEvent(static_cast<Qt::WindowStates>(aOldState));
}

QWindowStateChangeEvent* QWindowStateChangeEvent_new2(QWindowStateChangeEvent* param1) {
	return new (std::nothrow) QWindowStateChangeEvent(*param1);
}

QWindowStateChangeEvent* QWindowStateChangeEvent_new3(int aOldState, bool isOverride) {
	return new (std::nothrow) QWindowStateChangeEvent(static_cast<Qt::WindowStates>(aOldState), isOverride);
}

void QWindowStateChangeEvent_virtbase(QWindowStateChangeEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

int QWindowStateChangeEvent_oldState(const QWindowStateChangeEvent* self) {
	Qt::WindowStates _ret = self->oldState();
	return static_cast<int>(_ret);
}

bool QWindowStateChangeEvent_isOverride(const QWindowStateChangeEvent* self) {
	return self->isOverride();
}

void QWindowStateChangeEvent_delete(QWindowStateChangeEvent* self) {
	delete self;
}

QPointingDeviceUniqueId* QPointingDeviceUniqueId_new() {
	return new (std::nothrow) QPointingDeviceUniqueId();
}

QPointingDeviceUniqueId* QPointingDeviceUniqueId_new2(QPointingDeviceUniqueId* param1) {
	return new (std::nothrow) QPointingDeviceUniqueId(*param1);
}

QPointingDeviceUniqueId* QPointingDeviceUniqueId_fromNumericId(long long id) {
	return new QPointingDeviceUniqueId(QPointingDeviceUniqueId::fromNumericId(static_cast<qint64>(id)));
}

bool QPointingDeviceUniqueId_isValid(const QPointingDeviceUniqueId* self) {
	return self->isValid();
}

long long QPointingDeviceUniqueId_numericId(const QPointingDeviceUniqueId* self) {
	qint64 _ret = self->numericId();
	return static_cast<long long>(_ret);
}

void QPointingDeviceUniqueId_delete(QPointingDeviceUniqueId* self) {
	delete self;
}

QTouchEvent* QTouchEvent_new(int eventType) {
	return new (std::nothrow) QTouchEvent(static_cast<QEvent::Type>(eventType));
}

QTouchEvent* QTouchEvent_new2(QTouchEvent* param1) {
	return new (std::nothrow) QTouchEvent(*param1);
}

QTouchEvent* QTouchEvent_new3(int eventType, QTouchDevice* device) {
	return new (std::nothrow) QTouchEvent(static_cast<QEvent::Type>(eventType), device);
}

QTouchEvent* QTouchEvent_new4(int eventType, QTouchDevice* device, int modifiers) {
	return new (std::nothrow) QTouchEvent(static_cast<QEvent::Type>(eventType), device, static_cast<Qt::KeyboardModifiers>(modifiers));
}

QTouchEvent* QTouchEvent_new5(int eventType, QTouchDevice* device, int modifiers, int touchPointStates) {
	return new (std::nothrow) QTouchEvent(static_cast<QEvent::Type>(eventType), device, static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::TouchPointStates>(touchPointStates));
}

QTouchEvent* QTouchEvent_new6(int eventType, QTouchDevice* device, int modifiers, int touchPointStates, struct miqt_array /* of QTouchEvent__TouchPoint* */  touchPoints) {
	QList<QTouchEvent::TouchPoint> touchPoints_QList;
	touchPoints_QList.reserve(touchPoints.len);
	QTouchEvent__TouchPoint** touchPoints_arr = static_cast<QTouchEvent__TouchPoint**>(touchPoints.data);
	for(size_t i = 0; i < touchPoints.len; ++i) {
		touchPoints_QList.push_back(*(touchPoints_arr[i]));
	}
	return new (std::nothrow) QTouchEvent(static_cast<QEvent::Type>(eventType), device, static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::TouchPointStates>(touchPointStates), touchPoints_QList);
}

void QTouchEvent_virtbase(QTouchEvent* src, QInputEvent** outptr_QInputEvent) {
	*outptr_QInputEvent = static_cast<QInputEvent*>(src);
}

QWindow* QTouchEvent_window(const QTouchEvent* self) {
	return self->window();
}

QObject* QTouchEvent_target(const QTouchEvent* self) {
	return self->target();
}

int QTouchEvent_touchPointStates(const QTouchEvent* self) {
	Qt::TouchPointStates _ret = self->touchPointStates();
	return static_cast<int>(_ret);
}

struct miqt_array /* of QTouchEvent__TouchPoint* */  QTouchEvent_touchPoints(const QTouchEvent* self) {
	const QList<QTouchEvent::TouchPoint>& _ret = self->touchPoints();
	// Convert QList<> from C++ memory to manually-managed C memory
	QTouchEvent__TouchPoint** _arr = static_cast<QTouchEvent__TouchPoint**>(malloc(sizeof(QTouchEvent__TouchPoint*) * _ret.size()));
	for (size_t i = 0, e = _ret.size(); i < e; ++i) {
		_arr[i] = new QTouchEvent::TouchPoint(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.size();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QTouchDevice* QTouchEvent_device(const QTouchEvent* self) {
	return self->device();
}

void QTouchEvent_setWindow(QTouchEvent* self, QWindow* awindow) {
	self->setWindow(awindow);
}

void QTouchEvent_setTarget(QTouchEvent* self, QObject* atarget) {
	self->setTarget(atarget);
}

void QTouchEvent_setTouchPointStates(QTouchEvent* self, int aTouchPointStates) {
	self->setTouchPointStates(static_cast<Qt::TouchPointStates>(aTouchPointStates));
}

void QTouchEvent_setTouchPoints(QTouchEvent* self, struct miqt_array /* of QTouchEvent__TouchPoint* */  atouchPoints) {
	QList<QTouchEvent::TouchPoint> atouchPoints_QList;
	atouchPoints_QList.reserve(atouchPoints.len);
	QTouchEvent__TouchPoint** atouchPoints_arr = static_cast<QTouchEvent__TouchPoint**>(atouchPoints.data);
	for(size_t i = 0; i < atouchPoints.len; ++i) {
		atouchPoints_QList.push_back(*(atouchPoints_arr[i]));
	}
	self->setTouchPoints(atouchPoints_QList);
}

void QTouchEvent_setDevice(QTouchEvent* self, QTouchDevice* adevice) {
	self->setDevice(adevice);
}

void QTouchEvent_delete(QTouchEvent* self) {
	delete self;
}

QScrollPrepareEvent* QScrollPrepareEvent_new(QPointF* startPos) {
	return new (std::nothrow) QScrollPrepareEvent(*startPos);
}

QScrollPrepareEvent* QScrollPrepareEvent_new2(QScrollPrepareEvent* param1) {
	return new (std::nothrow) QScrollPrepareEvent(*param1);
}

void QScrollPrepareEvent_virtbase(QScrollPrepareEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QPointF* QScrollPrepareEvent_startPos(const QScrollPrepareEvent* self) {
	return new QPointF(self->startPos());
}

QSizeF* QScrollPrepareEvent_viewportSize(const QScrollPrepareEvent* self) {
	return new QSizeF(self->viewportSize());
}

QRectF* QScrollPrepareEvent_contentPosRange(const QScrollPrepareEvent* self) {
	return new QRectF(self->contentPosRange());
}

QPointF* QScrollPrepareEvent_contentPos(const QScrollPrepareEvent* self) {
	return new QPointF(self->contentPos());
}

void QScrollPrepareEvent_setViewportSize(QScrollPrepareEvent* self, QSizeF* size) {
	self->setViewportSize(*size);
}

void QScrollPrepareEvent_setContentPosRange(QScrollPrepareEvent* self, QRectF* rect) {
	self->setContentPosRange(*rect);
}

void QScrollPrepareEvent_setContentPos(QScrollPrepareEvent* self, QPointF* pos) {
	self->setContentPos(*pos);
}

void QScrollPrepareEvent_delete(QScrollPrepareEvent* self) {
	delete self;
}

QScrollEvent* QScrollEvent_new(QPointF* contentPos, QPointF* overshoot, int scrollState) {
	return new (std::nothrow) QScrollEvent(*contentPos, *overshoot, static_cast<QScrollEvent::ScrollState>(scrollState));
}

QScrollEvent* QScrollEvent_new2(QScrollEvent* param1) {
	return new (std::nothrow) QScrollEvent(*param1);
}

void QScrollEvent_virtbase(QScrollEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QPointF* QScrollEvent_contentPos(const QScrollEvent* self) {
	return new QPointF(self->contentPos());
}

QPointF* QScrollEvent_overshootDistance(const QScrollEvent* self) {
	return new QPointF(self->overshootDistance());
}

int QScrollEvent_scrollState(const QScrollEvent* self) {
	QScrollEvent::ScrollState _ret = self->scrollState();
	return static_cast<int>(_ret);
}

void QScrollEvent_delete(QScrollEvent* self) {
	delete self;
}

QScreenOrientationChangeEvent* QScreenOrientationChangeEvent_new(QScreen* screen, int orientation) {
	return new (std::nothrow) QScreenOrientationChangeEvent(screen, static_cast<Qt::ScreenOrientation>(orientation));
}

QScreenOrientationChangeEvent* QScreenOrientationChangeEvent_new2(QScreenOrientationChangeEvent* param1) {
	return new (std::nothrow) QScreenOrientationChangeEvent(*param1);
}

void QScreenOrientationChangeEvent_virtbase(QScreenOrientationChangeEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QScreen* QScreenOrientationChangeEvent_screen(const QScreenOrientationChangeEvent* self) {
	return self->screen();
}

int QScreenOrientationChangeEvent_orientation(const QScreenOrientationChangeEvent* self) {
	Qt::ScreenOrientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

void QScreenOrientationChangeEvent_delete(QScreenOrientationChangeEvent* self) {
	delete self;
}

QApplicationStateChangeEvent* QApplicationStateChangeEvent_new(int state) {
	return new (std::nothrow) QApplicationStateChangeEvent(static_cast<Qt::ApplicationState>(state));
}

QApplicationStateChangeEvent* QApplicationStateChangeEvent_new2(QApplicationStateChangeEvent* param1) {
	return new (std::nothrow) QApplicationStateChangeEvent(*param1);
}

void QApplicationStateChangeEvent_virtbase(QApplicationStateChangeEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

int QApplicationStateChangeEvent_applicationState(const QApplicationStateChangeEvent* self) {
	Qt::ApplicationState _ret = self->applicationState();
	return static_cast<int>(_ret);
}

void QApplicationStateChangeEvent_delete(QApplicationStateChangeEvent* self) {
	delete self;
}

QInputMethodEvent__Attribute* QInputMethodEvent__Attribute_new(int typ, int s, int l, QVariant* val) {
	return new (std::nothrow) QInputMethodEvent::Attribute(static_cast<QInputMethodEvent::AttributeType>(typ), static_cast<int>(s), static_cast<int>(l), *val);
}

QInputMethodEvent__Attribute* QInputMethodEvent__Attribute_new2(int typ, int s, int l) {
	return new (std::nothrow) QInputMethodEvent::Attribute(static_cast<QInputMethodEvent::AttributeType>(typ), static_cast<int>(s), static_cast<int>(l));
}

QInputMethodEvent__Attribute* QInputMethodEvent__Attribute_new3(QInputMethodEvent__Attribute* param1) {
	return new (std::nothrow) QInputMethodEvent::Attribute(*param1);
}

void QInputMethodEvent__Attribute_operatorAssign(QInputMethodEvent__Attribute* self, QInputMethodEvent__Attribute* param1) {
	self->operator=(*param1);
}

void QInputMethodEvent__Attribute_delete(QInputMethodEvent__Attribute* self) {
	delete self;
}

QTouchEvent__TouchPoint* QTouchEvent__TouchPoint_new() {
	return new (std::nothrow) QTouchEvent::TouchPoint();
}

QTouchEvent__TouchPoint* QTouchEvent__TouchPoint_new2(QTouchEvent__TouchPoint* other) {
	return new (std::nothrow) QTouchEvent::TouchPoint(*other);
}

QTouchEvent__TouchPoint* QTouchEvent__TouchPoint_new3(int id) {
	return new (std::nothrow) QTouchEvent::TouchPoint(static_cast<int>(id));
}

void QTouchEvent__TouchPoint_operatorAssign(QTouchEvent__TouchPoint* self, QTouchEvent__TouchPoint* other) {
	self->operator=(*other);
}

void QTouchEvent__TouchPoint_swap(QTouchEvent__TouchPoint* self, QTouchEvent__TouchPoint* other) {
	self->swap(*other);
}

int QTouchEvent__TouchPoint_id(const QTouchEvent__TouchPoint* self) {
	return self->id();
}

QPointingDeviceUniqueId* QTouchEvent__TouchPoint_uniqueId(const QTouchEvent__TouchPoint* self) {
	return new QPointingDeviceUniqueId(self->uniqueId());
}

int QTouchEvent__TouchPoint_state(const QTouchEvent__TouchPoint* self) {
	Qt::TouchPointState _ret = self->state();
	return static_cast<int>(_ret);
}

QPointF* QTouchEvent__TouchPoint_pos(const QTouchEvent__TouchPoint* self) {
	return new QPointF(self->pos());
}

QPointF* QTouchEvent__TouchPoint_startPos(const QTouchEvent__TouchPoint* self) {
	return new QPointF(self->startPos());
}

QPointF* QTouchEvent__TouchPoint_lastPos(const QTouchEvent__TouchPoint* self) {
	return new QPointF(self->lastPos());
}

QPointF* QTouchEvent__TouchPoint_scenePos(const QTouchEvent__TouchPoint* self) {
	return new QPointF(self->scenePos());
}

QPointF* QTouchEvent__TouchPoint_startScenePos(const QTouchEvent__TouchPoint* self) {
	return new QPointF(self->startScenePos());
}

QPointF* QTouchEvent__TouchPoint_lastScenePos(const QTouchEvent__TouchPoint* self) {
	return new QPointF(self->lastScenePos());
}

QPointF* QTouchEvent__TouchPoint_screenPos(const QTouchEvent__TouchPoint* self) {
	return new QPointF(self->screenPos());
}

QPointF* QTouchEvent__TouchPoint_startScreenPos(const QTouchEvent__TouchPoint* self) {
	return new QPointF(self->startScreenPos());
}

QPointF* QTouchEvent__TouchPoint_lastScreenPos(const QTouchEvent__TouchPoint* self) {
	return new QPointF(self->lastScreenPos());
}

QPointF* QTouchEvent__TouchPoint_normalizedPos(const QTouchEvent__TouchPoint* self) {
	return new QPointF(self->normalizedPos());
}

QPointF* QTouchEvent__TouchPoint_startNormalizedPos(const QTouchEvent__TouchPoint* self) {
	return new QPointF(self->startNormalizedPos());
}

QPointF* QTouchEvent__TouchPoint_lastNormalizedPos(const QTouchEvent__TouchPoint* self) {
	return new QPointF(self->lastNormalizedPos());
}

QRectF* QTouchEvent__TouchPoint_rect(const QTouchEvent__TouchPoint* self) {
	return new QRectF(self->rect());
}

QRectF* QTouchEvent__TouchPoint_sceneRect(const QTouchEvent__TouchPoint* self) {
	return new QRectF(self->sceneRect());
}

QRectF* QTouchEvent__TouchPoint_screenRect(const QTouchEvent__TouchPoint* self) {
	return new QRectF(self->screenRect());
}

void QTouchEvent__TouchPoint_setRect(QTouchEvent__TouchPoint* self, QRectF* rect) {
	self->setRect(*rect);
}

void QTouchEvent__TouchPoint_setSceneRect(QTouchEvent__TouchPoint* self, QRectF* sceneRect) {
	self->setSceneRect(*sceneRect);
}

void QTouchEvent__TouchPoint_setScreenRect(QTouchEvent__TouchPoint* self, QRectF* screenRect) {
	self->setScreenRect(*screenRect);
}

double QTouchEvent__TouchPoint_pressure(const QTouchEvent__TouchPoint* self) {
	qreal _ret = self->pressure();
	return static_cast<double>(_ret);
}

double QTouchEvent__TouchPoint_rotation(const QTouchEvent__TouchPoint* self) {
	qreal _ret = self->rotation();
	return static_cast<double>(_ret);
}

QSizeF* QTouchEvent__TouchPoint_ellipseDiameters(const QTouchEvent__TouchPoint* self) {
	return new QSizeF(self->ellipseDiameters());
}

QVector2D* QTouchEvent__TouchPoint_velocity(const QTouchEvent__TouchPoint* self) {
	return new QVector2D(self->velocity());
}

int QTouchEvent__TouchPoint_flags(const QTouchEvent__TouchPoint* self) {
	QTouchEvent::TouchPoint::InfoFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

struct miqt_array /* of QPointF* */  QTouchEvent__TouchPoint_rawScreenPositions(const QTouchEvent__TouchPoint* self) {
	QVector<QPointF> _ret = self->rawScreenPositions();
	// Convert QList<> from C++ memory to manually-managed C memory
	QPointF** _arr = static_cast<QPointF**>(malloc(sizeof(QPointF*) * _ret.size()));
	for (size_t i = 0, e = _ret.size(); i < e; ++i) {
		_arr[i] = new QPointF(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.size();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QTouchEvent__TouchPoint_setId(QTouchEvent__TouchPoint* self, int id) {
	self->setId(static_cast<int>(id));
}

void QTouchEvent__TouchPoint_setUniqueId(QTouchEvent__TouchPoint* self, long long uid) {
	self->setUniqueId(static_cast<qint64>(uid));
}

void QTouchEvent__TouchPoint_setState(QTouchEvent__TouchPoint* self, int state) {
	self->setState(static_cast<Qt::TouchPointStates>(state));
}

void QTouchEvent__TouchPoint_setPos(QTouchEvent__TouchPoint* self, QPointF* pos) {
	self->setPos(*pos);
}

void QTouchEvent__TouchPoint_setScenePos(QTouchEvent__TouchPoint* self, QPointF* scenePos) {
	self->setScenePos(*scenePos);
}

void QTouchEvent__TouchPoint_setScreenPos(QTouchEvent__TouchPoint* self, QPointF* screenPos) {
	self->setScreenPos(*screenPos);
}

void QTouchEvent__TouchPoint_setNormalizedPos(QTouchEvent__TouchPoint* self, QPointF* normalizedPos) {
	self->setNormalizedPos(*normalizedPos);
}

void QTouchEvent__TouchPoint_setStartPos(QTouchEvent__TouchPoint* self, QPointF* startPos) {
	self->setStartPos(*startPos);
}

void QTouchEvent__TouchPoint_setStartScenePos(QTouchEvent__TouchPoint* self, QPointF* startScenePos) {
	self->setStartScenePos(*startScenePos);
}

void QTouchEvent__TouchPoint_setStartScreenPos(QTouchEvent__TouchPoint* self, QPointF* startScreenPos) {
	self->setStartScreenPos(*startScreenPos);
}

void QTouchEvent__TouchPoint_setStartNormalizedPos(QTouchEvent__TouchPoint* self, QPointF* startNormalizedPos) {
	self->setStartNormalizedPos(*startNormalizedPos);
}

void QTouchEvent__TouchPoint_setLastPos(QTouchEvent__TouchPoint* self, QPointF* lastPos) {
	self->setLastPos(*lastPos);
}

void QTouchEvent__TouchPoint_setLastScenePos(QTouchEvent__TouchPoint* self, QPointF* lastScenePos) {
	self->setLastScenePos(*lastScenePos);
}

void QTouchEvent__TouchPoint_setLastScreenPos(QTouchEvent__TouchPoint* self, QPointF* lastScreenPos) {
	self->setLastScreenPos(*lastScreenPos);
}

void QTouchEvent__TouchPoint_setLastNormalizedPos(QTouchEvent__TouchPoint* self, QPointF* lastNormalizedPos) {
	self->setLastNormalizedPos(*lastNormalizedPos);
}

void QTouchEvent__TouchPoint_setPressure(QTouchEvent__TouchPoint* self, double pressure) {
	self->setPressure(static_cast<qreal>(pressure));
}

void QTouchEvent__TouchPoint_setRotation(QTouchEvent__TouchPoint* self, double angle) {
	self->setRotation(static_cast<qreal>(angle));
}

void QTouchEvent__TouchPoint_setEllipseDiameters(QTouchEvent__TouchPoint* self, QSizeF* dia) {
	self->setEllipseDiameters(*dia);
}

void QTouchEvent__TouchPoint_setVelocity(QTouchEvent__TouchPoint* self, QVector2D* v) {
	self->setVelocity(*v);
}

void QTouchEvent__TouchPoint_setFlags(QTouchEvent__TouchPoint* self, int flags) {
	self->setFlags(static_cast<QTouchEvent::TouchPoint::InfoFlags>(flags));
}

void QTouchEvent__TouchPoint_setRawScreenPositions(QTouchEvent__TouchPoint* self, struct miqt_array /* of QPointF* */  positions) {
	QVector<QPointF> positions_QVector;
	positions_QVector.reserve(positions.len);
	QPointF** positions_arr = static_cast<QPointF**>(positions.data);
	for(size_t i = 0; i < positions.len; ++i) {
		positions_QVector.push_back(*(positions_arr[i]));
	}
	self->setRawScreenPositions(positions_QVector);
}

void QTouchEvent__TouchPoint_delete(QTouchEvent__TouchPoint* self) {
	delete self;
}

