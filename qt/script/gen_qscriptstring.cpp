#include <QScriptString>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscriptstring.h>
#include "gen_qscriptstring.h"
#include "_cgo_export.h"

void QScriptString_new(QScriptString** outptr_QScriptString) {
	QScriptString* ret = new QScriptString();
	*outptr_QScriptString = ret;
}

void QScriptString_new2(QScriptString* other, QScriptString** outptr_QScriptString) {
	QScriptString* ret = new QScriptString(*other);
	*outptr_QScriptString = ret;
}

void QScriptString_OperatorAssign(QScriptString* self, QScriptString* other) {
	self->operator=(*other);
}

bool QScriptString_IsValid(const QScriptString* self) {
	return self->isValid();
}

bool QScriptString_OperatorEqual(const QScriptString* self, QScriptString* other) {
	return (*self == *other);
}

bool QScriptString_OperatorNotEqual(const QScriptString* self, QScriptString* other) {
	return (*self != *other);
}

unsigned int QScriptString_ToArrayIndex(const QScriptString* self) {
	quint32 _ret = self->toArrayIndex();
	return static_cast<unsigned int>(_ret);
}

struct miqt_string QScriptString_ToString(const QScriptString* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

unsigned int QScriptString_ToArrayIndex1(const QScriptString* self, bool* ok) {
	quint32 _ret = self->toArrayIndex(ok);
	return static_cast<unsigned int>(_ret);
}

void QScriptString_Delete(QScriptString* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QScriptString*>( self );
	} else {
		delete self;
	}
}

