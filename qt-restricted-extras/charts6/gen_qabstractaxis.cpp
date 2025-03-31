#include <QAbstractAxis>
#include <QBrush>
#include <QColor>
#include <QFont>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPen>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qabstractaxis.h>
#include "gen_qabstractaxis.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QAbstractAxis_visibleChanged(intptr_t, bool);
void miqt_exec_callback_QAbstractAxis_linePenChanged(intptr_t, QPen*);
void miqt_exec_callback_QAbstractAxis_lineVisibleChanged(intptr_t, bool);
void miqt_exec_callback_QAbstractAxis_labelsVisibleChanged(intptr_t, bool);
void miqt_exec_callback_QAbstractAxis_labelsBrushChanged(intptr_t, QBrush*);
void miqt_exec_callback_QAbstractAxis_labelsFontChanged(intptr_t, QFont*);
void miqt_exec_callback_QAbstractAxis_labelsAngleChanged(intptr_t, int);
void miqt_exec_callback_QAbstractAxis_gridLinePenChanged(intptr_t, QPen*);
void miqt_exec_callback_QAbstractAxis_gridVisibleChanged(intptr_t, bool);
void miqt_exec_callback_QAbstractAxis_minorGridVisibleChanged(intptr_t, bool);
void miqt_exec_callback_QAbstractAxis_minorGridLinePenChanged(intptr_t, QPen*);
void miqt_exec_callback_QAbstractAxis_gridLineColorChanged(intptr_t, QColor*);
void miqt_exec_callback_QAbstractAxis_minorGridLineColorChanged(intptr_t, QColor*);
void miqt_exec_callback_QAbstractAxis_colorChanged(intptr_t, QColor*);
void miqt_exec_callback_QAbstractAxis_labelsColorChanged(intptr_t, QColor*);
void miqt_exec_callback_QAbstractAxis_titleTextChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QAbstractAxis_titleBrushChanged(intptr_t, QBrush*);
void miqt_exec_callback_QAbstractAxis_titleVisibleChanged(intptr_t, bool);
void miqt_exec_callback_QAbstractAxis_titleFontChanged(intptr_t, QFont*);
void miqt_exec_callback_QAbstractAxis_shadesVisibleChanged(intptr_t, bool);
void miqt_exec_callback_QAbstractAxis_shadesColorChanged(intptr_t, QColor*);
void miqt_exec_callback_QAbstractAxis_shadesBorderColorChanged(intptr_t, QColor*);
void miqt_exec_callback_QAbstractAxis_shadesPenChanged(intptr_t, QPen*);
void miqt_exec_callback_QAbstractAxis_shadesBrushChanged(intptr_t, QBrush*);
void miqt_exec_callback_QAbstractAxis_reverseChanged(intptr_t, bool);
void miqt_exec_callback_QAbstractAxis_labelsEditableChanged(intptr_t, bool);
void miqt_exec_callback_QAbstractAxis_labelsTruncatedChanged(intptr_t, bool);
void miqt_exec_callback_QAbstractAxis_truncateLabelsChanged(intptr_t, bool);
#ifdef __cplusplus
} /* extern C */
#endif

