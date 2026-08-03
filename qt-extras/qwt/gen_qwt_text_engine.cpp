#include <QFont>
#include <QPainter>
#include <QRectF>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qwt_text_engine.h>
#include "gen_qwt_text_engine.h"

#ifdef __cplusplus
extern "C" {
#endif

double miqt_exec_callback_QwtTextEngine_heightForWidth(const QwtTextEngine*, intptr_t, QFont*, int, struct miqt_string, double);
QSizeF* miqt_exec_callback_QwtTextEngine_textSize(const QwtTextEngine*, intptr_t, QFont*, int, struct miqt_string);
bool miqt_exec_callback_QwtTextEngine_mightRender(const QwtTextEngine*, intptr_t, struct miqt_string);
void miqt_exec_callback_QwtTextEngine_textMargins(const QwtTextEngine*, intptr_t, QFont*, struct miqt_string, double*, double*, double*, double*);
void miqt_exec_callback_QwtTextEngine_draw(const QwtTextEngine*, intptr_t, QPainter*, QRectF*, int, struct miqt_string);
double miqt_exec_callback_QwtPlainTextEngine_heightForWidth(const QwtPlainTextEngine*, intptr_t, QFont*, int, struct miqt_string, double);
QSizeF* miqt_exec_callback_QwtPlainTextEngine_textSize(const QwtPlainTextEngine*, intptr_t, QFont*, int, struct miqt_string);
void miqt_exec_callback_QwtPlainTextEngine_draw(const QwtPlainTextEngine*, intptr_t, QPainter*, QRectF*, int, struct miqt_string);
bool miqt_exec_callback_QwtPlainTextEngine_mightRender(const QwtPlainTextEngine*, intptr_t, struct miqt_string);
void miqt_exec_callback_QwtPlainTextEngine_textMargins(const QwtPlainTextEngine*, intptr_t, QFont*, struct miqt_string, double*, double*, double*, double*);
double miqt_exec_callback_QwtRichTextEngine_heightForWidth(const QwtRichTextEngine*, intptr_t, QFont*, int, struct miqt_string, double);
QSizeF* miqt_exec_callback_QwtRichTextEngine_textSize(const QwtRichTextEngine*, intptr_t, QFont*, int, struct miqt_string);
void miqt_exec_callback_QwtRichTextEngine_draw(const QwtRichTextEngine*, intptr_t, QPainter*, QRectF*, int, struct miqt_string);
bool miqt_exec_callback_QwtRichTextEngine_mightRender(const QwtRichTextEngine*, intptr_t, struct miqt_string);
void miqt_exec_callback_QwtRichTextEngine_textMargins(const QwtRichTextEngine*, intptr_t, QFont*, struct miqt_string, double*, double*, double*, double*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtTextEngine final : public QwtTextEngine {
public:

	MiqtVirtualQwtTextEngine(const QwtTextEngine& param1): QwtTextEngine(param1) {}

	virtual ~MiqtVirtualQwtTextEngine() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual double heightForWidth(const QFont& font, int flags, const QString& text, double width) const override {
		if (handle__heightForWidth == 0) {
			return 0; // Pure virtual, there is no base we can call
		}

		const QFont& font_ret = font;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&font_ret);
		int sigval2 = flags;
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval3 = text_ms;
		double sigval4 = width;
		double callback_return_value = miqt_exec_callback_QwtTextEngine_heightForWidth(this, handle__heightForWidth, sigval1, sigval2, sigval3, sigval4);
		return static_cast<double>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__textSize = 0;

	// Subclass to allow providing a Go implementation
	virtual QSizeF textSize(const QFont& font, int flags, const QString& text) const override {
		if (handle__textSize == 0) {
			return QSizeF(); // Pure virtual, there is no base we can call
		}

		const QFont& font_ret = font;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&font_ret);
		int sigval2 = flags;
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval3 = text_ms;
		QSizeF* callback_return_value = miqt_exec_callback_QwtTextEngine_textSize(this, handle__textSize, sigval1, sigval2, sigval3);
		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mightRender = 0;

	// Subclass to allow providing a Go implementation
	virtual bool mightRender(const QString& text) const override {
		if (handle__mightRender == 0) {
			return false; // Pure virtual, there is no base we can call
		}

		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval1 = text_ms;
		bool callback_return_value = miqt_exec_callback_QwtTextEngine_mightRender(this, handle__mightRender, sigval1);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__textMargins = 0;

	// Subclass to allow providing a Go implementation
	virtual void textMargins(const QFont& font, const QString& text, double& left, double& right, double& top, double& bottom) const override {
		if (handle__textMargins == 0) {
			return; // Pure virtual, there is no base we can call
		}

		const QFont& font_ret = font;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&font_ret);
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval2 = text_ms;
		double* sigval3 = &left;
		double* sigval4 = &right;
		double* sigval5 = &top;
		double* sigval6 = &bottom;
		miqt_exec_callback_QwtTextEngine_textMargins(this, handle__textMargins, sigval1, sigval2, sigval3, sigval4, sigval5, sigval6);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__draw = 0;

	// Subclass to allow providing a Go implementation
	virtual void draw(QPainter* painter, const QRectF& rect, int flags, const QString& text) const override {
		if (handle__draw == 0) {
			return; // Pure virtual, there is no base we can call
		}

		QPainter* sigval1 = painter;
		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval2 = const_cast<QRectF*>(&rect_ret);
		int sigval3 = flags;
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval4 = text_ms;
		miqt_exec_callback_QwtTextEngine_draw(this, handle__draw, sigval1, sigval2, sigval3, sigval4);

	}

};

QwtTextEngine* QwtTextEngine_new(QwtTextEngine* param1) {
	return new (std::nothrow) MiqtVirtualQwtTextEngine(*param1);
}

double QwtTextEngine_heightForWidth(const QwtTextEngine* self, QFont* font, int flags, struct miqt_string text, double width) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->heightForWidth(*font, static_cast<int>(flags), text_QString, static_cast<double>(width));
}

QSizeF* QwtTextEngine_textSize(const QwtTextEngine* self, QFont* font, int flags, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QSizeF(self->textSize(*font, static_cast<int>(flags), text_QString));
}

bool QwtTextEngine_mightRender(const QwtTextEngine* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->mightRender(text_QString);
}

void QwtTextEngine_textMargins(const QwtTextEngine* self, QFont* font, struct miqt_string text, double* left, double* right, double* top, double* bottom) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->textMargins(*font, text_QString, static_cast<double&>(*left), static_cast<double&>(*right), static_cast<double&>(*top), static_cast<double&>(*bottom));
}

void QwtTextEngine_draw(const QwtTextEngine* self, QPainter* painter, QRectF* rect, int flags, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->draw(painter, *rect, static_cast<int>(flags), text_QString);
}

void QwtTextEngine_operatorAssign(QwtTextEngine* self, QwtTextEngine* param1) {
	self->operator=(*param1);
}

bool QwtTextEngine_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQwtTextEngine* self_cast = dynamic_cast<MiqtVirtualQwtTextEngine*>( (QwtTextEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = slot;
	return true;
}

bool QwtTextEngine_override_virtual_textSize(void* self, intptr_t slot) {
	MiqtVirtualQwtTextEngine* self_cast = dynamic_cast<MiqtVirtualQwtTextEngine*>( (QwtTextEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__textSize = slot;
	return true;
}

bool QwtTextEngine_override_virtual_mightRender(void* self, intptr_t slot) {
	MiqtVirtualQwtTextEngine* self_cast = dynamic_cast<MiqtVirtualQwtTextEngine*>( (QwtTextEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mightRender = slot;
	return true;
}

bool QwtTextEngine_override_virtual_textMargins(void* self, intptr_t slot) {
	MiqtVirtualQwtTextEngine* self_cast = dynamic_cast<MiqtVirtualQwtTextEngine*>( (QwtTextEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__textMargins = slot;
	return true;
}

bool QwtTextEngine_override_virtual_draw(void* self, intptr_t slot) {
	MiqtVirtualQwtTextEngine* self_cast = dynamic_cast<MiqtVirtualQwtTextEngine*>( (QwtTextEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__draw = slot;
	return true;
}

void QwtTextEngine_delete(QwtTextEngine* self) {
	delete self;
}

class MiqtVirtualQwtPlainTextEngine final : public QwtPlainTextEngine {
public:

	MiqtVirtualQwtPlainTextEngine(): QwtPlainTextEngine() {}
	MiqtVirtualQwtPlainTextEngine(const QwtPlainTextEngine& param1): QwtPlainTextEngine(param1) {}

	virtual ~MiqtVirtualQwtPlainTextEngine() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual double heightForWidth(const QFont& font, int flags, const QString& text, double width) const override {
		if (handle__heightForWidth == 0) {
			return QwtPlainTextEngine::heightForWidth(font, flags, text, width);
		}

		const QFont& font_ret = font;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&font_ret);
		int sigval2 = flags;
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval3 = text_ms;
		double sigval4 = width;
		double callback_return_value = miqt_exec_callback_QwtPlainTextEngine_heightForWidth(this, handle__heightForWidth, sigval1, sigval2, sigval3, sigval4);
		return static_cast<double>(callback_return_value);
	}

	friend double QwtPlainTextEngine_virtualbase_heightForWidth(const void* self, QFont* font, int flags, struct miqt_string text, double width);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__textSize = 0;

	// Subclass to allow providing a Go implementation
	virtual QSizeF textSize(const QFont& font, int flags, const QString& text) const override {
		if (handle__textSize == 0) {
			return QwtPlainTextEngine::textSize(font, flags, text);
		}

		const QFont& font_ret = font;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&font_ret);
		int sigval2 = flags;
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval3 = text_ms;
		QSizeF* callback_return_value = miqt_exec_callback_QwtPlainTextEngine_textSize(this, handle__textSize, sigval1, sigval2, sigval3);
		return *callback_return_value;
	}

	friend QSizeF* QwtPlainTextEngine_virtualbase_textSize(const void* self, QFont* font, int flags, struct miqt_string text);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__draw = 0;

	// Subclass to allow providing a Go implementation
	virtual void draw(QPainter* painter, const QRectF& rect, int flags, const QString& text) const override {
		if (handle__draw == 0) {
			QwtPlainTextEngine::draw(painter, rect, flags, text);
			return;
		}

		QPainter* sigval1 = painter;
		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval2 = const_cast<QRectF*>(&rect_ret);
		int sigval3 = flags;
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval4 = text_ms;
		miqt_exec_callback_QwtPlainTextEngine_draw(this, handle__draw, sigval1, sigval2, sigval3, sigval4);

	}

	friend void QwtPlainTextEngine_virtualbase_draw(const void* self, QPainter* painter, QRectF* rect, int flags, struct miqt_string text);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mightRender = 0;

	// Subclass to allow providing a Go implementation
	virtual bool mightRender(const QString& param1) const override {
		if (handle__mightRender == 0) {
			return QwtPlainTextEngine::mightRender(param1);
		}

		const QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		bool callback_return_value = miqt_exec_callback_QwtPlainTextEngine_mightRender(this, handle__mightRender, sigval1);
		return callback_return_value;
	}

	friend bool QwtPlainTextEngine_virtualbase_mightRender(const void* self, struct miqt_string param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__textMargins = 0;

	// Subclass to allow providing a Go implementation
	virtual void textMargins(const QFont& param1, const QString& param2, double& left, double& right, double& top, double& bottom) const override {
		if (handle__textMargins == 0) {
			QwtPlainTextEngine::textMargins(param1, param2, left, right, top, bottom);
			return;
		}

		const QFont& param1_ret = param1;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&param1_ret);
		const QString param2_ret = param2;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param2_b = param2_ret.toUtf8();
		struct miqt_string param2_ms;
		param2_ms.len = param2_b.length();
		param2_ms.data = static_cast<char*>(malloc(param2_ms.len));
		memcpy(param2_ms.data, param2_b.data(), param2_ms.len);
		struct miqt_string sigval2 = param2_ms;
		double* sigval3 = &left;
		double* sigval4 = &right;
		double* sigval5 = &top;
		double* sigval6 = &bottom;
		miqt_exec_callback_QwtPlainTextEngine_textMargins(this, handle__textMargins, sigval1, sigval2, sigval3, sigval4, sigval5, sigval6);

	}

	friend void QwtPlainTextEngine_virtualbase_textMargins(const void* self, QFont* param1, struct miqt_string param2, double* left, double* right, double* top, double* bottom);

};

QwtPlainTextEngine* QwtPlainTextEngine_new() {
	return new (std::nothrow) MiqtVirtualQwtPlainTextEngine();
}

QwtPlainTextEngine* QwtPlainTextEngine_new2(QwtPlainTextEngine* param1) {
	return new (std::nothrow) MiqtVirtualQwtPlainTextEngine(*param1);
}

void QwtPlainTextEngine_virtbase(QwtPlainTextEngine* src, QwtTextEngine** outptr_QwtTextEngine) {
	*outptr_QwtTextEngine = static_cast<QwtTextEngine*>(src);
}

double QwtPlainTextEngine_heightForWidth(const QwtPlainTextEngine* self, QFont* font, int flags, struct miqt_string text, double width) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->heightForWidth(*font, static_cast<int>(flags), text_QString, static_cast<double>(width));
}

QSizeF* QwtPlainTextEngine_textSize(const QwtPlainTextEngine* self, QFont* font, int flags, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QSizeF(self->textSize(*font, static_cast<int>(flags), text_QString));
}

void QwtPlainTextEngine_draw(const QwtPlainTextEngine* self, QPainter* painter, QRectF* rect, int flags, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->draw(painter, *rect, static_cast<int>(flags), text_QString);
}

bool QwtPlainTextEngine_mightRender(const QwtPlainTextEngine* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	return self->mightRender(param1_QString);
}

void QwtPlainTextEngine_textMargins(const QwtPlainTextEngine* self, QFont* param1, struct miqt_string param2, double* left, double* right, double* top, double* bottom) {
	QString param2_QString = QString::fromUtf8(param2.data, param2.len);
	self->textMargins(*param1, param2_QString, static_cast<double&>(*left), static_cast<double&>(*right), static_cast<double&>(*top), static_cast<double&>(*bottom));
}

void QwtPlainTextEngine_operatorAssign(QwtPlainTextEngine* self, QwtPlainTextEngine* param1) {
	self->operator=(*param1);
}

bool QwtPlainTextEngine_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQwtPlainTextEngine* self_cast = dynamic_cast<MiqtVirtualQwtPlainTextEngine*>( (QwtPlainTextEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = slot;
	return true;
}

double QwtPlainTextEngine_virtualbase_heightForWidth(const void* self, QFont* font, int flags, struct miqt_string text, double width) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return static_cast<const MiqtVirtualQwtPlainTextEngine*>(self)->QwtPlainTextEngine::heightForWidth(*font, static_cast<int>(flags), text_QString, static_cast<double>(width));
}

bool QwtPlainTextEngine_override_virtual_textSize(void* self, intptr_t slot) {
	MiqtVirtualQwtPlainTextEngine* self_cast = dynamic_cast<MiqtVirtualQwtPlainTextEngine*>( (QwtPlainTextEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__textSize = slot;
	return true;
}

QSizeF* QwtPlainTextEngine_virtualbase_textSize(const void* self, QFont* font, int flags, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QSizeF(static_cast<const MiqtVirtualQwtPlainTextEngine*>(self)->QwtPlainTextEngine::textSize(*font, static_cast<int>(flags), text_QString));
}

bool QwtPlainTextEngine_override_virtual_draw(void* self, intptr_t slot) {
	MiqtVirtualQwtPlainTextEngine* self_cast = dynamic_cast<MiqtVirtualQwtPlainTextEngine*>( (QwtPlainTextEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__draw = slot;
	return true;
}

void QwtPlainTextEngine_virtualbase_draw(const void* self, QPainter* painter, QRectF* rect, int flags, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	static_cast<const MiqtVirtualQwtPlainTextEngine*>(self)->QwtPlainTextEngine::draw(painter, *rect, static_cast<int>(flags), text_QString);
}

bool QwtPlainTextEngine_override_virtual_mightRender(void* self, intptr_t slot) {
	MiqtVirtualQwtPlainTextEngine* self_cast = dynamic_cast<MiqtVirtualQwtPlainTextEngine*>( (QwtPlainTextEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mightRender = slot;
	return true;
}

bool QwtPlainTextEngine_virtualbase_mightRender(const void* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	return static_cast<const MiqtVirtualQwtPlainTextEngine*>(self)->QwtPlainTextEngine::mightRender(param1_QString);
}

bool QwtPlainTextEngine_override_virtual_textMargins(void* self, intptr_t slot) {
	MiqtVirtualQwtPlainTextEngine* self_cast = dynamic_cast<MiqtVirtualQwtPlainTextEngine*>( (QwtPlainTextEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__textMargins = slot;
	return true;
}

void QwtPlainTextEngine_virtualbase_textMargins(const void* self, QFont* param1, struct miqt_string param2, double* left, double* right, double* top, double* bottom) {
	QString param2_QString = QString::fromUtf8(param2.data, param2.len);
	static_cast<const MiqtVirtualQwtPlainTextEngine*>(self)->QwtPlainTextEngine::textMargins(*param1, param2_QString, static_cast<double&>(*left), static_cast<double&>(*right), static_cast<double&>(*top), static_cast<double&>(*bottom));
}

void QwtPlainTextEngine_delete(QwtPlainTextEngine* self) {
	delete self;
}

class MiqtVirtualQwtRichTextEngine final : public QwtRichTextEngine {
public:

	MiqtVirtualQwtRichTextEngine(): QwtRichTextEngine() {}
	MiqtVirtualQwtRichTextEngine(const QwtRichTextEngine& param1): QwtRichTextEngine(param1) {}

	virtual ~MiqtVirtualQwtRichTextEngine() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual double heightForWidth(const QFont& font, int flags, const QString& text, double width) const override {
		if (handle__heightForWidth == 0) {
			return QwtRichTextEngine::heightForWidth(font, flags, text, width);
		}

		const QFont& font_ret = font;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&font_ret);
		int sigval2 = flags;
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval3 = text_ms;
		double sigval4 = width;
		double callback_return_value = miqt_exec_callback_QwtRichTextEngine_heightForWidth(this, handle__heightForWidth, sigval1, sigval2, sigval3, sigval4);
		return static_cast<double>(callback_return_value);
	}

	friend double QwtRichTextEngine_virtualbase_heightForWidth(const void* self, QFont* font, int flags, struct miqt_string text, double width);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__textSize = 0;

	// Subclass to allow providing a Go implementation
	virtual QSizeF textSize(const QFont& font, int flags, const QString& text) const override {
		if (handle__textSize == 0) {
			return QwtRichTextEngine::textSize(font, flags, text);
		}

		const QFont& font_ret = font;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&font_ret);
		int sigval2 = flags;
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval3 = text_ms;
		QSizeF* callback_return_value = miqt_exec_callback_QwtRichTextEngine_textSize(this, handle__textSize, sigval1, sigval2, sigval3);
		return *callback_return_value;
	}

	friend QSizeF* QwtRichTextEngine_virtualbase_textSize(const void* self, QFont* font, int flags, struct miqt_string text);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__draw = 0;

	// Subclass to allow providing a Go implementation
	virtual void draw(QPainter* painter, const QRectF& rect, int flags, const QString& text) const override {
		if (handle__draw == 0) {
			QwtRichTextEngine::draw(painter, rect, flags, text);
			return;
		}

		QPainter* sigval1 = painter;
		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval2 = const_cast<QRectF*>(&rect_ret);
		int sigval3 = flags;
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval4 = text_ms;
		miqt_exec_callback_QwtRichTextEngine_draw(this, handle__draw, sigval1, sigval2, sigval3, sigval4);

	}

	friend void QwtRichTextEngine_virtualbase_draw(const void* self, QPainter* painter, QRectF* rect, int flags, struct miqt_string text);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mightRender = 0;

	// Subclass to allow providing a Go implementation
	virtual bool mightRender(const QString& param1) const override {
		if (handle__mightRender == 0) {
			return QwtRichTextEngine::mightRender(param1);
		}

		const QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		bool callback_return_value = miqt_exec_callback_QwtRichTextEngine_mightRender(this, handle__mightRender, sigval1);
		return callback_return_value;
	}

	friend bool QwtRichTextEngine_virtualbase_mightRender(const void* self, struct miqt_string param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__textMargins = 0;

	// Subclass to allow providing a Go implementation
	virtual void textMargins(const QFont& param1, const QString& param2, double& left, double& right, double& top, double& bottom) const override {
		if (handle__textMargins == 0) {
			QwtRichTextEngine::textMargins(param1, param2, left, right, top, bottom);
			return;
		}

		const QFont& param1_ret = param1;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&param1_ret);
		const QString param2_ret = param2;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param2_b = param2_ret.toUtf8();
		struct miqt_string param2_ms;
		param2_ms.len = param2_b.length();
		param2_ms.data = static_cast<char*>(malloc(param2_ms.len));
		memcpy(param2_ms.data, param2_b.data(), param2_ms.len);
		struct miqt_string sigval2 = param2_ms;
		double* sigval3 = &left;
		double* sigval4 = &right;
		double* sigval5 = &top;
		double* sigval6 = &bottom;
		miqt_exec_callback_QwtRichTextEngine_textMargins(this, handle__textMargins, sigval1, sigval2, sigval3, sigval4, sigval5, sigval6);

	}

	friend void QwtRichTextEngine_virtualbase_textMargins(const void* self, QFont* param1, struct miqt_string param2, double* left, double* right, double* top, double* bottom);

};

QwtRichTextEngine* QwtRichTextEngine_new() {
	return new (std::nothrow) MiqtVirtualQwtRichTextEngine();
}

QwtRichTextEngine* QwtRichTextEngine_new2(QwtRichTextEngine* param1) {
	return new (std::nothrow) MiqtVirtualQwtRichTextEngine(*param1);
}

void QwtRichTextEngine_virtbase(QwtRichTextEngine* src, QwtTextEngine** outptr_QwtTextEngine) {
	*outptr_QwtTextEngine = static_cast<QwtTextEngine*>(src);
}

double QwtRichTextEngine_heightForWidth(const QwtRichTextEngine* self, QFont* font, int flags, struct miqt_string text, double width) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->heightForWidth(*font, static_cast<int>(flags), text_QString, static_cast<double>(width));
}

QSizeF* QwtRichTextEngine_textSize(const QwtRichTextEngine* self, QFont* font, int flags, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QSizeF(self->textSize(*font, static_cast<int>(flags), text_QString));
}

void QwtRichTextEngine_draw(const QwtRichTextEngine* self, QPainter* painter, QRectF* rect, int flags, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->draw(painter, *rect, static_cast<int>(flags), text_QString);
}

bool QwtRichTextEngine_mightRender(const QwtRichTextEngine* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	return self->mightRender(param1_QString);
}

void QwtRichTextEngine_textMargins(const QwtRichTextEngine* self, QFont* param1, struct miqt_string param2, double* left, double* right, double* top, double* bottom) {
	QString param2_QString = QString::fromUtf8(param2.data, param2.len);
	self->textMargins(*param1, param2_QString, static_cast<double&>(*left), static_cast<double&>(*right), static_cast<double&>(*top), static_cast<double&>(*bottom));
}

void QwtRichTextEngine_operatorAssign(QwtRichTextEngine* self, QwtRichTextEngine* param1) {
	self->operator=(*param1);
}

bool QwtRichTextEngine_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQwtRichTextEngine* self_cast = dynamic_cast<MiqtVirtualQwtRichTextEngine*>( (QwtRichTextEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = slot;
	return true;
}

double QwtRichTextEngine_virtualbase_heightForWidth(const void* self, QFont* font, int flags, struct miqt_string text, double width) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return static_cast<const MiqtVirtualQwtRichTextEngine*>(self)->QwtRichTextEngine::heightForWidth(*font, static_cast<int>(flags), text_QString, static_cast<double>(width));
}

bool QwtRichTextEngine_override_virtual_textSize(void* self, intptr_t slot) {
	MiqtVirtualQwtRichTextEngine* self_cast = dynamic_cast<MiqtVirtualQwtRichTextEngine*>( (QwtRichTextEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__textSize = slot;
	return true;
}

QSizeF* QwtRichTextEngine_virtualbase_textSize(const void* self, QFont* font, int flags, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QSizeF(static_cast<const MiqtVirtualQwtRichTextEngine*>(self)->QwtRichTextEngine::textSize(*font, static_cast<int>(flags), text_QString));
}

bool QwtRichTextEngine_override_virtual_draw(void* self, intptr_t slot) {
	MiqtVirtualQwtRichTextEngine* self_cast = dynamic_cast<MiqtVirtualQwtRichTextEngine*>( (QwtRichTextEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__draw = slot;
	return true;
}

void QwtRichTextEngine_virtualbase_draw(const void* self, QPainter* painter, QRectF* rect, int flags, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	static_cast<const MiqtVirtualQwtRichTextEngine*>(self)->QwtRichTextEngine::draw(painter, *rect, static_cast<int>(flags), text_QString);
}

bool QwtRichTextEngine_override_virtual_mightRender(void* self, intptr_t slot) {
	MiqtVirtualQwtRichTextEngine* self_cast = dynamic_cast<MiqtVirtualQwtRichTextEngine*>( (QwtRichTextEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mightRender = slot;
	return true;
}

bool QwtRichTextEngine_virtualbase_mightRender(const void* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	return static_cast<const MiqtVirtualQwtRichTextEngine*>(self)->QwtRichTextEngine::mightRender(param1_QString);
}

bool QwtRichTextEngine_override_virtual_textMargins(void* self, intptr_t slot) {
	MiqtVirtualQwtRichTextEngine* self_cast = dynamic_cast<MiqtVirtualQwtRichTextEngine*>( (QwtRichTextEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__textMargins = slot;
	return true;
}

void QwtRichTextEngine_virtualbase_textMargins(const void* self, QFont* param1, struct miqt_string param2, double* left, double* right, double* top, double* bottom) {
	QString param2_QString = QString::fromUtf8(param2.data, param2.len);
	static_cast<const MiqtVirtualQwtRichTextEngine*>(self)->QwtRichTextEngine::textMargins(*param1, param2_QString, static_cast<double&>(*left), static_cast<double&>(*right), static_cast<double&>(*top), static_cast<double&>(*bottom));
}

void QwtRichTextEngine_delete(QwtRichTextEngine* self) {
	delete self;
}

