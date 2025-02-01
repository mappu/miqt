#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscicommand.h>
#include "gen_qscicommand.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

int QsciCommand_command(const QsciCommand* self) {
	QsciCommand::Command _ret = self->command();
	return static_cast<int>(_ret);
}

void QsciCommand_execute(QsciCommand* self) {
	self->execute();
}

void QsciCommand_setKey(QsciCommand* self, int key) {
	self->setKey(static_cast<int>(key));
}

void QsciCommand_setAlternateKey(QsciCommand* self, int altkey) {
	self->setAlternateKey(static_cast<int>(altkey));
}

int QsciCommand_key(const QsciCommand* self) {
	return self->key();
}

int QsciCommand_alternateKey(const QsciCommand* self) {
	return self->alternateKey();
}

bool QsciCommand_validKey(int key) {
	return QsciCommand::validKey(static_cast<int>(key));
}

struct miqt_string QsciCommand_description(const QsciCommand* self) {
	QString _ret = self->description();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciCommand_delete(QsciCommand* self) {
	delete self;
}

