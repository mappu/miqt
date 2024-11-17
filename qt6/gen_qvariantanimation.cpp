#include <QEasingCurve>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <QVariantAnimation>
#include <qvariantanimation.h>
#include "gen_qvariantanimation.h"
#include "_cgo_export.h"

QVariantAnimation* QVariantAnimation_new() {
	return new QVariantAnimation();
}

QVariantAnimation* QVariantAnimation_new2(QObject* parent) {
	return new QVariantAnimation(parent);
}

QMetaObject* QVariantAnimation_MetaObject(const QVariantAnimation* self) {
	return (QMetaObject*) self->metaObject();
}

void* QVariantAnimation_Metacast(QVariantAnimation* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QVariantAnimation_Tr(const char* s) {
	QString _ret = QVariantAnimation::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QVariant* QVariantAnimation_StartValue(const QVariantAnimation* self) {
	return new QVariant(self->startValue());
}

void QVariantAnimation_SetStartValue(QVariantAnimation* self, QVariant* value) {
	self->setStartValue(*value);
}

QVariant* QVariantAnimation_EndValue(const QVariantAnimation* self) {
	return new QVariant(self->endValue());
}

void QVariantAnimation_SetEndValue(QVariantAnimation* self, QVariant* value) {
	self->setEndValue(*value);
}

QVariant* QVariantAnimation_KeyValueAt(const QVariantAnimation* self, double step) {
	return new QVariant(self->keyValueAt(static_cast<qreal>(step)));
}

void QVariantAnimation_SetKeyValueAt(QVariantAnimation* self, double step, QVariant* value) {
	self->setKeyValueAt(static_cast<qreal>(step), *value);
}

struct miqt_array /* of struct miqt_map  tuple of double and QVariant*   */  QVariantAnimation_KeyValues(const QVariantAnimation* self) {
	QVariantAnimation::KeyValues _ret = self->keyValues();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_map /* tuple of double and QVariant* */ * _arr = static_cast<struct miqt_map /* tuple of double and QVariant* */ *>(malloc(sizeof(struct miqt_map /* tuple of double and QVariant* */ ) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QPair<double, QVariant> _lv_ret = _ret[i];
		// Convert QPair<> from C++ memory to manually-managed C memory
		double* _lv_first_arr = static_cast<double*>(malloc(sizeof(double)));
		QVariant** _lv_second_arr = static_cast<QVariant**>(malloc(sizeof(QVariant*)));
		_lv_first_arr[0] = _lv_ret.first;
		_lv_second_arr[0] = new QVariant(_lv_ret.second);
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

void QVariantAnimation_SetKeyValues(QVariantAnimation* self, struct miqt_array /* of struct miqt_map  tuple of double and QVariant*   */  values) {
	QVariantAnimation::KeyValues values_QList;
	values_QList.reserve(values.len);
	struct miqt_map /* tuple of double and QVariant* */ * values_arr = static_cast<struct miqt_map /* tuple of double and QVariant* */ *>(values.data);
	for(size_t i = 0; i < values.len; ++i) {
		QPair<double, QVariant> values_arr_i_QPair;
		double* values_arr_i_first_arr = static_cast<double*>(values_arr[i].keys);
		QVariant** values_arr_i_second_arr = static_cast<QVariant**>(values_arr[i].values);
		values_arr_i_QPair.first = static_cast<double>(values_arr_i_first_arr[0]);
		values_arr_i_QPair.second = *(values_arr_i_second_arr[0]);
		values_QList.push_back(values_arr_i_QPair);
	}
	self->setKeyValues(values_QList);
}

QVariant* QVariantAnimation_CurrentValue(const QVariantAnimation* self) {
	return new QVariant(self->currentValue());
}

int QVariantAnimation_Duration(const QVariantAnimation* self) {
	return self->duration();
}

void QVariantAnimation_SetDuration(QVariantAnimation* self, int msecs) {
	self->setDuration(static_cast<int>(msecs));
}

QEasingCurve* QVariantAnimation_EasingCurve(const QVariantAnimation* self) {
	return new QEasingCurve(self->easingCurve());
}

void QVariantAnimation_SetEasingCurve(QVariantAnimation* self, QEasingCurve* easing) {
	self->setEasingCurve(*easing);
}

void QVariantAnimation_ValueChanged(QVariantAnimation* self, QVariant* value) {
	self->valueChanged(*value);
}

void QVariantAnimation_connect_ValueChanged(QVariantAnimation* self, intptr_t slot) {
	QVariantAnimation::connect(self, static_cast<void (QVariantAnimation::*)(const QVariant&)>(&QVariantAnimation::valueChanged), self, [=](const QVariant& value) {
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&value_ret);
		miqt_exec_callback_QVariantAnimation_ValueChanged(slot, sigval1);
	});
}

struct miqt_string QVariantAnimation_Tr2(const char* s, const char* c) {
	QString _ret = QVariantAnimation::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVariantAnimation_Tr3(const char* s, const char* c, int n) {
	QString _ret = QVariantAnimation::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QVariantAnimation_Delete(QVariantAnimation* self) {
	delete self;
}

