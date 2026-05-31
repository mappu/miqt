#include <QRectF>
#include <QSize>
#include <qwt_plot_layout.h>
#include "gen_qwt_plot_layout.h"

#ifdef __cplusplus
extern "C" {
#endif

QSize* miqt_exec_callback_QwtPlotLayout_minimumSizeHint(const QwtPlotLayout*, intptr_t, QwtPlot*);
void miqt_exec_callback_QwtPlotLayout_activate(QwtPlotLayout*, intptr_t, QwtPlot*, QRectF*, int);
void miqt_exec_callback_QwtPlotLayout_invalidate(QwtPlotLayout*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtPlotLayout final : public QwtPlotLayout {
public:

	MiqtVirtualQwtPlotLayout(): QwtPlotLayout() {}

	virtual ~MiqtVirtualQwtPlotLayout() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint(const QwtPlot* param1) const override {
		if (handle__minimumSizeHint == 0) {
			return QwtPlotLayout::minimumSizeHint(param1);
		}

		QwtPlot* sigval1 = (QwtPlot*) param1;
		QSize* callback_return_value = miqt_exec_callback_QwtPlotLayout_minimumSizeHint(this, handle__minimumSizeHint, sigval1);
		return *callback_return_value;
	}

	friend QSize* QwtPlotLayout_virtualbase_minimumSizeHint(const void* self, QwtPlot* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__activate = 0;

	// Subclass to allow providing a Go implementation
	virtual void activate(const QwtPlot* param1, const QRectF& plotRect, QwtPlotLayout::Options options) override {
		if (handle__activate == 0) {
			QwtPlotLayout::activate(param1, plotRect, options);
			return;
		}

		QwtPlot* sigval1 = (QwtPlot*) param1;
		const QRectF& plotRect_ret = plotRect;
		// Cast returned reference into pointer
		QRectF* sigval2 = const_cast<QRectF*>(&plotRect_ret);
		QwtPlotLayout::Options options_ret = options;
		int sigval3 = static_cast<int>(options_ret);
		miqt_exec_callback_QwtPlotLayout_activate(this, handle__activate, sigval1, sigval2, sigval3);

	}

	friend void QwtPlotLayout_virtualbase_activate(void* self, QwtPlot* param1, QRectF* plotRect, int options);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__invalidate = 0;

	// Subclass to allow providing a Go implementation
	virtual void invalidate() override {
		if (handle__invalidate == 0) {
			QwtPlotLayout::invalidate();
			return;
		}

		miqt_exec_callback_QwtPlotLayout_invalidate(this, handle__invalidate);

	}

	friend void QwtPlotLayout_virtualbase_invalidate(void* self);

	// Wrappers to allow calling protected methods:
	friend void QwtPlotLayout_protectedbase_setTitleRect(bool* _dynamic_cast_ok, void* self, QRectF* titleRect);
	friend void QwtPlotLayout_protectedbase_setFooterRect(bool* _dynamic_cast_ok, void* self, QRectF* footerRect);
	friend void QwtPlotLayout_protectedbase_setLegendRect(bool* _dynamic_cast_ok, void* self, QRectF* legendRect);
	friend void QwtPlotLayout_protectedbase_setScaleRect(bool* _dynamic_cast_ok, void* self, int axis, QRectF* param2);
	friend void QwtPlotLayout_protectedbase_setCanvasRect(bool* _dynamic_cast_ok, void* self, QRectF* canvasRect);
	friend QRectF* QwtPlotLayout_protectedbase_layoutLegend(bool* _dynamic_cast_ok, const void* self, int options, QRectF* param2);
	friend QRectF* QwtPlotLayout_protectedbase_alignLegend(bool* _dynamic_cast_ok, const void* self, QRectF* canvasRect, QRectF* legendRect);
	friend void QwtPlotLayout_protectedbase_expandLineBreaks(bool* _dynamic_cast_ok, const void* self, int options, QRectF* rect, int* dimTitle, int* dimFooter, int* dimAxes);
	friend void QwtPlotLayout_protectedbase_alignScales(bool* _dynamic_cast_ok, const void* self, int options, QRectF* canvasRect, QRectF* scaleRect);
};

QwtPlotLayout* QwtPlotLayout_new() {
	return new (std::nothrow) MiqtVirtualQwtPlotLayout();
}

void QwtPlotLayout_setCanvasMargin(QwtPlotLayout* self, int margin) {
	self->setCanvasMargin(static_cast<int>(margin));
}

int QwtPlotLayout_canvasMargin(const QwtPlotLayout* self, int axisId) {
	return self->canvasMargin(static_cast<int>(axisId));
}

void QwtPlotLayout_setAlignCanvasToScales(QwtPlotLayout* self, bool alignCanvasToScales) {
	self->setAlignCanvasToScales(alignCanvasToScales);
}

void QwtPlotLayout_setAlignCanvasToScale(QwtPlotLayout* self, int axisId, bool param2) {
	self->setAlignCanvasToScale(static_cast<int>(axisId), param2);
}

bool QwtPlotLayout_alignCanvasToScale(const QwtPlotLayout* self, int axisId) {
	return self->alignCanvasToScale(static_cast<int>(axisId));
}

void QwtPlotLayout_setSpacing(QwtPlotLayout* self, int spacing) {
	self->setSpacing(static_cast<int>(spacing));
}

int QwtPlotLayout_spacing(const QwtPlotLayout* self) {
	return self->spacing();
}

void QwtPlotLayout_setLegendPosition(QwtPlotLayout* self, int pos, double ratio) {
	self->setLegendPosition(static_cast<QwtPlot::LegendPosition>(pos), static_cast<double>(ratio));
}

void QwtPlotLayout_setLegendPositionWithPos(QwtPlotLayout* self, int pos) {
	self->setLegendPosition(static_cast<QwtPlot::LegendPosition>(pos));
}

int QwtPlotLayout_legendPosition(const QwtPlotLayout* self) {
	QwtPlot::LegendPosition _ret = self->legendPosition();
	return static_cast<int>(_ret);
}

void QwtPlotLayout_setLegendRatio(QwtPlotLayout* self, double ratio) {
	self->setLegendRatio(static_cast<double>(ratio));
}

double QwtPlotLayout_legendRatio(const QwtPlotLayout* self) {
	return self->legendRatio();
}

QSize* QwtPlotLayout_minimumSizeHint(const QwtPlotLayout* self, QwtPlot* param1) {
	return new QSize(self->minimumSizeHint(param1));
}

void QwtPlotLayout_activate(QwtPlotLayout* self, QwtPlot* param1, QRectF* plotRect, int options) {
	self->activate(param1, *plotRect, static_cast<QwtPlotLayout::Options>(options));
}

void QwtPlotLayout_invalidate(QwtPlotLayout* self) {
	self->invalidate();
}

QRectF* QwtPlotLayout_titleRect(const QwtPlotLayout* self) {
	return new QRectF(self->titleRect());
}

QRectF* QwtPlotLayout_footerRect(const QwtPlotLayout* self) {
	return new QRectF(self->footerRect());
}

QRectF* QwtPlotLayout_legendRect(const QwtPlotLayout* self) {
	return new QRectF(self->legendRect());
}

QRectF* QwtPlotLayout_scaleRect(const QwtPlotLayout* self, int axis) {
	return new QRectF(self->scaleRect(static_cast<int>(axis)));
}

QRectF* QwtPlotLayout_canvasRect(const QwtPlotLayout* self) {
	return new QRectF(self->canvasRect());
}

void QwtPlotLayout_operatorAssign(QwtPlotLayout* self, QwtPlotLayout* param1) {
	self->operator=(*param1);
}

void QwtPlotLayout_setCanvasMargin2(QwtPlotLayout* self, int margin, int axis) {
	self->setCanvasMargin(static_cast<int>(margin), static_cast<int>(axis));
}

bool QwtPlotLayout_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotLayout* self_cast = dynamic_cast<MiqtVirtualQwtPlotLayout*>( (QwtPlotLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QwtPlotLayout_virtualbase_minimumSizeHint(const void* self, QwtPlot* param1) {
	return new QSize(static_cast<const MiqtVirtualQwtPlotLayout*>(self)->QwtPlotLayout::minimumSizeHint(param1));
}

bool QwtPlotLayout_override_virtual_activate(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotLayout* self_cast = dynamic_cast<MiqtVirtualQwtPlotLayout*>( (QwtPlotLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__activate = slot;
	return true;
}

void QwtPlotLayout_virtualbase_activate(void* self, QwtPlot* param1, QRectF* plotRect, int options) {
	static_cast<MiqtVirtualQwtPlotLayout*>(self)->QwtPlotLayout::activate(param1, *plotRect, static_cast<MiqtVirtualQwtPlotLayout::Options>(options));
}

bool QwtPlotLayout_override_virtual_invalidate(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotLayout* self_cast = dynamic_cast<MiqtVirtualQwtPlotLayout*>( (QwtPlotLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__invalidate = slot;
	return true;
}

void QwtPlotLayout_virtualbase_invalidate(void* self) {
	static_cast<MiqtVirtualQwtPlotLayout*>(self)->QwtPlotLayout::invalidate();
}

void QwtPlotLayout_protectedbase_setTitleRect(bool* _dynamic_cast_ok, void* self, QRectF* titleRect) {
	MiqtVirtualQwtPlotLayout* self_cast = dynamic_cast<MiqtVirtualQwtPlotLayout*>( (QwtPlotLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setTitleRect(*titleRect);
}

void QwtPlotLayout_protectedbase_setFooterRect(bool* _dynamic_cast_ok, void* self, QRectF* footerRect) {
	MiqtVirtualQwtPlotLayout* self_cast = dynamic_cast<MiqtVirtualQwtPlotLayout*>( (QwtPlotLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setFooterRect(*footerRect);
}

void QwtPlotLayout_protectedbase_setLegendRect(bool* _dynamic_cast_ok, void* self, QRectF* legendRect) {
	MiqtVirtualQwtPlotLayout* self_cast = dynamic_cast<MiqtVirtualQwtPlotLayout*>( (QwtPlotLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setLegendRect(*legendRect);
}

void QwtPlotLayout_protectedbase_setScaleRect(bool* _dynamic_cast_ok, void* self, int axis, QRectF* param2) {
	MiqtVirtualQwtPlotLayout* self_cast = dynamic_cast<MiqtVirtualQwtPlotLayout*>( (QwtPlotLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setScaleRect(static_cast<int>(axis), *param2);
}

void QwtPlotLayout_protectedbase_setCanvasRect(bool* _dynamic_cast_ok, void* self, QRectF* canvasRect) {
	MiqtVirtualQwtPlotLayout* self_cast = dynamic_cast<MiqtVirtualQwtPlotLayout*>( (QwtPlotLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setCanvasRect(*canvasRect);
}

QRectF* QwtPlotLayout_protectedbase_layoutLegend(bool* _dynamic_cast_ok, const void* self, int options, QRectF* param2) {
	MiqtVirtualQwtPlotLayout* self_cast = dynamic_cast<MiqtVirtualQwtPlotLayout*>( (QwtPlotLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QRectF(self_cast->layoutLegend(static_cast<MiqtVirtualQwtPlotLayout::Options>(options), *param2));
}

QRectF* QwtPlotLayout_protectedbase_alignLegend(bool* _dynamic_cast_ok, const void* self, QRectF* canvasRect, QRectF* legendRect) {
	MiqtVirtualQwtPlotLayout* self_cast = dynamic_cast<MiqtVirtualQwtPlotLayout*>( (QwtPlotLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QRectF(self_cast->alignLegend(*canvasRect, *legendRect));
}

void QwtPlotLayout_protectedbase_expandLineBreaks(bool* _dynamic_cast_ok, const void* self, int options, QRectF* rect, int* dimTitle, int* dimFooter, int* dimAxes) {
	MiqtVirtualQwtPlotLayout* self_cast = dynamic_cast<MiqtVirtualQwtPlotLayout*>( (QwtPlotLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->expandLineBreaks(static_cast<MiqtVirtualQwtPlotLayout::Options>(options), *rect, static_cast<int&>(*dimTitle), static_cast<int&>(*dimFooter), static_cast<int*>(dimAxes));
}

void QwtPlotLayout_protectedbase_alignScales(bool* _dynamic_cast_ok, const void* self, int options, QRectF* canvasRect, QRectF* scaleRect) {
	MiqtVirtualQwtPlotLayout* self_cast = dynamic_cast<MiqtVirtualQwtPlotLayout*>( (QwtPlotLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->alignScales(static_cast<MiqtVirtualQwtPlotLayout::Options>(options), *canvasRect, scaleRect);
}

void QwtPlotLayout_delete(QwtPlotLayout* self) {
	delete self;
}

