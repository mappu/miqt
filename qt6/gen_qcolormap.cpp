#include <QColor>
#include <QColormap>
#include <QList>
#include <qcolormap.h>
#include "gen_qcolormap.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QColormap* QColormap_new(QColormap* colormap) {
	return new QColormap(*colormap);
}

void QColormap_initialize() {
	QColormap::initialize();
}

void QColormap_cleanup() {
	QColormap::cleanup();
}

QColormap* QColormap_instance() {
	return new QColormap(QColormap::instance());
}

void QColormap_operatorAssign(QColormap* self, QColormap* colormap) {
	self->operator=(*colormap);
}

int QColormap_mode(const QColormap* self) {
	QColormap::Mode _ret = self->mode();
	return static_cast<int>(_ret);
}

int QColormap_depth(const QColormap* self) {
	return self->depth();
}

int QColormap_size(const QColormap* self) {
	return self->size();
}

unsigned int QColormap_pixel(const QColormap* self, QColor* color) {
	uint _ret = self->pixel(*color);
	return static_cast<unsigned int>(_ret);
}

QColor* QColormap_colorAt(const QColormap* self, unsigned int pixel) {
	return new QColor(self->colorAt(static_cast<uint>(pixel)));
}

struct miqt_array /* of QColor* */  QColormap_colormap(const QColormap* self) {
	const QList<QColor> _ret = self->colormap();
	// Convert QList<> from C++ memory to manually-managed C memory
	QColor** _arr = static_cast<QColor**>(malloc(sizeof(QColor*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QColor(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QColormap* QColormap_instance1(int screen) {
	return new QColormap(QColormap::instance(static_cast<int>(screen)));
}

void QColormap_delete(QColormap* self) {
	delete self;
}

