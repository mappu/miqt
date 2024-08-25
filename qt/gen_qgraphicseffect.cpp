#include "gen_qgraphicseffect.h"
#include "qgraphicseffect.h"

#include <QBrush>
#include <QColor>
#include <QGraphicsBlurEffect>
#include <QGraphicsColorizeEffect>
#include <QGraphicsDropShadowEffect>
#include <QGraphicsEffect>
#include <QGraphicsOpacityEffect>
#include <QMetaObject>
#include <QObject>
#include <QPointF>
#include <QRectF>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QGraphicsEffect_MetaObject(QGraphicsEffect* self) {
	return (QMetaObject*) self->metaObject();
}

void QGraphicsEffect_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsEffect::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsEffect_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsEffect::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QRectF* QGraphicsEffect_BoundingRectFor(QGraphicsEffect* self, QRectF* sourceRect) {
	QRectF ret = self->boundingRectFor(*sourceRect);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QRectF* QGraphicsEffect_BoundingRect(QGraphicsEffect* self) {
	QRectF ret = self->boundingRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

bool QGraphicsEffect_IsEnabled(QGraphicsEffect* self) {
	return self->isEnabled();
}

void QGraphicsEffect_SetEnabled(QGraphicsEffect* self, bool enable) {
	self->setEnabled(enable);
}

void QGraphicsEffect_Update(QGraphicsEffect* self) {
	self->update();
}

void QGraphicsEffect_EnabledChanged(QGraphicsEffect* self, bool enabled) {
	self->enabledChanged(enabled);
}

void QGraphicsEffect_connect_EnabledChanged(QGraphicsEffect* self, void* slot) {
	QGraphicsEffect::connect(self, static_cast<void (QGraphicsEffect::*)(bool)>(&QGraphicsEffect::enabledChanged), self, [=](bool enabled) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QGraphicsEffect_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsEffect::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsEffect_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsEffect::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsEffect_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsEffect::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsEffect_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsEffect::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsEffect_Delete(QGraphicsEffect* self) {
	delete self;
}

QGraphicsColorizeEffect* QGraphicsColorizeEffect_new() {
	return new QGraphicsColorizeEffect();
}

QGraphicsColorizeEffect* QGraphicsColorizeEffect_new2(QObject* parent) {
	return new QGraphicsColorizeEffect(parent);
}

QMetaObject* QGraphicsColorizeEffect_MetaObject(QGraphicsColorizeEffect* self) {
	return (QMetaObject*) self->metaObject();
}

void QGraphicsColorizeEffect_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsColorizeEffect::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsColorizeEffect_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsColorizeEffect::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QColor* QGraphicsColorizeEffect_Color(QGraphicsColorizeEffect* self) {
	QColor ret = self->color();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

double QGraphicsColorizeEffect_Strength(QGraphicsColorizeEffect* self) {
	return self->strength();
}

void QGraphicsColorizeEffect_SetColor(QGraphicsColorizeEffect* self, QColor* c) {
	self->setColor(*c);
}

void QGraphicsColorizeEffect_SetStrength(QGraphicsColorizeEffect* self, double strength) {
	self->setStrength(static_cast<qreal>(strength));
}

void QGraphicsColorizeEffect_ColorChanged(QGraphicsColorizeEffect* self, QColor* color) {
	self->colorChanged(*color);
}

void QGraphicsColorizeEffect_connect_ColorChanged(QGraphicsColorizeEffect* self, void* slot) {
	QGraphicsColorizeEffect::connect(self, static_cast<void (QGraphicsColorizeEffect::*)(const QColor&)>(&QGraphicsColorizeEffect::colorChanged), self, [=](const QColor& color) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QGraphicsColorizeEffect_StrengthChanged(QGraphicsColorizeEffect* self, double strength) {
	self->strengthChanged(static_cast<qreal>(strength));
}

void QGraphicsColorizeEffect_connect_StrengthChanged(QGraphicsColorizeEffect* self, void* slot) {
	QGraphicsColorizeEffect::connect(self, static_cast<void (QGraphicsColorizeEffect::*)(qreal)>(&QGraphicsColorizeEffect::strengthChanged), self, [=](qreal strength) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QGraphicsColorizeEffect_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsColorizeEffect::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsColorizeEffect_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsColorizeEffect::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsColorizeEffect_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsColorizeEffect::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsColorizeEffect_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsColorizeEffect::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsColorizeEffect_Delete(QGraphicsColorizeEffect* self) {
	delete self;
}

QGraphicsBlurEffect* QGraphicsBlurEffect_new() {
	return new QGraphicsBlurEffect();
}

QGraphicsBlurEffect* QGraphicsBlurEffect_new2(QObject* parent) {
	return new QGraphicsBlurEffect(parent);
}

QMetaObject* QGraphicsBlurEffect_MetaObject(QGraphicsBlurEffect* self) {
	return (QMetaObject*) self->metaObject();
}

void QGraphicsBlurEffect_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsBlurEffect::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsBlurEffect_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsBlurEffect::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QRectF* QGraphicsBlurEffect_BoundingRectFor(QGraphicsBlurEffect* self, QRectF* rect) {
	QRectF ret = self->boundingRectFor(*rect);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

double QGraphicsBlurEffect_BlurRadius(QGraphicsBlurEffect* self) {
	return self->blurRadius();
}

void QGraphicsBlurEffect_SetBlurRadius(QGraphicsBlurEffect* self, double blurRadius) {
	self->setBlurRadius(static_cast<qreal>(blurRadius));
}

void QGraphicsBlurEffect_BlurRadiusChanged(QGraphicsBlurEffect* self, double blurRadius) {
	self->blurRadiusChanged(static_cast<qreal>(blurRadius));
}

void QGraphicsBlurEffect_connect_BlurRadiusChanged(QGraphicsBlurEffect* self, void* slot) {
	QGraphicsBlurEffect::connect(self, static_cast<void (QGraphicsBlurEffect::*)(qreal)>(&QGraphicsBlurEffect::blurRadiusChanged), self, [=](qreal blurRadius) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QGraphicsBlurEffect_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsBlurEffect::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsBlurEffect_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsBlurEffect::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsBlurEffect_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsBlurEffect::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsBlurEffect_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsBlurEffect::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsBlurEffect_Delete(QGraphicsBlurEffect* self) {
	delete self;
}

QGraphicsDropShadowEffect* QGraphicsDropShadowEffect_new() {
	return new QGraphicsDropShadowEffect();
}

QGraphicsDropShadowEffect* QGraphicsDropShadowEffect_new2(QObject* parent) {
	return new QGraphicsDropShadowEffect(parent);
}

QMetaObject* QGraphicsDropShadowEffect_MetaObject(QGraphicsDropShadowEffect* self) {
	return (QMetaObject*) self->metaObject();
}

void QGraphicsDropShadowEffect_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsDropShadowEffect::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsDropShadowEffect_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsDropShadowEffect::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QRectF* QGraphicsDropShadowEffect_BoundingRectFor(QGraphicsDropShadowEffect* self, QRectF* rect) {
	QRectF ret = self->boundingRectFor(*rect);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QPointF* QGraphicsDropShadowEffect_Offset(QGraphicsDropShadowEffect* self) {
	QPointF ret = self->offset();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

double QGraphicsDropShadowEffect_XOffset(QGraphicsDropShadowEffect* self) {
	return self->xOffset();
}

double QGraphicsDropShadowEffect_YOffset(QGraphicsDropShadowEffect* self) {
	return self->yOffset();
}

double QGraphicsDropShadowEffect_BlurRadius(QGraphicsDropShadowEffect* self) {
	return self->blurRadius();
}

QColor* QGraphicsDropShadowEffect_Color(QGraphicsDropShadowEffect* self) {
	QColor ret = self->color();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

void QGraphicsDropShadowEffect_SetOffset(QGraphicsDropShadowEffect* self, QPointF* ofs) {
	self->setOffset(*ofs);
}

void QGraphicsDropShadowEffect_SetOffset2(QGraphicsDropShadowEffect* self, double dx, double dy) {
	self->setOffset(static_cast<qreal>(dx), static_cast<qreal>(dy));
}

void QGraphicsDropShadowEffect_SetOffsetWithQreal(QGraphicsDropShadowEffect* self, double d) {
	self->setOffset(static_cast<qreal>(d));
}

void QGraphicsDropShadowEffect_SetXOffset(QGraphicsDropShadowEffect* self, double dx) {
	self->setXOffset(static_cast<qreal>(dx));
}

void QGraphicsDropShadowEffect_SetYOffset(QGraphicsDropShadowEffect* self, double dy) {
	self->setYOffset(static_cast<qreal>(dy));
}

void QGraphicsDropShadowEffect_SetBlurRadius(QGraphicsDropShadowEffect* self, double blurRadius) {
	self->setBlurRadius(static_cast<qreal>(blurRadius));
}

void QGraphicsDropShadowEffect_SetColor(QGraphicsDropShadowEffect* self, QColor* color) {
	self->setColor(*color);
}

void QGraphicsDropShadowEffect_OffsetChanged(QGraphicsDropShadowEffect* self, QPointF* offset) {
	self->offsetChanged(*offset);
}

void QGraphicsDropShadowEffect_connect_OffsetChanged(QGraphicsDropShadowEffect* self, void* slot) {
	QGraphicsDropShadowEffect::connect(self, static_cast<void (QGraphicsDropShadowEffect::*)(const QPointF&)>(&QGraphicsDropShadowEffect::offsetChanged), self, [=](const QPointF& offset) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QGraphicsDropShadowEffect_BlurRadiusChanged(QGraphicsDropShadowEffect* self, double blurRadius) {
	self->blurRadiusChanged(static_cast<qreal>(blurRadius));
}

void QGraphicsDropShadowEffect_connect_BlurRadiusChanged(QGraphicsDropShadowEffect* self, void* slot) {
	QGraphicsDropShadowEffect::connect(self, static_cast<void (QGraphicsDropShadowEffect::*)(qreal)>(&QGraphicsDropShadowEffect::blurRadiusChanged), self, [=](qreal blurRadius) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QGraphicsDropShadowEffect_ColorChanged(QGraphicsDropShadowEffect* self, QColor* color) {
	self->colorChanged(*color);
}

void QGraphicsDropShadowEffect_connect_ColorChanged(QGraphicsDropShadowEffect* self, void* slot) {
	QGraphicsDropShadowEffect::connect(self, static_cast<void (QGraphicsDropShadowEffect::*)(const QColor&)>(&QGraphicsDropShadowEffect::colorChanged), self, [=](const QColor& color) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QGraphicsDropShadowEffect_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsDropShadowEffect::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsDropShadowEffect_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsDropShadowEffect::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsDropShadowEffect_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsDropShadowEffect::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsDropShadowEffect_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsDropShadowEffect::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsDropShadowEffect_Delete(QGraphicsDropShadowEffect* self) {
	delete self;
}

QGraphicsOpacityEffect* QGraphicsOpacityEffect_new() {
	return new QGraphicsOpacityEffect();
}

QGraphicsOpacityEffect* QGraphicsOpacityEffect_new2(QObject* parent) {
	return new QGraphicsOpacityEffect(parent);
}

QMetaObject* QGraphicsOpacityEffect_MetaObject(QGraphicsOpacityEffect* self) {
	return (QMetaObject*) self->metaObject();
}

void QGraphicsOpacityEffect_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsOpacityEffect::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsOpacityEffect_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsOpacityEffect::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

double QGraphicsOpacityEffect_Opacity(QGraphicsOpacityEffect* self) {
	return self->opacity();
}

QBrush* QGraphicsOpacityEffect_OpacityMask(QGraphicsOpacityEffect* self) {
	QBrush ret = self->opacityMask();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBrush*>(new QBrush(ret));
}

void QGraphicsOpacityEffect_SetOpacity(QGraphicsOpacityEffect* self, double opacity) {
	self->setOpacity(static_cast<qreal>(opacity));
}

void QGraphicsOpacityEffect_SetOpacityMask(QGraphicsOpacityEffect* self, QBrush* mask) {
	self->setOpacityMask(*mask);
}

void QGraphicsOpacityEffect_OpacityChanged(QGraphicsOpacityEffect* self, double opacity) {
	self->opacityChanged(static_cast<qreal>(opacity));
}

void QGraphicsOpacityEffect_connect_OpacityChanged(QGraphicsOpacityEffect* self, void* slot) {
	QGraphicsOpacityEffect::connect(self, static_cast<void (QGraphicsOpacityEffect::*)(qreal)>(&QGraphicsOpacityEffect::opacityChanged), self, [=](qreal opacity) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QGraphicsOpacityEffect_OpacityMaskChanged(QGraphicsOpacityEffect* self, QBrush* mask) {
	self->opacityMaskChanged(*mask);
}

void QGraphicsOpacityEffect_connect_OpacityMaskChanged(QGraphicsOpacityEffect* self, void* slot) {
	QGraphicsOpacityEffect::connect(self, static_cast<void (QGraphicsOpacityEffect::*)(const QBrush&)>(&QGraphicsOpacityEffect::opacityMaskChanged), self, [=](const QBrush& mask) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QGraphicsOpacityEffect_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsOpacityEffect::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsOpacityEffect_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsOpacityEffect::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsOpacityEffect_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsOpacityEffect::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsOpacityEffect_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsOpacityEffect::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsOpacityEffect_Delete(QGraphicsOpacityEffect* self) {
	delete self;
}

