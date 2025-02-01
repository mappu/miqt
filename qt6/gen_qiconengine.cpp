#include <QDataStream>
#include <QIconEngine>
#define WORKAROUND_INNER_CLASS_DEFINITION_QIconEngine__ScaledPixmapArgument
#include <QList>
#include <QPainter>
#include <QPixmap>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qiconengine.h>
#include "gen_qiconengine.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QIconEngine_paint(QIconEngine*, intptr_t, QPainter*, QRect*, int, int);
QSize* miqt_exec_callback_QIconEngine_actualSize(QIconEngine*, intptr_t, QSize*, int, int);
QPixmap* miqt_exec_callback_QIconEngine_pixmap(QIconEngine*, intptr_t, QSize*, int, int);
void miqt_exec_callback_QIconEngine_addPixmap(QIconEngine*, intptr_t, QPixmap*, int, int);
void miqt_exec_callback_QIconEngine_addFile(QIconEngine*, intptr_t, struct miqt_string, QSize*, int, int);
struct miqt_string miqt_exec_callback_QIconEngine_key(const QIconEngine*, intptr_t);
QIconEngine* miqt_exec_callback_QIconEngine_clone(const QIconEngine*, intptr_t);
bool miqt_exec_callback_QIconEngine_read(QIconEngine*, intptr_t, QDataStream*);
bool miqt_exec_callback_QIconEngine_write(const QIconEngine*, intptr_t, QDataStream*);
struct miqt_array /* of QSize* */  miqt_exec_callback_QIconEngine_availableSizes(QIconEngine*, intptr_t, int, int);
struct miqt_string miqt_exec_callback_QIconEngine_iconName(QIconEngine*, intptr_t);
bool miqt_exec_callback_QIconEngine_isNull(QIconEngine*, intptr_t);
QPixmap* miqt_exec_callback_QIconEngine_scaledPixmap(QIconEngine*, intptr_t, QSize*, int, int, double);
void miqt_exec_callback_QIconEngine_virtualHook(QIconEngine*, intptr_t, int, void*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQIconEngine final : public QIconEngine {
public:

	MiqtVirtualQIconEngine(): QIconEngine() {};

	virtual ~MiqtVirtualQIconEngine() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QRect& rect, QIcon::Mode mode, QIcon::State state) override {
		if (handle__paint == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		QPainter* sigval1 = painter;
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval2 = const_cast<QRect*>(&rect_ret);
		QIcon::Mode mode_ret = mode;
		int sigval3 = static_cast<int>(mode_ret);
		QIcon::State state_ret = state;
		int sigval4 = static_cast<int>(state_ret);

		miqt_exec_callback_QIconEngine_paint(this, handle__paint, sigval1, sigval2, sigval3, sigval4);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actualSize = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize actualSize(const QSize& size, QIcon::Mode mode, QIcon::State state) override {
		if (handle__actualSize == 0) {
			return QIconEngine::actualSize(size, mode, state);
		}
		
		const QSize& size_ret = size;
		// Cast returned reference into pointer
		QSize* sigval1 = const_cast<QSize*>(&size_ret);
		QIcon::Mode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);
		QIcon::State state_ret = state;
		int sigval3 = static_cast<int>(state_ret);

		QSize* callback_return_value = miqt_exec_callback_QIconEngine_actualSize(this, handle__actualSize, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_actualSize(QSize* size, int mode, int state) {

		return new QSize(QIconEngine::actualSize(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__pixmap = 0;

	// Subclass to allow providing a Go implementation
	virtual QPixmap pixmap(const QSize& size, QIcon::Mode mode, QIcon::State state) override {
		if (handle__pixmap == 0) {
			return QIconEngine::pixmap(size, mode, state);
		}
		
		const QSize& size_ret = size;
		// Cast returned reference into pointer
		QSize* sigval1 = const_cast<QSize*>(&size_ret);
		QIcon::Mode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);
		QIcon::State state_ret = state;
		int sigval3 = static_cast<int>(state_ret);

		QPixmap* callback_return_value = miqt_exec_callback_QIconEngine_pixmap(this, handle__pixmap, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPixmap* virtualbase_pixmap(QSize* size, int mode, int state) {

		return new QPixmap(QIconEngine::pixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__addPixmap = 0;

	// Subclass to allow providing a Go implementation
	virtual void addPixmap(const QPixmap& pixmap, QIcon::Mode mode, QIcon::State state) override {
		if (handle__addPixmap == 0) {
			QIconEngine::addPixmap(pixmap, mode, state);
			return;
		}
		
		const QPixmap& pixmap_ret = pixmap;
		// Cast returned reference into pointer
		QPixmap* sigval1 = const_cast<QPixmap*>(&pixmap_ret);
		QIcon::Mode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);
		QIcon::State state_ret = state;
		int sigval3 = static_cast<int>(state_ret);

		miqt_exec_callback_QIconEngine_addPixmap(this, handle__addPixmap, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_addPixmap(QPixmap* pixmap, int mode, int state) {

		QIconEngine::addPixmap(*pixmap, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__addFile = 0;

	// Subclass to allow providing a Go implementation
	virtual void addFile(const QString& fileName, const QSize& size, QIcon::Mode mode, QIcon::State state) override {
		if (handle__addFile == 0) {
			QIconEngine::addFile(fileName, size, mode, state);
			return;
		}
		
		const QString fileName_ret = fileName;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray fileName_b = fileName_ret.toUtf8();
		struct miqt_string fileName_ms;
		fileName_ms.len = fileName_b.length();
		fileName_ms.data = static_cast<char*>(malloc(fileName_ms.len));
		memcpy(fileName_ms.data, fileName_b.data(), fileName_ms.len);
		struct miqt_string sigval1 = fileName_ms;
		const QSize& size_ret = size;
		// Cast returned reference into pointer
		QSize* sigval2 = const_cast<QSize*>(&size_ret);
		QIcon::Mode mode_ret = mode;
		int sigval3 = static_cast<int>(mode_ret);
		QIcon::State state_ret = state;
		int sigval4 = static_cast<int>(state_ret);

		miqt_exec_callback_QIconEngine_addFile(this, handle__addFile, sigval1, sigval2, sigval3, sigval4);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_addFile(struct miqt_string fileName, QSize* size, int mode, int state) {
		QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);

		QIconEngine::addFile(fileName_QString, *size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__key = 0;

	// Subclass to allow providing a Go implementation
	virtual QString key() const override {
		if (handle__key == 0) {
			return QIconEngine::key();
		}
		

		struct miqt_string callback_return_value = miqt_exec_callback_QIconEngine_key(this, handle__key);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// Wrapper to allow calling protected method
	struct miqt_string virtualbase_key() const {

		QString _ret = QIconEngine::key();
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _b = _ret.toUtf8();
		struct miqt_string _ms;
		_ms.len = _b.length();
		_ms.data = static_cast<char*>(malloc(_ms.len));
		memcpy(_ms.data, _b.data(), _ms.len);
		return _ms;

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QIconEngine* clone() const override {
		if (handle__clone == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		

		QIconEngine* callback_return_value = miqt_exec_callback_QIconEngine_clone(this, handle__clone);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__read = 0;

	// Subclass to allow providing a Go implementation
	virtual bool read(QDataStream& in) override {
		if (handle__read == 0) {
			return QIconEngine::read(in);
		}
		
		QDataStream& in_ret = in;
		// Cast returned reference into pointer
		QDataStream* sigval1 = &in_ret;

		bool callback_return_value = miqt_exec_callback_QIconEngine_read(this, handle__read, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_read(QDataStream* in) {

		return QIconEngine::read(*in);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__write = 0;

	// Subclass to allow providing a Go implementation
	virtual bool write(QDataStream& out) const override {
		if (handle__write == 0) {
			return QIconEngine::write(out);
		}
		
		QDataStream& out_ret = out;
		// Cast returned reference into pointer
		QDataStream* sigval1 = &out_ret;

		bool callback_return_value = miqt_exec_callback_QIconEngine_write(this, handle__write, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_write(QDataStream* out) const {

		return QIconEngine::write(*out);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__availableSizes = 0;

	// Subclass to allow providing a Go implementation
	virtual QList<QSize> availableSizes(QIcon::Mode mode, QIcon::State state) override {
		if (handle__availableSizes == 0) {
			return QIconEngine::availableSizes(mode, state);
		}
		
		QIcon::Mode mode_ret = mode;
		int sigval1 = static_cast<int>(mode_ret);
		QIcon::State state_ret = state;
		int sigval2 = static_cast<int>(state_ret);

		struct miqt_array /* of QSize* */  callback_return_value = miqt_exec_callback_QIconEngine_availableSizes(this, handle__availableSizes, sigval1, sigval2);
		QList<QSize> callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QSize** callback_return_value_arr = static_cast<QSize**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(*(callback_return_value_arr[i]));
		}

		return callback_return_value_QList;
	}

	// Wrapper to allow calling protected method
	struct miqt_array /* of QSize* */  virtualbase_availableSizes(int mode, int state) {

		QList<QSize> _ret = QIconEngine::availableSizes(static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
		// Convert QList<> from C++ memory to manually-managed C memory
		QSize** _arr = static_cast<QSize**>(malloc(sizeof(QSize*) * _ret.length()));
		for (size_t i = 0, e = _ret.length(); i < e; ++i) {
			_arr[i] = new QSize(_ret[i]);
		}
		struct miqt_array _out;
		_out.len = _ret.length();
		_out.data = static_cast<void*>(_arr);
		return _out;

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__iconName = 0;

	// Subclass to allow providing a Go implementation
	virtual QString iconName() override {
		if (handle__iconName == 0) {
			return QIconEngine::iconName();
		}
		

		struct miqt_string callback_return_value = miqt_exec_callback_QIconEngine_iconName(this, handle__iconName);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// Wrapper to allow calling protected method
	struct miqt_string virtualbase_iconName() {

		QString _ret = QIconEngine::iconName();
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _b = _ret.toUtf8();
		struct miqt_string _ms;
		_ms.len = _b.length();
		_ms.data = static_cast<char*>(malloc(_ms.len));
		memcpy(_ms.data, _b.data(), _ms.len);
		return _ms;

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isNull = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isNull() override {
		if (handle__isNull == 0) {
			return QIconEngine::isNull();
		}
		

		bool callback_return_value = miqt_exec_callback_QIconEngine_isNull(this, handle__isNull);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_isNull() {

		return QIconEngine::isNull();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scaledPixmap = 0;

	// Subclass to allow providing a Go implementation
	virtual QPixmap scaledPixmap(const QSize& size, QIcon::Mode mode, QIcon::State state, qreal scale) override {
		if (handle__scaledPixmap == 0) {
			return QIconEngine::scaledPixmap(size, mode, state, scale);
		}
		
		const QSize& size_ret = size;
		// Cast returned reference into pointer
		QSize* sigval1 = const_cast<QSize*>(&size_ret);
		QIcon::Mode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);
		QIcon::State state_ret = state;
		int sigval3 = static_cast<int>(state_ret);
		qreal scale_ret = scale;
		double sigval4 = static_cast<double>(scale_ret);

		QPixmap* callback_return_value = miqt_exec_callback_QIconEngine_scaledPixmap(this, handle__scaledPixmap, sigval1, sigval2, sigval3, sigval4);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPixmap* virtualbase_scaledPixmap(QSize* size, int mode, int state, double scale) {

		return new QPixmap(QIconEngine::scaledPixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state), static_cast<qreal>(scale)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__virtualHook = 0;

	// Subclass to allow providing a Go implementation
	virtual void virtual_hook(int id, void* data) override {
		if (handle__virtualHook == 0) {
			QIconEngine::virtual_hook(id, data);
			return;
		}
		
		int sigval1 = id;
		void* sigval2 = data;

		miqt_exec_callback_QIconEngine_virtualHook(this, handle__virtualHook, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_virtualHook(int id, void* data) {

		QIconEngine::virtual_hook(static_cast<int>(id), data);

	}

};

QIconEngine* QIconEngine_new() {
	return new MiqtVirtualQIconEngine();
}

void QIconEngine_paint(QIconEngine* self, QPainter* painter, QRect* rect, int mode, int state) {
	self->paint(painter, *rect, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

QSize* QIconEngine_actualSize(QIconEngine* self, QSize* size, int mode, int state) {
	return new QSize(self->actualSize(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
}

QPixmap* QIconEngine_pixmap(QIconEngine* self, QSize* size, int mode, int state) {
	return new QPixmap(self->pixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
}

void QIconEngine_addPixmap(QIconEngine* self, QPixmap* pixmap, int mode, int state) {
	self->addPixmap(*pixmap, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

void QIconEngine_addFile(QIconEngine* self, struct miqt_string fileName, QSize* size, int mode, int state) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->addFile(fileName_QString, *size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

struct miqt_string QIconEngine_key(const QIconEngine* self) {
	QString _ret = self->key();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QIconEngine* QIconEngine_clone(const QIconEngine* self) {
	return self->clone();
}

bool QIconEngine_read(QIconEngine* self, QDataStream* in) {
	return self->read(*in);
}

bool QIconEngine_write(const QIconEngine* self, QDataStream* out) {
	return self->write(*out);
}

struct miqt_array /* of QSize* */  QIconEngine_availableSizes(QIconEngine* self, int mode, int state) {
	QList<QSize> _ret = self->availableSizes(static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
	// Convert QList<> from C++ memory to manually-managed C memory
	QSize** _arr = static_cast<QSize**>(malloc(sizeof(QSize*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QSize(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QIconEngine_iconName(QIconEngine* self) {
	QString _ret = self->iconName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QIconEngine_isNull(QIconEngine* self) {
	return self->isNull();
}

QPixmap* QIconEngine_scaledPixmap(QIconEngine* self, QSize* size, int mode, int state, double scale) {
	return new QPixmap(self->scaledPixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state), static_cast<qreal>(scale)));
}

void QIconEngine_virtualHook(QIconEngine* self, int id, void* data) {
	self->virtual_hook(static_cast<int>(id), data);
}

bool QIconEngine_override_virtual_paint(void* self, intptr_t slot) {
	MiqtVirtualQIconEngine* self_cast = dynamic_cast<MiqtVirtualQIconEngine*>( (QIconEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paint = slot;
	return true;
}

bool QIconEngine_override_virtual_actualSize(void* self, intptr_t slot) {
	MiqtVirtualQIconEngine* self_cast = dynamic_cast<MiqtVirtualQIconEngine*>( (QIconEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actualSize = slot;
	return true;
}

QSize* QIconEngine_virtualbase_actualSize(void* self, QSize* size, int mode, int state) {
	return ( (MiqtVirtualQIconEngine*)(self) )->virtualbase_actualSize(size, mode, state);
}

bool QIconEngine_override_virtual_pixmap(void* self, intptr_t slot) {
	MiqtVirtualQIconEngine* self_cast = dynamic_cast<MiqtVirtualQIconEngine*>( (QIconEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__pixmap = slot;
	return true;
}

QPixmap* QIconEngine_virtualbase_pixmap(void* self, QSize* size, int mode, int state) {
	return ( (MiqtVirtualQIconEngine*)(self) )->virtualbase_pixmap(size, mode, state);
}

bool QIconEngine_override_virtual_addPixmap(void* self, intptr_t slot) {
	MiqtVirtualQIconEngine* self_cast = dynamic_cast<MiqtVirtualQIconEngine*>( (QIconEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__addPixmap = slot;
	return true;
}

void QIconEngine_virtualbase_addPixmap(void* self, QPixmap* pixmap, int mode, int state) {
	( (MiqtVirtualQIconEngine*)(self) )->virtualbase_addPixmap(pixmap, mode, state);
}

bool QIconEngine_override_virtual_addFile(void* self, intptr_t slot) {
	MiqtVirtualQIconEngine* self_cast = dynamic_cast<MiqtVirtualQIconEngine*>( (QIconEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__addFile = slot;
	return true;
}

void QIconEngine_virtualbase_addFile(void* self, struct miqt_string fileName, QSize* size, int mode, int state) {
	( (MiqtVirtualQIconEngine*)(self) )->virtualbase_addFile(fileName, size, mode, state);
}

bool QIconEngine_override_virtual_key(void* self, intptr_t slot) {
	MiqtVirtualQIconEngine* self_cast = dynamic_cast<MiqtVirtualQIconEngine*>( (QIconEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__key = slot;
	return true;
}

struct miqt_string QIconEngine_virtualbase_key(const void* self) {
	return ( (const MiqtVirtualQIconEngine*)(self) )->virtualbase_key();
}

bool QIconEngine_override_virtual_clone(void* self, intptr_t slot) {
	MiqtVirtualQIconEngine* self_cast = dynamic_cast<MiqtVirtualQIconEngine*>( (QIconEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__clone = slot;
	return true;
}

bool QIconEngine_override_virtual_read(void* self, intptr_t slot) {
	MiqtVirtualQIconEngine* self_cast = dynamic_cast<MiqtVirtualQIconEngine*>( (QIconEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__read = slot;
	return true;
}

bool QIconEngine_virtualbase_read(void* self, QDataStream* in) {
	return ( (MiqtVirtualQIconEngine*)(self) )->virtualbase_read(in);
}

bool QIconEngine_override_virtual_write(void* self, intptr_t slot) {
	MiqtVirtualQIconEngine* self_cast = dynamic_cast<MiqtVirtualQIconEngine*>( (QIconEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__write = slot;
	return true;
}

bool QIconEngine_virtualbase_write(const void* self, QDataStream* out) {
	return ( (const MiqtVirtualQIconEngine*)(self) )->virtualbase_write(out);
}

bool QIconEngine_override_virtual_availableSizes(void* self, intptr_t slot) {
	MiqtVirtualQIconEngine* self_cast = dynamic_cast<MiqtVirtualQIconEngine*>( (QIconEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__availableSizes = slot;
	return true;
}

struct miqt_array /* of QSize* */  QIconEngine_virtualbase_availableSizes(void* self, int mode, int state) {
	return ( (MiqtVirtualQIconEngine*)(self) )->virtualbase_availableSizes(mode, state);
}

bool QIconEngine_override_virtual_iconName(void* self, intptr_t slot) {
	MiqtVirtualQIconEngine* self_cast = dynamic_cast<MiqtVirtualQIconEngine*>( (QIconEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__iconName = slot;
	return true;
}

struct miqt_string QIconEngine_virtualbase_iconName(void* self) {
	return ( (MiqtVirtualQIconEngine*)(self) )->virtualbase_iconName();
}

bool QIconEngine_override_virtual_isNull(void* self, intptr_t slot) {
	MiqtVirtualQIconEngine* self_cast = dynamic_cast<MiqtVirtualQIconEngine*>( (QIconEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isNull = slot;
	return true;
}

bool QIconEngine_virtualbase_isNull(void* self) {
	return ( (MiqtVirtualQIconEngine*)(self) )->virtualbase_isNull();
}

bool QIconEngine_override_virtual_scaledPixmap(void* self, intptr_t slot) {
	MiqtVirtualQIconEngine* self_cast = dynamic_cast<MiqtVirtualQIconEngine*>( (QIconEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__scaledPixmap = slot;
	return true;
}

QPixmap* QIconEngine_virtualbase_scaledPixmap(void* self, QSize* size, int mode, int state, double scale) {
	return ( (MiqtVirtualQIconEngine*)(self) )->virtualbase_scaledPixmap(size, mode, state, scale);
}

bool QIconEngine_override_virtual_virtualHook(void* self, intptr_t slot) {
	MiqtVirtualQIconEngine* self_cast = dynamic_cast<MiqtVirtualQIconEngine*>( (QIconEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__virtualHook = slot;
	return true;
}

void QIconEngine_virtualbase_virtualHook(void* self, int id, void* data) {
	( (MiqtVirtualQIconEngine*)(self) )->virtualbase_virtualHook(id, data);
}

void QIconEngine_delete(QIconEngine* self) {
	delete self;
}

QIconEngine__ScaledPixmapArgument* QIconEngine__ScaledPixmapArgument_new(QIconEngine__ScaledPixmapArgument* param1) {
	return new QIconEngine::ScaledPixmapArgument(*param1);
}

void QIconEngine__ScaledPixmapArgument_operatorAssign(QIconEngine__ScaledPixmapArgument* self, QIconEngine__ScaledPixmapArgument* param1) {
	self->operator=(*param1);
}

void QIconEngine__ScaledPixmapArgument_delete(QIconEngine__ScaledPixmapArgument* self) {
	delete self;
}

