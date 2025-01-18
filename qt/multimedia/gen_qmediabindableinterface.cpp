#include <QMediaBindableInterface>
#include <QMediaObject>
#include <qmediabindableinterface.h>
#include "gen_qmediabindableinterface.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QMediaObject* QMediaBindableInterface_MediaObject(const QMediaBindableInterface* self) {
	return self->mediaObject();
}

void QMediaBindableInterface_Delete(QMediaBindableInterface* self) {
	delete self;
}

