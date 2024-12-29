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
#include <QEventPoint>
#include <QExposeEvent>
#include <QFile>
#include <QFileOpenEvent>
#include <QFocusEvent>
#include <QHelpEvent>
#include <QHideEvent>
#include <QHoverEvent>
#include <QIconDragEvent>
#include <QInputDevice>
#include <QInputEvent>
#include <QInputMethodEvent>
#define WORKAROUND_INNER_CLASS_DEFINITION_QInputMethodEvent__Attribute
#include <QInputMethodQueryEvent>
#include <QKeyCombination>
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
#include <QPointerEvent>
#include <QPointingDevice>
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
#include <QSinglePointEvent>
#include <QSize>
#include <QSizeF>
#include <QStatusTipEvent>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QToolBarChangeEvent>
#include <QTouchEvent>
#include <QUrl>
#include <QVariant>
#include <QWhatsThisClickedEvent>
#include <QWheelEvent>
#include <QWindowStateChangeEvent>
#include <qevent.h>
#include "gen_qevent.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

class MiqtVirtualQInputEvent : public virtual QInputEvent {
public:

	MiqtVirtualQInputEvent(QEvent::Type typeVal, const QInputDevice* m_dev): QInputEvent(typeVal, m_dev) {};
	MiqtVirtualQInputEvent(QEvent::Type typeVal, const QInputDevice* m_dev, Qt::KeyboardModifiers modifiers): QInputEvent(typeVal, m_dev, modifiers) {};

