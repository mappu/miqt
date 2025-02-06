#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPageLayout>
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

bool miqt_exec_callback_QPdfWriter_newPage(QPdfWriter*, intptr_t);
void miqt_exec_callback_QPdfWriter_setPageSize(QPdfWriter*, intptr_t, int);
void miqt_exec_callback_QPdfWriter_setPageSizeMM(QPdfWriter*, intptr_t, QSizeF*);
void miqt_exec_callback_QPdfWriter_setMargins(QPdfWriter*, intptr_t, QPagedPaintDevice__Margins*);
QPaintEngine* miqt_exec_callback_QPdfWriter_paintEngine(const QPdfWriter*, intptr_t);
int miqt_exec_callback_QPdfWriter_metric(const QPdfWriter*, intptr_t, int);
bool miqt_exec_callback_QPdfWriter_event(QPdfWriter*, intptr_t, QEvent*);
bool miqt_exec_callback_QPdfWriter_eventFilter(QPdfWriter*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QPdfWriter_timerEvent(QPdfWriter*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QPdfWriter_childEvent(QPdfWriter*, intptr_t, QChildEvent*);
void miqt_exec_callback_QPdfWriter_customEvent(QPdfWriter*, intptr_t, QEvent*);
void miqt_exec_callback_QPdfWriter_connectNotify(QPdfWriter*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QPdfWriter_disconnectNotify(QPdfWriter*, intptr_t, QMetaMethod*);
int miqt_exec_callback_QPdfWriter_devType(const QPdfWriter*, intptr_t);
void miqt_exec_callback_QPdfWriter_initPainter(const QPdfWriter*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QPdfWriter_redirected(const QPdfWriter*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QPdfWriter_sharedPainter(const QPdfWriter*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQPdfWriter final : public QPdfWriter {
public:

	MiqtVirtualQPdfWriter(const QString& filename): QPdfWriter(filename) {};
	MiqtVirtualQPdfWriter(QIODevice* device): QPdfWriter(device) {};

	virtual ~MiqtVirtualQPdfWriter() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__newPage = 0;

	// Subclass to allow providing a Go implementation
	virtual bool newPage() override {
		if (handle__newPage == 0) {
			return QPdfWriter::newPage();
		}
		

		bool callback_return_value = miqt_exec_callback_QPdfWriter_newPage(this, handle__newPage);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_newPage() {

		return QPdfWriter::newPage();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setPageSize = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPageSize(QPagedPaintDevice::PageSize size) override {
		if (handle__setPageSize == 0) {
			QPdfWriter::setPageSize(size);
			return;
		}
		
		QPagedPaintDevice::PageSize size_ret = size;
		int sigval1 = static_cast<int>(size_ret);

		miqt_exec_callback_QPdfWriter_setPageSize(this, handle__setPageSize, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setPageSize(int size) {

		QPdfWriter::setPageSize(static_cast<QPagedPaintDevice::PageSize>(size));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setPageSizeMM = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPageSizeMM(const QSizeF& size) override {
		if (handle__setPageSizeMM == 0) {
			QPdfWriter::setPageSizeMM(size);
			return;
		}
		
		const QSizeF& size_ret = size;
		// Cast returned reference into pointer
		QSizeF* sigval1 = const_cast<QSizeF*>(&size_ret);

		miqt_exec_callback_QPdfWriter_setPageSizeMM(this, handle__setPageSizeMM, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setPageSizeMM(QSizeF* size) {

		QPdfWriter::setPageSizeMM(*size);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setMargins = 0;

	// Subclass to allow providing a Go implementation
	virtual void setMargins(const QPagedPaintDevice::Margins& m) override {
		if (handle__setMargins == 0) {
			QPdfWriter::setMargins(m);
			return;
		}
		
		const QPagedPaintDevice::Margins& m_ret = m;
		// Cast returned reference into pointer
		QPagedPaintDevice__Margins* sigval1 = const_cast<QPagedPaintDevice::Margins*>(&m_ret);

		miqt_exec_callback_QPdfWriter_setMargins(this, handle__setMargins, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setMargins(QPagedPaintDevice__Margins* m) {

		QPdfWriter::setMargins(*m);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QPdfWriter::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QPdfWriter_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QPdfWriter::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric id) const override {
		if (handle__metric == 0) {
			return QPdfWriter::metric(id);
		}
		
		QPaintDevice::PaintDeviceMetric id_ret = id;
		int sigval1 = static_cast<int>(id_ret);

		int callback_return_value = miqt_exec_callback_QPdfWriter_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int id) const {

		return QPdfWriter::metric(static_cast<QPaintDevice::PaintDeviceMetric>(id));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QPdfWriter::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QPdfWriter_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QPdfWriter::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QPdfWriter::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QPdfWriter_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QPdfWriter::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QPdfWriter::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QPdfWriter_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QPdfWriter::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QPdfWriter::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QPdfWriter_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QPdfWriter::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QPdfWriter::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPdfWriter_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QPdfWriter::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QPdfWriter::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPdfWriter_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QPdfWriter::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QPdfWriter::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPdfWriter_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QPdfWriter::disconnectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QPdfWriter::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QPdfWriter_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QPdfWriter::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QPdfWriter::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QPdfWriter_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QPdfWriter::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QPdfWriter::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QPdfWriter_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QPdfWriter::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QPdfWriter::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QPdfWriter_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QPdfWriter::sharedPainter();

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QPdfWriter_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QPdfWriter_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QPdfWriter_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QPdfWriter_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
	friend QPageLayout* QPdfWriter_protectedbase_devicePageLayout(bool* _dynamic_cast_ok, const void* self);
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

QMetaObject* QPdfWriter_metaObject(const QPdfWriter* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPdfWriter_metacast(QPdfWriter* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPdfWriter_tr(const char* s) {
	QString _ret = QPdfWriter::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPdfWriter_trUtf8(const char* s) {
	QString _ret = QPdfWriter::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPdfWriter_setPdfVersion(QPdfWriter* self, int version) {
	self->setPdfVersion(static_cast<QPagedPaintDevice::PdfVersion>(version));
}

int QPdfWriter_pdfVersion(const QPdfWriter* self) {
	QPagedPaintDevice::PdfVersion _ret = self->pdfVersion();
	return static_cast<int>(_ret);
}

struct miqt_string QPdfWriter_title(const QPdfWriter* self) {
	QString _ret = self->title();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPdfWriter_setTitle(QPdfWriter* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	self->setTitle(title_QString);
}

struct miqt_string QPdfWriter_creator(const QPdfWriter* self) {
	QString _ret = self->creator();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPdfWriter_setCreator(QPdfWriter* self, struct miqt_string creator) {
	QString creator_QString = QString::fromUtf8(creator.data, creator.len);
	self->setCreator(creator_QString);
}

bool QPdfWriter_newPage(QPdfWriter* self) {
	return self->newPage();
}

void QPdfWriter_setResolution(QPdfWriter* self, int resolution) {
	self->setResolution(static_cast<int>(resolution));
}

int QPdfWriter_resolution(const QPdfWriter* self) {
	return self->resolution();
}

void QPdfWriter_setDocumentXmpMetadata(QPdfWriter* self, struct miqt_string xmpMetadata) {
	QByteArray xmpMetadata_QByteArray(xmpMetadata.data, xmpMetadata.len);
	self->setDocumentXmpMetadata(xmpMetadata_QByteArray);
}

struct miqt_string QPdfWriter_documentXmpMetadata(const QPdfWriter* self) {
	QByteArray _qb = self->documentXmpMetadata();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QPdfWriter_addFileAttachment(QPdfWriter* self, struct miqt_string fileName, struct miqt_string data) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QByteArray data_QByteArray(data.data, data.len);
	self->addFileAttachment(fileName_QString, data_QByteArray);
}

void QPdfWriter_setPageSize(QPdfWriter* self, int size) {
	self->setPageSize(static_cast<QPagedPaintDevice::PageSize>(size));
}

void QPdfWriter_setPageSizeMM(QPdfWriter* self, QSizeF* size) {
	self->setPageSizeMM(*size);
}

void QPdfWriter_setMargins(QPdfWriter* self, QPagedPaintDevice__Margins* m) {
	self->setMargins(*m);
}

struct miqt_string QPdfWriter_tr2(const char* s, const char* c) {
	QString _ret = QPdfWriter::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPdfWriter_tr3(const char* s, const char* c, int n) {
	QString _ret = QPdfWriter::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPdfWriter_trUtf82(const char* s, const char* c) {
	QString _ret = QPdfWriter::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPdfWriter_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QPdfWriter::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPdfWriter_addFileAttachment3(QPdfWriter* self, struct miqt_string fileName, struct miqt_string data, struct miqt_string mimeType) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QByteArray data_QByteArray(data.data, data.len);
	QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
	self->addFileAttachment(fileName_QString, data_QByteArray, mimeType_QString);
}

bool QPdfWriter_override_virtual_newPage(void* self, intptr_t slot) {
	MiqtVirtualQPdfWriter* self_cast = dynamic_cast<MiqtVirtualQPdfWriter*>( (QPdfWriter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__newPage = slot;
	return true;
}

bool QPdfWriter_virtualbase_newPage(void* self) {
	return ( (MiqtVirtualQPdfWriter*)(self) )->virtualbase_newPage();
}

bool QPdfWriter_override_virtual_setPageSize(void* self, intptr_t slot) {
	MiqtVirtualQPdfWriter* self_cast = dynamic_cast<MiqtVirtualQPdfWriter*>( (QPdfWriter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setPageSize = slot;
	return true;
}

void QPdfWriter_virtualbase_setPageSize(void* self, int size) {
	( (MiqtVirtualQPdfWriter*)(self) )->virtualbase_setPageSize(size);
}

bool QPdfWriter_override_virtual_setPageSizeMM(void* self, intptr_t slot) {
	MiqtVirtualQPdfWriter* self_cast = dynamic_cast<MiqtVirtualQPdfWriter*>( (QPdfWriter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setPageSizeMM = slot;
	return true;
}

void QPdfWriter_virtualbase_setPageSizeMM(void* self, QSizeF* size) {
	( (MiqtVirtualQPdfWriter*)(self) )->virtualbase_setPageSizeMM(size);
}

bool QPdfWriter_override_virtual_setMargins(void* self, intptr_t slot) {
	MiqtVirtualQPdfWriter* self_cast = dynamic_cast<MiqtVirtualQPdfWriter*>( (QPdfWriter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setMargins = slot;
	return true;
}

void QPdfWriter_virtualbase_setMargins(void* self, QPagedPaintDevice__Margins* m) {
	( (MiqtVirtualQPdfWriter*)(self) )->virtualbase_setMargins(m);
}

bool QPdfWriter_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQPdfWriter* self_cast = dynamic_cast<MiqtVirtualQPdfWriter*>( (QPdfWriter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QPdfWriter_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQPdfWriter*)(self) )->virtualbase_paintEngine();
}

bool QPdfWriter_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQPdfWriter* self_cast = dynamic_cast<MiqtVirtualQPdfWriter*>( (QPdfWriter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QPdfWriter_virtualbase_metric(const void* self, int id) {
	return ( (const MiqtVirtualQPdfWriter*)(self) )->virtualbase_metric(id);
}

bool QPdfWriter_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQPdfWriter* self_cast = dynamic_cast<MiqtVirtualQPdfWriter*>( (QPdfWriter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QPdfWriter_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQPdfWriter*)(self) )->virtualbase_event(event);
}

bool QPdfWriter_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQPdfWriter* self_cast = dynamic_cast<MiqtVirtualQPdfWriter*>( (QPdfWriter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QPdfWriter_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQPdfWriter*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QPdfWriter_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfWriter* self_cast = dynamic_cast<MiqtVirtualQPdfWriter*>( (QPdfWriter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QPdfWriter_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQPdfWriter*)(self) )->virtualbase_timerEvent(event);
}

bool QPdfWriter_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfWriter* self_cast = dynamic_cast<MiqtVirtualQPdfWriter*>( (QPdfWriter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QPdfWriter_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQPdfWriter*)(self) )->virtualbase_childEvent(event);
}

bool QPdfWriter_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfWriter* self_cast = dynamic_cast<MiqtVirtualQPdfWriter*>( (QPdfWriter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QPdfWriter_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQPdfWriter*)(self) )->virtualbase_customEvent(event);
}

bool QPdfWriter_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPdfWriter* self_cast = dynamic_cast<MiqtVirtualQPdfWriter*>( (QPdfWriter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QPdfWriter_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQPdfWriter*)(self) )->virtualbase_connectNotify(signal);
}

bool QPdfWriter_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPdfWriter* self_cast = dynamic_cast<MiqtVirtualQPdfWriter*>( (QPdfWriter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QPdfWriter_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQPdfWriter*)(self) )->virtualbase_disconnectNotify(signal);
}

bool QPdfWriter_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQPdfWriter* self_cast = dynamic_cast<MiqtVirtualQPdfWriter*>( (QPdfWriter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QPdfWriter_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQPdfWriter*)(self) )->virtualbase_devType();
}

bool QPdfWriter_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQPdfWriter* self_cast = dynamic_cast<MiqtVirtualQPdfWriter*>( (QPdfWriter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QPdfWriter_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQPdfWriter*)(self) )->virtualbase_initPainter(painter);
}

bool QPdfWriter_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQPdfWriter* self_cast = dynamic_cast<MiqtVirtualQPdfWriter*>( (QPdfWriter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QPdfWriter_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQPdfWriter*)(self) )->virtualbase_redirected(offset);
}

bool QPdfWriter_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQPdfWriter* self_cast = dynamic_cast<MiqtVirtualQPdfWriter*>( (QPdfWriter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QPdfWriter_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQPdfWriter*)(self) )->virtualbase_sharedPainter();
}

QObject* QPdfWriter_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPdfWriter* self_cast = dynamic_cast<MiqtVirtualQPdfWriter*>( (QPdfWriter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QPdfWriter_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPdfWriter* self_cast = dynamic_cast<MiqtVirtualQPdfWriter*>( (QPdfWriter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QPdfWriter_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQPdfWriter* self_cast = dynamic_cast<MiqtVirtualQPdfWriter*>( (QPdfWriter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QPdfWriter_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQPdfWriter* self_cast = dynamic_cast<MiqtVirtualQPdfWriter*>( (QPdfWriter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

QPageLayout* QPdfWriter_protectedbase_devicePageLayout(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPdfWriter* self_cast = dynamic_cast<MiqtVirtualQPdfWriter*>( (QPdfWriter*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QPageLayout(self_cast->devicePageLayout());

}

void QPdfWriter_delete(QPdfWriter* self) {
	delete self;
}

