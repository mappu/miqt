#include <QMarginsF>
#include <QPageLayout>
#include <QPageRanges>
#include <QPageSize>
#include <QPagedPaintDevice>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPainter>
#include <QPoint>
#include <QPrintEngine>
#include <QPrinter>
#include <QRect>
#include <qsciprinter.h>
#include "gen_qsciprinter.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QsciPrinter_formatPage(QsciPrinter*, intptr_t, QPainter*, bool, QRect*, int);
void miqt_exec_callback_QsciPrinter_setMagnification(QsciPrinter*, intptr_t, int);
int miqt_exec_callback_QsciPrinter_printRange(QsciPrinter*, intptr_t, QsciScintillaBase*, QPainter*, int, int);
int miqt_exec_callback_QsciPrinter_printRange2(QsciPrinter*, intptr_t, QsciScintillaBase*, int, int);
void miqt_exec_callback_QsciPrinter_setWrapMode(QsciPrinter*, intptr_t, int);
int miqt_exec_callback_QsciPrinter_devType(const QsciPrinter*, intptr_t);
bool miqt_exec_callback_QsciPrinter_newPage(QsciPrinter*, intptr_t);
QPaintEngine* miqt_exec_callback_QsciPrinter_paintEngine(const QsciPrinter*, intptr_t);
int miqt_exec_callback_QsciPrinter_metric(const QsciPrinter*, intptr_t, int);
bool miqt_exec_callback_QsciPrinter_setPageLayout(QsciPrinter*, intptr_t, QPageLayout*);
bool miqt_exec_callback_QsciPrinter_setPageSize(QsciPrinter*, intptr_t, QPageSize*);
bool miqt_exec_callback_QsciPrinter_setPageOrientation(QsciPrinter*, intptr_t, int);
bool miqt_exec_callback_QsciPrinter_setPageMargins(QsciPrinter*, intptr_t, QMarginsF*, int);
void miqt_exec_callback_QsciPrinter_setPageRanges(QsciPrinter*, intptr_t, QPageRanges*);
void miqt_exec_callback_QsciPrinter_initPainter(const QsciPrinter*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QsciPrinter_redirected(const QsciPrinter*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QsciPrinter_sharedPainter(const QsciPrinter*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciPrinter final : public QsciPrinter {
public:

	MiqtVirtualQsciPrinter(): QsciPrinter() {}
	MiqtVirtualQsciPrinter(QPrinter::PrinterMode mode): QsciPrinter(mode) {}

	virtual ~MiqtVirtualQsciPrinter() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__formatPage = 0;

	// Subclass to allow providing a Go implementation
	virtual void formatPage(QPainter& painter, bool drawing, QRect& area, int pagenr) override {
		if (handle__formatPage == 0) {
			QsciPrinter::formatPage(painter, drawing, area, pagenr);
			return;
		}

		QPainter& painter_ret = painter;
		// Cast returned reference into pointer
		QPainter* sigval1 = &painter_ret;
		bool sigval2 = drawing;
		QRect& area_ret = area;
		// Cast returned reference into pointer
		QRect* sigval3 = &area_ret;
		int sigval4 = pagenr;
		miqt_exec_callback_QsciPrinter_formatPage(this, handle__formatPage, sigval1, sigval2, sigval3, sigval4);

	}

	friend void QsciPrinter_virtualbase_formatPage(void* self, QPainter* painter, bool drawing, QRect* area, int pagenr);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setMagnification = 0;

	// Subclass to allow providing a Go implementation
	virtual void setMagnification(int magnification) override {
		if (handle__setMagnification == 0) {
			QsciPrinter::setMagnification(magnification);
			return;
		}

		int sigval1 = magnification;
		miqt_exec_callback_QsciPrinter_setMagnification(this, handle__setMagnification, sigval1);

	}

	friend void QsciPrinter_virtualbase_setMagnification(void* self, int magnification);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__printRange = 0;

	// Subclass to allow providing a Go implementation
	virtual int printRange(QsciScintillaBase* qsb, QPainter& painter, int from, int to) override {
		if (handle__printRange == 0) {
			return QsciPrinter::printRange(qsb, painter, from, to);
		}

		QsciScintillaBase* sigval1 = qsb;
		QPainter& painter_ret = painter;
		// Cast returned reference into pointer
		QPainter* sigval2 = &painter_ret;
		int sigval3 = from;
		int sigval4 = to;
		int callback_return_value = miqt_exec_callback_QsciPrinter_printRange(this, handle__printRange, sigval1, sigval2, sigval3, sigval4);
		return static_cast<int>(callback_return_value);
	}

	friend int QsciPrinter_virtualbase_printRange(void* self, QsciScintillaBase* qsb, QPainter* painter, int from, int to);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__printRange2 = 0;

	// Subclass to allow providing a Go implementation
	virtual int printRange(QsciScintillaBase* qsb, int from, int to) override {
		if (handle__printRange2 == 0) {
			return QsciPrinter::printRange(qsb, from, to);
		}

		QsciScintillaBase* sigval1 = qsb;
		int sigval2 = from;
		int sigval3 = to;
		int callback_return_value = miqt_exec_callback_QsciPrinter_printRange2(this, handle__printRange2, sigval1, sigval2, sigval3);
		return static_cast<int>(callback_return_value);
	}

	friend int QsciPrinter_virtualbase_printRange2(void* self, QsciScintillaBase* qsb, int from, int to);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setWrapMode = 0;

	// Subclass to allow providing a Go implementation
	virtual void setWrapMode(QsciScintilla::WrapMode wmode) override {
		if (handle__setWrapMode == 0) {
			QsciPrinter::setWrapMode(wmode);
			return;
		}

		QsciScintilla::WrapMode wmode_ret = wmode;
		int sigval1 = static_cast<int>(wmode_ret);
		miqt_exec_callback_QsciPrinter_setWrapMode(this, handle__setWrapMode, sigval1);

	}

	friend void QsciPrinter_virtualbase_setWrapMode(void* self, int wmode);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QsciPrinter::devType();
		}

		int callback_return_value = miqt_exec_callback_QsciPrinter_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int QsciPrinter_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__newPage = 0;

	// Subclass to allow providing a Go implementation
	virtual bool newPage() override {
		if (handle__newPage == 0) {
			return QsciPrinter::newPage();
		}

		bool callback_return_value = miqt_exec_callback_QsciPrinter_newPage(this, handle__newPage);
		return callback_return_value;
	}

	friend bool QsciPrinter_virtualbase_newPage(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QsciPrinter::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QsciPrinter_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* QsciPrinter_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QsciPrinter::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QsciPrinter_metric(this, handle__metric, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QsciPrinter_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setPageLayout = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setPageLayout(const QPageLayout& pageLayout) override {
		if (handle__setPageLayout == 0) {
			return QsciPrinter::setPageLayout(pageLayout);
		}

		const QPageLayout& pageLayout_ret = pageLayout;
		// Cast returned reference into pointer
		QPageLayout* sigval1 = const_cast<QPageLayout*>(&pageLayout_ret);
		bool callback_return_value = miqt_exec_callback_QsciPrinter_setPageLayout(this, handle__setPageLayout, sigval1);
		return callback_return_value;
	}

	friend bool QsciPrinter_virtualbase_setPageLayout(void* self, QPageLayout* pageLayout);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setPageSize = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setPageSize(const QPageSize& pageSize) override {
		if (handle__setPageSize == 0) {
			return QsciPrinter::setPageSize(pageSize);
		}

		const QPageSize& pageSize_ret = pageSize;
		// Cast returned reference into pointer
		QPageSize* sigval1 = const_cast<QPageSize*>(&pageSize_ret);
		bool callback_return_value = miqt_exec_callback_QsciPrinter_setPageSize(this, handle__setPageSize, sigval1);
		return callback_return_value;
	}

	friend bool QsciPrinter_virtualbase_setPageSize(void* self, QPageSize* pageSize);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setPageOrientation = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setPageOrientation(QPageLayout::Orientation orientation) override {
		if (handle__setPageOrientation == 0) {
			return QsciPrinter::setPageOrientation(orientation);
		}

		QPageLayout::Orientation orientation_ret = orientation;
		int sigval1 = static_cast<int>(orientation_ret);
		bool callback_return_value = miqt_exec_callback_QsciPrinter_setPageOrientation(this, handle__setPageOrientation, sigval1);
		return callback_return_value;
	}

	friend bool QsciPrinter_virtualbase_setPageOrientation(void* self, int orientation);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setPageMargins = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setPageMargins(const QMarginsF& margins, QPageLayout::Unit units) override {
		if (handle__setPageMargins == 0) {
			return QsciPrinter::setPageMargins(margins, units);
		}

		const QMarginsF& margins_ret = margins;
		// Cast returned reference into pointer
		QMarginsF* sigval1 = const_cast<QMarginsF*>(&margins_ret);
		QPageLayout::Unit units_ret = units;
		int sigval2 = static_cast<int>(units_ret);
		bool callback_return_value = miqt_exec_callback_QsciPrinter_setPageMargins(this, handle__setPageMargins, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QsciPrinter_virtualbase_setPageMargins(void* self, QMarginsF* margins, int units);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setPageRanges = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPageRanges(const QPageRanges& ranges) override {
		if (handle__setPageRanges == 0) {
			QsciPrinter::setPageRanges(ranges);
			return;
		}

		const QPageRanges& ranges_ret = ranges;
		// Cast returned reference into pointer
		QPageRanges* sigval1 = const_cast<QPageRanges*>(&ranges_ret);
		miqt_exec_callback_QsciPrinter_setPageRanges(this, handle__setPageRanges, sigval1);

	}

	friend void QsciPrinter_virtualbase_setPageRanges(void* self, QPageRanges* ranges);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QsciPrinter::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QsciPrinter_initPainter(this, handle__initPainter, sigval1);

	}

	friend void QsciPrinter_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QsciPrinter::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QsciPrinter_redirected(this, handle__redirected, sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QsciPrinter_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QsciPrinter::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QsciPrinter_sharedPainter(this, handle__sharedPainter);
		return callback_return_value;
	}

	friend QPainter* QsciPrinter_virtualbase_sharedPainter(const void* self);

	// Wrappers to allow calling protected methods:
	friend void QsciPrinter_protectedbase_setEngines(bool* _dynamic_cast_ok, void* self, QPrintEngine* printEngine, QPaintEngine* paintEngine);
};

QsciPrinter* QsciPrinter_new() {
	return new (std::nothrow) MiqtVirtualQsciPrinter();
}

QsciPrinter* QsciPrinter_new2(int mode) {
	return new (std::nothrow) MiqtVirtualQsciPrinter(static_cast<QPrinter::PrinterMode>(mode));
}

void QsciPrinter_virtbase(QsciPrinter* src, QPrinter** outptr_QPrinter) {
	*outptr_QPrinter = static_cast<QPrinter*>(src);
}

void QsciPrinter_formatPage(QsciPrinter* self, QPainter* painter, bool drawing, QRect* area, int pagenr) {
	self->formatPage(*painter, drawing, *area, static_cast<int>(pagenr));
}

int QsciPrinter_magnification(const QsciPrinter* self) {
	return self->magnification();
}

void QsciPrinter_setMagnification(QsciPrinter* self, int magnification) {
	self->setMagnification(static_cast<int>(magnification));
}

int QsciPrinter_printRange(QsciPrinter* self, QsciScintillaBase* qsb, QPainter* painter, int from, int to) {
	return self->printRange(qsb, *painter, static_cast<int>(from), static_cast<int>(to));
}

int QsciPrinter_printRange2(QsciPrinter* self, QsciScintillaBase* qsb, int from, int to) {
	return self->printRange(qsb, static_cast<int>(from), static_cast<int>(to));
}

int QsciPrinter_wrapMode(const QsciPrinter* self) {
	QsciScintilla::WrapMode _ret = self->wrapMode();
	return static_cast<int>(_ret);
}

void QsciPrinter_setWrapMode(QsciPrinter* self, int wmode) {
	self->setWrapMode(static_cast<QsciScintilla::WrapMode>(wmode));
}

bool QsciPrinter_override_virtual_formatPage(void* self, intptr_t slot) {
	MiqtVirtualQsciPrinter* self_cast = dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__formatPage = slot;
	return true;
}

void QsciPrinter_virtualbase_formatPage(void* self, QPainter* painter, bool drawing, QRect* area, int pagenr) {
	static_cast<MiqtVirtualQsciPrinter*>(self)->QsciPrinter::formatPage(*painter, drawing, *area, static_cast<int>(pagenr));
}

bool QsciPrinter_override_virtual_setMagnification(void* self, intptr_t slot) {
	MiqtVirtualQsciPrinter* self_cast = dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setMagnification = slot;
	return true;
}

void QsciPrinter_virtualbase_setMagnification(void* self, int magnification) {
	static_cast<MiqtVirtualQsciPrinter*>(self)->QsciPrinter::setMagnification(static_cast<int>(magnification));
}

bool QsciPrinter_override_virtual_printRange(void* self, intptr_t slot) {
	MiqtVirtualQsciPrinter* self_cast = dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__printRange = slot;
	return true;
}

int QsciPrinter_virtualbase_printRange(void* self, QsciScintillaBase* qsb, QPainter* painter, int from, int to) {
	return static_cast<MiqtVirtualQsciPrinter*>(self)->QsciPrinter::printRange(qsb, *painter, static_cast<int>(from), static_cast<int>(to));
}

bool QsciPrinter_override_virtual_printRange2(void* self, intptr_t slot) {
	MiqtVirtualQsciPrinter* self_cast = dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__printRange2 = slot;
	return true;
}

int QsciPrinter_virtualbase_printRange2(void* self, QsciScintillaBase* qsb, int from, int to) {
	return static_cast<MiqtVirtualQsciPrinter*>(self)->QsciPrinter::printRange(qsb, static_cast<int>(from), static_cast<int>(to));
}

bool QsciPrinter_override_virtual_setWrapMode(void* self, intptr_t slot) {
	MiqtVirtualQsciPrinter* self_cast = dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setWrapMode = slot;
	return true;
}

void QsciPrinter_virtualbase_setWrapMode(void* self, int wmode) {
	static_cast<MiqtVirtualQsciPrinter*>(self)->QsciPrinter::setWrapMode(static_cast<QsciScintilla::WrapMode>(wmode));
}

bool QsciPrinter_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQsciPrinter* self_cast = dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int QsciPrinter_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQsciPrinter*>(self)->QsciPrinter::devType();
}

bool QsciPrinter_override_virtual_newPage(void* self, intptr_t slot) {
	MiqtVirtualQsciPrinter* self_cast = dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__newPage = slot;
	return true;
}

bool QsciPrinter_virtualbase_newPage(void* self) {
	return static_cast<MiqtVirtualQsciPrinter*>(self)->QsciPrinter::newPage();
}

bool QsciPrinter_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQsciPrinter* self_cast = dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QsciPrinter_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQsciPrinter*>(self)->QsciPrinter::paintEngine();
}

bool QsciPrinter_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQsciPrinter* self_cast = dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = slot;
	return true;
}

int QsciPrinter_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQsciPrinter*>(self)->QsciPrinter::metric(static_cast<MiqtVirtualQsciPrinter::PaintDeviceMetric>(param1));
}

bool QsciPrinter_override_virtual_setPageLayout(void* self, intptr_t slot) {
	MiqtVirtualQsciPrinter* self_cast = dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setPageLayout = slot;
	return true;
}

bool QsciPrinter_virtualbase_setPageLayout(void* self, QPageLayout* pageLayout) {
	return static_cast<MiqtVirtualQsciPrinter*>(self)->QsciPrinter::setPageLayout(*pageLayout);
}

bool QsciPrinter_override_virtual_setPageSize(void* self, intptr_t slot) {
	MiqtVirtualQsciPrinter* self_cast = dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setPageSize = slot;
	return true;
}

bool QsciPrinter_virtualbase_setPageSize(void* self, QPageSize* pageSize) {
	return static_cast<MiqtVirtualQsciPrinter*>(self)->QsciPrinter::setPageSize(*pageSize);
}

bool QsciPrinter_override_virtual_setPageOrientation(void* self, intptr_t slot) {
	MiqtVirtualQsciPrinter* self_cast = dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setPageOrientation = slot;
	return true;
}

bool QsciPrinter_virtualbase_setPageOrientation(void* self, int orientation) {
	return static_cast<MiqtVirtualQsciPrinter*>(self)->QsciPrinter::setPageOrientation(static_cast<QPageLayout::Orientation>(orientation));
}

bool QsciPrinter_override_virtual_setPageMargins(void* self, intptr_t slot) {
	MiqtVirtualQsciPrinter* self_cast = dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setPageMargins = slot;
	return true;
}

bool QsciPrinter_virtualbase_setPageMargins(void* self, QMarginsF* margins, int units) {
	return static_cast<MiqtVirtualQsciPrinter*>(self)->QsciPrinter::setPageMargins(*margins, static_cast<QPageLayout::Unit>(units));
}

bool QsciPrinter_override_virtual_setPageRanges(void* self, intptr_t slot) {
	MiqtVirtualQsciPrinter* self_cast = dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setPageRanges = slot;
	return true;
}

void QsciPrinter_virtualbase_setPageRanges(void* self, QPageRanges* ranges) {
	static_cast<MiqtVirtualQsciPrinter*>(self)->QsciPrinter::setPageRanges(*ranges);
}

bool QsciPrinter_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQsciPrinter* self_cast = dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = slot;
	return true;
}

void QsciPrinter_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQsciPrinter*>(self)->QsciPrinter::initPainter(painter);
}

bool QsciPrinter_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQsciPrinter* self_cast = dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QsciPrinter_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQsciPrinter*>(self)->QsciPrinter::redirected(offset);
}

bool QsciPrinter_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQsciPrinter* self_cast = dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QsciPrinter_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQsciPrinter*>(self)->QsciPrinter::sharedPainter();
}

void QsciPrinter_protectedbase_setEngines(bool* _dynamic_cast_ok, void* self, QPrintEngine* printEngine, QPaintEngine* paintEngine) {
	MiqtVirtualQsciPrinter* self_cast = dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setEngines(printEngine, paintEngine);
}

void QsciPrinter_delete(QsciPrinter* self) {
	delete self;
}

