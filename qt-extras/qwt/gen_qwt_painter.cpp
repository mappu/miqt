#include <QBrush>
#include <QImage>
#include <QLineF>
#include <QPainter>
#include <QPainterPath>
#include <QPalette>
#include <QPixmap>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRectF>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextDocument>
#include <QWidget>
#include <qwt_painter.h>
#include "gen_qwt_painter.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

void QwtPainter_setPolylineSplitting(bool polylineSplitting) {
	QwtPainter::setPolylineSplitting(polylineSplitting);
}

bool QwtPainter_polylineSplitting() {
	return QwtPainter::polylineSplitting();
}

void QwtPainter_setRoundingAlignment(bool roundingAlignment) {
	QwtPainter::setRoundingAlignment(roundingAlignment);
}

bool QwtPainter_roundingAlignment() {
	return QwtPainter::roundingAlignment();
}

bool QwtPainter_roundingAlignmentWithQPainter(QPainter* param1) {
	return QwtPainter::roundingAlignment(param1);
}

void QwtPainter_drawText(QPainter* param1, double x, double y, struct miqt_string param4) {
	QString param4_QString = QString::fromUtf8(param4.data, param4.len);
	QwtPainter::drawText(param1, static_cast<double>(x), static_cast<double>(y), param4_QString);
}

void QwtPainter_drawText2(QPainter* param1, QPointF* param2, struct miqt_string param3) {
	QString param3_QString = QString::fromUtf8(param3.data, param3.len);
	QwtPainter::drawText(param1, *param2, param3_QString);
}

void QwtPainter_drawText3(QPainter* param1, double x, double y, double w, double h, int flags, struct miqt_string param7) {
	QString param7_QString = QString::fromUtf8(param7.data, param7.len);
	QwtPainter::drawText(param1, static_cast<double>(x), static_cast<double>(y), static_cast<double>(w), static_cast<double>(h), static_cast<int>(flags), param7_QString);
}

void QwtPainter_drawText4(QPainter* param1, QRectF* param2, int flags, struct miqt_string param4) {
	QString param4_QString = QString::fromUtf8(param4.data, param4.len);
	QwtPainter::drawText(param1, *param2, static_cast<int>(flags), param4_QString);
}

void QwtPainter_drawSimpleRichText(QPainter* param1, QRectF* param2, int flags, QTextDocument* param4) {
	QwtPainter::drawSimpleRichText(param1, *param2, static_cast<int>(flags), *param4);
}

void QwtPainter_drawRect(QPainter* param1, double x, double y, double w, double h) {
	QwtPainter::drawRect(param1, static_cast<double>(x), static_cast<double>(y), static_cast<double>(w), static_cast<double>(h));
}

void QwtPainter_drawRect2(QPainter* param1, QRectF* rect) {
	QwtPainter::drawRect(param1, *rect);
}

void QwtPainter_fillRect(QPainter* param1, QRectF* param2, QBrush* param3) {
	QwtPainter::fillRect(param1, *param2, *param3);
}

void QwtPainter_drawEllipse(QPainter* param1, QRectF* param2) {
	QwtPainter::drawEllipse(param1, *param2);
}

void QwtPainter_drawPie(QPainter* param1, QRectF* param2, int a, int alen) {
	QwtPainter::drawPie(param1, *param2, static_cast<int>(a), static_cast<int>(alen));
}

void QwtPainter_drawLine(QPainter* param1, double x1, double y1, double x2, double y2) {
	QwtPainter::drawLine(param1, static_cast<double>(x1), static_cast<double>(y1), static_cast<double>(x2), static_cast<double>(y2));
}

void QwtPainter_drawLine2(QPainter* param1, QPointF* p1, QPointF* p2) {
	QwtPainter::drawLine(param1, *p1, *p2);
}

void QwtPainter_drawLine3(QPainter* param1, QLineF* param2) {
	QwtPainter::drawLine(param1, *param2);
}

void QwtPainter_drawPolyline2(QPainter* param1, QPointF* param2, int pointCount) {
	QwtPainter::drawPolyline(param1, param2, static_cast<int>(pointCount));
}

