#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscistyledtext.h>
#include "gen_qscistyledtext.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QsciStyledText* QsciStyledText_new(struct miqt_string text, int style) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new (std::nothrow) QsciStyledText(text_QString, static_cast<int>(style));
}

QsciStyledText* QsciStyledText_new2(struct miqt_string text, QsciStyle* style) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new (std::nothrow) QsciStyledText(text_QString, *style);
}

QsciStyledText* QsciStyledText_new3(QsciStyledText* param1) {
	return new (std::nothrow) QsciStyledText(*param1);
}

void QsciStyledText_apply(const QsciStyledText* self, QsciScintillaBase* sci) {
	self->apply(sci);
}

struct miqt_string QsciStyledText_text(const QsciStyledText* self) {
	const QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QsciStyledText_style(const QsciStyledText* self) {
	return self->style();
}

void QsciStyledText_delete(QsciStyledText* self) {
	delete self;
}

