#include <QColor>
#include <QColormap>
#include <QList>
#include "qcolormap.h"
#include "gen_qcolormap.h"
#include "_cgo_export.h"

QColormap* QColormap_new(QColormap* colormap) {
	return new QColormap(*colormap);
}

void QColormap_Initialize() {
	QColormap::initialize();
}

void QColormap_Cleanup() {
	QColormap::cleanup();
}

QColormap* QColormap_Instance() {
	QColormap _ret = QColormap::instance();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColormap*>(new QColormap(_ret));
}

void QColormap_OperatorAssign(QColormap* self, QColormap* colormap) {
	self->operator=(*colormap);
}

uintptr_t QColormap_Mode(const QColormap* self) {
	QColormap::Mode _ret = self->mode();
	return static_cast<uintptr_t>(_ret);
}

int QColormap_Depth(const QColormap* self) {
	return self->depth();
}

int QColormap_Size(const QColormap* self) {
	return self->size();
}

unsigned int QColormap_Pixel(const QColormap* self, QColor* color) {
	return self->pixel(*color);
}

QColor* QColormap_ColorAt(const QColormap* self, unsigned int pixel) {
	QColor _ret = self->colorAt(static_cast<uint>(pixel));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(_ret));
}

struct miqt_array* QColormap_Colormap(const QColormap* self) {
	const QVector<QColor> _ret = self->colormap();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QColor** _arr = static_cast<QColor**>(malloc(sizeof(QColor**) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QColor(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

QColormap* QColormap_Instance1(int screen) {
	QColormap _ret = QColormap::instance(static_cast<int>(screen));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColormap*>(new QColormap(_ret));
}

void QColormap_Delete(QColormap* self) {
	delete self;
}

