#include <QColor>
#include <QFont>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexerxml.h>
#include "gen_qscilexerxml.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QsciLexerXML_SetFoldCompact(void*, intptr_t, bool);
void miqt_exec_callback_QsciLexerXML_SetFoldPreprocessor(void*, intptr_t, bool);
void miqt_exec_callback_QsciLexerXML_SetCaseSensitiveTags(void*, intptr_t, bool);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciLexerXML final : public QsciLexerXML {
public:

	MiqtVirtualQsciLexerXML(): QsciLexerXML() {};
	MiqtVirtualQsciLexerXML(QObject* parent): QsciLexerXML(parent) {};

	virtual ~MiqtVirtualQsciLexerXML() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldCompact = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldCompact(bool fold) override {
		if (handle__SetFoldCompact == 0) {
			QsciLexerXML::setFoldCompact(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerXML_SetFoldCompact(this, handle__SetFoldCompact, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldCompact(bool fold) {

		QsciLexerXML::setFoldCompact(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldPreprocessor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldPreprocessor(bool fold) override {
		if (handle__SetFoldPreprocessor == 0) {
			QsciLexerXML::setFoldPreprocessor(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerXML_SetFoldPreprocessor(this, handle__SetFoldPreprocessor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldPreprocessor(bool fold) {

		QsciLexerXML::setFoldPreprocessor(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetCaseSensitiveTags = 0;

	// Subclass to allow providing a Go implementation
	virtual void setCaseSensitiveTags(bool sens) override {
		if (handle__SetCaseSensitiveTags == 0) {
			QsciLexerXML::setCaseSensitiveTags(sens);
			return;
		}
		
		bool sigval1 = sens;

		miqt_exec_callback_QsciLexerXML_SetCaseSensitiveTags(this, handle__SetCaseSensitiveTags, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetCaseSensitiveTags(bool sens) {

		QsciLexerXML::setCaseSensitiveTags(sens);

	}

};

QsciLexerXML* QsciLexerXML_new() {
	return new MiqtVirtualQsciLexerXML();
}

QsciLexerXML* QsciLexerXML_new2(QObject* parent) {
	return new MiqtVirtualQsciLexerXML(parent);
}

void QsciLexerXML_virtbase(QsciLexerXML* src, QsciLexerHTML** outptr_QsciLexerHTML) {
	*outptr_QsciLexerHTML = static_cast<QsciLexerHTML*>(src);
}

QMetaObject* QsciLexerXML_MetaObject(const QsciLexerXML* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerXML_Metacast(QsciLexerXML* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerXML_Tr(const char* s) {
	QString _ret = QsciLexerXML::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerXML_Language(const QsciLexerXML* self) {
	return (const char*) self->language();
}

const char* QsciLexerXML_Lexer(const QsciLexerXML* self) {
	return (const char*) self->lexer();
}

QColor* QsciLexerXML_DefaultColor(const QsciLexerXML* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerXML_DefaultEolFill(const QsciLexerXML* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerXML_DefaultFont(const QsciLexerXML* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerXML_DefaultPaper(const QsciLexerXML* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerXML_Keywords(const QsciLexerXML* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

void QsciLexerXML_RefreshProperties(QsciLexerXML* self) {
	self->refreshProperties();
}

void QsciLexerXML_SetScriptsStyled(QsciLexerXML* self, bool styled) {
	self->setScriptsStyled(styled);
}

bool QsciLexerXML_ScriptsStyled(const QsciLexerXML* self) {
	return self->scriptsStyled();
}

struct miqt_string QsciLexerXML_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerXML::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerXML_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerXML::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QsciLexerXML_override_virtual_SetFoldCompact(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetFoldCompact = slot;
	return true;
}

void QsciLexerXML_virtualbase_SetFoldCompact(void* self, bool fold) {
	( (MiqtVirtualQsciLexerXML*)(self) )->virtualbase_SetFoldCompact(fold);
}

bool QsciLexerXML_override_virtual_SetFoldPreprocessor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetFoldPreprocessor = slot;
	return true;
}

void QsciLexerXML_virtualbase_SetFoldPreprocessor(void* self, bool fold) {
	( (MiqtVirtualQsciLexerXML*)(self) )->virtualbase_SetFoldPreprocessor(fold);
}

bool QsciLexerXML_override_virtual_SetCaseSensitiveTags(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetCaseSensitiveTags = slot;
	return true;
}

void QsciLexerXML_virtualbase_SetCaseSensitiveTags(void* self, bool sens) {
	( (MiqtVirtualQsciLexerXML*)(self) )->virtualbase_SetCaseSensitiveTags(sens);
}

void QsciLexerXML_Delete(QsciLexerXML* self) {
	delete self;
}

