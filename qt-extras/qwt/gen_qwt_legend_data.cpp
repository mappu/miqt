#include <QMap>
#include <QVariant>
#include <qwt_legend_data.h>
#include "gen_qwt_legend_data.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QwtLegendData* QwtLegendData_new() {
	return new (std::nothrow) QwtLegendData();
}

QwtLegendData* QwtLegendData_new2(QwtLegendData* param1) {
	return new (std::nothrow) QwtLegendData(*param1);
}

void QwtLegendData_setValues(QwtLegendData* self, struct miqt_map /* of int to QVariant* */  values) {
	QMap<int, QVariant> values_QMap;
	int* values_karr = static_cast<int*>(values.keys);
	QVariant** values_varr = static_cast<QVariant**>(values.values);
	for(size_t i = 0; i < values.len; ++i) {
		values_QMap[static_cast<int>(values_karr[i])] = *(values_varr[i]);
	}
	self->setValues(values_QMap);
}

struct miqt_map /* of int to QVariant* */  QwtLegendData_values(const QwtLegendData* self) {
	const QMap<int, QVariant>& _ret = self->values();
	// Convert QMap<> from C++ memory to manually-managed C memory
	int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
	QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
	int _ctr = 0;
	for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
		_karr[_ctr] = _itr->first;
		_varr[_ctr] = new QVariant(_itr->second);
		_ctr++;
	}
	struct miqt_map _out;
	_out.len = _ret.size();
	_out.keys = static_cast<void*>(_karr);
	_out.values = static_cast<void*>(_varr);
	return _out;
}

void QwtLegendData_setValue(QwtLegendData* self, int role, QVariant* param2) {
	self->setValue(static_cast<int>(role), *param2);
}

QVariant* QwtLegendData_value(const QwtLegendData* self, int role) {
	return new QVariant(self->value(static_cast<int>(role)));
}

bool QwtLegendData_hasRole(const QwtLegendData* self, int role) {
	return self->hasRole(static_cast<int>(role));
}

bool QwtLegendData_isValid(const QwtLegendData* self) {
	return self->isValid();
}

QwtGraphic* QwtLegendData_icon(const QwtLegendData* self) {
	return new QwtGraphic(self->icon());
}

QwtText* QwtLegendData_title(const QwtLegendData* self) {
	return new QwtText(self->title());
}

int QwtLegendData_mode(const QwtLegendData* self) {
	QwtLegendData::Mode _ret = self->mode();
	return static_cast<int>(_ret);
}

void QwtLegendData_operatorAssign(QwtLegendData* self, QwtLegendData* param1) {
	self->operator=(*param1);
}

void QwtLegendData_delete(QwtLegendData* self) {
	delete self;
}