void QAbstractAxis_virtbase(QAbstractAxis* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QAbstractAxis_metaObject(const QAbstractAxis* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractAxis_metacast(QAbstractAxis* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractAxis_tr(const char* s) {
	QString _ret = QAbstractAxis::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QAbstractAxis_type(const QAbstractAxis* self) {
	QAbstractAxis::AxisType _ret = self->type();
	return static_cast<int>(_ret);
}

bool QAbstractAxis_isVisible(const QAbstractAxis* self) {
	return self->isVisible();
}

void QAbstractAxis_setVisible(QAbstractAxis* self) {
	self->setVisible();
}

void QAbstractAxis_show(QAbstractAxis* self) {
	self->show();
}

void QAbstractAxis_hide(QAbstractAxis* self) {
	self->hide();
}

bool QAbstractAxis_isLineVisible(const QAbstractAxis* self) {
	return self->isLineVisible();
}

void QAbstractAxis_setLineVisible(QAbstractAxis* self) {
	self->setLineVisible();
}

void QAbstractAxis_setLinePen(QAbstractAxis* self, QPen* pen) {
	self->setLinePen(*pen);
}

QPen* QAbstractAxis_linePen(const QAbstractAxis* self) {
	return new QPen(self->linePen());
}

void QAbstractAxis_setLinePenColor(QAbstractAxis* self, QColor* color) {
	self->setLinePenColor(*color);
}

QColor* QAbstractAxis_linePenColor(const QAbstractAxis* self) {
	return new QColor(self->linePenColor());
}

bool QAbstractAxis_isGridLineVisible(const QAbstractAxis* self) {
	return self->isGridLineVisible();
}

void QAbstractAxis_setGridLineVisible(QAbstractAxis* self) {
	self->setGridLineVisible();
}

void QAbstractAxis_setGridLinePen(QAbstractAxis* self, QPen* pen) {
	self->setGridLinePen(*pen);
}

QPen* QAbstractAxis_gridLinePen(const QAbstractAxis* self) {
	return new QPen(self->gridLinePen());
}

bool QAbstractAxis_isMinorGridLineVisible(const QAbstractAxis* self) {
	return self->isMinorGridLineVisible();
}

void QAbstractAxis_setMinorGridLineVisible(QAbstractAxis* self) {
	self->setMinorGridLineVisible();
}

void QAbstractAxis_setMinorGridLinePen(QAbstractAxis* self, QPen* pen) {
	self->setMinorGridLinePen(*pen);
}

QPen* QAbstractAxis_minorGridLinePen(const QAbstractAxis* self) {
	return new QPen(self->minorGridLinePen());
}

void QAbstractAxis_setGridLineColor(QAbstractAxis* self, QColor* color) {
	self->setGridLineColor(*color);
}

QColor* QAbstractAxis_gridLineColor(QAbstractAxis* self) {
	return new QColor(self->gridLineColor());
}

void QAbstractAxis_setMinorGridLineColor(QAbstractAxis* self, QColor* color) {
	self->setMinorGridLineColor(*color);
}

QColor* QAbstractAxis_minorGridLineColor(QAbstractAxis* self) {
	return new QColor(self->minorGridLineColor());
}

bool QAbstractAxis_labelsVisible(const QAbstractAxis* self) {
	return self->labelsVisible();
}

void QAbstractAxis_setLabelsVisible(QAbstractAxis* self) {
	self->setLabelsVisible();
}

void QAbstractAxis_setLabelsBrush(QAbstractAxis* self, QBrush* brush) {
	self->setLabelsBrush(*brush);
}

QBrush* QAbstractAxis_labelsBrush(const QAbstractAxis* self) {
	return new QBrush(self->labelsBrush());
}

void QAbstractAxis_setLabelsFont(QAbstractAxis* self, QFont* font) {
	self->setLabelsFont(*font);
}

QFont* QAbstractAxis_labelsFont(const QAbstractAxis* self) {
	return new QFont(self->labelsFont());
}

void QAbstractAxis_setLabelsAngle(QAbstractAxis* self, int angle) {
	self->setLabelsAngle(static_cast<int>(angle));
}

int QAbstractAxis_labelsAngle(const QAbstractAxis* self) {
	return self->labelsAngle();
}

void QAbstractAxis_setLabelsColor(QAbstractAxis* self, QColor* color) {
	self->setLabelsColor(*color);
}

QColor* QAbstractAxis_labelsColor(const QAbstractAxis* self) {
	return new QColor(self->labelsColor());
}

bool QAbstractAxis_isTitleVisible(const QAbstractAxis* self) {
	return self->isTitleVisible();
}

void QAbstractAxis_setTitleVisible(QAbstractAxis* self) {
	self->setTitleVisible();
}

void QAbstractAxis_setTitleBrush(QAbstractAxis* self, QBrush* brush) {
	self->setTitleBrush(*brush);
}

QBrush* QAbstractAxis_titleBrush(const QAbstractAxis* self) {
	return new QBrush(self->titleBrush());
}

void QAbstractAxis_setTitleFont(QAbstractAxis* self, QFont* font) {
	self->setTitleFont(*font);
}

QFont* QAbstractAxis_titleFont(const QAbstractAxis* self) {
	return new QFont(self->titleFont());
}

void QAbstractAxis_setTitleText(QAbstractAxis* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	self->setTitleText(title_QString);
}

struct miqt_string QAbstractAxis_titleText(const QAbstractAxis* self) {
	QString _ret = self->titleText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAbstractAxis_shadesVisible(const QAbstractAxis* self) {
	return self->shadesVisible();
}

void QAbstractAxis_setShadesVisible(QAbstractAxis* self) {
	self->setShadesVisible();
}

void QAbstractAxis_setShadesPen(QAbstractAxis* self, QPen* pen) {
	self->setShadesPen(*pen);
}

QPen* QAbstractAxis_shadesPen(const QAbstractAxis* self) {
	return new QPen(self->shadesPen());
}

void QAbstractAxis_setShadesBrush(QAbstractAxis* self, QBrush* brush) {
	self->setShadesBrush(*brush);
}

QBrush* QAbstractAxis_shadesBrush(const QAbstractAxis* self) {
	return new QBrush(self->shadesBrush());
}

void QAbstractAxis_setShadesColor(QAbstractAxis* self, QColor* color) {
	self->setShadesColor(*color);
}

QColor* QAbstractAxis_shadesColor(const QAbstractAxis* self) {
	return new QColor(self->shadesColor());
}

void QAbstractAxis_setShadesBorderColor(QAbstractAxis* self, QColor* color) {
	self->setShadesBorderColor(*color);
}

QColor* QAbstractAxis_shadesBorderColor(const QAbstractAxis* self) {
	return new QColor(self->shadesBorderColor());
}

int QAbstractAxis_orientation(const QAbstractAxis* self) {
	Qt::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

int QAbstractAxis_alignment(const QAbstractAxis* self) {
	Qt::Alignment _ret = self->alignment();
	return static_cast<int>(_ret);
}

void QAbstractAxis_setMin(QAbstractAxis* self, QVariant* min) {
	self->setMin(*min);
}

void QAbstractAxis_setMax(QAbstractAxis* self, QVariant* max) {
	self->setMax(*max);
}

void QAbstractAxis_setRange(QAbstractAxis* self, QVariant* min, QVariant* max) {
	self->setRange(*min, *max);
}

void QAbstractAxis_setReverse(QAbstractAxis* self) {
	self->setReverse();
}

bool QAbstractAxis_isReverse(const QAbstractAxis* self) {
	return self->isReverse();
}

void QAbstractAxis_setLabelsEditable(QAbstractAxis* self) {
	self->setLabelsEditable();
}

bool QAbstractAxis_labelsEditable(const QAbstractAxis* self) {
	return self->labelsEditable();
}

bool QAbstractAxis_labelsTruncated(const QAbstractAxis* self) {
	return self->labelsTruncated();
}

void QAbstractAxis_setTruncateLabels(QAbstractAxis* self) {
	self->setTruncateLabels();
}

bool QAbstractAxis_truncateLabels(const QAbstractAxis* self) {
	return self->truncateLabels();
}

void QAbstractAxis_visibleChanged(QAbstractAxis* self, bool visible) {
	self->visibleChanged(visible);
}

void QAbstractAxis_connect_visibleChanged(QAbstractAxis* self, intptr_t slot) {
	QAbstractAxis::connect(self, static_cast<void (QAbstractAxis::*)(bool)>(&QAbstractAxis::visibleChanged), self, [=](bool visible) {
		bool sigval1 = visible;
		miqt_exec_callback_QAbstractAxis_visibleChanged(slot, sigval1);
	});
}

void QAbstractAxis_linePenChanged(QAbstractAxis* self, QPen* pen) {
	self->linePenChanged(*pen);
}

void QAbstractAxis_connect_linePenChanged(QAbstractAxis* self, intptr_t slot) {
	QAbstractAxis::connect(self, static_cast<void (QAbstractAxis::*)(const QPen&)>(&QAbstractAxis::linePenChanged), self, [=](const QPen& pen) {
		const QPen& pen_ret = pen;
		// Cast returned reference into pointer
		QPen* sigval1 = const_cast<QPen*>(&pen_ret);
		miqt_exec_callback_QAbstractAxis_linePenChanged(slot, sigval1);
	});
}

void QAbstractAxis_lineVisibleChanged(QAbstractAxis* self, bool visible) {
	self->lineVisibleChanged(visible);
}

void QAbstractAxis_connect_lineVisibleChanged(QAbstractAxis* self, intptr_t slot) {
	QAbstractAxis::connect(self, static_cast<void (QAbstractAxis::*)(bool)>(&QAbstractAxis::lineVisibleChanged), self, [=](bool visible) {
		bool sigval1 = visible;
		miqt_exec_callback_QAbstractAxis_lineVisibleChanged(slot, sigval1);
	});
}

void QAbstractAxis_labelsVisibleChanged(QAbstractAxis* self, bool visible) {
	self->labelsVisibleChanged(visible);
}

void QAbstractAxis_connect_labelsVisibleChanged(QAbstractAxis* self, intptr_t slot) {
	QAbstractAxis::connect(self, static_cast<void (QAbstractAxis::*)(bool)>(&QAbstractAxis::labelsVisibleChanged), self, [=](bool visible) {
		bool sigval1 = visible;
		miqt_exec_callback_QAbstractAxis_labelsVisibleChanged(slot, sigval1);
	});
}

void QAbstractAxis_labelsBrushChanged(QAbstractAxis* self, QBrush* brush) {
	self->labelsBrushChanged(*brush);
}

void QAbstractAxis_connect_labelsBrushChanged(QAbstractAxis* self, intptr_t slot) {
	QAbstractAxis::connect(self, static_cast<void (QAbstractAxis::*)(const QBrush&)>(&QAbstractAxis::labelsBrushChanged), self, [=](const QBrush& brush) {
		const QBrush& brush_ret = brush;
		// Cast returned reference into pointer
		QBrush* sigval1 = const_cast<QBrush*>(&brush_ret);
		miqt_exec_callback_QAbstractAxis_labelsBrushChanged(slot, sigval1);
	});
}

void QAbstractAxis_labelsFontChanged(QAbstractAxis* self, QFont* pen) {
	self->labelsFontChanged(*pen);
}

void QAbstractAxis_connect_labelsFontChanged(QAbstractAxis* self, intptr_t slot) {
	QAbstractAxis::connect(self, static_cast<void (QAbstractAxis::*)(const QFont&)>(&QAbstractAxis::labelsFontChanged), self, [=](const QFont& pen) {
		const QFont& pen_ret = pen;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&pen_ret);
		miqt_exec_callback_QAbstractAxis_labelsFontChanged(slot, sigval1);
	});
}

void QAbstractAxis_labelsAngleChanged(QAbstractAxis* self, int angle) {
	self->labelsAngleChanged(static_cast<int>(angle));
}

void QAbstractAxis_connect_labelsAngleChanged(QAbstractAxis* self, intptr_t slot) {
	QAbstractAxis::connect(self, static_cast<void (QAbstractAxis::*)(int)>(&QAbstractAxis::labelsAngleChanged), self, [=](int angle) {
		int sigval1 = angle;
		miqt_exec_callback_QAbstractAxis_labelsAngleChanged(slot, sigval1);
	});
}

void QAbstractAxis_gridLinePenChanged(QAbstractAxis* self, QPen* pen) {
	self->gridLinePenChanged(*pen);
}

void QAbstractAxis_connect_gridLinePenChanged(QAbstractAxis* self, intptr_t slot) {
	QAbstractAxis::connect(self, static_cast<void (QAbstractAxis::*)(const QPen&)>(&QAbstractAxis::gridLinePenChanged), self, [=](const QPen& pen) {
		const QPen& pen_ret = pen;
		// Cast returned reference into pointer
		QPen* sigval1 = const_cast<QPen*>(&pen_ret);
		miqt_exec_callback_QAbstractAxis_gridLinePenChanged(slot, sigval1);
	});
}

void QAbstractAxis_gridVisibleChanged(QAbstractAxis* self, bool visible) {
	self->gridVisibleChanged(visible);
}

void QAbstractAxis_connect_gridVisibleChanged(QAbstractAxis* self, intptr_t slot) {
	QAbstractAxis::connect(self, static_cast<void (QAbstractAxis::*)(bool)>(&QAbstractAxis::gridVisibleChanged), self, [=](bool visible) {
		bool sigval1 = visible;
		miqt_exec_callback_QAbstractAxis_gridVisibleChanged(slot, sigval1);
	});
}

void QAbstractAxis_minorGridVisibleChanged(QAbstractAxis* self, bool visible) {
	self->minorGridVisibleChanged(visible);
}

void QAbstractAxis_connect_minorGridVisibleChanged(QAbstractAxis* self, intptr_t slot) {
	QAbstractAxis::connect(self, static_cast<void (QAbstractAxis::*)(bool)>(&QAbstractAxis::minorGridVisibleChanged), self, [=](bool visible) {
		bool sigval1 = visible;
		miqt_exec_callback_QAbstractAxis_minorGridVisibleChanged(slot, sigval1);
	});
}

void QAbstractAxis_minorGridLinePenChanged(QAbstractAxis* self, QPen* pen) {
	self->minorGridLinePenChanged(*pen);
}

void QAbstractAxis_connect_minorGridLinePenChanged(QAbstractAxis* self, intptr_t slot) {
	QAbstractAxis::connect(self, static_cast<void (QAbstractAxis::*)(const QPen&)>(&QAbstractAxis::minorGridLinePenChanged), self, [=](const QPen& pen) {
		const QPen& pen_ret = pen;
		// Cast returned reference into pointer
		QPen* sigval1 = const_cast<QPen*>(&pen_ret);
		miqt_exec_callback_QAbstractAxis_minorGridLinePenChanged(slot, sigval1);
	});
}

void QAbstractAxis_gridLineColorChanged(QAbstractAxis* self, QColor* color) {
	self->gridLineColorChanged(*color);
}

void QAbstractAxis_connect_gridLineColorChanged(QAbstractAxis* self, intptr_t slot) {
	QAbstractAxis::connect(self, static_cast<void (QAbstractAxis::*)(const QColor&)>(&QAbstractAxis::gridLineColorChanged), self, [=](const QColor& color) {
		const QColor& color_ret = color;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&color_ret);
		miqt_exec_callback_QAbstractAxis_gridLineColorChanged(slot, sigval1);
	});
}

void QAbstractAxis_minorGridLineColorChanged(QAbstractAxis* self, QColor* color) {
	self->minorGridLineColorChanged(*color);
}

void QAbstractAxis_connect_minorGridLineColorChanged(QAbstractAxis* self, intptr_t slot) {
	QAbstractAxis::connect(self, static_cast<void (QAbstractAxis::*)(const QColor&)>(&QAbstractAxis::minorGridLineColorChanged), self, [=](const QColor& color) {
		const QColor& color_ret = color;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&color_ret);
		miqt_exec_callback_QAbstractAxis_minorGridLineColorChanged(slot, sigval1);
	});
}

void QAbstractAxis_colorChanged(QAbstractAxis* self, QColor* color) {
	self->colorChanged(*color);
}

void QAbstractAxis_connect_colorChanged(QAbstractAxis* self, intptr_t slot) {
	QAbstractAxis::connect(self, static_cast<void (QAbstractAxis::*)(QColor)>(&QAbstractAxis::colorChanged), self, [=](QColor color) {
		QColor* sigval1 = new QColor(color);
		miqt_exec_callback_QAbstractAxis_colorChanged(slot, sigval1);
	});
}

void QAbstractAxis_labelsColorChanged(QAbstractAxis* self, QColor* color) {
	self->labelsColorChanged(*color);
}

void QAbstractAxis_connect_labelsColorChanged(QAbstractAxis* self, intptr_t slot) {
	QAbstractAxis::connect(self, static_cast<void (QAbstractAxis::*)(QColor)>(&QAbstractAxis::labelsColorChanged), self, [=](QColor color) {
		QColor* sigval1 = new QColor(color);
		miqt_exec_callback_QAbstractAxis_labelsColorChanged(slot, sigval1);
	});
}

void QAbstractAxis_titleTextChanged(QAbstractAxis* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	self->titleTextChanged(title_QString);
}

void QAbstractAxis_connect_titleTextChanged(QAbstractAxis* self, intptr_t slot) {
	QAbstractAxis::connect(self, static_cast<void (QAbstractAxis::*)(const QString&)>(&QAbstractAxis::titleTextChanged), self, [=](const QString& title) {
		const QString title_ret = title;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray title_b = title_ret.toUtf8();
		struct miqt_string title_ms;
		title_ms.len = title_b.length();
		title_ms.data = static_cast<char*>(malloc(title_ms.len));
		memcpy(title_ms.data, title_b.data(), title_ms.len);
		struct miqt_string sigval1 = title_ms;
		miqt_exec_callback_QAbstractAxis_titleTextChanged(slot, sigval1);
	});
}

void QAbstractAxis_titleBrushChanged(QAbstractAxis* self, QBrush* brush) {
	self->titleBrushChanged(*brush);
}

void QAbstractAxis_connect_titleBrushChanged(QAbstractAxis* self, intptr_t slot) {
	QAbstractAxis::connect(self, static_cast<void (QAbstractAxis::*)(const QBrush&)>(&QAbstractAxis::titleBrushChanged), self, [=](const QBrush& brush) {
		const QBrush& brush_ret = brush;
		// Cast returned reference into pointer
		QBrush* sigval1 = const_cast<QBrush*>(&brush_ret);
		miqt_exec_callback_QAbstractAxis_titleBrushChanged(slot, sigval1);
	});
}

void QAbstractAxis_titleVisibleChanged(QAbstractAxis* self, bool visible) {
	self->titleVisibleChanged(visible);
}

void QAbstractAxis_connect_titleVisibleChanged(QAbstractAxis* self, intptr_t slot) {
	QAbstractAxis::connect(self, static_cast<void (QAbstractAxis::*)(bool)>(&QAbstractAxis::titleVisibleChanged), self, [=](bool visible) {
		bool sigval1 = visible;
		miqt_exec_callback_QAbstractAxis_titleVisibleChanged(slot, sigval1);
	});
}

void QAbstractAxis_titleFontChanged(QAbstractAxis* self, QFont* font) {
	self->titleFontChanged(*font);
}

void QAbstractAxis_connect_titleFontChanged(QAbstractAxis* self, intptr_t slot) {
	QAbstractAxis::connect(self, static_cast<void (QAbstractAxis::*)(const QFont&)>(&QAbstractAxis::titleFontChanged), self, [=](const QFont& font) {
		const QFont& font_ret = font;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&font_ret);
		miqt_exec_callback_QAbstractAxis_titleFontChanged(slot, sigval1);
	});
}

void QAbstractAxis_shadesVisibleChanged(QAbstractAxis* self, bool visible) {
	self->shadesVisibleChanged(visible);
}

void QAbstractAxis_connect_shadesVisibleChanged(QAbstractAxis* self, intptr_t slot) {
	QAbstractAxis::connect(self, static_cast<void (QAbstractAxis::*)(bool)>(&QAbstractAxis::shadesVisibleChanged), self, [=](bool visible) {
		bool sigval1 = visible;
		miqt_exec_callback_QAbstractAxis_shadesVisibleChanged(slot, sigval1);
	});
}

void QAbstractAxis_shadesColorChanged(QAbstractAxis* self, QColor* color) {
	self->shadesColorChanged(*color);
}

void QAbstractAxis_connect_shadesColorChanged(QAbstractAxis* self, intptr_t slot) {
	QAbstractAxis::connect(self, static_cast<void (QAbstractAxis::*)(QColor)>(&QAbstractAxis::shadesColorChanged), self, [=](QColor color) {
		QColor* sigval1 = new QColor(color);
		miqt_exec_callback_QAbstractAxis_shadesColorChanged(slot, sigval1);
	});
}

void QAbstractAxis_shadesBorderColorChanged(QAbstractAxis* self, QColor* color) {
	self->shadesBorderColorChanged(*color);
}

void QAbstractAxis_connect_shadesBorderColorChanged(QAbstractAxis* self, intptr_t slot) {
	QAbstractAxis::connect(self, static_cast<void (QAbstractAxis::*)(QColor)>(&QAbstractAxis::shadesBorderColorChanged), self, [=](QColor color) {
		QColor* sigval1 = new QColor(color);
		miqt_exec_callback_QAbstractAxis_shadesBorderColorChanged(slot, sigval1);
	});
}

void QAbstractAxis_shadesPenChanged(QAbstractAxis* self, QPen* pen) {
	self->shadesPenChanged(*pen);
}

void QAbstractAxis_connect_shadesPenChanged(QAbstractAxis* self, intptr_t slot) {
	QAbstractAxis::connect(self, static_cast<void (QAbstractAxis::*)(const QPen&)>(&QAbstractAxis::shadesPenChanged), self, [=](const QPen& pen) {
		const QPen& pen_ret = pen;
		// Cast returned reference into pointer
		QPen* sigval1 = const_cast<QPen*>(&pen_ret);
		miqt_exec_callback_QAbstractAxis_shadesPenChanged(slot, sigval1);
	});
}

void QAbstractAxis_shadesBrushChanged(QAbstractAxis* self, QBrush* brush) {
	self->shadesBrushChanged(*brush);
}

void QAbstractAxis_connect_shadesBrushChanged(QAbstractAxis* self, intptr_t slot) {
	QAbstractAxis::connect(self, static_cast<void (QAbstractAxis::*)(const QBrush&)>(&QAbstractAxis::shadesBrushChanged), self, [=](const QBrush& brush) {
		const QBrush& brush_ret = brush;
		// Cast returned reference into pointer
		QBrush* sigval1 = const_cast<QBrush*>(&brush_ret);
		miqt_exec_callback_QAbstractAxis_shadesBrushChanged(slot, sigval1);
	});
}

void QAbstractAxis_reverseChanged(QAbstractAxis* self, bool reverse) {
	self->reverseChanged(reverse);
}

void QAbstractAxis_connect_reverseChanged(QAbstractAxis* self, intptr_t slot) {
	QAbstractAxis::connect(self, static_cast<void (QAbstractAxis::*)(bool)>(&QAbstractAxis::reverseChanged), self, [=](bool reverse) {
		bool sigval1 = reverse;
		miqt_exec_callback_QAbstractAxis_reverseChanged(slot, sigval1);
	});
}

void QAbstractAxis_labelsEditableChanged(QAbstractAxis* self, bool editable) {
	self->labelsEditableChanged(editable);
}

void QAbstractAxis_connect_labelsEditableChanged(QAbstractAxis* self, intptr_t slot) {
	QAbstractAxis::connect(self, static_cast<void (QAbstractAxis::*)(bool)>(&QAbstractAxis::labelsEditableChanged), self, [=](bool editable) {
		bool sigval1 = editable;
		miqt_exec_callback_QAbstractAxis_labelsEditableChanged(slot, sigval1);
	});
}

void QAbstractAxis_labelsTruncatedChanged(QAbstractAxis* self, bool labelsTruncated) {
	self->labelsTruncatedChanged(labelsTruncated);
}

void QAbstractAxis_connect_labelsTruncatedChanged(QAbstractAxis* self, intptr_t slot) {
	QAbstractAxis::connect(self, static_cast<void (QAbstractAxis::*)(bool)>(&QAbstractAxis::labelsTruncatedChanged), self, [=](bool labelsTruncated) {
		bool sigval1 = labelsTruncated;
		miqt_exec_callback_QAbstractAxis_labelsTruncatedChanged(slot, sigval1);
	});
}

void QAbstractAxis_truncateLabelsChanged(QAbstractAxis* self, bool truncateLabels) {
	self->truncateLabelsChanged(truncateLabels);
}

void QAbstractAxis_connect_truncateLabelsChanged(QAbstractAxis* self, intptr_t slot) {
	QAbstractAxis::connect(self, static_cast<void (QAbstractAxis::*)(bool)>(&QAbstractAxis::truncateLabelsChanged), self, [=](bool truncateLabels) {
		bool sigval1 = truncateLabels;
		miqt_exec_callback_QAbstractAxis_truncateLabelsChanged(slot, sigval1);
	});
}

struct miqt_string QAbstractAxis_tr2(const char* s, const char* c) {
	QString _ret = QAbstractAxis::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractAxis_tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractAxis::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractAxis_setVisible1(QAbstractAxis* self, bool visible) {
	self->setVisible(visible);
}

void QAbstractAxis_setLineVisible1(QAbstractAxis* self, bool visible) {
	self->setLineVisible(visible);
}

void QAbstractAxis_setGridLineVisible1(QAbstractAxis* self, bool visible) {
	self->setGridLineVisible(visible);
}

void QAbstractAxis_setMinorGridLineVisible1(QAbstractAxis* self, bool visible) {
	self->setMinorGridLineVisible(visible);
}

void QAbstractAxis_setLabelsVisible1(QAbstractAxis* self, bool visible) {
	self->setLabelsVisible(visible);
}

void QAbstractAxis_setTitleVisible1(QAbstractAxis* self, bool visible) {
	self->setTitleVisible(visible);
}

void QAbstractAxis_setShadesVisible1(QAbstractAxis* self, bool visible) {
	self->setShadesVisible(visible);
}

void QAbstractAxis_setReverse1(QAbstractAxis* self, bool reverse) {
	self->setReverse(reverse);
}

void QAbstractAxis_setLabelsEditable1(QAbstractAxis* self, bool editable) {
	self->setLabelsEditable(editable);
}

void QAbstractAxis_setTruncateLabels1(QAbstractAxis* self, bool truncateLabels) {
	self->setTruncateLabels(truncateLabels);
}

void QAbstractAxis_delete(QAbstractAxis* self) {
	delete self;
}

