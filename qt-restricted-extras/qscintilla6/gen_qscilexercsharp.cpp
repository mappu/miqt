#include <QColor>
#include <QFont>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexercsharp.h>
#include "gen_qscilexercsharp.h"
#include "_cgo_export.h"

class MiqtVirtualQsciLexerCSharp : public virtual QsciLexerCSharp {
public:

	MiqtVirtualQsciLexerCSharp(): QsciLexerCSharp() {};
	MiqtVirtualQsciLexerCSharp(QObject* parent): QsciLexerCSharp(parent) {};

	virtual ~MiqtVirtualQsciLexerCSharp() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldAtElse = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldAtElse(bool fold) override {
		if (handle__SetFoldAtElse == 0) {
			QsciLexerCSharp::setFoldAtElse(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerCSharp_SetFoldAtElse(this, handle__SetFoldAtElse, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldAtElse(bool fold) {

		QsciLexerCSharp::setFoldAtElse(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldComments = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldComments(bool fold) override {
		if (handle__SetFoldComments == 0) {
			QsciLexerCSharp::setFoldComments(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerCSharp_SetFoldComments(this, handle__SetFoldComments, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldComments(bool fold) {

		QsciLexerCSharp::setFoldComments(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldCompact = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldCompact(bool fold) override {
		if (handle__SetFoldCompact == 0) {
			QsciLexerCSharp::setFoldCompact(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerCSharp_SetFoldCompact(this, handle__SetFoldCompact, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldCompact(bool fold) {

		QsciLexerCSharp::setFoldCompact(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldPreprocessor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldPreprocessor(bool fold) override {
		if (handle__SetFoldPreprocessor == 0) {
			QsciLexerCSharp::setFoldPreprocessor(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerCSharp_SetFoldPreprocessor(this, handle__SetFoldPreprocessor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldPreprocessor(bool fold) {

		QsciLexerCSharp::setFoldPreprocessor(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetStylePreprocessor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setStylePreprocessor(bool style) override {
		if (handle__SetStylePreprocessor == 0) {
			QsciLexerCSharp::setStylePreprocessor(style);
			return;
		}
		
		bool sigval1 = style;

		miqt_exec_callback_QsciLexerCSharp_SetStylePreprocessor(this, handle__SetStylePreprocessor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetStylePreprocessor(bool style) {

		QsciLexerCSharp::setStylePreprocessor(style);

	}

};

QsciLexerCSharp* QsciLexerCSharp_new() {
	return new MiqtVirtualQsciLexerCSharp();
}

QsciLexerCSharp* QsciLexerCSharp_new2(QObject* parent) {
	return new MiqtVirtualQsciLexerCSharp(parent);
}

void QsciLexerCSharp_virtbase(QsciLexerCSharp* src, QsciLexerCPP** outptr_QsciLexerCPP) {
	*outptr_QsciLexerCPP = static_cast<QsciLexerCPP*>(src);
}

QMetaObject* QsciLexerCSharp_MetaObject(const QsciLexerCSharp* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerCSharp_Metacast(QsciLexerCSharp* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerCSharp_Tr(const char* s) {
	QString _ret = QsciLexerCSharp::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerCSharp_Language(const QsciLexerCSharp* self) {
	return (const char*) self->language();
}

QColor* QsciLexerCSharp_DefaultColor(const QsciLexerCSharp* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerCSharp_DefaultEolFill(const QsciLexerCSharp* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerCSharp_DefaultFont(const QsciLexerCSharp* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerCSharp_DefaultPaper(const QsciLexerCSharp* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerCSharp_Keywords(const QsciLexerCSharp* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerCSharp_Description(const QsciLexerCSharp* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerCSharp_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerCSharp::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerCSharp_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerCSharp::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerCSharp_override_virtual_SetFoldAtElse(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerCSharp*>( (QsciLexerCSharp*)(self) )->handle__SetFoldAtElse = slot;
}

void QsciLexerCSharp_virtualbase_SetFoldAtElse(void* self, bool fold) {
	( (MiqtVirtualQsciLexerCSharp*)(self) )->virtualbase_SetFoldAtElse(fold);
}

void QsciLexerCSharp_override_virtual_SetFoldComments(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerCSharp*>( (QsciLexerCSharp*)(self) )->handle__SetFoldComments = slot;
}

void QsciLexerCSharp_virtualbase_SetFoldComments(void* self, bool fold) {
	( (MiqtVirtualQsciLexerCSharp*)(self) )->virtualbase_SetFoldComments(fold);
}

void QsciLexerCSharp_override_virtual_SetFoldCompact(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerCSharp*>( (QsciLexerCSharp*)(self) )->handle__SetFoldCompact = slot;
}

void QsciLexerCSharp_virtualbase_SetFoldCompact(void* self, bool fold) {
	( (MiqtVirtualQsciLexerCSharp*)(self) )->virtualbase_SetFoldCompact(fold);
}

void QsciLexerCSharp_override_virtual_SetFoldPreprocessor(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerCSharp*>( (QsciLexerCSharp*)(self) )->handle__SetFoldPreprocessor = slot;
}

void QsciLexerCSharp_virtualbase_SetFoldPreprocessor(void* self, bool fold) {
	( (MiqtVirtualQsciLexerCSharp*)(self) )->virtualbase_SetFoldPreprocessor(fold);
}

void QsciLexerCSharp_override_virtual_SetStylePreprocessor(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerCSharp*>( (QsciLexerCSharp*)(self) )->handle__SetStylePreprocessor = slot;
}

void QsciLexerCSharp_virtualbase_SetStylePreprocessor(void* self, bool style) {
	( (MiqtVirtualQsciLexerCSharp*)(self) )->virtualbase_SetStylePreprocessor(style);
}

void QsciLexerCSharp_Delete(QsciLexerCSharp* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQsciLexerCSharp*>( self );
	} else {
		delete self;
	}
}

