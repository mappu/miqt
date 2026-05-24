#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPalette>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qwt_compass.h>
#include "gen_qwt_compass.h"

#ifdef __cplusplus
extern "C" {
#endif

QwtText* miqt_exec_callback_QwtCompassScaleDraw_label(const QwtCompassScaleDraw*, intptr_t, double);
double miqt_exec_callback_QwtCompassScaleDraw_extent(const QwtCompassScaleDraw*, intptr_t, QFont*);
void miqt_exec_callback_QwtCompassScaleDraw_drawTick(const QwtCompassScaleDraw*, intptr_t, QPainter*, double, double);
void miqt_exec_callback_QwtCompassScaleDraw_drawBackbone(const QwtCompassScaleDraw*, intptr_t, QPainter*);
void miqt_exec_callback_QwtCompassScaleDraw_drawLabel(const QwtCompassScaleDraw*, intptr_t, QPainter*, double);
void miqt_exec_callback_QwtCompassScaleDraw_draw(const QwtCompassScaleDraw*, intptr_t, QPainter*, QPalette*);
void miqt_exec_callback_QwtCompass_drawRose(const QwtCompass*, intptr_t, QPainter*, QPointF*, double, double, int);
void miqt_exec_callback_QwtCompass_drawScaleContents(const QwtCompass*, intptr_t, QPainter*, QPointF*, double);
void miqt_exec_callback_QwtCompass_keyPressEvent(QwtCompass*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtCompass_setOrigin(QwtCompass*, intptr_t, double);
QRect* miqt_exec_callback_QwtCompass_scaleInnerRect(const QwtCompass*, intptr_t);
QSize* miqt_exec_callback_QwtCompass_sizeHint(const QwtCompass*, intptr_t);
QSize* miqt_exec_callback_QwtCompass_minimumSizeHint(const QwtCompass*, intptr_t);
void miqt_exec_callback_QwtCompass_wheelEvent(QwtCompass*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QwtCompass_paintEvent(QwtCompass*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QwtCompass_changeEvent(QwtCompass*, intptr_t, QEvent*);
void miqt_exec_callback_QwtCompass_drawFrame(QwtCompass*, intptr_t, QPainter*);
void miqt_exec_callback_QwtCompass_drawContents(const QwtCompass*, intptr_t, QPainter*);
void miqt_exec_callback_QwtCompass_drawFocusIndicator(const QwtCompass*, intptr_t, QPainter*);
void miqt_exec_callback_QwtCompass_drawScale(const QwtCompass*, intptr_t, QPainter*, QPointF*, double);
void miqt_exec_callback_QwtCompass_drawNeedle(const QwtCompass*, intptr_t, QPainter*, QPointF*, double, double, int);
double miqt_exec_callback_QwtCompass_scrolledTo(const QwtCompass*, intptr_t, QPoint*);
bool miqt_exec_callback_QwtCompass_isScrollPosition(const QwtCompass*, intptr_t, QPoint*);
void miqt_exec_callback_QwtCompass_sliderChange(QwtCompass*, intptr_t);
void miqt_exec_callback_QwtCompass_scaleChange(QwtCompass*, intptr_t);
void miqt_exec_callback_QwtCompass_mousePressEvent(QwtCompass*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtCompass_mouseReleaseEvent(QwtCompass*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtCompass_mouseMoveEvent(QwtCompass*, intptr_t, QMouseEvent*);
int miqt_exec_callback_QwtCompass_devType(const QwtCompass*, intptr_t);
void miqt_exec_callback_QwtCompass_setVisible(QwtCompass*, intptr_t, bool);
int miqt_exec_callback_QwtCompass_heightForWidth(const QwtCompass*, intptr_t, int);
bool miqt_exec_callback_QwtCompass_hasHeightForWidth(const QwtCompass*, intptr_t);
QPaintEngine* miqt_exec_callback_QwtCompass_paintEngine(const QwtCompass*, intptr_t);
bool miqt_exec_callback_QwtCompass_event(QwtCompass*, intptr_t, QEvent*);
void miqt_exec_callback_QwtCompass_mouseDoubleClickEvent(QwtCompass*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtCompass_keyReleaseEvent(QwtCompass*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtCompass_focusInEvent(QwtCompass*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QwtCompass_focusOutEvent(QwtCompass*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QwtCompass_enterEvent(QwtCompass*, intptr_t, QEvent*);
void miqt_exec_callback_QwtCompass_leaveEvent(QwtCompass*, intptr_t, QEvent*);
void miqt_exec_callback_QwtCompass_moveEvent(QwtCompass*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QwtCompass_resizeEvent(QwtCompass*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QwtCompass_closeEvent(QwtCompass*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QwtCompass_contextMenuEvent(QwtCompass*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QwtCompass_tabletEvent(QwtCompass*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QwtCompass_actionEvent(QwtCompass*, intptr_t, QActionEvent*);
void miqt_exec_callback_QwtCompass_dragEnterEvent(QwtCompass*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QwtCompass_dragMoveEvent(QwtCompass*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QwtCompass_dragLeaveEvent(QwtCompass*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QwtCompass_dropEvent(QwtCompass*, intptr_t, QDropEvent*);
void miqt_exec_callback_QwtCompass_showEvent(QwtCompass*, intptr_t, QShowEvent*);
void miqt_exec_callback_QwtCompass_hideEvent(QwtCompass*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QwtCompass_nativeEvent(QwtCompass*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QwtCompass_metric(const QwtCompass*, intptr_t, int);
void miqt_exec_callback_QwtCompass_initPainter(const QwtCompass*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QwtCompass_redirected(const QwtCompass*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QwtCompass_sharedPainter(const QwtCompass*, intptr_t);
void miqt_exec_callback_QwtCompass_inputMethodEvent(QwtCompass*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QwtCompass_inputMethodQuery(const QwtCompass*, intptr_t, int);
bool miqt_exec_callback_QwtCompass_focusNextPrevChild(QwtCompass*, intptr_t, bool);
bool miqt_exec_callback_QwtCompass_eventFilter(QwtCompass*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QwtCompass_timerEvent(QwtCompass*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QwtCompass_childEvent(QwtCompass*, intptr_t, QChildEvent*);
void miqt_exec_callback_QwtCompass_customEvent(QwtCompass*, intptr_t, QEvent*);
void miqt_exec_callback_QwtCompass_connectNotify(QwtCompass*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QwtCompass_disconnectNotify(QwtCompass*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtCompassScaleDraw final : public QwtCompassScaleDraw {
public:

	MiqtVirtualQwtCompassScaleDraw(): QwtCompassScaleDraw() {}
	MiqtVirtualQwtCompassScaleDraw(const QMap<double, QString>& map): QwtCompassScaleDraw(map) {}

	virtual ~MiqtVirtualQwtCompassScaleDraw() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__label = 0;

	// Subclass to allow providing a Go implementation
	virtual QwtText label(double value) const override {
		if (handle__label == 0) {
			return QwtCompassScaleDraw::label(value);
		}

		double sigval1 = value;
		QwtText* callback_return_value = miqt_exec_callback_QwtCompassScaleDraw_label(this, handle__label, sigval1);
		return *callback_return_value;
	}

	friend QwtText* QwtCompassScaleDraw_virtualbase_label(const void* self, double value);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__extent = 0;

	// Subclass to allow providing a Go implementation
	virtual double extent(const QFont& param1) const override {
		if (handle__extent == 0) {
			return QwtCompassScaleDraw::extent(param1);
		}

		const QFont& param1_ret = param1;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&param1_ret);
		double callback_return_value = miqt_exec_callback_QwtCompassScaleDraw_extent(this, handle__extent, sigval1);
		return static_cast<double>(callback_return_value);
	}

	friend double QwtCompassScaleDraw_virtualbase_extent(const void* self, QFont* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawTick = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawTick(QPainter* param1, double value, double len) const override {
		if (handle__drawTick == 0) {
			QwtCompassScaleDraw::drawTick(param1, value, len);
			return;
		}

		QPainter* sigval1 = param1;
		double sigval2 = value;
		double sigval3 = len;
		miqt_exec_callback_QwtCompassScaleDraw_drawTick(this, handle__drawTick, sigval1, sigval2, sigval3);

	}

	friend void QwtCompassScaleDraw_virtualbase_drawTick(const void* self, QPainter* param1, double value, double len);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawBackbone = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawBackbone(QPainter* param1) const override {
		if (handle__drawBackbone == 0) {
			QwtCompassScaleDraw::drawBackbone(param1);
			return;
		}

		QPainter* sigval1 = param1;
		miqt_exec_callback_QwtCompassScaleDraw_drawBackbone(this, handle__drawBackbone, sigval1);

	}

	friend void QwtCompassScaleDraw_virtualbase_drawBackbone(const void* self, QPainter* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawLabel = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawLabel(QPainter* param1, double val) const override {
		if (handle__drawLabel == 0) {
			QwtCompassScaleDraw::drawLabel(param1, val);
			return;
		}

		QPainter* sigval1 = param1;
		double sigval2 = val;
		miqt_exec_callback_QwtCompassScaleDraw_drawLabel(this, handle__drawLabel, sigval1, sigval2);

	}

	friend void QwtCompassScaleDraw_virtualbase_drawLabel(const void* self, QPainter* param1, double val);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__draw = 0;

	// Subclass to allow providing a Go implementation
	virtual void draw(QPainter* param1, const QPalette& param2) const override {
		if (handle__draw == 0) {
			QwtCompassScaleDraw::draw(param1, param2);
			return;
		}

		QPainter* sigval1 = param1;
		const QPalette& param2_ret = param2;
		// Cast returned reference into pointer
		QPalette* sigval2 = const_cast<QPalette*>(&param2_ret);
		miqt_exec_callback_QwtCompassScaleDraw_draw(this, handle__draw, sigval1, sigval2);

	}

	friend void QwtCompassScaleDraw_virtualbase_draw(const void* self, QPainter* param1, QPalette* param2);

	// Wrappers to allow calling protected methods:
	friend void QwtCompassScaleDraw_protectedbase_invalidateCache(bool* _dynamic_cast_ok, void* self);
	friend QwtText* QwtCompassScaleDraw_protectedbase_tickLabel(bool* _dynamic_cast_ok, const void* self, QFont* param1, double value);
};

QwtCompassScaleDraw* QwtCompassScaleDraw_new() {
	return new (std::nothrow) MiqtVirtualQwtCompassScaleDraw();
}

QwtCompassScaleDraw* QwtCompassScaleDraw_new2(struct miqt_map /* of double to struct miqt_string */  map) {
	QMap<double, QString> map_QMap;
	double* map_karr = static_cast<double*>(map.keys);
	struct miqt_string* map_varr = static_cast<struct miqt_string*>(map.values);
	for(size_t i = 0; i < map.len; ++i) {
		QString map_varr_i_QString = QString::fromUtf8(map_varr[i].data, map_varr[i].len);
		map_QMap[static_cast<double>(map_karr[i])] = map_varr_i_QString;
	}
	return new (std::nothrow) MiqtVirtualQwtCompassScaleDraw(map_QMap);
}

void QwtCompassScaleDraw_virtbase(QwtCompassScaleDraw* src, QwtRoundScaleDraw** outptr_QwtRoundScaleDraw) {
	*outptr_QwtRoundScaleDraw = static_cast<QwtRoundScaleDraw*>(src);
}

void QwtCompassScaleDraw_setLabelMap(QwtCompassScaleDraw* self, struct miqt_map /* of double to struct miqt_string */  map) {
	QMap<double, QString> map_QMap;
	double* map_karr = static_cast<double*>(map.keys);
	struct miqt_string* map_varr = static_cast<struct miqt_string*>(map.values);
	for(size_t i = 0; i < map.len; ++i) {
		QString map_varr_i_QString = QString::fromUtf8(map_varr[i].data, map_varr[i].len);
		map_QMap[static_cast<double>(map_karr[i])] = map_varr_i_QString;
	}
	self->setLabelMap(map_QMap);
}

struct miqt_map /* of double to struct miqt_string */  QwtCompassScaleDraw_labelMap(const QwtCompassScaleDraw* self) {
	QMap<double, QString> _ret = self->labelMap();
	// Convert QMap<> from C++ memory to manually-managed C memory
	double* _karr = static_cast<double*>(malloc(sizeof(double) * _ret.size()));
	struct miqt_string* _varr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.size()));
	int _ctr = 0;
	for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
		_karr[_ctr] = _itr->first;
		QString _mapval_ret = _itr->second;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _mapval_b = _mapval_ret.toUtf8();
		struct miqt_string _mapval_ms;
		_mapval_ms.len = _mapval_b.length();
		_mapval_ms.data = static_cast<char*>(malloc(_mapval_ms.len));
		memcpy(_mapval_ms.data, _mapval_b.data(), _mapval_ms.len);
		_varr[_ctr] = _mapval_ms;
		_ctr++;
	}
	struct miqt_map _out;
	_out.len = _ret.size();
	_out.keys = static_cast<void*>(_karr);
	_out.values = static_cast<void*>(_varr);
	return _out;
}

QwtText* QwtCompassScaleDraw_label(const QwtCompassScaleDraw* self, double value) {
	return new QwtText(self->label(static_cast<double>(value)));
}

bool QwtCompassScaleDraw_override_virtual_label(void* self, intptr_t slot) {
	MiqtVirtualQwtCompassScaleDraw* self_cast = dynamic_cast<MiqtVirtualQwtCompassScaleDraw*>( (QwtCompassScaleDraw*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__label = slot;
	return true;
}

QwtText* QwtCompassScaleDraw_virtualbase_label(const void* self, double value) {
	return new QwtText(static_cast<const MiqtVirtualQwtCompassScaleDraw*>(self)->QwtCompassScaleDraw::label(static_cast<double>(value)));
}

bool QwtCompassScaleDraw_override_virtual_extent(void* self, intptr_t slot) {
	MiqtVirtualQwtCompassScaleDraw* self_cast = dynamic_cast<MiqtVirtualQwtCompassScaleDraw*>( (QwtCompassScaleDraw*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__extent = slot;
	return true;
}

double QwtCompassScaleDraw_virtualbase_extent(const void* self, QFont* param1) {
	return static_cast<const MiqtVirtualQwtCompassScaleDraw*>(self)->QwtCompassScaleDraw::extent(*param1);
}

bool QwtCompassScaleDraw_override_virtual_drawTick(void* self, intptr_t slot) {
	MiqtVirtualQwtCompassScaleDraw* self_cast = dynamic_cast<MiqtVirtualQwtCompassScaleDraw*>( (QwtCompassScaleDraw*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawTick = slot;
	return true;
}

void QwtCompassScaleDraw_virtualbase_drawTick(const void* self, QPainter* param1, double value, double len) {
	static_cast<const MiqtVirtualQwtCompassScaleDraw*>(self)->QwtCompassScaleDraw::drawTick(param1, static_cast<double>(value), static_cast<double>(len));
}

bool QwtCompassScaleDraw_override_virtual_drawBackbone(void* self, intptr_t slot) {
	MiqtVirtualQwtCompassScaleDraw* self_cast = dynamic_cast<MiqtVirtualQwtCompassScaleDraw*>( (QwtCompassScaleDraw*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawBackbone = slot;
	return true;
}

void QwtCompassScaleDraw_virtualbase_drawBackbone(const void* self, QPainter* param1) {
	static_cast<const MiqtVirtualQwtCompassScaleDraw*>(self)->QwtCompassScaleDraw::drawBackbone(param1);
}

bool QwtCompassScaleDraw_override_virtual_drawLabel(void* self, intptr_t slot) {
	MiqtVirtualQwtCompassScaleDraw* self_cast = dynamic_cast<MiqtVirtualQwtCompassScaleDraw*>( (QwtCompassScaleDraw*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawLabel = slot;
	return true;
}

void QwtCompassScaleDraw_virtualbase_drawLabel(const void* self, QPainter* param1, double val) {
	static_cast<const MiqtVirtualQwtCompassScaleDraw*>(self)->QwtCompassScaleDraw::drawLabel(param1, static_cast<double>(val));
}

bool QwtCompassScaleDraw_override_virtual_draw(void* self, intptr_t slot) {
	MiqtVirtualQwtCompassScaleDraw* self_cast = dynamic_cast<MiqtVirtualQwtCompassScaleDraw*>( (QwtCompassScaleDraw*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__draw = slot;
	return true;
}

void QwtCompassScaleDraw_virtualbase_draw(const void* self, QPainter* param1, QPalette* param2) {
	static_cast<const MiqtVirtualQwtCompassScaleDraw*>(self)->QwtCompassScaleDraw::draw(param1, *param2);
}

void QwtCompassScaleDraw_protectedbase_invalidateCache(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtCompassScaleDraw* self_cast = dynamic_cast<MiqtVirtualQwtCompassScaleDraw*>( (QwtCompassScaleDraw*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->invalidateCache();
}

QwtText* QwtCompassScaleDraw_protectedbase_tickLabel(bool* _dynamic_cast_ok, const void* self, QFont* param1, double value) {
	MiqtVirtualQwtCompassScaleDraw* self_cast = dynamic_cast<MiqtVirtualQwtCompassScaleDraw*>( (QwtCompassScaleDraw*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	const QwtText& _ret = self_cast->tickLabel(*param1, static_cast<double>(value));
	// Cast returned reference into pointer
	return const_cast<QwtText*>(&_ret);
}

void QwtCompassScaleDraw_delete(QwtCompassScaleDraw* self) {
	delete self;
}

class MiqtVirtualQwtCompass final : public QwtCompass {
public:

	MiqtVirtualQwtCompass(QWidget* parent): QwtCompass(parent) {}
	MiqtVirtualQwtCompass(): QwtCompass() {}

	virtual ~MiqtVirtualQwtCompass() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawRose = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawRose(QPainter* param1, const QPointF& center, double radius, double north, QPalette::ColorGroup param5) const override {
		if (handle__drawRose == 0) {
			QwtCompass::drawRose(param1, center, radius, north, param5);
			return;
		}

		QPainter* sigval1 = param1;
		const QPointF& center_ret = center;
		// Cast returned reference into pointer
		QPointF* sigval2 = const_cast<QPointF*>(&center_ret);
		double sigval3 = radius;
		double sigval4 = north;
		QPalette::ColorGroup param5_ret = param5;
		int sigval5 = static_cast<int>(param5_ret);
		miqt_exec_callback_QwtCompass_drawRose(this, handle__drawRose, sigval1, sigval2, sigval3, sigval4, sigval5);

	}

	friend void QwtCompass_virtualbase_drawRose(const void* self, QPainter* param1, QPointF* center, double radius, double north, int param5);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawScaleContents = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawScaleContents(QPainter* param1, const QPointF& center, double radius) const override {
		if (handle__drawScaleContents == 0) {
			QwtCompass::drawScaleContents(param1, center, radius);
			return;
		}

		QPainter* sigval1 = param1;
		const QPointF& center_ret = center;
		// Cast returned reference into pointer
		QPointF* sigval2 = const_cast<QPointF*>(&center_ret);
		double sigval3 = radius;
		miqt_exec_callback_QwtCompass_drawScaleContents(this, handle__drawScaleContents, sigval1, sigval2, sigval3);

	}

	friend void QwtCompass_virtualbase_drawScaleContents(const void* self, QPainter* param1, QPointF* center, double radius);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__keyPressEvent == 0) {
			QwtCompass::keyPressEvent(param1);
			return;
		}

		QKeyEvent* sigval1 = param1;
		miqt_exec_callback_QwtCompass_keyPressEvent(this, handle__keyPressEvent, sigval1);

	}

	friend void QwtCompass_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setOrigin = 0;

	// Subclass to allow providing a Go implementation
	virtual void setOrigin(double origin) override {
		if (handle__setOrigin == 0) {
			QwtCompass::setOrigin(origin);
			return;
		}

		double sigval1 = origin;
		miqt_exec_callback_QwtCompass_setOrigin(this, handle__setOrigin, sigval1);

	}

	friend void QwtCompass_virtualbase_setOrigin(void* self, double origin);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scaleInnerRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect scaleInnerRect() const override {
		if (handle__scaleInnerRect == 0) {
			return QwtCompass::scaleInnerRect();
		}

		QRect* callback_return_value = miqt_exec_callback_QwtCompass_scaleInnerRect(this, handle__scaleInnerRect);
		return *callback_return_value;
	}

	friend QRect* QwtCompass_virtualbase_scaleInnerRect(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QwtCompass::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtCompass_sizeHint(this, handle__sizeHint);
		return *callback_return_value;
	}

	friend QSize* QwtCompass_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QwtCompass::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtCompass_minimumSizeHint(this, handle__minimumSizeHint);
		return *callback_return_value;
	}

	friend QSize* QwtCompass_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (handle__wheelEvent == 0) {
			QwtCompass::wheelEvent(param1);
			return;
		}

		QWheelEvent* sigval1 = param1;
		miqt_exec_callback_QwtCompass_wheelEvent(this, handle__wheelEvent, sigval1);

	}

	friend void QwtCompass_virtualbase_wheelEvent(void* self, QWheelEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__paintEvent == 0) {
			QwtCompass::paintEvent(param1);
			return;
		}

		QPaintEvent* sigval1 = param1;
		miqt_exec_callback_QwtCompass_paintEvent(this, handle__paintEvent, sigval1);

	}

	friend void QwtCompass_virtualbase_paintEvent(void* self, QPaintEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QwtCompass::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QwtCompass_changeEvent(this, handle__changeEvent, sigval1);

	}

	friend void QwtCompass_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawFrame = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawFrame(QPainter* param1) override {
		if (handle__drawFrame == 0) {
			QwtCompass::drawFrame(param1);
			return;
		}

		QPainter* sigval1 = param1;
		miqt_exec_callback_QwtCompass_drawFrame(this, handle__drawFrame, sigval1);

	}

	friend void QwtCompass_virtualbase_drawFrame(void* self, QPainter* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawContents = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawContents(QPainter* param1) const override {
		if (handle__drawContents == 0) {
			QwtCompass::drawContents(param1);
			return;
		}

		QPainter* sigval1 = param1;
		miqt_exec_callback_QwtCompass_drawContents(this, handle__drawContents, sigval1);

	}

	friend void QwtCompass_virtualbase_drawContents(const void* self, QPainter* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawFocusIndicator = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawFocusIndicator(QPainter* param1) const override {
		if (handle__drawFocusIndicator == 0) {
			QwtCompass::drawFocusIndicator(param1);
			return;
		}

		QPainter* sigval1 = param1;
		miqt_exec_callback_QwtCompass_drawFocusIndicator(this, handle__drawFocusIndicator, sigval1);

	}

	friend void QwtCompass_virtualbase_drawFocusIndicator(const void* self, QPainter* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawScale = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawScale(QPainter* param1, const QPointF& center, double radius) const override {
		if (handle__drawScale == 0) {
			QwtCompass::drawScale(param1, center, radius);
			return;
		}

		QPainter* sigval1 = param1;
		const QPointF& center_ret = center;
		// Cast returned reference into pointer
		QPointF* sigval2 = const_cast<QPointF*>(&center_ret);
		double sigval3 = radius;
		miqt_exec_callback_QwtCompass_drawScale(this, handle__drawScale, sigval1, sigval2, sigval3);

	}

	friend void QwtCompass_virtualbase_drawScale(const void* self, QPainter* param1, QPointF* center, double radius);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawNeedle = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawNeedle(QPainter* param1, const QPointF& param2, double radius, double direction, QPalette::ColorGroup param5) const override {
		if (handle__drawNeedle == 0) {
			QwtCompass::drawNeedle(param1, param2, radius, direction, param5);
			return;
		}

		QPainter* sigval1 = param1;
		const QPointF& param2_ret = param2;
		// Cast returned reference into pointer
		QPointF* sigval2 = const_cast<QPointF*>(&param2_ret);
		double sigval3 = radius;
		double sigval4 = direction;
		QPalette::ColorGroup param5_ret = param5;
		int sigval5 = static_cast<int>(param5_ret);
		miqt_exec_callback_QwtCompass_drawNeedle(this, handle__drawNeedle, sigval1, sigval2, sigval3, sigval4, sigval5);

	}

	friend void QwtCompass_virtualbase_drawNeedle(const void* self, QPainter* param1, QPointF* param2, double radius, double direction, int param5);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scrolledTo = 0;

	// Subclass to allow providing a Go implementation
	virtual double scrolledTo(const QPoint& param1) const override {
		if (handle__scrolledTo == 0) {
			return QwtCompass::scrolledTo(param1);
		}

		const QPoint& param1_ret = param1;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&param1_ret);
		double callback_return_value = miqt_exec_callback_QwtCompass_scrolledTo(this, handle__scrolledTo, sigval1);
		return static_cast<double>(callback_return_value);
	}

	friend double QwtCompass_virtualbase_scrolledTo(const void* self, QPoint* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isScrollPosition = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isScrollPosition(const QPoint& param1) const override {
		if (handle__isScrollPosition == 0) {
			return QwtCompass::isScrollPosition(param1);
		}

		const QPoint& param1_ret = param1;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&param1_ret);
		bool callback_return_value = miqt_exec_callback_QwtCompass_isScrollPosition(this, handle__isScrollPosition, sigval1);
		return callback_return_value;
	}

	friend bool QwtCompass_virtualbase_isScrollPosition(const void* self, QPoint* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sliderChange = 0;

	// Subclass to allow providing a Go implementation
	virtual void sliderChange() override {
		if (handle__sliderChange == 0) {
			QwtCompass::sliderChange();
			return;
		}

		miqt_exec_callback_QwtCompass_sliderChange(this, handle__sliderChange);

	}

	friend void QwtCompass_virtualbase_sliderChange(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scaleChange = 0;

	// Subclass to allow providing a Go implementation
	virtual void scaleChange() override {
		if (handle__scaleChange == 0) {
			QwtCompass::scaleChange();
			return;
		}

		miqt_exec_callback_QwtCompass_scaleChange(this, handle__scaleChange);

	}

	friend void QwtCompass_virtualbase_scaleChange(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (handle__mousePressEvent == 0) {
			QwtCompass::mousePressEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtCompass_mousePressEvent(this, handle__mousePressEvent, sigval1);

	}

	friend void QwtCompass_virtualbase_mousePressEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (handle__mouseReleaseEvent == 0) {
			QwtCompass::mouseReleaseEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtCompass_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

	}

	friend void QwtCompass_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (handle__mouseMoveEvent == 0) {
			QwtCompass::mouseMoveEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtCompass_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

	}

	friend void QwtCompass_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QwtCompass::devType();
		}

		int callback_return_value = miqt_exec_callback_QwtCompass_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtCompass_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QwtCompass::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QwtCompass_setVisible(this, handle__setVisible, sigval1);

	}

	friend void QwtCompass_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QwtCompass::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QwtCompass_heightForWidth(this, handle__heightForWidth, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtCompass_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QwtCompass::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QwtCompass_hasHeightForWidth(this, handle__hasHeightForWidth);
		return callback_return_value;
	}

	friend bool QwtCompass_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QwtCompass::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QwtCompass_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* QwtCompass_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QwtCompass::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QwtCompass_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QwtCompass_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QwtCompass::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtCompass_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

	}

	friend void QwtCompass_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QwtCompass::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QwtCompass_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

	}

	friend void QwtCompass_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QwtCompass::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QwtCompass_focusInEvent(this, handle__focusInEvent, sigval1);

	}

	friend void QwtCompass_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QwtCompass::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QwtCompass_focusOutEvent(this, handle__focusOutEvent, sigval1);

	}

	friend void QwtCompass_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QwtCompass::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtCompass_enterEvent(this, handle__enterEvent, sigval1);

	}

	friend void QwtCompass_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QwtCompass::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtCompass_leaveEvent(this, handle__leaveEvent, sigval1);

	}

	friend void QwtCompass_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QwtCompass::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QwtCompass_moveEvent(this, handle__moveEvent, sigval1);

	}

	friend void QwtCompass_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QwtCompass::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QwtCompass_resizeEvent(this, handle__resizeEvent, sigval1);

	}

	friend void QwtCompass_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QwtCompass::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QwtCompass_closeEvent(this, handle__closeEvent, sigval1);

	}

	friend void QwtCompass_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QwtCompass::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QwtCompass_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

	}

	friend void QwtCompass_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QwtCompass::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QwtCompass_tabletEvent(this, handle__tabletEvent, sigval1);

	}

	friend void QwtCompass_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QwtCompass::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QwtCompass_actionEvent(this, handle__actionEvent, sigval1);

	}

	friend void QwtCompass_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QwtCompass::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QwtCompass_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

	}

	friend void QwtCompass_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QwtCompass::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QwtCompass_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

	}

	friend void QwtCompass_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QwtCompass::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QwtCompass_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

	}

	friend void QwtCompass_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QwtCompass::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QwtCompass_dropEvent(this, handle__dropEvent, sigval1);

	}

	friend void QwtCompass_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QwtCompass::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QwtCompass_showEvent(this, handle__showEvent, sigval1);

	}

	friend void QwtCompass_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QwtCompass::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QwtCompass_hideEvent(this, handle__hideEvent, sigval1);

	}

	friend void QwtCompass_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QwtCompass::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QwtCompass_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QwtCompass_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QwtCompass::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QwtCompass_metric(this, handle__metric, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtCompass_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QwtCompass::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QwtCompass_initPainter(this, handle__initPainter, sigval1);

	}

	friend void QwtCompass_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QwtCompass::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QwtCompass_redirected(this, handle__redirected, sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QwtCompass_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QwtCompass::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QwtCompass_sharedPainter(this, handle__sharedPainter);
		return callback_return_value;
	}

	friend QPainter* QwtCompass_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QwtCompass::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QwtCompass_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

	}

	friend void QwtCompass_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QwtCompass::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QwtCompass_inputMethodQuery(this, handle__inputMethodQuery, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QwtCompass_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QwtCompass::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QwtCompass_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);
		return callback_return_value;
	}

	friend bool QwtCompass_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QwtCompass::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QwtCompass_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QwtCompass_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QwtCompass::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QwtCompass_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QwtCompass_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QwtCompass::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QwtCompass_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QwtCompass_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QwtCompass::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtCompass_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QwtCompass_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QwtCompass::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtCompass_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QwtCompass_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QwtCompass::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtCompass_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QwtCompass_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QwtCompass_protectedbase_invalidateCache(bool* _dynamic_cast_ok, void* self);
	friend void QwtCompass_protectedbase_incrementValue(bool* _dynamic_cast_ok, void* self, int stepCount);
	friend double QwtCompass_protectedbase_incrementedValue(bool* _dynamic_cast_ok, const void* self, double value, int stepCount);
	friend void QwtCompass_protectedbase_rescale(bool* _dynamic_cast_ok, void* self, double lowerBound, double upperBound, double stepSize);
	friend void QwtCompass_protectedbase_setAbstractScaleDraw(bool* _dynamic_cast_ok, void* self, QwtAbstractScaleDraw* abstractScaleDraw);
	friend QwtAbstractScaleDraw* QwtCompass_protectedbase_abstractScaleDraw(bool* _dynamic_cast_ok, const void* self);
	friend void QwtCompass_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QwtCompass_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QwtCompass_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QwtCompass_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QwtCompass_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QwtCompass_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QwtCompass_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QwtCompass_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QwtCompass_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QwtCompass* QwtCompass_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQwtCompass(parent);
}

QwtCompass* QwtCompass_new2() {
	return new (std::nothrow) MiqtVirtualQwtCompass();
}

void QwtCompass_virtbase(QwtCompass* src, QwtDial** outptr_QwtDial) {
	*outptr_QwtDial = static_cast<QwtDial*>(src);
}

QMetaObject* QwtCompass_metaObject(const QwtCompass* self) {
	return (QMetaObject*) self->metaObject();
}

void* QwtCompass_metacast(QwtCompass* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QwtCompass_tr(const char* s) {
	QString _ret = QwtCompass::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtCompass_trUtf8(const char* s) {
	QString _ret = QwtCompass::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QwtCompass_setRose(QwtCompass* self, QwtCompassRose* rose) {
	self->setRose(rose);
}

QwtCompassRose* QwtCompass_rose(const QwtCompass* self) {
	return (QwtCompassRose*) self->rose();
}

QwtCompassRose* QwtCompass_rose2(QwtCompass* self) {
	return self->rose();
}

struct miqt_string QwtCompass_tr2(const char* s, const char* c) {
	QString _ret = QwtCompass::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtCompass_tr3(const char* s, const char* c, int n) {
	QString _ret = QwtCompass::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtCompass_trUtf82(const char* s, const char* c) {
	QString _ret = QwtCompass::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtCompass_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QwtCompass::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QwtCompass_override_virtual_drawRose(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawRose = slot;
	return true;
}

void QwtCompass_virtualbase_drawRose(const void* self, QPainter* param1, QPointF* center, double radius, double north, int param5) {
	static_cast<const MiqtVirtualQwtCompass*>(self)->QwtCompass::drawRose(param1, *center, static_cast<double>(radius), static_cast<double>(north), static_cast<QPalette::ColorGroup>(param5));
}

bool QwtCompass_override_virtual_drawScaleContents(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawScaleContents = slot;
	return true;
}

void QwtCompass_virtualbase_drawScaleContents(const void* self, QPainter* param1, QPointF* center, double radius) {
	static_cast<const MiqtVirtualQwtCompass*>(self)->QwtCompass::drawScaleContents(param1, *center, static_cast<double>(radius));
}

bool QwtCompass_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QwtCompass_virtualbase_keyPressEvent(void* self, QKeyEvent* param1) {
	static_cast<MiqtVirtualQwtCompass*>(self)->QwtCompass::keyPressEvent(param1);
}

bool QwtCompass_override_virtual_setOrigin(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setOrigin = slot;
	return true;
}

void QwtCompass_virtualbase_setOrigin(void* self, double origin) {
	static_cast<MiqtVirtualQwtCompass*>(self)->QwtCompass::setOrigin(static_cast<double>(origin));
}

bool QwtCompass_override_virtual_scaleInnerRect(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__scaleInnerRect = slot;
	return true;
}

QRect* QwtCompass_virtualbase_scaleInnerRect(const void* self) {
	return new QRect(static_cast<const MiqtVirtualQwtCompass*>(self)->QwtCompass::scaleInnerRect());
}

bool QwtCompass_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QwtCompass_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtCompass*>(self)->QwtCompass::sizeHint());
}

bool QwtCompass_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QwtCompass_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtCompass*>(self)->QwtCompass::minimumSizeHint());
}

bool QwtCompass_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = slot;
	return true;
}

void QwtCompass_virtualbase_wheelEvent(void* self, QWheelEvent* param1) {
	static_cast<MiqtVirtualQwtCompass*>(self)->QwtCompass::wheelEvent(param1);
}

bool QwtCompass_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = slot;
	return true;
}

void QwtCompass_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	static_cast<MiqtVirtualQwtCompass*>(self)->QwtCompass::paintEvent(param1);
}

bool QwtCompass_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = slot;
	return true;
}

void QwtCompass_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQwtCompass*>(self)->QwtCompass::changeEvent(param1);
}

bool QwtCompass_override_virtual_drawFrame(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawFrame = slot;
	return true;
}

void QwtCompass_virtualbase_drawFrame(void* self, QPainter* param1) {
	static_cast<MiqtVirtualQwtCompass*>(self)->QwtCompass::drawFrame(param1);
}

bool QwtCompass_override_virtual_drawContents(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawContents = slot;
	return true;
}

void QwtCompass_virtualbase_drawContents(const void* self, QPainter* param1) {
	static_cast<const MiqtVirtualQwtCompass*>(self)->QwtCompass::drawContents(param1);
}

bool QwtCompass_override_virtual_drawFocusIndicator(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawFocusIndicator = slot;
	return true;
}

void QwtCompass_virtualbase_drawFocusIndicator(const void* self, QPainter* param1) {
	static_cast<const MiqtVirtualQwtCompass*>(self)->QwtCompass::drawFocusIndicator(param1);
}

bool QwtCompass_override_virtual_drawScale(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawScale = slot;
	return true;
}

void QwtCompass_virtualbase_drawScale(const void* self, QPainter* param1, QPointF* center, double radius) {
	static_cast<const MiqtVirtualQwtCompass*>(self)->QwtCompass::drawScale(param1, *center, static_cast<double>(radius));
}

bool QwtCompass_override_virtual_drawNeedle(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawNeedle = slot;
	return true;
}

void QwtCompass_virtualbase_drawNeedle(const void* self, QPainter* param1, QPointF* param2, double radius, double direction, int param5) {
	static_cast<const MiqtVirtualQwtCompass*>(self)->QwtCompass::drawNeedle(param1, *param2, static_cast<double>(radius), static_cast<double>(direction), static_cast<QPalette::ColorGroup>(param5));
}

bool QwtCompass_override_virtual_scrolledTo(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__scrolledTo = slot;
	return true;
}

double QwtCompass_virtualbase_scrolledTo(const void* self, QPoint* param1) {
	return static_cast<const MiqtVirtualQwtCompass*>(self)->QwtCompass::scrolledTo(*param1);
}

bool QwtCompass_override_virtual_isScrollPosition(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isScrollPosition = slot;
	return true;
}

bool QwtCompass_virtualbase_isScrollPosition(const void* self, QPoint* param1) {
	return static_cast<const MiqtVirtualQwtCompass*>(self)->QwtCompass::isScrollPosition(*param1);
}

bool QwtCompass_override_virtual_sliderChange(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sliderChange = slot;
	return true;
}

void QwtCompass_virtualbase_sliderChange(void* self) {
	static_cast<MiqtVirtualQwtCompass*>(self)->QwtCompass::sliderChange();
}

bool QwtCompass_override_virtual_scaleChange(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__scaleChange = slot;
	return true;
}

void QwtCompass_virtualbase_scaleChange(void* self) {
	static_cast<MiqtVirtualQwtCompass*>(self)->QwtCompass::scaleChange();
}

bool QwtCompass_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QwtCompass_virtualbase_mousePressEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtCompass*>(self)->QwtCompass::mousePressEvent(param1);
}

bool QwtCompass_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QwtCompass_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtCompass*>(self)->QwtCompass::mouseReleaseEvent(param1);
}

bool QwtCompass_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QwtCompass_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtCompass*>(self)->QwtCompass::mouseMoveEvent(param1);
}

bool QwtCompass_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int QwtCompass_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQwtCompass*>(self)->QwtCompass::devType();
}

bool QwtCompass_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = slot;
	return true;
}

void QwtCompass_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQwtCompass*>(self)->QwtCompass::setVisible(visible);
}

bool QwtCompass_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = slot;
	return true;
}

int QwtCompass_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtCompass*>(self)->QwtCompass::heightForWidth(static_cast<int>(param1));
}

bool QwtCompass_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QwtCompass_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQwtCompass*>(self)->QwtCompass::hasHeightForWidth();
}

bool QwtCompass_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QwtCompass_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQwtCompass*>(self)->QwtCompass::paintEngine();
}

bool QwtCompass_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QwtCompass_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQwtCompass*>(self)->QwtCompass::event(event);
}

bool QwtCompass_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QwtCompass_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtCompass*>(self)->QwtCompass::mouseDoubleClickEvent(event);
}

bool QwtCompass_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QwtCompass_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQwtCompass*>(self)->QwtCompass::keyReleaseEvent(event);
}

bool QwtCompass_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = slot;
	return true;
}

void QwtCompass_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQwtCompass*>(self)->QwtCompass::focusInEvent(event);
}

bool QwtCompass_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QwtCompass_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQwtCompass*>(self)->QwtCompass::focusOutEvent(event);
}

