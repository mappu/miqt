#include <QAbstractSeries>
#include <QBrush>
#include <QColor>
#include <QFont>
#include <QHash>
#include <QImage>
#include <QLinearGradient>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPair>
#include <QPen>
#include <QPointF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <QXYSeries>
#include <qxyseries.h>
#include "gen_qxyseries.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QXYSeries_clicked(intptr_t, QPointF*);
void miqt_exec_callback_QXYSeries_hovered(intptr_t, QPointF*, bool);
void miqt_exec_callback_QXYSeries_pressed(intptr_t, QPointF*);
void miqt_exec_callback_QXYSeries_released(intptr_t, QPointF*);
void miqt_exec_callback_QXYSeries_doubleClicked(intptr_t, QPointF*);
void miqt_exec_callback_QXYSeries_pointReplaced(intptr_t, int);
void miqt_exec_callback_QXYSeries_pointRemoved(intptr_t, int);
void miqt_exec_callback_QXYSeries_pointAdded(intptr_t, int);
void miqt_exec_callback_QXYSeries_colorChanged(intptr_t, QColor*);
void miqt_exec_callback_QXYSeries_selectedColorChanged(intptr_t, QColor*);
void miqt_exec_callback_QXYSeries_pointsReplaced(intptr_t);
void miqt_exec_callback_QXYSeries_pointLabelsFormatChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QXYSeries_pointLabelsVisibilityChanged(intptr_t, bool);
void miqt_exec_callback_QXYSeries_pointLabelsFontChanged(intptr_t, QFont*);
void miqt_exec_callback_QXYSeries_pointLabelsColorChanged(intptr_t, QColor*);
void miqt_exec_callback_QXYSeries_pointLabelsClippingChanged(intptr_t, bool);
void miqt_exec_callback_QXYSeries_pointsRemoved(intptr_t, int, int);
void miqt_exec_callback_QXYSeries_penChanged(intptr_t, QPen*);
void miqt_exec_callback_QXYSeries_selectedPointsChanged(intptr_t);
void miqt_exec_callback_QXYSeries_lightMarkerChanged(intptr_t, QImage*);
void miqt_exec_callback_QXYSeries_selectedLightMarkerChanged(intptr_t, QImage*);
void miqt_exec_callback_QXYSeries_bestFitLineVisibilityChanged(intptr_t, bool);
void miqt_exec_callback_QXYSeries_bestFitLinePenChanged(intptr_t, QPen*);
void miqt_exec_callback_QXYSeries_bestFitLineColorChanged(intptr_t, QColor*);
void miqt_exec_callback_QXYSeries_pointsConfigurationChanged(intptr_t, struct miqt_map /* of int to struct miqt_map  of int to QVariant*   */ );
void miqt_exec_callback_QXYSeries_markerSizeChanged(intptr_t, double);
#ifdef __cplusplus
} /* extern C */
#endif

void QXYSeries_virtbase(QXYSeries* src, QAbstractSeries** outptr_QAbstractSeries) {
	*outptr_QAbstractSeries = static_cast<QAbstractSeries*>(src);
}

QMetaObject* QXYSeries_metaObject(const QXYSeries* self) {
	return (QMetaObject*) self->metaObject();
}

