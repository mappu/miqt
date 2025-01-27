#include <QChildEvent>
#include <QEvent>
#include <QGraphicsItem>
#include <QGraphicsItemAnimation>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPair>
#include <QPointF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimeLine>
#include <QTimerEvent>
#include <QTransform>
#include <qgraphicsitemanimation.h>
#include "gen_qgraphicsitemanimation.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QGraphicsItemAnimation_BeforeAnimationStep(QGraphicsItemAnimation*, intptr_t, double);
void miqt_exec_callback_QGraphicsItemAnimation_AfterAnimationStep(QGraphicsItemAnimation*, intptr_t, double);
bool miqt_exec_callback_QGraphicsItemAnimation_Event(QGraphicsItemAnimation*, intptr_t, QEvent*);
bool miqt_exec_callback_QGraphicsItemAnimation_EventFilter(QGraphicsItemAnimation*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QGraphicsItemAnimation_TimerEvent(QGraphicsItemAnimation*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QGraphicsItemAnimation_ChildEvent(QGraphicsItemAnimation*, intptr_t, QChildEvent*);
void miqt_exec_callback_QGraphicsItemAnimation_CustomEvent(QGraphicsItemAnimation*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsItemAnimation_ConnectNotify(QGraphicsItemAnimation*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsItemAnimation_DisconnectNotify(QGraphicsItemAnimation*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQGraphicsItemAnimation final : public QGraphicsItemAnimation {
public:

	MiqtVirtualQGraphicsItemAnimation(): QGraphicsItemAnimation() {};
	MiqtVirtualQGraphicsItemAnimation(QObject* parent): QGraphicsItemAnimation(parent) {};

	virtual ~MiqtVirtualQGraphicsItemAnimation() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BeforeAnimationStep = 0;

	// Subclass to allow providing a Go implementation
	virtual void beforeAnimationStep(qreal step) override {
		if (handle__BeforeAnimationStep == 0) {
			QGraphicsItemAnimation::beforeAnimationStep(step);
			return;
		}
		
		qreal step_ret = step;
		double sigval1 = static_cast<double>(step_ret);

		miqt_exec_callback_QGraphicsItemAnimation_BeforeAnimationStep(this, handle__BeforeAnimationStep, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_BeforeAnimationStep(double step) {

		QGraphicsItemAnimation::beforeAnimationStep(static_cast<qreal>(step));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AfterAnimationStep = 0;

	// Subclass to allow providing a Go implementation
	virtual void afterAnimationStep(qreal step) override {
		if (handle__AfterAnimationStep == 0) {
			QGraphicsItemAnimation::afterAnimationStep(step);
			return;
		}
		
		qreal step_ret = step;
		double sigval1 = static_cast<double>(step_ret);

		miqt_exec_callback_QGraphicsItemAnimation_AfterAnimationStep(this, handle__AfterAnimationStep, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_AfterAnimationStep(double step) {

		QGraphicsItemAnimation::afterAnimationStep(static_cast<qreal>(step));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QGraphicsItemAnimation::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsItemAnimation_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QGraphicsItemAnimation::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QGraphicsItemAnimation::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsItemAnimation_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QGraphicsItemAnimation::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QGraphicsItemAnimation::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemAnimation_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QGraphicsItemAnimation::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QGraphicsItemAnimation::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemAnimation_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QGraphicsItemAnimation::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QGraphicsItemAnimation::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemAnimation_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QGraphicsItemAnimation::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QGraphicsItemAnimation::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGraphicsItemAnimation_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QGraphicsItemAnimation::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QGraphicsItemAnimation::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGraphicsItemAnimation_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QGraphicsItemAnimation::disconnectNotify(*signal);

	}

};

QGraphicsItemAnimation* QGraphicsItemAnimation_new() {
	return new MiqtVirtualQGraphicsItemAnimation();
}

QGraphicsItemAnimation* QGraphicsItemAnimation_new2(QObject* parent) {
	return new MiqtVirtualQGraphicsItemAnimation(parent);
}

void QGraphicsItemAnimation_virtbase(QGraphicsItemAnimation* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QGraphicsItemAnimation_MetaObject(const QGraphicsItemAnimation* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsItemAnimation_Metacast(QGraphicsItemAnimation* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsItemAnimation_Tr(const char* s) {
	QString _ret = QGraphicsItemAnimation::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QGraphicsItem* QGraphicsItemAnimation_Item(const QGraphicsItemAnimation* self) {
	return self->item();
}

void QGraphicsItemAnimation_SetItem(QGraphicsItemAnimation* self, QGraphicsItem* item) {
	self->setItem(item);
}

QTimeLine* QGraphicsItemAnimation_TimeLine(const QGraphicsItemAnimation* self) {
	return self->timeLine();
}

void QGraphicsItemAnimation_SetTimeLine(QGraphicsItemAnimation* self, QTimeLine* timeLine) {
	self->setTimeLine(timeLine);
}

QPointF* QGraphicsItemAnimation_PosAt(const QGraphicsItemAnimation* self, double step) {
	return new QPointF(self->posAt(static_cast<qreal>(step)));
}

struct miqt_array /* of struct miqt_map  tuple of double and QPointF*   */  QGraphicsItemAnimation_PosList(const QGraphicsItemAnimation* self) {
	QList<QPair<qreal, QPointF>> _ret = self->posList();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_map /* tuple of double and QPointF* */ * _arr = static_cast<struct miqt_map /* tuple of double and QPointF* */ *>(malloc(sizeof(struct miqt_map /* tuple of double and QPointF* */ ) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QPair<double, QPointF> _lv_ret = _ret[i];
		// Convert QPair<> from C++ memory to manually-managed C memory
		double* _lv_first_arr = static_cast<double*>(malloc(sizeof(double)));
		QPointF** _lv_second_arr = static_cast<QPointF**>(malloc(sizeof(QPointF*)));
		_lv_first_arr[0] = _lv_ret.first;
		_lv_second_arr[0] = new QPointF(_lv_ret.second);
		struct miqt_map _lv_out;
		_lv_out.len = 1;
		_lv_out.keys = static_cast<void*>(_lv_first_arr);
		_lv_out.values = static_cast<void*>(_lv_second_arr);
		_arr[i] = _lv_out;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QGraphicsItemAnimation_SetPosAt(QGraphicsItemAnimation* self, double step, QPointF* pos) {
	self->setPosAt(static_cast<qreal>(step), *pos);
}

QTransform* QGraphicsItemAnimation_TransformAt(const QGraphicsItemAnimation* self, double step) {
	return new QTransform(self->transformAt(static_cast<qreal>(step)));
}

double QGraphicsItemAnimation_RotationAt(const QGraphicsItemAnimation* self, double step) {
	qreal _ret = self->rotationAt(static_cast<qreal>(step));
	return static_cast<double>(_ret);
}

struct miqt_array /* of struct miqt_map  tuple of double and double   */  QGraphicsItemAnimation_RotationList(const QGraphicsItemAnimation* self) {
	QList<QPair<qreal, qreal>> _ret = self->rotationList();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_map /* tuple of double and double */ * _arr = static_cast<struct miqt_map /* tuple of double and double */ *>(malloc(sizeof(struct miqt_map /* tuple of double and double */ ) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QPair<double, double> _lv_ret = _ret[i];
		// Convert QPair<> from C++ memory to manually-managed C memory
		double* _lv_first_arr = static_cast<double*>(malloc(sizeof(double)));
		double* _lv_second_arr = static_cast<double*>(malloc(sizeof(double)));
		_lv_first_arr[0] = _lv_ret.first;
		_lv_second_arr[0] = _lv_ret.second;
		struct miqt_map _lv_out;
		_lv_out.len = 1;
		_lv_out.keys = static_cast<void*>(_lv_first_arr);
		_lv_out.values = static_cast<void*>(_lv_second_arr);
		_arr[i] = _lv_out;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QGraphicsItemAnimation_SetRotationAt(QGraphicsItemAnimation* self, double step, double angle) {
	self->setRotationAt(static_cast<qreal>(step), static_cast<qreal>(angle));
}

double QGraphicsItemAnimation_XTranslationAt(const QGraphicsItemAnimation* self, double step) {
	qreal _ret = self->xTranslationAt(static_cast<qreal>(step));
	return static_cast<double>(_ret);
}

double QGraphicsItemAnimation_YTranslationAt(const QGraphicsItemAnimation* self, double step) {
	qreal _ret = self->yTranslationAt(static_cast<qreal>(step));
	return static_cast<double>(_ret);
}

struct miqt_array /* of struct miqt_map  tuple of double and QPointF*   */  QGraphicsItemAnimation_TranslationList(const QGraphicsItemAnimation* self) {
	QList<QPair<qreal, QPointF>> _ret = self->translationList();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_map /* tuple of double and QPointF* */ * _arr = static_cast<struct miqt_map /* tuple of double and QPointF* */ *>(malloc(sizeof(struct miqt_map /* tuple of double and QPointF* */ ) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QPair<double, QPointF> _lv_ret = _ret[i];
		// Convert QPair<> from C++ memory to manually-managed C memory
		double* _lv_first_arr = static_cast<double*>(malloc(sizeof(double)));
		QPointF** _lv_second_arr = static_cast<QPointF**>(malloc(sizeof(QPointF*)));
		_lv_first_arr[0] = _lv_ret.first;
		_lv_second_arr[0] = new QPointF(_lv_ret.second);
		struct miqt_map _lv_out;
		_lv_out.len = 1;
		_lv_out.keys = static_cast<void*>(_lv_first_arr);
		_lv_out.values = static_cast<void*>(_lv_second_arr);
		_arr[i] = _lv_out;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QGraphicsItemAnimation_SetTranslationAt(QGraphicsItemAnimation* self, double step, double dx, double dy) {
	self->setTranslationAt(static_cast<qreal>(step), static_cast<qreal>(dx), static_cast<qreal>(dy));
}

double QGraphicsItemAnimation_VerticalScaleAt(const QGraphicsItemAnimation* self, double step) {
	qreal _ret = self->verticalScaleAt(static_cast<qreal>(step));
	return static_cast<double>(_ret);
}

double QGraphicsItemAnimation_HorizontalScaleAt(const QGraphicsItemAnimation* self, double step) {
	qreal _ret = self->horizontalScaleAt(static_cast<qreal>(step));
	return static_cast<double>(_ret);
}

struct miqt_array /* of struct miqt_map  tuple of double and QPointF*   */  QGraphicsItemAnimation_ScaleList(const QGraphicsItemAnimation* self) {
	QList<QPair<qreal, QPointF>> _ret = self->scaleList();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_map /* tuple of double and QPointF* */ * _arr = static_cast<struct miqt_map /* tuple of double and QPointF* */ *>(malloc(sizeof(struct miqt_map /* tuple of double and QPointF* */ ) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QPair<double, QPointF> _lv_ret = _ret[i];
		// Convert QPair<> from C++ memory to manually-managed C memory
		double* _lv_first_arr = static_cast<double*>(malloc(sizeof(double)));
		QPointF** _lv_second_arr = static_cast<QPointF**>(malloc(sizeof(QPointF*)));
		_lv_first_arr[0] = _lv_ret.first;
		_lv_second_arr[0] = new QPointF(_lv_ret.second);
		struct miqt_map _lv_out;
		_lv_out.len = 1;
		_lv_out.keys = static_cast<void*>(_lv_first_arr);
		_lv_out.values = static_cast<void*>(_lv_second_arr);
		_arr[i] = _lv_out;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QGraphicsItemAnimation_SetScaleAt(QGraphicsItemAnimation* self, double step, double sx, double sy) {
	self->setScaleAt(static_cast<qreal>(step), static_cast<qreal>(sx), static_cast<qreal>(sy));
}

double QGraphicsItemAnimation_VerticalShearAt(const QGraphicsItemAnimation* self, double step) {
	qreal _ret = self->verticalShearAt(static_cast<qreal>(step));
	return static_cast<double>(_ret);
}

double QGraphicsItemAnimation_HorizontalShearAt(const QGraphicsItemAnimation* self, double step) {
	qreal _ret = self->horizontalShearAt(static_cast<qreal>(step));
	return static_cast<double>(_ret);
}

struct miqt_array /* of struct miqt_map  tuple of double and QPointF*   */  QGraphicsItemAnimation_ShearList(const QGraphicsItemAnimation* self) {
	QList<QPair<qreal, QPointF>> _ret = self->shearList();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_map /* tuple of double and QPointF* */ * _arr = static_cast<struct miqt_map /* tuple of double and QPointF* */ *>(malloc(sizeof(struct miqt_map /* tuple of double and QPointF* */ ) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QPair<double, QPointF> _lv_ret = _ret[i];
		// Convert QPair<> from C++ memory to manually-managed C memory
		double* _lv_first_arr = static_cast<double*>(malloc(sizeof(double)));
		QPointF** _lv_second_arr = static_cast<QPointF**>(malloc(sizeof(QPointF*)));
		_lv_first_arr[0] = _lv_ret.first;
		_lv_second_arr[0] = new QPointF(_lv_ret.second);
		struct miqt_map _lv_out;
		_lv_out.len = 1;
		_lv_out.keys = static_cast<void*>(_lv_first_arr);
		_lv_out.values = static_cast<void*>(_lv_second_arr);
		_arr[i] = _lv_out;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QGraphicsItemAnimation_SetShearAt(QGraphicsItemAnimation* self, double step, double sh, double sv) {
	self->setShearAt(static_cast<qreal>(step), static_cast<qreal>(sh), static_cast<qreal>(sv));
}

void QGraphicsItemAnimation_Clear(QGraphicsItemAnimation* self) {
	self->clear();
}

void QGraphicsItemAnimation_SetStep(QGraphicsItemAnimation* self, double x) {
	self->setStep(static_cast<qreal>(x));
}

struct miqt_string QGraphicsItemAnimation_Tr2(const char* s, const char* c) {
	QString _ret = QGraphicsItemAnimation::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsItemAnimation_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsItemAnimation::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QGraphicsItemAnimation_override_virtual_BeforeAnimationStep(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemAnimation* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemAnimation*>( (QGraphicsItemAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BeforeAnimationStep = slot;
	return true;
}

void QGraphicsItemAnimation_virtualbase_BeforeAnimationStep(void* self, double step) {
	( (MiqtVirtualQGraphicsItemAnimation*)(self) )->virtualbase_BeforeAnimationStep(step);
}

bool QGraphicsItemAnimation_override_virtual_AfterAnimationStep(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemAnimation* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemAnimation*>( (QGraphicsItemAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__AfterAnimationStep = slot;
	return true;
}

void QGraphicsItemAnimation_virtualbase_AfterAnimationStep(void* self, double step) {
	( (MiqtVirtualQGraphicsItemAnimation*)(self) )->virtualbase_AfterAnimationStep(step);
}

bool QGraphicsItemAnimation_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemAnimation* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemAnimation*>( (QGraphicsItemAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QGraphicsItemAnimation_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsItemAnimation*)(self) )->virtualbase_Event(event);
}

bool QGraphicsItemAnimation_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemAnimation* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemAnimation*>( (QGraphicsItemAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QGraphicsItemAnimation_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsItemAnimation*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QGraphicsItemAnimation_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemAnimation* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemAnimation*>( (QGraphicsItemAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QGraphicsItemAnimation_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQGraphicsItemAnimation*)(self) )->virtualbase_TimerEvent(event);
}

bool QGraphicsItemAnimation_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemAnimation* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemAnimation*>( (QGraphicsItemAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QGraphicsItemAnimation_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQGraphicsItemAnimation*)(self) )->virtualbase_ChildEvent(event);
}

bool QGraphicsItemAnimation_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemAnimation* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemAnimation*>( (QGraphicsItemAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QGraphicsItemAnimation_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsItemAnimation*)(self) )->virtualbase_CustomEvent(event);
}

bool QGraphicsItemAnimation_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemAnimation* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemAnimation*>( (QGraphicsItemAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QGraphicsItemAnimation_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGraphicsItemAnimation*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QGraphicsItemAnimation_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemAnimation* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemAnimation*>( (QGraphicsItemAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QGraphicsItemAnimation_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGraphicsItemAnimation*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QGraphicsItemAnimation_Delete(QGraphicsItemAnimation* self) {
	delete self;
}

