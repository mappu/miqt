#include <QMarginsF>
#include <QPageLayout>
#include <QPageRanges>
#include <QPageSize>
#include <QPagedPaintDevice>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPainter>
#include <QPoint>
#include <QPrinter>
#include <QRect>
#include <qsciprinter.h>
#include "gen_qsciprinter.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QsciPrinter_FormatPage(void*, intptr_t, QPainter*, bool, QRect*, int);
void miqt_exec_callback_QsciPrinter_SetMagnification(void*, intptr_t, int);
int miqt_exec_callback_QsciPrinter_PrintRange(void*, intptr_t, QsciScintillaBase*, QPainter*, int, int);
int miqt_exec_callback_QsciPrinter_PrintRange2(void*, intptr_t, QsciScintillaBase*, int, int);
void miqt_exec_callback_QsciPrinter_SetWrapMode(void*, intptr_t, int);
int miqt_exec_callback_QsciPrinter_DevType(void*, intptr_t);
bool miqt_exec_callback_QsciPrinter_NewPage(void*, intptr_t);
QPaintEngine* miqt_exec_callback_QsciPrinter_PaintEngine(void*, intptr_t);
int miqt_exec_callback_QsciPrinter_Metric(void*, intptr_t, int);
bool miqt_exec_callback_QsciPrinter_SetPageLayout(void*, intptr_t, QPageLayout*);
bool miqt_exec_callback_QsciPrinter_SetPageSize(void*, intptr_t, QPageSize*);
bool miqt_exec_callback_QsciPrinter_SetPageOrientation(void*, intptr_t, int);
bool miqt_exec_callback_QsciPrinter_SetPageMargins(void*, intptr_t, QMarginsF*, int);
void miqt_exec_callback_QsciPrinter_SetPageRanges(void*, intptr_t, QPageRanges*);
void miqt_exec_callback_QsciPrinter_InitPainter(void*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QsciPrinter_Redirected(void*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QsciPrinter_SharedPainter(void*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciPrinter final : public QsciPrinter {
public:

	MiqtVirtualQsciPrinter(): QsciPrinter() {};
	MiqtVirtualQsciPrinter(QPrinter::PrinterMode mode): QsciPrinter(mode) {};

	virtual ~MiqtVirtualQsciPrinter() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FormatPage = 0;

	// Subclass to allow providing a Go implementation
	virtual void formatPage(QPainter& painter, bool drawing, QRect& area, int pagenr) override {
		if (handle__FormatPage == 0) {
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

		miqt_exec_callback_QsciPrinter_FormatPage(this, handle__FormatPage, sigval1, sigval2, sigval3, sigval4);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FormatPage(QPainter* painter, bool drawing, QRect* area, int pagenr) {

		QsciPrinter::formatPage(*painter, drawing, *area, static_cast<int>(pagenr));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetMagnification = 0;

	// Subclass to allow providing a Go implementation
	virtual void setMagnification(int magnification) override {
		if (handle__SetMagnification == 0) {
			QsciPrinter::setMagnification(magnification);
			return;
		}
		
		int sigval1 = magnification;

		miqt_exec_callback_QsciPrinter_SetMagnification(this, handle__SetMagnification, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetMagnification(int magnification) {

		QsciPrinter::setMagnification(static_cast<int>(magnification));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PrintRange = 0;

	// Subclass to allow providing a Go implementation
	virtual int printRange(QsciScintillaBase* qsb, QPainter& painter, int from, int to) override {
		if (handle__PrintRange == 0) {
			return QsciPrinter::printRange(qsb, painter, from, to);
		}
		
		QsciScintillaBase* sigval1 = qsb;
		QPainter& painter_ret = painter;
		// Cast returned reference into pointer
		QPainter* sigval2 = &painter_ret;
		int sigval3 = from;
		int sigval4 = to;

		int callback_return_value = miqt_exec_callback_QsciPrinter_PrintRange(this, handle__PrintRange, sigval1, sigval2, sigval3, sigval4);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_PrintRange(QsciScintillaBase* qsb, QPainter* painter, int from, int to) {

		return QsciPrinter::printRange(qsb, *painter, static_cast<int>(from), static_cast<int>(to));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PrintRange2 = 0;

	// Subclass to allow providing a Go implementation
	virtual int printRange(QsciScintillaBase* qsb, int from, int to) override {
		if (handle__PrintRange2 == 0) {
			return QsciPrinter::printRange(qsb, from, to);
		}
		
		QsciScintillaBase* sigval1 = qsb;
		int sigval2 = from;
		int sigval3 = to;

		int callback_return_value = miqt_exec_callback_QsciPrinter_PrintRange2(this, handle__PrintRange2, sigval1, sigval2, sigval3);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_PrintRange2(QsciScintillaBase* qsb, int from, int to) {

		return QsciPrinter::printRange(qsb, static_cast<int>(from), static_cast<int>(to));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetWrapMode = 0;

	// Subclass to allow providing a Go implementation
	virtual void setWrapMode(QsciScintilla::WrapMode wmode) override {
		if (handle__SetWrapMode == 0) {
			QsciPrinter::setWrapMode(wmode);
			return;
		}
		
		QsciScintilla::WrapMode wmode_ret = wmode;
		int sigval1 = static_cast<int>(wmode_ret);

		miqt_exec_callback_QsciPrinter_SetWrapMode(this, handle__SetWrapMode, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetWrapMode(int wmode) {

		QsciPrinter::setWrapMode(static_cast<QsciScintilla::WrapMode>(wmode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QsciPrinter::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QsciPrinter_DevType(const_cast<MiqtVirtualQsciPrinter*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QsciPrinter::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NewPage = 0;

	// Subclass to allow providing a Go implementation
	virtual bool newPage() override {
		if (handle__NewPage == 0) {
			return QsciPrinter::newPage();
		}
		

		bool callback_return_value = miqt_exec_callback_QsciPrinter_NewPage(this, handle__NewPage);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NewPage() {

		return QsciPrinter::newPage();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QsciPrinter::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QsciPrinter_PaintEngine(const_cast<MiqtVirtualQsciPrinter*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QsciPrinter::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QsciPrinter::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QsciPrinter_Metric(const_cast<MiqtVirtualQsciPrinter*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QsciPrinter::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetPageLayout = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setPageLayout(const QPageLayout& pageLayout) override {
		if (handle__SetPageLayout == 0) {
			return QsciPrinter::setPageLayout(pageLayout);
		}
		
		const QPageLayout& pageLayout_ret = pageLayout;
		// Cast returned reference into pointer
		QPageLayout* sigval1 = const_cast<QPageLayout*>(&pageLayout_ret);

		bool callback_return_value = miqt_exec_callback_QsciPrinter_SetPageLayout(this, handle__SetPageLayout, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SetPageLayout(QPageLayout* pageLayout) {

		return QsciPrinter::setPageLayout(*pageLayout);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetPageSize = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setPageSize(const QPageSize& pageSize) override {
		if (handle__SetPageSize == 0) {
			return QsciPrinter::setPageSize(pageSize);
		}
		
		const QPageSize& pageSize_ret = pageSize;
		// Cast returned reference into pointer
		QPageSize* sigval1 = const_cast<QPageSize*>(&pageSize_ret);

		bool callback_return_value = miqt_exec_callback_QsciPrinter_SetPageSize(this, handle__SetPageSize, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SetPageSize(QPageSize* pageSize) {

		return QsciPrinter::setPageSize(*pageSize);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetPageOrientation = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setPageOrientation(QPageLayout::Orientation orientation) override {
		if (handle__SetPageOrientation == 0) {
			return QsciPrinter::setPageOrientation(orientation);
		}
		
		QPageLayout::Orientation orientation_ret = orientation;
		int sigval1 = static_cast<int>(orientation_ret);

		bool callback_return_value = miqt_exec_callback_QsciPrinter_SetPageOrientation(this, handle__SetPageOrientation, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SetPageOrientation(int orientation) {

		return QsciPrinter::setPageOrientation(static_cast<QPageLayout::Orientation>(orientation));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetPageMargins = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setPageMargins(const QMarginsF& margins, QPageLayout::Unit units) override {
		if (handle__SetPageMargins == 0) {
			return QsciPrinter::setPageMargins(margins, units);
		}
		
		const QMarginsF& margins_ret = margins;
		// Cast returned reference into pointer
		QMarginsF* sigval1 = const_cast<QMarginsF*>(&margins_ret);
		QPageLayout::Unit units_ret = units;
		int sigval2 = static_cast<int>(units_ret);

		bool callback_return_value = miqt_exec_callback_QsciPrinter_SetPageMargins(this, handle__SetPageMargins, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SetPageMargins(QMarginsF* margins, int units) {

		return QsciPrinter::setPageMargins(*margins, static_cast<QPageLayout::Unit>(units));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetPageRanges = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPageRanges(const QPageRanges& ranges) override {
		if (handle__SetPageRanges == 0) {
			QsciPrinter::setPageRanges(ranges);
			return;
		}
		
		const QPageRanges& ranges_ret = ranges;
		// Cast returned reference into pointer
		QPageRanges* sigval1 = const_cast<QPageRanges*>(&ranges_ret);

		miqt_exec_callback_QsciPrinter_SetPageRanges(this, handle__SetPageRanges, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetPageRanges(QPageRanges* ranges) {

		QsciPrinter::setPageRanges(*ranges);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QsciPrinter::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QsciPrinter_InitPainter(const_cast<MiqtVirtualQsciPrinter*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QsciPrinter::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QsciPrinter::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QsciPrinter_Redirected(const_cast<MiqtVirtualQsciPrinter*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QsciPrinter::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QsciPrinter::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QsciPrinter_SharedPainter(const_cast<MiqtVirtualQsciPrinter*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QsciPrinter::sharedPainter();

	}

};

QsciPrinter* QsciPrinter_new() {
	return new MiqtVirtualQsciPrinter();
}

QsciPrinter* QsciPrinter_new2(int mode) {
	return new MiqtVirtualQsciPrinter(static_cast<QPrinter::PrinterMode>(mode));
}

void QsciPrinter_virtbase(QsciPrinter* src, QPrinter** outptr_QPrinter) {
	*outptr_QPrinter = static_cast<QPrinter*>(src);
}

void QsciPrinter_FormatPage(QsciPrinter* self, QPainter* painter, bool drawing, QRect* area, int pagenr) {
	self->formatPage(*painter, drawing, *area, static_cast<int>(pagenr));
}

int QsciPrinter_Magnification(const QsciPrinter* self) {
	return self->magnification();
}

void QsciPrinter_SetMagnification(QsciPrinter* self, int magnification) {
	self->setMagnification(static_cast<int>(magnification));
}

int QsciPrinter_PrintRange(QsciPrinter* self, QsciScintillaBase* qsb, QPainter* painter, int from, int to) {
	return self->printRange(qsb, *painter, static_cast<int>(from), static_cast<int>(to));
}

int QsciPrinter_PrintRange2(QsciPrinter* self, QsciScintillaBase* qsb, int from, int to) {
	return self->printRange(qsb, static_cast<int>(from), static_cast<int>(to));
}

int QsciPrinter_WrapMode(const QsciPrinter* self) {
	QsciScintilla::WrapMode _ret = self->wrapMode();
	return static_cast<int>(_ret);
}

void QsciPrinter_SetWrapMode(QsciPrinter* self, int wmode) {
	self->setWrapMode(static_cast<QsciScintilla::WrapMode>(wmode));
}

bool QsciPrinter_override_virtual_FormatPage(void* self, intptr_t slot) {
	MiqtVirtualQsciPrinter* self_cast = dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FormatPage = slot;
	return true;
}

void QsciPrinter_virtualbase_FormatPage(void* self, QPainter* painter, bool drawing, QRect* area, int pagenr) {
	( (MiqtVirtualQsciPrinter*)(self) )->virtualbase_FormatPage(painter, drawing, area, pagenr);
}

bool QsciPrinter_override_virtual_SetMagnification(void* self, intptr_t slot) {
	MiqtVirtualQsciPrinter* self_cast = dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetMagnification = slot;
	return true;
}

void QsciPrinter_virtualbase_SetMagnification(void* self, int magnification) {
	( (MiqtVirtualQsciPrinter*)(self) )->virtualbase_SetMagnification(magnification);
}

bool QsciPrinter_override_virtual_PrintRange(void* self, intptr_t slot) {
	MiqtVirtualQsciPrinter* self_cast = dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PrintRange = slot;
	return true;
}

int QsciPrinter_virtualbase_PrintRange(void* self, QsciScintillaBase* qsb, QPainter* painter, int from, int to) {
	return ( (MiqtVirtualQsciPrinter*)(self) )->virtualbase_PrintRange(qsb, painter, from, to);
}

bool QsciPrinter_override_virtual_PrintRange2(void* self, intptr_t slot) {
	MiqtVirtualQsciPrinter* self_cast = dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PrintRange2 = slot;
	return true;
}

int QsciPrinter_virtualbase_PrintRange2(void* self, QsciScintillaBase* qsb, int from, int to) {
	return ( (MiqtVirtualQsciPrinter*)(self) )->virtualbase_PrintRange2(qsb, from, to);
}

bool QsciPrinter_override_virtual_SetWrapMode(void* self, intptr_t slot) {
	MiqtVirtualQsciPrinter* self_cast = dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetWrapMode = slot;
	return true;
}

void QsciPrinter_virtualbase_SetWrapMode(void* self, int wmode) {
	( (MiqtVirtualQsciPrinter*)(self) )->virtualbase_SetWrapMode(wmode);
}

bool QsciPrinter_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQsciPrinter* self_cast = dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QsciPrinter_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQsciPrinter*)(self) )->virtualbase_DevType();
}

bool QsciPrinter_override_virtual_NewPage(void* self, intptr_t slot) {
	MiqtVirtualQsciPrinter* self_cast = dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NewPage = slot;
	return true;
}

bool QsciPrinter_virtualbase_NewPage(void* self) {
	return ( (MiqtVirtualQsciPrinter*)(self) )->virtualbase_NewPage();
}

bool QsciPrinter_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQsciPrinter* self_cast = dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QsciPrinter_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQsciPrinter*)(self) )->virtualbase_PaintEngine();
}

bool QsciPrinter_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQsciPrinter* self_cast = dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QsciPrinter_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQsciPrinter*)(self) )->virtualbase_Metric(param1);
}

bool QsciPrinter_override_virtual_SetPageLayout(void* self, intptr_t slot) {
	MiqtVirtualQsciPrinter* self_cast = dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetPageLayout = slot;
	return true;
}

bool QsciPrinter_virtualbase_SetPageLayout(void* self, QPageLayout* pageLayout) {
	return ( (MiqtVirtualQsciPrinter*)(self) )->virtualbase_SetPageLayout(pageLayout);
}

bool QsciPrinter_override_virtual_SetPageSize(void* self, intptr_t slot) {
	MiqtVirtualQsciPrinter* self_cast = dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetPageSize = slot;
	return true;
}

bool QsciPrinter_virtualbase_SetPageSize(void* self, QPageSize* pageSize) {
	return ( (MiqtVirtualQsciPrinter*)(self) )->virtualbase_SetPageSize(pageSize);
}

bool QsciPrinter_override_virtual_SetPageOrientation(void* self, intptr_t slot) {
	MiqtVirtualQsciPrinter* self_cast = dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetPageOrientation = slot;
	return true;
}

bool QsciPrinter_virtualbase_SetPageOrientation(void* self, int orientation) {
	return ( (MiqtVirtualQsciPrinter*)(self) )->virtualbase_SetPageOrientation(orientation);
}

bool QsciPrinter_override_virtual_SetPageMargins(void* self, intptr_t slot) {
	MiqtVirtualQsciPrinter* self_cast = dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetPageMargins = slot;
	return true;
}

bool QsciPrinter_virtualbase_SetPageMargins(void* self, QMarginsF* margins, int units) {
	return ( (MiqtVirtualQsciPrinter*)(self) )->virtualbase_SetPageMargins(margins, units);
}

bool QsciPrinter_override_virtual_SetPageRanges(void* self, intptr_t slot) {
	MiqtVirtualQsciPrinter* self_cast = dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetPageRanges = slot;
	return true;
}

void QsciPrinter_virtualbase_SetPageRanges(void* self, QPageRanges* ranges) {
	( (MiqtVirtualQsciPrinter*)(self) )->virtualbase_SetPageRanges(ranges);
}

bool QsciPrinter_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQsciPrinter* self_cast = dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QsciPrinter_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQsciPrinter*)(self) )->virtualbase_InitPainter(painter);
}

bool QsciPrinter_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQsciPrinter* self_cast = dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QsciPrinter_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQsciPrinter*)(self) )->virtualbase_Redirected(offset);
}

bool QsciPrinter_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQsciPrinter* self_cast = dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QsciPrinter_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQsciPrinter*)(self) )->virtualbase_SharedPainter();
}

void QsciPrinter_Delete(QsciPrinter* self) {
	delete self;
}