void* QXYSeries_metacast(QXYSeries* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QXYSeries_tr(const char* s) {
	QString _ret = QXYSeries::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QXYSeries_append(QXYSeries* self, double x, double y) {
	self->append(static_cast<qreal>(x), static_cast<qreal>(y));
}

void QXYSeries_appendWithPoint(QXYSeries* self, QPointF* point) {
	self->append(*point);
}

void QXYSeries_appendWithPoints(QXYSeries* self, struct miqt_array /* of QPointF* */  points) {
	QList<QPointF> points_QList;
	points_QList.reserve(points.len);
	QPointF** points_arr = static_cast<QPointF**>(points.data);
	for(size_t i = 0; i < points.len; ++i) {
		points_QList.push_back(*(points_arr[i]));
	}
	self->append(points_QList);
}

void QXYSeries_replace(QXYSeries* self, double oldX, double oldY, double newX, double newY) {
	self->replace(static_cast<qreal>(oldX), static_cast<qreal>(oldY), static_cast<qreal>(newX), static_cast<qreal>(newY));
}

void QXYSeries_replace2(QXYSeries* self, QPointF* oldPoint, QPointF* newPoint) {
	self->replace(*oldPoint, *newPoint);
}

void QXYSeries_replace3(QXYSeries* self, int index, double newX, double newY) {
	self->replace(static_cast<int>(index), static_cast<qreal>(newX), static_cast<qreal>(newY));
}

void QXYSeries_replace4(QXYSeries* self, int index, QPointF* newPoint) {
	self->replace(static_cast<int>(index), *newPoint);
}

void QXYSeries_remove(QXYSeries* self, double x, double y) {
	self->remove(static_cast<qreal>(x), static_cast<qreal>(y));
}

void QXYSeries_removeWithPoint(QXYSeries* self, QPointF* point) {
	self->remove(*point);
}

void QXYSeries_removeWithIndex(QXYSeries* self, int index) {
	self->remove(static_cast<int>(index));
}

void QXYSeries_removePoints(QXYSeries* self, int index, int count) {
	self->removePoints(static_cast<int>(index), static_cast<int>(count));
}

void QXYSeries_insert(QXYSeries* self, int index, QPointF* point) {
	self->insert(static_cast<int>(index), *point);
}

void QXYSeries_clear(QXYSeries* self) {
	self->clear();
}

int QXYSeries_count(const QXYSeries* self) {
	return self->count();
}

struct miqt_array /* of QPointF* */  QXYSeries_points(const QXYSeries* self) {
	QList<QPointF> _ret = self->points();
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

struct miqt_array /* of QPointF* */  QXYSeries_pointsVector(const QXYSeries* self) {
	QList<QPointF> _ret = self->pointsVector();
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

QPointF* QXYSeries_at(const QXYSeries* self, int index) {
	const QPointF& _ret = self->at(static_cast<int>(index));
	// Cast returned reference into pointer
	return const_cast<QPointF*>(&_ret);
}

QXYSeries* QXYSeries_operatorShiftLeft(QXYSeries* self, QPointF* point) {
	QXYSeries& _ret = self->operator<<(*point);
	// Cast returned reference into pointer
	return &_ret;
}

QXYSeries* QXYSeries_operatorShiftLeftWithPoints(QXYSeries* self, struct miqt_array /* of QPointF* */  points) {
	QList<QPointF> points_QList;
	points_QList.reserve(points.len);
	QPointF** points_arr = static_cast<QPointF**>(points.data);
	for(size_t i = 0; i < points.len; ++i) {
		points_QList.push_back(*(points_arr[i]));
	}
	QXYSeries& _ret = self->operator<<(points_QList);
	// Cast returned reference into pointer
	return &_ret;
}

void QXYSeries_setPen(QXYSeries* self, QPen* pen) {
	self->setPen(*pen);
}

QPen* QXYSeries_pen(const QXYSeries* self) {
	return new QPen(self->pen());
}

void QXYSeries_setBrush(QXYSeries* self, QBrush* brush) {
	self->setBrush(*brush);
}

QBrush* QXYSeries_brush(const QXYSeries* self) {
	return new QBrush(self->brush());
}

void QXYSeries_setColor(QXYSeries* self, QColor* color) {
	self->setColor(*color);
}

QColor* QXYSeries_color(const QXYSeries* self) {
	return new QColor(self->color());
}

void QXYSeries_setSelectedColor(QXYSeries* self, QColor* color) {
	self->setSelectedColor(*color);
}

QColor* QXYSeries_selectedColor(const QXYSeries* self) {
	return new QColor(self->selectedColor());
}

void QXYSeries_setPointsVisible(QXYSeries* self) {
	self->setPointsVisible();
}

bool QXYSeries_pointsVisible(const QXYSeries* self) {
	return self->pointsVisible();
}

void QXYSeries_setPointLabelsFormat(QXYSeries* self, struct miqt_string format) {
	QString format_QString = QString::fromUtf8(format.data, format.len);
	self->setPointLabelsFormat(format_QString);
}

struct miqt_string QXYSeries_pointLabelsFormat(const QXYSeries* self) {
	QString _ret = self->pointLabelsFormat();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QXYSeries_setPointLabelsVisible(QXYSeries* self) {
	self->setPointLabelsVisible();
}

bool QXYSeries_pointLabelsVisible(const QXYSeries* self) {
	return self->pointLabelsVisible();
}

void QXYSeries_setPointLabelsFont(QXYSeries* self, QFont* font) {
	self->setPointLabelsFont(*font);
}

QFont* QXYSeries_pointLabelsFont(const QXYSeries* self) {
	return new QFont(self->pointLabelsFont());
}

void QXYSeries_setPointLabelsColor(QXYSeries* self, QColor* color) {
	self->setPointLabelsColor(*color);
}

QColor* QXYSeries_pointLabelsColor(const QXYSeries* self) {
	return new QColor(self->pointLabelsColor());
}

void QXYSeries_setPointLabelsClipping(QXYSeries* self) {
	self->setPointLabelsClipping();
}

bool QXYSeries_pointLabelsClipping(const QXYSeries* self) {
	return self->pointLabelsClipping();
}

void QXYSeries_replaceWithPoints(QXYSeries* self, struct miqt_array /* of QPointF* */  points) {
	QList<QPointF> points_QList;
	points_QList.reserve(points.len);
	QPointF** points_arr = static_cast<QPointF**>(points.data);
	for(size_t i = 0; i < points.len; ++i) {
		points_QList.push_back(*(points_arr[i]));
	}
	self->replace(points_QList);
}

bool QXYSeries_isPointSelected(QXYSeries* self, int index) {
	return self->isPointSelected(static_cast<int>(index));
}

void QXYSeries_selectPoint(QXYSeries* self, int index) {
	self->selectPoint(static_cast<int>(index));
}

void QXYSeries_deselectPoint(QXYSeries* self, int index) {
	self->deselectPoint(static_cast<int>(index));
}

void QXYSeries_setPointSelected(QXYSeries* self, int index, bool selected) {
	self->setPointSelected(static_cast<int>(index), selected);
}

void QXYSeries_selectAllPoints(QXYSeries* self) {
	self->selectAllPoints();
}

void QXYSeries_deselectAllPoints(QXYSeries* self) {
	self->deselectAllPoints();
}

void QXYSeries_selectPoints(QXYSeries* self, struct miqt_array /* of int */  indexes) {
	QList<int> indexes_QList;
	indexes_QList.reserve(indexes.len);
	int* indexes_arr = static_cast<int*>(indexes.data);
	for(size_t i = 0; i < indexes.len; ++i) {
		indexes_QList.push_back(static_cast<int>(indexes_arr[i]));
	}
	self->selectPoints(indexes_QList);
}

void QXYSeries_deselectPoints(QXYSeries* self, struct miqt_array /* of int */  indexes) {
	QList<int> indexes_QList;
	indexes_QList.reserve(indexes.len);
	int* indexes_arr = static_cast<int*>(indexes.data);
	for(size_t i = 0; i < indexes.len; ++i) {
		indexes_QList.push_back(static_cast<int>(indexes_arr[i]));
	}
	self->deselectPoints(indexes_QList);
}

void QXYSeries_toggleSelection(QXYSeries* self, struct miqt_array /* of int */  indexes) {
	QList<int> indexes_QList;
	indexes_QList.reserve(indexes.len);
	int* indexes_arr = static_cast<int*>(indexes.data);
	for(size_t i = 0; i < indexes.len; ++i) {
		indexes_QList.push_back(static_cast<int>(indexes_arr[i]));
	}
	self->toggleSelection(indexes_QList);
}

struct miqt_array /* of int */  QXYSeries_selectedPoints(const QXYSeries* self) {
	QList<int> _ret = self->selectedPoints();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QXYSeries_setLightMarker(QXYSeries* self, QImage* lightMarker) {
	self->setLightMarker(*lightMarker);
}

QImage* QXYSeries_lightMarker(const QXYSeries* self) {
	const QImage& _ret = self->lightMarker();
	// Cast returned reference into pointer
	return const_cast<QImage*>(&_ret);
}

void QXYSeries_setSelectedLightMarker(QXYSeries* self, QImage* selectedLightMarker) {
	self->setSelectedLightMarker(*selectedLightMarker);
}

QImage* QXYSeries_selectedLightMarker(const QXYSeries* self) {
	const QImage& _ret = self->selectedLightMarker();
	// Cast returned reference into pointer
	return const_cast<QImage*>(&_ret);
}

void QXYSeries_setMarkerSize(QXYSeries* self, double size) {
	self->setMarkerSize(static_cast<qreal>(size));
}

double QXYSeries_markerSize(const QXYSeries* self) {
	qreal _ret = self->markerSize();
	return static_cast<double>(_ret);
}

void QXYSeries_setBestFitLineVisible(QXYSeries* self) {
	self->setBestFitLineVisible();
}

bool QXYSeries_bestFitLineVisible(const QXYSeries* self) {
	return self->bestFitLineVisible();
}

struct miqt_map /* tuple of double and double */  QXYSeries_bestFitLineEquation(const QXYSeries* self, bool* ok) {
	QPair<qreal, qreal> _ret = self->bestFitLineEquation(*ok);
	// Convert QPair<> from C++ memory to manually-managed C memory
	double* _first_arr = static_cast<double*>(malloc(sizeof(double)));
	double* _second_arr = static_cast<double*>(malloc(sizeof(double)));
	_first_arr[0] = _ret.first;
	_second_arr[0] = _ret.second;
	struct miqt_map _out;
	_out.len = 1;
	_out.keys = static_cast<void*>(_first_arr);
	_out.values = static_cast<void*>(_second_arr);
	return _out;
}

void QXYSeries_setBestFitLinePen(QXYSeries* self, QPen* pen) {
	self->setBestFitLinePen(*pen);
}

QPen* QXYSeries_bestFitLinePen(const QXYSeries* self) {
	return new QPen(self->bestFitLinePen());
}

void QXYSeries_setBestFitLineColor(QXYSeries* self, QColor* color) {
	self->setBestFitLineColor(*color);
}

QColor* QXYSeries_bestFitLineColor(const QXYSeries* self) {
	return new QColor(self->bestFitLineColor());
}

void QXYSeries_clearPointConfiguration(QXYSeries* self, const int index) {
	self->clearPointConfiguration(static_cast<const int>(index));
}

void QXYSeries_clearPointConfiguration2(QXYSeries* self, const int index, int key) {
	self->clearPointConfiguration(static_cast<const int>(index), static_cast<const QXYSeries::PointConfiguration>(key));
}

void QXYSeries_clearPointsConfiguration(QXYSeries* self) {
	self->clearPointsConfiguration();
}

void QXYSeries_clearPointsConfigurationWithKey(QXYSeries* self, int key) {
	self->clearPointsConfiguration(static_cast<const QXYSeries::PointConfiguration>(key));
}

void QXYSeries_setPointConfiguration(QXYSeries* self, const int index, struct miqt_map /* of int to QVariant* */  configuration) {
	QHash<QXYSeries::PointConfiguration, QVariant> configuration_QMap;
	configuration_QMap.reserve(configuration.len);
	int* configuration_karr = static_cast<int*>(configuration.keys);
	QVariant** configuration_varr = static_cast<QVariant**>(configuration.values);
	for(size_t i = 0; i < configuration.len; ++i) {
		configuration_QMap[static_cast<QXYSeries::PointConfiguration>(configuration_karr[i])] = *(configuration_varr[i]);
	}
	self->setPointConfiguration(static_cast<const int>(index), configuration_QMap);
}

void QXYSeries_setPointConfiguration2(QXYSeries* self, const int index, int key, QVariant* value) {
	self->setPointConfiguration(static_cast<const int>(index), static_cast<const QXYSeries::PointConfiguration>(key), *value);
}

void QXYSeries_setPointsConfiguration(QXYSeries* self, struct miqt_map /* of int to struct miqt_map  of int to QVariant*   */  pointsConfiguration) {
	QHash<int, QHash<QXYSeries::PointConfiguration, QVariant>> pointsConfiguration_QMap;
	pointsConfiguration_QMap.reserve(pointsConfiguration.len);
	int* pointsConfiguration_karr = static_cast<int*>(pointsConfiguration.keys);
	struct miqt_map /* of int to QVariant* */ * pointsConfiguration_varr = static_cast<struct miqt_map /* of int to QVariant* */ *>(pointsConfiguration.values);
	for(size_t i = 0; i < pointsConfiguration.len; ++i) {
		QHash<QXYSeries::PointConfiguration, QVariant> pointsConfiguration_varr_i_QMap;
		pointsConfiguration_varr_i_QMap.reserve(pointsConfiguration_varr[i].len);
		int* pointsConfiguration_varr_i_karr = static_cast<int*>(pointsConfiguration_varr[i].keys);
		QVariant** pointsConfiguration_varr_i_varr = static_cast<QVariant**>(pointsConfiguration_varr[i].values);
		for(size_t i = 0; i < pointsConfiguration_varr[i].len; ++i) {
			pointsConfiguration_varr_i_QMap[static_cast<QXYSeries::PointConfiguration>(pointsConfiguration_varr_i_karr[i])] = *(pointsConfiguration_varr_i_varr[i]);
		}
		pointsConfiguration_QMap[static_cast<int>(pointsConfiguration_karr[i])] = pointsConfiguration_varr_i_QMap;
	}
	self->setPointsConfiguration(pointsConfiguration_QMap);
}

struct miqt_map /* of int to QVariant* */  QXYSeries_pointConfiguration(const QXYSeries* self, const int index) {
	QHash<QXYSeries::PointConfiguration, QVariant> _ret = self->pointConfiguration(static_cast<const int>(index));
	// Convert QMap<> from C++ memory to manually-managed C memory
	int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
	QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
	int _ctr = 0;
	for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
		QXYSeries::PointConfiguration _hashkey_ret = _itr->first;
		_karr[_ctr] = static_cast<int>(_hashkey_ret);
		_varr[_ctr] = new QVariant(_itr->second);
		_ctr++;
	}
	struct miqt_map _out;
	_out.len = _ret.size();
	_out.keys = static_cast<void*>(_karr);
	_out.values = static_cast<void*>(_varr);
	return _out;
}

struct miqt_map /* of int to struct miqt_map  of int to QVariant*   */  QXYSeries_pointsConfiguration(const QXYSeries* self) {
	QHash<int, QHash<QXYSeries::PointConfiguration, QVariant>> _ret = self->pointsConfiguration();
	// Convert QMap<> from C++ memory to manually-managed C memory
	int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
	struct miqt_map /* of int to QVariant* */ * _varr = static_cast<struct miqt_map /* of int to QVariant* */ *>(malloc(sizeof(struct miqt_map /* of int to QVariant* */ ) * _ret.size()));
	int _ctr = 0;
	for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
		_karr[_ctr] = _itr->first;
		QHash<QXYSeries::PointConfiguration, QVariant> _hashval_ret = _itr->second;
		// Convert QMap<> from C++ memory to manually-managed C memory
		int* _hashval_karr = static_cast<int*>(malloc(sizeof(int) * _hashval_ret.size()));
		QVariant** _hashval_varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _hashval_ret.size()));
		int _hashval_ctr = 0;
		for (auto _hashval_itr = _hashval_ret.keyValueBegin(); _hashval_itr != _hashval_ret.keyValueEnd(); ++_hashval_itr) {
			QXYSeries::PointConfiguration _hashval_hashkey_ret = _hashval_itr->first;
			_hashval_karr[_hashval_ctr] = static_cast<int>(_hashval_hashkey_ret);
			_hashval_varr[_hashval_ctr] = new QVariant(_hashval_itr->second);
			_hashval_ctr++;
		}
		struct miqt_map _hashval_out;
		_hashval_out.len = _hashval_ret.size();
		_hashval_out.keys = static_cast<void*>(_hashval_karr);
		_hashval_out.values = static_cast<void*>(_hashval_varr);
		_varr[_ctr] = _hashval_out;
		_ctr++;
	}
	struct miqt_map _out;
	_out.len = _ret.size();
	_out.keys = static_cast<void*>(_karr);
	_out.values = static_cast<void*>(_varr);
	return _out;
}

void QXYSeries_sizeBy(QXYSeries* self, struct miqt_array /* of double */  sourceData, const double minSize, const double maxSize) {
	QList<qreal> sourceData_QList;
	sourceData_QList.reserve(sourceData.len);
	double* sourceData_arr = static_cast<double*>(sourceData.data);
	for(size_t i = 0; i < sourceData.len; ++i) {
		sourceData_QList.push_back(static_cast<double>(sourceData_arr[i]));
	}
	self->sizeBy(sourceData_QList, static_cast<const qreal>(minSize), static_cast<const qreal>(maxSize));
}

void QXYSeries_colorBy(QXYSeries* self, struct miqt_array /* of double */  sourceData) {
	QList<qreal> sourceData_QList;
	sourceData_QList.reserve(sourceData.len);
	double* sourceData_arr = static_cast<double*>(sourceData.data);
	for(size_t i = 0; i < sourceData.len; ++i) {
		sourceData_QList.push_back(static_cast<double>(sourceData_arr[i]));
	}
	self->colorBy(sourceData_QList);
}

void QXYSeries_clicked(QXYSeries* self, QPointF* point) {
	self->clicked(*point);
}

void QXYSeries_connect_clicked(QXYSeries* self, intptr_t slot) {
	QXYSeries::connect(self, static_cast<void (QXYSeries::*)(const QPointF&)>(&QXYSeries::clicked), self, [=](const QPointF& point) {
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);
		miqt_exec_callback_QXYSeries_clicked(slot, sigval1);
	});
}

void QXYSeries_hovered(QXYSeries* self, QPointF* point, bool state) {
	self->hovered(*point, state);
}

void QXYSeries_connect_hovered(QXYSeries* self, intptr_t slot) {
	QXYSeries::connect(self, static_cast<void (QXYSeries::*)(const QPointF&, bool)>(&QXYSeries::hovered), self, [=](const QPointF& point, bool state) {
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);
		bool sigval2 = state;
		miqt_exec_callback_QXYSeries_hovered(slot, sigval1, sigval2);
	});
}