bool QwtCompass_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = slot;
	return true;
}

void QwtCompass_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtCompass*>(self)->QwtCompass::enterEvent(event);
}

bool QwtCompass_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = slot;
	return true;
}

void QwtCompass_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtCompass*>(self)->QwtCompass::leaveEvent(event);
}

bool QwtCompass_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = slot;
	return true;
}

void QwtCompass_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQwtCompass*>(self)->QwtCompass::moveEvent(event);
}

bool QwtCompass_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = slot;
	return true;
}

void QwtCompass_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQwtCompass*>(self)->QwtCompass::resizeEvent(event);
}

bool QwtCompass_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = slot;
	return true;
}

void QwtCompass_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQwtCompass*>(self)->QwtCompass::closeEvent(event);
}

bool QwtCompass_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QwtCompass_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQwtCompass*>(self)->QwtCompass::contextMenuEvent(event);
}

bool QwtCompass_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = slot;
	return true;
}

void QwtCompass_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQwtCompass*>(self)->QwtCompass::tabletEvent(event);
}

bool QwtCompass_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = slot;
	return true;
}

void QwtCompass_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQwtCompass*>(self)->QwtCompass::actionEvent(event);
}

bool QwtCompass_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QwtCompass_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQwtCompass*>(self)->QwtCompass::dragEnterEvent(event);
}

