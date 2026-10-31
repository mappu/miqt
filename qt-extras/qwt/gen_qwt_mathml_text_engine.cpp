#include <QFont>
#include <QPainter>
#include <QRectF>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qwt_mathml_text_engine.h>
#include "gen_qwt_mathml_text_engine.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

void QwtMathMLTextEngine_virtbase(QwtMathMLTextEngine* src, QwtTextEngine** outptr_QwtTextEngine) {
	*outptr_QwtTextEngine = static_cast<QwtTextEngine*>(src);
}

double QwtMathMLTextEngine_heightForWidth(const QwtMathMLTextEngine* self, QFont* font, int flags, struct miqt_string text, double width) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->heightForWidth(*font, static_cast<int>(flags), text_QString, static_cast<double>(width));
}

struct miqt_qsizef QwtMathMLTextEngine_textSize(const QwtMathMLTextEngine* self, QFont* font, int flags, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return miqt_to_cabi<struct miqt_qsizef>(self->textSize(*font, static_cast<int>(flags), text_QString));
}

void QwtMathMLTextEngine_draw(const QwtMathMLTextEngine* self, QPainter* painter, struct miqt_qrectf rect, int flags, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->draw(painter, miqt_from_cabi<QRectF>(rect), static_cast<int>(flags), text_QString);
}

bool QwtMathMLTextEngine_mightRender(const QwtMathMLTextEngine* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	return self->mightRender(param1_QString);
}

void QwtMathMLTextEngine_textMargins(const QwtMathMLTextEngine* self, QFont* param1, struct miqt_string param2, double* left, double* right, double* top, double* bottom) {
	QString param2_QString = QString::fromUtf8(param2.data, param2.len);
	self->textMargins(*param1, param2_QString, static_cast<double&>(*left), static_cast<double&>(*right), static_cast<double&>(*top), static_cast<double&>(*bottom));
}

void QwtMathMLTextEngine_operatorAssign(QwtMathMLTextEngine* self, QwtMathMLTextEngine* param1) {
	self->operator=(*param1);
}

void QwtMathMLTextEngine_delete(QwtMathMLTextEngine* self) {
	delete self;
}