void QXYSeries_pressed(QXYSeries* self, QPointF* point) {
	self->pressed(*point);
}

void QXYSeries_connect_pressed(QXYSeries* self, intptr_t slot) {
	QXYSeries::connect(self, static_cast<void (QXYSeries::*)(const QPointF&)>(&QXYSeries::pressed), self, [=](const QPointF& point) {
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);
		miqt_exec_callback_QXYSeries_pressed(slot, sigval1);
	});
}

void QXYSeries_released(QXYSeries* self, QPointF* point) {
	self->released(*point);
}

void QXYSeries_connect_released(QXYSeries* self, intptr_t slot) {
	QXYSeries::connect(self, static_cast<void (QXYSeries::*)(const QPointF&)>(&QXYSeries::released), self, [=](const QPointF& point) {
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);
		miqt_exec_callback_QXYSeries_released(slot, sigval1);
	});
}

void QXYSeries_doubleClicked(QXYSeries* self, QPointF* point) {
	self->doubleClicked(*point);
}

void QXYSeries_connect_doubleClicked(QXYSeries* self, intptr_t slot) {
	QXYSeries::connect(self, static_cast<void (QXYSeries::*)(const QPointF&)>(&QXYSeries::doubleClicked), self, [=](const QPointF& point) {
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);
		miqt_exec_callback_QXYSeries_doubleClicked(slot, sigval1);
	});
}

