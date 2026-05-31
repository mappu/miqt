#include <QColor>
#include <QVector>
#include <qwt_color_map.h>
#include "gen_qwt_color_map.h"

#ifdef __cplusplus
extern "C" {
#endif

unsigned int miqt_exec_callback_QwtColorMap_rgb(const QwtColorMap*, intptr_t, QwtInterval*, double);
unsigned char miqt_exec_callback_QwtColorMap_colorIndex(const QwtColorMap*, intptr_t, QwtInterval*, double);
struct miqt_array /* of unsigned int */  miqt_exec_callback_QwtColorMap_colorTable(const QwtColorMap*, intptr_t, QwtInterval*);
unsigned int miqt_exec_callback_QwtLinearColorMap_rgb(const QwtLinearColorMap*, intptr_t, QwtInterval*, double);
unsigned char miqt_exec_callback_QwtLinearColorMap_colorIndex(const QwtLinearColorMap*, intptr_t, QwtInterval*, double);
struct miqt_array /* of unsigned int */  miqt_exec_callback_QwtLinearColorMap_colorTable(const QwtLinearColorMap*, intptr_t, QwtInterval*);
unsigned int miqt_exec_callback_QwtAlphaColorMap_rgb(const QwtAlphaColorMap*, intptr_t, QwtInterval*, double);
struct miqt_array /* of unsigned int */  miqt_exec_callback_QwtAlphaColorMap_colorTable(const QwtAlphaColorMap*, intptr_t, QwtInterval*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtColorMap final : public QwtColorMap {
public:

	MiqtVirtualQwtColorMap(): QwtColorMap() {}
	MiqtVirtualQwtColorMap(QwtColorMap::Format param1): QwtColorMap(param1) {}

	virtual ~MiqtVirtualQwtColorMap() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__rgb = 0;

	// Subclass to allow providing a Go implementation
	virtual QRgb rgb(const QwtInterval& interval, double value) const override {
		if (handle__rgb == 0) {
			return 0; // Pure virtual, there is no base we can call
		}

		const QwtInterval& interval_ret = interval;
		// Cast returned reference into pointer
		QwtInterval* sigval1 = const_cast<QwtInterval*>(&interval_ret);
		double sigval2 = value;
		unsigned int callback_return_value = miqt_exec_callback_QwtColorMap_rgb(this, handle__rgb, sigval1, sigval2);
		return static_cast<QRgb>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__colorIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual unsigned char colorIndex(const QwtInterval& interval, double value) const override {
		if (handle__colorIndex == 0) {
			return 0; // Pure virtual, there is no base we can call
		}

		const QwtInterval& interval_ret = interval;
		// Cast returned reference into pointer
		QwtInterval* sigval1 = const_cast<QwtInterval*>(&interval_ret);
		double sigval2 = value;
		unsigned char callback_return_value = miqt_exec_callback_QwtColorMap_colorIndex(this, handle__colorIndex, sigval1, sigval2);
		return static_cast<unsigned char>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__colorTable = 0;

	// Subclass to allow providing a Go implementation
	virtual QVector<QRgb> colorTable(const QwtInterval& param1) const override {
		if (handle__colorTable == 0) {
			return QwtColorMap::colorTable(param1);
		}

		const QwtInterval& param1_ret = param1;
		// Cast returned reference into pointer
		QwtInterval* sigval1 = const_cast<QwtInterval*>(&param1_ret);
		struct miqt_array /* of unsigned int */  callback_return_value = miqt_exec_callback_QwtColorMap_colorTable(this, handle__colorTable, sigval1);
		QVector<QRgb> callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		unsigned int* callback_return_value_arr = static_cast<unsigned int*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(static_cast<unsigned int>(callback_return_value_arr[i]));
		}
		return callback_return_value_QList;
	}

	friend struct miqt_array /* of unsigned int */  QwtColorMap_virtualbase_colorTable(const void* self, QwtInterval* param1);

};

QwtColorMap* QwtColorMap_new() {
	return new (std::nothrow) MiqtVirtualQwtColorMap();
}

QwtColorMap* QwtColorMap_new2(int param1) {
	return new (std::nothrow) MiqtVirtualQwtColorMap(static_cast<QwtColorMap::Format>(param1));
}

int QwtColorMap_format(const QwtColorMap* self) {
	QwtColorMap::Format _ret = self->format();
	return static_cast<int>(_ret);
}

unsigned int QwtColorMap_rgb(const QwtColorMap* self, QwtInterval* interval, double value) {
	QRgb _ret = self->rgb(*interval, static_cast<double>(value));
	return static_cast<unsigned int>(_ret);
}

unsigned char QwtColorMap_colorIndex(const QwtColorMap* self, QwtInterval* interval, double value) {
	return self->colorIndex(*interval, static_cast<double>(value));
}

QColor* QwtColorMap_color(const QwtColorMap* self, QwtInterval* param1, double value) {
	return new QColor(self->color(*param1, static_cast<double>(value)));
}

struct miqt_array /* of unsigned int */  QwtColorMap_colorTable(const QwtColorMap* self, QwtInterval* param1) {
	QVector<QRgb> _ret = self->colorTable(*param1);
	// Convert QList<> from C++ memory to manually-managed C memory
	unsigned int* _arr = static_cast<unsigned int*>(malloc(sizeof(unsigned int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QwtColorMap_operatorAssign(QwtColorMap* self, QwtColorMap* param1) {
	self->operator=(*param1);
}

bool QwtColorMap_override_virtual_rgb(void* self, intptr_t slot) {
	MiqtVirtualQwtColorMap* self_cast = dynamic_cast<MiqtVirtualQwtColorMap*>( (QwtColorMap*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__rgb = slot;
	return true;
}

bool QwtColorMap_override_virtual_colorIndex(void* self, intptr_t slot) {
	MiqtVirtualQwtColorMap* self_cast = dynamic_cast<MiqtVirtualQwtColorMap*>( (QwtColorMap*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__colorIndex = slot;
	return true;
}

bool QwtColorMap_override_virtual_colorTable(void* self, intptr_t slot) {
	MiqtVirtualQwtColorMap* self_cast = dynamic_cast<MiqtVirtualQwtColorMap*>( (QwtColorMap*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__colorTable = slot;
	return true;
}

struct miqt_array /* of unsigned int */  QwtColorMap_virtualbase_colorTable(const void* self, QwtInterval* param1) {
	QVector<QRgb> _ret = static_cast<const MiqtVirtualQwtColorMap*>(self)->QwtColorMap::colorTable(*param1);
	// Convert QList<> from C++ memory to manually-managed C memory
	unsigned int* _arr = static_cast<unsigned int*>(malloc(sizeof(unsigned int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QwtColorMap_delete(QwtColorMap* self) {
	delete self;
}

class MiqtVirtualQwtLinearColorMap final : public QwtLinearColorMap {
public:

	MiqtVirtualQwtLinearColorMap(): QwtLinearColorMap() {}
	MiqtVirtualQwtLinearColorMap(const QColor& color1, const QColor& color2): QwtLinearColorMap(color1, color2) {}
	MiqtVirtualQwtLinearColorMap(QwtColorMap::Format param1): QwtLinearColorMap(param1) {}
	MiqtVirtualQwtLinearColorMap(const QColor& color1, const QColor& color2, QwtColorMap::Format param3): QwtLinearColorMap(color1, color2, param3) {}

	virtual ~MiqtVirtualQwtLinearColorMap() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__rgb = 0;

	// Subclass to allow providing a Go implementation
	virtual QRgb rgb(const QwtInterval& param1, double value) const override {
		if (handle__rgb == 0) {
			return QwtLinearColorMap::rgb(param1, value);
		}

		const QwtInterval& param1_ret = param1;
		// Cast returned reference into pointer
		QwtInterval* sigval1 = const_cast<QwtInterval*>(&param1_ret);
		double sigval2 = value;
		unsigned int callback_return_value = miqt_exec_callback_QwtLinearColorMap_rgb(this, handle__rgb, sigval1, sigval2);
		return static_cast<QRgb>(callback_return_value);
	}

	friend unsigned int QwtLinearColorMap_virtualbase_rgb(const void* self, QwtInterval* param1, double value);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__colorIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual unsigned char colorIndex(const QwtInterval& param1, double value) const override {
		if (handle__colorIndex == 0) {
			return QwtLinearColorMap::colorIndex(param1, value);
		}

		const QwtInterval& param1_ret = param1;
		// Cast returned reference into pointer
		QwtInterval* sigval1 = const_cast<QwtInterval*>(&param1_ret);
		double sigval2 = value;
		unsigned char callback_return_value = miqt_exec_callback_QwtLinearColorMap_colorIndex(this, handle__colorIndex, sigval1, sigval2);
		return static_cast<unsigned char>(callback_return_value);
	}

	friend unsigned char QwtLinearColorMap_virtualbase_colorIndex(const void* self, QwtInterval* param1, double value);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__colorTable = 0;

	// Subclass to allow providing a Go implementation
	virtual QVector<QRgb> colorTable(const QwtInterval& param1) const override {
		if (handle__colorTable == 0) {
			return QwtLinearColorMap::colorTable(param1);
		}

		const QwtInterval& param1_ret = param1;
		// Cast returned reference into pointer
		QwtInterval* sigval1 = const_cast<QwtInterval*>(&param1_ret);
		struct miqt_array /* of unsigned int */  callback_return_value = miqt_exec_callback_QwtLinearColorMap_colorTable(this, handle__colorTable, sigval1);
		QVector<QRgb> callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		unsigned int* callback_return_value_arr = static_cast<unsigned int*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(static_cast<unsigned int>(callback_return_value_arr[i]));
		}
		return callback_return_value_QList;
	}

	friend struct miqt_array /* of unsigned int */  QwtLinearColorMap_virtualbase_colorTable(const void* self, QwtInterval* param1);

};

QwtLinearColorMap* QwtLinearColorMap_new() {
	return new (std::nothrow) MiqtVirtualQwtLinearColorMap();
}

QwtLinearColorMap* QwtLinearColorMap_new2(QColor* color1, QColor* color2) {
	return new (std::nothrow) MiqtVirtualQwtLinearColorMap(*color1, *color2);
}

QwtLinearColorMap* QwtLinearColorMap_new3(int param1) {
	return new (std::nothrow) MiqtVirtualQwtLinearColorMap(static_cast<QwtColorMap::Format>(param1));
}

QwtLinearColorMap* QwtLinearColorMap_new4(QColor* color1, QColor* color2, int param3) {
	return new (std::nothrow) MiqtVirtualQwtLinearColorMap(*color1, *color2, static_cast<QwtColorMap::Format>(param3));
}

void QwtLinearColorMap_virtbase(QwtLinearColorMap* src, QwtColorMap** outptr_QwtColorMap) {
	*outptr_QwtColorMap = static_cast<QwtColorMap*>(src);
}

void QwtLinearColorMap_setMode(QwtLinearColorMap* self, int mode) {
	self->setMode(static_cast<QwtLinearColorMap::Mode>(mode));
}

int QwtLinearColorMap_mode(const QwtLinearColorMap* self) {
	QwtLinearColorMap::Mode _ret = self->mode();
	return static_cast<int>(_ret);
}

void QwtLinearColorMap_setColorInterval(QwtLinearColorMap* self, QColor* color1, QColor* color2) {
	self->setColorInterval(*color1, *color2);
}

void QwtLinearColorMap_addColorStop(QwtLinearColorMap* self, double value, QColor* param2) {
	self->addColorStop(static_cast<double>(value), *param2);
}

struct miqt_array /* of double */  QwtLinearColorMap_colorStops(const QwtLinearColorMap* self) {
	QVector<double> _ret = self->colorStops();
	// Convert QList<> from C++ memory to manually-managed C memory
	double* _arr = static_cast<double*>(malloc(sizeof(double) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QColor* QwtLinearColorMap_color1(const QwtLinearColorMap* self) {
	return new QColor(self->color1());
}

QColor* QwtLinearColorMap_color2(const QwtLinearColorMap* self) {
	return new QColor(self->color2());
}

unsigned int QwtLinearColorMap_rgb(const QwtLinearColorMap* self, QwtInterval* param1, double value) {
	QRgb _ret = self->rgb(*param1, static_cast<double>(value));
	return static_cast<unsigned int>(_ret);
}

unsigned char QwtLinearColorMap_colorIndex(const QwtLinearColorMap* self, QwtInterval* param1, double value) {
	return self->colorIndex(*param1, static_cast<double>(value));
}

bool QwtLinearColorMap_override_virtual_rgb(void* self, intptr_t slot) {
	MiqtVirtualQwtLinearColorMap* self_cast = dynamic_cast<MiqtVirtualQwtLinearColorMap*>( (QwtLinearColorMap*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__rgb = slot;
	return true;
}

unsigned int QwtLinearColorMap_virtualbase_rgb(const void* self, QwtInterval* param1, double value) {
	QRgb _ret = static_cast<const MiqtVirtualQwtLinearColorMap*>(self)->QwtLinearColorMap::rgb(*param1, static_cast<double>(value));
	return static_cast<unsigned int>(_ret);
}

bool QwtLinearColorMap_override_virtual_colorIndex(void* self, intptr_t slot) {
	MiqtVirtualQwtLinearColorMap* self_cast = dynamic_cast<MiqtVirtualQwtLinearColorMap*>( (QwtLinearColorMap*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__colorIndex = slot;
	return true;
}

unsigned char QwtLinearColorMap_virtualbase_colorIndex(const void* self, QwtInterval* param1, double value) {
	return static_cast<const MiqtVirtualQwtLinearColorMap*>(self)->QwtLinearColorMap::colorIndex(*param1, static_cast<double>(value));
}

bool QwtLinearColorMap_override_virtual_colorTable(void* self, intptr_t slot) {
	MiqtVirtualQwtLinearColorMap* self_cast = dynamic_cast<MiqtVirtualQwtLinearColorMap*>( (QwtLinearColorMap*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__colorTable = slot;
	return true;
}

struct miqt_array /* of unsigned int */  QwtLinearColorMap_virtualbase_colorTable(const void* self, QwtInterval* param1) {
	QVector<QRgb> _ret = static_cast<const MiqtVirtualQwtLinearColorMap*>(self)->QwtLinearColorMap::colorTable(*param1);
	// Convert QList<> from C++ memory to manually-managed C memory
	unsigned int* _arr = static_cast<unsigned int*>(malloc(sizeof(unsigned int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QwtLinearColorMap_delete(QwtLinearColorMap* self) {
	delete self;
}

class MiqtVirtualQwtAlphaColorMap final : public QwtAlphaColorMap {
public:

	MiqtVirtualQwtAlphaColorMap(): QwtAlphaColorMap() {}
	MiqtVirtualQwtAlphaColorMap(const QColor& param1): QwtAlphaColorMap(param1) {}

	virtual ~MiqtVirtualQwtAlphaColorMap() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__rgb = 0;

	// Subclass to allow providing a Go implementation
	virtual QRgb rgb(const QwtInterval& param1, double value) const override {
		if (handle__rgb == 0) {
			return QwtAlphaColorMap::rgb(param1, value);
		}

		const QwtInterval& param1_ret = param1;
		// Cast returned reference into pointer
		QwtInterval* sigval1 = const_cast<QwtInterval*>(&param1_ret);
		double sigval2 = value;
		unsigned int callback_return_value = miqt_exec_callback_QwtAlphaColorMap_rgb(this, handle__rgb, sigval1, sigval2);
		return static_cast<QRgb>(callback_return_value);
	}

	friend unsigned int QwtAlphaColorMap_virtualbase_rgb(const void* self, QwtInterval* param1, double value);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__colorTable = 0;

	// Subclass to allow providing a Go implementation
	virtual QVector<QRgb> colorTable(const QwtInterval& param1) const override {
		if (handle__colorTable == 0) {
			return QwtAlphaColorMap::colorTable(param1);
		}

		const QwtInterval& param1_ret = param1;
		// Cast returned reference into pointer
		QwtInterval* sigval1 = const_cast<QwtInterval*>(&param1_ret);
		struct miqt_array /* of unsigned int */  callback_return_value = miqt_exec_callback_QwtAlphaColorMap_colorTable(this, handle__colorTable, sigval1);
		QVector<QRgb> callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		unsigned int* callback_return_value_arr = static_cast<unsigned int*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(static_cast<unsigned int>(callback_return_value_arr[i]));
		}
		return callback_return_value_QList;
	}

	friend struct miqt_array /* of unsigned int */  QwtAlphaColorMap_virtualbase_colorTable(const void* self, QwtInterval* param1);

};

QwtAlphaColorMap* QwtAlphaColorMap_new() {
	return new (std::nothrow) MiqtVirtualQwtAlphaColorMap();
}

QwtAlphaColorMap* QwtAlphaColorMap_new2(QColor* param1) {
	return new (std::nothrow) MiqtVirtualQwtAlphaColorMap(*param1);
}

void QwtAlphaColorMap_virtbase(QwtAlphaColorMap* src, QwtColorMap** outptr_QwtColorMap) {
	*outptr_QwtColorMap = static_cast<QwtColorMap*>(src);
}

void QwtAlphaColorMap_setColor(QwtAlphaColorMap* self, QColor* color) {
	self->setColor(*color);
}

QColor* QwtAlphaColorMap_color(const QwtAlphaColorMap* self) {
	return new QColor(self->color());
}

unsigned int QwtAlphaColorMap_rgb(const QwtAlphaColorMap* self, QwtInterval* param1, double value) {
	QRgb _ret = self->rgb(*param1, static_cast<double>(value));
	return static_cast<unsigned int>(_ret);
}

bool QwtAlphaColorMap_override_virtual_rgb(void* self, intptr_t slot) {
	MiqtVirtualQwtAlphaColorMap* self_cast = dynamic_cast<MiqtVirtualQwtAlphaColorMap*>( (QwtAlphaColorMap*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__rgb = slot;
	return true;
}

unsigned int QwtAlphaColorMap_virtualbase_rgb(const void* self, QwtInterval* param1, double value) {
	QRgb _ret = static_cast<const MiqtVirtualQwtAlphaColorMap*>(self)->QwtAlphaColorMap::rgb(*param1, static_cast<double>(value));
	return static_cast<unsigned int>(_ret);
}

bool QwtAlphaColorMap_override_virtual_colorTable(void* self, intptr_t slot) {
	MiqtVirtualQwtAlphaColorMap* self_cast = dynamic_cast<MiqtVirtualQwtAlphaColorMap*>( (QwtAlphaColorMap*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__colorTable = slot;
	return true;
}

struct miqt_array /* of unsigned int */  QwtAlphaColorMap_virtualbase_colorTable(const void* self, QwtInterval* param1) {
	QVector<QRgb> _ret = static_cast<const MiqtVirtualQwtAlphaColorMap*>(self)->QwtAlphaColorMap::colorTable(*param1);
	// Convert QList<> from C++ memory to manually-managed C memory
	unsigned int* _arr = static_cast<unsigned int*>(malloc(sizeof(unsigned int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QwtAlphaColorMap_delete(QwtAlphaColorMap* self) {
	delete self;
}

