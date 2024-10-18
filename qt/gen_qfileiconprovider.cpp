#include <QFileIconProvider>
#include <QFileInfo>
#include <QIcon>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qfileiconprovider.h>
#include "gen_qfileiconprovider.h"
#include "_cgo_export.h"

QFileIconProvider* QFileIconProvider_new() {
	return new QFileIconProvider();
}

QIcon* QFileIconProvider_Icon(const QFileIconProvider* self, int typeVal) {
	return new QIcon(self->icon(static_cast<QFileIconProvider::IconType>(typeVal)));
}

QIcon* QFileIconProvider_IconWithInfo(const QFileIconProvider* self, QFileInfo* info) {
	return new QIcon(self->icon(*info));
}

struct miqt_string QFileIconProvider_Type(const QFileIconProvider* self, QFileInfo* info) {
	QString _ret = self->type(*info);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFileIconProvider_SetOptions(QFileIconProvider* self, int options) {
	self->setOptions(static_cast<QFileIconProvider::Options>(options));
}

int QFileIconProvider_Options(const QFileIconProvider* self) {
	QFileIconProvider::Options _ret = self->options();
	return static_cast<int>(_ret);
}

void QFileIconProvider_Delete(QFileIconProvider* self) {
	delete self;
}

