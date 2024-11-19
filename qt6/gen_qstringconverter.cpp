#include <QByteArrayView>
#include <QChar>
#include <QStringConverter>
#include <QStringConverterBase>
#include <QStringDecoder>
#include <QStringEncoder>
#include <qstringconverter.h>
#include "gen_qstringconverter.h"
#include "_cgo_export.h"

void QStringEncoder_new(QStringEncoder** outptr_QStringEncoder, QStringConverter** outptr_QStringConverter, QStringConverterBase** outptr_QStringConverterBase) {
	QStringEncoder* ret = new QStringEncoder();
	*outptr_QStringEncoder = ret;
	*outptr_QStringConverter = static_cast<QStringConverter*>(ret);
	*outptr_QStringConverterBase = static_cast<QStringConverterBase*>(ret);
}

void QStringEncoder_new2(int encoding, QStringEncoder** outptr_QStringEncoder, QStringConverter** outptr_QStringConverter, QStringConverterBase** outptr_QStringConverterBase) {
	QStringEncoder* ret = new QStringEncoder(static_cast<QStringConverter::Encoding>(encoding));
	*outptr_QStringEncoder = ret;
	*outptr_QStringConverter = static_cast<QStringConverter*>(ret);
	*outptr_QStringConverterBase = static_cast<QStringConverterBase*>(ret);
}

void QStringEncoder_new3(const char* name, QStringEncoder** outptr_QStringEncoder, QStringConverter** outptr_QStringConverter, QStringConverterBase** outptr_QStringConverterBase) {
	QStringEncoder* ret = new QStringEncoder(name);
	*outptr_QStringEncoder = ret;
	*outptr_QStringConverter = static_cast<QStringConverter*>(ret);
	*outptr_QStringConverterBase = static_cast<QStringConverterBase*>(ret);
}

void QStringEncoder_new4(int encoding, int flags, QStringEncoder** outptr_QStringEncoder, QStringConverter** outptr_QStringConverter, QStringConverterBase** outptr_QStringConverterBase) {
	QStringEncoder* ret = new QStringEncoder(static_cast<QStringConverter::Encoding>(encoding), static_cast<QStringConverterBase::Flags>(flags));
	*outptr_QStringEncoder = ret;
	*outptr_QStringConverter = static_cast<QStringConverter*>(ret);
	*outptr_QStringConverterBase = static_cast<QStringConverterBase*>(ret);
}

void QStringEncoder_new5(const char* name, int flags, QStringEncoder** outptr_QStringEncoder, QStringConverter** outptr_QStringConverter, QStringConverterBase** outptr_QStringConverterBase) {
	QStringEncoder* ret = new QStringEncoder(name, static_cast<QStringConverterBase::Flags>(flags));
	*outptr_QStringEncoder = ret;
	*outptr_QStringConverter = static_cast<QStringConverter*>(ret);
	*outptr_QStringConverterBase = static_cast<QStringConverterBase*>(ret);
}

ptrdiff_t QStringEncoder_RequiredSpace(const QStringEncoder* self, ptrdiff_t inputLength) {
	qsizetype _ret = self->requiredSpace((qsizetype)(inputLength));
	return static_cast<ptrdiff_t>(_ret);
}

void QStringEncoder_Delete(QStringEncoder* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStringEncoder*>( self );
	} else {
		delete self;
	}
}

void QStringDecoder_new(int encoding, QStringDecoder** outptr_QStringDecoder, QStringConverter** outptr_QStringConverter, QStringConverterBase** outptr_QStringConverterBase) {
	QStringDecoder* ret = new QStringDecoder(static_cast<QStringConverter::Encoding>(encoding));
	*outptr_QStringDecoder = ret;
	*outptr_QStringConverter = static_cast<QStringConverter*>(ret);
	*outptr_QStringConverterBase = static_cast<QStringConverterBase*>(ret);
}

void QStringDecoder_new2(QStringDecoder** outptr_QStringDecoder, QStringConverter** outptr_QStringConverter, QStringConverterBase** outptr_QStringConverterBase) {
	QStringDecoder* ret = new QStringDecoder();
	*outptr_QStringDecoder = ret;
	*outptr_QStringConverter = static_cast<QStringConverter*>(ret);
	*outptr_QStringConverterBase = static_cast<QStringConverterBase*>(ret);
}

void QStringDecoder_new3(const char* name, QStringDecoder** outptr_QStringDecoder, QStringConverter** outptr_QStringConverter, QStringConverterBase** outptr_QStringConverterBase) {
	QStringDecoder* ret = new QStringDecoder(name);
	*outptr_QStringDecoder = ret;
	*outptr_QStringConverter = static_cast<QStringConverter*>(ret);
	*outptr_QStringConverterBase = static_cast<QStringConverterBase*>(ret);
}

void QStringDecoder_new4(int encoding, int flags, QStringDecoder** outptr_QStringDecoder, QStringConverter** outptr_QStringConverter, QStringConverterBase** outptr_QStringConverterBase) {
	QStringDecoder* ret = new QStringDecoder(static_cast<QStringConverter::Encoding>(encoding), static_cast<QStringConverterBase::Flags>(flags));
	*outptr_QStringDecoder = ret;
	*outptr_QStringConverter = static_cast<QStringConverter*>(ret);
	*outptr_QStringConverterBase = static_cast<QStringConverterBase*>(ret);
}

void QStringDecoder_new5(const char* name, int f, QStringDecoder** outptr_QStringDecoder, QStringConverter** outptr_QStringConverter, QStringConverterBase** outptr_QStringConverterBase) {
	QStringDecoder* ret = new QStringDecoder(name, static_cast<QStringConverterBase::Flags>(f));
	*outptr_QStringDecoder = ret;
	*outptr_QStringConverter = static_cast<QStringConverter*>(ret);
	*outptr_QStringConverterBase = static_cast<QStringConverterBase*>(ret);
}

ptrdiff_t QStringDecoder_RequiredSpace(const QStringDecoder* self, ptrdiff_t inputLength) {
	qsizetype _ret = self->requiredSpace((qsizetype)(inputLength));
	return static_cast<ptrdiff_t>(_ret);
}

QChar* QStringDecoder_AppendToBuffer(QStringDecoder* self, QChar* out, QByteArrayView* ba) {
	return self->appendToBuffer(out, *ba);
}

QStringDecoder* QStringDecoder_DecoderForHtml(QByteArrayView* data) {
	return new QStringDecoder(QStringDecoder::decoderForHtml(*data));
}

void QStringDecoder_Delete(QStringDecoder* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStringDecoder*>( self );
	} else {
		delete self;
	}
}

