#include <QSize>
#include <QSurface>
#include <QSurfaceFormat>
#include "qsurface.h"

#include "gen_qsurface.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

uintptr_t QSurface_SurfaceClass(const QSurface* self) {
	QSurface::SurfaceClass ret = self->surfaceClass();
	return static_cast<uintptr_t>(ret);
}

QSurfaceFormat* QSurface_Format(const QSurface* self) {
	QSurfaceFormat ret = self->format();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSurfaceFormat*>(new QSurfaceFormat(ret));
}

uintptr_t QSurface_SurfaceType(const QSurface* self) {
	QSurface::SurfaceType ret = self->surfaceType();
	return static_cast<uintptr_t>(ret);
}

bool QSurface_SupportsOpenGL(const QSurface* self) {
	return self->supportsOpenGL();
}

QSize* QSurface_Size(const QSurface* self) {
	QSize ret = self->size();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QSurface_Delete(QSurface* self) {
	delete self;
}

