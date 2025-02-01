#include <QByteArrayView>
#include <QChar>
#include <QStringConverter>
#include <QStringConverterBase>
#include <QStringDecoder>
#include <QStringEncoder>
#include <qstringconverter.h>
#include "gen_qstringconverter.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QStringEncoder* QStringEncoder_new() {
	return new QStringEncoder();
}

QStringEncoder* QStringEncoder_new2(int encoding) {
	return new QStringEncoder(static_cast<QStringConverter::Encoding>(encoding));
}

QStringEncoder* QStringEncoder_new3(const char* name) {
	return new QStringEncoder(name);
}

QStringEncoder* QStringEncoder_new4(int encoding, int flags) {
	return new QStringEncoder(static_cast<QStringConverter::Encoding>(encoding), static_cast<QStringConverterBase::Flags>(flags));
}

QStringEncoder* QStringEncoder_new5(const char* name, int flags) {
	return new QStringEncoder(name, static_cast<QStringConverterBase::Flags>(flags));
}

void QStringEncoder_virtbase(QStringEncoder* src, QStringConverter** outptr_QStringConverter) {
	*outptr_QStringConverter = static_cast<QStringConverter*>(src);
}

ptrdiff_t QStringEncoder_requiredSpace(const QStringEncoder* self, ptrdiff_t inputLength) {
	qsizetype _ret = self->requiredSpace((qsizetype)(inputLength));
	return static_cast<ptrdiff_t>(_ret);
}

void QStringEncoder_delete(QStringEncoder* self) {
	delete self;
}

QStringDecoder* QStringDecoder_new(int encoding) {
	return new QStringDecoder(static_cast<QStringConverter::Encoding>(encoding));
}

QStringDecoder* QStringDecoder_new2() {
	return new QStringDecoder();
}

QStringDecoder* QStringDecoder_new3(const char* name) {
	return new QStringDecoder(name);
}

QStringDecoder* QStringDecoder_new4(int encoding, int flags) {
	return new QStringDecoder(static_cast<QStringConverter::Encoding>(encoding), static_cast<QStringConverterBase::Flags>(flags));
}

QStringDecoder* QStringDecoder_new5(const char* name, int f) {
	return new QStringDecoder(name, static_cast<QStringConverterBase::Flags>(f));
}

void QStringDecoder_virtbase(QStringDecoder* src, QStringConverter** outptr_QStringConverter) {
	*outptr_QStringConverter = static_cast<QStringConverter*>(src);
}

ptrdiff_t QStringDecoder_requiredSpace(const QStringDecoder* self, ptrdiff_t inputLength) {
	qsizetype _ret = self->requiredSpace((qsizetype)(inputLength));
	return static_cast<ptrdiff_t>(_ret);
}

QChar* QStringDecoder_appendToBuffer(QStringDecoder* self, QChar* out, QByteArrayView* ba) {
	return self->appendToBuffer(out, *ba);
}

QStringDecoder* QStringDecoder_decoderForHtml(QByteArrayView* data) {
	return new QStringDecoder(QStringDecoder::decoderForHtml(*data));
}

void QStringDecoder_delete(QStringDecoder* self) {
	delete self;
}

