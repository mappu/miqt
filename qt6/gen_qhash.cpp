#include <QHashDummyValue>
#define WORKAROUND_INNER_CLASS_DEFINITION_QHashPrivate__SpanConstants
#include <qhash.h>
#include "gen_qhash.h"
#include "_cgo_export.h"

QHashDummyValue* QHashDummyValue_new() {
	return new QHashDummyValue();
}

QHashDummyValue* QHashDummyValue_new2(QHashDummyValue* param1) {
	return new QHashDummyValue(*param1);
}

bool QHashDummyValue_OperatorEqual(const QHashDummyValue* self, QHashDummyValue* param1) {
	return self->operator==(*param1);
}

void QHashDummyValue_Delete(QHashDummyValue* self) {
	delete self;
}

void QHashPrivate__SpanConstants_Delete(QHashPrivate__SpanConstants* self) {
	delete self;
}

