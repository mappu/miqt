#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QFont>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSettings>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qscilexerpov.h>
#include "gen_qscilexerpov.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QsciLexerPOV_setFoldComments(QsciLexerPOV*, intptr_t, bool);
void miqt_exec_callback_QsciLexerPOV_setFoldCompact(QsciLexerPOV*, intptr_t, bool);
void miqt_exec_callback_QsciLexerPOV_setFoldDirectives(QsciLexerPOV*, intptr_t, bool);
const char* miqt_exec_callback_QsciLexerPOV_language(const QsciLexerPOV*, intptr_t);
const char* miqt_exec_callback_QsciLexerPOV_lexer(const QsciLexerPOV*, intptr_t);
int miqt_exec_callback_QsciLexerPOV_lexerId(const QsciLexerPOV*, intptr_t);
const char* miqt_exec_callback_QsciLexerPOV_autoCompletionFillups(const QsciLexerPOV*, intptr_t);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QsciLexerPOV_autoCompletionWordSeparators(const QsciLexerPOV*, intptr_t);
const char* miqt_exec_callback_QsciLexerPOV_blockEnd(const QsciLexerPOV*, intptr_t, int*);
int miqt_exec_callback_QsciLexerPOV_blockLookback(const QsciLexerPOV*, intptr_t);
const char* miqt_exec_callback_QsciLexerPOV_blockStart(const QsciLexerPOV*, intptr_t, int*);
const char* miqt_exec_callback_QsciLexerPOV_blockStartKeyword(const QsciLexerPOV*, intptr_t, int*);
int miqt_exec_callback_QsciLexerPOV_braceStyle(const QsciLexerPOV*, intptr_t);
bool miqt_exec_callback_QsciLexerPOV_caseSensitive(const QsciLexerPOV*, intptr_t);
QColor* miqt_exec_callback_QsciLexerPOV_color(const QsciLexerPOV*, intptr_t, int);
bool miqt_exec_callback_QsciLexerPOV_eolFill(const QsciLexerPOV*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerPOV_font(const QsciLexerPOV*, intptr_t, int);
int miqt_exec_callback_QsciLexerPOV_indentationGuideView(const QsciLexerPOV*, intptr_t);
const char* miqt_exec_callback_QsciLexerPOV_keywords(const QsciLexerPOV*, intptr_t, int);
int miqt_exec_callback_QsciLexerPOV_defaultStyle(const QsciLexerPOV*, intptr_t);
struct miqt_string miqt_exec_callback_QsciLexerPOV_description(const QsciLexerPOV*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerPOV_paper(const QsciLexerPOV*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerPOV_defaultColorWithStyle(const QsciLexerPOV*, intptr_t, int);
bool miqt_exec_callback_QsciLexerPOV_defaultEolFill(const QsciLexerPOV*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerPOV_defaultFontWithStyle(const QsciLexerPOV*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerPOV_defaultPaperWithStyle(const QsciLexerPOV*, intptr_t, int);
void miqt_exec_callback_QsciLexerPOV_setEditor(QsciLexerPOV*, intptr_t, QsciScintilla*);
void miqt_exec_callback_QsciLexerPOV_refreshProperties(QsciLexerPOV*, intptr_t);
int miqt_exec_callback_QsciLexerPOV_styleBitsNeeded(const QsciLexerPOV*, intptr_t);
const char* miqt_exec_callback_QsciLexerPOV_wordCharacters(const QsciLexerPOV*, intptr_t);
void miqt_exec_callback_QsciLexerPOV_setAutoIndentStyle(QsciLexerPOV*, intptr_t, int);
void miqt_exec_callback_QsciLexerPOV_setColor(QsciLexerPOV*, intptr_t, QColor*, int);
void miqt_exec_callback_QsciLexerPOV_setEolFill(QsciLexerPOV*, intptr_t, bool, int);
void miqt_exec_callback_QsciLexerPOV_setFont(QsciLexerPOV*, intptr_t, QFont*, int);
void miqt_exec_callback_QsciLexerPOV_setPaper(QsciLexerPOV*, intptr_t, QColor*, int);
bool miqt_exec_callback_QsciLexerPOV_readProperties(QsciLexerPOV*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerPOV_writeProperties(const QsciLexerPOV*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerPOV_event(QsciLexerPOV*, intptr_t, QEvent*);
bool miqt_exec_callback_QsciLexerPOV_eventFilter(QsciLexerPOV*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QsciLexerPOV_timerEvent(QsciLexerPOV*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QsciLexerPOV_childEvent(QsciLexerPOV*, intptr_t, QChildEvent*);
void miqt_exec_callback_QsciLexerPOV_customEvent(QsciLexerPOV*, intptr_t, QEvent*);
void miqt_exec_callback_QsciLexerPOV_connectNotify(QsciLexerPOV*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QsciLexerPOV_disconnectNotify(QsciLexerPOV*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciLexerPOV final : public QsciLexerPOV {
public:

	MiqtVirtualQsciLexerPOV(): QsciLexerPOV() {};
	MiqtVirtualQsciLexerPOV(QObject* parent): QsciLexerPOV(parent) {};

	virtual ~MiqtVirtualQsciLexerPOV() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setFoldComments = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldComments(bool fold) override {
		if (handle__setFoldComments == 0) {
			QsciLexerPOV::setFoldComments(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerPOV_setFoldComments(this, handle__setFoldComments, sigval1);

		
	}

	friend void QsciLexerPOV_virtualbase_setFoldComments(void* self, bool fold);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setFoldCompact = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldCompact(bool fold) override {
		if (handle__setFoldCompact == 0) {
			QsciLexerPOV::setFoldCompact(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerPOV_setFoldCompact(this, handle__setFoldCompact, sigval1);

		
	}

	friend void QsciLexerPOV_virtualbase_setFoldCompact(void* self, bool fold);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setFoldDirectives = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldDirectives(bool fold) override {
		if (handle__setFoldDirectives == 0) {
			QsciLexerPOV::setFoldDirectives(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerPOV_setFoldDirectives(this, handle__setFoldDirectives, sigval1);

		
	}

	friend void QsciLexerPOV_virtualbase_setFoldDirectives(void* self, bool fold);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__language = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* language() const override {
		if (handle__language == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerPOV_language(this, handle__language);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__lexer = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* lexer() const override {
		if (handle__lexer == 0) {
			return QsciLexerPOV::lexer();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerPOV_lexer(this, handle__lexer);

		return callback_return_value;
	}

	friend const char* QsciLexerPOV_virtualbase_lexer(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__lexerId = 0;

	// Subclass to allow providing a Go implementation
	virtual int lexerId() const override {
		if (handle__lexerId == 0) {
			return QsciLexerPOV::lexerId();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerPOV_lexerId(this, handle__lexerId);

		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerPOV_virtualbase_lexerId(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__autoCompletionFillups = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* autoCompletionFillups() const override {
		if (handle__autoCompletionFillups == 0) {
			return QsciLexerPOV::autoCompletionFillups();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerPOV_autoCompletionFillups(this, handle__autoCompletionFillups);

		return callback_return_value;
	}

	friend const char* QsciLexerPOV_virtualbase_autoCompletionFillups(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__autoCompletionWordSeparators = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList autoCompletionWordSeparators() const override {
		if (handle__autoCompletionWordSeparators == 0) {
			return QsciLexerPOV::autoCompletionWordSeparators();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QsciLexerPOV_autoCompletionWordSeparators(this, handle__autoCompletionWordSeparators);
		QStringList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		struct miqt_string* callback_return_value_arr = static_cast<struct miqt_string*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QString callback_return_value_arr_i_QString = QString::fromUtf8(callback_return_value_arr[i].data, callback_return_value_arr[i].len);
			callback_return_value_QList.push_back(callback_return_value_arr_i_QString);
		}

		return callback_return_value_QList;
	}

	friend struct miqt_array /* of struct miqt_string */  QsciLexerPOV_virtualbase_autoCompletionWordSeparators(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockEnd = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockEnd(int* style) const override {
		if (handle__blockEnd == 0) {
			return QsciLexerPOV::blockEnd(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerPOV_blockEnd(this, handle__blockEnd, sigval1);

		return callback_return_value;
	}

	friend const char* QsciLexerPOV_virtualbase_blockEnd(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockLookback = 0;

	// Subclass to allow providing a Go implementation
	virtual int blockLookback() const override {
		if (handle__blockLookback == 0) {
			return QsciLexerPOV::blockLookback();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerPOV_blockLookback(this, handle__blockLookback);

		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerPOV_virtualbase_blockLookback(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockStart = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStart(int* style) const override {
		if (handle__blockStart == 0) {
			return QsciLexerPOV::blockStart(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerPOV_blockStart(this, handle__blockStart, sigval1);

		return callback_return_value;
	}

	friend const char* QsciLexerPOV_virtualbase_blockStart(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockStartKeyword = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStartKeyword(int* style) const override {
		if (handle__blockStartKeyword == 0) {
			return QsciLexerPOV::blockStartKeyword(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerPOV_blockStartKeyword(this, handle__blockStartKeyword, sigval1);

		return callback_return_value;
	}

	friend const char* QsciLexerPOV_virtualbase_blockStartKeyword(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__braceStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int braceStyle() const override {
		if (handle__braceStyle == 0) {
			return QsciLexerPOV::braceStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerPOV_braceStyle(this, handle__braceStyle);

		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerPOV_virtualbase_braceStyle(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__caseSensitive = 0;

	// Subclass to allow providing a Go implementation
	virtual bool caseSensitive() const override {
		if (handle__caseSensitive == 0) {
			return QsciLexerPOV::caseSensitive();
		}
		

		bool callback_return_value = miqt_exec_callback_QsciLexerPOV_caseSensitive(this, handle__caseSensitive);

		return callback_return_value;
	}

	friend bool QsciLexerPOV_virtualbase_caseSensitive(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__color = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor color(int style) const override {
		if (handle__color == 0) {
			return QsciLexerPOV::color(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerPOV_color(this, handle__color, sigval1);

		return *callback_return_value;
	}

	friend QColor* QsciLexerPOV_virtualbase_color(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eolFill(int style) const override {
		if (handle__eolFill == 0) {
			return QsciLexerPOV::eolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexerPOV_eolFill(this, handle__eolFill, sigval1);

		return callback_return_value;
	}

	friend bool QsciLexerPOV_virtualbase_eolFill(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__font = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont font(int style) const override {
		if (handle__font == 0) {
			return QsciLexerPOV::font(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexerPOV_font(this, handle__font, sigval1);

		return *callback_return_value;
	}

	friend QFont* QsciLexerPOV_virtualbase_font(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__indentationGuideView = 0;

	// Subclass to allow providing a Go implementation
	virtual int indentationGuideView() const override {
		if (handle__indentationGuideView == 0) {
			return QsciLexerPOV::indentationGuideView();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerPOV_indentationGuideView(this, handle__indentationGuideView);

		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerPOV_virtualbase_indentationGuideView(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keywords = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* keywords(int set) const override {
		if (handle__keywords == 0) {
			return QsciLexerPOV::keywords(set);
		}
		
		int sigval1 = set;

		const char* callback_return_value = miqt_exec_callback_QsciLexerPOV_keywords(this, handle__keywords, sigval1);

		return callback_return_value;
	}

	friend const char* QsciLexerPOV_virtualbase_keywords(const void* self, int set);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int defaultStyle() const override {
		if (handle__defaultStyle == 0) {
			return QsciLexerPOV::defaultStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerPOV_defaultStyle(this, handle__defaultStyle);

		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerPOV_virtualbase_defaultStyle(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__description = 0;

	// Subclass to allow providing a Go implementation
	virtual QString description(int style) const override {
		if (handle__description == 0) {
			return QString(); // Pure virtual, there is no base we can call
		}
		
		int sigval1 = style;

		struct miqt_string callback_return_value = miqt_exec_callback_QsciLexerPOV_description(this, handle__description, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paper = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor paper(int style) const override {
		if (handle__paper == 0) {
			return QsciLexerPOV::paper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerPOV_paper(this, handle__paper, sigval1);

		return *callback_return_value;
	}

	friend QColor* QsciLexerPOV_virtualbase_paper(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultColorWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultColor(int style) const override {
		if (handle__defaultColorWithStyle == 0) {
			return QsciLexerPOV::defaultColor(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerPOV_defaultColorWithStyle(this, handle__defaultColorWithStyle, sigval1);

		return *callback_return_value;
	}

	friend QColor* QsciLexerPOV_virtualbase_defaultColorWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool defaultEolFill(int style) const override {
		if (handle__defaultEolFill == 0) {
			return QsciLexerPOV::defaultEolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexerPOV_defaultEolFill(this, handle__defaultEolFill, sigval1);

		return callback_return_value;
	}

	friend bool QsciLexerPOV_virtualbase_defaultEolFill(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultFontWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont defaultFont(int style) const override {
		if (handle__defaultFontWithStyle == 0) {
			return QsciLexerPOV::defaultFont(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexerPOV_defaultFontWithStyle(this, handle__defaultFontWithStyle, sigval1);

		return *callback_return_value;
	}

	friend QFont* QsciLexerPOV_virtualbase_defaultFontWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultPaperWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultPaper(int style) const override {
		if (handle__defaultPaperWithStyle == 0) {
			return QsciLexerPOV::defaultPaper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerPOV_defaultPaperWithStyle(this, handle__defaultPaperWithStyle, sigval1);

		return *callback_return_value;
	}

	friend QColor* QsciLexerPOV_virtualbase_defaultPaperWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEditor(QsciScintilla* editor) override {
		if (handle__setEditor == 0) {
			QsciLexerPOV::setEditor(editor);
			return;
		}
		
		QsciScintilla* sigval1 = editor;

		miqt_exec_callback_QsciLexerPOV_setEditor(this, handle__setEditor, sigval1);

		
	}

	friend void QsciLexerPOV_virtualbase_setEditor(void* self, QsciScintilla* editor);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__refreshProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual void refreshProperties() override {
		if (handle__refreshProperties == 0) {
			QsciLexerPOV::refreshProperties();
			return;
		}
		

		miqt_exec_callback_QsciLexerPOV_refreshProperties(this, handle__refreshProperties);

		
	}

	friend void QsciLexerPOV_virtualbase_refreshProperties(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__styleBitsNeeded = 0;

	// Subclass to allow providing a Go implementation
	virtual int styleBitsNeeded() const override {
		if (handle__styleBitsNeeded == 0) {
			return QsciLexerPOV::styleBitsNeeded();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerPOV_styleBitsNeeded(this, handle__styleBitsNeeded);

		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerPOV_virtualbase_styleBitsNeeded(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wordCharacters = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* wordCharacters() const override {
		if (handle__wordCharacters == 0) {
			return QsciLexerPOV::wordCharacters();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerPOV_wordCharacters(this, handle__wordCharacters);

		return callback_return_value;
	}

	friend const char* QsciLexerPOV_virtualbase_wordCharacters(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAutoIndentStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAutoIndentStyle(int autoindentstyle) override {
		if (handle__setAutoIndentStyle == 0) {
			QsciLexerPOV::setAutoIndentStyle(autoindentstyle);
			return;
		}
		
		int sigval1 = autoindentstyle;

		miqt_exec_callback_QsciLexerPOV_setAutoIndentStyle(this, handle__setAutoIndentStyle, sigval1);

		
	}

	friend void QsciLexerPOV_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setColor(const QColor& c, int style) override {
		if (handle__setColor == 0) {
			QsciLexerPOV::setColor(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerPOV_setColor(this, handle__setColor, sigval1, sigval2);

		
	}

	friend void QsciLexerPOV_virtualbase_setColor(void* self, QColor* c, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEolFill(bool eoffill, int style) override {
		if (handle__setEolFill == 0) {
			QsciLexerPOV::setEolFill(eoffill, style);
			return;
		}
		
		bool sigval1 = eoffill;
		int sigval2 = style;

		miqt_exec_callback_QsciLexerPOV_setEolFill(this, handle__setEolFill, sigval1, sigval2);

		
	}

	friend void QsciLexerPOV_virtualbase_setEolFill(void* self, bool eoffill, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setFont = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFont(const QFont& f, int style) override {
		if (handle__setFont == 0) {
			QsciLexerPOV::setFont(f, style);
			return;
		}
		
		const QFont& f_ret = f;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&f_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerPOV_setFont(this, handle__setFont, sigval1, sigval2);

		
	}

	friend void QsciLexerPOV_virtualbase_setFont(void* self, QFont* f, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setPaper = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPaper(const QColor& c, int style) override {
		if (handle__setPaper == 0) {
			QsciLexerPOV::setPaper(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerPOV_setPaper(this, handle__setPaper, sigval1, sigval2);

		
	}

	friend void QsciLexerPOV_virtualbase_setPaper(void* self, QColor* c, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__readProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool readProperties(QSettings& qs, const QString& prefix) override {
		if (handle__readProperties == 0) {
			return QsciLexerPOV::readProperties(qs, prefix);
		}
		
		QSettings& qs_ret = qs;
		// Cast returned reference into pointer
		QSettings* sigval1 = &qs_ret;
		const QString prefix_ret = prefix;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray prefix_b = prefix_ret.toUtf8();
		struct miqt_string prefix_ms;
		prefix_ms.len = prefix_b.length();
		prefix_ms.data = static_cast<char*>(malloc(prefix_ms.len));
		memcpy(prefix_ms.data, prefix_b.data(), prefix_ms.len);
		struct miqt_string sigval2 = prefix_ms;

		bool callback_return_value = miqt_exec_callback_QsciLexerPOV_readProperties(this, handle__readProperties, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QsciLexerPOV_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__writeProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
		if (handle__writeProperties == 0) {
			return QsciLexerPOV::writeProperties(qs, prefix);
		}
		
		QSettings& qs_ret = qs;
		// Cast returned reference into pointer
		QSettings* sigval1 = &qs_ret;
		const QString prefix_ret = prefix;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray prefix_b = prefix_ret.toUtf8();
		struct miqt_string prefix_ms;
		prefix_ms.len = prefix_b.length();
		prefix_ms.data = static_cast<char*>(malloc(prefix_ms.len));
		memcpy(prefix_ms.data, prefix_b.data(), prefix_ms.len);
		struct miqt_string sigval2 = prefix_ms;

		bool callback_return_value = miqt_exec_callback_QsciLexerPOV_writeProperties(this, handle__writeProperties, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QsciLexerPOV_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QsciLexerPOV::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QsciLexerPOV_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool QsciLexerPOV_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QsciLexerPOV::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QsciLexerPOV_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QsciLexerPOV_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QsciLexerPOV::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QsciLexerPOV_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void QsciLexerPOV_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QsciLexerPOV::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QsciLexerPOV_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void QsciLexerPOV_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QsciLexerPOV::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QsciLexerPOV_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void QsciLexerPOV_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QsciLexerPOV::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciLexerPOV_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void QsciLexerPOV_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QsciLexerPOV::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciLexerPOV_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void QsciLexerPOV_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend bool QsciLexerPOV_protectedbase_readProperties(bool* _dynamic_cast_ok, void* self, QSettings* qs, struct miqt_string prefix);
	friend bool QsciLexerPOV_protectedbase_writeProperties(bool* _dynamic_cast_ok, const void* self, QSettings* qs, struct miqt_string prefix);
	friend QObject* QsciLexerPOV_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QsciLexerPOV_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QsciLexerPOV_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QsciLexerPOV_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QsciLexerPOV* QsciLexerPOV_new() {
	return new MiqtVirtualQsciLexerPOV();
}

QsciLexerPOV* QsciLexerPOV_new2(QObject* parent) {
	return new MiqtVirtualQsciLexerPOV(parent);
}

void QsciLexerPOV_virtbase(QsciLexerPOV* src, QsciLexer** outptr_QsciLexer) {
	*outptr_QsciLexer = static_cast<QsciLexer*>(src);
}

QMetaObject* QsciLexerPOV_metaObject(const QsciLexerPOV* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerPOV_metacast(QsciLexerPOV* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerPOV_tr(const char* s) {
	QString _ret = QsciLexerPOV::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerPOV_trUtf8(const char* s) {
	QString _ret = QsciLexerPOV::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerPOV_language(const QsciLexerPOV* self) {
	return (const char*) self->language();
}

const char* QsciLexerPOV_lexer(const QsciLexerPOV* self) {
	return (const char*) self->lexer();
}

int QsciLexerPOV_braceStyle(const QsciLexerPOV* self) {
	return self->braceStyle();
}

const char* QsciLexerPOV_wordCharacters(const QsciLexerPOV* self) {
	return (const char*) self->wordCharacters();
}

QColor* QsciLexerPOV_defaultColor(const QsciLexerPOV* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerPOV_defaultEolFill(const QsciLexerPOV* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerPOV_defaultFont(const QsciLexerPOV* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerPOV_defaultPaper(const QsciLexerPOV* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerPOV_keywords(const QsciLexerPOV* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerPOV_description(const QsciLexerPOV* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerPOV_refreshProperties(QsciLexerPOV* self) {
	self->refreshProperties();
}

bool QsciLexerPOV_foldComments(const QsciLexerPOV* self) {
	return self->foldComments();
}

bool QsciLexerPOV_foldCompact(const QsciLexerPOV* self) {
	return self->foldCompact();
}

bool QsciLexerPOV_foldDirectives(const QsciLexerPOV* self) {
	return self->foldDirectives();
}

void QsciLexerPOV_setFoldComments(QsciLexerPOV* self, bool fold) {
	self->setFoldComments(fold);
}

void QsciLexerPOV_setFoldCompact(QsciLexerPOV* self, bool fold) {
	self->setFoldCompact(fold);
}

void QsciLexerPOV_setFoldDirectives(QsciLexerPOV* self, bool fold) {
	self->setFoldDirectives(fold);
}

struct miqt_string QsciLexerPOV_tr2(const char* s, const char* c) {
	QString _ret = QsciLexerPOV::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerPOV_tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerPOV::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerPOV_trUtf82(const char* s, const char* c) {
	QString _ret = QsciLexerPOV::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerPOV_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QsciLexerPOV::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QsciLexerPOV_override_virtual_setFoldComments(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setFoldComments = slot;
	return true;
}

void QsciLexerPOV_virtualbase_setFoldComments(void* self, bool fold) {

	( (MiqtVirtualQsciLexerPOV*)(self) )->MiqtVirtualQsciLexerPOV::setFoldComments(fold);

}

bool QsciLexerPOV_override_virtual_setFoldCompact(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setFoldCompact = slot;
	return true;
}

void QsciLexerPOV_virtualbase_setFoldCompact(void* self, bool fold) {

	( (MiqtVirtualQsciLexerPOV*)(self) )->MiqtVirtualQsciLexerPOV::setFoldCompact(fold);

}

bool QsciLexerPOV_override_virtual_setFoldDirectives(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setFoldDirectives = slot;
	return true;
}

void QsciLexerPOV_virtualbase_setFoldDirectives(void* self, bool fold) {

	( (MiqtVirtualQsciLexerPOV*)(self) )->MiqtVirtualQsciLexerPOV::setFoldDirectives(fold);

}

bool QsciLexerPOV_override_virtual_language(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__language = slot;
	return true;
}

bool QsciLexerPOV_override_virtual_lexer(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__lexer = slot;
	return true;
}

const char* QsciLexerPOV_virtualbase_lexer(const void* self) {

	return (const char*) ( (const MiqtVirtualQsciLexerPOV*)(self) )->MiqtVirtualQsciLexerPOV::lexer();

}

bool QsciLexerPOV_override_virtual_lexerId(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__lexerId = slot;
	return true;
}

int QsciLexerPOV_virtualbase_lexerId(const void* self) {

	return ( (const MiqtVirtualQsciLexerPOV*)(self) )->MiqtVirtualQsciLexerPOV::lexerId();

}

bool QsciLexerPOV_override_virtual_autoCompletionFillups(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__autoCompletionFillups = slot;
	return true;
}

const char* QsciLexerPOV_virtualbase_autoCompletionFillups(const void* self) {

	return (const char*) ( (const MiqtVirtualQsciLexerPOV*)(self) )->MiqtVirtualQsciLexerPOV::autoCompletionFillups();

}

bool QsciLexerPOV_override_virtual_autoCompletionWordSeparators(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__autoCompletionWordSeparators = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QsciLexerPOV_virtualbase_autoCompletionWordSeparators(const void* self) {

	QStringList _ret = ( (const MiqtVirtualQsciLexerPOV*)(self) )->MiqtVirtualQsciLexerPOV::autoCompletionWordSeparators();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;

}

bool QsciLexerPOV_override_virtual_blockEnd(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__blockEnd = slot;
	return true;
}

const char* QsciLexerPOV_virtualbase_blockEnd(const void* self, int* style) {

	return (const char*) ( (const MiqtVirtualQsciLexerPOV*)(self) )->MiqtVirtualQsciLexerPOV::blockEnd(static_cast<int*>(style));

}

bool QsciLexerPOV_override_virtual_blockLookback(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__blockLookback = slot;
	return true;
}

int QsciLexerPOV_virtualbase_blockLookback(const void* self) {

	return ( (const MiqtVirtualQsciLexerPOV*)(self) )->MiqtVirtualQsciLexerPOV::blockLookback();

}

bool QsciLexerPOV_override_virtual_blockStart(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__blockStart = slot;
	return true;
}

const char* QsciLexerPOV_virtualbase_blockStart(const void* self, int* style) {

	return (const char*) ( (const MiqtVirtualQsciLexerPOV*)(self) )->MiqtVirtualQsciLexerPOV::blockStart(static_cast<int*>(style));

}

bool QsciLexerPOV_override_virtual_blockStartKeyword(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__blockStartKeyword = slot;
	return true;
}

const char* QsciLexerPOV_virtualbase_blockStartKeyword(const void* self, int* style) {

	return (const char*) ( (const MiqtVirtualQsciLexerPOV*)(self) )->MiqtVirtualQsciLexerPOV::blockStartKeyword(static_cast<int*>(style));

}

bool QsciLexerPOV_override_virtual_braceStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__braceStyle = slot;
	return true;
}

int QsciLexerPOV_virtualbase_braceStyle(const void* self) {

	return ( (const MiqtVirtualQsciLexerPOV*)(self) )->MiqtVirtualQsciLexerPOV::braceStyle();

}

bool QsciLexerPOV_override_virtual_caseSensitive(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__caseSensitive = slot;
	return true;
}

bool QsciLexerPOV_virtualbase_caseSensitive(const void* self) {

	return ( (const MiqtVirtualQsciLexerPOV*)(self) )->MiqtVirtualQsciLexerPOV::caseSensitive();

}

bool QsciLexerPOV_override_virtual_color(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__color = slot;
	return true;
}

QColor* QsciLexerPOV_virtualbase_color(const void* self, int style) {

	return new QColor(( (const MiqtVirtualQsciLexerPOV*)(self) )->MiqtVirtualQsciLexerPOV::color(static_cast<int>(style)));

}

bool QsciLexerPOV_override_virtual_eolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eolFill = slot;
	return true;
}

bool QsciLexerPOV_virtualbase_eolFill(const void* self, int style) {

	return ( (const MiqtVirtualQsciLexerPOV*)(self) )->MiqtVirtualQsciLexerPOV::eolFill(static_cast<int>(style));

}

bool QsciLexerPOV_override_virtual_font(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__font = slot;
	return true;
}

QFont* QsciLexerPOV_virtualbase_font(const void* self, int style) {

	return new QFont(( (const MiqtVirtualQsciLexerPOV*)(self) )->MiqtVirtualQsciLexerPOV::font(static_cast<int>(style)));

}

bool QsciLexerPOV_override_virtual_indentationGuideView(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__indentationGuideView = slot;
	return true;
}

int QsciLexerPOV_virtualbase_indentationGuideView(const void* self) {

	return ( (const MiqtVirtualQsciLexerPOV*)(self) )->MiqtVirtualQsciLexerPOV::indentationGuideView();

}

bool QsciLexerPOV_override_virtual_keywords(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keywords = slot;
	return true;
}

const char* QsciLexerPOV_virtualbase_keywords(const void* self, int set) {

	return (const char*) ( (const MiqtVirtualQsciLexerPOV*)(self) )->MiqtVirtualQsciLexerPOV::keywords(static_cast<int>(set));

}

bool QsciLexerPOV_override_virtual_defaultStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__defaultStyle = slot;
	return true;
}

int QsciLexerPOV_virtualbase_defaultStyle(const void* self) {

	return ( (const MiqtVirtualQsciLexerPOV*)(self) )->MiqtVirtualQsciLexerPOV::defaultStyle();

}

bool QsciLexerPOV_override_virtual_description(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__description = slot;
	return true;
}

bool QsciLexerPOV_override_virtual_paper(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paper = slot;
	return true;
}

QColor* QsciLexerPOV_virtualbase_paper(const void* self, int style) {

	return new QColor(( (const MiqtVirtualQsciLexerPOV*)(self) )->MiqtVirtualQsciLexerPOV::paper(static_cast<int>(style)));

}

bool QsciLexerPOV_override_virtual_defaultColorWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__defaultColorWithStyle = slot;
	return true;
}

QColor* QsciLexerPOV_virtualbase_defaultColorWithStyle(const void* self, int style) {

	return new QColor(( (const MiqtVirtualQsciLexerPOV*)(self) )->MiqtVirtualQsciLexerPOV::defaultColor(static_cast<int>(style)));

}

bool QsciLexerPOV_override_virtual_defaultEolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__defaultEolFill = slot;
	return true;
}

bool QsciLexerPOV_virtualbase_defaultEolFill(const void* self, int style) {

	return ( (const MiqtVirtualQsciLexerPOV*)(self) )->MiqtVirtualQsciLexerPOV::defaultEolFill(static_cast<int>(style));

}

bool QsciLexerPOV_override_virtual_defaultFontWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__defaultFontWithStyle = slot;
	return true;
}

QFont* QsciLexerPOV_virtualbase_defaultFontWithStyle(const void* self, int style) {

	return new QFont(( (const MiqtVirtualQsciLexerPOV*)(self) )->MiqtVirtualQsciLexerPOV::defaultFont(static_cast<int>(style)));

}

bool QsciLexerPOV_override_virtual_defaultPaperWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__defaultPaperWithStyle = slot;
	return true;
}

QColor* QsciLexerPOV_virtualbase_defaultPaperWithStyle(const void* self, int style) {

	return new QColor(( (const MiqtVirtualQsciLexerPOV*)(self) )->MiqtVirtualQsciLexerPOV::defaultPaper(static_cast<int>(style)));

}

bool QsciLexerPOV_override_virtual_setEditor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setEditor = slot;
	return true;
}

void QsciLexerPOV_virtualbase_setEditor(void* self, QsciScintilla* editor) {

	( (MiqtVirtualQsciLexerPOV*)(self) )->MiqtVirtualQsciLexerPOV::setEditor(editor);

}

bool QsciLexerPOV_override_virtual_refreshProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__refreshProperties = slot;
	return true;
}

void QsciLexerPOV_virtualbase_refreshProperties(void* self) {

	( (MiqtVirtualQsciLexerPOV*)(self) )->MiqtVirtualQsciLexerPOV::refreshProperties();

}

bool QsciLexerPOV_override_virtual_styleBitsNeeded(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__styleBitsNeeded = slot;
	return true;
}

int QsciLexerPOV_virtualbase_styleBitsNeeded(const void* self) {

	return ( (const MiqtVirtualQsciLexerPOV*)(self) )->MiqtVirtualQsciLexerPOV::styleBitsNeeded();

}

bool QsciLexerPOV_override_virtual_wordCharacters(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wordCharacters = slot;
	return true;
}

const char* QsciLexerPOV_virtualbase_wordCharacters(const void* self) {

	return (const char*) ( (const MiqtVirtualQsciLexerPOV*)(self) )->MiqtVirtualQsciLexerPOV::wordCharacters();

}

bool QsciLexerPOV_override_virtual_setAutoIndentStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setAutoIndentStyle = slot;
	return true;
}

void QsciLexerPOV_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle) {

	( (MiqtVirtualQsciLexerPOV*)(self) )->MiqtVirtualQsciLexerPOV::setAutoIndentStyle(static_cast<int>(autoindentstyle));

}

bool QsciLexerPOV_override_virtual_setColor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setColor = slot;
	return true;
}

void QsciLexerPOV_virtualbase_setColor(void* self, QColor* c, int style) {

	( (MiqtVirtualQsciLexerPOV*)(self) )->MiqtVirtualQsciLexerPOV::setColor(*c, static_cast<int>(style));

}

bool QsciLexerPOV_override_virtual_setEolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setEolFill = slot;
	return true;
}

void QsciLexerPOV_virtualbase_setEolFill(void* self, bool eoffill, int style) {

	( (MiqtVirtualQsciLexerPOV*)(self) )->MiqtVirtualQsciLexerPOV::setEolFill(eoffill, static_cast<int>(style));

}

bool QsciLexerPOV_override_virtual_setFont(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setFont = slot;
	return true;
}

void QsciLexerPOV_virtualbase_setFont(void* self, QFont* f, int style) {

	( (MiqtVirtualQsciLexerPOV*)(self) )->MiqtVirtualQsciLexerPOV::setFont(*f, static_cast<int>(style));

}

bool QsciLexerPOV_override_virtual_setPaper(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setPaper = slot;
	return true;
}

void QsciLexerPOV_virtualbase_setPaper(void* self, QColor* c, int style) {

	( (MiqtVirtualQsciLexerPOV*)(self) )->MiqtVirtualQsciLexerPOV::setPaper(*c, static_cast<int>(style));

}

bool QsciLexerPOV_override_virtual_readProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__readProperties = slot;
	return true;
}

bool QsciLexerPOV_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

	return ( (MiqtVirtualQsciLexerPOV*)(self) )->MiqtVirtualQsciLexerPOV::readProperties(*qs, prefix_QString);

}

bool QsciLexerPOV_override_virtual_writeProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__writeProperties = slot;
	return true;
}

bool QsciLexerPOV_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

	return ( (const MiqtVirtualQsciLexerPOV*)(self) )->MiqtVirtualQsciLexerPOV::writeProperties(*qs, prefix_QString);

}

bool QsciLexerPOV_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QsciLexerPOV_virtualbase_event(void* self, QEvent* event) {

	return ( (MiqtVirtualQsciLexerPOV*)(self) )->MiqtVirtualQsciLexerPOV::event(event);

}

bool QsciLexerPOV_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QsciLexerPOV_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {

	return ( (MiqtVirtualQsciLexerPOV*)(self) )->MiqtVirtualQsciLexerPOV::eventFilter(watched, event);

}

bool QsciLexerPOV_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QsciLexerPOV_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (MiqtVirtualQsciLexerPOV*)(self) )->MiqtVirtualQsciLexerPOV::timerEvent(event);

}

bool QsciLexerPOV_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QsciLexerPOV_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (MiqtVirtualQsciLexerPOV*)(self) )->MiqtVirtualQsciLexerPOV::childEvent(event);

}

bool QsciLexerPOV_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QsciLexerPOV_virtualbase_customEvent(void* self, QEvent* event) {

	( (MiqtVirtualQsciLexerPOV*)(self) )->MiqtVirtualQsciLexerPOV::customEvent(event);

}

bool QsciLexerPOV_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QsciLexerPOV_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQsciLexerPOV*)(self) )->MiqtVirtualQsciLexerPOV::connectNotify(*signal);

}

bool QsciLexerPOV_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QsciLexerPOV_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQsciLexerPOV*)(self) )->MiqtVirtualQsciLexerPOV::disconnectNotify(*signal);

}

bool QsciLexerPOV_protectedbase_readProperties(bool* _dynamic_cast_ok, void* self, QSettings* qs, struct miqt_string prefix) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
			QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

	return self_cast->readProperties(*qs, prefix_QString);

}

bool QsciLexerPOV_protectedbase_writeProperties(bool* _dynamic_cast_ok, const void* self, QSettings* qs, struct miqt_string prefix) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
			QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

	return self_cast->writeProperties(*qs, prefix_QString);

}

QObject* QsciLexerPOV_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QsciLexerPOV_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QsciLexerPOV_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QsciLexerPOV_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQsciLexerPOV* self_cast = dynamic_cast<MiqtVirtualQsciLexerPOV*>( (QsciLexerPOV*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QsciLexerPOV_delete(QsciLexerPOV* self) {
	delete self;
}

