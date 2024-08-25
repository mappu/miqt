#include "gen_qsurface.h"
#include "qsurface.h"

#include <QSize>
#include <QSurface>
#include <QSurfaceFormat>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QSurfaceFormat* QSurface_Format(QSurface* self) {
	QSurfaceFormat ret = self->format();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSurfaceFormat*>(new QSurfaceFormat(ret));
}

bool QSurface_SupportsOpenGL(QSurface* self) {
	return self->supportsOpenGL();
}

QSize* QSurface_Size(QSurface* self) {
	QSize ret = self->size();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QSurface_Delete(QSurface* self) {
	delete self;
}

