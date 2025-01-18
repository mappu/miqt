#include <QColor>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexeridl.h>
#include "gen_qscilexeridl.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QsciLexerIDL_SetFoldAtElse(void*, intptr_t, bool);
void miqt_exec_callback_QsciLexerIDL_SetFoldComments(void*, intptr_t, bool);
void miqt_exec_callback_QsciLexerIDL_SetFoldCompact(void*, intptr_t, bool);
void miqt_exec_callback_QsciLexerIDL_SetFoldPreprocessor(void*, intptr_t, bool);
void miqt_exec_callback_QsciLexerIDL_SetStylePreprocessor(void*, intptr_t, bool);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciLexerIDL final : public QsciLexerIDL {
public:

	MiqtVirtualQsciLexerIDL(): QsciLexerIDL() {};
	MiqtVirtualQsciLexerIDL(QObject* parent): QsciLexerIDL(parent) {};

	virtual ~MiqtVirtualQsciLexerIDL() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldAtElse = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldAtElse(bool fold) override {
		if (handle__SetFoldAtElse == 0) {
			QsciLexerIDL::setFoldAtElse(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerIDL_SetFoldAtElse(this, handle__SetFoldAtElse, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldAtElse(bool fold) {

		QsciLexerIDL::setFoldAtElse(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldComments = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldComments(bool fold) override {
		if (handle__SetFoldComments == 0) {
			QsciLexerIDL::setFoldComments(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerIDL_SetFoldComments(this, handle__SetFoldComments, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldComments(bool fold) {

		QsciLexerIDL::setFoldComments(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldCompact = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldCompact(bool fold) override {
		if (handle__SetFoldCompact == 0) {
			QsciLexerIDL::setFoldCompact(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerIDL_SetFoldCompact(this, handle__SetFoldCompact, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldCompact(bool fold) {

		QsciLexerIDL::setFoldCompact(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldPreprocessor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldPreprocessor(bool fold) override {
		if (handle__SetFoldPreprocessor == 0) {
			QsciLexerIDL::setFoldPreprocessor(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerIDL_SetFoldPreprocessor(this, handle__SetFoldPreprocessor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldPreprocessor(bool fold) {

		QsciLexerIDL::setFoldPreprocessor(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetStylePreprocessor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setStylePreprocessor(bool style) override {
		if (handle__SetStylePreprocessor == 0) {
			QsciLexerIDL::setStylePreprocessor(style);
			return;
		}
		
		bool sigval1 = style;

		miqt_exec_callback_QsciLexerIDL_SetStylePreprocessor(this, handle__SetStylePreprocessor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetStylePreprocessor(bool style) {

		QsciLexerIDL::setStylePreprocessor(style);

	}

};

QsciLexerIDL* QsciLexerIDL_new() {
	return new MiqtVirtualQsciLexerIDL();
}

QsciLexerIDL* QsciLexerIDL_new2(QObject* parent) {
	return new MiqtVirtualQsciLexerIDL(parent);
}

void QsciLexerIDL_virtbase(QsciLexerIDL* src, QsciLexerCPP** outptr_QsciLexerCPP) {
	*outptr_QsciLexerCPP = static_cast<QsciLexerCPP*>(src);
}

QMetaObject* QsciLexerIDL_MetaObject(const QsciLexerIDL* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerIDL_Metacast(QsciLexerIDL* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerIDL_Tr(const char* s) {
	QString _ret = QsciLexerIDL::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerIDL_Language(const QsciLexerIDL* self) {
	return (const char*) self->language();
}

QColor* QsciLexerIDL_DefaultColor(const QsciLexerIDL* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

const char* QsciLexerIDL_Keywords(const QsciLexerIDL* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerIDL_Description(const QsciLexerIDL* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerIDL_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerIDL::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerIDL_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerIDL::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerIDL_override_virtual_SetFoldAtElse(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerIDL*>( (QsciLexerIDL*)(self) )->handle__SetFoldAtElse = slot;
}

void QsciLexerIDL_virtualbase_SetFoldAtElse(void* self, bool fold) {
	( (MiqtVirtualQsciLexerIDL*)(self) )->virtualbase_SetFoldAtElse(fold);
}

void QsciLexerIDL_override_virtual_SetFoldComments(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerIDL*>( (QsciLexerIDL*)(self) )->handle__SetFoldComments = slot;
}

void QsciLexerIDL_virtualbase_SetFoldComments(void* self, bool fold) {
	( (MiqtVirtualQsciLexerIDL*)(self) )->virtualbase_SetFoldComments(fold);
}

void QsciLexerIDL_override_virtual_SetFoldCompact(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerIDL*>( (QsciLexerIDL*)(self) )->handle__SetFoldCompact = slot;
}

void QsciLexerIDL_virtualbase_SetFoldCompact(void* self, bool fold) {
	( (MiqtVirtualQsciLexerIDL*)(self) )->virtualbase_SetFoldCompact(fold);
}

void QsciLexerIDL_override_virtual_SetFoldPreprocessor(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerIDL*>( (QsciLexerIDL*)(self) )->handle__SetFoldPreprocessor = slot;
}

void QsciLexerIDL_virtualbase_SetFoldPreprocessor(void* self, bool fold) {
	( (MiqtVirtualQsciLexerIDL*)(self) )->virtualbase_SetFoldPreprocessor(fold);
}

void QsciLexerIDL_override_virtual_SetStylePreprocessor(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerIDL*>( (QsciLexerIDL*)(self) )->handle__SetStylePreprocessor = slot;
}

void QsciLexerIDL_virtualbase_SetStylePreprocessor(void* self, bool style) {
	( (MiqtVirtualQsciLexerIDL*)(self) )->virtualbase_SetStylePreprocessor(style);
}

void QsciLexerIDL_Delete(QsciLexerIDL* self) {
	delete self;
}

