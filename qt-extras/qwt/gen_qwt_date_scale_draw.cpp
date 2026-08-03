#include <QDateTime>
#include <QFont>
#include <QPainter>
#include <QPalette>
#include <QPointF>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTransform>
#include <qwt_date_scale_draw.h>
#include "gen_qwt_date_scale_draw.h"

#ifdef __cplusplus
extern "C" {
#endif

QwtText* miqt_exec_callback_QwtDateScaleDraw_label(const QwtDateScaleDraw*, intptr_t, double);
int miqt_exec_callback_QwtDateScaleDraw_intervalType(const QwtDateScaleDraw*, intptr_t, QwtScaleDiv*);
struct miqt_string miqt_exec_callback_QwtDateScaleDraw_dateFormatOfDate(const QwtDateScaleDraw*, intptr_t, QDateTime*, int);
double miqt_exec_callback_QwtDateScaleDraw_extent(const QwtDateScaleDraw*, intptr_t, QFont*);
void miqt_exec_callback_QwtDateScaleDraw_drawTick(const QwtDateScaleDraw*, intptr_t, QPainter*, double, double);
void miqt_exec_callback_QwtDateScaleDraw_drawBackbone(const QwtDateScaleDraw*, intptr_t, QPainter*);
void miqt_exec_callback_QwtDateScaleDraw_drawLabel(const QwtDateScaleDraw*, intptr_t, QPainter*, double);
void miqt_exec_callback_QwtDateScaleDraw_draw(const QwtDateScaleDraw*, intptr_t, QPainter*, QPalette*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtDateScaleDraw final : public QwtDateScaleDraw {
public:

	MiqtVirtualQwtDateScaleDraw(): QwtDateScaleDraw() {}
	MiqtVirtualQwtDateScaleDraw(Qt::TimeSpec param1): QwtDateScaleDraw(param1) {}

	virtual ~MiqtVirtualQwtDateScaleDraw() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__label = 0;

	// Subclass to allow providing a Go implementation
	virtual QwtText label(double param1) const override {
		if (handle__label == 0) {
			return QwtDateScaleDraw::label(param1);
		}

		double sigval1 = param1;
		QwtText* callback_return_value = miqt_exec_callback_QwtDateScaleDraw_label(this, handle__label, sigval1);
		return *callback_return_value;
	}

	friend QwtText* QwtDateScaleDraw_virtualbase_label(const void* self, double param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__intervalType = 0;

	// Subclass to allow providing a Go implementation
	virtual QwtDate::IntervalType intervalType(const QwtScaleDiv& param1) const override {
		if (handle__intervalType == 0) {
			return QwtDateScaleDraw::intervalType(param1);
		}

		const QwtScaleDiv& param1_ret = param1;
		// Cast returned reference into pointer
		QwtScaleDiv* sigval1 = const_cast<QwtScaleDiv*>(&param1_ret);
		int callback_return_value = miqt_exec_callback_QwtDateScaleDraw_intervalType(this, handle__intervalType, sigval1);
		return static_cast<QwtDate::IntervalType>(callback_return_value);
	}

	friend int QwtDateScaleDraw_virtualbase_intervalType(const void* self, QwtScaleDiv* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dateFormatOfDate = 0;

	// Subclass to allow providing a Go implementation
	virtual QString dateFormatOfDate(const QDateTime& param1, QwtDate::IntervalType param2) const override {
		if (handle__dateFormatOfDate == 0) {
			return QwtDateScaleDraw::dateFormatOfDate(param1, param2);
		}

		const QDateTime& param1_ret = param1;
		// Cast returned reference into pointer
		QDateTime* sigval1 = const_cast<QDateTime*>(&param1_ret);
		QwtDate::IntervalType param2_ret = param2;
		int sigval2 = static_cast<int>(param2_ret);
		struct miqt_string callback_return_value = miqt_exec_callback_QwtDateScaleDraw_dateFormatOfDate(this, handle__dateFormatOfDate, sigval1, sigval2);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		return callback_return_value_QString;
	}

	friend struct miqt_string QwtDateScaleDraw_virtualbase_dateFormatOfDate(const void* self, QDateTime* param1, int param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__extent = 0;

	// Subclass to allow providing a Go implementation
	virtual double extent(const QFont& param1) const override {
		if (handle__extent == 0) {
			return QwtDateScaleDraw::extent(param1);
		}

		const QFont& param1_ret = param1;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&param1_ret);
		double callback_return_value = miqt_exec_callback_QwtDateScaleDraw_extent(this, handle__extent, sigval1);
		return static_cast<double>(callback_return_value);
	}

	friend double QwtDateScaleDraw_virtualbase_extent(const void* self, QFont* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawTick = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawTick(QPainter* param1, double value, double len) const override {
		if (handle__drawTick == 0) {
			QwtDateScaleDraw::drawTick(param1, value, len);
			return;
		}

		QPainter* sigval1 = param1;
		double sigval2 = value;
		double sigval3 = len;
		miqt_exec_callback_QwtDateScaleDraw_drawTick(this, handle__drawTick, sigval1, sigval2, sigval3);

	}

	friend void QwtDateScaleDraw_virtualbase_drawTick(const void* self, QPainter* param1, double value, double len);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawBackbone = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawBackbone(QPainter* param1) const override {
		if (handle__drawBackbone == 0) {
			QwtDateScaleDraw::drawBackbone(param1);
			return;
		}

		QPainter* sigval1 = param1;
		miqt_exec_callback_QwtDateScaleDraw_drawBackbone(this, handle__drawBackbone, sigval1);

	}

	friend void QwtDateScaleDraw_virtualbase_drawBackbone(const void* self, QPainter* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawLabel = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawLabel(QPainter* param1, double value) const override {
		if (handle__drawLabel == 0) {
			QwtDateScaleDraw::drawLabel(param1, value);
			return;
		}

		QPainter* sigval1 = param1;
		double sigval2 = value;
		miqt_exec_callback_QwtDateScaleDraw_drawLabel(this, handle__drawLabel, sigval1, sigval2);

	}

	friend void QwtDateScaleDraw_virtualbase_drawLabel(const void* self, QPainter* param1, double value);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__draw = 0;

	// Subclass to allow providing a Go implementation
	virtual void draw(QPainter* param1, const QPalette& param2) const override {
		if (handle__draw == 0) {
			QwtDateScaleDraw::draw(param1, param2);
			return;
		}

		QPainter* sigval1 = param1;
		const QPalette& param2_ret = param2;
		// Cast returned reference into pointer
		QPalette* sigval2 = const_cast<QPalette*>(&param2_ret);
		miqt_exec_callback_QwtDateScaleDraw_draw(this, handle__draw, sigval1, sigval2);

	}

	friend void QwtDateScaleDraw_virtualbase_draw(const void* self, QPainter* param1, QPalette* param2);

	// Wrappers to allow calling protected methods:
	friend QTransform* QwtDateScaleDraw_protectedbase_labelTransformation(bool* _dynamic_cast_ok, const void* self, QPointF* param1, QSizeF* param2);
	friend void QwtDateScaleDraw_protectedbase_invalidateCache(bool* _dynamic_cast_ok, void* self);
	friend QwtText* QwtDateScaleDraw_protectedbase_tickLabel(bool* _dynamic_cast_ok, const void* self, QFont* param1, double value);
};

QwtDateScaleDraw* QwtDateScaleDraw_new() {
	return new (std::nothrow) MiqtVirtualQwtDateScaleDraw();
}

QwtDateScaleDraw* QwtDateScaleDraw_new2(int param1) {
	return new (std::nothrow) MiqtVirtualQwtDateScaleDraw(static_cast<Qt::TimeSpec>(param1));
}

void QwtDateScaleDraw_virtbase(QwtDateScaleDraw* src, QwtScaleDraw** outptr_QwtScaleDraw) {
	*outptr_QwtScaleDraw = static_cast<QwtScaleDraw*>(src);
}

void QwtDateScaleDraw_setDateFormat(QwtDateScaleDraw* self, int param1, struct miqt_string param2) {
	QString param2_QString = QString::fromUtf8(param2.data, param2.len);
	self->setDateFormat(static_cast<QwtDate::IntervalType>(param1), param2_QString);
}

struct miqt_string QwtDateScaleDraw_dateFormat(const QwtDateScaleDraw* self, int param1) {
	QString _ret = self->dateFormat(static_cast<QwtDate::IntervalType>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QwtDateScaleDraw_setTimeSpec(QwtDateScaleDraw* self, int timeSpec) {
	self->setTimeSpec(static_cast<Qt::TimeSpec>(timeSpec));
}

int QwtDateScaleDraw_timeSpec(const QwtDateScaleDraw* self) {
	Qt::TimeSpec _ret = self->timeSpec();
	return static_cast<int>(_ret);
}

void QwtDateScaleDraw_setUtcOffset(QwtDateScaleDraw* self, int seconds) {
	self->setUtcOffset(static_cast<int>(seconds));
}

int QwtDateScaleDraw_utcOffset(const QwtDateScaleDraw* self) {
	return self->utcOffset();
}

void QwtDateScaleDraw_setWeek0Type(QwtDateScaleDraw* self, int week0Type) {
	self->setWeek0Type(static_cast<QwtDate::Week0Type>(week0Type));
}

int QwtDateScaleDraw_week0Type(const QwtDateScaleDraw* self) {
	QwtDate::Week0Type _ret = self->week0Type();
	return static_cast<int>(_ret);
}

QwtText* QwtDateScaleDraw_label(const QwtDateScaleDraw* self, double param1) {
	return new QwtText(self->label(static_cast<double>(param1)));
}

QDateTime* QwtDateScaleDraw_toDateTime(const QwtDateScaleDraw* self, double param1) {
	return new QDateTime(self->toDateTime(static_cast<double>(param1)));
}

bool QwtDateScaleDraw_override_virtual_label(void* self, intptr_t slot) {
	MiqtVirtualQwtDateScaleDraw* self_cast = dynamic_cast<MiqtVirtualQwtDateScaleDraw*>( (QwtDateScaleDraw*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__label = slot;
	return true;
}

QwtText* QwtDateScaleDraw_virtualbase_label(const void* self, double param1) {
	return new QwtText(static_cast<const MiqtVirtualQwtDateScaleDraw*>(self)->QwtDateScaleDraw::label(static_cast<double>(param1)));
}

bool QwtDateScaleDraw_override_virtual_intervalType(void* self, intptr_t slot) {
	MiqtVirtualQwtDateScaleDraw* self_cast = dynamic_cast<MiqtVirtualQwtDateScaleDraw*>( (QwtDateScaleDraw*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__intervalType = slot;
	return true;
}

int QwtDateScaleDraw_virtualbase_intervalType(const void* self, QwtScaleDiv* param1) {
	QwtDate::IntervalType _ret = static_cast<const MiqtVirtualQwtDateScaleDraw*>(self)->QwtDateScaleDraw::intervalType(*param1);
	return static_cast<int>(_ret);
}

bool QwtDateScaleDraw_override_virtual_dateFormatOfDate(void* self, intptr_t slot) {
	MiqtVirtualQwtDateScaleDraw* self_cast = dynamic_cast<MiqtVirtualQwtDateScaleDraw*>( (QwtDateScaleDraw*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dateFormatOfDate = slot;
	return true;
}

struct miqt_string QwtDateScaleDraw_virtualbase_dateFormatOfDate(const void* self, QDateTime* param1, int param2) {
	QString _ret = static_cast<const MiqtVirtualQwtDateScaleDraw*>(self)->QwtDateScaleDraw::dateFormatOfDate(*param1, static_cast<QwtDate::IntervalType>(param2));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QwtDateScaleDraw_override_virtual_extent(void* self, intptr_t slot) {
	MiqtVirtualQwtDateScaleDraw* self_cast = dynamic_cast<MiqtVirtualQwtDateScaleDraw*>( (QwtDateScaleDraw*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__extent = slot;
	return true;
}

double QwtDateScaleDraw_virtualbase_extent(const void* self, QFont* param1) {
	return static_cast<const MiqtVirtualQwtDateScaleDraw*>(self)->QwtDateScaleDraw::extent(*param1);
}

bool QwtDateScaleDraw_override_virtual_drawTick(void* self, intptr_t slot) {
	MiqtVirtualQwtDateScaleDraw* self_cast = dynamic_cast<MiqtVirtualQwtDateScaleDraw*>( (QwtDateScaleDraw*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawTick = slot;
	return true;
}

void QwtDateScaleDraw_virtualbase_drawTick(const void* self, QPainter* param1, double value, double len) {
	static_cast<const MiqtVirtualQwtDateScaleDraw*>(self)->QwtDateScaleDraw::drawTick(param1, static_cast<double>(value), static_cast<double>(len));
}

bool QwtDateScaleDraw_override_virtual_drawBackbone(void* self, intptr_t slot) {
	MiqtVirtualQwtDateScaleDraw* self_cast = dynamic_cast<MiqtVirtualQwtDateScaleDraw*>( (QwtDateScaleDraw*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawBackbone = slot;
	return true;
}

void QwtDateScaleDraw_virtualbase_drawBackbone(const void* self, QPainter* param1) {
	static_cast<const MiqtVirtualQwtDateScaleDraw*>(self)->QwtDateScaleDraw::drawBackbone(param1);
}

bool QwtDateScaleDraw_override_virtual_drawLabel(void* self, intptr_t slot) {
	MiqtVirtualQwtDateScaleDraw* self_cast = dynamic_cast<MiqtVirtualQwtDateScaleDraw*>( (QwtDateScaleDraw*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawLabel = slot;
	return true;
}

void QwtDateScaleDraw_virtualbase_drawLabel(const void* self, QPainter* param1, double value) {
	static_cast<const MiqtVirtualQwtDateScaleDraw*>(self)->QwtDateScaleDraw::drawLabel(param1, static_cast<double>(value));
}

bool QwtDateScaleDraw_override_virtual_draw(void* self, intptr_t slot) {
	MiqtVirtualQwtDateScaleDraw* self_cast = dynamic_cast<MiqtVirtualQwtDateScaleDraw*>( (QwtDateScaleDraw*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__draw = slot;
	return true;
}

void QwtDateScaleDraw_virtualbase_draw(const void* self, QPainter* param1, QPalette* param2) {
	static_cast<const MiqtVirtualQwtDateScaleDraw*>(self)->QwtDateScaleDraw::draw(param1, *param2);
}

QTransform* QwtDateScaleDraw_protectedbase_labelTransformation(bool* _dynamic_cast_ok, const void* self, QPointF* param1, QSizeF* param2) {
	MiqtVirtualQwtDateScaleDraw* self_cast = dynamic_cast<MiqtVirtualQwtDateScaleDraw*>( (QwtDateScaleDraw*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QTransform(self_cast->labelTransformation(*param1, *param2));
}

void QwtDateScaleDraw_protectedbase_invalidateCache(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtDateScaleDraw* self_cast = dynamic_cast<MiqtVirtualQwtDateScaleDraw*>( (QwtDateScaleDraw*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->invalidateCache();
}

QwtText* QwtDateScaleDraw_protectedbase_tickLabel(bool* _dynamic_cast_ok, const void* self, QFont* param1, double value) {
	MiqtVirtualQwtDateScaleDraw* self_cast = dynamic_cast<MiqtVirtualQwtDateScaleDraw*>( (QwtDateScaleDraw*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	const QwtText& _ret = self_cast->tickLabel(*param1, static_cast<double>(value));
	// Cast returned reference into pointer
	return const_cast<QwtText*>(&_ret);
}

void QwtDateScaleDraw_delete(QwtDateScaleDraw* self) {
	delete self;
}