bool QwtCompass_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QwtCompass_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQwtCompass*>(self)->QwtCompass::dragMoveEvent(event);
}

bool QwtCompass_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QwtCompass_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQwtCompass*>(self)->QwtCompass::dragLeaveEvent(event);
}

bool QwtCompass_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = slot;
	return true;
}

void QwtCompass_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQwtCompass*>(self)->QwtCompass::dropEvent(event);
}

bool QwtCompass_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = slot;
	return true;
}

void QwtCompass_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQwtCompass*>(self)->QwtCompass::showEvent(event);
}

bool QwtCompass_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = slot;
	return true;
}

void QwtCompass_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQwtCompass*>(self)->QwtCompass::hideEvent(event);
}

bool QwtCompass_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QwtCompass_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQwtCompass*>(self)->QwtCompass::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QwtCompass_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = slot;
	return true;
}

int QwtCompass_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtCompass*>(self)->QwtCompass::metric(static_cast<MiqtVirtualQwtCompass::PaintDeviceMetric>(param1));
}

bool QwtCompass_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = slot;
	return true;
}

void QwtCompass_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQwtCompass*>(self)->QwtCompass::initPainter(painter);
}

bool QwtCompass_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QwtCompass_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQwtCompass*>(self)->QwtCompass::redirected(offset);
}

