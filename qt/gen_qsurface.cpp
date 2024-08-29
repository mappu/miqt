#include <QSize>
#include <QSurface>
#include <QSurfaceFormat>
#include "qsurface.h"

#include "gen_qsurface.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

uintptr_t QSurface_SurfaceClass(QSurface* self) {
	QSurface::SurfaceClass ret = const_cast<const QSurface*>(self)->surfaceClass();
	return static_cast<uintptr_t>(ret);
}

QSurfaceFormat* QSurface_Format(QSurface* self) {
	QSurfaceFormat ret = const_cast<const QSurface*>(self)->format();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSurfaceFormat*>(new QSurfaceFormat(ret));
}

uintptr_t QSurface_SurfaceType(QSurface* self) {
	QSurface::SurfaceType ret = const_cast<const QSurface*>(self)->surfaceType();
	return static_cast<uintptr_t>(ret);
}

bool QSurface_SupportsOpenGL(QSurface* self) {
	return const_cast<const QSurface*>(self)->supportsOpenGL();
}

QSize* QSurface_Size(QSurface* self) {
	QSize ret = const_cast<const QSurface*>(self)->size();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QSurface_Delete(QSurface* self) {
	delete self;
}

