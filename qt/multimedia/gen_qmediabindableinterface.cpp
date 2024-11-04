#include <QMediaBindableInterface>
#include <QMediaObject>
#include <qmediabindableinterface.h>
#include "gen_qmediabindableinterface.h"
#include "_cgo_export.h"

QMediaObject* QMediaBindableInterface_MediaObject(const QMediaBindableInterface* self) {
	return self->mediaObject();
}

void QMediaBindableInterface_Delete(QMediaBindableInterface* self) {
	delete self;
}