bool QwtCompass_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QwtCompass_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQwtCompass*>(self)->QwtCompass::sharedPainter();
}

bool QwtCompass_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QwtCompass_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQwtCompass*>(self)->QwtCompass::inputMethodEvent(param1);
}

bool QwtCompass_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QwtCompass_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQwtCompass*>(self)->QwtCompass::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QwtCompass_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QwtCompass_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQwtCompass*>(self)->QwtCompass::focusNextPrevChild(next);
}

bool QwtCompass_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QwtCompass_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQwtCompass*>(self)->QwtCompass::eventFilter(watched, event);
}

bool QwtCompass_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QwtCompass_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQwtCompass*>(self)->QwtCompass::timerEvent(event);
}

bool QwtCompass_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QwtCompass_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQwtCompass*>(self)->QwtCompass::childEvent(event);
}

bool QwtCompass_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QwtCompass_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtCompass*>(self)->QwtCompass::customEvent(event);
}

bool QwtCompass_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QwtCompass_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtCompass*>(self)->QwtCompass::connectNotify(*signal);
}

bool QwtCompass_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QwtCompass_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtCompass*>(self)->QwtCompass::disconnectNotify(*signal);
}

void QwtCompass_protectedbase_invalidateCache(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->invalidateCache();
}

void QwtCompass_protectedbase_incrementValue(bool* _dynamic_cast_ok, void* self, int stepCount) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->incrementValue(static_cast<int>(stepCount));
}

double QwtCompass_protectedbase_incrementedValue(bool* _dynamic_cast_ok, const void* self, double value, int stepCount) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->incrementedValue(static_cast<double>(value), static_cast<int>(stepCount));
}

void QwtCompass_protectedbase_rescale(bool* _dynamic_cast_ok, void* self, double lowerBound, double upperBound, double stepSize) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->rescale(static_cast<double>(lowerBound), static_cast<double>(upperBound), static_cast<double>(stepSize));
}

void QwtCompass_protectedbase_setAbstractScaleDraw(bool* _dynamic_cast_ok, void* self, QwtAbstractScaleDraw* abstractScaleDraw) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setAbstractScaleDraw(abstractScaleDraw);
}

QwtAbstractScaleDraw* QwtCompass_protectedbase_abstractScaleDraw(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return (QwtAbstractScaleDraw*) self_cast->abstractScaleDraw();
}

void QwtCompass_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QwtCompass_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QwtCompass_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QwtCompass_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QwtCompass_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QwtCompass_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QwtCompass_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QwtCompass_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QwtCompass_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQwtCompass* self_cast = dynamic_cast<MiqtVirtualQwtCompass*>( (QwtCompass*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QwtCompass_delete(QwtCompass* self) {
	delete self;
}

