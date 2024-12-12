#include <QMediaBindableInterface>
#include <QMediaObject>
#include <qmediabindableinterface.h>
#include "gen_qmediabindableinterface.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

QMediaObject* QMediaBindableInterface_MediaObject(const QMediaBindableInterface* self) {
	return self->mediaObject();
}

void QMediaBindableInterface_Delete(QMediaBindableInterface* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QMediaBindableInterface*>( self );
	} else {
		delete self;
	}
}

