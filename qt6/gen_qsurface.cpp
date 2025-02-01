#include <QSize>
#include <QSurface>
#include <QSurfaceFormat>
#include <qsurface.h>
#include "gen_qsurface.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

int QSurface_surfaceClass(const QSurface* self) {
	QSurface::SurfaceClass _ret = self->surfaceClass();
	return static_cast<int>(_ret);
}

QSurfaceFormat* QSurface_format(const QSurface* self) {
	return new QSurfaceFormat(self->format());
}

int QSurface_surfaceType(const QSurface* self) {
	QSurface::SurfaceType _ret = self->surfaceType();
	return static_cast<int>(_ret);
}

bool QSurface_supportsOpenGL(const QSurface* self) {
	return self->supportsOpenGL();
}

QSize* QSurface_size(const QSurface* self) {
	return new QSize(self->size());
}

void QSurface_delete(QSurface* self) {
	delete self;
}

