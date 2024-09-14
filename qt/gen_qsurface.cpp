#include <QSize>
#include <QSurface>
#include <QSurfaceFormat>
#include "qsurface.h"
#include "gen_qsurface.h"
#include "_cgo_export.h"

uintptr_t QSurface_SurfaceClass(const QSurface* self) {
	QSurface::SurfaceClass _ret = self->surfaceClass();
	return static_cast<uintptr_t>(_ret);
}

QSurfaceFormat* QSurface_Format(const QSurface* self) {
	QSurfaceFormat _ret = self->format();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSurfaceFormat*>(new QSurfaceFormat(_ret));
}

uintptr_t QSurface_SurfaceType(const QSurface* self) {
	QSurface::SurfaceType _ret = self->surfaceType();
	return static_cast<uintptr_t>(_ret);
}

bool QSurface_SupportsOpenGL(const QSurface* self) {
	return self->supportsOpenGL();
}

QSize* QSurface_Size(const QSurface* self) {
	QSize _ret = self->size();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(_ret));
}

void QSurface_Delete(QSurface* self) {
	delete self;
}

