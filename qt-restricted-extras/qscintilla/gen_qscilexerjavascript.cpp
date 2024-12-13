#include <QColor>
#include <QFont>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexerjavascript.h>
#include "gen_qscilexerjavascript.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

class MiqtVirtualQsciLexerJavaScript : public virtual QsciLexerJavaScript {
public:

	MiqtVirtualQsciLexerJavaScript(): QsciLexerJavaScript() {};
	MiqtVirtualQsciLexerJavaScript(QObject* parent): QsciLexerJavaScript(parent) {};

	virtual ~MiqtVirtualQsciLexerJavaScript() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldAtElse = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldAtElse(bool fold) override {
		if (handle__SetFoldAtElse == 0) {
			QsciLexerJavaScript::setFoldAtElse(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerJavaScript_SetFoldAtElse(this, handle__SetFoldAtElse, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldAtElse(bool fold) {

		QsciLexerJavaScript::setFoldAtElse(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldComments = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldComments(bool fold) override {
		if (handle__SetFoldComments == 0) {
			QsciLexerJavaScript::setFoldComments(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerJavaScript_SetFoldComments(this, handle__SetFoldComments, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldComments(bool fold) {

		QsciLexerJavaScript::setFoldComments(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldCompact = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldCompact(bool fold) override {
		if (handle__SetFoldCompact == 0) {
			QsciLexerJavaScript::setFoldCompact(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerJavaScript_SetFoldCompact(this, handle__SetFoldCompact, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldCompact(bool fold) {

		QsciLexerJavaScript::setFoldCompact(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldPreprocessor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldPreprocessor(bool fold) override {
		if (handle__SetFoldPreprocessor == 0) {
			QsciLexerJavaScript::setFoldPreprocessor(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerJavaScript_SetFoldPreprocessor(this, handle__SetFoldPreprocessor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldPreprocessor(bool fold) {

		QsciLexerJavaScript::setFoldPreprocessor(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetStylePreprocessor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setStylePreprocessor(bool style) override {
		if (handle__SetStylePreprocessor == 0) {
			QsciLexerJavaScript::setStylePreprocessor(style);
			return;
		}
		
		bool sigval1 = style;

		miqt_exec_callback_QsciLexerJavaScript_SetStylePreprocessor(this, handle__SetStylePreprocessor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetStylePreprocessor(bool style) {

		QsciLexerJavaScript::setStylePreprocessor(style);

	}

};

QsciLexerJavaScript* QsciLexerJavaScript_new() {
	return new MiqtVirtualQsciLexerJavaScript();
}

QsciLexerJavaScript* QsciLexerJavaScript_new2(QObject* parent) {
	return new MiqtVirtualQsciLexerJavaScript(parent);
}

void QsciLexerJavaScript_virtbase(QsciLexerJavaScript* src, QsciLexerCPP** outptr_QsciLexerCPP) {
	*outptr_QsciLexerCPP = static_cast<QsciLexerCPP*>(src);
}

QMetaObject* QsciLexerJavaScript_MetaObject(const QsciLexerJavaScript* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerJavaScript_Metacast(QsciLexerJavaScript* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerJavaScript_Tr(const char* s) {
	QString _ret = QsciLexerJavaScript::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerJavaScript_TrUtf8(const char* s) {
	QString _ret = QsciLexerJavaScript::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerJavaScript_Language(const QsciLexerJavaScript* self) {
	return (const char*) self->language();
}

QColor* QsciLexerJavaScript_DefaultColor(const QsciLexerJavaScript* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerJavaScript_DefaultEolFill(const QsciLexerJavaScript* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerJavaScript_DefaultFont(const QsciLexerJavaScript* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerJavaScript_DefaultPaper(const QsciLexerJavaScript* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerJavaScript_Keywords(const QsciLexerJavaScript* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerJavaScript_Description(const QsciLexerJavaScript* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerJavaScript_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerJavaScript::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerJavaScript_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerJavaScript::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerJavaScript_TrUtf82(const char* s, const char* c) {
	QString _ret = QsciLexerJavaScript::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerJavaScript_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QsciLexerJavaScript::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerJavaScript_override_virtual_SetFoldAtElse(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerJavaScript*>( (QsciLexerJavaScript*)(self) )->handle__SetFoldAtElse = slot;
}

void QsciLexerJavaScript_virtualbase_SetFoldAtElse(void* self, bool fold) {
	( (MiqtVirtualQsciLexerJavaScript*)(self) )->virtualbase_SetFoldAtElse(fold);
}

void QsciLexerJavaScript_override_virtual_SetFoldComments(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerJavaScript*>( (QsciLexerJavaScript*)(self) )->handle__SetFoldComments = slot;
}

void QsciLexerJavaScript_virtualbase_SetFoldComments(void* self, bool fold) {
	( (MiqtVirtualQsciLexerJavaScript*)(self) )->virtualbase_SetFoldComments(fold);
}

void QsciLexerJavaScript_override_virtual_SetFoldCompact(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerJavaScript*>( (QsciLexerJavaScript*)(self) )->handle__SetFoldCompact = slot;
}

void QsciLexerJavaScript_virtualbase_SetFoldCompact(void* self, bool fold) {
	( (MiqtVirtualQsciLexerJavaScript*)(self) )->virtualbase_SetFoldCompact(fold);
}

void QsciLexerJavaScript_override_virtual_SetFoldPreprocessor(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerJavaScript*>( (QsciLexerJavaScript*)(self) )->handle__SetFoldPreprocessor = slot;
}

void QsciLexerJavaScript_virtualbase_SetFoldPreprocessor(void* self, bool fold) {
	( (MiqtVirtualQsciLexerJavaScript*)(self) )->virtualbase_SetFoldPreprocessor(fold);
}

void QsciLexerJavaScript_override_virtual_SetStylePreprocessor(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerJavaScript*>( (QsciLexerJavaScript*)(self) )->handle__SetStylePreprocessor = slot;
}

void QsciLexerJavaScript_virtualbase_SetStylePreprocessor(void* self, bool style) {
	( (MiqtVirtualQsciLexerJavaScript*)(self) )->virtualbase_SetStylePreprocessor(style);
}

void QsciLexerJavaScript_Delete(QsciLexerJavaScript* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQsciLexerJavaScript*>( self );
	} else {
		delete self;
	}
}