void QXYSeries_pointReplaced(QXYSeries* self, int index) {
	self->pointReplaced(static_cast<int>(index));
}

void QXYSeries_connect_pointReplaced(QXYSeries* self, intptr_t slot) {
	QXYSeries::connect(self, static_cast<void (QXYSeries::*)(int)>(&QXYSeries::pointReplaced), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QXYSeries_pointReplaced(slot, sigval1);
	});
}

void QXYSeries_pointRemoved(QXYSeries* self, int index) {
	self->pointRemoved(static_cast<int>(index));
}

void QXYSeries_connect_pointRemoved(QXYSeries* self, intptr_t slot) {
	QXYSeries::connect(self, static_cast<void (QXYSeries::*)(int)>(&QXYSeries::pointRemoved), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QXYSeries_pointRemoved(slot, sigval1);
	});
}

void QXYSeries_pointAdded(QXYSeries* self, int index) {
	self->pointAdded(static_cast<int>(index));
}

void QXYSeries_connect_pointAdded(QXYSeries* self, intptr_t slot) {
	QXYSeries::connect(self, static_cast<void (QXYSeries::*)(int)>(&QXYSeries::pointAdded), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QXYSeries_pointAdded(slot, sigval1);
	});
}

void QXYSeries_colorChanged(QXYSeries* self, QColor* color) {
	self->colorChanged(*color);
}

