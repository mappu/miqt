#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexerjava.h>
#include "gen_qscilexerjava.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

class MiqtVirtualQsciLexerJava : public virtual QsciLexerJava {
public:

	MiqtVirtualQsciLexerJava(): QsciLexerJava() {};
	MiqtVirtualQsciLexerJava(QObject* parent): QsciLexerJava(parent) {};

	virtual ~MiqtVirtualQsciLexerJava() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldAtElse = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldAtElse(bool fold) override {
		if (handle__SetFoldAtElse == 0) {
			QsciLexerJava::setFoldAtElse(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerJava_SetFoldAtElse(this, handle__SetFoldAtElse, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldAtElse(bool fold) {

		QsciLexerJava::setFoldAtElse(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldComments = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldComments(bool fold) override {
		if (handle__SetFoldComments == 0) {
			QsciLexerJava::setFoldComments(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerJava_SetFoldComments(this, handle__SetFoldComments, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldComments(bool fold) {

		QsciLexerJava::setFoldComments(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldCompact = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldCompact(bool fold) override {
		if (handle__SetFoldCompact == 0) {
			QsciLexerJava::setFoldCompact(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerJava_SetFoldCompact(this, handle__SetFoldCompact, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldCompact(bool fold) {

		QsciLexerJava::setFoldCompact(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldPreprocessor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldPreprocessor(bool fold) override {
		if (handle__SetFoldPreprocessor == 0) {
			QsciLexerJava::setFoldPreprocessor(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerJava_SetFoldPreprocessor(this, handle__SetFoldPreprocessor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldPreprocessor(bool fold) {

		QsciLexerJava::setFoldPreprocessor(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetStylePreprocessor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setStylePreprocessor(bool style) override {
		if (handle__SetStylePreprocessor == 0) {
			QsciLexerJava::setStylePreprocessor(style);
			return;
		}
		
		bool sigval1 = style;

		miqt_exec_callback_QsciLexerJava_SetStylePreprocessor(this, handle__SetStylePreprocessor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetStylePreprocessor(bool style) {

		QsciLexerJava::setStylePreprocessor(style);

	}

};

QsciLexerJava* QsciLexerJava_new() {
	return new MiqtVirtualQsciLexerJava();
}

QsciLexerJava* QsciLexerJava_new2(QObject* parent) {
	return new MiqtVirtualQsciLexerJava(parent);
}

void QsciLexerJava_virtbase(QsciLexerJava* src, QsciLexerCPP** outptr_QsciLexerCPP) {
	*outptr_QsciLexerCPP = static_cast<QsciLexerCPP*>(src);
}

QMetaObject* QsciLexerJava_MetaObject(const QsciLexerJava* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerJava_Metacast(QsciLexerJava* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerJava_Tr(const char* s) {
	QString _ret = QsciLexerJava::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerJava_TrUtf8(const char* s) {
	QString _ret = QsciLexerJava::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerJava_Language(const QsciLexerJava* self) {
	return (const char*) self->language();
}

const char* QsciLexerJava_Keywords(const QsciLexerJava* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerJava_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerJava::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerJava_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerJava::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerJava_TrUtf82(const char* s, const char* c) {
	QString _ret = QsciLexerJava::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerJava_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QsciLexerJava::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerJava_override_virtual_SetFoldAtElse(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerJava*>( (QsciLexerJava*)(self) )->handle__SetFoldAtElse = slot;
}

void QsciLexerJava_virtualbase_SetFoldAtElse(void* self, bool fold) {
	( (MiqtVirtualQsciLexerJava*)(self) )->virtualbase_SetFoldAtElse(fold);
}

void QsciLexerJava_override_virtual_SetFoldComments(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerJava*>( (QsciLexerJava*)(self) )->handle__SetFoldComments = slot;
}

void QsciLexerJava_virtualbase_SetFoldComments(void* self, bool fold) {
	( (MiqtVirtualQsciLexerJava*)(self) )->virtualbase_SetFoldComments(fold);
}

void QsciLexerJava_override_virtual_SetFoldCompact(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerJava*>( (QsciLexerJava*)(self) )->handle__SetFoldCompact = slot;
}

void QsciLexerJava_virtualbase_SetFoldCompact(void* self, bool fold) {
	( (MiqtVirtualQsciLexerJava*)(self) )->virtualbase_SetFoldCompact(fold);
}

void QsciLexerJava_override_virtual_SetFoldPreprocessor(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerJava*>( (QsciLexerJava*)(self) )->handle__SetFoldPreprocessor = slot;
}

void QsciLexerJava_virtualbase_SetFoldPreprocessor(void* self, bool fold) {
	( (MiqtVirtualQsciLexerJava*)(self) )->virtualbase_SetFoldPreprocessor(fold);
}

void QsciLexerJava_override_virtual_SetStylePreprocessor(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerJava*>( (QsciLexerJava*)(self) )->handle__SetStylePreprocessor = slot;
}

void QsciLexerJava_virtualbase_SetStylePreprocessor(void* self, bool style) {
	( (MiqtVirtualQsciLexerJava*)(self) )->virtualbase_SetStylePreprocessor(style);
}

void QsciLexerJava_Delete(QsciLexerJava* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQsciLexerJava*>( self );
	} else {
		delete self;
	}
}

