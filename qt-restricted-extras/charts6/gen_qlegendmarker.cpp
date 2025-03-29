#include <QAbstractSeries>
#include <QBrush>
#include <QFont>
#include <QLegendMarker>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPen>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qlegendmarker.h>
#include "gen_qlegendmarker.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QLegendMarker_clicked(intptr_t);
void miqt_exec_callback_QLegendMarker_hovered(intptr_t, bool);
void miqt_exec_callback_QLegendMarker_labelChanged(intptr_t);
void miqt_exec_callback_QLegendMarker_labelBrushChanged(intptr_t);
void miqt_exec_callback_QLegendMarker_fontChanged(intptr_t);
void miqt_exec_callback_QLegendMarker_penChanged(intptr_t);
void miqt_exec_callback_QLegendMarker_brushChanged(intptr_t);
void miqt_exec_callback_QLegendMarker_visibleChanged(intptr_t);
void miqt_exec_callback_QLegendMarker_shapeChanged(intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

void QLegendMarker_virtbase(QLegendMarker* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QLegendMarker_metaObject(const QLegendMarker* self) {
	return (QMetaObject*) self->metaObject();
}

void* QLegendMarker_metacast(QLegendMarker* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QLegendMarker_tr(const char* s) {
	QString _ret = QLegendMarker::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QLegendMarker_type(QLegendMarker* self) {
	QLegendMarker::LegendMarkerType _ret = self->type();
	return static_cast<int>(_ret);
}

struct miqt_string QLegendMarker_label(const QLegendMarker* self) {
	QString _ret = self->label();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QLegendMarker_setLabel(QLegendMarker* self, struct miqt_string label) {
	QString label_QString = QString::fromUtf8(label.data, label.len);
	self->setLabel(label_QString);
}

QBrush* QLegendMarker_labelBrush(const QLegendMarker* self) {
	return new QBrush(self->labelBrush());
}

void QLegendMarker_setLabelBrush(QLegendMarker* self, QBrush* brush) {
	self->setLabelBrush(*brush);
}

QFont* QLegendMarker_font(const QLegendMarker* self) {
	return new QFont(self->font());
}

void QLegendMarker_setFont(QLegendMarker* self, QFont* font) {
	self->setFont(*font);
}

QPen* QLegendMarker_pen(const QLegendMarker* self) {
	return new QPen(self->pen());
}

void QLegendMarker_setPen(QLegendMarker* self, QPen* pen) {
	self->setPen(*pen);
}

QBrush* QLegendMarker_brush(const QLegendMarker* self) {
	return new QBrush(self->brush());
}

void QLegendMarker_setBrush(QLegendMarker* self, QBrush* brush) {
	self->setBrush(*brush);
}

bool QLegendMarker_isVisible(const QLegendMarker* self) {
	return self->isVisible();
}

void QLegendMarker_setVisible(QLegendMarker* self, bool visible) {
	self->setVisible(visible);
}

int QLegendMarker_shape(const QLegendMarker* self) {
	QLegend::MarkerShape _ret = self->shape();
	return static_cast<int>(_ret);
}

void QLegendMarker_setShape(QLegendMarker* self, int shape) {
	self->setShape(static_cast<QLegend::MarkerShape>(shape));
}

QAbstractSeries* QLegendMarker_series(QLegendMarker* self) {
	return self->series();
}

void QLegendMarker_clicked(QLegendMarker* self) {
	self->clicked();
}

void QLegendMarker_connect_clicked(QLegendMarker* self, intptr_t slot) {
	QLegendMarker::connect(self, static_cast<void (QLegendMarker::*)()>(&QLegendMarker::clicked), self, [=]() {
		miqt_exec_callback_QLegendMarker_clicked(slot);
	});
}

void QLegendMarker_hovered(QLegendMarker* self, bool status) {
	self->hovered(status);
}

void QLegendMarker_connect_hovered(QLegendMarker* self, intptr_t slot) {
	QLegendMarker::connect(self, static_cast<void (QLegendMarker::*)(bool)>(&QLegendMarker::hovered), self, [=](bool status) {
		bool sigval1 = status;
		miqt_exec_callback_QLegendMarker_hovered(slot, sigval1);
	});
}

void QLegendMarker_labelChanged(QLegendMarker* self) {
	self->labelChanged();
}

void QLegendMarker_connect_labelChanged(QLegendMarker* self, intptr_t slot) {
	QLegendMarker::connect(self, static_cast<void (QLegendMarker::*)()>(&QLegendMarker::labelChanged), self, [=]() {
		miqt_exec_callback_QLegendMarker_labelChanged(slot);
	});
}

void QLegendMarker_labelBrushChanged(QLegendMarker* self) {
	self->labelBrushChanged();
}

void QLegendMarker_connect_labelBrushChanged(QLegendMarker* self, intptr_t slot) {
	QLegendMarker::connect(self, static_cast<void (QLegendMarker::*)()>(&QLegendMarker::labelBrushChanged), self, [=]() {
		miqt_exec_callback_QLegendMarker_labelBrushChanged(slot);
	});
}

void QLegendMarker_fontChanged(QLegendMarker* self) {
	self->fontChanged();
}

void QLegendMarker_connect_fontChanged(QLegendMarker* self, intptr_t slot) {
	QLegendMarker::connect(self, static_cast<void (QLegendMarker::*)()>(&QLegendMarker::fontChanged), self, [=]() {
		miqt_exec_callback_QLegendMarker_fontChanged(slot);
	});
}

void QLegendMarker_penChanged(QLegendMarker* self) {
	self->penChanged();
}

void QLegendMarker_connect_penChanged(QLegendMarker* self, intptr_t slot) {
	QLegendMarker::connect(self, static_cast<void (QLegendMarker::*)()>(&QLegendMarker::penChanged), self, [=]() {
		miqt_exec_callback_QLegendMarker_penChanged(slot);
	});
}

void QLegendMarker_brushChanged(QLegendMarker* self) {
	self->brushChanged();
}

void QLegendMarker_connect_brushChanged(QLegendMarker* self, intptr_t slot) {
	QLegendMarker::connect(self, static_cast<void (QLegendMarker::*)()>(&QLegendMarker::brushChanged), self, [=]() {
		miqt_exec_callback_QLegendMarker_brushChanged(slot);
	});
}

void QLegendMarker_visibleChanged(QLegendMarker* self) {
	self->visibleChanged();
}

void QLegendMarker_connect_visibleChanged(QLegendMarker* self, intptr_t slot) {
	QLegendMarker::connect(self, static_cast<void (QLegendMarker::*)()>(&QLegendMarker::visibleChanged), self, [=]() {
		miqt_exec_callback_QLegendMarker_visibleChanged(slot);
	});
}

void QLegendMarker_shapeChanged(QLegendMarker* self) {
	self->shapeChanged();
}

void QLegendMarker_connect_shapeChanged(QLegendMarker* self, intptr_t slot) {
	QLegendMarker::connect(self, static_cast<void (QLegendMarker::*)()>(&QLegendMarker::shapeChanged), self, [=]() {
		miqt_exec_callback_QLegendMarker_shapeChanged(slot);
	});
}

struct miqt_string QLegendMarker_tr2(const char* s, const char* c) {
	QString _ret = QLegendMarker::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLegendMarker_tr3(const char* s, const char* c, int n) {
	QString _ret = QLegendMarker::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QLegendMarker_delete(QLegendMarker* self) {
	delete self;
}

