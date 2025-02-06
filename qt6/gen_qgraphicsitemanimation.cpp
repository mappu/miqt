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

void miqt_exec_callback_QGraphicsItemAnimation_beforeAnimationStep(QGraphicsItemAnimation*, intptr_t, double);
void miqt_exec_callback_QGraphicsItemAnimation_afterAnimationStep(QGraphicsItemAnimation*, intptr_t, double);
bool miqt_exec_callback_QGraphicsItemAnimation_event(QGraphicsItemAnimation*, intptr_t, QEvent*);
bool miqt_exec_callback_QGraphicsItemAnimation_eventFilter(QGraphicsItemAnimation*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QGraphicsItemAnimation_timerEvent(QGraphicsItemAnimation*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QGraphicsItemAnimation_childEvent(QGraphicsItemAnimation*, intptr_t, QChildEvent*);
void miqt_exec_callback_QGraphicsItemAnimation_customEvent(QGraphicsItemAnimation*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsItemAnimation_connectNotify(QGraphicsItemAnimation*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsItemAnimation_disconnectNotify(QGraphicsItemAnimation*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQGraphicsItemAnimation final : public QGraphicsItemAnimation {
public:

	MiqtVirtualQGraphicsItemAnimation(): QGraphicsItemAnimation() {};
	MiqtVirtualQGraphicsItemAnimation(QObject* parent): QGraphicsItemAnimation(parent) {};

	virtual ~MiqtVirtualQGraphicsItemAnimation() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__beforeAnimationStep = 0;

	// Subclass to allow providing a Go implementation
	virtual void beforeAnimationStep(qreal step) override {
		if (handle__beforeAnimationStep == 0) {
			QGraphicsItemAnimation::beforeAnimationStep(step);
			return;
		}
		
		qreal step_ret = step;
		double sigval1 = static_cast<double>(step_ret);

		miqt_exec_callback_QGraphicsItemAnimation_beforeAnimationStep(this, handle__beforeAnimationStep, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_beforeAnimationStep(double step) {

		QGraphicsItemAnimation::beforeAnimationStep(static_cast<qreal>(step));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__afterAnimationStep = 0;

	// Subclass to allow providing a Go implementation
	virtual void afterAnimationStep(qreal step) override {
		if (handle__afterAnimationStep == 0) {
			QGraphicsItemAnimation::afterAnimationStep(step);
			return;
		}
		
		qreal step_ret = step;
		double sigval1 = static_cast<double>(step_ret);

		miqt_exec_callback_QGraphicsItemAnimation_afterAnimationStep(this, handle__afterAnimationStep, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_afterAnimationStep(double step) {

		QGraphicsItemAnimation::afterAnimationStep(static_cast<qreal>(step));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QGraphicsItemAnimation::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsItemAnimation_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QGraphicsItemAnimation::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QGraphicsItemAnimation::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsItemAnimation_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QGraphicsItemAnimation::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QGraphicsItemAnimation::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemAnimation_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QGraphicsItemAnimation::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QGraphicsItemAnimation::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemAnimation_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QGraphicsItemAnimation::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QGraphicsItemAnimation::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemAnimation_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QGraphicsItemAnimation::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QGraphicsItemAnimation::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGraphicsItemAnimation_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QGraphicsItemAnimation::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QGraphicsItemAnimation::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGraphicsItemAnimation_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QGraphicsItemAnimation::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QGraphicsItemAnimation_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QGraphicsItemAnimation_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QGraphicsItemAnimation_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QGraphicsItemAnimation_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QGraphicsItemAnimation_metaObject(const QGraphicsItemAnimation* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsItemAnimation_metacast(QGraphicsItemAnimation* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsItemAnimation_tr(const char* s) {
	QString _ret = QGraphicsItemAnimation::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QGraphicsItem* QGraphicsItemAnimation_item(const QGraphicsItemAnimation* self) {
	return self->item();
}

void QGraphicsItemAnimation_setItem(QGraphicsItemAnimation* self, QGraphicsItem* item) {
	self->setItem(item);
}

QTimeLine* QGraphicsItemAnimation_timeLine(const QGraphicsItemAnimation* self) {
	return self->timeLine();
}

void QGraphicsItemAnimation_setTimeLine(QGraphicsItemAnimation* self, QTimeLine* timeLine) {
	self->setTimeLine(timeLine);
}

QPointF* QGraphicsItemAnimation_posAt(const QGraphicsItemAnimation* self, double step) {
	return new QPointF(self->posAt(static_cast<qreal>(step)));
}

struct miqt_array /* of struct miqt_map  tuple of double and QPointF*   */  QGraphicsItemAnimation_posList(const QGraphicsItemAnimation* self) {
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

void QGraphicsItemAnimation_setPosAt(QGraphicsItemAnimation* self, double step, QPointF* pos) {
	self->setPosAt(static_cast<qreal>(step), *pos);
}

QTransform* QGraphicsItemAnimation_transformAt(const QGraphicsItemAnimation* self, double step) {
	return new QTransform(self->transformAt(static_cast<qreal>(step)));
}

double QGraphicsItemAnimation_rotationAt(const QGraphicsItemAnimation* self, double step) {
	qreal _ret = self->rotationAt(static_cast<qreal>(step));
	return static_cast<double>(_ret);
}

struct miqt_array /* of struct miqt_map  tuple of double and double   */  QGraphicsItemAnimation_rotationList(const QGraphicsItemAnimation* self) {
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

void QGraphicsItemAnimation_setRotationAt(QGraphicsItemAnimation* self, double step, double angle) {
	self->setRotationAt(static_cast<qreal>(step), static_cast<qreal>(angle));
}

double QGraphicsItemAnimation_xTranslationAt(const QGraphicsItemAnimation* self, double step) {
	qreal _ret = self->xTranslationAt(static_cast<qreal>(step));
	return static_cast<double>(_ret);
}

double QGraphicsItemAnimation_yTranslationAt(const QGraphicsItemAnimation* self, double step) {
	qreal _ret = self->yTranslationAt(static_cast<qreal>(step));
	return static_cast<double>(_ret);
}

struct miqt_array /* of struct miqt_map  tuple of double and QPointF*   */  QGraphicsItemAnimation_translationList(const QGraphicsItemAnimation* self) {
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

void QGraphicsItemAnimation_setTranslationAt(QGraphicsItemAnimation* self, double step, double dx, double dy) {
	self->setTranslationAt(static_cast<qreal>(step), static_cast<qreal>(dx), static_cast<qreal>(dy));
}

double QGraphicsItemAnimation_verticalScaleAt(const QGraphicsItemAnimation* self, double step) {
	qreal _ret = self->verticalScaleAt(static_cast<qreal>(step));
	return static_cast<double>(_ret);
}

double QGraphicsItemAnimation_horizontalScaleAt(const QGraphicsItemAnimation* self, double step) {
	qreal _ret = self->horizontalScaleAt(static_cast<qreal>(step));
	return static_cast<double>(_ret);
}

struct miqt_array /* of struct miqt_map  tuple of double and QPointF*   */  QGraphicsItemAnimation_scaleList(const QGraphicsItemAnimation* self) {
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

void QGraphicsItemAnimation_setScaleAt(QGraphicsItemAnimation* self, double step, double sx, double sy) {
	self->setScaleAt(static_cast<qreal>(step), static_cast<qreal>(sx), static_cast<qreal>(sy));
}

double QGraphicsItemAnimation_verticalShearAt(const QGraphicsItemAnimation* self, double step) {
	qreal _ret = self->verticalShearAt(static_cast<qreal>(step));
	return static_cast<double>(_ret);
}

double QGraphicsItemAnimation_horizontalShearAt(const QGraphicsItemAnimation* self, double step) {
	qreal _ret = self->horizontalShearAt(static_cast<qreal>(step));
	return static_cast<double>(_ret);
}

struct miqt_array /* of struct miqt_map  tuple of double and QPointF*   */  QGraphicsItemAnimation_shearList(const QGraphicsItemAnimation* self) {
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

void QGraphicsItemAnimation_setShearAt(QGraphicsItemAnimation* self, double step, double sh, double sv) {
	self->setShearAt(static_cast<qreal>(step), static_cast<qreal>(sh), static_cast<qreal>(sv));
}

void QGraphicsItemAnimation_clear(QGraphicsItemAnimation* self) {
	self->clear();
}

void QGraphicsItemAnimation_setStep(QGraphicsItemAnimation* self, double x) {
	self->setStep(static_cast<qreal>(x));
}

struct miqt_string QGraphicsItemAnimation_tr2(const char* s, const char* c) {
	QString _ret = QGraphicsItemAnimation::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsItemAnimation_tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsItemAnimation::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QGraphicsItemAnimation_override_virtual_beforeAnimationStep(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemAnimation* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemAnimation*>( (QGraphicsItemAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__beforeAnimationStep = slot;
	return true;
}

void QGraphicsItemAnimation_virtualbase_beforeAnimationStep(void* self, double step) {
	( (MiqtVirtualQGraphicsItemAnimation*)(self) )->virtualbase_beforeAnimationStep(step);
}

bool QGraphicsItemAnimation_override_virtual_afterAnimationStep(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemAnimation* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemAnimation*>( (QGraphicsItemAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__afterAnimationStep = slot;
	return true;
}

void QGraphicsItemAnimation_virtualbase_afterAnimationStep(void* self, double step) {
	( (MiqtVirtualQGraphicsItemAnimation*)(self) )->virtualbase_afterAnimationStep(step);
}

bool QGraphicsItemAnimation_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemAnimation* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemAnimation*>( (QGraphicsItemAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QGraphicsItemAnimation_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsItemAnimation*)(self) )->virtualbase_event(event);
}

bool QGraphicsItemAnimation_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemAnimation* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemAnimation*>( (QGraphicsItemAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QGraphicsItemAnimation_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsItemAnimation*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QGraphicsItemAnimation_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemAnimation* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemAnimation*>( (QGraphicsItemAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QGraphicsItemAnimation_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQGraphicsItemAnimation*)(self) )->virtualbase_timerEvent(event);
}

bool QGraphicsItemAnimation_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemAnimation* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemAnimation*>( (QGraphicsItemAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QGraphicsItemAnimation_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQGraphicsItemAnimation*)(self) )->virtualbase_childEvent(event);
}

bool QGraphicsItemAnimation_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemAnimation* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemAnimation*>( (QGraphicsItemAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QGraphicsItemAnimation_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsItemAnimation*)(self) )->virtualbase_customEvent(event);
}

bool QGraphicsItemAnimation_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemAnimation* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemAnimation*>( (QGraphicsItemAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QGraphicsItemAnimation_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGraphicsItemAnimation*)(self) )->virtualbase_connectNotify(signal);
}

bool QGraphicsItemAnimation_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemAnimation* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemAnimation*>( (QGraphicsItemAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QGraphicsItemAnimation_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGraphicsItemAnimation*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QGraphicsItemAnimation_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsItemAnimation* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemAnimation*>( (QGraphicsItemAnimation*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QGraphicsItemAnimation_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsItemAnimation* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemAnimation*>( (QGraphicsItemAnimation*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QGraphicsItemAnimation_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQGraphicsItemAnimation* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemAnimation*>( (QGraphicsItemAnimation*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QGraphicsItemAnimation_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQGraphicsItemAnimation* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemAnimation*>( (QGraphicsItemAnimation*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QGraphicsItemAnimation_delete(QGraphicsItemAnimation* self) {
	delete self;
}

