#include <QPagedPaintDevice>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPainter>
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
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciPrinter : public virtual QsciPrinter {
public:

	MiqtVirtualQsciPrinter(): QsciPrinter() {};
	MiqtVirtualQsciPrinter(QPrinter::PrinterMode mode): QsciPrinter(mode) {};

	virtual ~MiqtVirtualQsciPrinter() = default;

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

void QsciPrinter_override_virtual_FormatPage(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) )->handle__FormatPage = slot;
}

void QsciPrinter_virtualbase_FormatPage(void* self, QPainter* painter, bool drawing, QRect* area, int pagenr) {
	( (MiqtVirtualQsciPrinter*)(self) )->virtualbase_FormatPage(painter, drawing, area, pagenr);
}

void QsciPrinter_override_virtual_SetMagnification(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) )->handle__SetMagnification = slot;
}

void QsciPrinter_virtualbase_SetMagnification(void* self, int magnification) {
	( (MiqtVirtualQsciPrinter*)(self) )->virtualbase_SetMagnification(magnification);
}

void QsciPrinter_override_virtual_PrintRange(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) )->handle__PrintRange = slot;
}

int QsciPrinter_virtualbase_PrintRange(void* self, QsciScintillaBase* qsb, QPainter* painter, int from, int to) {
	return ( (MiqtVirtualQsciPrinter*)(self) )->virtualbase_PrintRange(qsb, painter, from, to);
}

void QsciPrinter_override_virtual_PrintRange2(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) )->handle__PrintRange2 = slot;
}

int QsciPrinter_virtualbase_PrintRange2(void* self, QsciScintillaBase* qsb, int from, int to) {
	return ( (MiqtVirtualQsciPrinter*)(self) )->virtualbase_PrintRange2(qsb, from, to);
}

void QsciPrinter_override_virtual_SetWrapMode(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) )->handle__SetWrapMode = slot;
}

void QsciPrinter_virtualbase_SetWrapMode(void* self, int wmode) {
	( (MiqtVirtualQsciPrinter*)(self) )->virtualbase_SetWrapMode(wmode);
}

void QsciPrinter_override_virtual_DevType(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) )->handle__DevType = slot;
}

int QsciPrinter_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQsciPrinter*)(self) )->virtualbase_DevType();
}

void QsciPrinter_override_virtual_NewPage(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) )->handle__NewPage = slot;
}

bool QsciPrinter_virtualbase_NewPage(void* self) {
	return ( (MiqtVirtualQsciPrinter*)(self) )->virtualbase_NewPage();
}

void QsciPrinter_override_virtual_PaintEngine(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) )->handle__PaintEngine = slot;
}

QPaintEngine* QsciPrinter_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQsciPrinter*)(self) )->virtualbase_PaintEngine();
}

void QsciPrinter_override_virtual_Metric(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciPrinter*>( (QsciPrinter*)(self) )->handle__Metric = slot;
}

int QsciPrinter_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQsciPrinter*)(self) )->virtualbase_Metric(param1);
}

void QsciPrinter_Delete(QsciPrinter* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQsciPrinter*>( self );
	} else {
		delete self;
	}
}

