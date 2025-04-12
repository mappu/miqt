#include <QAbstractAxis>
#include <QAbstractSeries>
#include <QChart>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qabstractseries.h>
#include "gen_qabstractseries.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QAbstractSeries_nameChanged(intptr_t);
void miqt_exec_callback_QAbstractSeries_visibleChanged(intptr_t);
void miqt_exec_callback_QAbstractSeries_opacityChanged(intptr_t);
void miqt_exec_callback_QAbstractSeries_useOpenGLChanged(intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

void QAbstractSeries_virtbase(QAbstractSeries* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QAbstractSeries_metaObject(const QAbstractSeries* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractSeries_metacast(QAbstractSeries* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractSeries_tr(const char* s) {
	QString _ret = QAbstractSeries::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QAbstractSeries_type(const QAbstractSeries* self) {
	QAbstractSeries::SeriesType _ret = self->type();
	return static_cast<int>(_ret);
}

void QAbstractSeries_setName(QAbstractSeries* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setName(name_QString);
}

struct miqt_string QAbstractSeries_name(const QAbstractSeries* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractSeries_setVisible(QAbstractSeries* self) {
	self->setVisible();
}

bool QAbstractSeries_isVisible(const QAbstractSeries* self) {
	return self->isVisible();
}

double QAbstractSeries_opacity(const QAbstractSeries* self) {
	qreal _ret = self->opacity();
	return static_cast<double>(_ret);
}

void QAbstractSeries_setOpacity(QAbstractSeries* self, double opacity) {
	self->setOpacity(static_cast<qreal>(opacity));
}

void QAbstractSeries_setUseOpenGL(QAbstractSeries* self) {
	self->setUseOpenGL();
}

bool QAbstractSeries_useOpenGL(const QAbstractSeries* self) {
	return self->useOpenGL();
}

QChart* QAbstractSeries_chart(const QAbstractSeries* self) {
	return self->chart();
}

bool QAbstractSeries_attachAxis(QAbstractSeries* self, QAbstractAxis* axis) {
	return self->attachAxis(axis);
}

bool QAbstractSeries_detachAxis(QAbstractSeries* self, QAbstractAxis* axis) {
	return self->detachAxis(axis);
}

struct miqt_array /* of QAbstractAxis* */  QAbstractSeries_attachedAxes(QAbstractSeries* self) {
	QList<QAbstractAxis *> _ret = self->attachedAxes();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAbstractAxis** _arr = static_cast<QAbstractAxis**>(malloc(sizeof(QAbstractAxis*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QAbstractSeries_show(QAbstractSeries* self) {
	self->show();
}

void QAbstractSeries_hide(QAbstractSeries* self) {
	self->hide();
}

void QAbstractSeries_nameChanged(QAbstractSeries* self) {
	self->nameChanged();
}

void QAbstractSeries_connect_nameChanged(QAbstractSeries* self, intptr_t slot) {
	QAbstractSeries::connect(self, static_cast<void (QAbstractSeries::*)()>(&QAbstractSeries::nameChanged), self, [=]() {
		miqt_exec_callback_QAbstractSeries_nameChanged(slot);
	});
}

void QAbstractSeries_visibleChanged(QAbstractSeries* self) {
	self->visibleChanged();
}

void QAbstractSeries_connect_visibleChanged(QAbstractSeries* self, intptr_t slot) {
	QAbstractSeries::connect(self, static_cast<void (QAbstractSeries::*)()>(&QAbstractSeries::visibleChanged), self, [=]() {
		miqt_exec_callback_QAbstractSeries_visibleChanged(slot);
	});
}

void QAbstractSeries_opacityChanged(QAbstractSeries* self) {
	self->opacityChanged();
}

void QAbstractSeries_connect_opacityChanged(QAbstractSeries* self, intptr_t slot) {
	QAbstractSeries::connect(self, static_cast<void (QAbstractSeries::*)()>(&QAbstractSeries::opacityChanged), self, [=]() {
		miqt_exec_callback_QAbstractSeries_opacityChanged(slot);
	});
}

void QAbstractSeries_useOpenGLChanged(QAbstractSeries* self) {
	self->useOpenGLChanged();
}

void QAbstractSeries_connect_useOpenGLChanged(QAbstractSeries* self, intptr_t slot) {
	QAbstractSeries::connect(self, static_cast<void (QAbstractSeries::*)()>(&QAbstractSeries::useOpenGLChanged), self, [=]() {
		miqt_exec_callback_QAbstractSeries_useOpenGLChanged(slot);
	});
}

struct miqt_string QAbstractSeries_tr2(const char* s, const char* c) {
	QString _ret = QAbstractSeries::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractSeries_tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractSeries::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractSeries_setVisibleWithVisible(QAbstractSeries* self, bool visible) {
	self->setVisible(visible);
}

void QAbstractSeries_setUseOpenGLWithEnable(QAbstractSeries* self, bool enable) {
	self->setUseOpenGL(enable);
}

void QAbstractSeries_delete(QAbstractSeries* self) {
	delete self;
}

