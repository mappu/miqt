#include <QGraphicsItem>
#include <QGraphicsItemAnimation>
#include <QList>
#include <QMatrix>
#include <QMetaObject>
#include <QObject>
#include <QPointF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimeLine>
#include <QTransform>
#include <qgraphicsitemanimation.h>
#include "gen_qgraphicsitemanimation.h"
#include "_cgo_export.h"

QGraphicsItemAnimation* QGraphicsItemAnimation_new() {
	return new QGraphicsItemAnimation();
}

QGraphicsItemAnimation* QGraphicsItemAnimation_new2(QObject* parent) {
	return new QGraphicsItemAnimation(parent);
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

struct miqt_string QGraphicsItemAnimation_TrUtf8(const char* s) {
	QString _ret = QGraphicsItemAnimation::trUtf8(s);
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

QMatrix* QGraphicsItemAnimation_MatrixAt(const QGraphicsItemAnimation* self, double step) {
	return new QMatrix(self->matrixAt(static_cast<qreal>(step)));
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

void QGraphicsItemAnimation_Reset(QGraphicsItemAnimation* self) {
	self->reset();
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

struct miqt_string QGraphicsItemAnimation_TrUtf82(const char* s, const char* c) {
	QString _ret = QGraphicsItemAnimation::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsItemAnimation_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QGraphicsItemAnimation::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsItemAnimation_Delete(QGraphicsItemAnimation* self) {
	delete self;
}