void QXYSeries_connect_colorChanged(QXYSeries* self, intptr_t slot) {
	QXYSeries::connect(self, static_cast<void (QXYSeries::*)(QColor)>(&QXYSeries::colorChanged), self, [=](QColor color) {
		QColor* sigval1 = new QColor(color);
		miqt_exec_callback_QXYSeries_colorChanged(slot, sigval1);
	});
}

void QXYSeries_selectedColorChanged(QXYSeries* self, QColor* color) {
	self->selectedColorChanged(*color);
}

void QXYSeries_connect_selectedColorChanged(QXYSeries* self, intptr_t slot) {
	QXYSeries::connect(self, static_cast<void (QXYSeries::*)(const QColor&)>(&QXYSeries::selectedColorChanged), self, [=](const QColor& color) {
		const QColor& color_ret = color;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&color_ret);
		miqt_exec_callback_QXYSeries_selectedColorChanged(slot, sigval1);
	});
}

void QXYSeries_pointsReplaced(QXYSeries* self) {
	self->pointsReplaced();
}

void QXYSeries_connect_pointsReplaced(QXYSeries* self, intptr_t slot) {
	QXYSeries::connect(self, static_cast<void (QXYSeries::*)()>(&QXYSeries::pointsReplaced), self, [=]() {
		miqt_exec_callback_QXYSeries_pointsReplaced(slot);
	});
}

