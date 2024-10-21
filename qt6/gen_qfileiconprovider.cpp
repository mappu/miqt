#include <QFileIconProvider>
#include <QFileInfo>
#include <QIcon>
#include <qfileiconprovider.h>
#include "gen_qfileiconprovider.h"
#include "_cgo_export.h"

QFileIconProvider* QFileIconProvider_new() {
	return new QFileIconProvider();
}

QIcon* QFileIconProvider_Icon(const QFileIconProvider* self, int typeVal) {
	return new QIcon(self->icon(static_cast<QAbstractFileIconProvider::IconType>(typeVal)));
}

QIcon* QFileIconProvider_IconWithInfo(const QFileIconProvider* self, QFileInfo* info) {
	return new QIcon(self->icon(*info));
}

void QFileIconProvider_Delete(QFileIconProvider* self) {
	delete self;
}

