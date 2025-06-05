#include <qscidocument.h>
#include "gen_qscidocument.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QsciDocument* QsciDocument_new() {
	return new (std::nothrow) QsciDocument();
}

QsciDocument* QsciDocument_new2(QsciDocument* param1) {
	return new (std::nothrow) QsciDocument(*param1);
}

void QsciDocument_operatorAssign(QsciDocument* self, QsciDocument* param1) {
	self->operator=(*param1);
}

void QsciDocument_delete(QsciDocument* self) {
	delete self;
}