void QXYSeries_pointLabelsFormatChanged(QXYSeries* self, struct miqt_string format) {
	QString format_QString = QString::fromUtf8(format.data, format.len);
	self->pointLabelsFormatChanged(format_QString);
}

void QXYSeries_connect_pointLabelsFormatChanged(QXYSeries* self, intptr_t slot) {
	QXYSeries::connect(self, static_cast<void (QXYSeries::*)(const QString&)>(&QXYSeries::pointLabelsFormatChanged), self, [=](const QString& format) {
		const QString format_ret = format;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray format_b = format_ret.toUtf8();
		struct miqt_string format_ms;
		format_ms.len = format_b.length();
		format_ms.data = static_cast<char*>(malloc(format_ms.len));
		memcpy(format_ms.data, format_b.data(), format_ms.len);
		struct miqt_string sigval1 = format_ms;
		miqt_exec_callback_QXYSeries_pointLabelsFormatChanged(slot, sigval1);
	});
}

void QXYSeries_pointLabelsVisibilityChanged(QXYSeries* self, bool visible) {
	self->pointLabelsVisibilityChanged(visible);
}

void QXYSeries_connect_pointLabelsVisibilityChanged(QXYSeries* self, intptr_t slot) {
	QXYSeries::connect(self, static_cast<void (QXYSeries::*)(bool)>(&QXYSeries::pointLabelsVisibilityChanged), self, [=](bool visible) {
		bool sigval1 = visible;
		miqt_exec_callback_QXYSeries_pointLabelsVisibilityChanged(slot, sigval1);
	});
}

void QXYSeries_pointLabelsFontChanged(QXYSeries* self, QFont* font) {
	self->pointLabelsFontChanged(*font);
}

void QXYSeries_connect_pointLabelsFontChanged(QXYSeries* self, intptr_t slot) {
	QXYSeries::connect(self, static_cast<void (QXYSeries::*)(const QFont&)>(&QXYSeries::pointLabelsFontChanged), self, [=](const QFont& font) {
		const QFont& font_ret = font;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&font_ret);
		miqt_exec_callback_QXYSeries_pointLabelsFontChanged(slot, sigval1);
	});
}

void QXYSeries_pointLabelsColorChanged(QXYSeries* self, QColor* color) {
	self->pointLabelsColorChanged(*color);
}

void QXYSeries_connect_pointLabelsColorChanged(QXYSeries* self, intptr_t slot) {
	QXYSeries::connect(self, static_cast<void (QXYSeries::*)(const QColor&)>(&QXYSeries::pointLabelsColorChanged), self, [=](const QColor& color) {
		const QColor& color_ret = color;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&color_ret);
		miqt_exec_callback_QXYSeries_pointLabelsColorChanged(slot, sigval1);
	});
}

void QXYSeries_pointLabelsClippingChanged(QXYSeries* self, bool clipping) {
	self->pointLabelsClippingChanged(clipping);
}

void QXYSeries_connect_pointLabelsClippingChanged(QXYSeries* self, intptr_t slot) {
	QXYSeries::connect(self, static_cast<void (QXYSeries::*)(bool)>(&QXYSeries::pointLabelsClippingChanged), self, [=](bool clipping) {
		bool sigval1 = clipping;
		miqt_exec_callback_QXYSeries_pointLabelsClippingChanged(slot, sigval1);
	});
}

void QXYSeries_pointsRemoved(QXYSeries* self, int index, int count) {
	self->pointsRemoved(static_cast<int>(index), static_cast<int>(count));
}

void QXYSeries_connect_pointsRemoved(QXYSeries* self, intptr_t slot) {
	QXYSeries::connect(self, static_cast<void (QXYSeries::*)(int, int)>(&QXYSeries::pointsRemoved), self, [=](int index, int count) {
		int sigval1 = index;
		int sigval2 = count;
		miqt_exec_callback_QXYSeries_pointsRemoved(slot, sigval1, sigval2);
	});
}

void QXYSeries_penChanged(QXYSeries* self, QPen* pen) {
	self->penChanged(*pen);
}

void QXYSeries_connect_penChanged(QXYSeries* self, intptr_t slot) {
	QXYSeries::connect(self, static_cast<void (QXYSeries::*)(const QPen&)>(&QXYSeries::penChanged), self, [=](const QPen& pen) {
		const QPen& pen_ret = pen;
		// Cast returned reference into pointer
		QPen* sigval1 = const_cast<QPen*>(&pen_ret);
		miqt_exec_callback_QXYSeries_penChanged(slot, sigval1);
	});
}

