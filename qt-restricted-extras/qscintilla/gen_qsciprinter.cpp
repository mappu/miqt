#include <QPageLayout>
#include <QPagedPaintDevice>
#define WORKAROUND_INNER_CLASS_DEFINITION_QPagedPaintDevice__Margins
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPainter>
#include <QPoint>
#include <QPrintEngine>
#include <QPrinter>
#include <QRect>
#include <QSizeF>
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
void miqt_exec_callback_QsciPrinter_setPageSize(QsciPrinter*, intptr_t, int);
void miqt_exec_callback_QsciPrinter_setPageSizeMM(QsciPrinter*, intptr_t, QSizeF*);
bool miqt_exec_callback_QsciPrinter_newPage(QsciPrinter*, intptr_t);
QPaintEngine* miqt_exec_callback_QsciPrinter_paintEngine(const QsciPrinter*, intptr_t);
void miqt_exec_callback_QsciPrinter_setMargins(QsciPrinter*, intptr_t, QPagedPaintDevice__Margins*);
int miqt_exec_callback_QsciPrinter_metric(const QsciPrinter*, intptr_t, int);
void miqt_exec_callback_QsciPrinter_initPainter(const QsciPrinter*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QsciPrinter_redirected(const QsciPrinter*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QsciPrinter_sharedPainter(const QsciPrinter*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciPrinter final : public QsciPrinter {
public:

	MiqtVirtualQsciPrinter(): QsciPrinter() {};
	MiqtVirtualQsciPrinter(QPrinter::PrinterMode mode): QsciPrinter(mode) {};

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

	// Wrapper to allow calling protected method
	void virtualbase_formatPage(QPainter* painter, bool drawing, QRect* area, int pagenr) {

		QsciPrinter::formatPage(*painter, drawing, *area, static_cast<int>(pagenr));

	}

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

	// Wrapper to allow calling protected method
	void virtualbase_setMagnification(int magnification) {

		QsciPrinter::setMagnification(static_cast<int>(magnification));

	}

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

	// Wrapper to allow calling protected method
	int virtualbase_printRange(QsciScintillaBase* qsb, QPainter* painter, int from, int to) {

		return QsciPrinter::printRange(qsb, *painter, static_cast<int>(from), static_cast<int>(to));

	}

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

	// Wrapper to allow calling protected method
	int virtualbase_printRange2(QsciScintillaBase* qsb, int from, int to) {

		return QsciPrinter::printRange(qsb, static_cast<int>(from), static_cast<int>(to));

	}

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

	// Wrapper to allow calling protected method
	void virtualbase_setWrapMode(int wmode) {

		QsciPrinter::setWrapMode(static_cast<QsciScintilla::WrapMode>(wmode));

	}

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

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QsciPrinter::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setPageSize = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPageSize(QPagedPaintDevice::PageSize pageSize) override {
		if (handle__setPageSize == 0) {
			QsciPrinter::setPageSize(pageSize);
			return;
		}
		
		QPagedPaintDevice::PageSize pageSize_ret = pageSize;
		int sigval1 = static_cast<int>(pageSize_ret);

		miqt_exec_callback_QsciPrinter_setPageSize(this, handle__setPageSize, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setPageSize(int pageSize) {

		QsciPrinter::setPageSize(static_cast<QPagedPaintDevice::PageSize>(pageSize));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setPageSizeMM = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPageSizeMM(const QSizeF& size) override {
		if (handle__setPageSizeMM == 0) {
			QsciPrinter::setPageSizeMM(size);
			return;
		}
		
		const QSizeF& size_ret = size;
		// Cast returned reference into pointer
		QSizeF* sigval1 = const_cast<QSizeF*>(&size_ret);

		miqt_exec_callback_QsciPrinter_setPageSizeMM(this, handle__setPageSizeMM, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setPageSizeMM(QSizeF* size) {

		QsciPrinter::setPageSizeMM(*size);

	}

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

	// Wrapper to allow calling protected method
	bool virtualbase_newPage() {

		return QsciPrinter::newPage();

	}

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

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QsciPrinter::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setMargins = 0;

	// Subclass to allow providing a Go implementation
	virtual void setMargins(const QPagedPaintDevice::Margins& m) override {
		if (handle__setMargins == 0) {
			QsciPrinter::setMargins(m);
			return;
		}
		
		const QPagedPaintDevice::Margins& m_ret = m;
		// Cast returned reference into pointer
		QPagedPaintDevice__Margins* sigval1 = const_cast<QPagedPaintDevice::Margins*>(&m_ret);

		miqt_exec_callback_QsciPrinter_setMargins(this, handle__setMargins, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setMargins(QPagedPaintDevice__Margins* m) {

		QsciPrinter::setMargins(*m);

	}

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

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QsciPrinter::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

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

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QsciPrinter::initPainter(painter);

	}

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

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QsciPrinter::redirected(offset);

	}

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

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QsciPrinter::sharedPainter();

	}

	// Wrappers to allow calling protected methods:
	friend void QsciPrinter_protectedbase_setEngines(bool* _dynamic_cast_ok, void* self, QPrintEngine* printEngine, QPaintEngine* paintEngine);
	friend QPageLayout* QsciPrinter_protectedbase_devicePageLayout(bool* _dynamic_cast_ok, const void* self);
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
	( (MiqtVirtualQsciPrinter*)(self) )->virtualbase_formatPage(painter, drawing, area, pagenr);
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
	( (MiqtVirtualQsciPrinter*)(self) )->virtualbase_setMagnification(magnification);
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
	return ( (MiqtVirtualQsciPrinter*)(self) )->virtualbase_printRange(qsb, painter, from, to);
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
	return ( (MiqtVirtualQsciPrinter*)(self) )->virtualbase_printRange2(qsb, from, to);
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
	( (MiqtVirtualQsciPrinter*)(self) )->virtualbase_setWrapMode(wmode);
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
	return ( (const MiqtVirtualQsciPrinter*)(self) )->virtualbase_devType();
}

bool QsciPrinter_override_virtual_setPageSize(void* self, intptr_t slot) {
	MiqtVirtualQsciPrinter* self_cast = dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setPageSize = slot;
	return true;
}

void QsciPrinter_virtualbase_setPageSize(void* self, int pageSize) {
	( (MiqtVirtualQsciPrinter*)(self) )->virtualbase_setPageSize(pageSize);
}

bool QsciPrinter_override_virtual_setPageSizeMM(void* self, intptr_t slot) {
	MiqtVirtualQsciPrinter* self_cast = dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setPageSizeMM = slot;
	return true;
}

void QsciPrinter_virtualbase_setPageSizeMM(void* self, QSizeF* size) {
	( (MiqtVirtualQsciPrinter*)(self) )->virtualbase_setPageSizeMM(size);
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
	return ( (MiqtVirtualQsciPrinter*)(self) )->virtualbase_newPage();
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
	return ( (const MiqtVirtualQsciPrinter*)(self) )->virtualbase_paintEngine();
}

bool QsciPrinter_override_virtual_setMargins(void* self, intptr_t slot) {
	MiqtVirtualQsciPrinter* self_cast = dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setMargins = slot;
	return true;
}

void QsciPrinter_virtualbase_setMargins(void* self, QPagedPaintDevice__Margins* m) {
	( (MiqtVirtualQsciPrinter*)(self) )->virtualbase_setMargins(m);
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
	return ( (const MiqtVirtualQsciPrinter*)(self) )->virtualbase_metric(param1);
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
	( (const MiqtVirtualQsciPrinter*)(self) )->virtualbase_initPainter(painter);
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
	return ( (const MiqtVirtualQsciPrinter*)(self) )->virtualbase_redirected(offset);
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
	return ( (const MiqtVirtualQsciPrinter*)(self) )->virtualbase_sharedPainter();
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

QPageLayout* QsciPrinter_protectedbase_devicePageLayout(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciPrinter* self_cast = dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QPageLayout(self_cast->devicePageLayout());

}

void QsciPrinter_delete(QsciPrinter* self) {
	delete self;
}

