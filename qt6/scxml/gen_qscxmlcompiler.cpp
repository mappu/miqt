#include <QList>
#include <QScxmlCompiler>
#define WORKAROUND_INNER_CLASS_DEFINITION_QScxmlCompiler__Loader
#include <QScxmlError>
#include <QScxmlStateMachine>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QXmlStreamReader>
#include <qscxmlcompiler.h>
#include "gen_qscxmlcompiler.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QScxmlCompiler* QScxmlCompiler_new(QXmlStreamReader* xmlReader) {
	return new (std::nothrow) QScxmlCompiler(xmlReader);
}

struct miqt_string QScxmlCompiler_fileName(const QScxmlCompiler* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QScxmlCompiler_setFileName(QScxmlCompiler* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setFileName(fileName_QString);
}

QScxmlCompiler__Loader* QScxmlCompiler_loader(const QScxmlCompiler* self) {
	return self->loader();
}

void QScxmlCompiler_setLoader(QScxmlCompiler* self, QScxmlCompiler__Loader* newLoader) {
	self->setLoader(newLoader);
}

QScxmlStateMachine* QScxmlCompiler_compile(QScxmlCompiler* self) {
	return self->compile();
}

struct miqt_array /* of QScxmlError* */  QScxmlCompiler_errors(const QScxmlCompiler* self) {
	QList<QScxmlError> _ret = self->errors();
	// Convert QList<> from C++ memory to manually-managed C memory
	QScxmlError** _arr = static_cast<QScxmlError**>(malloc(sizeof(QScxmlError*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QScxmlError(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QScxmlCompiler_delete(QScxmlCompiler* self) {
	delete self;
}

QScxmlCompiler__Loader* QScxmlCompiler__Loader_new() {
	return new (std::nothrow) QScxmlCompiler::Loader();
}

void QScxmlCompiler__Loader_operatorAssign(QScxmlCompiler__Loader* self, QScxmlCompiler__Loader* param1) {
	self->operator=(*param1);
}

void QScxmlCompiler__Loader_delete(QScxmlCompiler__Loader* self) {
	delete self;
}

