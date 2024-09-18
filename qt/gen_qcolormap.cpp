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
	return new QColormap(QColormap::instance());
}

void QColormap_OperatorAssign(QColormap* self, QColormap* colormap) {
	self->operator=(*colormap);
}

int QColormap_Mode(const QColormap* self) {
	QColormap::Mode _ret = self->mode();
	return static_cast<int>(_ret);
}

int QColormap_Depth(const QColormap* self) {
	return self->depth();
}

int QColormap_Size(const QColormap* self) {
	return self->size();
}

unsigned int QColormap_Pixel(const QColormap* self, QColor* color) {
	uint _ret = self->pixel(*color);
	return static_cast<unsigned int>(_ret);
}

QColor* QColormap_ColorAt(const QColormap* self, unsigned int pixel) {
	return new QColor(self->colorAt(static_cast<uint>(pixel)));
}

struct miqt_array* QColormap_Colormap(const QColormap* self) {
	const QVector<QColor> _ret = self->colormap();
	// Convert QList<> from C++ memory to manually-managed C memory
	QColor** _arr = static_cast<QColor**>(malloc(sizeof(QColor*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QColor(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

QColormap* QColormap_Instance1(int screen) {
	return new QColormap(QColormap::instance(static_cast<int>(screen)));
}

void QColormap_Delete(QColormap* self) {
	delete self;
}

