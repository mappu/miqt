#include <QDataStream>
#include <QIconEngine>
#define WORKAROUND_INNER_CLASS_DEFINITION_QIconEngine__AvailableSizesArgument
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

void miqt_exec_callback_QIconEngine_Paint(void*, intptr_t, QPainter*, QRect*, int, int);
QSize* miqt_exec_callback_QIconEngine_ActualSize(void*, intptr_t, QSize*, int, int);
QPixmap* miqt_exec_callback_QIconEngine_Pixmap(void*, intptr_t, QSize*, int, int);
void miqt_exec_callback_QIconEngine_AddPixmap(void*, intptr_t, QPixmap*, int, int);
void miqt_exec_callback_QIconEngine_AddFile(void*, intptr_t, struct miqt_string, QSize*, int, int);
struct miqt_string miqt_exec_callback_QIconEngine_Key(void*, intptr_t);
QIconEngine* miqt_exec_callback_QIconEngine_Clone(void*, intptr_t);
bool miqt_exec_callback_QIconEngine_Read(void*, intptr_t, QDataStream*);
bool miqt_exec_callback_QIconEngine_Write(void*, intptr_t, QDataStream*);
struct miqt_array /* of QSize* */  miqt_exec_callback_QIconEngine_AvailableSizes(void*, intptr_t, int, int);
struct miqt_string miqt_exec_callback_QIconEngine_IconName(void*, intptr_t);
void miqt_exec_callback_QIconEngine_VirtualHook(void*, intptr_t, int, void*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQIconEngine final : public QIconEngine {
public:

	MiqtVirtualQIconEngine(): QIconEngine() {};
	MiqtVirtualQIconEngine(const QIconEngine& other): QIconEngine(other) {};

	virtual ~MiqtVirtualQIconEngine() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QRect& rect, QIcon::Mode mode, QIcon::State state) override {
		if (handle__Paint == 0) {
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

		miqt_exec_callback_QIconEngine_Paint(this, handle__Paint, sigval1, sigval2, sigval3, sigval4);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActualSize = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize actualSize(const QSize& size, QIcon::Mode mode, QIcon::State state) override {
		if (handle__ActualSize == 0) {
			return QIconEngine::actualSize(size, mode, state);
		}
		
		const QSize& size_ret = size;
		// Cast returned reference into pointer
		QSize* sigval1 = const_cast<QSize*>(&size_ret);
		QIcon::Mode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);
		QIcon::State state_ret = state;
		int sigval3 = static_cast<int>(state_ret);

		QSize* callback_return_value = miqt_exec_callback_QIconEngine_ActualSize(this, handle__ActualSize, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_ActualSize(QSize* size, int mode, int state) {

		return new QSize(QIconEngine::actualSize(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Pixmap = 0;

	// Subclass to allow providing a Go implementation
	virtual QPixmap pixmap(const QSize& size, QIcon::Mode mode, QIcon::State state) override {
		if (handle__Pixmap == 0) {
			return QIconEngine::pixmap(size, mode, state);
		}
		
		const QSize& size_ret = size;
		// Cast returned reference into pointer
		QSize* sigval1 = const_cast<QSize*>(&size_ret);
		QIcon::Mode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);
		QIcon::State state_ret = state;
		int sigval3 = static_cast<int>(state_ret);

		QPixmap* callback_return_value = miqt_exec_callback_QIconEngine_Pixmap(this, handle__Pixmap, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPixmap* virtualbase_Pixmap(QSize* size, int mode, int state) {

		return new QPixmap(QIconEngine::pixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AddPixmap = 0;

	// Subclass to allow providing a Go implementation
	virtual void addPixmap(const QPixmap& pixmap, QIcon::Mode mode, QIcon::State state) override {
		if (handle__AddPixmap == 0) {
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

		miqt_exec_callback_QIconEngine_AddPixmap(this, handle__AddPixmap, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_AddPixmap(QPixmap* pixmap, int mode, int state) {

		QIconEngine::addPixmap(*pixmap, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AddFile = 0;

	// Subclass to allow providing a Go implementation
	virtual void addFile(const QString& fileName, const QSize& size, QIcon::Mode mode, QIcon::State state) override {
		if (handle__AddFile == 0) {
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

		miqt_exec_callback_QIconEngine_AddFile(this, handle__AddFile, sigval1, sigval2, sigval3, sigval4);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_AddFile(struct miqt_string fileName, QSize* size, int mode, int state) {
		QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);

		QIconEngine::addFile(fileName_QString, *size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Key = 0;

	// Subclass to allow providing a Go implementation
	virtual QString key() const override {
		if (handle__Key == 0) {
			return QIconEngine::key();
		}
		

		struct miqt_string callback_return_value = miqt_exec_callback_QIconEngine_Key(const_cast<MiqtVirtualQIconEngine*>(this), handle__Key);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// Wrapper to allow calling protected method
	struct miqt_string virtualbase_Key() const {

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
	intptr_t handle__Clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QIconEngine* clone() const override {
		if (handle__Clone == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		

		QIconEngine* callback_return_value = miqt_exec_callback_QIconEngine_Clone(const_cast<MiqtVirtualQIconEngine*>(this), handle__Clone);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Read = 0;

	// Subclass to allow providing a Go implementation
	virtual bool read(QDataStream& in) override {
		if (handle__Read == 0) {
			return QIconEngine::read(in);
		}
		
		QDataStream& in_ret = in;
		// Cast returned reference into pointer
		QDataStream* sigval1 = &in_ret;

		bool callback_return_value = miqt_exec_callback_QIconEngine_Read(this, handle__Read, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Read(QDataStream* in) {

		return QIconEngine::read(*in);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Write = 0;

	// Subclass to allow providing a Go implementation
	virtual bool write(QDataStream& out) const override {
		if (handle__Write == 0) {
			return QIconEngine::write(out);
		}
		
		QDataStream& out_ret = out;
		// Cast returned reference into pointer
		QDataStream* sigval1 = &out_ret;

		bool callback_return_value = miqt_exec_callback_QIconEngine_Write(const_cast<MiqtVirtualQIconEngine*>(this), handle__Write, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Write(QDataStream* out) const {

		return QIconEngine::write(*out);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AvailableSizes = 0;

	// Subclass to allow providing a Go implementation
	virtual QList<QSize> availableSizes(QIcon::Mode mode, QIcon::State state) const override {
		if (handle__AvailableSizes == 0) {
			return QIconEngine::availableSizes(mode, state);
		}
		
		QIcon::Mode mode_ret = mode;
		int sigval1 = static_cast<int>(mode_ret);
		QIcon::State state_ret = state;
		int sigval2 = static_cast<int>(state_ret);

		struct miqt_array /* of QSize* */  callback_return_value = miqt_exec_callback_QIconEngine_AvailableSizes(const_cast<MiqtVirtualQIconEngine*>(this), handle__AvailableSizes, sigval1, sigval2);
		QList<QSize> callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QSize** callback_return_value_arr = static_cast<QSize**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(*(callback_return_value_arr[i]));
		}

		return callback_return_value_QList;
	}

	// Wrapper to allow calling protected method
	struct miqt_array /* of QSize* */  virtualbase_AvailableSizes(int mode, int state) const {

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
	intptr_t handle__IconName = 0;

	// Subclass to allow providing a Go implementation
	virtual QString iconName() const override {
		if (handle__IconName == 0) {
			return QIconEngine::iconName();
		}
		

		struct miqt_string callback_return_value = miqt_exec_callback_QIconEngine_IconName(const_cast<MiqtVirtualQIconEngine*>(this), handle__IconName);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// Wrapper to allow calling protected method
	struct miqt_string virtualbase_IconName() const {

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
	intptr_t handle__VirtualHook = 0;

	// Subclass to allow providing a Go implementation
	virtual void virtual_hook(int id, void* data) override {
		if (handle__VirtualHook == 0) {
			QIconEngine::virtual_hook(id, data);
			return;
		}
		
		int sigval1 = id;
		void* sigval2 = data;

		miqt_exec_callback_QIconEngine_VirtualHook(this, handle__VirtualHook, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_VirtualHook(int id, void* data) {

		QIconEngine::virtual_hook(static_cast<int>(id), data);

	}

};

QIconEngine* QIconEngine_new() {
	return new MiqtVirtualQIconEngine();
}

QIconEngine* QIconEngine_new2(QIconEngine* other) {
	return new MiqtVirtualQIconEngine(*other);
}

void QIconEngine_Paint(QIconEngine* self, QPainter* painter, QRect* rect, int mode, int state) {
	self->paint(painter, *rect, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

QSize* QIconEngine_ActualSize(QIconEngine* self, QSize* size, int mode, int state) {
	return new QSize(self->actualSize(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
}

QPixmap* QIconEngine_Pixmap(QIconEngine* self, QSize* size, int mode, int state) {
	return new QPixmap(self->pixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
}

void QIconEngine_AddPixmap(QIconEngine* self, QPixmap* pixmap, int mode, int state) {
	self->addPixmap(*pixmap, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

void QIconEngine_AddFile(QIconEngine* self, struct miqt_string fileName, QSize* size, int mode, int state) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->addFile(fileName_QString, *size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

struct miqt_string QIconEngine_Key(const QIconEngine* self) {
	QString _ret = self->key();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QIconEngine* QIconEngine_Clone(const QIconEngine* self) {
	return self->clone();
}

bool QIconEngine_Read(QIconEngine* self, QDataStream* in) {
	return self->read(*in);
}

bool QIconEngine_Write(const QIconEngine* self, QDataStream* out) {
	return self->write(*out);
}

struct miqt_array /* of QSize* */  QIconEngine_AvailableSizes(const QIconEngine* self, int mode, int state) {
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

struct miqt_string QIconEngine_IconName(const QIconEngine* self) {
	QString _ret = self->iconName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QIconEngine_IsNull(const QIconEngine* self) {
	return self->isNull();
}

QPixmap* QIconEngine_ScaledPixmap(QIconEngine* self, QSize* size, int mode, int state, double scale) {
	return new QPixmap(self->scaledPixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state), static_cast<qreal>(scale)));
}

void QIconEngine_VirtualHook(QIconEngine* self, int id, void* data) {
	self->virtual_hook(static_cast<int>(id), data);
}

void QIconEngine_override_virtual_Paint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIconEngine*>( (QIconEngine*)(self) )->handle__Paint = slot;
}

void QIconEngine_override_virtual_ActualSize(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIconEngine*>( (QIconEngine*)(self) )->handle__ActualSize = slot;
}

QSize* QIconEngine_virtualbase_ActualSize(void* self, QSize* size, int mode, int state) {
	return ( (MiqtVirtualQIconEngine*)(self) )->virtualbase_ActualSize(size, mode, state);
}

void QIconEngine_override_virtual_Pixmap(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIconEngine*>( (QIconEngine*)(self) )->handle__Pixmap = slot;
}

QPixmap* QIconEngine_virtualbase_Pixmap(void* self, QSize* size, int mode, int state) {
	return ( (MiqtVirtualQIconEngine*)(self) )->virtualbase_Pixmap(size, mode, state);
}

void QIconEngine_override_virtual_AddPixmap(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIconEngine*>( (QIconEngine*)(self) )->handle__AddPixmap = slot;
}

void QIconEngine_virtualbase_AddPixmap(void* self, QPixmap* pixmap, int mode, int state) {
	( (MiqtVirtualQIconEngine*)(self) )->virtualbase_AddPixmap(pixmap, mode, state);
}

void QIconEngine_override_virtual_AddFile(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIconEngine*>( (QIconEngine*)(self) )->handle__AddFile = slot;
}

void QIconEngine_virtualbase_AddFile(void* self, struct miqt_string fileName, QSize* size, int mode, int state) {
	( (MiqtVirtualQIconEngine*)(self) )->virtualbase_AddFile(fileName, size, mode, state);
}

void QIconEngine_override_virtual_Key(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIconEngine*>( (QIconEngine*)(self) )->handle__Key = slot;
}

struct miqt_string QIconEngine_virtualbase_Key(const void* self) {
	return ( (const MiqtVirtualQIconEngine*)(self) )->virtualbase_Key();
}

void QIconEngine_override_virtual_Clone(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIconEngine*>( (QIconEngine*)(self) )->handle__Clone = slot;
}

void QIconEngine_override_virtual_Read(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIconEngine*>( (QIconEngine*)(self) )->handle__Read = slot;
}

bool QIconEngine_virtualbase_Read(void* self, QDataStream* in) {
	return ( (MiqtVirtualQIconEngine*)(self) )->virtualbase_Read(in);
}

void QIconEngine_override_virtual_Write(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIconEngine*>( (QIconEngine*)(self) )->handle__Write = slot;
}

bool QIconEngine_virtualbase_Write(const void* self, QDataStream* out) {
	return ( (const MiqtVirtualQIconEngine*)(self) )->virtualbase_Write(out);
}

void QIconEngine_override_virtual_AvailableSizes(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIconEngine*>( (QIconEngine*)(self) )->handle__AvailableSizes = slot;
}

struct miqt_array /* of QSize* */  QIconEngine_virtualbase_AvailableSizes(const void* self, int mode, int state) {
	return ( (const MiqtVirtualQIconEngine*)(self) )->virtualbase_AvailableSizes(mode, state);
}

void QIconEngine_override_virtual_IconName(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIconEngine*>( (QIconEngine*)(self) )->handle__IconName = slot;
}

struct miqt_string QIconEngine_virtualbase_IconName(const void* self) {
	return ( (const MiqtVirtualQIconEngine*)(self) )->virtualbase_IconName();
}

void QIconEngine_override_virtual_VirtualHook(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIconEngine*>( (QIconEngine*)(self) )->handle__VirtualHook = slot;
}

void QIconEngine_virtualbase_VirtualHook(void* self, int id, void* data) {
	( (MiqtVirtualQIconEngine*)(self) )->virtualbase_VirtualHook(id, data);
}

void QIconEngine_Delete(QIconEngine* self) {
	delete self;
}

QIconEngine__AvailableSizesArgument* QIconEngine__AvailableSizesArgument_new(QIconEngine__AvailableSizesArgument* param1) {
	return new QIconEngine::AvailableSizesArgument(*param1);
}

void QIconEngine__AvailableSizesArgument_OperatorAssign(QIconEngine__AvailableSizesArgument* self, QIconEngine__AvailableSizesArgument* param1) {
	self->operator=(*param1);
}

void QIconEngine__AvailableSizesArgument_Delete(QIconEngine__AvailableSizesArgument* self) {
	delete self;
}

QIconEngine__ScaledPixmapArgument* QIconEngine__ScaledPixmapArgument_new(QIconEngine__ScaledPixmapArgument* param1) {
	return new QIconEngine::ScaledPixmapArgument(*param1);
}

void QIconEngine__ScaledPixmapArgument_OperatorAssign(QIconEngine__ScaledPixmapArgument* self, QIconEngine__ScaledPixmapArgument* param1) {
	self->operator=(*param1);
}

void QIconEngine__ScaledPixmapArgument_Delete(QIconEngine__ScaledPixmapArgument* self) {
	delete self;
}