	virtual ~MiqtVirtualQInputEvent() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QInputEvent* clone() const override {
		if (handle__Clone == 0) {
			return QInputEvent::clone();
		}
		

		QInputEvent* callback_return_value = miqt_exec_callback_QInputEvent_Clone(const_cast<MiqtVirtualQInputEvent*>(this), handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QInputEvent* virtualbase_Clone() const {

		return QInputEvent::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetTimestamp = 0;

	// Subclass to allow providing a Go implementation
	virtual void setTimestamp(quint64 timestamp) override {
		if (handle__SetTimestamp == 0) {
			QInputEvent::setTimestamp(timestamp);
			return;
		}
		
		quint64 timestamp_ret = timestamp;
		unsigned long long sigval1 = static_cast<unsigned long long>(timestamp_ret);

		miqt_exec_callback_QInputEvent_SetTimestamp(this, handle__SetTimestamp, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetTimestamp(unsigned long long timestamp) {

		QInputEvent::setTimestamp(static_cast<quint64>(timestamp));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__SetAccepted == 0) {
			QInputEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QInputEvent_SetAccepted(this, handle__SetAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAccepted(bool accepted) {

		QInputEvent::setAccepted(accepted);

	}

};

QInputEvent* QInputEvent_new(int typeVal, QInputDevice* m_dev) {
	return new MiqtVirtualQInputEvent(static_cast<QEvent::Type>(typeVal), m_dev);
}

QInputEvent* QInputEvent_new2(int typeVal, QInputDevice* m_dev, int modifiers) {
	return new MiqtVirtualQInputEvent(static_cast<QEvent::Type>(typeVal), m_dev, static_cast<Qt::KeyboardModifiers>(modifiers));
}

void QInputEvent_virtbase(QInputEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QInputEvent* QInputEvent_Clone(const QInputEvent* self) {
	return self->clone();
}

QInputDevice* QInputEvent_Device(const QInputEvent* self) {
	return (QInputDevice*) self->device();
}

int QInputEvent_DeviceType(const QInputEvent* self) {
	QInputDevice::DeviceType _ret = self->deviceType();
	return static_cast<int>(_ret);
}

int QInputEvent_Modifiers(const QInputEvent* self) {
	Qt::KeyboardModifiers _ret = self->modifiers();
	return static_cast<int>(_ret);
}

void QInputEvent_SetModifiers(QInputEvent* self, int modifiers) {
	self->setModifiers(static_cast<Qt::KeyboardModifiers>(modifiers));
}

unsigned long long QInputEvent_Timestamp(const QInputEvent* self) {
	quint64 _ret = self->timestamp();
	return static_cast<unsigned long long>(_ret);
}

void QInputEvent_SetTimestamp(QInputEvent* self, unsigned long long timestamp) {
	self->setTimestamp(static_cast<quint64>(timestamp));
}

void QInputEvent_override_virtual_Clone(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQInputEvent*>( (QInputEvent*)(self) )->handle__Clone = slot;
}

QInputEvent* QInputEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQInputEvent*)(self) )->virtualbase_Clone();
}

void QInputEvent_override_virtual_SetTimestamp(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQInputEvent*>( (QInputEvent*)(self) )->handle__SetTimestamp = slot;
}

void QInputEvent_virtualbase_SetTimestamp(void* self, unsigned long long timestamp) {
	( (MiqtVirtualQInputEvent*)(self) )->virtualbase_SetTimestamp(timestamp);
}

void QInputEvent_override_virtual_SetAccepted(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQInputEvent*>( (QInputEvent*)(self) )->handle__SetAccepted = slot;
}

void QInputEvent_virtualbase_SetAccepted(void* self, bool accepted) {
	( (MiqtVirtualQInputEvent*)(self) )->virtualbase_SetAccepted(accepted);
}

void QInputEvent_Delete(QInputEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQInputEvent*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQPointerEvent : public virtual QPointerEvent {
public:

	MiqtVirtualQPointerEvent(QEvent::Type typeVal, const QPointingDevice* dev): QPointerEvent(typeVal, dev) {};
	MiqtVirtualQPointerEvent(QEvent::Type typeVal, const QPointingDevice* dev, Qt::KeyboardModifiers modifiers): QPointerEvent(typeVal, dev, modifiers) {};
	MiqtVirtualQPointerEvent(QEvent::Type typeVal, const QPointingDevice* dev, Qt::KeyboardModifiers modifiers, const QList<QEventPoint>& points): QPointerEvent(typeVal, dev, modifiers, points) {};

	virtual ~MiqtVirtualQPointerEvent() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QPointerEvent* clone() const override {
		if (handle__Clone == 0) {
			return QPointerEvent::clone();
		}
		

		QPointerEvent* callback_return_value = miqt_exec_callback_QPointerEvent_Clone(const_cast<MiqtVirtualQPointerEvent*>(this), handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPointerEvent* virtualbase_Clone() const {

		return QPointerEvent::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetTimestamp = 0;

	// Subclass to allow providing a Go implementation
	virtual void setTimestamp(quint64 timestamp) override {
		if (handle__SetTimestamp == 0) {
			QPointerEvent::setTimestamp(timestamp);
			return;
		}
		
		quint64 timestamp_ret = timestamp;
		unsigned long long sigval1 = static_cast<unsigned long long>(timestamp_ret);

		miqt_exec_callback_QPointerEvent_SetTimestamp(this, handle__SetTimestamp, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetTimestamp(unsigned long long timestamp) {

		QPointerEvent::setTimestamp(static_cast<quint64>(timestamp));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsBeginEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isBeginEvent() const override {
		if (handle__IsBeginEvent == 0) {
			return QPointerEvent::isBeginEvent();
		}
		

		bool callback_return_value = miqt_exec_callback_QPointerEvent_IsBeginEvent(const_cast<MiqtVirtualQPointerEvent*>(this), handle__IsBeginEvent);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsBeginEvent() const {

		return QPointerEvent::isBeginEvent();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsUpdateEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isUpdateEvent() const override {
		if (handle__IsUpdateEvent == 0) {
			return QPointerEvent::isUpdateEvent();
		}
		

		bool callback_return_value = miqt_exec_callback_QPointerEvent_IsUpdateEvent(const_cast<MiqtVirtualQPointerEvent*>(this), handle__IsUpdateEvent);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsUpdateEvent() const {

		return QPointerEvent::isUpdateEvent();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsEndEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isEndEvent() const override {
		if (handle__IsEndEvent == 0) {
			return QPointerEvent::isEndEvent();
		}
		

		bool callback_return_value = miqt_exec_callback_QPointerEvent_IsEndEvent(const_cast<MiqtVirtualQPointerEvent*>(this), handle__IsEndEvent);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsEndEvent() const {

		return QPointerEvent::isEndEvent();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__SetAccepted == 0) {
			QPointerEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QPointerEvent_SetAccepted(this, handle__SetAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAccepted(bool accepted) {

		QPointerEvent::setAccepted(accepted);

	}

};

QPointerEvent* QPointerEvent_new(int typeVal, QPointingDevice* dev) {
	return new MiqtVirtualQPointerEvent(static_cast<QEvent::Type>(typeVal), dev);
}

QPointerEvent* QPointerEvent_new2(int typeVal, QPointingDevice* dev, int modifiers) {
	return new MiqtVirtualQPointerEvent(static_cast<QEvent::Type>(typeVal), dev, static_cast<Qt::KeyboardModifiers>(modifiers));
}

QPointerEvent* QPointerEvent_new3(int typeVal, QPointingDevice* dev, int modifiers, struct miqt_array /* of QEventPoint* */  points) {
	QList<QEventPoint> points_QList;
	points_QList.reserve(points.len);
	QEventPoint** points_arr = static_cast<QEventPoint**>(points.data);
	for(size_t i = 0; i < points.len; ++i) {
		points_QList.push_back(*(points_arr[i]));
	}
	return new MiqtVirtualQPointerEvent(static_cast<QEvent::Type>(typeVal), dev, static_cast<Qt::KeyboardModifiers>(modifiers), points_QList);
}

void QPointerEvent_virtbase(QPointerEvent* src, QInputEvent** outptr_QInputEvent) {
	*outptr_QInputEvent = static_cast<QInputEvent*>(src);
}

QPointerEvent* QPointerEvent_Clone(const QPointerEvent* self) {
	return self->clone();
}

QPointingDevice* QPointerEvent_PointingDevice(const QPointerEvent* self) {
	return (QPointingDevice*) self->pointingDevice();
}

int QPointerEvent_PointerType(const QPointerEvent* self) {
	QPointingDevice::PointerType _ret = self->pointerType();
	return static_cast<int>(_ret);
}

void QPointerEvent_SetTimestamp(QPointerEvent* self, unsigned long long timestamp) {
	self->setTimestamp(static_cast<quint64>(timestamp));
}

ptrdiff_t QPointerEvent_PointCount(const QPointerEvent* self) {
	qsizetype _ret = self->pointCount();
	return static_cast<ptrdiff_t>(_ret);
}

QEventPoint* QPointerEvent_Point(QPointerEvent* self, ptrdiff_t i) {
	QEventPoint& _ret = self->point((qsizetype)(i));
	// Cast returned reference into pointer
	return &_ret;
}

struct miqt_array /* of QEventPoint* */  QPointerEvent_Points(const QPointerEvent* self) {
	const QList<QEventPoint>& _ret = self->points();
	// Convert QList<> from C++ memory to manually-managed C memory
	QEventPoint** _arr = static_cast<QEventPoint**>(malloc(sizeof(QEventPoint*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QEventPoint(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QEventPoint* QPointerEvent_PointById(QPointerEvent* self, int id) {
	return self->pointById(static_cast<int>(id));
}

bool QPointerEvent_AllPointsGrabbed(const QPointerEvent* self) {
	return self->allPointsGrabbed();
}

bool QPointerEvent_IsBeginEvent(const QPointerEvent* self) {
	return self->isBeginEvent();
}

bool QPointerEvent_IsUpdateEvent(const QPointerEvent* self) {
	return self->isUpdateEvent();
}

bool QPointerEvent_IsEndEvent(const QPointerEvent* self) {
	return self->isEndEvent();
}

bool QPointerEvent_AllPointsAccepted(const QPointerEvent* self) {
	return self->allPointsAccepted();
}

void QPointerEvent_SetAccepted(QPointerEvent* self, bool accepted) {
	self->setAccepted(accepted);
}

QObject* QPointerEvent_ExclusiveGrabber(const QPointerEvent* self, QEventPoint* point) {
	return self->exclusiveGrabber(*point);
}

void QPointerEvent_SetExclusiveGrabber(QPointerEvent* self, QEventPoint* point, QObject* exclusiveGrabber) {
	self->setExclusiveGrabber(*point, exclusiveGrabber);
}

void QPointerEvent_ClearPassiveGrabbers(QPointerEvent* self, QEventPoint* point) {
	self->clearPassiveGrabbers(*point);
}

bool QPointerEvent_AddPassiveGrabber(QPointerEvent* self, QEventPoint* point, QObject* grabber) {
	return self->addPassiveGrabber(*point, grabber);
}

bool QPointerEvent_RemovePassiveGrabber(QPointerEvent* self, QEventPoint* point, QObject* grabber) {
	return self->removePassiveGrabber(*point, grabber);
}

void QPointerEvent_override_virtual_Clone(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPointerEvent*>( (QPointerEvent*)(self) )->handle__Clone = slot;
}

QPointerEvent* QPointerEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQPointerEvent*)(self) )->virtualbase_Clone();
}

void QPointerEvent_override_virtual_SetTimestamp(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPointerEvent*>( (QPointerEvent*)(self) )->handle__SetTimestamp = slot;
}

void QPointerEvent_virtualbase_SetTimestamp(void* self, unsigned long long timestamp) {
	( (MiqtVirtualQPointerEvent*)(self) )->virtualbase_SetTimestamp(timestamp);
}

void QPointerEvent_override_virtual_IsBeginEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPointerEvent*>( (QPointerEvent*)(self) )->handle__IsBeginEvent = slot;
}

bool QPointerEvent_virtualbase_IsBeginEvent(const void* self) {
	return ( (const MiqtVirtualQPointerEvent*)(self) )->virtualbase_IsBeginEvent();
}

void QPointerEvent_override_virtual_IsUpdateEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPointerEvent*>( (QPointerEvent*)(self) )->handle__IsUpdateEvent = slot;
}

bool QPointerEvent_virtualbase_IsUpdateEvent(const void* self) {
	return ( (const MiqtVirtualQPointerEvent*)(self) )->virtualbase_IsUpdateEvent();
}

void QPointerEvent_override_virtual_IsEndEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPointerEvent*>( (QPointerEvent*)(self) )->handle__IsEndEvent = slot;
}

bool QPointerEvent_virtualbase_IsEndEvent(const void* self) {
	return ( (const MiqtVirtualQPointerEvent*)(self) )->virtualbase_IsEndEvent();
}

void QPointerEvent_override_virtual_SetAccepted(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPointerEvent*>( (QPointerEvent*)(self) )->handle__SetAccepted = slot;
}

void QPointerEvent_virtualbase_SetAccepted(void* self, bool accepted) {
	( (MiqtVirtualQPointerEvent*)(self) )->virtualbase_SetAccepted(accepted);
}

void QPointerEvent_Delete(QPointerEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQPointerEvent*>( self );
	} else {
		delete self;
	}
}

void QSinglePointEvent_virtbase(QSinglePointEvent* src, QPointerEvent** outptr_QPointerEvent) {
	*outptr_QPointerEvent = static_cast<QPointerEvent*>(src);
}

QSinglePointEvent* QSinglePointEvent_Clone(const QSinglePointEvent* self) {
	return self->clone();
}

int QSinglePointEvent_Button(const QSinglePointEvent* self) {
	Qt::MouseButton _ret = self->button();
	return static_cast<int>(_ret);
}

int QSinglePointEvent_Buttons(const QSinglePointEvent* self) {
	Qt::MouseButtons _ret = self->buttons();
	return static_cast<int>(_ret);
}

QPointF* QSinglePointEvent_Position(const QSinglePointEvent* self) {
	return new QPointF(self->position());
}

QPointF* QSinglePointEvent_ScenePosition(const QSinglePointEvent* self) {
	return new QPointF(self->scenePosition());
}

QPointF* QSinglePointEvent_GlobalPosition(const QSinglePointEvent* self) {
	return new QPointF(self->globalPosition());
}

bool QSinglePointEvent_IsBeginEvent(const QSinglePointEvent* self) {
	return self->isBeginEvent();
}

bool QSinglePointEvent_IsUpdateEvent(const QSinglePointEvent* self) {
	return self->isUpdateEvent();
}

bool QSinglePointEvent_IsEndEvent(const QSinglePointEvent* self) {
	return self->isEndEvent();
}

QObject* QSinglePointEvent_ExclusivePointGrabber(const QSinglePointEvent* self) {
	return self->exclusivePointGrabber();
}

void QSinglePointEvent_SetExclusivePointGrabber(QSinglePointEvent* self, QObject* exclusiveGrabber) {
	self->setExclusivePointGrabber(exclusiveGrabber);
}

void QSinglePointEvent_Delete(QSinglePointEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QSinglePointEvent*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQEnterEvent : public virtual QEnterEvent {
public:

	MiqtVirtualQEnterEvent(const QPointF& localPos, const QPointF& scenePos, const QPointF& globalPos): QEnterEvent(localPos, scenePos, globalPos) {};
	MiqtVirtualQEnterEvent(const QPointF& localPos, const QPointF& scenePos, const QPointF& globalPos, const QPointingDevice* device): QEnterEvent(localPos, scenePos, globalPos, device) {};

	virtual ~MiqtVirtualQEnterEvent() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QEnterEvent* clone() const override {
		if (handle__Clone == 0) {
			return QEnterEvent::clone();
		}
		

		QEnterEvent* callback_return_value = miqt_exec_callback_QEnterEvent_Clone(const_cast<MiqtVirtualQEnterEvent*>(this), handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QEnterEvent* virtualbase_Clone() const {

		return QEnterEvent::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsBeginEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isBeginEvent() const override {
		if (handle__IsBeginEvent == 0) {
			return QEnterEvent::isBeginEvent();
		}
		

		bool callback_return_value = miqt_exec_callback_QEnterEvent_IsBeginEvent(const_cast<MiqtVirtualQEnterEvent*>(this), handle__IsBeginEvent);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsBeginEvent() const {

		return QEnterEvent::isBeginEvent();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsUpdateEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isUpdateEvent() const override {
		if (handle__IsUpdateEvent == 0) {
			return QEnterEvent::isUpdateEvent();
		}
		

		bool callback_return_value = miqt_exec_callback_QEnterEvent_IsUpdateEvent(const_cast<MiqtVirtualQEnterEvent*>(this), handle__IsUpdateEvent);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsUpdateEvent() const {

		return QEnterEvent::isUpdateEvent();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsEndEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isEndEvent() const override {
		if (handle__IsEndEvent == 0) {
			return QEnterEvent::isEndEvent();
		}
		

		bool callback_return_value = miqt_exec_callback_QEnterEvent_IsEndEvent(const_cast<MiqtVirtualQEnterEvent*>(this), handle__IsEndEvent);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsEndEvent() const {

		return QEnterEvent::isEndEvent();

	}

};

QEnterEvent* QEnterEvent_new(QPointF* localPos, QPointF* scenePos, QPointF* globalPos) {
	return new MiqtVirtualQEnterEvent(*localPos, *scenePos, *globalPos);
}

QEnterEvent* QEnterEvent_new2(QPointF* localPos, QPointF* scenePos, QPointF* globalPos, QPointingDevice* device) {
	return new MiqtVirtualQEnterEvent(*localPos, *scenePos, *globalPos, device);
}

void QEnterEvent_virtbase(QEnterEvent* src, QSinglePointEvent** outptr_QSinglePointEvent) {
	*outptr_QSinglePointEvent = static_cast<QSinglePointEvent*>(src);
}

QEnterEvent* QEnterEvent_Clone(const QEnterEvent* self) {
	return self->clone();
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
	return new QPointF(self->localPos());
}

QPointF* QEnterEvent_WindowPos(const QEnterEvent* self) {
	return new QPointF(self->windowPos());
}

QPointF* QEnterEvent_ScreenPos(const QEnterEvent* self) {
	return new QPointF(self->screenPos());
}

void QEnterEvent_override_virtual_Clone(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQEnterEvent*>( (QEnterEvent*)(self) )->handle__Clone = slot;
}

QEnterEvent* QEnterEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQEnterEvent*)(self) )->virtualbase_Clone();
}

void QEnterEvent_override_virtual_IsBeginEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQEnterEvent*>( (QEnterEvent*)(self) )->handle__IsBeginEvent = slot;
}

bool QEnterEvent_virtualbase_IsBeginEvent(const void* self) {
	return ( (const MiqtVirtualQEnterEvent*)(self) )->virtualbase_IsBeginEvent();
}

void QEnterEvent_override_virtual_IsUpdateEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQEnterEvent*>( (QEnterEvent*)(self) )->handle__IsUpdateEvent = slot;
}

bool QEnterEvent_virtualbase_IsUpdateEvent(const void* self) {
	return ( (const MiqtVirtualQEnterEvent*)(self) )->virtualbase_IsUpdateEvent();
}

void QEnterEvent_override_virtual_IsEndEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQEnterEvent*>( (QEnterEvent*)(self) )->handle__IsEndEvent = slot;
}

bool QEnterEvent_virtualbase_IsEndEvent(const void* self) {
	return ( (const MiqtVirtualQEnterEvent*)(self) )->virtualbase_IsEndEvent();
}

void QEnterEvent_Delete(QEnterEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQEnterEvent*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQMouseEvent : public virtual QMouseEvent {
public:

	MiqtVirtualQMouseEvent(QEvent::Type typeVal, const QPointF& localPos, Qt::MouseButton button, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers): QMouseEvent(typeVal, localPos, button, buttons, modifiers) {};
	MiqtVirtualQMouseEvent(QEvent::Type typeVal, const QPointF& localPos, const QPointF& globalPos, Qt::MouseButton button, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers): QMouseEvent(typeVal, localPos, globalPos, button, buttons, modifiers) {};
	MiqtVirtualQMouseEvent(QEvent::Type typeVal, const QPointF& localPos, const QPointF& scenePos, const QPointF& globalPos, Qt::MouseButton button, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers): QMouseEvent(typeVal, localPos, scenePos, globalPos, button, buttons, modifiers) {};
	MiqtVirtualQMouseEvent(QEvent::Type typeVal, const QPointF& localPos, const QPointF& scenePos, const QPointF& globalPos, Qt::MouseButton button, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, Qt::MouseEventSource source): QMouseEvent(typeVal, localPos, scenePos, globalPos, button, buttons, modifiers, source) {};
	MiqtVirtualQMouseEvent(QEvent::Type typeVal, const QPointF& localPos, Qt::MouseButton button, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, const QPointingDevice* device): QMouseEvent(typeVal, localPos, button, buttons, modifiers, device) {};
	MiqtVirtualQMouseEvent(QEvent::Type typeVal, const QPointF& localPos, const QPointF& globalPos, Qt::MouseButton button, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, const QPointingDevice* device): QMouseEvent(typeVal, localPos, globalPos, button, buttons, modifiers, device) {};
	MiqtVirtualQMouseEvent(QEvent::Type typeVal, const QPointF& localPos, const QPointF& scenePos, const QPointF& globalPos, Qt::MouseButton button, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, const QPointingDevice* device): QMouseEvent(typeVal, localPos, scenePos, globalPos, button, buttons, modifiers, device) {};
	MiqtVirtualQMouseEvent(QEvent::Type typeVal, const QPointF& localPos, const QPointF& scenePos, const QPointF& globalPos, Qt::MouseButton button, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, Qt::MouseEventSource source, const QPointingDevice* device): QMouseEvent(typeVal, localPos, scenePos, globalPos, button, buttons, modifiers, source, device) {};

	virtual ~MiqtVirtualQMouseEvent() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QMouseEvent* clone() const override {
		if (handle__Clone == 0) {
			return QMouseEvent::clone();
		}
		

		QMouseEvent* callback_return_value = miqt_exec_callback_QMouseEvent_Clone(const_cast<MiqtVirtualQMouseEvent*>(this), handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QMouseEvent* virtualbase_Clone() const {

		return QMouseEvent::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsBeginEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isBeginEvent() const override {
		if (handle__IsBeginEvent == 0) {
			return QMouseEvent::isBeginEvent();
		}
		

		bool callback_return_value = miqt_exec_callback_QMouseEvent_IsBeginEvent(const_cast<MiqtVirtualQMouseEvent*>(this), handle__IsBeginEvent);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsBeginEvent() const {

		return QMouseEvent::isBeginEvent();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsUpdateEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isUpdateEvent() const override {
		if (handle__IsUpdateEvent == 0) {
			return QMouseEvent::isUpdateEvent();
		}
		

		bool callback_return_value = miqt_exec_callback_QMouseEvent_IsUpdateEvent(const_cast<MiqtVirtualQMouseEvent*>(this), handle__IsUpdateEvent);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsUpdateEvent() const {

		return QMouseEvent::isUpdateEvent();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsEndEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isEndEvent() const override {
		if (handle__IsEndEvent == 0) {
			return QMouseEvent::isEndEvent();
		}
		

		bool callback_return_value = miqt_exec_callback_QMouseEvent_IsEndEvent(const_cast<MiqtVirtualQMouseEvent*>(this), handle__IsEndEvent);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsEndEvent() const {

		return QMouseEvent::isEndEvent();

	}

};

QMouseEvent* QMouseEvent_new(int typeVal, QPointF* localPos, int button, int buttons, int modifiers) {
	return new MiqtVirtualQMouseEvent(static_cast<QEvent::Type>(typeVal), *localPos, static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
}

QMouseEvent* QMouseEvent_new2(int typeVal, QPointF* localPos, QPointF* globalPos, int button, int buttons, int modifiers) {
	return new MiqtVirtualQMouseEvent(static_cast<QEvent::Type>(typeVal), *localPos, *globalPos, static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
}

QMouseEvent* QMouseEvent_new3(int typeVal, QPointF* localPos, QPointF* scenePos, QPointF* globalPos, int button, int buttons, int modifiers) {
	return new MiqtVirtualQMouseEvent(static_cast<QEvent::Type>(typeVal), *localPos, *scenePos, *globalPos, static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
}

QMouseEvent* QMouseEvent_new4(int typeVal, QPointF* localPos, QPointF* scenePos, QPointF* globalPos, int button, int buttons, int modifiers, int source) {
	return new MiqtVirtualQMouseEvent(static_cast<QEvent::Type>(typeVal), *localPos, *scenePos, *globalPos, static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::MouseEventSource>(source));
}

QMouseEvent* QMouseEvent_new5(int typeVal, QPointF* localPos, int button, int buttons, int modifiers, QPointingDevice* device) {
	return new MiqtVirtualQMouseEvent(static_cast<QEvent::Type>(typeVal), *localPos, static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), device);
}

QMouseEvent* QMouseEvent_new6(int typeVal, QPointF* localPos, QPointF* globalPos, int button, int buttons, int modifiers, QPointingDevice* device) {
	return new MiqtVirtualQMouseEvent(static_cast<QEvent::Type>(typeVal), *localPos, *globalPos, static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), device);
}

QMouseEvent* QMouseEvent_new7(int typeVal, QPointF* localPos, QPointF* scenePos, QPointF* globalPos, int button, int buttons, int modifiers, QPointingDevice* device) {
	return new MiqtVirtualQMouseEvent(static_cast<QEvent::Type>(typeVal), *localPos, *scenePos, *globalPos, static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), device);
}

QMouseEvent* QMouseEvent_new8(int typeVal, QPointF* localPos, QPointF* scenePos, QPointF* globalPos, int button, int buttons, int modifiers, int source, QPointingDevice* device) {
	return new MiqtVirtualQMouseEvent(static_cast<QEvent::Type>(typeVal), *localPos, *scenePos, *globalPos, static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::MouseEventSource>(source), device);
}

void QMouseEvent_virtbase(QMouseEvent* src, QSinglePointEvent** outptr_QSinglePointEvent) {
	*outptr_QSinglePointEvent = static_cast<QSinglePointEvent*>(src);
}

QMouseEvent* QMouseEvent_Clone(const QMouseEvent* self) {
	return self->clone();
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
	return new QPointF(self->localPos());
}

QPointF* QMouseEvent_WindowPos(const QMouseEvent* self) {
	return new QPointF(self->windowPos());
}

QPointF* QMouseEvent_ScreenPos(const QMouseEvent* self) {
	return new QPointF(self->screenPos());
}

int QMouseEvent_Source(const QMouseEvent* self) {
	Qt::MouseEventSource _ret = self->source();
	return static_cast<int>(_ret);
}

int QMouseEvent_Flags(const QMouseEvent* self) {
	Qt::MouseEventFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

void QMouseEvent_override_virtual_Clone(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMouseEvent*>( (QMouseEvent*)(self) )->handle__Clone = slot;
}

QMouseEvent* QMouseEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQMouseEvent*)(self) )->virtualbase_Clone();
}

void QMouseEvent_override_virtual_IsBeginEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMouseEvent*>( (QMouseEvent*)(self) )->handle__IsBeginEvent = slot;
}

bool QMouseEvent_virtualbase_IsBeginEvent(const void* self) {
	return ( (const MiqtVirtualQMouseEvent*)(self) )->virtualbase_IsBeginEvent();
}

void QMouseEvent_override_virtual_IsUpdateEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMouseEvent*>( (QMouseEvent*)(self) )->handle__IsUpdateEvent = slot;
}

bool QMouseEvent_virtualbase_IsUpdateEvent(const void* self) {
	return ( (const MiqtVirtualQMouseEvent*)(self) )->virtualbase_IsUpdateEvent();
}

void QMouseEvent_override_virtual_IsEndEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMouseEvent*>( (QMouseEvent*)(self) )->handle__IsEndEvent = slot;
}

bool QMouseEvent_virtualbase_IsEndEvent(const void* self) {
	return ( (const MiqtVirtualQMouseEvent*)(self) )->virtualbase_IsEndEvent();
}

void QMouseEvent_Delete(QMouseEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQMouseEvent*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQHoverEvent : public virtual QHoverEvent {
public:

	MiqtVirtualQHoverEvent(QEvent::Type typeVal, const QPointF& scenePos, const QPointF& globalPos, const QPointF& oldPos): QHoverEvent(typeVal, scenePos, globalPos, oldPos) {};
	MiqtVirtualQHoverEvent(QEvent::Type typeVal, const QPointF& pos, const QPointF& oldPos): QHoverEvent(typeVal, pos, oldPos) {};
	MiqtVirtualQHoverEvent(QEvent::Type typeVal, const QPointF& scenePos, const QPointF& globalPos, const QPointF& oldPos, Qt::KeyboardModifiers modifiers): QHoverEvent(typeVal, scenePos, globalPos, oldPos, modifiers) {};
	MiqtVirtualQHoverEvent(QEvent::Type typeVal, const QPointF& scenePos, const QPointF& globalPos, const QPointF& oldPos, Qt::KeyboardModifiers modifiers, const QPointingDevice* device): QHoverEvent(typeVal, scenePos, globalPos, oldPos, modifiers, device) {};
	MiqtVirtualQHoverEvent(QEvent::Type typeVal, const QPointF& pos, const QPointF& oldPos, Qt::KeyboardModifiers modifiers): QHoverEvent(typeVal, pos, oldPos, modifiers) {};
	MiqtVirtualQHoverEvent(QEvent::Type typeVal, const QPointF& pos, const QPointF& oldPos, Qt::KeyboardModifiers modifiers, const QPointingDevice* device): QHoverEvent(typeVal, pos, oldPos, modifiers, device) {};

	virtual ~MiqtVirtualQHoverEvent() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QHoverEvent* clone() const override {
		if (handle__Clone == 0) {
			return QHoverEvent::clone();
		}
		

		QHoverEvent* callback_return_value = miqt_exec_callback_QHoverEvent_Clone(const_cast<MiqtVirtualQHoverEvent*>(this), handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QHoverEvent* virtualbase_Clone() const {

		return QHoverEvent::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsUpdateEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isUpdateEvent() const override {
		if (handle__IsUpdateEvent == 0) {
			return QHoverEvent::isUpdateEvent();
		}
		

		bool callback_return_value = miqt_exec_callback_QHoverEvent_IsUpdateEvent(const_cast<MiqtVirtualQHoverEvent*>(this), handle__IsUpdateEvent);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsUpdateEvent() const {

		return QHoverEvent::isUpdateEvent();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsBeginEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isBeginEvent() const override {
		if (handle__IsBeginEvent == 0) {
			return QHoverEvent::isBeginEvent();
		}
		

		bool callback_return_value = miqt_exec_callback_QHoverEvent_IsBeginEvent(const_cast<MiqtVirtualQHoverEvent*>(this), handle__IsBeginEvent);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsBeginEvent() const {

		return QHoverEvent::isBeginEvent();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsEndEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isEndEvent() const override {
		if (handle__IsEndEvent == 0) {
			return QHoverEvent::isEndEvent();
		}
		

		bool callback_return_value = miqt_exec_callback_QHoverEvent_IsEndEvent(const_cast<MiqtVirtualQHoverEvent*>(this), handle__IsEndEvent);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsEndEvent() const {

		return QHoverEvent::isEndEvent();

	}

};

QHoverEvent* QHoverEvent_new(int typeVal, QPointF* scenePos, QPointF* globalPos, QPointF* oldPos) {
	return new MiqtVirtualQHoverEvent(static_cast<QEvent::Type>(typeVal), *scenePos, *globalPos, *oldPos);
}

QHoverEvent* QHoverEvent_new2(int typeVal, QPointF* pos, QPointF* oldPos) {
	return new MiqtVirtualQHoverEvent(static_cast<QEvent::Type>(typeVal), *pos, *oldPos);
}

QHoverEvent* QHoverEvent_new3(int typeVal, QPointF* scenePos, QPointF* globalPos, QPointF* oldPos, int modifiers) {
	return new MiqtVirtualQHoverEvent(static_cast<QEvent::Type>(typeVal), *scenePos, *globalPos, *oldPos, static_cast<Qt::KeyboardModifiers>(modifiers));
}

QHoverEvent* QHoverEvent_new4(int typeVal, QPointF* scenePos, QPointF* globalPos, QPointF* oldPos, int modifiers, QPointingDevice* device) {
	return new MiqtVirtualQHoverEvent(static_cast<QEvent::Type>(typeVal), *scenePos, *globalPos, *oldPos, static_cast<Qt::KeyboardModifiers>(modifiers), device);
}

QHoverEvent* QHoverEvent_new5(int typeVal, QPointF* pos, QPointF* oldPos, int modifiers) {
	return new MiqtVirtualQHoverEvent(static_cast<QEvent::Type>(typeVal), *pos, *oldPos, static_cast<Qt::KeyboardModifiers>(modifiers));
}

QHoverEvent* QHoverEvent_new6(int typeVal, QPointF* pos, QPointF* oldPos, int modifiers, QPointingDevice* device) {
	return new MiqtVirtualQHoverEvent(static_cast<QEvent::Type>(typeVal), *pos, *oldPos, static_cast<Qt::KeyboardModifiers>(modifiers), device);
}

void QHoverEvent_virtbase(QHoverEvent* src, QSinglePointEvent** outptr_QSinglePointEvent) {
	*outptr_QSinglePointEvent = static_cast<QSinglePointEvent*>(src);
}

QHoverEvent* QHoverEvent_Clone(const QHoverEvent* self) {
	return self->clone();
}

QPoint* QHoverEvent_Pos(const QHoverEvent* self) {
	return new QPoint(self->pos());
}

QPointF* QHoverEvent_PosF(const QHoverEvent* self) {
	return new QPointF(self->posF());
}

bool QHoverEvent_IsUpdateEvent(const QHoverEvent* self) {
	return self->isUpdateEvent();
}

QPoint* QHoverEvent_OldPos(const QHoverEvent* self) {
	return new QPoint(self->oldPos());
}

QPointF* QHoverEvent_OldPosF(const QHoverEvent* self) {
	return new QPointF(self->oldPosF());
}

void QHoverEvent_override_virtual_Clone(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQHoverEvent*>( (QHoverEvent*)(self) )->handle__Clone = slot;
}

QHoverEvent* QHoverEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQHoverEvent*)(self) )->virtualbase_Clone();
}

void QHoverEvent_override_virtual_IsUpdateEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQHoverEvent*>( (QHoverEvent*)(self) )->handle__IsUpdateEvent = slot;
}

bool QHoverEvent_virtualbase_IsUpdateEvent(const void* self) {
	return ( (const MiqtVirtualQHoverEvent*)(self) )->virtualbase_IsUpdateEvent();
}

void QHoverEvent_override_virtual_IsBeginEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQHoverEvent*>( (QHoverEvent*)(self) )->handle__IsBeginEvent = slot;
}

bool QHoverEvent_virtualbase_IsBeginEvent(const void* self) {
	return ( (const MiqtVirtualQHoverEvent*)(self) )->virtualbase_IsBeginEvent();
}

void QHoverEvent_override_virtual_IsEndEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQHoverEvent*>( (QHoverEvent*)(self) )->handle__IsEndEvent = slot;
}

bool QHoverEvent_virtualbase_IsEndEvent(const void* self) {
	return ( (const MiqtVirtualQHoverEvent*)(self) )->virtualbase_IsEndEvent();
}

void QHoverEvent_Delete(QHoverEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQHoverEvent*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQWheelEvent : public virtual QWheelEvent {
public:

	MiqtVirtualQWheelEvent(const QPointF& pos, const QPointF& globalPos, QPoint pixelDelta, QPoint angleDelta, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, Qt::ScrollPhase phase, bool inverted): QWheelEvent(pos, globalPos, pixelDelta, angleDelta, buttons, modifiers, phase, inverted) {};
	MiqtVirtualQWheelEvent(const QPointF& pos, const QPointF& globalPos, QPoint pixelDelta, QPoint angleDelta, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, Qt::ScrollPhase phase, bool inverted, Qt::MouseEventSource source): QWheelEvent(pos, globalPos, pixelDelta, angleDelta, buttons, modifiers, phase, inverted, source) {};
	MiqtVirtualQWheelEvent(const QPointF& pos, const QPointF& globalPos, QPoint pixelDelta, QPoint angleDelta, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, Qt::ScrollPhase phase, bool inverted, Qt::MouseEventSource source, const QPointingDevice* device): QWheelEvent(pos, globalPos, pixelDelta, angleDelta, buttons, modifiers, phase, inverted, source, device) {};

	virtual ~MiqtVirtualQWheelEvent() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QWheelEvent* clone() const override {
		if (handle__Clone == 0) {
			return QWheelEvent::clone();
		}
		

		QWheelEvent* callback_return_value = miqt_exec_callback_QWheelEvent_Clone(const_cast<MiqtVirtualQWheelEvent*>(this), handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QWheelEvent* virtualbase_Clone() const {

		return QWheelEvent::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsBeginEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isBeginEvent() const override {
		if (handle__IsBeginEvent == 0) {
			return QWheelEvent::isBeginEvent();
		}
		

		bool callback_return_value = miqt_exec_callback_QWheelEvent_IsBeginEvent(const_cast<MiqtVirtualQWheelEvent*>(this), handle__IsBeginEvent);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsBeginEvent() const {

		return QWheelEvent::isBeginEvent();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsUpdateEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isUpdateEvent() const override {
		if (handle__IsUpdateEvent == 0) {
			return QWheelEvent::isUpdateEvent();
		}
		

		bool callback_return_value = miqt_exec_callback_QWheelEvent_IsUpdateEvent(const_cast<MiqtVirtualQWheelEvent*>(this), handle__IsUpdateEvent);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsUpdateEvent() const {

		return QWheelEvent::isUpdateEvent();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsEndEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isEndEvent() const override {
		if (handle__IsEndEvent == 0) {
			return QWheelEvent::isEndEvent();
		}
		

		bool callback_return_value = miqt_exec_callback_QWheelEvent_IsEndEvent(const_cast<MiqtVirtualQWheelEvent*>(this), handle__IsEndEvent);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsEndEvent() const {

		return QWheelEvent::isEndEvent();

	}

};

QWheelEvent* QWheelEvent_new(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int buttons, int modifiers, int phase, bool inverted) {
	return new MiqtVirtualQWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::ScrollPhase>(phase), inverted);
}

QWheelEvent* QWheelEvent_new2(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int buttons, int modifiers, int phase, bool inverted, int source) {
	return new MiqtVirtualQWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::ScrollPhase>(phase), inverted, static_cast<Qt::MouseEventSource>(source));
}

QWheelEvent* QWheelEvent_new3(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int buttons, int modifiers, int phase, bool inverted, int source, QPointingDevice* device) {
	return new MiqtVirtualQWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Qt::ScrollPhase>(phase), inverted, static_cast<Qt::MouseEventSource>(source), device);
}

void QWheelEvent_virtbase(QWheelEvent* src, QSinglePointEvent** outptr_QSinglePointEvent) {
	*outptr_QSinglePointEvent = static_cast<QSinglePointEvent*>(src);
}

QWheelEvent* QWheelEvent_Clone(const QWheelEvent* self) {
	return self->clone();
}

QPoint* QWheelEvent_PixelDelta(const QWheelEvent* self) {
	return new QPoint(self->pixelDelta());
}

QPoint* QWheelEvent_AngleDelta(const QWheelEvent* self) {
	return new QPoint(self->angleDelta());
}

int QWheelEvent_Phase(const QWheelEvent* self) {
	Qt::ScrollPhase _ret = self->phase();
	return static_cast<int>(_ret);
}

bool QWheelEvent_Inverted(const QWheelEvent* self) {
	return self->inverted();
}

bool QWheelEvent_IsInverted(const QWheelEvent* self) {
	return self->isInverted();
}

bool QWheelEvent_HasPixelDelta(const QWheelEvent* self) {
	return self->hasPixelDelta();
}

bool QWheelEvent_IsBeginEvent(const QWheelEvent* self) {
	return self->isBeginEvent();
}

bool QWheelEvent_IsUpdateEvent(const QWheelEvent* self) {
	return self->isUpdateEvent();
}

bool QWheelEvent_IsEndEvent(const QWheelEvent* self) {
	return self->isEndEvent();
}

int QWheelEvent_Source(const QWheelEvent* self) {
	Qt::MouseEventSource _ret = self->source();
	return static_cast<int>(_ret);
}

void QWheelEvent_override_virtual_Clone(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWheelEvent*>( (QWheelEvent*)(self) )->handle__Clone = slot;
}

QWheelEvent* QWheelEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQWheelEvent*)(self) )->virtualbase_Clone();
}

void QWheelEvent_override_virtual_IsBeginEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWheelEvent*>( (QWheelEvent*)(self) )->handle__IsBeginEvent = slot;
}

bool QWheelEvent_virtualbase_IsBeginEvent(const void* self) {
	return ( (const MiqtVirtualQWheelEvent*)(self) )->virtualbase_IsBeginEvent();
}

void QWheelEvent_override_virtual_IsUpdateEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWheelEvent*>( (QWheelEvent*)(self) )->handle__IsUpdateEvent = slot;
}

bool QWheelEvent_virtualbase_IsUpdateEvent(const void* self) {
	return ( (const MiqtVirtualQWheelEvent*)(self) )->virtualbase_IsUpdateEvent();
}

void QWheelEvent_override_virtual_IsEndEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWheelEvent*>( (QWheelEvent*)(self) )->handle__IsEndEvent = slot;
}

bool QWheelEvent_virtualbase_IsEndEvent(const void* self) {
	return ( (const MiqtVirtualQWheelEvent*)(self) )->virtualbase_IsEndEvent();
}

void QWheelEvent_Delete(QWheelEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQWheelEvent*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQTabletEvent : public virtual QTabletEvent {
public:

	MiqtVirtualQTabletEvent(QEvent::Type t, const QPointingDevice* device, const QPointF& pos, const QPointF& globalPos, qreal pressure, float xTilt, float yTilt, float tangentialPressure, qreal rotation, float z, Qt::KeyboardModifiers keyState, Qt::MouseButton button, Qt::MouseButtons buttons): QTabletEvent(t, device, pos, globalPos, pressure, xTilt, yTilt, tangentialPressure, rotation, z, keyState, button, buttons) {};

	virtual ~MiqtVirtualQTabletEvent() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QTabletEvent* clone() const override {
		if (handle__Clone == 0) {
			return QTabletEvent::clone();
		}
		

		QTabletEvent* callback_return_value = miqt_exec_callback_QTabletEvent_Clone(const_cast<MiqtVirtualQTabletEvent*>(this), handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QTabletEvent* virtualbase_Clone() const {

		return QTabletEvent::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsBeginEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isBeginEvent() const override {
		if (handle__IsBeginEvent == 0) {
			return QTabletEvent::isBeginEvent();
		}
		

		bool callback_return_value = miqt_exec_callback_QTabletEvent_IsBeginEvent(const_cast<MiqtVirtualQTabletEvent*>(this), handle__IsBeginEvent);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsBeginEvent() const {

		return QTabletEvent::isBeginEvent();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsUpdateEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isUpdateEvent() const override {
		if (handle__IsUpdateEvent == 0) {
			return QTabletEvent::isUpdateEvent();
		}
		

		bool callback_return_value = miqt_exec_callback_QTabletEvent_IsUpdateEvent(const_cast<MiqtVirtualQTabletEvent*>(this), handle__IsUpdateEvent);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsUpdateEvent() const {

		return QTabletEvent::isUpdateEvent();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsEndEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isEndEvent() const override {
		if (handle__IsEndEvent == 0) {
			return QTabletEvent::isEndEvent();
		}
		

		bool callback_return_value = miqt_exec_callback_QTabletEvent_IsEndEvent(const_cast<MiqtVirtualQTabletEvent*>(this), handle__IsEndEvent);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsEndEvent() const {

		return QTabletEvent::isEndEvent();

	}

};

QTabletEvent* QTabletEvent_new(int t, QPointingDevice* device, QPointF* pos, QPointF* globalPos, double pressure, float xTilt, float yTilt, float tangentialPressure, double rotation, float z, int keyState, int button, int buttons) {
	return new MiqtVirtualQTabletEvent(static_cast<QEvent::Type>(t), device, *pos, *globalPos, static_cast<qreal>(pressure), static_cast<float>(xTilt), static_cast<float>(yTilt), static_cast<float>(tangentialPressure), static_cast<qreal>(rotation), static_cast<float>(z), static_cast<Qt::KeyboardModifiers>(keyState), static_cast<Qt::MouseButton>(button), static_cast<Qt::MouseButtons>(buttons));
}

void QTabletEvent_virtbase(QTabletEvent* src, QSinglePointEvent** outptr_QSinglePointEvent) {
	*outptr_QSinglePointEvent = static_cast<QSinglePointEvent*>(src);
}

QTabletEvent* QTabletEvent_Clone(const QTabletEvent* self) {
	return self->clone();
}

QPoint* QTabletEvent_Pos(const QTabletEvent* self) {
	return new QPoint(self->pos());
}

QPoint* QTabletEvent_GlobalPos(const QTabletEvent* self) {
	return new QPoint(self->globalPos());
}

QPointF* QTabletEvent_PosF(const QTabletEvent* self) {
	return new QPointF(self->posF());
}

QPointF* QTabletEvent_GlobalPosF(const QTabletEvent* self) {
	return new QPointF(self->globalPosF());
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

long long QTabletEvent_UniqueId(const QTabletEvent* self) {
	qint64 _ret = self->uniqueId();
	return static_cast<long long>(_ret);
}

double QTabletEvent_Pressure(const QTabletEvent* self) {
	qreal _ret = self->pressure();
	return static_cast<double>(_ret);
}

double QTabletEvent_Rotation(const QTabletEvent* self) {
	qreal _ret = self->rotation();
	return static_cast<double>(_ret);
}

double QTabletEvent_Z(const QTabletEvent* self) {
	qreal _ret = self->z();
	return static_cast<double>(_ret);
}

double QTabletEvent_TangentialPressure(const QTabletEvent* self) {
	qreal _ret = self->tangentialPressure();
	return static_cast<double>(_ret);
}

double QTabletEvent_XTilt(const QTabletEvent* self) {
	qreal _ret = self->xTilt();
	return static_cast<double>(_ret);
}

double QTabletEvent_YTilt(const QTabletEvent* self) {
	qreal _ret = self->yTilt();
	return static_cast<double>(_ret);
}

void QTabletEvent_override_virtual_Clone(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabletEvent*>( (QTabletEvent*)(self) )->handle__Clone = slot;
}

QTabletEvent* QTabletEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQTabletEvent*)(self) )->virtualbase_Clone();
}

void QTabletEvent_override_virtual_IsBeginEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabletEvent*>( (QTabletEvent*)(self) )->handle__IsBeginEvent = slot;
}

bool QTabletEvent_virtualbase_IsBeginEvent(const void* self) {
	return ( (const MiqtVirtualQTabletEvent*)(self) )->virtualbase_IsBeginEvent();
}

void QTabletEvent_override_virtual_IsUpdateEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabletEvent*>( (QTabletEvent*)(self) )->handle__IsUpdateEvent = slot;
}

bool QTabletEvent_virtualbase_IsUpdateEvent(const void* self) {
	return ( (const MiqtVirtualQTabletEvent*)(self) )->virtualbase_IsUpdateEvent();
}

void QTabletEvent_override_virtual_IsEndEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTabletEvent*>( (QTabletEvent*)(self) )->handle__IsEndEvent = slot;
}

bool QTabletEvent_virtualbase_IsEndEvent(const void* self) {
	return ( (const MiqtVirtualQTabletEvent*)(self) )->virtualbase_IsEndEvent();
}

void QTabletEvent_Delete(QTabletEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQTabletEvent*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQNativeGestureEvent : public virtual QNativeGestureEvent {
public:

	MiqtVirtualQNativeGestureEvent(Qt::NativeGestureType typeVal, const QPointingDevice* dev, const QPointF& localPos, const QPointF& scenePos, const QPointF& globalPos, qreal value, quint64 sequenceId, quint64 intArgument): QNativeGestureEvent(typeVal, dev, localPos, scenePos, globalPos, value, sequenceId, intArgument) {};
	MiqtVirtualQNativeGestureEvent(Qt::NativeGestureType typeVal, const QPointingDevice* dev, int fingerCount, const QPointF& localPos, const QPointF& scenePos, const QPointF& globalPos, qreal value, const QPointF& delta): QNativeGestureEvent(typeVal, dev, fingerCount, localPos, scenePos, globalPos, value, delta) {};
	MiqtVirtualQNativeGestureEvent(Qt::NativeGestureType typeVal, const QPointingDevice* dev, int fingerCount, const QPointF& localPos, const QPointF& scenePos, const QPointF& globalPos, qreal value, const QPointF& delta, quint64 sequenceId): QNativeGestureEvent(typeVal, dev, fingerCount, localPos, scenePos, globalPos, value, delta, sequenceId) {};

	virtual ~MiqtVirtualQNativeGestureEvent() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QNativeGestureEvent* clone() const override {
		if (handle__Clone == 0) {
			return QNativeGestureEvent::clone();
		}
		

		QNativeGestureEvent* callback_return_value = miqt_exec_callback_QNativeGestureEvent_Clone(const_cast<MiqtVirtualQNativeGestureEvent*>(this), handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QNativeGestureEvent* virtualbase_Clone() const {

		return QNativeGestureEvent::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsBeginEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isBeginEvent() const override {
		if (handle__IsBeginEvent == 0) {
			return QNativeGestureEvent::isBeginEvent();
		}
		

		bool callback_return_value = miqt_exec_callback_QNativeGestureEvent_IsBeginEvent(const_cast<MiqtVirtualQNativeGestureEvent*>(this), handle__IsBeginEvent);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsBeginEvent() const {

		return QNativeGestureEvent::isBeginEvent();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsUpdateEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isUpdateEvent() const override {
		if (handle__IsUpdateEvent == 0) {
			return QNativeGestureEvent::isUpdateEvent();
		}
		

		bool callback_return_value = miqt_exec_callback_QNativeGestureEvent_IsUpdateEvent(const_cast<MiqtVirtualQNativeGestureEvent*>(this), handle__IsUpdateEvent);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsUpdateEvent() const {

		return QNativeGestureEvent::isUpdateEvent();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsEndEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isEndEvent() const override {
		if (handle__IsEndEvent == 0) {
			return QNativeGestureEvent::isEndEvent();
		}
		

		bool callback_return_value = miqt_exec_callback_QNativeGestureEvent_IsEndEvent(const_cast<MiqtVirtualQNativeGestureEvent*>(this), handle__IsEndEvent);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsEndEvent() const {

		return QNativeGestureEvent::isEndEvent();

	}

};

QNativeGestureEvent* QNativeGestureEvent_new(int typeVal, QPointingDevice* dev, QPointF* localPos, QPointF* scenePos, QPointF* globalPos, double value, unsigned long long sequenceId, unsigned long long intArgument) {
	return new MiqtVirtualQNativeGestureEvent(static_cast<Qt::NativeGestureType>(typeVal), dev, *localPos, *scenePos, *globalPos, static_cast<qreal>(value), static_cast<quint64>(sequenceId), static_cast<quint64>(intArgument));
}

QNativeGestureEvent* QNativeGestureEvent_new2(int typeVal, QPointingDevice* dev, int fingerCount, QPointF* localPos, QPointF* scenePos, QPointF* globalPos, double value, QPointF* delta) {
	return new MiqtVirtualQNativeGestureEvent(static_cast<Qt::NativeGestureType>(typeVal), dev, static_cast<int>(fingerCount), *localPos, *scenePos, *globalPos, static_cast<qreal>(value), *delta);
}

QNativeGestureEvent* QNativeGestureEvent_new3(int typeVal, QPointingDevice* dev, int fingerCount, QPointF* localPos, QPointF* scenePos, QPointF* globalPos, double value, QPointF* delta, unsigned long long sequenceId) {
	return new MiqtVirtualQNativeGestureEvent(static_cast<Qt::NativeGestureType>(typeVal), dev, static_cast<int>(fingerCount), *localPos, *scenePos, *globalPos, static_cast<qreal>(value), *delta, static_cast<quint64>(sequenceId));
}

void QNativeGestureEvent_virtbase(QNativeGestureEvent* src, QSinglePointEvent** outptr_QSinglePointEvent) {
	*outptr_QSinglePointEvent = static_cast<QSinglePointEvent*>(src);
}

QNativeGestureEvent* QNativeGestureEvent_Clone(const QNativeGestureEvent* self) {
	return self->clone();
}

int QNativeGestureEvent_GestureType(const QNativeGestureEvent* self) {
	Qt::NativeGestureType _ret = self->gestureType();
	return static_cast<int>(_ret);
}

int QNativeGestureEvent_FingerCount(const QNativeGestureEvent* self) {
	return self->fingerCount();
}

double QNativeGestureEvent_Value(const QNativeGestureEvent* self) {
	qreal _ret = self->value();
	return static_cast<double>(_ret);
}

QPointF* QNativeGestureEvent_Delta(const QNativeGestureEvent* self) {
	return new QPointF(self->delta());
}

QPoint* QNativeGestureEvent_Pos(const QNativeGestureEvent* self) {
	return new QPoint(self->pos());
}

QPoint* QNativeGestureEvent_GlobalPos(const QNativeGestureEvent* self) {
	return new QPoint(self->globalPos());
}

QPointF* QNativeGestureEvent_LocalPos(const QNativeGestureEvent* self) {
	return new QPointF(self->localPos());
}

QPointF* QNativeGestureEvent_WindowPos(const QNativeGestureEvent* self) {
	return new QPointF(self->windowPos());
}

QPointF* QNativeGestureEvent_ScreenPos(const QNativeGestureEvent* self) {
	return new QPointF(self->screenPos());
}

void QNativeGestureEvent_override_virtual_Clone(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQNativeGestureEvent*>( (QNativeGestureEvent*)(self) )->handle__Clone = slot;
}

QNativeGestureEvent* QNativeGestureEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQNativeGestureEvent*)(self) )->virtualbase_Clone();
}

void QNativeGestureEvent_override_virtual_IsBeginEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQNativeGestureEvent*>( (QNativeGestureEvent*)(self) )->handle__IsBeginEvent = slot;
}

bool QNativeGestureEvent_virtualbase_IsBeginEvent(const void* self) {
	return ( (const MiqtVirtualQNativeGestureEvent*)(self) )->virtualbase_IsBeginEvent();
}

void QNativeGestureEvent_override_virtual_IsUpdateEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQNativeGestureEvent*>( (QNativeGestureEvent*)(self) )->handle__IsUpdateEvent = slot;
}

bool QNativeGestureEvent_virtualbase_IsUpdateEvent(const void* self) {
	return ( (const MiqtVirtualQNativeGestureEvent*)(self) )->virtualbase_IsUpdateEvent();
}

void QNativeGestureEvent_override_virtual_IsEndEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQNativeGestureEvent*>( (QNativeGestureEvent*)(self) )->handle__IsEndEvent = slot;
}

bool QNativeGestureEvent_virtualbase_IsEndEvent(const void* self) {
	return ( (const MiqtVirtualQNativeGestureEvent*)(self) )->virtualbase_IsEndEvent();
}

void QNativeGestureEvent_Delete(QNativeGestureEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQNativeGestureEvent*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQKeyEvent : public virtual QKeyEvent {
public:

	MiqtVirtualQKeyEvent(QEvent::Type typeVal, int key, Qt::KeyboardModifiers modifiers): QKeyEvent(typeVal, key, modifiers) {};
	MiqtVirtualQKeyEvent(QEvent::Type typeVal, int key, Qt::KeyboardModifiers modifiers, quint32 nativeScanCode, quint32 nativeVirtualKey, quint32 nativeModifiers): QKeyEvent(typeVal, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers) {};
	MiqtVirtualQKeyEvent(QEvent::Type typeVal, int key, Qt::KeyboardModifiers modifiers, const QString& text): QKeyEvent(typeVal, key, modifiers, text) {};
	MiqtVirtualQKeyEvent(QEvent::Type typeVal, int key, Qt::KeyboardModifiers modifiers, const QString& text, bool autorep): QKeyEvent(typeVal, key, modifiers, text, autorep) {};
	MiqtVirtualQKeyEvent(QEvent::Type typeVal, int key, Qt::KeyboardModifiers modifiers, const QString& text, bool autorep, quint16 count): QKeyEvent(typeVal, key, modifiers, text, autorep, count) {};
	MiqtVirtualQKeyEvent(QEvent::Type typeVal, int key, Qt::KeyboardModifiers modifiers, quint32 nativeScanCode, quint32 nativeVirtualKey, quint32 nativeModifiers, const QString& text): QKeyEvent(typeVal, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers, text) {};
	MiqtVirtualQKeyEvent(QEvent::Type typeVal, int key, Qt::KeyboardModifiers modifiers, quint32 nativeScanCode, quint32 nativeVirtualKey, quint32 nativeModifiers, const QString& text, bool autorep): QKeyEvent(typeVal, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers, text, autorep) {};
	MiqtVirtualQKeyEvent(QEvent::Type typeVal, int key, Qt::KeyboardModifiers modifiers, quint32 nativeScanCode, quint32 nativeVirtualKey, quint32 nativeModifiers, const QString& text, bool autorep, quint16 count): QKeyEvent(typeVal, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers, text, autorep, count) {};
	MiqtVirtualQKeyEvent(QEvent::Type typeVal, int key, Qt::KeyboardModifiers modifiers, quint32 nativeScanCode, quint32 nativeVirtualKey, quint32 nativeModifiers, const QString& text, bool autorep, quint16 count, const QInputDevice* device): QKeyEvent(typeVal, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers, text, autorep, count, device) {};

	virtual ~MiqtVirtualQKeyEvent() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QKeyEvent* clone() const override {
		if (handle__Clone == 0) {
			return QKeyEvent::clone();
		}
		

		QKeyEvent* callback_return_value = miqt_exec_callback_QKeyEvent_Clone(const_cast<MiqtVirtualQKeyEvent*>(this), handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QKeyEvent* virtualbase_Clone() const {

		return QKeyEvent::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetTimestamp = 0;

	// Subclass to allow providing a Go implementation
	virtual void setTimestamp(quint64 timestamp) override {
		if (handle__SetTimestamp == 0) {
			QKeyEvent::setTimestamp(timestamp);
			return;
		}
		
		quint64 timestamp_ret = timestamp;
		unsigned long long sigval1 = static_cast<unsigned long long>(timestamp_ret);

		miqt_exec_callback_QKeyEvent_SetTimestamp(this, handle__SetTimestamp, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetTimestamp(unsigned long long timestamp) {

		QKeyEvent::setTimestamp(static_cast<quint64>(timestamp));

	}

};

QKeyEvent* QKeyEvent_new(int typeVal, int key, int modifiers) {
	return new MiqtVirtualQKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers));
}

QKeyEvent* QKeyEvent_new2(int typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers) {
	return new MiqtVirtualQKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<quint32>(nativeScanCode), static_cast<quint32>(nativeVirtualKey), static_cast<quint32>(nativeModifiers));
}

QKeyEvent* QKeyEvent_new3(int typeVal, int key, int modifiers, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), text_QString);
}

QKeyEvent* QKeyEvent_new4(int typeVal, int key, int modifiers, struct miqt_string text, bool autorep) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), text_QString, autorep);
}

QKeyEvent* QKeyEvent_new5(int typeVal, int key, int modifiers, struct miqt_string text, bool autorep, uint16_t count) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), text_QString, autorep, static_cast<quint16>(count));
}

QKeyEvent* QKeyEvent_new6(int typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<quint32>(nativeScanCode), static_cast<quint32>(nativeVirtualKey), static_cast<quint32>(nativeModifiers), text_QString);
}

QKeyEvent* QKeyEvent_new7(int typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, struct miqt_string text, bool autorep) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<quint32>(nativeScanCode), static_cast<quint32>(nativeVirtualKey), static_cast<quint32>(nativeModifiers), text_QString, autorep);
}

QKeyEvent* QKeyEvent_new8(int typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, struct miqt_string text, bool autorep, uint16_t count) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<quint32>(nativeScanCode), static_cast<quint32>(nativeVirtualKey), static_cast<quint32>(nativeModifiers), text_QString, autorep, static_cast<quint16>(count));
}

QKeyEvent* QKeyEvent_new9(int typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, struct miqt_string text, bool autorep, uint16_t count, QInputDevice* device) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQKeyEvent(static_cast<QEvent::Type>(typeVal), static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<quint32>(nativeScanCode), static_cast<quint32>(nativeVirtualKey), static_cast<quint32>(nativeModifiers), text_QString, autorep, static_cast<quint16>(count), device);
}

void QKeyEvent_virtbase(QKeyEvent* src, QInputEvent** outptr_QInputEvent) {
	*outptr_QInputEvent = static_cast<QInputEvent*>(src);
}

QKeyEvent* QKeyEvent_Clone(const QKeyEvent* self) {
	return self->clone();
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

QKeyCombination* QKeyEvent_KeyCombination(const QKeyEvent* self) {
	return new QKeyCombination(self->keyCombination());
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

void QKeyEvent_override_virtual_Clone(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQKeyEvent*>( (QKeyEvent*)(self) )->handle__Clone = slot;
}

QKeyEvent* QKeyEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQKeyEvent*)(self) )->virtualbase_Clone();
}

void QKeyEvent_override_virtual_SetTimestamp(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQKeyEvent*>( (QKeyEvent*)(self) )->handle__SetTimestamp = slot;
}

void QKeyEvent_virtualbase_SetTimestamp(void* self, unsigned long long timestamp) {
	( (MiqtVirtualQKeyEvent*)(self) )->virtualbase_SetTimestamp(timestamp);
}

void QKeyEvent_Delete(QKeyEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQKeyEvent*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQFocusEvent : public virtual QFocusEvent {
public:

	MiqtVirtualQFocusEvent(QEvent::Type typeVal): QFocusEvent(typeVal) {};
	MiqtVirtualQFocusEvent(QEvent::Type typeVal, Qt::FocusReason reason): QFocusEvent(typeVal, reason) {};

	virtual ~MiqtVirtualQFocusEvent() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QFocusEvent* clone() const override {
		if (handle__Clone == 0) {
			return QFocusEvent::clone();
		}
		

		QFocusEvent* callback_return_value = miqt_exec_callback_QFocusEvent_Clone(const_cast<MiqtVirtualQFocusEvent*>(this), handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QFocusEvent* virtualbase_Clone() const {

		return QFocusEvent::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__SetAccepted == 0) {
			QFocusEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QFocusEvent_SetAccepted(this, handle__SetAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAccepted(bool accepted) {

		QFocusEvent::setAccepted(accepted);

	}

};

QFocusEvent* QFocusEvent_new(int typeVal) {
	return new MiqtVirtualQFocusEvent(static_cast<QEvent::Type>(typeVal));
}

QFocusEvent* QFocusEvent_new2(int typeVal, int reason) {
	return new MiqtVirtualQFocusEvent(static_cast<QEvent::Type>(typeVal), static_cast<Qt::FocusReason>(reason));
}

void QFocusEvent_virtbase(QFocusEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QFocusEvent* QFocusEvent_Clone(const QFocusEvent* self) {
	return self->clone();
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

void QFocusEvent_override_virtual_Clone(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFocusEvent*>( (QFocusEvent*)(self) )->handle__Clone = slot;
}

QFocusEvent* QFocusEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQFocusEvent*)(self) )->virtualbase_Clone();
}

void QFocusEvent_override_virtual_SetAccepted(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFocusEvent*>( (QFocusEvent*)(self) )->handle__SetAccepted = slot;
}

void QFocusEvent_virtualbase_SetAccepted(void* self, bool accepted) {
	( (MiqtVirtualQFocusEvent*)(self) )->virtualbase_SetAccepted(accepted);
}

void QFocusEvent_Delete(QFocusEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQFocusEvent*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQPaintEvent : public virtual QPaintEvent {
public:

	MiqtVirtualQPaintEvent(const QRegion& paintRegion): QPaintEvent(paintRegion) {};
	MiqtVirtualQPaintEvent(const QRect& paintRect): QPaintEvent(paintRect) {};

	virtual ~MiqtVirtualQPaintEvent() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEvent* clone() const override {
		if (handle__Clone == 0) {
			return QPaintEvent::clone();
		}
		

		QPaintEvent* callback_return_value = miqt_exec_callback_QPaintEvent_Clone(const_cast<MiqtVirtualQPaintEvent*>(this), handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEvent* virtualbase_Clone() const {

		return QPaintEvent::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__SetAccepted == 0) {
			QPaintEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QPaintEvent_SetAccepted(this, handle__SetAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAccepted(bool accepted) {

		QPaintEvent::setAccepted(accepted);

	}

};

QPaintEvent* QPaintEvent_new(QRegion* paintRegion) {
	return new MiqtVirtualQPaintEvent(*paintRegion);
}

QPaintEvent* QPaintEvent_new2(QRect* paintRect) {
	return new MiqtVirtualQPaintEvent(*paintRect);
}

void QPaintEvent_virtbase(QPaintEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QPaintEvent* QPaintEvent_Clone(const QPaintEvent* self) {
	return self->clone();
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

void QPaintEvent_override_virtual_Clone(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPaintEvent*>( (QPaintEvent*)(self) )->handle__Clone = slot;
}

QPaintEvent* QPaintEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQPaintEvent*)(self) )->virtualbase_Clone();
}

void QPaintEvent_override_virtual_SetAccepted(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPaintEvent*>( (QPaintEvent*)(self) )->handle__SetAccepted = slot;
}

void QPaintEvent_virtualbase_SetAccepted(void* self, bool accepted) {
	( (MiqtVirtualQPaintEvent*)(self) )->virtualbase_SetAccepted(accepted);
}

void QPaintEvent_Delete(QPaintEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQPaintEvent*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQMoveEvent : public virtual QMoveEvent {
public:

	MiqtVirtualQMoveEvent(const QPoint& pos, const QPoint& oldPos): QMoveEvent(pos, oldPos) {};

	virtual ~MiqtVirtualQMoveEvent() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QMoveEvent* clone() const override {
		if (handle__Clone == 0) {
			return QMoveEvent::clone();
		}
		

		QMoveEvent* callback_return_value = miqt_exec_callback_QMoveEvent_Clone(const_cast<MiqtVirtualQMoveEvent*>(this), handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QMoveEvent* virtualbase_Clone() const {

		return QMoveEvent::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__SetAccepted == 0) {
			QMoveEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QMoveEvent_SetAccepted(this, handle__SetAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAccepted(bool accepted) {

		QMoveEvent::setAccepted(accepted);

	}

};

QMoveEvent* QMoveEvent_new(QPoint* pos, QPoint* oldPos) {
	return new MiqtVirtualQMoveEvent(*pos, *oldPos);
}

void QMoveEvent_virtbase(QMoveEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QMoveEvent* QMoveEvent_Clone(const QMoveEvent* self) {
	return self->clone();
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

void QMoveEvent_override_virtual_Clone(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMoveEvent*>( (QMoveEvent*)(self) )->handle__Clone = slot;
}

QMoveEvent* QMoveEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQMoveEvent*)(self) )->virtualbase_Clone();
}

void QMoveEvent_override_virtual_SetAccepted(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMoveEvent*>( (QMoveEvent*)(self) )->handle__SetAccepted = slot;
}

void QMoveEvent_virtualbase_SetAccepted(void* self, bool accepted) {
	( (MiqtVirtualQMoveEvent*)(self) )->virtualbase_SetAccepted(accepted);
}

void QMoveEvent_Delete(QMoveEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQMoveEvent*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQExposeEvent : public virtual QExposeEvent {
public:

	MiqtVirtualQExposeEvent(const QRegion& m_region): QExposeEvent(m_region) {};

	virtual ~MiqtVirtualQExposeEvent() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QExposeEvent* clone() const override {
		if (handle__Clone == 0) {
			return QExposeEvent::clone();
		}
		

		QExposeEvent* callback_return_value = miqt_exec_callback_QExposeEvent_Clone(const_cast<MiqtVirtualQExposeEvent*>(this), handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QExposeEvent* virtualbase_Clone() const {

		return QExposeEvent::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__SetAccepted == 0) {
			QExposeEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QExposeEvent_SetAccepted(this, handle__SetAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAccepted(bool accepted) {

		QExposeEvent::setAccepted(accepted);

	}

};

QExposeEvent* QExposeEvent_new(QRegion* m_region) {
	return new MiqtVirtualQExposeEvent(*m_region);
}

void QExposeEvent_virtbase(QExposeEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QExposeEvent* QExposeEvent_Clone(const QExposeEvent* self) {
	return self->clone();
}

QRegion* QExposeEvent_Region(const QExposeEvent* self) {
	const QRegion& _ret = self->region();
	// Cast returned reference into pointer
	return const_cast<QRegion*>(&_ret);
}

void QExposeEvent_override_virtual_Clone(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQExposeEvent*>( (QExposeEvent*)(self) )->handle__Clone = slot;
}

QExposeEvent* QExposeEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQExposeEvent*)(self) )->virtualbase_Clone();
}

void QExposeEvent_override_virtual_SetAccepted(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQExposeEvent*>( (QExposeEvent*)(self) )->handle__SetAccepted = slot;
}

void QExposeEvent_virtualbase_SetAccepted(void* self, bool accepted) {
	( (MiqtVirtualQExposeEvent*)(self) )->virtualbase_SetAccepted(accepted);
}

void QExposeEvent_Delete(QExposeEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQExposeEvent*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQPlatformSurfaceEvent : public virtual QPlatformSurfaceEvent {
public:

	MiqtVirtualQPlatformSurfaceEvent(QPlatformSurfaceEvent::SurfaceEventType surfaceEventType): QPlatformSurfaceEvent(surfaceEventType) {};

	virtual ~MiqtVirtualQPlatformSurfaceEvent() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QPlatformSurfaceEvent* clone() const override {
		if (handle__Clone == 0) {
			return QPlatformSurfaceEvent::clone();
		}
		

		QPlatformSurfaceEvent* callback_return_value = miqt_exec_callback_QPlatformSurfaceEvent_Clone(const_cast<MiqtVirtualQPlatformSurfaceEvent*>(this), handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPlatformSurfaceEvent* virtualbase_Clone() const {

		return QPlatformSurfaceEvent::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__SetAccepted == 0) {
			QPlatformSurfaceEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QPlatformSurfaceEvent_SetAccepted(this, handle__SetAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAccepted(bool accepted) {

		QPlatformSurfaceEvent::setAccepted(accepted);

	}

};

QPlatformSurfaceEvent* QPlatformSurfaceEvent_new(int surfaceEventType) {
	return new MiqtVirtualQPlatformSurfaceEvent(static_cast<QPlatformSurfaceEvent::SurfaceEventType>(surfaceEventType));
}

void QPlatformSurfaceEvent_virtbase(QPlatformSurfaceEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QPlatformSurfaceEvent* QPlatformSurfaceEvent_Clone(const QPlatformSurfaceEvent* self) {
	return self->clone();
}

int QPlatformSurfaceEvent_SurfaceEventType(const QPlatformSurfaceEvent* self) {
	QPlatformSurfaceEvent::SurfaceEventType _ret = self->surfaceEventType();
	return static_cast<int>(_ret);
}

void QPlatformSurfaceEvent_override_virtual_Clone(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPlatformSurfaceEvent*>( (QPlatformSurfaceEvent*)(self) )->handle__Clone = slot;
}

QPlatformSurfaceEvent* QPlatformSurfaceEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQPlatformSurfaceEvent*)(self) )->virtualbase_Clone();
}

void QPlatformSurfaceEvent_override_virtual_SetAccepted(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPlatformSurfaceEvent*>( (QPlatformSurfaceEvent*)(self) )->handle__SetAccepted = slot;
}

void QPlatformSurfaceEvent_virtualbase_SetAccepted(void* self, bool accepted) {
	( (MiqtVirtualQPlatformSurfaceEvent*)(self) )->virtualbase_SetAccepted(accepted);
}

void QPlatformSurfaceEvent_Delete(QPlatformSurfaceEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQPlatformSurfaceEvent*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQResizeEvent : public virtual QResizeEvent {
public:

	MiqtVirtualQResizeEvent(const QSize& size, const QSize& oldSize): QResizeEvent(size, oldSize) {};

	virtual ~MiqtVirtualQResizeEvent() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QResizeEvent* clone() const override {
		if (handle__Clone == 0) {
			return QResizeEvent::clone();
		}
		

		QResizeEvent* callback_return_value = miqt_exec_callback_QResizeEvent_Clone(const_cast<MiqtVirtualQResizeEvent*>(this), handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QResizeEvent* virtualbase_Clone() const {

		return QResizeEvent::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__SetAccepted == 0) {
			QResizeEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QResizeEvent_SetAccepted(this, handle__SetAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAccepted(bool accepted) {

		QResizeEvent::setAccepted(accepted);

	}

};

QResizeEvent* QResizeEvent_new(QSize* size, QSize* oldSize) {
	return new MiqtVirtualQResizeEvent(*size, *oldSize);
}

void QResizeEvent_virtbase(QResizeEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QResizeEvent* QResizeEvent_Clone(const QResizeEvent* self) {
	return self->clone();
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

void QResizeEvent_override_virtual_Clone(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQResizeEvent*>( (QResizeEvent*)(self) )->handle__Clone = slot;
}

QResizeEvent* QResizeEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQResizeEvent*)(self) )->virtualbase_Clone();
}

void QResizeEvent_override_virtual_SetAccepted(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQResizeEvent*>( (QResizeEvent*)(self) )->handle__SetAccepted = slot;
}

void QResizeEvent_virtualbase_SetAccepted(void* self, bool accepted) {
	( (MiqtVirtualQResizeEvent*)(self) )->virtualbase_SetAccepted(accepted);
}

void QResizeEvent_Delete(QResizeEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQResizeEvent*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQCloseEvent : public virtual QCloseEvent {
public:

	MiqtVirtualQCloseEvent(): QCloseEvent() {};

	virtual ~MiqtVirtualQCloseEvent() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QCloseEvent* clone() const override {
		if (handle__Clone == 0) {
			return QCloseEvent::clone();
		}
		

		QCloseEvent* callback_return_value = miqt_exec_callback_QCloseEvent_Clone(const_cast<MiqtVirtualQCloseEvent*>(this), handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QCloseEvent* virtualbase_Clone() const {

		return QCloseEvent::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__SetAccepted == 0) {
			QCloseEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QCloseEvent_SetAccepted(this, handle__SetAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAccepted(bool accepted) {

		QCloseEvent::setAccepted(accepted);

	}

};

QCloseEvent* QCloseEvent_new() {
	return new MiqtVirtualQCloseEvent();
}

void QCloseEvent_virtbase(QCloseEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QCloseEvent* QCloseEvent_Clone(const QCloseEvent* self) {
	return self->clone();
}

void QCloseEvent_override_virtual_Clone(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQCloseEvent*>( (QCloseEvent*)(self) )->handle__Clone = slot;
}

QCloseEvent* QCloseEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQCloseEvent*)(self) )->virtualbase_Clone();
}

void QCloseEvent_override_virtual_SetAccepted(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQCloseEvent*>( (QCloseEvent*)(self) )->handle__SetAccepted = slot;
}

void QCloseEvent_virtualbase_SetAccepted(void* self, bool accepted) {
	( (MiqtVirtualQCloseEvent*)(self) )->virtualbase_SetAccepted(accepted);
}

void QCloseEvent_Delete(QCloseEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQCloseEvent*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQIconDragEvent : public virtual QIconDragEvent {
public:

	MiqtVirtualQIconDragEvent(): QIconDragEvent() {};

	virtual ~MiqtVirtualQIconDragEvent() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QIconDragEvent* clone() const override {
		if (handle__Clone == 0) {
			return QIconDragEvent::clone();
		}
		

		QIconDragEvent* callback_return_value = miqt_exec_callback_QIconDragEvent_Clone(const_cast<MiqtVirtualQIconDragEvent*>(this), handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QIconDragEvent* virtualbase_Clone() const {

		return QIconDragEvent::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__SetAccepted == 0) {
			QIconDragEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QIconDragEvent_SetAccepted(this, handle__SetAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAccepted(bool accepted) {

		QIconDragEvent::setAccepted(accepted);

	}

};

QIconDragEvent* QIconDragEvent_new() {
	return new MiqtVirtualQIconDragEvent();
}

void QIconDragEvent_virtbase(QIconDragEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QIconDragEvent* QIconDragEvent_Clone(const QIconDragEvent* self) {
	return self->clone();
}

void QIconDragEvent_override_virtual_Clone(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIconDragEvent*>( (QIconDragEvent*)(self) )->handle__Clone = slot;
}

QIconDragEvent* QIconDragEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQIconDragEvent*)(self) )->virtualbase_Clone();
}

void QIconDragEvent_override_virtual_SetAccepted(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIconDragEvent*>( (QIconDragEvent*)(self) )->handle__SetAccepted = slot;
}

void QIconDragEvent_virtualbase_SetAccepted(void* self, bool accepted) {
	( (MiqtVirtualQIconDragEvent*)(self) )->virtualbase_SetAccepted(accepted);
}

void QIconDragEvent_Delete(QIconDragEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQIconDragEvent*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQShowEvent : public virtual QShowEvent {
public:

	MiqtVirtualQShowEvent(): QShowEvent() {};

	virtual ~MiqtVirtualQShowEvent() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QShowEvent* clone() const override {
		if (handle__Clone == 0) {
			return QShowEvent::clone();
		}
		

		QShowEvent* callback_return_value = miqt_exec_callback_QShowEvent_Clone(const_cast<MiqtVirtualQShowEvent*>(this), handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QShowEvent* virtualbase_Clone() const {

		return QShowEvent::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__SetAccepted == 0) {
			QShowEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QShowEvent_SetAccepted(this, handle__SetAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAccepted(bool accepted) {

		QShowEvent::setAccepted(accepted);

	}

};

QShowEvent* QShowEvent_new() {
	return new MiqtVirtualQShowEvent();
}

void QShowEvent_virtbase(QShowEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QShowEvent* QShowEvent_Clone(const QShowEvent* self) {
	return self->clone();
}

void QShowEvent_override_virtual_Clone(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQShowEvent*>( (QShowEvent*)(self) )->handle__Clone = slot;
}

QShowEvent* QShowEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQShowEvent*)(self) )->virtualbase_Clone();
}

void QShowEvent_override_virtual_SetAccepted(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQShowEvent*>( (QShowEvent*)(self) )->handle__SetAccepted = slot;
}

void QShowEvent_virtualbase_SetAccepted(void* self, bool accepted) {
	( (MiqtVirtualQShowEvent*)(self) )->virtualbase_SetAccepted(accepted);
}

void QShowEvent_Delete(QShowEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQShowEvent*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQHideEvent : public virtual QHideEvent {
public:

	MiqtVirtualQHideEvent(): QHideEvent() {};

	virtual ~MiqtVirtualQHideEvent() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QHideEvent* clone() const override {
		if (handle__Clone == 0) {
			return QHideEvent::clone();
		}
		

		QHideEvent* callback_return_value = miqt_exec_callback_QHideEvent_Clone(const_cast<MiqtVirtualQHideEvent*>(this), handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QHideEvent* virtualbase_Clone() const {

		return QHideEvent::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__SetAccepted == 0) {
			QHideEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QHideEvent_SetAccepted(this, handle__SetAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAccepted(bool accepted) {

		QHideEvent::setAccepted(accepted);

	}

};

QHideEvent* QHideEvent_new() {
	return new MiqtVirtualQHideEvent();
}

void QHideEvent_virtbase(QHideEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QHideEvent* QHideEvent_Clone(const QHideEvent* self) {
	return self->clone();
}

void QHideEvent_override_virtual_Clone(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQHideEvent*>( (QHideEvent*)(self) )->handle__Clone = slot;
}

QHideEvent* QHideEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQHideEvent*)(self) )->virtualbase_Clone();
}

void QHideEvent_override_virtual_SetAccepted(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQHideEvent*>( (QHideEvent*)(self) )->handle__SetAccepted = slot;
}

void QHideEvent_virtualbase_SetAccepted(void* self, bool accepted) {
	( (MiqtVirtualQHideEvent*)(self) )->virtualbase_SetAccepted(accepted);
}

void QHideEvent_Delete(QHideEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQHideEvent*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQContextMenuEvent : public virtual QContextMenuEvent {
public:

	MiqtVirtualQContextMenuEvent(QContextMenuEvent::Reason reason, const QPoint& pos, const QPoint& globalPos): QContextMenuEvent(reason, pos, globalPos) {};
	MiqtVirtualQContextMenuEvent(QContextMenuEvent::Reason reason, const QPoint& pos): QContextMenuEvent(reason, pos) {};
	MiqtVirtualQContextMenuEvent(QContextMenuEvent::Reason reason, const QPoint& pos, const QPoint& globalPos, Qt::KeyboardModifiers modifiers): QContextMenuEvent(reason, pos, globalPos, modifiers) {};

	virtual ~MiqtVirtualQContextMenuEvent() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QContextMenuEvent* clone() const override {
		if (handle__Clone == 0) {
			return QContextMenuEvent::clone();
		}
		

		QContextMenuEvent* callback_return_value = miqt_exec_callback_QContextMenuEvent_Clone(const_cast<MiqtVirtualQContextMenuEvent*>(this), handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QContextMenuEvent* virtualbase_Clone() const {

		return QContextMenuEvent::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetTimestamp = 0;

	// Subclass to allow providing a Go implementation
	virtual void setTimestamp(quint64 timestamp) override {
		if (handle__SetTimestamp == 0) {
			QContextMenuEvent::setTimestamp(timestamp);
			return;
		}
		
		quint64 timestamp_ret = timestamp;
		unsigned long long sigval1 = static_cast<unsigned long long>(timestamp_ret);

		miqt_exec_callback_QContextMenuEvent_SetTimestamp(this, handle__SetTimestamp, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetTimestamp(unsigned long long timestamp) {

		QContextMenuEvent::setTimestamp(static_cast<quint64>(timestamp));

	}

};

QContextMenuEvent* QContextMenuEvent_new(int reason, QPoint* pos, QPoint* globalPos) {
	return new MiqtVirtualQContextMenuEvent(static_cast<QContextMenuEvent::Reason>(reason), *pos, *globalPos);
}

QContextMenuEvent* QContextMenuEvent_new2(int reason, QPoint* pos) {
	return new MiqtVirtualQContextMenuEvent(static_cast<QContextMenuEvent::Reason>(reason), *pos);
}

QContextMenuEvent* QContextMenuEvent_new3(int reason, QPoint* pos, QPoint* globalPos, int modifiers) {
	return new MiqtVirtualQContextMenuEvent(static_cast<QContextMenuEvent::Reason>(reason), *pos, *globalPos, static_cast<Qt::KeyboardModifiers>(modifiers));
}

void QContextMenuEvent_virtbase(QContextMenuEvent* src, QInputEvent** outptr_QInputEvent) {
	*outptr_QInputEvent = static_cast<QInputEvent*>(src);
}

QContextMenuEvent* QContextMenuEvent_Clone(const QContextMenuEvent* self) {
	return self->clone();
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

void QContextMenuEvent_override_virtual_Clone(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQContextMenuEvent*>( (QContextMenuEvent*)(self) )->handle__Clone = slot;
}

QContextMenuEvent* QContextMenuEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQContextMenuEvent*)(self) )->virtualbase_Clone();
}

void QContextMenuEvent_override_virtual_SetTimestamp(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQContextMenuEvent*>( (QContextMenuEvent*)(self) )->handle__SetTimestamp = slot;
}

void QContextMenuEvent_virtualbase_SetTimestamp(void* self, unsigned long long timestamp) {
	( (MiqtVirtualQContextMenuEvent*)(self) )->virtualbase_SetTimestamp(timestamp);
}

void QContextMenuEvent_Delete(QContextMenuEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQContextMenuEvent*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQInputMethodEvent : public virtual QInputMethodEvent {
public:

	MiqtVirtualQInputMethodEvent(): QInputMethodEvent() {};
	MiqtVirtualQInputMethodEvent(const QString& preeditText, const QList<QInputMethodEvent::Attribute>& attributes): QInputMethodEvent(preeditText, attributes) {};

	virtual ~MiqtVirtualQInputMethodEvent() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QInputMethodEvent* clone() const override {
		if (handle__Clone == 0) {
			return QInputMethodEvent::clone();
		}
		

		QInputMethodEvent* callback_return_value = miqt_exec_callback_QInputMethodEvent_Clone(const_cast<MiqtVirtualQInputMethodEvent*>(this), handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QInputMethodEvent* virtualbase_Clone() const {

		return QInputMethodEvent::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__SetAccepted == 0) {
			QInputMethodEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QInputMethodEvent_SetAccepted(this, handle__SetAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAccepted(bool accepted) {

		QInputMethodEvent::setAccepted(accepted);

	}

};

QInputMethodEvent* QInputMethodEvent_new() {
	return new MiqtVirtualQInputMethodEvent();
}

QInputMethodEvent* QInputMethodEvent_new2(struct miqt_string preeditText, struct miqt_array /* of QInputMethodEvent__Attribute* */  attributes) {
	QString preeditText_QString = QString::fromUtf8(preeditText.data, preeditText.len);
	QList<QInputMethodEvent::Attribute> attributes_QList;
	attributes_QList.reserve(attributes.len);
	QInputMethodEvent__Attribute** attributes_arr = static_cast<QInputMethodEvent__Attribute**>(attributes.data);
	for(size_t i = 0; i < attributes.len; ++i) {
		attributes_QList.push_back(*(attributes_arr[i]));
	}
	return new MiqtVirtualQInputMethodEvent(preeditText_QString, attributes_QList);
}

void QInputMethodEvent_virtbase(QInputMethodEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QInputMethodEvent* QInputMethodEvent_Clone(const QInputMethodEvent* self) {
	return self->clone();
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

void QInputMethodEvent_override_virtual_Clone(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQInputMethodEvent*>( (QInputMethodEvent*)(self) )->handle__Clone = slot;
}

QInputMethodEvent* QInputMethodEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQInputMethodEvent*)(self) )->virtualbase_Clone();
}

void QInputMethodEvent_override_virtual_SetAccepted(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQInputMethodEvent*>( (QInputMethodEvent*)(self) )->handle__SetAccepted = slot;
}

void QInputMethodEvent_virtualbase_SetAccepted(void* self, bool accepted) {
	( (MiqtVirtualQInputMethodEvent*)(self) )->virtualbase_SetAccepted(accepted);
}

void QInputMethodEvent_Delete(QInputMethodEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQInputMethodEvent*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQInputMethodQueryEvent : public virtual QInputMethodQueryEvent {
public:

	MiqtVirtualQInputMethodQueryEvent(Qt::InputMethodQueries queries): QInputMethodQueryEvent(queries) {};

	virtual ~MiqtVirtualQInputMethodQueryEvent() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QInputMethodQueryEvent* clone() const override {
		if (handle__Clone == 0) {
			return QInputMethodQueryEvent::clone();
		}
		

		QInputMethodQueryEvent* callback_return_value = miqt_exec_callback_QInputMethodQueryEvent_Clone(const_cast<MiqtVirtualQInputMethodQueryEvent*>(this), handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QInputMethodQueryEvent* virtualbase_Clone() const {

		return QInputMethodQueryEvent::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__SetAccepted == 0) {
			QInputMethodQueryEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QInputMethodQueryEvent_SetAccepted(this, handle__SetAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAccepted(bool accepted) {

		QInputMethodQueryEvent::setAccepted(accepted);

	}

};

QInputMethodQueryEvent* QInputMethodQueryEvent_new(int queries) {
	return new MiqtVirtualQInputMethodQueryEvent(static_cast<Qt::InputMethodQueries>(queries));
}

void QInputMethodQueryEvent_virtbase(QInputMethodQueryEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QInputMethodQueryEvent* QInputMethodQueryEvent_Clone(const QInputMethodQueryEvent* self) {
	return self->clone();
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

void QInputMethodQueryEvent_override_virtual_Clone(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQInputMethodQueryEvent*>( (QInputMethodQueryEvent*)(self) )->handle__Clone = slot;
}

QInputMethodQueryEvent* QInputMethodQueryEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQInputMethodQueryEvent*)(self) )->virtualbase_Clone();
}

void QInputMethodQueryEvent_override_virtual_SetAccepted(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQInputMethodQueryEvent*>( (QInputMethodQueryEvent*)(self) )->handle__SetAccepted = slot;
}

void QInputMethodQueryEvent_virtualbase_SetAccepted(void* self, bool accepted) {
	( (MiqtVirtualQInputMethodQueryEvent*)(self) )->virtualbase_SetAccepted(accepted);
}

void QInputMethodQueryEvent_Delete(QInputMethodQueryEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQInputMethodQueryEvent*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQDropEvent : public virtual QDropEvent {
public:

	MiqtVirtualQDropEvent(const QPointF& pos, Qt::DropActions actions, const QMimeData* data, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers): QDropEvent(pos, actions, data, buttons, modifiers) {};
	MiqtVirtualQDropEvent(const QPointF& pos, Qt::DropActions actions, const QMimeData* data, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, QEvent::Type typeVal): QDropEvent(pos, actions, data, buttons, modifiers, typeVal) {};

	virtual ~MiqtVirtualQDropEvent() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QDropEvent* clone() const override {
		if (handle__Clone == 0) {
			return QDropEvent::clone();
		}
		

		QDropEvent* callback_return_value = miqt_exec_callback_QDropEvent_Clone(const_cast<MiqtVirtualQDropEvent*>(this), handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QDropEvent* virtualbase_Clone() const {

		return QDropEvent::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__SetAccepted == 0) {
			QDropEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QDropEvent_SetAccepted(this, handle__SetAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAccepted(bool accepted) {

		QDropEvent::setAccepted(accepted);

	}

};

QDropEvent* QDropEvent_new(QPointF* pos, int actions, QMimeData* data, int buttons, int modifiers) {
	return new MiqtVirtualQDropEvent(*pos, static_cast<Qt::DropActions>(actions), data, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
}

QDropEvent* QDropEvent_new2(QPointF* pos, int actions, QMimeData* data, int buttons, int modifiers, int typeVal) {
	return new MiqtVirtualQDropEvent(*pos, static_cast<Qt::DropActions>(actions), data, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<QEvent::Type>(typeVal));
}

void QDropEvent_virtbase(QDropEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QDropEvent* QDropEvent_Clone(const QDropEvent* self) {
	return self->clone();
}

QPoint* QDropEvent_Pos(const QDropEvent* self) {
	return new QPoint(self->pos());
}

QPointF* QDropEvent_PosF(const QDropEvent* self) {
	return new QPointF(self->posF());
}

int QDropEvent_MouseButtons(const QDropEvent* self) {
	Qt::MouseButtons _ret = self->mouseButtons();
	return static_cast<int>(_ret);
}

int QDropEvent_KeyboardModifiers(const QDropEvent* self) {
	Qt::KeyboardModifiers _ret = self->keyboardModifiers();
	return static_cast<int>(_ret);
}

QPointF* QDropEvent_Position(const QDropEvent* self) {
	return new QPointF(self->position());
}

int QDropEvent_Buttons(const QDropEvent* self) {
	Qt::MouseButtons _ret = self->buttons();
	return static_cast<int>(_ret);
}

int QDropEvent_Modifiers(const QDropEvent* self) {
	Qt::KeyboardModifiers _ret = self->modifiers();
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

void QDropEvent_override_virtual_Clone(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDropEvent*>( (QDropEvent*)(self) )->handle__Clone = slot;
}

QDropEvent* QDropEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQDropEvent*)(self) )->virtualbase_Clone();
}

void QDropEvent_override_virtual_SetAccepted(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDropEvent*>( (QDropEvent*)(self) )->handle__SetAccepted = slot;
}

void QDropEvent_virtualbase_SetAccepted(void* self, bool accepted) {
	( (MiqtVirtualQDropEvent*)(self) )->virtualbase_SetAccepted(accepted);
}

void QDropEvent_Delete(QDropEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQDropEvent*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQDragMoveEvent : public virtual QDragMoveEvent {
public:

	MiqtVirtualQDragMoveEvent(const QPoint& pos, Qt::DropActions actions, const QMimeData* data, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers): QDragMoveEvent(pos, actions, data, buttons, modifiers) {};
	MiqtVirtualQDragMoveEvent(const QPoint& pos, Qt::DropActions actions, const QMimeData* data, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, QEvent::Type typeVal): QDragMoveEvent(pos, actions, data, buttons, modifiers, typeVal) {};

	virtual ~MiqtVirtualQDragMoveEvent() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QDragMoveEvent* clone() const override {
		if (handle__Clone == 0) {
			return QDragMoveEvent::clone();
		}
		

		QDragMoveEvent* callback_return_value = miqt_exec_callback_QDragMoveEvent_Clone(const_cast<MiqtVirtualQDragMoveEvent*>(this), handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QDragMoveEvent* virtualbase_Clone() const {

		return QDragMoveEvent::clone();

	}

};

QDragMoveEvent* QDragMoveEvent_new(QPoint* pos, int actions, QMimeData* data, int buttons, int modifiers) {
	return new MiqtVirtualQDragMoveEvent(*pos, static_cast<Qt::DropActions>(actions), data, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
}

QDragMoveEvent* QDragMoveEvent_new2(QPoint* pos, int actions, QMimeData* data, int buttons, int modifiers, int typeVal) {
	return new MiqtVirtualQDragMoveEvent(*pos, static_cast<Qt::DropActions>(actions), data, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<QEvent::Type>(typeVal));
}

void QDragMoveEvent_virtbase(QDragMoveEvent* src, QDropEvent** outptr_QDropEvent) {
	*outptr_QDropEvent = static_cast<QDropEvent*>(src);
}

QDragMoveEvent* QDragMoveEvent_Clone(const QDragMoveEvent* self) {
	return self->clone();
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

void QDragMoveEvent_override_virtual_Clone(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDragMoveEvent*>( (QDragMoveEvent*)(self) )->handle__Clone = slot;
}

QDragMoveEvent* QDragMoveEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQDragMoveEvent*)(self) )->virtualbase_Clone();
}

void QDragMoveEvent_Delete(QDragMoveEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQDragMoveEvent*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQDragEnterEvent : public virtual QDragEnterEvent {
public:

	MiqtVirtualQDragEnterEvent(const QPoint& pos, Qt::DropActions actions, const QMimeData* data, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers): QDragEnterEvent(pos, actions, data, buttons, modifiers) {};

	virtual ~MiqtVirtualQDragEnterEvent() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QDragEnterEvent* clone() const override {
		if (handle__Clone == 0) {
			return QDragEnterEvent::clone();
		}
		

		QDragEnterEvent* callback_return_value = miqt_exec_callback_QDragEnterEvent_Clone(const_cast<MiqtVirtualQDragEnterEvent*>(this), handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QDragEnterEvent* virtualbase_Clone() const {

		return QDragEnterEvent::clone();

	}

};

QDragEnterEvent* QDragEnterEvent_new(QPoint* pos, int actions, QMimeData* data, int buttons, int modifiers) {
	return new MiqtVirtualQDragEnterEvent(*pos, static_cast<Qt::DropActions>(actions), data, static_cast<Qt::MouseButtons>(buttons), static_cast<Qt::KeyboardModifiers>(modifiers));
}

void QDragEnterEvent_virtbase(QDragEnterEvent* src, QDragMoveEvent** outptr_QDragMoveEvent) {
	*outptr_QDragMoveEvent = static_cast<QDragMoveEvent*>(src);
}

QDragEnterEvent* QDragEnterEvent_Clone(const QDragEnterEvent* self) {
	return self->clone();
}

void QDragEnterEvent_override_virtual_Clone(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDragEnterEvent*>( (QDragEnterEvent*)(self) )->handle__Clone = slot;
}

QDragEnterEvent* QDragEnterEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQDragEnterEvent*)(self) )->virtualbase_Clone();
}

void QDragEnterEvent_Delete(QDragEnterEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQDragEnterEvent*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQDragLeaveEvent : public virtual QDragLeaveEvent {
public:

	MiqtVirtualQDragLeaveEvent(): QDragLeaveEvent() {};

	virtual ~MiqtVirtualQDragLeaveEvent() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QDragLeaveEvent* clone() const override {
		if (handle__Clone == 0) {
			return QDragLeaveEvent::clone();
		}
		

		QDragLeaveEvent* callback_return_value = miqt_exec_callback_QDragLeaveEvent_Clone(const_cast<MiqtVirtualQDragLeaveEvent*>(this), handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QDragLeaveEvent* virtualbase_Clone() const {

		return QDragLeaveEvent::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__SetAccepted == 0) {
			QDragLeaveEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QDragLeaveEvent_SetAccepted(this, handle__SetAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAccepted(bool accepted) {

		QDragLeaveEvent::setAccepted(accepted);

	}

};

QDragLeaveEvent* QDragLeaveEvent_new() {
	return new MiqtVirtualQDragLeaveEvent();
}

void QDragLeaveEvent_virtbase(QDragLeaveEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QDragLeaveEvent* QDragLeaveEvent_Clone(const QDragLeaveEvent* self) {
	return self->clone();
}

void QDragLeaveEvent_override_virtual_Clone(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDragLeaveEvent*>( (QDragLeaveEvent*)(self) )->handle__Clone = slot;
}

QDragLeaveEvent* QDragLeaveEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQDragLeaveEvent*)(self) )->virtualbase_Clone();
}

void QDragLeaveEvent_override_virtual_SetAccepted(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDragLeaveEvent*>( (QDragLeaveEvent*)(self) )->handle__SetAccepted = slot;
}

void QDragLeaveEvent_virtualbase_SetAccepted(void* self, bool accepted) {
	( (MiqtVirtualQDragLeaveEvent*)(self) )->virtualbase_SetAccepted(accepted);
}

void QDragLeaveEvent_Delete(QDragLeaveEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQDragLeaveEvent*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQHelpEvent : public virtual QHelpEvent {
public:

	MiqtVirtualQHelpEvent(QEvent::Type typeVal, const QPoint& pos, const QPoint& globalPos): QHelpEvent(typeVal, pos, globalPos) {};

	virtual ~MiqtVirtualQHelpEvent() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QHelpEvent* clone() const override {
		if (handle__Clone == 0) {
			return QHelpEvent::clone();
		}
		

		QHelpEvent* callback_return_value = miqt_exec_callback_QHelpEvent_Clone(const_cast<MiqtVirtualQHelpEvent*>(this), handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QHelpEvent* virtualbase_Clone() const {

		return QHelpEvent::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__SetAccepted == 0) {
			QHelpEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QHelpEvent_SetAccepted(this, handle__SetAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAccepted(bool accepted) {

		QHelpEvent::setAccepted(accepted);

	}

};

QHelpEvent* QHelpEvent_new(int typeVal, QPoint* pos, QPoint* globalPos) {
	return new MiqtVirtualQHelpEvent(static_cast<QEvent::Type>(typeVal), *pos, *globalPos);
}

void QHelpEvent_virtbase(QHelpEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QHelpEvent* QHelpEvent_Clone(const QHelpEvent* self) {
	return self->clone();
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

void QHelpEvent_override_virtual_Clone(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQHelpEvent*>( (QHelpEvent*)(self) )->handle__Clone = slot;
}

QHelpEvent* QHelpEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQHelpEvent*)(self) )->virtualbase_Clone();
}

void QHelpEvent_override_virtual_SetAccepted(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQHelpEvent*>( (QHelpEvent*)(self) )->handle__SetAccepted = slot;
}

void QHelpEvent_virtualbase_SetAccepted(void* self, bool accepted) {
	( (MiqtVirtualQHelpEvent*)(self) )->virtualbase_SetAccepted(accepted);
}

void QHelpEvent_Delete(QHelpEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQHelpEvent*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQStatusTipEvent : public virtual QStatusTipEvent {
public:

	MiqtVirtualQStatusTipEvent(const QString& tip): QStatusTipEvent(tip) {};

	virtual ~MiqtVirtualQStatusTipEvent() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QStatusTipEvent* clone() const override {
		if (handle__Clone == 0) {
			return QStatusTipEvent::clone();
		}
		

		QStatusTipEvent* callback_return_value = miqt_exec_callback_QStatusTipEvent_Clone(const_cast<MiqtVirtualQStatusTipEvent*>(this), handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QStatusTipEvent* virtualbase_Clone() const {

		return QStatusTipEvent::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__SetAccepted == 0) {
			QStatusTipEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QStatusTipEvent_SetAccepted(this, handle__SetAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAccepted(bool accepted) {

		QStatusTipEvent::setAccepted(accepted);

	}

};

QStatusTipEvent* QStatusTipEvent_new(struct miqt_string tip) {
	QString tip_QString = QString::fromUtf8(tip.data, tip.len);
	return new MiqtVirtualQStatusTipEvent(tip_QString);
}

void QStatusTipEvent_virtbase(QStatusTipEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QStatusTipEvent* QStatusTipEvent_Clone(const QStatusTipEvent* self) {
	return self->clone();
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

void QStatusTipEvent_override_virtual_Clone(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStatusTipEvent*>( (QStatusTipEvent*)(self) )->handle__Clone = slot;
}

QStatusTipEvent* QStatusTipEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQStatusTipEvent*)(self) )->virtualbase_Clone();
}

void QStatusTipEvent_override_virtual_SetAccepted(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStatusTipEvent*>( (QStatusTipEvent*)(self) )->handle__SetAccepted = slot;
}

void QStatusTipEvent_virtualbase_SetAccepted(void* self, bool accepted) {
	( (MiqtVirtualQStatusTipEvent*)(self) )->virtualbase_SetAccepted(accepted);
}

void QStatusTipEvent_Delete(QStatusTipEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQStatusTipEvent*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQWhatsThisClickedEvent : public virtual QWhatsThisClickedEvent {
public:

	MiqtVirtualQWhatsThisClickedEvent(const QString& href): QWhatsThisClickedEvent(href) {};

	virtual ~MiqtVirtualQWhatsThisClickedEvent() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QWhatsThisClickedEvent* clone() const override {
		if (handle__Clone == 0) {
			return QWhatsThisClickedEvent::clone();
		}
		

		QWhatsThisClickedEvent* callback_return_value = miqt_exec_callback_QWhatsThisClickedEvent_Clone(const_cast<MiqtVirtualQWhatsThisClickedEvent*>(this), handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QWhatsThisClickedEvent* virtualbase_Clone() const {

		return QWhatsThisClickedEvent::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__SetAccepted == 0) {
			QWhatsThisClickedEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QWhatsThisClickedEvent_SetAccepted(this, handle__SetAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAccepted(bool accepted) {

		QWhatsThisClickedEvent::setAccepted(accepted);

	}

};

QWhatsThisClickedEvent* QWhatsThisClickedEvent_new(struct miqt_string href) {
	QString href_QString = QString::fromUtf8(href.data, href.len);
	return new MiqtVirtualQWhatsThisClickedEvent(href_QString);
}

void QWhatsThisClickedEvent_virtbase(QWhatsThisClickedEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QWhatsThisClickedEvent* QWhatsThisClickedEvent_Clone(const QWhatsThisClickedEvent* self) {
	return self->clone();
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

void QWhatsThisClickedEvent_override_virtual_Clone(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWhatsThisClickedEvent*>( (QWhatsThisClickedEvent*)(self) )->handle__Clone = slot;
}

QWhatsThisClickedEvent* QWhatsThisClickedEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQWhatsThisClickedEvent*)(self) )->virtualbase_Clone();
}

void QWhatsThisClickedEvent_override_virtual_SetAccepted(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWhatsThisClickedEvent*>( (QWhatsThisClickedEvent*)(self) )->handle__SetAccepted = slot;
}

void QWhatsThisClickedEvent_virtualbase_SetAccepted(void* self, bool accepted) {
	( (MiqtVirtualQWhatsThisClickedEvent*)(self) )->virtualbase_SetAccepted(accepted);
}

void QWhatsThisClickedEvent_Delete(QWhatsThisClickedEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQWhatsThisClickedEvent*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQActionEvent : public virtual QActionEvent {
public:

	MiqtVirtualQActionEvent(int typeVal, QAction* action): QActionEvent(typeVal, action) {};
	MiqtVirtualQActionEvent(int typeVal, QAction* action, QAction* before): QActionEvent(typeVal, action, before) {};

	virtual ~MiqtVirtualQActionEvent() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QActionEvent* clone() const override {
		if (handle__Clone == 0) {
			return QActionEvent::clone();
		}
		

		QActionEvent* callback_return_value = miqt_exec_callback_QActionEvent_Clone(const_cast<MiqtVirtualQActionEvent*>(this), handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QActionEvent* virtualbase_Clone() const {

		return QActionEvent::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__SetAccepted == 0) {
			QActionEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QActionEvent_SetAccepted(this, handle__SetAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAccepted(bool accepted) {

		QActionEvent::setAccepted(accepted);

	}

};

QActionEvent* QActionEvent_new(int typeVal, QAction* action) {
	return new MiqtVirtualQActionEvent(static_cast<int>(typeVal), action);
}

QActionEvent* QActionEvent_new2(int typeVal, QAction* action, QAction* before) {
	return new MiqtVirtualQActionEvent(static_cast<int>(typeVal), action, before);
}

void QActionEvent_virtbase(QActionEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QActionEvent* QActionEvent_Clone(const QActionEvent* self) {
	return self->clone();
}

QAction* QActionEvent_Action(const QActionEvent* self) {
	return self->action();
}

QAction* QActionEvent_Before(const QActionEvent* self) {
	return self->before();
}

void QActionEvent_override_virtual_Clone(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQActionEvent*>( (QActionEvent*)(self) )->handle__Clone = slot;
}

QActionEvent* QActionEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQActionEvent*)(self) )->virtualbase_Clone();
}

void QActionEvent_override_virtual_SetAccepted(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQActionEvent*>( (QActionEvent*)(self) )->handle__SetAccepted = slot;
}

void QActionEvent_virtualbase_SetAccepted(void* self, bool accepted) {
	( (MiqtVirtualQActionEvent*)(self) )->virtualbase_SetAccepted(accepted);
}

void QActionEvent_Delete(QActionEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQActionEvent*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQFileOpenEvent : public virtual QFileOpenEvent {
public:

	MiqtVirtualQFileOpenEvent(const QString& file): QFileOpenEvent(file) {};
	MiqtVirtualQFileOpenEvent(const QUrl& url): QFileOpenEvent(url) {};

	virtual ~MiqtVirtualQFileOpenEvent() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QFileOpenEvent* clone() const override {
		if (handle__Clone == 0) {
			return QFileOpenEvent::clone();
		}
		

		QFileOpenEvent* callback_return_value = miqt_exec_callback_QFileOpenEvent_Clone(const_cast<MiqtVirtualQFileOpenEvent*>(this), handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QFileOpenEvent* virtualbase_Clone() const {

		return QFileOpenEvent::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__SetAccepted == 0) {
			QFileOpenEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QFileOpenEvent_SetAccepted(this, handle__SetAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAccepted(bool accepted) {

		QFileOpenEvent::setAccepted(accepted);

	}

};

QFileOpenEvent* QFileOpenEvent_new(struct miqt_string file) {
	QString file_QString = QString::fromUtf8(file.data, file.len);
	return new MiqtVirtualQFileOpenEvent(file_QString);
}

QFileOpenEvent* QFileOpenEvent_new2(QUrl* url) {
	return new MiqtVirtualQFileOpenEvent(*url);
}

void QFileOpenEvent_virtbase(QFileOpenEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QFileOpenEvent* QFileOpenEvent_Clone(const QFileOpenEvent* self) {
	return self->clone();
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

void QFileOpenEvent_override_virtual_Clone(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFileOpenEvent*>( (QFileOpenEvent*)(self) )->handle__Clone = slot;
}

QFileOpenEvent* QFileOpenEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQFileOpenEvent*)(self) )->virtualbase_Clone();
}

void QFileOpenEvent_override_virtual_SetAccepted(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFileOpenEvent*>( (QFileOpenEvent*)(self) )->handle__SetAccepted = slot;
}

void QFileOpenEvent_virtualbase_SetAccepted(void* self, bool accepted) {
	( (MiqtVirtualQFileOpenEvent*)(self) )->virtualbase_SetAccepted(accepted);
}

void QFileOpenEvent_Delete(QFileOpenEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQFileOpenEvent*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQToolBarChangeEvent : public virtual QToolBarChangeEvent {
public:

	MiqtVirtualQToolBarChangeEvent(bool t): QToolBarChangeEvent(t) {};

	virtual ~MiqtVirtualQToolBarChangeEvent() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QToolBarChangeEvent* clone() const override {
		if (handle__Clone == 0) {
			return QToolBarChangeEvent::clone();
		}
		

		QToolBarChangeEvent* callback_return_value = miqt_exec_callback_QToolBarChangeEvent_Clone(const_cast<MiqtVirtualQToolBarChangeEvent*>(this), handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QToolBarChangeEvent* virtualbase_Clone() const {

		return QToolBarChangeEvent::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__SetAccepted == 0) {
			QToolBarChangeEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QToolBarChangeEvent_SetAccepted(this, handle__SetAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAccepted(bool accepted) {

		QToolBarChangeEvent::setAccepted(accepted);

	}

};

QToolBarChangeEvent* QToolBarChangeEvent_new(bool t) {
	return new MiqtVirtualQToolBarChangeEvent(t);
}

void QToolBarChangeEvent_virtbase(QToolBarChangeEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QToolBarChangeEvent* QToolBarChangeEvent_Clone(const QToolBarChangeEvent* self) {
	return self->clone();
}

bool QToolBarChangeEvent_Toggle(const QToolBarChangeEvent* self) {
	return self->toggle();
}

void QToolBarChangeEvent_override_virtual_Clone(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQToolBarChangeEvent*>( (QToolBarChangeEvent*)(self) )->handle__Clone = slot;
}

QToolBarChangeEvent* QToolBarChangeEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQToolBarChangeEvent*)(self) )->virtualbase_Clone();
}

void QToolBarChangeEvent_override_virtual_SetAccepted(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQToolBarChangeEvent*>( (QToolBarChangeEvent*)(self) )->handle__SetAccepted = slot;
}

void QToolBarChangeEvent_virtualbase_SetAccepted(void* self, bool accepted) {
	( (MiqtVirtualQToolBarChangeEvent*)(self) )->virtualbase_SetAccepted(accepted);
}

void QToolBarChangeEvent_Delete(QToolBarChangeEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQToolBarChangeEvent*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQShortcutEvent : public virtual QShortcutEvent {
public:

	MiqtVirtualQShortcutEvent(const QKeySequence& key, int id): QShortcutEvent(key, id) {};
	MiqtVirtualQShortcutEvent(const QKeySequence& key, int id, bool ambiguous): QShortcutEvent(key, id, ambiguous) {};

	virtual ~MiqtVirtualQShortcutEvent() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QShortcutEvent* clone() const override {
		if (handle__Clone == 0) {
			return QShortcutEvent::clone();
		}
		

		QShortcutEvent* callback_return_value = miqt_exec_callback_QShortcutEvent_Clone(const_cast<MiqtVirtualQShortcutEvent*>(this), handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QShortcutEvent* virtualbase_Clone() const {

		return QShortcutEvent::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__SetAccepted == 0) {
			QShortcutEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QShortcutEvent_SetAccepted(this, handle__SetAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAccepted(bool accepted) {

		QShortcutEvent::setAccepted(accepted);

	}

};

QShortcutEvent* QShortcutEvent_new(QKeySequence* key, int id) {
	return new MiqtVirtualQShortcutEvent(*key, static_cast<int>(id));
}

QShortcutEvent* QShortcutEvent_new2(QKeySequence* key, int id, bool ambiguous) {
	return new MiqtVirtualQShortcutEvent(*key, static_cast<int>(id), ambiguous);
}

void QShortcutEvent_virtbase(QShortcutEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QShortcutEvent* QShortcutEvent_Clone(const QShortcutEvent* self) {
	return self->clone();
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

void QShortcutEvent_override_virtual_Clone(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQShortcutEvent*>( (QShortcutEvent*)(self) )->handle__Clone = slot;
}

QShortcutEvent* QShortcutEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQShortcutEvent*)(self) )->virtualbase_Clone();
}

void QShortcutEvent_override_virtual_SetAccepted(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQShortcutEvent*>( (QShortcutEvent*)(self) )->handle__SetAccepted = slot;
}

void QShortcutEvent_virtualbase_SetAccepted(void* self, bool accepted) {
	( (MiqtVirtualQShortcutEvent*)(self) )->virtualbase_SetAccepted(accepted);
}

void QShortcutEvent_Delete(QShortcutEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQShortcutEvent*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQWindowStateChangeEvent : public virtual QWindowStateChangeEvent {
public:

	MiqtVirtualQWindowStateChangeEvent(Qt::WindowStates oldState): QWindowStateChangeEvent(oldState) {};
	MiqtVirtualQWindowStateChangeEvent(Qt::WindowStates oldState, bool isOverride): QWindowStateChangeEvent(oldState, isOverride) {};

	virtual ~MiqtVirtualQWindowStateChangeEvent() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QWindowStateChangeEvent* clone() const override {
		if (handle__Clone == 0) {
			return QWindowStateChangeEvent::clone();
		}
		

		QWindowStateChangeEvent* callback_return_value = miqt_exec_callback_QWindowStateChangeEvent_Clone(const_cast<MiqtVirtualQWindowStateChangeEvent*>(this), handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QWindowStateChangeEvent* virtualbase_Clone() const {

		return QWindowStateChangeEvent::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__SetAccepted == 0) {
			QWindowStateChangeEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QWindowStateChangeEvent_SetAccepted(this, handle__SetAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAccepted(bool accepted) {

		QWindowStateChangeEvent::setAccepted(accepted);

	}

};

QWindowStateChangeEvent* QWindowStateChangeEvent_new(int oldState) {
	return new MiqtVirtualQWindowStateChangeEvent(static_cast<Qt::WindowStates>(oldState));
}

QWindowStateChangeEvent* QWindowStateChangeEvent_new2(int oldState, bool isOverride) {
	return new MiqtVirtualQWindowStateChangeEvent(static_cast<Qt::WindowStates>(oldState), isOverride);
}

void QWindowStateChangeEvent_virtbase(QWindowStateChangeEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QWindowStateChangeEvent* QWindowStateChangeEvent_Clone(const QWindowStateChangeEvent* self) {
	return self->clone();
}

int QWindowStateChangeEvent_OldState(const QWindowStateChangeEvent* self) {
	Qt::WindowStates _ret = self->oldState();
	return static_cast<int>(_ret);
}

bool QWindowStateChangeEvent_IsOverride(const QWindowStateChangeEvent* self) {
	return self->isOverride();
}

void QWindowStateChangeEvent_override_virtual_Clone(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWindowStateChangeEvent*>( (QWindowStateChangeEvent*)(self) )->handle__Clone = slot;
}

QWindowStateChangeEvent* QWindowStateChangeEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQWindowStateChangeEvent*)(self) )->virtualbase_Clone();
}

void QWindowStateChangeEvent_override_virtual_SetAccepted(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWindowStateChangeEvent*>( (QWindowStateChangeEvent*)(self) )->handle__SetAccepted = slot;
}

void QWindowStateChangeEvent_virtualbase_SetAccepted(void* self, bool accepted) {
	( (MiqtVirtualQWindowStateChangeEvent*)(self) )->virtualbase_SetAccepted(accepted);
}

void QWindowStateChangeEvent_Delete(QWindowStateChangeEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQWindowStateChangeEvent*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQTouchEvent : public virtual QTouchEvent {
public:

	MiqtVirtualQTouchEvent(QEvent::Type eventType): QTouchEvent(eventType) {};
	MiqtVirtualQTouchEvent(QEvent::Type eventType, const QPointingDevice* device, Qt::KeyboardModifiers modifiers, QEventPoint::States touchPointStates): QTouchEvent(eventType, device, modifiers, touchPointStates) {};
	MiqtVirtualQTouchEvent(QEvent::Type eventType, const QPointingDevice* device): QTouchEvent(eventType, device) {};
	MiqtVirtualQTouchEvent(QEvent::Type eventType, const QPointingDevice* device, Qt::KeyboardModifiers modifiers): QTouchEvent(eventType, device, modifiers) {};
	MiqtVirtualQTouchEvent(QEvent::Type eventType, const QPointingDevice* device, Qt::KeyboardModifiers modifiers, const QList<QEventPoint>& touchPoints): QTouchEvent(eventType, device, modifiers, touchPoints) {};
	MiqtVirtualQTouchEvent(QEvent::Type eventType, const QPointingDevice* device, Qt::KeyboardModifiers modifiers, QEventPoint::States touchPointStates, const QList<QEventPoint>& touchPoints): QTouchEvent(eventType, device, modifiers, touchPointStates, touchPoints) {};

	virtual ~MiqtVirtualQTouchEvent() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QTouchEvent* clone() const override {
		if (handle__Clone == 0) {
			return QTouchEvent::clone();
		}
		

		QTouchEvent* callback_return_value = miqt_exec_callback_QTouchEvent_Clone(const_cast<MiqtVirtualQTouchEvent*>(this), handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QTouchEvent* virtualbase_Clone() const {

		return QTouchEvent::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsBeginEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isBeginEvent() const override {
		if (handle__IsBeginEvent == 0) {
			return QTouchEvent::isBeginEvent();
		}
		

		bool callback_return_value = miqt_exec_callback_QTouchEvent_IsBeginEvent(const_cast<MiqtVirtualQTouchEvent*>(this), handle__IsBeginEvent);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsBeginEvent() const {

		return QTouchEvent::isBeginEvent();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsUpdateEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isUpdateEvent() const override {
		if (handle__IsUpdateEvent == 0) {
			return QTouchEvent::isUpdateEvent();
		}
		

		bool callback_return_value = miqt_exec_callback_QTouchEvent_IsUpdateEvent(const_cast<MiqtVirtualQTouchEvent*>(this), handle__IsUpdateEvent);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsUpdateEvent() const {

		return QTouchEvent::isUpdateEvent();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsEndEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isEndEvent() const override {
		if (handle__IsEndEvent == 0) {
			return QTouchEvent::isEndEvent();
		}
		

		bool callback_return_value = miqt_exec_callback_QTouchEvent_IsEndEvent(const_cast<MiqtVirtualQTouchEvent*>(this), handle__IsEndEvent);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsEndEvent() const {

		return QTouchEvent::isEndEvent();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetTimestamp = 0;

	// Subclass to allow providing a Go implementation
	virtual void setTimestamp(quint64 timestamp) override {
		if (handle__SetTimestamp == 0) {
			QTouchEvent::setTimestamp(timestamp);
			return;
		}
		
		quint64 timestamp_ret = timestamp;
		unsigned long long sigval1 = static_cast<unsigned long long>(timestamp_ret);

		miqt_exec_callback_QTouchEvent_SetTimestamp(this, handle__SetTimestamp, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetTimestamp(unsigned long long timestamp) {

		QTouchEvent::setTimestamp(static_cast<quint64>(timestamp));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__SetAccepted == 0) {
			QTouchEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QTouchEvent_SetAccepted(this, handle__SetAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAccepted(bool accepted) {

		QTouchEvent::setAccepted(accepted);

	}

};

QTouchEvent* QTouchEvent_new(int eventType) {
	return new MiqtVirtualQTouchEvent(static_cast<QEvent::Type>(eventType));
}

QTouchEvent* QTouchEvent_new2(int eventType, QPointingDevice* device, int modifiers, uint8_t touchPointStates) {
	return new MiqtVirtualQTouchEvent(static_cast<QEvent::Type>(eventType), device, static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<QEventPoint::States>(touchPointStates));
}

QTouchEvent* QTouchEvent_new3(int eventType, QPointingDevice* device) {
	return new MiqtVirtualQTouchEvent(static_cast<QEvent::Type>(eventType), device);
}

QTouchEvent* QTouchEvent_new4(int eventType, QPointingDevice* device, int modifiers) {
	return new MiqtVirtualQTouchEvent(static_cast<QEvent::Type>(eventType), device, static_cast<Qt::KeyboardModifiers>(modifiers));
}

QTouchEvent* QTouchEvent_new5(int eventType, QPointingDevice* device, int modifiers, struct miqt_array /* of QEventPoint* */  touchPoints) {
	QList<QEventPoint> touchPoints_QList;
	touchPoints_QList.reserve(touchPoints.len);
	QEventPoint** touchPoints_arr = static_cast<QEventPoint**>(touchPoints.data);
	for(size_t i = 0; i < touchPoints.len; ++i) {
		touchPoints_QList.push_back(*(touchPoints_arr[i]));
	}
	return new MiqtVirtualQTouchEvent(static_cast<QEvent::Type>(eventType), device, static_cast<Qt::KeyboardModifiers>(modifiers), touchPoints_QList);
}

QTouchEvent* QTouchEvent_new6(int eventType, QPointingDevice* device, int modifiers, uint8_t touchPointStates, struct miqt_array /* of QEventPoint* */  touchPoints) {
	QList<QEventPoint> touchPoints_QList;
	touchPoints_QList.reserve(touchPoints.len);
	QEventPoint** touchPoints_arr = static_cast<QEventPoint**>(touchPoints.data);
	for(size_t i = 0; i < touchPoints.len; ++i) {
		touchPoints_QList.push_back(*(touchPoints_arr[i]));
	}
	return new MiqtVirtualQTouchEvent(static_cast<QEvent::Type>(eventType), device, static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<QEventPoint::States>(touchPointStates), touchPoints_QList);
}

void QTouchEvent_virtbase(QTouchEvent* src, QPointerEvent** outptr_QPointerEvent) {
	*outptr_QPointerEvent = static_cast<QPointerEvent*>(src);
}

QTouchEvent* QTouchEvent_Clone(const QTouchEvent* self) {
	return self->clone();
}

QObject* QTouchEvent_Target(const QTouchEvent* self) {
	return self->target();
}

uint8_t QTouchEvent_TouchPointStates(const QTouchEvent* self) {
	QEventPoint::States _ret = self->touchPointStates();
	return static_cast<uint8_t>(_ret);
}

struct miqt_array /* of QEventPoint* */  QTouchEvent_TouchPoints(const QTouchEvent* self) {
	const QList<QEventPoint>& _ret = self->touchPoints();
	// Convert QList<> from C++ memory to manually-managed C memory
	QEventPoint** _arr = static_cast<QEventPoint**>(malloc(sizeof(QEventPoint*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QEventPoint(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QTouchEvent_IsBeginEvent(const QTouchEvent* self) {
	return self->isBeginEvent();
}

bool QTouchEvent_IsUpdateEvent(const QTouchEvent* self) {
	return self->isUpdateEvent();
}

bool QTouchEvent_IsEndEvent(const QTouchEvent* self) {
	return self->isEndEvent();
}

void QTouchEvent_override_virtual_Clone(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTouchEvent*>( (QTouchEvent*)(self) )->handle__Clone = slot;
}

QTouchEvent* QTouchEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQTouchEvent*)(self) )->virtualbase_Clone();
}

void QTouchEvent_override_virtual_IsBeginEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTouchEvent*>( (QTouchEvent*)(self) )->handle__IsBeginEvent = slot;
}

bool QTouchEvent_virtualbase_IsBeginEvent(const void* self) {
	return ( (const MiqtVirtualQTouchEvent*)(self) )->virtualbase_IsBeginEvent();
}

void QTouchEvent_override_virtual_IsUpdateEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTouchEvent*>( (QTouchEvent*)(self) )->handle__IsUpdateEvent = slot;
}

bool QTouchEvent_virtualbase_IsUpdateEvent(const void* self) {
	return ( (const MiqtVirtualQTouchEvent*)(self) )->virtualbase_IsUpdateEvent();
}

void QTouchEvent_override_virtual_IsEndEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTouchEvent*>( (QTouchEvent*)(self) )->handle__IsEndEvent = slot;
}

bool QTouchEvent_virtualbase_IsEndEvent(const void* self) {
	return ( (const MiqtVirtualQTouchEvent*)(self) )->virtualbase_IsEndEvent();
}

void QTouchEvent_override_virtual_SetTimestamp(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTouchEvent*>( (QTouchEvent*)(self) )->handle__SetTimestamp = slot;
}

void QTouchEvent_virtualbase_SetTimestamp(void* self, unsigned long long timestamp) {
	( (MiqtVirtualQTouchEvent*)(self) )->virtualbase_SetTimestamp(timestamp);
}

void QTouchEvent_override_virtual_SetAccepted(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTouchEvent*>( (QTouchEvent*)(self) )->handle__SetAccepted = slot;
}

void QTouchEvent_virtualbase_SetAccepted(void* self, bool accepted) {
	( (MiqtVirtualQTouchEvent*)(self) )->virtualbase_SetAccepted(accepted);
}

void QTouchEvent_Delete(QTouchEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQTouchEvent*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQScrollPrepareEvent : public virtual QScrollPrepareEvent {
public:

	MiqtVirtualQScrollPrepareEvent(const QPointF& startPos): QScrollPrepareEvent(startPos) {};

	virtual ~MiqtVirtualQScrollPrepareEvent() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QScrollPrepareEvent* clone() const override {
		if (handle__Clone == 0) {
			return QScrollPrepareEvent::clone();
		}
		

		QScrollPrepareEvent* callback_return_value = miqt_exec_callback_QScrollPrepareEvent_Clone(const_cast<MiqtVirtualQScrollPrepareEvent*>(this), handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QScrollPrepareEvent* virtualbase_Clone() const {

		return QScrollPrepareEvent::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__SetAccepted == 0) {
			QScrollPrepareEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QScrollPrepareEvent_SetAccepted(this, handle__SetAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAccepted(bool accepted) {

		QScrollPrepareEvent::setAccepted(accepted);

	}

};

QScrollPrepareEvent* QScrollPrepareEvent_new(QPointF* startPos) {
	return new MiqtVirtualQScrollPrepareEvent(*startPos);
}

void QScrollPrepareEvent_virtbase(QScrollPrepareEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QScrollPrepareEvent* QScrollPrepareEvent_Clone(const QScrollPrepareEvent* self) {
	return self->clone();
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

void QScrollPrepareEvent_override_virtual_Clone(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScrollPrepareEvent*>( (QScrollPrepareEvent*)(self) )->handle__Clone = slot;
}

QScrollPrepareEvent* QScrollPrepareEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQScrollPrepareEvent*)(self) )->virtualbase_Clone();
}

void QScrollPrepareEvent_override_virtual_SetAccepted(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScrollPrepareEvent*>( (QScrollPrepareEvent*)(self) )->handle__SetAccepted = slot;
}

void QScrollPrepareEvent_virtualbase_SetAccepted(void* self, bool accepted) {
	( (MiqtVirtualQScrollPrepareEvent*)(self) )->virtualbase_SetAccepted(accepted);
}

void QScrollPrepareEvent_Delete(QScrollPrepareEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQScrollPrepareEvent*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQScrollEvent : public virtual QScrollEvent {
public:

	MiqtVirtualQScrollEvent(const QPointF& contentPos, const QPointF& overshoot, QScrollEvent::ScrollState scrollState): QScrollEvent(contentPos, overshoot, scrollState) {};

	virtual ~MiqtVirtualQScrollEvent() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QScrollEvent* clone() const override {
		if (handle__Clone == 0) {
			return QScrollEvent::clone();
		}
		

		QScrollEvent* callback_return_value = miqt_exec_callback_QScrollEvent_Clone(const_cast<MiqtVirtualQScrollEvent*>(this), handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QScrollEvent* virtualbase_Clone() const {

		return QScrollEvent::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__SetAccepted == 0) {
			QScrollEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QScrollEvent_SetAccepted(this, handle__SetAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAccepted(bool accepted) {

		QScrollEvent::setAccepted(accepted);

	}

};

QScrollEvent* QScrollEvent_new(QPointF* contentPos, QPointF* overshoot, int scrollState) {
	return new MiqtVirtualQScrollEvent(*contentPos, *overshoot, static_cast<QScrollEvent::ScrollState>(scrollState));
}

void QScrollEvent_virtbase(QScrollEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QScrollEvent* QScrollEvent_Clone(const QScrollEvent* self) {
	return self->clone();
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

void QScrollEvent_override_virtual_Clone(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScrollEvent*>( (QScrollEvent*)(self) )->handle__Clone = slot;
}

QScrollEvent* QScrollEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQScrollEvent*)(self) )->virtualbase_Clone();
}

void QScrollEvent_override_virtual_SetAccepted(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScrollEvent*>( (QScrollEvent*)(self) )->handle__SetAccepted = slot;
}

void QScrollEvent_virtualbase_SetAccepted(void* self, bool accepted) {
	( (MiqtVirtualQScrollEvent*)(self) )->virtualbase_SetAccepted(accepted);
}

void QScrollEvent_Delete(QScrollEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQScrollEvent*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQScreenOrientationChangeEvent : public virtual QScreenOrientationChangeEvent {
public:

	MiqtVirtualQScreenOrientationChangeEvent(QScreen* screen, Qt::ScreenOrientation orientation): QScreenOrientationChangeEvent(screen, orientation) {};

	virtual ~MiqtVirtualQScreenOrientationChangeEvent() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QScreenOrientationChangeEvent* clone() const override {
		if (handle__Clone == 0) {
			return QScreenOrientationChangeEvent::clone();
		}
		

		QScreenOrientationChangeEvent* callback_return_value = miqt_exec_callback_QScreenOrientationChangeEvent_Clone(const_cast<MiqtVirtualQScreenOrientationChangeEvent*>(this), handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QScreenOrientationChangeEvent* virtualbase_Clone() const {

		return QScreenOrientationChangeEvent::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__SetAccepted == 0) {
			QScreenOrientationChangeEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QScreenOrientationChangeEvent_SetAccepted(this, handle__SetAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAccepted(bool accepted) {

		QScreenOrientationChangeEvent::setAccepted(accepted);

	}

};

QScreenOrientationChangeEvent* QScreenOrientationChangeEvent_new(QScreen* screen, int orientation) {
	return new MiqtVirtualQScreenOrientationChangeEvent(screen, static_cast<Qt::ScreenOrientation>(orientation));
}

void QScreenOrientationChangeEvent_virtbase(QScreenOrientationChangeEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QScreenOrientationChangeEvent* QScreenOrientationChangeEvent_Clone(const QScreenOrientationChangeEvent* self) {
	return self->clone();
}

QScreen* QScreenOrientationChangeEvent_Screen(const QScreenOrientationChangeEvent* self) {
	return self->screen();
}

int QScreenOrientationChangeEvent_Orientation(const QScreenOrientationChangeEvent* self) {
	Qt::ScreenOrientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

void QScreenOrientationChangeEvent_override_virtual_Clone(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScreenOrientationChangeEvent*>( (QScreenOrientationChangeEvent*)(self) )->handle__Clone = slot;
}

QScreenOrientationChangeEvent* QScreenOrientationChangeEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQScreenOrientationChangeEvent*)(self) )->virtualbase_Clone();
}

void QScreenOrientationChangeEvent_override_virtual_SetAccepted(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScreenOrientationChangeEvent*>( (QScreenOrientationChangeEvent*)(self) )->handle__SetAccepted = slot;
}

void QScreenOrientationChangeEvent_virtualbase_SetAccepted(void* self, bool accepted) {
	( (MiqtVirtualQScreenOrientationChangeEvent*)(self) )->virtualbase_SetAccepted(accepted);
}

void QScreenOrientationChangeEvent_Delete(QScreenOrientationChangeEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQScreenOrientationChangeEvent*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQApplicationStateChangeEvent : public virtual QApplicationStateChangeEvent {
public:

	MiqtVirtualQApplicationStateChangeEvent(Qt::ApplicationState state): QApplicationStateChangeEvent(state) {};

	virtual ~MiqtVirtualQApplicationStateChangeEvent() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QApplicationStateChangeEvent* clone() const override {
		if (handle__Clone == 0) {
			return QApplicationStateChangeEvent::clone();
		}
		

		QApplicationStateChangeEvent* callback_return_value = miqt_exec_callback_QApplicationStateChangeEvent_Clone(const_cast<MiqtVirtualQApplicationStateChangeEvent*>(this), handle__Clone);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QApplicationStateChangeEvent* virtualbase_Clone() const {

		return QApplicationStateChangeEvent::clone();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__SetAccepted == 0) {
			QApplicationStateChangeEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QApplicationStateChangeEvent_SetAccepted(this, handle__SetAccepted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAccepted(bool accepted) {

		QApplicationStateChangeEvent::setAccepted(accepted);

	}

};

QApplicationStateChangeEvent* QApplicationStateChangeEvent_new(int state) {
	return new MiqtVirtualQApplicationStateChangeEvent(static_cast<Qt::ApplicationState>(state));
}

void QApplicationStateChangeEvent_virtbase(QApplicationStateChangeEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QApplicationStateChangeEvent* QApplicationStateChangeEvent_Clone(const QApplicationStateChangeEvent* self) {
	return self->clone();
}

int QApplicationStateChangeEvent_ApplicationState(const QApplicationStateChangeEvent* self) {
	Qt::ApplicationState _ret = self->applicationState();
	return static_cast<int>(_ret);
}

void QApplicationStateChangeEvent_override_virtual_Clone(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQApplicationStateChangeEvent*>( (QApplicationStateChangeEvent*)(self) )->handle__Clone = slot;
}

QApplicationStateChangeEvent* QApplicationStateChangeEvent_virtualbase_Clone(const void* self) {
	return ( (const MiqtVirtualQApplicationStateChangeEvent*)(self) )->virtualbase_Clone();
}

void QApplicationStateChangeEvent_override_virtual_SetAccepted(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQApplicationStateChangeEvent*>( (QApplicationStateChangeEvent*)(self) )->handle__SetAccepted = slot;
}

void QApplicationStateChangeEvent_virtualbase_SetAccepted(void* self, bool accepted) {
	( (MiqtVirtualQApplicationStateChangeEvent*)(self) )->virtualbase_SetAccepted(accepted);
}

void QApplicationStateChangeEvent_Delete(QApplicationStateChangeEvent* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQApplicationStateChangeEvent*>( self );
	} else {
		delete self;
	}
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

void QInputMethodEvent__Attribute_Delete(QInputMethodEvent__Attribute* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QInputMethodEvent::Attribute*>( self );
	} else {
		delete self;
	}
}

