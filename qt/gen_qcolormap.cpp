#include <QColor>
#include <QColormap>
#include <QList>
#include "qcolormap.h"

#include "gen_qcolormap.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

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
	QColormap ret = QColormap::instance();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColormap*>(new QColormap(ret));
}

void QColormap_OperatorAssign(QColormap* self, QColormap* colormap) {
	self->operator=(*colormap);
}

uintptr_t QColormap_Mode(QColormap* self) {
	QColormap::Mode ret = const_cast<const QColormap*>(self)->mode();
	return static_cast<uintptr_t>(ret);
}

int QColormap_Depth(QColormap* self) {
	return const_cast<const QColormap*>(self)->depth();
}

int QColormap_Size(QColormap* self) {
	return const_cast<const QColormap*>(self)->size();
}

unsigned int QColormap_Pixel(QColormap* self, QColor* color) {
	return const_cast<const QColormap*>(self)->pixel(*color);
}

QColor* QColormap_ColorAt(QColormap* self, unsigned int pixel) {
	QColor ret = const_cast<const QColormap*>(self)->colorAt(static_cast<uint>(pixel));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

void QColormap_Colormap(QColormap* self, QColor*** _out, size_t* _out_len) {
	const QVector<QColor> ret = const_cast<const QColormap*>(self)->colormap();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QColor** __out = static_cast<QColor**>(malloc(sizeof(QColor**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QColor(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

QColormap* QColormap_Instance1(int screen) {
	QColormap ret = QColormap::instance(static_cast<int>(screen));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColormap*>(new QColormap(ret));
}

void QColormap_Delete(QColormap* self) {
	delete self;
}