void QwtPainter_drawPolyline4(QPainter* param1, QPoint* param2, int pointCount) {
	QwtPainter::drawPolyline(param1, param2, static_cast<int>(pointCount));
}

void QwtPainter_drawPoint(QPainter* param1, QPoint* param2) {
	QwtPainter::drawPoint(param1, *param2);
}

void QwtPainter_drawPoints2(QPainter* param1, QPoint* param2, int pointCount) {
	QwtPainter::drawPoints(param1, param2, static_cast<int>(pointCount));
}

void QwtPainter_drawPoint2(QPainter* param1, double x, double y) {
	QwtPainter::drawPoint(param1, static_cast<double>(x), static_cast<double>(y));
}

void QwtPainter_drawPoint3(QPainter* param1, QPointF* param2) {
	QwtPainter::drawPoint(param1, *param2);
}

void QwtPainter_drawPoints4(QPainter* param1, QPointF* param2, int pointCount) {
	QwtPainter::drawPoints(param1, param2, static_cast<int>(pointCount));
}

void QwtPainter_drawPath(QPainter* param1, QPainterPath* param2) {
	QwtPainter::drawPath(param1, *param2);
}

void QwtPainter_drawImage(QPainter* param1, QRectF* param2, QImage* param3) {
	QwtPainter::drawImage(param1, *param2, *param3);
}

void QwtPainter_drawPixmap(QPainter* param1, QRectF* param2, QPixmap* param3) {
	QwtPainter::drawPixmap(param1, *param2, *param3);
}

void QwtPainter_drawRoundFrame(QPainter* param1, QRectF* param2, QPalette* param3, int lineWidth, int frameStyle) {
	QwtPainter::drawRoundFrame(param1, *param2, *param3, static_cast<int>(lineWidth), static_cast<int>(frameStyle));
}

void QwtPainter_drawRoundedFrame(QPainter* param1, QRectF* param2, double xRadius, double yRadius, QPalette* param5, int lineWidth, int frameStyle) {
	QwtPainter::drawRoundedFrame(param1, *param2, static_cast<double>(xRadius), static_cast<double>(yRadius), *param5, static_cast<int>(lineWidth), static_cast<int>(frameStyle));
}

void QwtPainter_drawFrame(QPainter* param1, QRectF* rect, QPalette* palette, int foregroundRole, int frameWidth, int midLineWidth, int frameStyle) {
	QwtPainter::drawFrame(param1, *rect, *palette, static_cast<QPalette::ColorRole>(foregroundRole), static_cast<int>(frameWidth), static_cast<int>(midLineWidth), static_cast<int>(frameStyle));
}

void QwtPainter_drawFocusRect(QPainter* param1, QWidget* param2) {
	QwtPainter::drawFocusRect(param1, param2);
}

void QwtPainter_drawFocusRect2(QPainter* param1, QWidget* param2, QRect* param3) {
	QwtPainter::drawFocusRect(param1, param2, *param3);
}

bool QwtPainter_isAligning(QPainter* painter) {
	return QwtPainter::isAligning(painter);
}

bool QwtPainter_isX11GraphicsSystem() {
	return QwtPainter::isX11GraphicsSystem();
}

void QwtPainter_fillPixmap(QWidget* param1, QPixmap* param2) {
	QwtPainter::fillPixmap(param1, *param2);
}

void QwtPainter_drawBackgound(QPainter* painter, QRectF* rect, QWidget* widget) {
	QwtPainter::drawBackgound(painter, *rect, widget);
}

QPixmap* QwtPainter_backingStore(QWidget* param1, QSize* param2) {
	return new QPixmap(QwtPainter::backingStore(param1, *param2));
}

void QwtPainter_fillPixmap2(QWidget* param1, QPixmap* param2, QPoint* offset) {
	QwtPainter::fillPixmap(param1, *param2, *offset);
}

void QwtPainter_delete(QwtPainter* self) {
	delete self;
}

