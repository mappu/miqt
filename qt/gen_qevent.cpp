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
#include <QVector2D>
#include <QWhatsThisClickedEvent>
#include <QWheelEvent>
#include <QWindow>
#include <QWindowStateChangeEvent>
#include <qevent.h>
#include "gen_qevent.h"
#include "_cgo_export.h"

void QInputEvent_new(int typeVal, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QInputEvent* ret = new QInputEvent(static_cast<QEvent::Type>(typeVal));
	*outptr_QInputEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QInputEvent_new2(QInputEvent* param1, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QInputEvent* ret = new QInputEvent(*param1);
	*outptr_QInputEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QInputEvent_new3(int typeVal, int modifiers, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QInputEvent* ret = new QInputEvent(static_cast<QEvent::Type>(typeVal), static_cast<Qt::KeyboardModifiers>(modifiers));
	*outptr_QInputEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
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

void QInputEvent_Delete(QInputEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QInputEvent*>( self );
	} else {
		delete self;
	}
}

void QEnterEvent_new(QPointF* localPos, QPointF* windowPos, QPointF* screenPos, QEnterEvent** outptr_QEnterEvent, QEvent** outptr_QEvent) {
	QEnterEvent* ret = new QEnterEvent(*localPos, *windowPos, *screenPos);
	*outptr_QEnterEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QEnterEvent_new2(QEnterEvent* param1, QEnterEvent** outptr_QEnterEvent, QEvent** outptr_QEvent) {
	QEnterEvent* ret = new QEnterEvent(*param1);
	*outptr_QEnterEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
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

void QEnterEvent_Delete(QEnterEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QEnterEvent*>( self );
	} else {
		delete self;
	}
}

void QMouseEvent_new(int typeVal, QPointF* localPos, int button, int buttons, int modifiers, QMouseEvent** outptr_QMouseEvent, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QMouseEvent* ret = new QMouseEvent(static_cast<QEvent::Type>(typeVal), *localPos, static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
	*outptr_QMouseEvent = ret;
	*outptr_QInputEvent = static_cast<QInputEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QMouseEvent_new2(int typeVal, QPointF* localPos, QPointF* screenPos, int button, int buttons, int modifiers, QMouseEvent** outptr_QMouseEvent, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QMouseEvent* ret = new QMouseEvent(static_cast<QEvent::Type>(typeVal), *localPos, *screenPos, static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
	*outptr_QMouseEvent = ret;
	*outptr_QInputEvent = static_cast<QInputEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QMouseEvent_new3(int typeVal, QPointF* localPos, QPointF* windowPos, QPointF* screenPos, int button, int buttons, int modifiers, QMouseEvent** outptr_QMouseEvent, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QMouseEvent* ret = new QMouseEvent(static_cast<QEvent::Type>(typeVal), *localPos, *windowPos, *screenPos, static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
	*outptr_QMouseEvent = ret;
	*outptr_QInputEvent = static_cast<QInputEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QMouseEvent_new4(int typeVal, QPointF* localPos, QPointF* windowPos, QPointF* screenPos, int button, int buttons, int modifiers, int source, QMouseEvent** outptr_QMouseEvent, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QMouseEvent* ret = new QMouseEvent(static_cast<QEvent::Type>(typeVal), *localPos, *windowPos, *screenPos, static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::MouseEventSource>(source));
	*outptr_QMouseEvent = ret;
	*outptr_QInputEvent = static_cast<QInputEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QMouseEvent_new5(QMouseEvent* param1, QMouseEvent** outptr_QMouseEvent, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QMouseEvent* ret = new QMouseEvent(*param1);
	*outptr_QMouseEvent = ret;
	*outptr_QInputEvent = static_cast<QInputEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
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

void QMouseEvent_Delete(QMouseEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QMouseEvent*>( self );
	} else {
		delete self;
	}
}

void QHoverEvent_new(int typeVal, QPointF* pos, QPointF* oldPos, QHoverEvent** outptr_QHoverEvent, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QHoverEvent* ret = new QHoverEvent(static_cast<QEvent::Type>(typeVal), *pos, *oldPos);
	*outptr_QHoverEvent = ret;
	*outptr_QInputEvent = static_cast<QInputEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QHoverEvent_new2(QHoverEvent* param1, QHoverEvent** outptr_QHoverEvent, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QHoverEvent* ret = new QHoverEvent(*param1);
	*outptr_QHoverEvent = ret;
	*outptr_QInputEvent = static_cast<QInputEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QHoverEvent_new3(int typeVal, QPointF* pos, QPointF* oldPos, int modifiers, QHoverEvent** outptr_QHoverEvent, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QHoverEvent* ret = new QHoverEvent(static_cast<QEvent::Type>(typeVal), *pos, *oldPos, static_cast<Qt::KeyboardModifiers>(modifiers));
	*outptr_QHoverEvent = ret;
	*outptr_QInputEvent = static_cast<QInputEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
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

void QHoverEvent_Delete(QHoverEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QHoverEvent*>( self );
	} else {
		delete self;
	}
}

void QWheelEvent_new(QPointF* pos, int delta, int buttons, int modifiers, QWheelEvent** outptr_QWheelEvent, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QWheelEvent* ret = new QWheelEvent(*pos, static_cast<int>(delta), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
	*outptr_QWheelEvent = ret;
	*outptr_QInputEvent = static_cast<QInputEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QWheelEvent_new2(QPointF* pos, QPointF* globalPos, int delta, int buttons, int modifiers, QWheelEvent** outptr_QWheelEvent, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QWheelEvent* ret = new QWheelEvent(*pos, *globalPos, static_cast<int>(delta), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
	*outptr_QWheelEvent = ret;
	*outptr_QInputEvent = static_cast<QInputEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QWheelEvent_new3(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int qt4Delta, int qt4Orientation, int buttons, int modifiers, QWheelEvent** outptr_QWheelEvent, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QWheelEvent* ret = new QWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, static_cast<int>(qt4Delta), static_cast<Qt::Orientation>(qt4Orientation), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
	*outptr_QWheelEvent = ret;
	*outptr_QInputEvent = static_cast<QInputEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QWheelEvent_new4(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int qt4Delta, int qt4Orientation, int buttons, int modifiers, int phase, QWheelEvent** outptr_QWheelEvent, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QWheelEvent* ret = new QWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, static_cast<int>(qt4Delta), static_cast<Qt::Orientation>(qt4Orientation), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::ScrollPhase>(phase));
	*outptr_QWheelEvent = ret;
	*outptr_QInputEvent = static_cast<QInputEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QWheelEvent_new5(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int qt4Delta, int qt4Orientation, int buttons, int modifiers, int phase, int source, QWheelEvent** outptr_QWheelEvent, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QWheelEvent* ret = new QWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, static_cast<int>(qt4Delta), static_cast<Qt::Orientation>(qt4Orientation), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::ScrollPhase>(phase), static_cast<Qt::MouseEventSource>(source));
	*outptr_QWheelEvent = ret;
	*outptr_QInputEvent = static_cast<QInputEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QWheelEvent_new6(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int qt4Delta, int qt4Orientation, int buttons, int modifiers, int phase, int source, bool inverted, QWheelEvent** outptr_QWheelEvent, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QWheelEvent* ret = new QWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, static_cast<int>(qt4Delta), static_cast<Qt::Orientation>(qt4Orientation), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::ScrollPhase>(phase), static_cast<Qt::MouseEventSource>(source), inverted);
	*outptr_QWheelEvent = ret;
	*outptr_QInputEvent = static_cast<QInputEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QWheelEvent_new7(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int buttons, int modifiers, int phase, bool inverted, QWheelEvent** outptr_QWheelEvent, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QWheelEvent* ret = new QWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::ScrollPhase>(phase), inverted);
	*outptr_QWheelEvent = ret;
	*outptr_QInputEvent = static_cast<QInputEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QWheelEvent_new8(QWheelEvent* param1, QWheelEvent** outptr_QWheelEvent, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QWheelEvent* ret = new QWheelEvent(*param1);
	*outptr_QWheelEvent = ret;
	*outptr_QInputEvent = static_cast<QInputEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QWheelEvent_new9(QPointF* pos, int delta, int buttons, int modifiers, int orient, QWheelEvent** outptr_QWheelEvent, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QWheelEvent* ret = new QWheelEvent(*pos, static_cast<int>(delta), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::Orientation>(orient));
	*outptr_QWheelEvent = ret;
	*outptr_QInputEvent = static_cast<QInputEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QWheelEvent_new10(QPointF* pos, QPointF* globalPos, int delta, int buttons, int modifiers, int orient, QWheelEvent** outptr_QWheelEvent, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QWheelEvent* ret = new QWheelEvent(*pos, *globalPos, static_cast<int>(delta), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::Orientation>(orient));
	*outptr_QWheelEvent = ret;
	*outptr_QInputEvent = static_cast<QInputEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QWheelEvent_new11(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int buttons, int modifiers, int phase, bool inverted, int source, QWheelEvent** outptr_QWheelEvent, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QWheelEvent* ret = new QWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::ScrollPhase>(phase), inverted, static_cast<Qt::MouseEventSource>(source));
	*outptr_QWheelEvent = ret;
	*outptr_QInputEvent = static_cast<QInputEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
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

void QWheelEvent_Delete(QWheelEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QWheelEvent*>( self );
	} else {
		delete self;
	}
}

void QTabletEvent_new(int t, QPointF* pos, QPointF* globalPos, int device, int pointerType, double pressure, int xTilt, int yTilt, double tangentialPressure, double rotation, int z, int keyState, long long uniqueID, QTabletEvent** outptr_QTabletEvent, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QTabletEvent* ret = new QTabletEvent(static_cast<QEvent::Type>(t), *pos, *globalPos, static_cast<int>(device), static_cast<int>(pointerType), static_cast<qreal>(pressure), static_cast<int>(xTilt), static_cast<int>(yTilt), static_cast<qreal>(tangentialPressure), static_cast<qreal>(rotation), static_cast<int>(z), static_cast<Qt::KeyboardModifiers>(keyState), static_cast<qint64>(uniqueID));
	*outptr_QTabletEvent = ret;
	*outptr_QInputEvent = static_cast<QInputEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QTabletEvent_new2(int t, QPointF* pos, QPointF* globalPos, int device, int pointerType, double pressure, int xTilt, int yTilt, double tangentialPressure, double rotation, int z, int keyState, long long uniqueID, int button, int buttons, QTabletEvent** outptr_QTabletEvent, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QTabletEvent* ret = new QTabletEvent(static_cast<QEvent::Type>(t), *pos, *globalPos, static_cast<int>(device), static_cast<int>(pointerType), static_cast<qreal>(pressure), static_cast<int>(xTilt), static_cast<int>(yTilt), static_cast<qreal>(tangentialPressure), static_cast<qreal>(rotation), static_cast<int>(z), static_cast<Qt::KeyboardModifiers>(keyState), static_cast<qint64>(uniqueID), static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons));
	*outptr_QTabletEvent = ret;
	*outptr_QInputEvent = static_cast<QInputEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QTabletEvent_new3(QTabletEvent* param1, QTabletEvent** outptr_QTabletEvent, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QTabletEvent* ret = new QTabletEvent(*param1);
	*outptr_QTabletEvent = ret;
	*outptr_QInputEvent = static_cast<QInputEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
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

void QTabletEvent_Delete(QTabletEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QTabletEvent*>( self );
	} else {
		delete self;
	}
}

void QNativeGestureEvent_new(int typeVal, QPointF* localPos, QPointF* windowPos, QPointF* screenPos, double value, unsigned long sequenceId, unsigned long long intArgument, QNativeGestureEvent** outptr_QNativeGestureEvent, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QNativeGestureEvent* ret = new QNativeGestureEvent(static_cast<Qt::NativeGestureType>(typeVal), *localPos, *windowPos, *screenPos, static_cast<qreal>(value), static_cast<ulong>(sequenceId), static_cast<quint64>(intArgument));
	*outptr_QNativeGestureEvent = ret;
	*outptr_QInputEvent = static_cast<QInputEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QNativeGestureEvent_new2(int typeVal, QTouchDevice* dev, QPointF* localPos, QPointF* windowPos, QPointF* screenPos, double value, unsigned long sequenceId, unsigned long long intArgument, QNativeGestureEvent** outptr_QNativeGestureEvent, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QNativeGestureEvent* ret = new QNativeGestureEvent(static_cast<Qt::NativeGestureType>(typeVal), dev, *localPos, *windowPos, *screenPos, static_cast<qreal>(value), static_cast<ulong>(sequenceId), static_cast<quint64>(intArgument));
	*outptr_QNativeGestureEvent = ret;
	*outptr_QInputEvent = static_cast<QInputEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QNativeGestureEvent_new3(QNativeGestureEvent* param1, QNativeGestureEvent** outptr_QNativeGestureEvent, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QNativeGestureEvent* ret = new QNativeGestureEvent(*param1);
	*outptr_QNativeGestureEvent = ret;
	*outptr_QInputEvent = static_cast<QInputEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
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

void QNativeGestureEvent_Delete(QNativeGestureEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QNativeGestureEvent*>( self );
	} else {
		delete self;
	}
}

void QKeyEvent_new(int typeVal, int key, int modifiers, QKeyEvent** outptr_QKeyEvent, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QKeyEvent* ret = new QKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers));
	*outptr_QKeyEvent = ret;
	*outptr_QInputEvent = static_cast<QInputEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QKeyEvent_new2(int typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, QKeyEvent** outptr_QKeyEvent, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QKeyEvent* ret = new QKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<quint32>(nativeScanCode), static_cast<quint32>(nativeVirtualKey), static_cast<quint32>(nativeModifiers));
	*outptr_QKeyEvent = ret;
	*outptr_QInputEvent = static_cast<QInputEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QKeyEvent_new3(QKeyEvent* param1, QKeyEvent** outptr_QKeyEvent, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QKeyEvent* ret = new QKeyEvent(*param1);
	*outptr_QKeyEvent = ret;
	*outptr_QInputEvent = static_cast<QInputEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QKeyEvent_new4(int typeVal, int key, int modifiers, struct miqt_string text, QKeyEvent** outptr_QKeyEvent, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QKeyEvent* ret = new QKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), text_QString);
	*outptr_QKeyEvent = ret;
	*outptr_QInputEvent = static_cast<QInputEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QKeyEvent_new5(int typeVal, int key, int modifiers, struct miqt_string text, bool autorep, QKeyEvent** outptr_QKeyEvent, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QKeyEvent* ret = new QKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), text_QString, autorep);
	*outptr_QKeyEvent = ret;
	*outptr_QInputEvent = static_cast<QInputEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QKeyEvent_new6(int typeVal, int key, int modifiers, struct miqt_string text, bool autorep, uint16_t count, QKeyEvent** outptr_QKeyEvent, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QKeyEvent* ret = new QKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), text_QString, autorep, static_cast<ushort>(count));
	*outptr_QKeyEvent = ret;
	*outptr_QInputEvent = static_cast<QInputEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QKeyEvent_new7(int typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, struct miqt_string text, QKeyEvent** outptr_QKeyEvent, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QKeyEvent* ret = new QKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<quint32>(nativeScanCode), static_cast<quint32>(nativeVirtualKey), static_cast<quint32>(nativeModifiers), text_QString);
	*outptr_QKeyEvent = ret;
	*outptr_QInputEvent = static_cast<QInputEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QKeyEvent_new8(int typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, struct miqt_string text, bool autorep, QKeyEvent** outptr_QKeyEvent, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QKeyEvent* ret = new QKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<quint32>(nativeScanCode), static_cast<quint32>(nativeVirtualKey), static_cast<quint32>(nativeModifiers), text_QString, autorep);
	*outptr_QKeyEvent = ret;
	*outptr_QInputEvent = static_cast<QInputEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QKeyEvent_new9(int typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, struct miqt_string text, bool autorep, uint16_t count, QKeyEvent** outptr_QKeyEvent, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QKeyEvent* ret = new QKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<quint32>(nativeScanCode), static_cast<quint32>(nativeVirtualKey), static_cast<quint32>(nativeModifiers), text_QString, autorep, static_cast<ushort>(count));
	*outptr_QKeyEvent = ret;
	*outptr_QInputEvent = static_cast<QInputEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
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

struct miqt_string QKeyEvent_Text(const QKeyEvent* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
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

void QKeyEvent_Delete(QKeyEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QKeyEvent*>( self );
	} else {
		delete self;
	}
}

void QFocusEvent_new(int typeVal, QFocusEvent** outptr_QFocusEvent, QEvent** outptr_QEvent) {
	QFocusEvent* ret = new QFocusEvent(static_cast<QEvent::Type>(typeVal));
	*outptr_QFocusEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QFocusEvent_new2(QFocusEvent* param1, QFocusEvent** outptr_QFocusEvent, QEvent** outptr_QEvent) {
	QFocusEvent* ret = new QFocusEvent(*param1);
	*outptr_QFocusEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QFocusEvent_new3(int typeVal, int reason, QFocusEvent** outptr_QFocusEvent, QEvent** outptr_QEvent) {
	QFocusEvent* ret = new QFocusEvent(static_cast<QEvent::Type>(typeVal), static_cast<Qt::FocusReason>(reason));
	*outptr_QFocusEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
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

void QFocusEvent_Delete(QFocusEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QFocusEvent*>( self );
	} else {
		delete self;
	}
}

void QPaintEvent_new(QRegion* paintRegion, QPaintEvent** outptr_QPaintEvent, QEvent** outptr_QEvent) {
	QPaintEvent* ret = new QPaintEvent(*paintRegion);
	*outptr_QPaintEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QPaintEvent_new2(QRect* paintRect, QPaintEvent** outptr_QPaintEvent, QEvent** outptr_QEvent) {
	QPaintEvent* ret = new QPaintEvent(*paintRect);
	*outptr_QPaintEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QPaintEvent_new3(QPaintEvent* param1, QPaintEvent** outptr_QPaintEvent, QEvent** outptr_QEvent) {
	QPaintEvent* ret = new QPaintEvent(*param1);
	*outptr_QPaintEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
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

void QPaintEvent_Delete(QPaintEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QPaintEvent*>( self );
	} else {
		delete self;
	}
}

void QMoveEvent_new(QPoint* pos, QPoint* oldPos, QMoveEvent** outptr_QMoveEvent, QEvent** outptr_QEvent) {
	QMoveEvent* ret = new QMoveEvent(*pos, *oldPos);
	*outptr_QMoveEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QMoveEvent_new2(QMoveEvent* param1, QMoveEvent** outptr_QMoveEvent, QEvent** outptr_QEvent) {
	QMoveEvent* ret = new QMoveEvent(*param1);
	*outptr_QMoveEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
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

void QMoveEvent_Delete(QMoveEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QMoveEvent*>( self );
	} else {
		delete self;
	}
}

void QExposeEvent_new(QRegion* rgn, QExposeEvent** outptr_QExposeEvent, QEvent** outptr_QEvent) {
	QExposeEvent* ret = new QExposeEvent(*rgn);
	*outptr_QExposeEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QExposeEvent_new2(QExposeEvent* param1, QExposeEvent** outptr_QExposeEvent, QEvent** outptr_QEvent) {
	QExposeEvent* ret = new QExposeEvent(*param1);
	*outptr_QExposeEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

QRegion* QExposeEvent_Region(const QExposeEvent* self) {
	const QRegion& _ret = self->region();
	// Cast returned reference into pointer
	return const_cast<QRegion*>(&_ret);
}

void QExposeEvent_Delete(QExposeEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QExposeEvent*>( self );
	} else {
		delete self;
	}
}

void QPlatformSurfaceEvent_new(int surfaceEventType, QPlatformSurfaceEvent** outptr_QPlatformSurfaceEvent, QEvent** outptr_QEvent) {
	QPlatformSurfaceEvent* ret = new QPlatformSurfaceEvent(static_cast<QPlatformSurfaceEvent::SurfaceEventType>(surfaceEventType));
	*outptr_QPlatformSurfaceEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QPlatformSurfaceEvent_new2(QPlatformSurfaceEvent* param1, QPlatformSurfaceEvent** outptr_QPlatformSurfaceEvent, QEvent** outptr_QEvent) {
	QPlatformSurfaceEvent* ret = new QPlatformSurfaceEvent(*param1);
	*outptr_QPlatformSurfaceEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

int QPlatformSurfaceEvent_SurfaceEventType(const QPlatformSurfaceEvent* self) {
	QPlatformSurfaceEvent::SurfaceEventType _ret = self->surfaceEventType();
	return static_cast<int>(_ret);
}

void QPlatformSurfaceEvent_Delete(QPlatformSurfaceEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QPlatformSurfaceEvent*>( self );
	} else {
		delete self;
	}
}

void QResizeEvent_new(QSize* size, QSize* oldSize, QResizeEvent** outptr_QResizeEvent, QEvent** outptr_QEvent) {
	QResizeEvent* ret = new QResizeEvent(*size, *oldSize);
	*outptr_QResizeEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QResizeEvent_new2(QResizeEvent* param1, QResizeEvent** outptr_QResizeEvent, QEvent** outptr_QEvent) {
	QResizeEvent* ret = new QResizeEvent(*param1);
	*outptr_QResizeEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
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

void QResizeEvent_Delete(QResizeEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QResizeEvent*>( self );
	} else {
		delete self;
	}
}

void QCloseEvent_new(QCloseEvent** outptr_QCloseEvent, QEvent** outptr_QEvent) {
	QCloseEvent* ret = new QCloseEvent();
	*outptr_QCloseEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QCloseEvent_new2(QCloseEvent* param1, QCloseEvent** outptr_QCloseEvent, QEvent** outptr_QEvent) {
	QCloseEvent* ret = new QCloseEvent(*param1);
	*outptr_QCloseEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QCloseEvent_OperatorAssign(QCloseEvent* self, QCloseEvent* param1) {
	self->operator=(*param1);
}

void QCloseEvent_Delete(QCloseEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QCloseEvent*>( self );
	} else {
		delete self;
	}
}

void QIconDragEvent_new(QIconDragEvent** outptr_QIconDragEvent, QEvent** outptr_QEvent) {
	QIconDragEvent* ret = new QIconDragEvent();
	*outptr_QIconDragEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QIconDragEvent_new2(QIconDragEvent* param1, QIconDragEvent** outptr_QIconDragEvent, QEvent** outptr_QEvent) {
	QIconDragEvent* ret = new QIconDragEvent(*param1);
	*outptr_QIconDragEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QIconDragEvent_OperatorAssign(QIconDragEvent* self, QIconDragEvent* param1) {
	self->operator=(*param1);
}

void QIconDragEvent_Delete(QIconDragEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QIconDragEvent*>( self );
	} else {
		delete self;
	}
}

void QShowEvent_new(QShowEvent** outptr_QShowEvent, QEvent** outptr_QEvent) {
	QShowEvent* ret = new QShowEvent();
	*outptr_QShowEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QShowEvent_new2(QShowEvent* param1, QShowEvent** outptr_QShowEvent, QEvent** outptr_QEvent) {
	QShowEvent* ret = new QShowEvent(*param1);
	*outptr_QShowEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QShowEvent_OperatorAssign(QShowEvent* self, QShowEvent* param1) {
	self->operator=(*param1);
}

void QShowEvent_Delete(QShowEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QShowEvent*>( self );
	} else {
		delete self;
	}
}

void QHideEvent_new(QHideEvent** outptr_QHideEvent, QEvent** outptr_QEvent) {
	QHideEvent* ret = new QHideEvent();
	*outptr_QHideEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QHideEvent_new2(QHideEvent* param1, QHideEvent** outptr_QHideEvent, QEvent** outptr_QEvent) {
	QHideEvent* ret = new QHideEvent(*param1);
	*outptr_QHideEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QHideEvent_OperatorAssign(QHideEvent* self, QHideEvent* param1) {
	self->operator=(*param1);
}

void QHideEvent_Delete(QHideEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QHideEvent*>( self );
	} else {
		delete self;
	}
}

void QContextMenuEvent_new(int reason, QPoint* pos, QPoint* globalPos, int modifiers, QContextMenuEvent** outptr_QContextMenuEvent, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QContextMenuEvent* ret = new QContextMenuEvent(static_cast<QContextMenuEvent::Reason>(reason), *pos, *globalPos, static_cast<Qt::KeyboardModifiers>(modifiers));
	*outptr_QContextMenuEvent = ret;
	*outptr_QInputEvent = static_cast<QInputEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QContextMenuEvent_new2(int reason, QPoint* pos, QPoint* globalPos, QContextMenuEvent** outptr_QContextMenuEvent, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QContextMenuEvent* ret = new QContextMenuEvent(static_cast<QContextMenuEvent::Reason>(reason), *pos, *globalPos);
	*outptr_QContextMenuEvent = ret;
	*outptr_QInputEvent = static_cast<QInputEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QContextMenuEvent_new3(int reason, QPoint* pos, QContextMenuEvent** outptr_QContextMenuEvent, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QContextMenuEvent* ret = new QContextMenuEvent(static_cast<QContextMenuEvent::Reason>(reason), *pos);
	*outptr_QContextMenuEvent = ret;
	*outptr_QInputEvent = static_cast<QInputEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QContextMenuEvent_new4(QContextMenuEvent* param1, QContextMenuEvent** outptr_QContextMenuEvent, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QContextMenuEvent* ret = new QContextMenuEvent(*param1);
	*outptr_QContextMenuEvent = ret;
	*outptr_QInputEvent = static_cast<QInputEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
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

void QContextMenuEvent_Delete(QContextMenuEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QContextMenuEvent*>( self );
	} else {
		delete self;
	}
}

void QInputMethodEvent_new(QInputMethodEvent** outptr_QInputMethodEvent, QEvent** outptr_QEvent) {
	QInputMethodEvent* ret = new QInputMethodEvent();
	*outptr_QInputMethodEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QInputMethodEvent_new2(struct miqt_string preeditText, struct miqt_array /* of QInputMethodEvent__Attribute* */  attributes, QInputMethodEvent** outptr_QInputMethodEvent, QEvent** outptr_QEvent) {
	QString preeditText_QString = QString::fromUtf8(preeditText.data, preeditText.len);
	QList<QInputMethodEvent::Attribute> attributes_QList;
	attributes_QList.reserve(attributes.len);
	QInputMethodEvent__Attribute** attributes_arr = static_cast<QInputMethodEvent__Attribute**>(attributes.data);
	for(size_t i = 0; i < attributes.len; ++i) {
		attributes_QList.push_back(*(attributes_arr[i]));
	}
	QInputMethodEvent* ret = new QInputMethodEvent(preeditText_QString, attributes_QList);
	*outptr_QInputMethodEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QInputMethodEvent_new3(QInputMethodEvent* other, QInputMethodEvent** outptr_QInputMethodEvent, QEvent** outptr_QEvent) {
	QInputMethodEvent* ret = new QInputMethodEvent(*other);
	*outptr_QInputMethodEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QInputMethodEvent_SetCommitString(QInputMethodEvent* self, struct miqt_string commitString) {
	QString commitString_QString = QString::fromUtf8(commitString.data, commitString.len);
	self->setCommitString(commitString_QString);
}

struct miqt_array /* of QInputMethodEvent__Attribute* */  QInputMethodEvent_Attributes(const QInputMethodEvent* self) {
	const QList<QInputMethodEvent::Attribute>& _ret = self->attributes();
	// Convert QList<> from C++ memory to manually-managed C memory
	QInputMethodEvent__Attribute** _arr = static_cast<QInputMethodEvent__Attribute**>(malloc(sizeof(QInputMethodEvent__Attribute*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QInputMethodEvent::Attribute(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QInputMethodEvent_PreeditString(const QInputMethodEvent* self) {
	const QString _ret = self->preeditString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputMethodEvent_CommitString(const QInputMethodEvent* self) {
	const QString _ret = self->commitString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QInputMethodEvent_ReplacementStart(const QInputMethodEvent* self) {
	return self->replacementStart();
}

int QInputMethodEvent_ReplacementLength(const QInputMethodEvent* self) {
	return self->replacementLength();
}

void QInputMethodEvent_SetCommitString2(QInputMethodEvent* self, struct miqt_string commitString, int replaceFrom) {
	QString commitString_QString = QString::fromUtf8(commitString.data, commitString.len);
	self->setCommitString(commitString_QString, static_cast<int>(replaceFrom));
}

void QInputMethodEvent_SetCommitString3(QInputMethodEvent* self, struct miqt_string commitString, int replaceFrom, int replaceLength) {
	QString commitString_QString = QString::fromUtf8(commitString.data, commitString.len);
	self->setCommitString(commitString_QString, static_cast<int>(replaceFrom), static_cast<int>(replaceLength));
}

void QInputMethodEvent_Delete(QInputMethodEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QInputMethodEvent*>( self );
	} else {
		delete self;
	}
}

void QInputMethodQueryEvent_new(int queries, QInputMethodQueryEvent** outptr_QInputMethodQueryEvent, QEvent** outptr_QEvent) {
	QInputMethodQueryEvent* ret = new QInputMethodQueryEvent(static_cast<Qt::InputMethodQueries>(queries));
	*outptr_QInputMethodQueryEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QInputMethodQueryEvent_new2(QInputMethodQueryEvent* param1, QInputMethodQueryEvent** outptr_QInputMethodQueryEvent, QEvent** outptr_QEvent) {
	QInputMethodQueryEvent* ret = new QInputMethodQueryEvent(*param1);
	*outptr_QInputMethodQueryEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
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

void QInputMethodQueryEvent_Delete(QInputMethodQueryEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QInputMethodQueryEvent*>( self );
	} else {
		delete self;
	}
}

void QDropEvent_new(QPointF* pos, int actions, QMimeData* data, int buttons, int modifiers, QDropEvent** outptr_QDropEvent, QEvent** outptr_QEvent) {
	QDropEvent* ret = new QDropEvent(*pos, static_cast<Qt::DropActions>(actions), data, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
	*outptr_QDropEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QDropEvent_new2(QDropEvent* param1, QDropEvent** outptr_QDropEvent, QEvent** outptr_QEvent) {
	QDropEvent* ret = new QDropEvent(*param1);
	*outptr_QDropEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QDropEvent_new3(QPointF* pos, int actions, QMimeData* data, int buttons, int modifiers, int typeVal, QDropEvent** outptr_QDropEvent, QEvent** outptr_QEvent) {
	QDropEvent* ret = new QDropEvent(*pos, static_cast<Qt::DropActions>(actions), data, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<QEvent::Type>(typeVal));
	*outptr_QDropEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
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

void QDropEvent_Delete(QDropEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QDropEvent*>( self );
	} else {
		delete self;
	}
}

void QDragMoveEvent_new(QPoint* pos, int actions, QMimeData* data, int buttons, int modifiers, QDragMoveEvent** outptr_QDragMoveEvent, QDropEvent** outptr_QDropEvent, QEvent** outptr_QEvent) {
	QDragMoveEvent* ret = new QDragMoveEvent(*pos, static_cast<Qt::DropActions>(actions), data, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
	*outptr_QDragMoveEvent = ret;
	*outptr_QDropEvent = static_cast<QDropEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QDragMoveEvent_new2(QDragMoveEvent* param1, QDragMoveEvent** outptr_QDragMoveEvent, QDropEvent** outptr_QDropEvent, QEvent** outptr_QEvent) {
	QDragMoveEvent* ret = new QDragMoveEvent(*param1);
	*outptr_QDragMoveEvent = ret;
	*outptr_QDropEvent = static_cast<QDropEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QDragMoveEvent_new3(QPoint* pos, int actions, QMimeData* data, int buttons, int modifiers, int typeVal, QDragMoveEvent** outptr_QDragMoveEvent, QDropEvent** outptr_QDropEvent, QEvent** outptr_QEvent) {
	QDragMoveEvent* ret = new QDragMoveEvent(*pos, static_cast<Qt::DropActions>(actions), data, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<QEvent::Type>(typeVal));
	*outptr_QDragMoveEvent = ret;
	*outptr_QDropEvent = static_cast<QDropEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
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

void QDragMoveEvent_Delete(QDragMoveEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QDragMoveEvent*>( self );
	} else {
		delete self;
	}
}

void QDragEnterEvent_new(QPoint* pos, int actions, QMimeData* data, int buttons, int modifiers, QDragEnterEvent** outptr_QDragEnterEvent, QDragMoveEvent** outptr_QDragMoveEvent, QDropEvent** outptr_QDropEvent, QEvent** outptr_QEvent) {
	QDragEnterEvent* ret = new QDragEnterEvent(*pos, static_cast<Qt::DropActions>(actions), data, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
	*outptr_QDragEnterEvent = ret;
	*outptr_QDragMoveEvent = static_cast<QDragMoveEvent*>(ret);
	*outptr_QDropEvent = static_cast<QDropEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QDragEnterEvent_new2(QDragEnterEvent* param1, QDragEnterEvent** outptr_QDragEnterEvent, QDragMoveEvent** outptr_QDragMoveEvent, QDropEvent** outptr_QDropEvent, QEvent** outptr_QEvent) {
	QDragEnterEvent* ret = new QDragEnterEvent(*param1);
	*outptr_QDragEnterEvent = ret;
	*outptr_QDragMoveEvent = static_cast<QDragMoveEvent*>(ret);
	*outptr_QDropEvent = static_cast<QDropEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QDragEnterEvent_OperatorAssign(QDragEnterEvent* self, QDragEnterEvent* param1) {
	self->operator=(*param1);
}

void QDragEnterEvent_Delete(QDragEnterEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QDragEnterEvent*>( self );
	} else {
		delete self;
	}
}

void QDragLeaveEvent_new(QDragLeaveEvent** outptr_QDragLeaveEvent, QEvent** outptr_QEvent) {
	QDragLeaveEvent* ret = new QDragLeaveEvent();
	*outptr_QDragLeaveEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QDragLeaveEvent_new2(QDragLeaveEvent* param1, QDragLeaveEvent** outptr_QDragLeaveEvent, QEvent** outptr_QEvent) {
	QDragLeaveEvent* ret = new QDragLeaveEvent(*param1);
	*outptr_QDragLeaveEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QDragLeaveEvent_OperatorAssign(QDragLeaveEvent* self, QDragLeaveEvent* param1) {
	self->operator=(*param1);
}

void QDragLeaveEvent_Delete(QDragLeaveEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QDragLeaveEvent*>( self );
	} else {
		delete self;
	}
}

void QHelpEvent_new(int typeVal, QPoint* pos, QPoint* globalPos, QHelpEvent** outptr_QHelpEvent, QEvent** outptr_QEvent) {
	QHelpEvent* ret = new QHelpEvent(static_cast<QEvent::Type>(typeVal), *pos, *globalPos);
	*outptr_QHelpEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QHelpEvent_new2(QHelpEvent* param1, QHelpEvent** outptr_QHelpEvent, QEvent** outptr_QEvent) {
	QHelpEvent* ret = new QHelpEvent(*param1);
	*outptr_QHelpEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
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

void QHelpEvent_Delete(QHelpEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QHelpEvent*>( self );
	} else {
		delete self;
	}
}

void QStatusTipEvent_new(struct miqt_string tip, QStatusTipEvent** outptr_QStatusTipEvent, QEvent** outptr_QEvent) {
	QString tip_QString = QString::fromUtf8(tip.data, tip.len);
	QStatusTipEvent* ret = new QStatusTipEvent(tip_QString);
	*outptr_QStatusTipEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QStatusTipEvent_new2(QStatusTipEvent* param1, QStatusTipEvent** outptr_QStatusTipEvent, QEvent** outptr_QEvent) {
	QStatusTipEvent* ret = new QStatusTipEvent(*param1);
	*outptr_QStatusTipEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

struct miqt_string QStatusTipEvent_Tip(const QStatusTipEvent* self) {
	QString _ret = self->tip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QStatusTipEvent_Delete(QStatusTipEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStatusTipEvent*>( self );
	} else {
		delete self;
	}
}

void QWhatsThisClickedEvent_new(struct miqt_string href, QWhatsThisClickedEvent** outptr_QWhatsThisClickedEvent, QEvent** outptr_QEvent) {
	QString href_QString = QString::fromUtf8(href.data, href.len);
	QWhatsThisClickedEvent* ret = new QWhatsThisClickedEvent(href_QString);
	*outptr_QWhatsThisClickedEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QWhatsThisClickedEvent_new2(QWhatsThisClickedEvent* param1, QWhatsThisClickedEvent** outptr_QWhatsThisClickedEvent, QEvent** outptr_QEvent) {
	QWhatsThisClickedEvent* ret = new QWhatsThisClickedEvent(*param1);
	*outptr_QWhatsThisClickedEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

struct miqt_string QWhatsThisClickedEvent_Href(const QWhatsThisClickedEvent* self) {
	QString _ret = self->href();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWhatsThisClickedEvent_Delete(QWhatsThisClickedEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QWhatsThisClickedEvent*>( self );
	} else {
		delete self;
	}
}

void QActionEvent_new(int typeVal, QAction* action, QActionEvent** outptr_QActionEvent, QEvent** outptr_QEvent) {
	QActionEvent* ret = new QActionEvent(static_cast<int>(typeVal), action);
	*outptr_QActionEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QActionEvent_new2(QActionEvent* param1, QActionEvent** outptr_QActionEvent, QEvent** outptr_QEvent) {
	QActionEvent* ret = new QActionEvent(*param1);
	*outptr_QActionEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QActionEvent_new3(int typeVal, QAction* action, QAction* before, QActionEvent** outptr_QActionEvent, QEvent** outptr_QEvent) {
	QActionEvent* ret = new QActionEvent(static_cast<int>(typeVal), action, before);
	*outptr_QActionEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
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

void QActionEvent_Delete(QActionEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QActionEvent*>( self );
	} else {
		delete self;
	}
}

void QFileOpenEvent_new(struct miqt_string file, QFileOpenEvent** outptr_QFileOpenEvent, QEvent** outptr_QEvent) {
	QString file_QString = QString::fromUtf8(file.data, file.len);
	QFileOpenEvent* ret = new QFileOpenEvent(file_QString);
	*outptr_QFileOpenEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QFileOpenEvent_new2(QUrl* url, QFileOpenEvent** outptr_QFileOpenEvent, QEvent** outptr_QEvent) {
	QFileOpenEvent* ret = new QFileOpenEvent(*url);
	*outptr_QFileOpenEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QFileOpenEvent_new3(QFileOpenEvent* param1, QFileOpenEvent** outptr_QFileOpenEvent, QEvent** outptr_QEvent) {
	QFileOpenEvent* ret = new QFileOpenEvent(*param1);
	*outptr_QFileOpenEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

struct miqt_string QFileOpenEvent_File(const QFileOpenEvent* self) {
	QString _ret = self->file();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QUrl* QFileOpenEvent_Url(const QFileOpenEvent* self) {
	return new QUrl(self->url());
}

bool QFileOpenEvent_OpenFile(const QFileOpenEvent* self, QFile* file, int flags) {
	return self->openFile(*file, static_cast<QIODevice::OpenMode>(flags));
}

void QFileOpenEvent_Delete(QFileOpenEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QFileOpenEvent*>( self );
	} else {
		delete self;
	}
}

void QToolBarChangeEvent_new(bool t, QToolBarChangeEvent** outptr_QToolBarChangeEvent, QEvent** outptr_QEvent) {
	QToolBarChangeEvent* ret = new QToolBarChangeEvent(t);
	*outptr_QToolBarChangeEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QToolBarChangeEvent_new2(QToolBarChangeEvent* param1, QToolBarChangeEvent** outptr_QToolBarChangeEvent, QEvent** outptr_QEvent) {
	QToolBarChangeEvent* ret = new QToolBarChangeEvent(*param1);
	*outptr_QToolBarChangeEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

bool QToolBarChangeEvent_Toggle(const QToolBarChangeEvent* self) {
	return self->toggle();
}

void QToolBarChangeEvent_Delete(QToolBarChangeEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QToolBarChangeEvent*>( self );
	} else {
		delete self;
	}
}

void QShortcutEvent_new(QKeySequence* key, int id, QShortcutEvent** outptr_QShortcutEvent, QEvent** outptr_QEvent) {
	QShortcutEvent* ret = new QShortcutEvent(*key, static_cast<int>(id));
	*outptr_QShortcutEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QShortcutEvent_new2(QShortcutEvent* param1, QShortcutEvent** outptr_QShortcutEvent, QEvent** outptr_QEvent) {
	QShortcutEvent* ret = new QShortcutEvent(*param1);
	*outptr_QShortcutEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QShortcutEvent_new3(QKeySequence* key, int id, bool ambiguous, QShortcutEvent** outptr_QShortcutEvent, QEvent** outptr_QEvent) {
	QShortcutEvent* ret = new QShortcutEvent(*key, static_cast<int>(id), ambiguous);
	*outptr_QShortcutEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
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

void QShortcutEvent_Delete(QShortcutEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QShortcutEvent*>( self );
	} else {
		delete self;
	}
}

void QWindowStateChangeEvent_new(int aOldState, QWindowStateChangeEvent** outptr_QWindowStateChangeEvent, QEvent** outptr_QEvent) {
	QWindowStateChangeEvent* ret = new QWindowStateChangeEvent(static_cast<Qt::WindowStates>(aOldState));
	*outptr_QWindowStateChangeEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QWindowStateChangeEvent_new2(QWindowStateChangeEvent* param1, QWindowStateChangeEvent** outptr_QWindowStateChangeEvent, QEvent** outptr_QEvent) {
	QWindowStateChangeEvent* ret = new QWindowStateChangeEvent(*param1);
	*outptr_QWindowStateChangeEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QWindowStateChangeEvent_new3(int aOldState, bool isOverride, QWindowStateChangeEvent** outptr_QWindowStateChangeEvent, QEvent** outptr_QEvent) {
	QWindowStateChangeEvent* ret = new QWindowStateChangeEvent(static_cast<Qt::WindowStates>(aOldState), isOverride);
	*outptr_QWindowStateChangeEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

int QWindowStateChangeEvent_OldState(const QWindowStateChangeEvent* self) {
	Qt::WindowStates _ret = self->oldState();
	return static_cast<int>(_ret);
}

bool QWindowStateChangeEvent_IsOverride(const QWindowStateChangeEvent* self) {
	return self->isOverride();
}

void QWindowStateChangeEvent_Delete(QWindowStateChangeEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QWindowStateChangeEvent*>( self );
	} else {
		delete self;
	}
}

void QPointingDeviceUniqueId_new(QPointingDeviceUniqueId** outptr_QPointingDeviceUniqueId) {
	QPointingDeviceUniqueId* ret = new QPointingDeviceUniqueId();
	*outptr_QPointingDeviceUniqueId = ret;
}

void QPointingDeviceUniqueId_new2(QPointingDeviceUniqueId* param1, QPointingDeviceUniqueId** outptr_QPointingDeviceUniqueId) {
	QPointingDeviceUniqueId* ret = new QPointingDeviceUniqueId(*param1);
	*outptr_QPointingDeviceUniqueId = ret;
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

void QPointingDeviceUniqueId_Delete(QPointingDeviceUniqueId* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QPointingDeviceUniqueId*>( self );
	} else {
		delete self;
	}
}

void QTouchEvent_new(int eventType, QTouchEvent** outptr_QTouchEvent, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QTouchEvent* ret = new QTouchEvent(static_cast<QEvent::Type>(eventType));
	*outptr_QTouchEvent = ret;
	*outptr_QInputEvent = static_cast<QInputEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QTouchEvent_new2(QTouchEvent* param1, QTouchEvent** outptr_QTouchEvent, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QTouchEvent* ret = new QTouchEvent(*param1);
	*outptr_QTouchEvent = ret;
	*outptr_QInputEvent = static_cast<QInputEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QTouchEvent_new3(int eventType, QTouchDevice* device, QTouchEvent** outptr_QTouchEvent, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QTouchEvent* ret = new QTouchEvent(static_cast<QEvent::Type>(eventType), device);
	*outptr_QTouchEvent = ret;
	*outptr_QInputEvent = static_cast<QInputEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QTouchEvent_new4(int eventType, QTouchDevice* device, int modifiers, QTouchEvent** outptr_QTouchEvent, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QTouchEvent* ret = new QTouchEvent(static_cast<QEvent::Type>(eventType), device, static_cast<Qt::KeyboardModifiers>(modifiers));
	*outptr_QTouchEvent = ret;
	*outptr_QInputEvent = static_cast<QInputEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QTouchEvent_new5(int eventType, QTouchDevice* device, int modifiers, int touchPointStates, QTouchEvent** outptr_QTouchEvent, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QTouchEvent* ret = new QTouchEvent(static_cast<QEvent::Type>(eventType), device, static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::TouchPointStates>(touchPointStates));
	*outptr_QTouchEvent = ret;
	*outptr_QInputEvent = static_cast<QInputEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QTouchEvent_new6(int eventType, QTouchDevice* device, int modifiers, int touchPointStates, struct miqt_array /* of QTouchEvent__TouchPoint* */  touchPoints, QTouchEvent** outptr_QTouchEvent, QInputEvent** outptr_QInputEvent, QEvent** outptr_QEvent) {
	QList<QTouchEvent::TouchPoint> touchPoints_QList;
	touchPoints_QList.reserve(touchPoints.len);
	QTouchEvent__TouchPoint** touchPoints_arr = static_cast<QTouchEvent__TouchPoint**>(touchPoints.data);
	for(size_t i = 0; i < touchPoints.len; ++i) {
		touchPoints_QList.push_back(*(touchPoints_arr[i]));
	}
	QTouchEvent* ret = new QTouchEvent(static_cast<QEvent::Type>(eventType), device, static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::TouchPointStates>(touchPointStates), touchPoints_QList);
	*outptr_QTouchEvent = ret;
	*outptr_QInputEvent = static_cast<QInputEvent*>(ret);
	*outptr_QEvent = static_cast<QEvent*>(ret);
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

struct miqt_array /* of QTouchEvent__TouchPoint* */  QTouchEvent_TouchPoints(const QTouchEvent* self) {
	const QList<QTouchEvent::TouchPoint>& _ret = self->touchPoints();
	// Convert QList<> from C++ memory to manually-managed C memory
	QTouchEvent__TouchPoint** _arr = static_cast<QTouchEvent__TouchPoint**>(malloc(sizeof(QTouchEvent__TouchPoint*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QTouchEvent::TouchPoint(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
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

void QTouchEvent_SetTouchPoints(QTouchEvent* self, struct miqt_array /* of QTouchEvent__TouchPoint* */  atouchPoints) {
	QList<QTouchEvent::TouchPoint> atouchPoints_QList;
	atouchPoints_QList.reserve(atouchPoints.len);
	QTouchEvent__TouchPoint** atouchPoints_arr = static_cast<QTouchEvent__TouchPoint**>(atouchPoints.data);
	for(size_t i = 0; i < atouchPoints.len; ++i) {
		atouchPoints_QList.push_back(*(atouchPoints_arr[i]));
	}
	self->setTouchPoints(atouchPoints_QList);
}

void QTouchEvent_SetDevice(QTouchEvent* self, QTouchDevice* adevice) {
	self->setDevice(adevice);
}

void QTouchEvent_Delete(QTouchEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QTouchEvent*>( self );
	} else {
		delete self;
	}
}

void QScrollPrepareEvent_new(QPointF* startPos, QScrollPrepareEvent** outptr_QScrollPrepareEvent, QEvent** outptr_QEvent) {
	QScrollPrepareEvent* ret = new QScrollPrepareEvent(*startPos);
	*outptr_QScrollPrepareEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QScrollPrepareEvent_new2(QScrollPrepareEvent* param1, QScrollPrepareEvent** outptr_QScrollPrepareEvent, QEvent** outptr_QEvent) {
	QScrollPrepareEvent* ret = new QScrollPrepareEvent(*param1);
	*outptr_QScrollPrepareEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
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

void QScrollPrepareEvent_Delete(QScrollPrepareEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QScrollPrepareEvent*>( self );
	} else {
		delete self;
	}
}

void QScrollEvent_new(QPointF* contentPos, QPointF* overshoot, int scrollState, QScrollEvent** outptr_QScrollEvent, QEvent** outptr_QEvent) {
	QScrollEvent* ret = new QScrollEvent(*contentPos, *overshoot, static_cast<QScrollEvent::ScrollState>(scrollState));
	*outptr_QScrollEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QScrollEvent_new2(QScrollEvent* param1, QScrollEvent** outptr_QScrollEvent, QEvent** outptr_QEvent) {
	QScrollEvent* ret = new QScrollEvent(*param1);
	*outptr_QScrollEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
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

void QScrollEvent_Delete(QScrollEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QScrollEvent*>( self );
	} else {
		delete self;
	}
}

void QScreenOrientationChangeEvent_new(QScreen* screen, int orientation, QScreenOrientationChangeEvent** outptr_QScreenOrientationChangeEvent, QEvent** outptr_QEvent) {
	QScreenOrientationChangeEvent* ret = new QScreenOrientationChangeEvent(screen, static_cast<Qt::ScreenOrientation>(orientation));
	*outptr_QScreenOrientationChangeEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QScreenOrientationChangeEvent_new2(QScreenOrientationChangeEvent* param1, QScreenOrientationChangeEvent** outptr_QScreenOrientationChangeEvent, QEvent** outptr_QEvent) {
	QScreenOrientationChangeEvent* ret = new QScreenOrientationChangeEvent(*param1);
	*outptr_QScreenOrientationChangeEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

QScreen* QScreenOrientationChangeEvent_Screen(const QScreenOrientationChangeEvent* self) {
	return self->screen();
}

int QScreenOrientationChangeEvent_Orientation(const QScreenOrientationChangeEvent* self) {
	Qt::ScreenOrientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

void QScreenOrientationChangeEvent_Delete(QScreenOrientationChangeEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QScreenOrientationChangeEvent*>( self );
	} else {
		delete self;
	}
}

void QApplicationStateChangeEvent_new(int state, QApplicationStateChangeEvent** outptr_QApplicationStateChangeEvent, QEvent** outptr_QEvent) {
	QApplicationStateChangeEvent* ret = new QApplicationStateChangeEvent(static_cast<Qt::ApplicationState>(state));
	*outptr_QApplicationStateChangeEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

void QApplicationStateChangeEvent_new2(QApplicationStateChangeEvent* param1, QApplicationStateChangeEvent** outptr_QApplicationStateChangeEvent, QEvent** outptr_QEvent) {
	QApplicationStateChangeEvent* ret = new QApplicationStateChangeEvent(*param1);
	*outptr_QApplicationStateChangeEvent = ret;
	*outptr_QEvent = static_cast<QEvent*>(ret);
}

int QApplicationStateChangeEvent_ApplicationState(const QApplicationStateChangeEvent* self) {
	Qt::ApplicationState _ret = self->applicationState();
	return static_cast<int>(_ret);
}

void QApplicationStateChangeEvent_Delete(QApplicationStateChangeEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QApplicationStateChangeEvent*>( self );
	} else {
		delete self;
	}
}

void QInputMethodEvent__Attribute_new(int typ, int s, int l, QVariant* val, QInputMethodEvent__Attribute** outptr_QInputMethodEvent__Attribute) {
	QInputMethodEvent::Attribute* ret = new QInputMethodEvent::Attribute(static_cast<QInputMethodEvent::AttributeType>(typ), static_cast<int>(s), static_cast<int>(l), *val);
	*outptr_QInputMethodEvent__Attribute = ret;
}

void QInputMethodEvent__Attribute_new2(int typ, int s, int l, QInputMethodEvent__Attribute** outptr_QInputMethodEvent__Attribute) {
	QInputMethodEvent::Attribute* ret = new QInputMethodEvent::Attribute(static_cast<QInputMethodEvent::AttributeType>(typ), static_cast<int>(s), static_cast<int>(l));
	*outptr_QInputMethodEvent__Attribute = ret;
}

void QInputMethodEvent__Attribute_new3(QInputMethodEvent__Attribute* param1, QInputMethodEvent__Attribute** outptr_QInputMethodEvent__Attribute) {
	QInputMethodEvent::Attribute* ret = new QInputMethodEvent::Attribute(*param1);
	*outptr_QInputMethodEvent__Attribute = ret;
}

void QInputMethodEvent__Attribute_OperatorAssign(QInputMethodEvent__Attribute* self, QInputMethodEvent__Attribute* param1) {
	self->operator=(*param1);
}

void QInputMethodEvent__Attribute_Delete(QInputMethodEvent__Attribute* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QInputMethodEvent::Attribute*>( self );
	} else {
		delete self;
	}
}

void QTouchEvent__TouchPoint_new(QTouchEvent__TouchPoint** outptr_QTouchEvent__TouchPoint) {
	QTouchEvent::TouchPoint* ret = new QTouchEvent::TouchPoint();
	*outptr_QTouchEvent__TouchPoint = ret;
}

void QTouchEvent__TouchPoint_new2(QTouchEvent__TouchPoint* other, QTouchEvent__TouchPoint** outptr_QTouchEvent__TouchPoint) {
	QTouchEvent::TouchPoint* ret = new QTouchEvent::TouchPoint(*other);
	*outptr_QTouchEvent__TouchPoint = ret;
}

void QTouchEvent__TouchPoint_new3(int id, QTouchEvent__TouchPoint** outptr_QTouchEvent__TouchPoint) {
	QTouchEvent::TouchPoint* ret = new QTouchEvent::TouchPoint(static_cast<int>(id));
	*outptr_QTouchEvent__TouchPoint = ret;
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

struct miqt_array /* of QPointF* */  QTouchEvent__TouchPoint_RawScreenPositions(const QTouchEvent__TouchPoint* self) {
	QVector<QPointF> _ret = self->rawScreenPositions();
	// Convert QList<> from C++ memory to manually-managed C memory
	QPointF** _arr = static_cast<QPointF**>(malloc(sizeof(QPointF*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QPointF(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
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

void QTouchEvent__TouchPoint_SetRawScreenPositions(QTouchEvent__TouchPoint* self, struct miqt_array /* of QPointF* */  positions) {
	QVector<QPointF> positions_QList;
	positions_QList.reserve(positions.len);
	QPointF** positions_arr = static_cast<QPointF**>(positions.data);
	for(size_t i = 0; i < positions.len; ++i) {
		positions_QList.push_back(*(positions_arr[i]));
	}
	self->setRawScreenPositions(positions_QList);
}

void QTouchEvent__TouchPoint_Delete(QTouchEvent__TouchPoint* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QTouchEvent::TouchPoint*>( self );
	} else {
		delete self;
	}
}

