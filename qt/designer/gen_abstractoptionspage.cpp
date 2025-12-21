#include <QDesignerOptionsPageInterface>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <abstractoptionspage.h>
#include "gen_abstractoptionspage.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

struct miqt_string QDesignerOptionsPageInterface_name(const QDesignerOptionsPageInterface* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QWidget* QDesignerOptionsPageInterface_createPage(QDesignerOptionsPageInterface* self, QWidget* parent) {
	return self->createPage(parent);
}

void QDesignerOptionsPageInterface_apply(QDesignerOptionsPageInterface* self) {
	self->apply();
}

void QDesignerOptionsPageInterface_finish(QDesignerOptionsPageInterface* self) {
	self->finish();
}

void QDesignerOptionsPageInterface_operatorAssign(QDesignerOptionsPageInterface* self, QDesignerOptionsPageInterface* param1) {
	self->operator=(*param1);
}

void QDesignerOptionsPageInterface_delete(QDesignerOptionsPageInterface* self) {
	delete self;
}

