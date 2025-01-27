#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPagedPaintDevice>
#define WORKAROUND_INNER_CLASS_DEFINITION_QPagedPaintDevice__Margins
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPainter>
#include <QPdfWriter>
#include <QPoint>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qpdfwriter.h>
#include "gen_qpdfwriter.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QPdfWriter_NewPage(QPdfWriter*, intptr_t);
void miqt_exec_callback_QPdfWriter_SetPageSize(QPdfWriter*, intptr_t, int);
void miqt_exec_callback_QPdfWriter_SetPageSizeMM(QPdfWriter*, intptr_t, QSizeF*);
void miqt_exec_callback_QPdfWriter_SetMargins(QPdfWriter*, intptr_t, QPagedPaintDevice__Margins*);
QPaintEngine* miqt_exec_callback_QPdfWriter_PaintEngine(const QPdfWriter*, intptr_t);
int miqt_exec_callback_QPdfWriter_Metric(const QPdfWriter*, intptr_t, int);
bool miqt_exec_callback_QPdfWriter_Event(QPdfWriter*, intptr_t, QEvent*);
bool miqt_exec_callback_QPdfWriter_EventFilter(QPdfWriter*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QPdfWriter_TimerEvent(QPdfWriter*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QPdfWriter_ChildEvent(QPdfWriter*, intptr_t, QChildEvent*);
void miqt_exec_callback_QPdfWriter_CustomEvent(QPdfWriter*, intptr_t, QEvent*);
void miqt_exec_callback_QPdfWriter_ConnectNotify(QPdfWriter*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QPdfWriter_DisconnectNotify(QPdfWriter*, intptr_t, QMetaMethod*);
int miqt_exec_callback_QPdfWriter_DevType(const QPdfWriter*, intptr_t);
void miqt_exec_callback_QPdfWriter_InitPainter(const QPdfWriter*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QPdfWriter_Redirected(const QPdfWriter*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QPdfWriter_SharedPainter(const QPdfWriter*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQPdfWriter final : public QPdfWriter {
public:

	MiqtVirtualQPdfWriter(const QString& filename): QPdfWriter(filename) {};
	MiqtVirtualQPdfWriter(QIODevice* device): QPdfWriter(device) {};

	virtual ~MiqtVirtualQPdfWriter() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NewPage = 0;

	// Subclass to allow providing a Go implementation
	virtual bool newPage() override {
		if (handle__NewPage == 0) {
			return QPdfWriter::newPage();
		}
		

		bool callback_return_value = miqt_exec_callback_QPdfWriter_NewPage(this, handle__NewPage);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NewPage() {

		return QPdfWriter::newPage();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetPageSize = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPageSize(QPagedPaintDevice::PageSize size) override {
		if (handle__SetPageSize == 0) {
			QPdfWriter::setPageSize(size);
			return;
		}
		
		QPagedPaintDevice::PageSize size_ret = size;
		int sigval1 = static_cast<int>(size_ret);

		miqt_exec_callback_QPdfWriter_SetPageSize(this, handle__SetPageSize, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetPageSize(int size) {

		QPdfWriter::setPageSize(static_cast<QPagedPaintDevice::PageSize>(size));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetPageSizeMM = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPageSizeMM(const QSizeF& size) override {
		if (handle__SetPageSizeMM == 0) {
			QPdfWriter::setPageSizeMM(size);
			return;
		}
		
		const QSizeF& size_ret = size;
		// Cast returned reference into pointer
		QSizeF* sigval1 = const_cast<QSizeF*>(&size_ret);

		miqt_exec_callback_QPdfWriter_SetPageSizeMM(this, handle__SetPageSizeMM, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetPageSizeMM(QSizeF* size) {

		QPdfWriter::setPageSizeMM(*size);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetMargins = 0;

	// Subclass to allow providing a Go implementation
	virtual void setMargins(const QPagedPaintDevice::Margins& m) override {
		if (handle__SetMargins == 0) {
			QPdfWriter::setMargins(m);
			return;
		}
		
		const QPagedPaintDevice::Margins& m_ret = m;
		// Cast returned reference into pointer
		QPagedPaintDevice__Margins* sigval1 = const_cast<QPagedPaintDevice::Margins*>(&m_ret);

		miqt_exec_callback_QPdfWriter_SetMargins(this, handle__SetMargins, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetMargins(QPagedPaintDevice__Margins* m) {

		QPdfWriter::setMargins(*m);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QPdfWriter::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QPdfWriter_PaintEngine(this, handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QPdfWriter::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric id) const override {
		if (handle__Metric == 0) {
			return QPdfWriter::metric(id);
		}
		
		QPaintDevice::PaintDeviceMetric id_ret = id;
		int sigval1 = static_cast<int>(id_ret);

		int callback_return_value = miqt_exec_callback_QPdfWriter_Metric(this, handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int id) const {

		return QPdfWriter::metric(static_cast<QPaintDevice::PaintDeviceMetric>(id));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QPdfWriter::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QPdfWriter_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QPdfWriter::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QPdfWriter::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QPdfWriter_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QPdfWriter::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QPdfWriter::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QPdfWriter_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QPdfWriter::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QPdfWriter::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QPdfWriter_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QPdfWriter::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QPdfWriter::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPdfWriter_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QPdfWriter::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QPdfWriter::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPdfWriter_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QPdfWriter::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QPdfWriter::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPdfWriter_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QPdfWriter::disconnectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QPdfWriter::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QPdfWriter_DevType(this, handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QPdfWriter::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QPdfWriter::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QPdfWriter_InitPainter(this, handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QPdfWriter::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QPdfWriter::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QPdfWriter_Redirected(this, handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QPdfWriter::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QPdfWriter::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QPdfWriter_SharedPainter(this, handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QPdfWriter::sharedPainter();

	}

};

QPdfWriter* QPdfWriter_new(struct miqt_string filename) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	return new MiqtVirtualQPdfWriter(filename_QString);
}

QPdfWriter* QPdfWriter_new2(QIODevice* device) {
	return new MiqtVirtualQPdfWriter(device);
}

void QPdfWriter_virtbase(QPdfWriter* src, QObject** outptr_QObject, QPagedPaintDevice** outptr_QPagedPaintDevice) {
	*outptr_QObject = static_cast<QObject*>(src);
	*outptr_QPagedPaintDevice = static_cast<QPagedPaintDevice*>(src);
}

QMetaObject* QPdfWriter_MetaObject(const QPdfWriter* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPdfWriter_Metacast(QPdfWriter* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPdfWriter_Tr(const char* s) {
	QString _ret = QPdfWriter::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPdfWriter_TrUtf8(const char* s) {
	QString _ret = QPdfWriter::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPdfWriter_SetPdfVersion(QPdfWriter* self, int version) {
	self->setPdfVersion(static_cast<QPagedPaintDevice::PdfVersion>(version));
}

int QPdfWriter_PdfVersion(const QPdfWriter* self) {
	QPagedPaintDevice::PdfVersion _ret = self->pdfVersion();
	return static_cast<int>(_ret);
}

struct miqt_string QPdfWriter_Title(const QPdfWriter* self) {
	QString _ret = self->title();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPdfWriter_SetTitle(QPdfWriter* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	self->setTitle(title_QString);
}

struct miqt_string QPdfWriter_Creator(const QPdfWriter* self) {
	QString _ret = self->creator();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPdfWriter_SetCreator(QPdfWriter* self, struct miqt_string creator) {
	QString creator_QString = QString::fromUtf8(creator.data, creator.len);
	self->setCreator(creator_QString);
}

bool QPdfWriter_NewPage(QPdfWriter* self) {
	return self->newPage();
}

void QPdfWriter_SetResolution(QPdfWriter* self, int resolution) {
	self->setResolution(static_cast<int>(resolution));
}

int QPdfWriter_Resolution(const QPdfWriter* self) {
	return self->resolution();
}

void QPdfWriter_SetDocumentXmpMetadata(QPdfWriter* self, struct miqt_string xmpMetadata) {
	QByteArray xmpMetadata_QByteArray(xmpMetadata.data, xmpMetadata.len);
	self->setDocumentXmpMetadata(xmpMetadata_QByteArray);
}

struct miqt_string QPdfWriter_DocumentXmpMetadata(const QPdfWriter* self) {
	QByteArray _qb = self->documentXmpMetadata();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QPdfWriter_AddFileAttachment(QPdfWriter* self, struct miqt_string fileName, struct miqt_string data) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QByteArray data_QByteArray(data.data, data.len);
	self->addFileAttachment(fileName_QString, data_QByteArray);
}

void QPdfWriter_SetPageSize(QPdfWriter* self, int size) {
	self->setPageSize(static_cast<QPagedPaintDevice::PageSize>(size));
}

void QPdfWriter_SetPageSizeMM(QPdfWriter* self, QSizeF* size) {
	self->setPageSizeMM(*size);
}

void QPdfWriter_SetMargins(QPdfWriter* self, QPagedPaintDevice__Margins* m) {
	self->setMargins(*m);
}

struct miqt_string QPdfWriter_Tr2(const char* s, const char* c) {
	QString _ret = QPdfWriter::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPdfWriter_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPdfWriter::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPdfWriter_TrUtf82(const char* s, const char* c) {
	QString _ret = QPdfWriter::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPdfWriter_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QPdfWriter::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPdfWriter_AddFileAttachment3(QPdfWriter* self, struct miqt_string fileName, struct miqt_string data, struct miqt_string mimeType) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QByteArray data_QByteArray(data.data, data.len);
	QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
	self->addFileAttachment(fileName_QString, data_QByteArray, mimeType_QString);
}

bool QPdfWriter_override_virtual_NewPage(void* self, intptr_t slot) {
	MiqtVirtualQPdfWriter* self_cast = dynamic_cast<MiqtVirtualQPdfWriter*>( (QPdfWriter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NewPage = slot;
	return true;
}

bool QPdfWriter_virtualbase_NewPage(void* self) {
	return ( (MiqtVirtualQPdfWriter*)(self) )->virtualbase_NewPage();
}

bool QPdfWriter_override_virtual_SetPageSize(void* self, intptr_t slot) {
	MiqtVirtualQPdfWriter* self_cast = dynamic_cast<MiqtVirtualQPdfWriter*>( (QPdfWriter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetPageSize = slot;
	return true;
}

void QPdfWriter_virtualbase_SetPageSize(void* self, int size) {
	( (MiqtVirtualQPdfWriter*)(self) )->virtualbase_SetPageSize(size);
}

bool QPdfWriter_override_virtual_SetPageSizeMM(void* self, intptr_t slot) {
	MiqtVirtualQPdfWriter* self_cast = dynamic_cast<MiqtVirtualQPdfWriter*>( (QPdfWriter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetPageSizeMM = slot;
	return true;
}

void QPdfWriter_virtualbase_SetPageSizeMM(void* self, QSizeF* size) {
	( (MiqtVirtualQPdfWriter*)(self) )->virtualbase_SetPageSizeMM(size);
}

bool QPdfWriter_override_virtual_SetMargins(void* self, intptr_t slot) {
	MiqtVirtualQPdfWriter* self_cast = dynamic_cast<MiqtVirtualQPdfWriter*>( (QPdfWriter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetMargins = slot;
	return true;
}

void QPdfWriter_virtualbase_SetMargins(void* self, QPagedPaintDevice__Margins* m) {
	( (MiqtVirtualQPdfWriter*)(self) )->virtualbase_SetMargins(m);
}

bool QPdfWriter_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQPdfWriter* self_cast = dynamic_cast<MiqtVirtualQPdfWriter*>( (QPdfWriter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QPdfWriter_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQPdfWriter*)(self) )->virtualbase_PaintEngine();
}

bool QPdfWriter_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQPdfWriter* self_cast = dynamic_cast<MiqtVirtualQPdfWriter*>( (QPdfWriter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QPdfWriter_virtualbase_Metric(const void* self, int id) {
	return ( (const MiqtVirtualQPdfWriter*)(self) )->virtualbase_Metric(id);
}

bool QPdfWriter_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQPdfWriter* self_cast = dynamic_cast<MiqtVirtualQPdfWriter*>( (QPdfWriter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QPdfWriter_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQPdfWriter*)(self) )->virtualbase_Event(event);
}

bool QPdfWriter_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQPdfWriter* self_cast = dynamic_cast<MiqtVirtualQPdfWriter*>( (QPdfWriter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QPdfWriter_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQPdfWriter*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QPdfWriter_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfWriter* self_cast = dynamic_cast<MiqtVirtualQPdfWriter*>( (QPdfWriter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QPdfWriter_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQPdfWriter*)(self) )->virtualbase_TimerEvent(event);
}

bool QPdfWriter_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfWriter* self_cast = dynamic_cast<MiqtVirtualQPdfWriter*>( (QPdfWriter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QPdfWriter_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQPdfWriter*)(self) )->virtualbase_ChildEvent(event);
}

bool QPdfWriter_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfWriter* self_cast = dynamic_cast<MiqtVirtualQPdfWriter*>( (QPdfWriter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QPdfWriter_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQPdfWriter*)(self) )->virtualbase_CustomEvent(event);
}

bool QPdfWriter_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPdfWriter* self_cast = dynamic_cast<MiqtVirtualQPdfWriter*>( (QPdfWriter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QPdfWriter_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQPdfWriter*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QPdfWriter_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPdfWriter* self_cast = dynamic_cast<MiqtVirtualQPdfWriter*>( (QPdfWriter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QPdfWriter_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQPdfWriter*)(self) )->virtualbase_DisconnectNotify(signal);
}

bool QPdfWriter_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQPdfWriter* self_cast = dynamic_cast<MiqtVirtualQPdfWriter*>( (QPdfWriter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QPdfWriter_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQPdfWriter*)(self) )->virtualbase_DevType();
}

bool QPdfWriter_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQPdfWriter* self_cast = dynamic_cast<MiqtVirtualQPdfWriter*>( (QPdfWriter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QPdfWriter_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQPdfWriter*)(self) )->virtualbase_InitPainter(painter);
}

bool QPdfWriter_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQPdfWriter* self_cast = dynamic_cast<MiqtVirtualQPdfWriter*>( (QPdfWriter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QPdfWriter_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQPdfWriter*)(self) )->virtualbase_Redirected(offset);
}

bool QPdfWriter_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQPdfWriter* self_cast = dynamic_cast<MiqtVirtualQPdfWriter*>( (QPdfWriter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QPdfWriter_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQPdfWriter*)(self) )->virtualbase_SharedPainter();
}

void QPdfWriter_Delete(QPdfWriter* self) {
	delete self;
}

