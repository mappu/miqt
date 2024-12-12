#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscicommand.h>
#include "gen_qscicommand.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

int QsciCommand_Command(const QsciCommand* self) {
	QsciCommand::Command _ret = self->command();
	return static_cast<int>(_ret);
}

void QsciCommand_Execute(QsciCommand* self) {
	self->execute();
}

void QsciCommand_SetKey(QsciCommand* self, int key) {
	self->setKey(static_cast<int>(key));
}

void QsciCommand_SetAlternateKey(QsciCommand* self, int altkey) {
	self->setAlternateKey(static_cast<int>(altkey));
}

int QsciCommand_Key(const QsciCommand* self) {
	return self->key();
}

int QsciCommand_AlternateKey(const QsciCommand* self) {
	return self->alternateKey();
}

bool QsciCommand_ValidKey(int key) {
	return QsciCommand::validKey(static_cast<int>(key));
}

struct miqt_string QsciCommand_Description(const QsciCommand* self) {
	QString _ret = self->description();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciCommand_Delete(QsciCommand* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QsciCommand*>( self );
	} else {
		delete self;
	}
}