void QXYSeries_selectedPointsChanged(QXYSeries* self) {
	self->selectedPointsChanged();
}

void QXYSeries_connect_selectedPointsChanged(QXYSeries* self, intptr_t slot) {
	QXYSeries::connect(self, static_cast<void (QXYSeries::*)()>(&QXYSeries::selectedPointsChanged), self, [=]() {
		miqt_exec_callback_QXYSeries_selectedPointsChanged(slot);
	});
}

void QXYSeries_lightMarkerChanged(QXYSeries* self, QImage* lightMarker) {
	self->lightMarkerChanged(*lightMarker);
}

void QXYSeries_connect_lightMarkerChanged(QXYSeries* self, intptr_t slot) {
	QXYSeries::connect(self, static_cast<void (QXYSeries::*)(const QImage&)>(&QXYSeries::lightMarkerChanged), self, [=](const QImage& lightMarker) {
		const QImage& lightMarker_ret = lightMarker;
		// Cast returned reference into pointer
		QImage* sigval1 = const_cast<QImage*>(&lightMarker_ret);
		miqt_exec_callback_QXYSeries_lightMarkerChanged(slot, sigval1);
	});
}

void QXYSeries_selectedLightMarkerChanged(QXYSeries* self, QImage* selectedLightMarker) {
	self->selectedLightMarkerChanged(*selectedLightMarker);
}

void QXYSeries_connect_selectedLightMarkerChanged(QXYSeries* self, intptr_t slot) {
	QXYSeries::connect(self, static_cast<void (QXYSeries::*)(const QImage&)>(&QXYSeries::selectedLightMarkerChanged), self, [=](const QImage& selectedLightMarker) {
		const QImage& selectedLightMarker_ret = selectedLightMarker;
		// Cast returned reference into pointer
		QImage* sigval1 = const_cast<QImage*>(&selectedLightMarker_ret);
		miqt_exec_callback_QXYSeries_selectedLightMarkerChanged(slot, sigval1);
	});
}

void QXYSeries_bestFitLineVisibilityChanged(QXYSeries* self, bool visible) {
	self->bestFitLineVisibilityChanged(visible);
}

void QXYSeries_connect_bestFitLineVisibilityChanged(QXYSeries* self, intptr_t slot) {
	QXYSeries::connect(self, static_cast<void (QXYSeries::*)(bool)>(&QXYSeries::bestFitLineVisibilityChanged), self, [=](bool visible) {
		bool sigval1 = visible;
		miqt_exec_callback_QXYSeries_bestFitLineVisibilityChanged(slot, sigval1);
	});
}

void QXYSeries_bestFitLinePenChanged(QXYSeries* self, QPen* pen) {
	self->bestFitLinePenChanged(*pen);
}

void QXYSeries_connect_bestFitLinePenChanged(QXYSeries* self, intptr_t slot) {
	QXYSeries::connect(self, static_cast<void (QXYSeries::*)(const QPen&)>(&QXYSeries::bestFitLinePenChanged), self, [=](const QPen& pen) {
		const QPen& pen_ret = pen;
		// Cast returned reference into pointer
		QPen* sigval1 = const_cast<QPen*>(&pen_ret);
		miqt_exec_callback_QXYSeries_bestFitLinePenChanged(slot, sigval1);
	});
}

void QXYSeries_bestFitLineColorChanged(QXYSeries* self, QColor* color) {
	self->bestFitLineColorChanged(*color);
}

void QXYSeries_connect_bestFitLineColorChanged(QXYSeries* self, intptr_t slot) {
	QXYSeries::connect(self, static_cast<void (QXYSeries::*)(const QColor&)>(&QXYSeries::bestFitLineColorChanged), self, [=](const QColor& color) {
		const QColor& color_ret = color;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&color_ret);
		miqt_exec_callback_QXYSeries_bestFitLineColorChanged(slot, sigval1);
	});
}

void QXYSeries_pointsConfigurationChanged(QXYSeries* self, struct miqt_map /* of int to struct miqt_map  of int to QVariant*   */  configuration) {
	QHash<int, QHash<QXYSeries::PointConfiguration, QVariant>> configuration_QMap;
	configuration_QMap.reserve(configuration.len);
	int* configuration_karr = static_cast<int*>(configuration.keys);
	struct miqt_map /* of int to QVariant* */ * configuration_varr = static_cast<struct miqt_map /* of int to QVariant* */ *>(configuration.values);
	for(size_t i = 0; i < configuration.len; ++i) {
		QHash<QXYSeries::PointConfiguration, QVariant> configuration_varr_i_QMap;
		configuration_varr_i_QMap.reserve(configuration_varr[i].len);
		int* configuration_varr_i_karr = static_cast<int*>(configuration_varr[i].keys);
		QVariant** configuration_varr_i_varr = static_cast<QVariant**>(configuration_varr[i].values);
		for(size_t i = 0; i < configuration_varr[i].len; ++i) {
			configuration_varr_i_QMap[static_cast<QXYSeries::PointConfiguration>(configuration_varr_i_karr[i])] = *(configuration_varr_i_varr[i]);
		}
		configuration_QMap[static_cast<int>(configuration_karr[i])] = configuration_varr_i_QMap;
	}
	self->pointsConfigurationChanged(configuration_QMap);
}

