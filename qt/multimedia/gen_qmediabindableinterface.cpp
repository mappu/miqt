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

QMediaObject* QMediaBindableInterface_mediaObject(const QMediaBindableInterface* self) {
	return self->mediaObject();
}

void QMediaBindableInterface_operatorAssign(QMediaBindableInterface* self, QMediaBindableInterface* param1) {
	self->operator=(*param1);
}

void QMediaBindableInterface_delete(QMediaBindableInterface* self) {
	delete self;
}