void QXYSeries_connect_pointsConfigurationChanged(QXYSeries* self, intptr_t slot) {
	QXYSeries::connect(self, static_cast<void (QXYSeries::*)(const QHash<int, QHash<QXYSeries::PointConfiguration, QVariant>>&)>(&QXYSeries::pointsConfigurationChanged), self, [=](const QHash<int, QHash<QXYSeries::PointConfiguration, QVariant>>& configuration) {
		const QHash<int, QHash<QXYSeries::PointConfiguration, QVariant>>& configuration_ret = configuration;
		// Convert QMap<> from C++ memory to manually-managed C memory
		int* configuration_karr = static_cast<int*>(malloc(sizeof(int) * configuration_ret.size()));
		struct miqt_map /* of int to QVariant* */ * configuration_varr = static_cast<struct miqt_map /* of int to QVariant* */ *>(malloc(sizeof(struct miqt_map /* of int to QVariant* */ ) * configuration_ret.size()));
		int configuration_ctr = 0;
		for (auto configuration_itr = configuration_ret.keyValueBegin(); configuration_itr != configuration_ret.keyValueEnd(); ++configuration_itr) {
			configuration_karr[configuration_ctr] = configuration_itr->first;
			QHash<QXYSeries::PointConfiguration, QVariant> configuration_hashval_ret = configuration_itr->second;
			// Convert QMap<> from C++ memory to manually-managed C memory
			int* configuration_hashval_karr = static_cast<int*>(malloc(sizeof(int) * configuration_hashval_ret.size()));
			QVariant** configuration_hashval_varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * configuration_hashval_ret.size()));
			int configuration_hashval_ctr = 0;
			for (auto configuration_hashval_itr = configuration_hashval_ret.keyValueBegin(); configuration_hashval_itr != configuration_hashval_ret.keyValueEnd(); ++configuration_hashval_itr) {
				QXYSeries::PointConfiguration configuration_hashval_hashkey_ret = configuration_hashval_itr->first;
				configuration_hashval_karr[configuration_hashval_ctr] = static_cast<int>(configuration_hashval_hashkey_ret);
				configuration_hashval_varr[configuration_hashval_ctr] = new QVariant(configuration_hashval_itr->second);
				configuration_hashval_ctr++;
			}
			struct miqt_map configuration_hashval_out;
			configuration_hashval_out.len = configuration_hashval_ret.size();
			configuration_hashval_out.keys = static_cast<void*>(configuration_hashval_karr);
			configuration_hashval_out.values = static_cast<void*>(configuration_hashval_varr);
			configuration_varr[configuration_ctr] = configuration_hashval_out;
			configuration_ctr++;
		}
		struct miqt_map configuration_out;
		configuration_out.len = configuration_ret.size();
		configuration_out.keys = static_cast<void*>(configuration_karr);
		configuration_out.values = static_cast<void*>(configuration_varr);
		struct miqt_map /* of int to struct miqt_map  of int to QVariant*   */  sigval1 = configuration_out;
		miqt_exec_callback_QXYSeries_pointsConfigurationChanged(slot, sigval1);
	});
}

void QXYSeries_markerSizeChanged(QXYSeries* self, double size) {
	self->markerSizeChanged(static_cast<qreal>(size));
}

void QXYSeries_connect_markerSizeChanged(QXYSeries* self, intptr_t slot) {
	QXYSeries::connect(self, static_cast<void (QXYSeries::*)(qreal)>(&QXYSeries::markerSizeChanged), self, [=](qreal size) {
		qreal size_ret = size;
		double sigval1 = static_cast<double>(size_ret);
		miqt_exec_callback_QXYSeries_markerSizeChanged(slot, sigval1);
	});
}

struct miqt_string QXYSeries_tr2(const char* s, const char* c) {
	QString _ret = QXYSeries::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QXYSeries_tr3(const char* s, const char* c, int n) {
	QString _ret = QXYSeries::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QXYSeries_setPointsVisibleWithVisible(QXYSeries* self, bool visible) {
	self->setPointsVisible(visible);
}

void QXYSeries_setPointLabelsVisibleWithVisible(QXYSeries* self, bool visible) {
	self->setPointLabelsVisible(visible);
}

void QXYSeries_setPointLabelsClippingWithEnabled(QXYSeries* self, bool enabled) {
	self->setPointLabelsClipping(enabled);
}

void QXYSeries_setBestFitLineVisibleWithVisible(QXYSeries* self, bool visible) {
	self->setBestFitLineVisible(visible);
}

void QXYSeries_colorBy2(QXYSeries* self, struct miqt_array /* of double */  sourceData, QLinearGradient* gradient) {
	QList<qreal> sourceData_QList;
	sourceData_QList.reserve(sourceData.len);
	double* sourceData_arr = static_cast<double*>(sourceData.data);
	for(size_t i = 0; i < sourceData.len; ++i) {
		sourceData_QList.push_back(static_cast<double>(sourceData_arr[i]));
	}
	self->colorBy(sourceData_QList, *gradient);
}

void QXYSeries_delete(QXYSeries* self) {
	delete self;
}

