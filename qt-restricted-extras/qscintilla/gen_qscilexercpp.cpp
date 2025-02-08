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
#include <qscilexercpp.h>
#include "gen_qscilexercpp.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QsciLexerCPP_setFoldAtElse(QsciLexerCPP*, intptr_t, bool);
void miqt_exec_callback_QsciLexerCPP_setFoldComments(QsciLexerCPP*, intptr_t, bool);
void miqt_exec_callback_QsciLexerCPP_setFoldCompact(QsciLexerCPP*, intptr_t, bool);
void miqt_exec_callback_QsciLexerCPP_setFoldPreprocessor(QsciLexerCPP*, intptr_t, bool);
void miqt_exec_callback_QsciLexerCPP_setStylePreprocessor(QsciLexerCPP*, intptr_t, bool);
const char* miqt_exec_callback_QsciLexerCPP_language(const QsciLexerCPP*, intptr_t);
const char* miqt_exec_callback_QsciLexerCPP_lexer(const QsciLexerCPP*, intptr_t);
int miqt_exec_callback_QsciLexerCPP_lexerId(const QsciLexerCPP*, intptr_t);
const char* miqt_exec_callback_QsciLexerCPP_autoCompletionFillups(const QsciLexerCPP*, intptr_t);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QsciLexerCPP_autoCompletionWordSeparators(const QsciLexerCPP*, intptr_t);
const char* miqt_exec_callback_QsciLexerCPP_blockEnd(const QsciLexerCPP*, intptr_t, int*);
int miqt_exec_callback_QsciLexerCPP_blockLookback(const QsciLexerCPP*, intptr_t);
const char* miqt_exec_callback_QsciLexerCPP_blockStart(const QsciLexerCPP*, intptr_t, int*);
const char* miqt_exec_callback_QsciLexerCPP_blockStartKeyword(const QsciLexerCPP*, intptr_t, int*);
int miqt_exec_callback_QsciLexerCPP_braceStyle(const QsciLexerCPP*, intptr_t);
bool miqt_exec_callback_QsciLexerCPP_caseSensitive(const QsciLexerCPP*, intptr_t);
QColor* miqt_exec_callback_QsciLexerCPP_color(const QsciLexerCPP*, intptr_t, int);
bool miqt_exec_callback_QsciLexerCPP_eolFill(const QsciLexerCPP*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerCPP_font(const QsciLexerCPP*, intptr_t, int);
int miqt_exec_callback_QsciLexerCPP_indentationGuideView(const QsciLexerCPP*, intptr_t);
const char* miqt_exec_callback_QsciLexerCPP_keywords(const QsciLexerCPP*, intptr_t, int);
int miqt_exec_callback_QsciLexerCPP_defaultStyle(const QsciLexerCPP*, intptr_t);
struct miqt_string miqt_exec_callback_QsciLexerCPP_description(const QsciLexerCPP*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerCPP_paper(const QsciLexerCPP*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerCPP_defaultColorWithStyle(const QsciLexerCPP*, intptr_t, int);
bool miqt_exec_callback_QsciLexerCPP_defaultEolFill(const QsciLexerCPP*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerCPP_defaultFontWithStyle(const QsciLexerCPP*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerCPP_defaultPaperWithStyle(const QsciLexerCPP*, intptr_t, int);
void miqt_exec_callback_QsciLexerCPP_setEditor(QsciLexerCPP*, intptr_t, QsciScintilla*);
void miqt_exec_callback_QsciLexerCPP_refreshProperties(QsciLexerCPP*, intptr_t);
int miqt_exec_callback_QsciLexerCPP_styleBitsNeeded(const QsciLexerCPP*, intptr_t);
const char* miqt_exec_callback_QsciLexerCPP_wordCharacters(const QsciLexerCPP*, intptr_t);
void miqt_exec_callback_QsciLexerCPP_setAutoIndentStyle(QsciLexerCPP*, intptr_t, int);
void miqt_exec_callback_QsciLexerCPP_setColor(QsciLexerCPP*, intptr_t, QColor*, int);
void miqt_exec_callback_QsciLexerCPP_setEolFill(QsciLexerCPP*, intptr_t, bool, int);
void miqt_exec_callback_QsciLexerCPP_setFont(QsciLexerCPP*, intptr_t, QFont*, int);
void miqt_exec_callback_QsciLexerCPP_setPaper(QsciLexerCPP*, intptr_t, QColor*, int);
bool miqt_exec_callback_QsciLexerCPP_readProperties(QsciLexerCPP*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerCPP_writeProperties(const QsciLexerCPP*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerCPP_event(QsciLexerCPP*, intptr_t, QEvent*);
bool miqt_exec_callback_QsciLexerCPP_eventFilter(QsciLexerCPP*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QsciLexerCPP_timerEvent(QsciLexerCPP*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QsciLexerCPP_childEvent(QsciLexerCPP*, intptr_t, QChildEvent*);
void miqt_exec_callback_QsciLexerCPP_customEvent(QsciLexerCPP*, intptr_t, QEvent*);
void miqt_exec_callback_QsciLexerCPP_connectNotify(QsciLexerCPP*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QsciLexerCPP_disconnectNotify(QsciLexerCPP*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciLexerCPP final : public QsciLexerCPP {
public:

	MiqtVirtualQsciLexerCPP(): QsciLexerCPP() {};
	MiqtVirtualQsciLexerCPP(QObject* parent): QsciLexerCPP(parent) {};
	MiqtVirtualQsciLexerCPP(QObject* parent, bool caseInsensitiveKeywords): QsciLexerCPP(parent, caseInsensitiveKeywords) {};

	virtual ~MiqtVirtualQsciLexerCPP() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setFoldAtElse = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldAtElse(bool fold) override {
		if (handle__setFoldAtElse == 0) {
			QsciLexerCPP::setFoldAtElse(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerCPP_setFoldAtElse(this, handle__setFoldAtElse, sigval1);

		
	}

	friend void QsciLexerCPP_virtualbase_setFoldAtElse(void* self, bool fold);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setFoldComments = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldComments(bool fold) override {
		if (handle__setFoldComments == 0) {
			QsciLexerCPP::setFoldComments(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerCPP_setFoldComments(this, handle__setFoldComments, sigval1);

		
	}

	friend void QsciLexerCPP_virtualbase_setFoldComments(void* self, bool fold);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setFoldCompact = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldCompact(bool fold) override {
		if (handle__setFoldCompact == 0) {
			QsciLexerCPP::setFoldCompact(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerCPP_setFoldCompact(this, handle__setFoldCompact, sigval1);

		
	}

	friend void QsciLexerCPP_virtualbase_setFoldCompact(void* self, bool fold);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setFoldPreprocessor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldPreprocessor(bool fold) override {
		if (handle__setFoldPreprocessor == 0) {
			QsciLexerCPP::setFoldPreprocessor(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerCPP_setFoldPreprocessor(this, handle__setFoldPreprocessor, sigval1);

		
	}

	friend void QsciLexerCPP_virtualbase_setFoldPreprocessor(void* self, bool fold);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setStylePreprocessor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setStylePreprocessor(bool style) override {
		if (handle__setStylePreprocessor == 0) {
			QsciLexerCPP::setStylePreprocessor(style);
			return;
		}
		
		bool sigval1 = style;

		miqt_exec_callback_QsciLexerCPP_setStylePreprocessor(this, handle__setStylePreprocessor, sigval1);

		
	}

	friend void QsciLexerCPP_virtualbase_setStylePreprocessor(void* self, bool style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__language = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* language() const override {
		if (handle__language == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerCPP_language(this, handle__language);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__lexer = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* lexer() const override {
		if (handle__lexer == 0) {
			return QsciLexerCPP::lexer();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerCPP_lexer(this, handle__lexer);

		return callback_return_value;
	}

	friend const char* QsciLexerCPP_virtualbase_lexer(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__lexerId = 0;

	// Subclass to allow providing a Go implementation
	virtual int lexerId() const override {
		if (handle__lexerId == 0) {
			return QsciLexerCPP::lexerId();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerCPP_lexerId(this, handle__lexerId);

		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerCPP_virtualbase_lexerId(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__autoCompletionFillups = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* autoCompletionFillups() const override {
		if (handle__autoCompletionFillups == 0) {
			return QsciLexerCPP::autoCompletionFillups();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerCPP_autoCompletionFillups(this, handle__autoCompletionFillups);

		return callback_return_value;
	}

	friend const char* QsciLexerCPP_virtualbase_autoCompletionFillups(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__autoCompletionWordSeparators = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList autoCompletionWordSeparators() const override {
		if (handle__autoCompletionWordSeparators == 0) {
			return QsciLexerCPP::autoCompletionWordSeparators();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QsciLexerCPP_autoCompletionWordSeparators(this, handle__autoCompletionWordSeparators);
		QStringList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		struct miqt_string* callback_return_value_arr = static_cast<struct miqt_string*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QString callback_return_value_arr_i_QString = QString::fromUtf8(callback_return_value_arr[i].data, callback_return_value_arr[i].len);
			callback_return_value_QList.push_back(callback_return_value_arr_i_QString);
		}

		return callback_return_value_QList;
	}

	friend struct miqt_array /* of struct miqt_string */  QsciLexerCPP_virtualbase_autoCompletionWordSeparators(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockEnd = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockEnd(int* style) const override {
		if (handle__blockEnd == 0) {
			return QsciLexerCPP::blockEnd(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerCPP_blockEnd(this, handle__blockEnd, sigval1);

		return callback_return_value;
	}

	friend const char* QsciLexerCPP_virtualbase_blockEnd(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockLookback = 0;

	// Subclass to allow providing a Go implementation
	virtual int blockLookback() const override {
		if (handle__blockLookback == 0) {
			return QsciLexerCPP::blockLookback();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerCPP_blockLookback(this, handle__blockLookback);

		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerCPP_virtualbase_blockLookback(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockStart = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStart(int* style) const override {
		if (handle__blockStart == 0) {
			return QsciLexerCPP::blockStart(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerCPP_blockStart(this, handle__blockStart, sigval1);

		return callback_return_value;
	}

	friend const char* QsciLexerCPP_virtualbase_blockStart(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockStartKeyword = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStartKeyword(int* style) const override {
		if (handle__blockStartKeyword == 0) {
			return QsciLexerCPP::blockStartKeyword(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerCPP_blockStartKeyword(this, handle__blockStartKeyword, sigval1);

		return callback_return_value;
	}

	friend const char* QsciLexerCPP_virtualbase_blockStartKeyword(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__braceStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int braceStyle() const override {
		if (handle__braceStyle == 0) {
			return QsciLexerCPP::braceStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerCPP_braceStyle(this, handle__braceStyle);

		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerCPP_virtualbase_braceStyle(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__caseSensitive = 0;

	// Subclass to allow providing a Go implementation
	virtual bool caseSensitive() const override {
		if (handle__caseSensitive == 0) {
			return QsciLexerCPP::caseSensitive();
		}
		

		bool callback_return_value = miqt_exec_callback_QsciLexerCPP_caseSensitive(this, handle__caseSensitive);

		return callback_return_value;
	}

	friend bool QsciLexerCPP_virtualbase_caseSensitive(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__color = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor color(int style) const override {
		if (handle__color == 0) {
			return QsciLexerCPP::color(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerCPP_color(this, handle__color, sigval1);

		return *callback_return_value;
	}

	friend QColor* QsciLexerCPP_virtualbase_color(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eolFill(int style) const override {
		if (handle__eolFill == 0) {
			return QsciLexerCPP::eolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexerCPP_eolFill(this, handle__eolFill, sigval1);

		return callback_return_value;
	}

	friend bool QsciLexerCPP_virtualbase_eolFill(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__font = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont font(int style) const override {
		if (handle__font == 0) {
			return QsciLexerCPP::font(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexerCPP_font(this, handle__font, sigval1);

		return *callback_return_value;
	}

	friend QFont* QsciLexerCPP_virtualbase_font(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__indentationGuideView = 0;

	// Subclass to allow providing a Go implementation
	virtual int indentationGuideView() const override {
		if (handle__indentationGuideView == 0) {
			return QsciLexerCPP::indentationGuideView();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerCPP_indentationGuideView(this, handle__indentationGuideView);

		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerCPP_virtualbase_indentationGuideView(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keywords = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* keywords(int set) const override {
		if (handle__keywords == 0) {
			return QsciLexerCPP::keywords(set);
		}
		
		int sigval1 = set;

		const char* callback_return_value = miqt_exec_callback_QsciLexerCPP_keywords(this, handle__keywords, sigval1);

		return callback_return_value;
	}

	friend const char* QsciLexerCPP_virtualbase_keywords(const void* self, int set);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int defaultStyle() const override {
		if (handle__defaultStyle == 0) {
			return QsciLexerCPP::defaultStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerCPP_defaultStyle(this, handle__defaultStyle);

		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerCPP_virtualbase_defaultStyle(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__description = 0;

	// Subclass to allow providing a Go implementation
	virtual QString description(int style) const override {
		if (handle__description == 0) {
			return QString(); // Pure virtual, there is no base we can call
		}
		
		int sigval1 = style;

		struct miqt_string callback_return_value = miqt_exec_callback_QsciLexerCPP_description(this, handle__description, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paper = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor paper(int style) const override {
		if (handle__paper == 0) {
			return QsciLexerCPP::paper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerCPP_paper(this, handle__paper, sigval1);

		return *callback_return_value;
	}

	friend QColor* QsciLexerCPP_virtualbase_paper(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultColorWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultColor(int style) const override {
		if (handle__defaultColorWithStyle == 0) {
			return QsciLexerCPP::defaultColor(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerCPP_defaultColorWithStyle(this, handle__defaultColorWithStyle, sigval1);

		return *callback_return_value;
	}

	friend QColor* QsciLexerCPP_virtualbase_defaultColorWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool defaultEolFill(int style) const override {
		if (handle__defaultEolFill == 0) {
			return QsciLexerCPP::defaultEolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexerCPP_defaultEolFill(this, handle__defaultEolFill, sigval1);

		return callback_return_value;
	}

	friend bool QsciLexerCPP_virtualbase_defaultEolFill(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultFontWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont defaultFont(int style) const override {
		if (handle__defaultFontWithStyle == 0) {
			return QsciLexerCPP::defaultFont(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexerCPP_defaultFontWithStyle(this, handle__defaultFontWithStyle, sigval1);

		return *callback_return_value;
	}

	friend QFont* QsciLexerCPP_virtualbase_defaultFontWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultPaperWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultPaper(int style) const override {
		if (handle__defaultPaperWithStyle == 0) {
			return QsciLexerCPP::defaultPaper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerCPP_defaultPaperWithStyle(this, handle__defaultPaperWithStyle, sigval1);

		return *callback_return_value;
	}

	friend QColor* QsciLexerCPP_virtualbase_defaultPaperWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEditor(QsciScintilla* editor) override {
		if (handle__setEditor == 0) {
			QsciLexerCPP::setEditor(editor);
			return;
		}
		
		QsciScintilla* sigval1 = editor;

		miqt_exec_callback_QsciLexerCPP_setEditor(this, handle__setEditor, sigval1);

		
	}

	friend void QsciLexerCPP_virtualbase_setEditor(void* self, QsciScintilla* editor);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__refreshProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual void refreshProperties() override {
		if (handle__refreshProperties == 0) {
			QsciLexerCPP::refreshProperties();
			return;
		}
		

		miqt_exec_callback_QsciLexerCPP_refreshProperties(this, handle__refreshProperties);

		
	}

	friend void QsciLexerCPP_virtualbase_refreshProperties(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__styleBitsNeeded = 0;

	// Subclass to allow providing a Go implementation
	virtual int styleBitsNeeded() const override {
		if (handle__styleBitsNeeded == 0) {
			return QsciLexerCPP::styleBitsNeeded();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerCPP_styleBitsNeeded(this, handle__styleBitsNeeded);

		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerCPP_virtualbase_styleBitsNeeded(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wordCharacters = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* wordCharacters() const override {
		if (handle__wordCharacters == 0) {
			return QsciLexerCPP::wordCharacters();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerCPP_wordCharacters(this, handle__wordCharacters);

		return callback_return_value;
	}

	friend const char* QsciLexerCPP_virtualbase_wordCharacters(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAutoIndentStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAutoIndentStyle(int autoindentstyle) override {
		if (handle__setAutoIndentStyle == 0) {
			QsciLexerCPP::setAutoIndentStyle(autoindentstyle);
			return;
		}
		
		int sigval1 = autoindentstyle;

		miqt_exec_callback_QsciLexerCPP_setAutoIndentStyle(this, handle__setAutoIndentStyle, sigval1);

		
	}

	friend void QsciLexerCPP_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setColor(const QColor& c, int style) override {
		if (handle__setColor == 0) {
			QsciLexerCPP::setColor(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerCPP_setColor(this, handle__setColor, sigval1, sigval2);

		
	}

	friend void QsciLexerCPP_virtualbase_setColor(void* self, QColor* c, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEolFill(bool eoffill, int style) override {
		if (handle__setEolFill == 0) {
			QsciLexerCPP::setEolFill(eoffill, style);
			return;
		}
		
		bool sigval1 = eoffill;
		int sigval2 = style;

		miqt_exec_callback_QsciLexerCPP_setEolFill(this, handle__setEolFill, sigval1, sigval2);

		
	}

	friend void QsciLexerCPP_virtualbase_setEolFill(void* self, bool eoffill, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setFont = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFont(const QFont& f, int style) override {
		if (handle__setFont == 0) {
			QsciLexerCPP::setFont(f, style);
			return;
		}
		
		const QFont& f_ret = f;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&f_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerCPP_setFont(this, handle__setFont, sigval1, sigval2);

		
	}

	friend void QsciLexerCPP_virtualbase_setFont(void* self, QFont* f, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setPaper = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPaper(const QColor& c, int style) override {
		if (handle__setPaper == 0) {
			QsciLexerCPP::setPaper(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerCPP_setPaper(this, handle__setPaper, sigval1, sigval2);

		
	}

	friend void QsciLexerCPP_virtualbase_setPaper(void* self, QColor* c, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__readProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool readProperties(QSettings& qs, const QString& prefix) override {
		if (handle__readProperties == 0) {
			return QsciLexerCPP::readProperties(qs, prefix);
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

		bool callback_return_value = miqt_exec_callback_QsciLexerCPP_readProperties(this, handle__readProperties, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QsciLexerCPP_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__writeProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
		if (handle__writeProperties == 0) {
			return QsciLexerCPP::writeProperties(qs, prefix);
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

		bool callback_return_value = miqt_exec_callback_QsciLexerCPP_writeProperties(this, handle__writeProperties, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QsciLexerCPP_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QsciLexerCPP::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QsciLexerCPP_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool QsciLexerCPP_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QsciLexerCPP::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QsciLexerCPP_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QsciLexerCPP_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QsciLexerCPP::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QsciLexerCPP_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void QsciLexerCPP_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QsciLexerCPP::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QsciLexerCPP_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void QsciLexerCPP_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QsciLexerCPP::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QsciLexerCPP_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void QsciLexerCPP_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QsciLexerCPP::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciLexerCPP_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void QsciLexerCPP_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QsciLexerCPP::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciLexerCPP_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void QsciLexerCPP_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend bool QsciLexerCPP_protectedbase_readProperties(bool* _dynamic_cast_ok, void* self, QSettings* qs, struct miqt_string prefix);
	friend bool QsciLexerCPP_protectedbase_writeProperties(bool* _dynamic_cast_ok, const void* self, QSettings* qs, struct miqt_string prefix);
	friend QObject* QsciLexerCPP_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QsciLexerCPP_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QsciLexerCPP_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QsciLexerCPP_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QsciLexerCPP* QsciLexerCPP_new() {
	return new MiqtVirtualQsciLexerCPP();
}

QsciLexerCPP* QsciLexerCPP_new2(QObject* parent) {
	return new MiqtVirtualQsciLexerCPP(parent);
}

QsciLexerCPP* QsciLexerCPP_new3(QObject* parent, bool caseInsensitiveKeywords) {
	return new MiqtVirtualQsciLexerCPP(parent, caseInsensitiveKeywords);
}

void QsciLexerCPP_virtbase(QsciLexerCPP* src, QsciLexer** outptr_QsciLexer) {
	*outptr_QsciLexer = static_cast<QsciLexer*>(src);
}

QMetaObject* QsciLexerCPP_metaObject(const QsciLexerCPP* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerCPP_metacast(QsciLexerCPP* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerCPP_tr(const char* s) {
	QString _ret = QsciLexerCPP::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerCPP_trUtf8(const char* s) {
	QString _ret = QsciLexerCPP::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerCPP_language(const QsciLexerCPP* self) {
	return (const char*) self->language();
}

const char* QsciLexerCPP_lexer(const QsciLexerCPP* self) {
	return (const char*) self->lexer();
}

struct miqt_array /* of struct miqt_string */  QsciLexerCPP_autoCompletionWordSeparators(const QsciLexerCPP* self) {
	QStringList _ret = self->autoCompletionWordSeparators();
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

const char* QsciLexerCPP_blockEnd(const QsciLexerCPP* self) {
	return (const char*) self->blockEnd();
}

const char* QsciLexerCPP_blockStart(const QsciLexerCPP* self) {
	return (const char*) self->blockStart();
}

const char* QsciLexerCPP_blockStartKeyword(const QsciLexerCPP* self) {
	return (const char*) self->blockStartKeyword();
}

int QsciLexerCPP_braceStyle(const QsciLexerCPP* self) {
	return self->braceStyle();
}

const char* QsciLexerCPP_wordCharacters(const QsciLexerCPP* self) {
	return (const char*) self->wordCharacters();
}

QColor* QsciLexerCPP_defaultColor(const QsciLexerCPP* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerCPP_defaultEolFill(const QsciLexerCPP* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerCPP_defaultFont(const QsciLexerCPP* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerCPP_defaultPaper(const QsciLexerCPP* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerCPP_keywords(const QsciLexerCPP* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerCPP_description(const QsciLexerCPP* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerCPP_refreshProperties(QsciLexerCPP* self) {
	self->refreshProperties();
}

bool QsciLexerCPP_foldAtElse(const QsciLexerCPP* self) {
	return self->foldAtElse();
}

bool QsciLexerCPP_foldComments(const QsciLexerCPP* self) {
	return self->foldComments();
}

bool QsciLexerCPP_foldCompact(const QsciLexerCPP* self) {
	return self->foldCompact();
}

bool QsciLexerCPP_foldPreprocessor(const QsciLexerCPP* self) {
	return self->foldPreprocessor();
}

bool QsciLexerCPP_stylePreprocessor(const QsciLexerCPP* self) {
	return self->stylePreprocessor();
}

void QsciLexerCPP_setDollarsAllowed(QsciLexerCPP* self, bool allowed) {
	self->setDollarsAllowed(allowed);
}

bool QsciLexerCPP_dollarsAllowed(const QsciLexerCPP* self) {
	return self->dollarsAllowed();
}

void QsciLexerCPP_setHighlightTripleQuotedStrings(QsciLexerCPP* self, bool enabled) {
	self->setHighlightTripleQuotedStrings(enabled);
}

bool QsciLexerCPP_highlightTripleQuotedStrings(const QsciLexerCPP* self) {
	return self->highlightTripleQuotedStrings();
}

void QsciLexerCPP_setHighlightHashQuotedStrings(QsciLexerCPP* self, bool enabled) {
	self->setHighlightHashQuotedStrings(enabled);
}

bool QsciLexerCPP_highlightHashQuotedStrings(const QsciLexerCPP* self) {
	return self->highlightHashQuotedStrings();
}

void QsciLexerCPP_setHighlightBackQuotedStrings(QsciLexerCPP* self, bool enabled) {
	self->setHighlightBackQuotedStrings(enabled);
}

bool QsciLexerCPP_highlightBackQuotedStrings(const QsciLexerCPP* self) {
	return self->highlightBackQuotedStrings();
}

void QsciLexerCPP_setHighlightEscapeSequences(QsciLexerCPP* self, bool enabled) {
	self->setHighlightEscapeSequences(enabled);
}

bool QsciLexerCPP_highlightEscapeSequences(const QsciLexerCPP* self) {
	return self->highlightEscapeSequences();
}

void QsciLexerCPP_setVerbatimStringEscapeSequencesAllowed(QsciLexerCPP* self, bool allowed) {
	self->setVerbatimStringEscapeSequencesAllowed(allowed);
}

bool QsciLexerCPP_verbatimStringEscapeSequencesAllowed(const QsciLexerCPP* self) {
	return self->verbatimStringEscapeSequencesAllowed();
}

void QsciLexerCPP_setFoldAtElse(QsciLexerCPP* self, bool fold) {
	self->setFoldAtElse(fold);
}

void QsciLexerCPP_setFoldComments(QsciLexerCPP* self, bool fold) {
	self->setFoldComments(fold);
}

void QsciLexerCPP_setFoldCompact(QsciLexerCPP* self, bool fold) {
	self->setFoldCompact(fold);
}

void QsciLexerCPP_setFoldPreprocessor(QsciLexerCPP* self, bool fold) {
	self->setFoldPreprocessor(fold);
}

void QsciLexerCPP_setStylePreprocessor(QsciLexerCPP* self, bool style) {
	self->setStylePreprocessor(style);
}

struct miqt_string QsciLexerCPP_tr2(const char* s, const char* c) {
	QString _ret = QsciLexerCPP::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerCPP_tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerCPP::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerCPP_trUtf82(const char* s, const char* c) {
	QString _ret = QsciLexerCPP::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerCPP_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QsciLexerCPP::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerCPP_blockEnd1(const QsciLexerCPP* self, int* style) {
	return (const char*) self->blockEnd(static_cast<int*>(style));
}

const char* QsciLexerCPP_blockStart1(const QsciLexerCPP* self, int* style) {
	return (const char*) self->blockStart(static_cast<int*>(style));
}

const char* QsciLexerCPP_blockStartKeyword1(const QsciLexerCPP* self, int* style) {
	return (const char*) self->blockStartKeyword(static_cast<int*>(style));
}

bool QsciLexerCPP_override_virtual_setFoldAtElse(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setFoldAtElse = slot;
	return true;
}

void QsciLexerCPP_virtualbase_setFoldAtElse(void* self, bool fold) {

	( (MiqtVirtualQsciLexerCPP*)(self) )->MiqtVirtualQsciLexerCPP::setFoldAtElse(fold);

}

bool QsciLexerCPP_override_virtual_setFoldComments(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setFoldComments = slot;
	return true;
}

void QsciLexerCPP_virtualbase_setFoldComments(void* self, bool fold) {

	( (MiqtVirtualQsciLexerCPP*)(self) )->MiqtVirtualQsciLexerCPP::setFoldComments(fold);

}

bool QsciLexerCPP_override_virtual_setFoldCompact(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setFoldCompact = slot;
	return true;
}

void QsciLexerCPP_virtualbase_setFoldCompact(void* self, bool fold) {

	( (MiqtVirtualQsciLexerCPP*)(self) )->MiqtVirtualQsciLexerCPP::setFoldCompact(fold);

}

bool QsciLexerCPP_override_virtual_setFoldPreprocessor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setFoldPreprocessor = slot;
	return true;
}

void QsciLexerCPP_virtualbase_setFoldPreprocessor(void* self, bool fold) {

	( (MiqtVirtualQsciLexerCPP*)(self) )->MiqtVirtualQsciLexerCPP::setFoldPreprocessor(fold);

}

bool QsciLexerCPP_override_virtual_setStylePreprocessor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setStylePreprocessor = slot;
	return true;
}

void QsciLexerCPP_virtualbase_setStylePreprocessor(void* self, bool style) {

	( (MiqtVirtualQsciLexerCPP*)(self) )->MiqtVirtualQsciLexerCPP::setStylePreprocessor(style);

}

bool QsciLexerCPP_override_virtual_language(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__language = slot;
	return true;
}

bool QsciLexerCPP_override_virtual_lexer(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__lexer = slot;
	return true;
}

const char* QsciLexerCPP_virtualbase_lexer(const void* self) {

	return (const char*) ( (const MiqtVirtualQsciLexerCPP*)(self) )->MiqtVirtualQsciLexerCPP::lexer();

}

bool QsciLexerCPP_override_virtual_lexerId(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__lexerId = slot;
	return true;
}

int QsciLexerCPP_virtualbase_lexerId(const void* self) {

	return ( (const MiqtVirtualQsciLexerCPP*)(self) )->MiqtVirtualQsciLexerCPP::lexerId();

}

bool QsciLexerCPP_override_virtual_autoCompletionFillups(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__autoCompletionFillups = slot;
	return true;
}

const char* QsciLexerCPP_virtualbase_autoCompletionFillups(const void* self) {

	return (const char*) ( (const MiqtVirtualQsciLexerCPP*)(self) )->MiqtVirtualQsciLexerCPP::autoCompletionFillups();

}

bool QsciLexerCPP_override_virtual_autoCompletionWordSeparators(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__autoCompletionWordSeparators = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QsciLexerCPP_virtualbase_autoCompletionWordSeparators(const void* self) {

	QStringList _ret = ( (const MiqtVirtualQsciLexerCPP*)(self) )->MiqtVirtualQsciLexerCPP::autoCompletionWordSeparators();
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

bool QsciLexerCPP_override_virtual_blockEnd(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__blockEnd = slot;
	return true;
}

const char* QsciLexerCPP_virtualbase_blockEnd(const void* self, int* style) {

	return (const char*) ( (const MiqtVirtualQsciLexerCPP*)(self) )->MiqtVirtualQsciLexerCPP::blockEnd(static_cast<int*>(style));

}

bool QsciLexerCPP_override_virtual_blockLookback(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__blockLookback = slot;
	return true;
}

int QsciLexerCPP_virtualbase_blockLookback(const void* self) {

	return ( (const MiqtVirtualQsciLexerCPP*)(self) )->MiqtVirtualQsciLexerCPP::blockLookback();

}

bool QsciLexerCPP_override_virtual_blockStart(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__blockStart = slot;
	return true;
}

const char* QsciLexerCPP_virtualbase_blockStart(const void* self, int* style) {

	return (const char*) ( (const MiqtVirtualQsciLexerCPP*)(self) )->MiqtVirtualQsciLexerCPP::blockStart(static_cast<int*>(style));

}

bool QsciLexerCPP_override_virtual_blockStartKeyword(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__blockStartKeyword = slot;
	return true;
}

const char* QsciLexerCPP_virtualbase_blockStartKeyword(const void* self, int* style) {

	return (const char*) ( (const MiqtVirtualQsciLexerCPP*)(self) )->MiqtVirtualQsciLexerCPP::blockStartKeyword(static_cast<int*>(style));

}

bool QsciLexerCPP_override_virtual_braceStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__braceStyle = slot;
	return true;
}

int QsciLexerCPP_virtualbase_braceStyle(const void* self) {

	return ( (const MiqtVirtualQsciLexerCPP*)(self) )->MiqtVirtualQsciLexerCPP::braceStyle();

}

bool QsciLexerCPP_override_virtual_caseSensitive(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__caseSensitive = slot;
	return true;
}

bool QsciLexerCPP_virtualbase_caseSensitive(const void* self) {

	return ( (const MiqtVirtualQsciLexerCPP*)(self) )->MiqtVirtualQsciLexerCPP::caseSensitive();

}

bool QsciLexerCPP_override_virtual_color(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__color = slot;
	return true;
}

QColor* QsciLexerCPP_virtualbase_color(const void* self, int style) {

	return new QColor(( (const MiqtVirtualQsciLexerCPP*)(self) )->MiqtVirtualQsciLexerCPP::color(static_cast<int>(style)));

}

bool QsciLexerCPP_override_virtual_eolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eolFill = slot;
	return true;
}

bool QsciLexerCPP_virtualbase_eolFill(const void* self, int style) {

	return ( (const MiqtVirtualQsciLexerCPP*)(self) )->MiqtVirtualQsciLexerCPP::eolFill(static_cast<int>(style));

}

bool QsciLexerCPP_override_virtual_font(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__font = slot;
	return true;
}

QFont* QsciLexerCPP_virtualbase_font(const void* self, int style) {

	return new QFont(( (const MiqtVirtualQsciLexerCPP*)(self) )->MiqtVirtualQsciLexerCPP::font(static_cast<int>(style)));

}

bool QsciLexerCPP_override_virtual_indentationGuideView(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__indentationGuideView = slot;
	return true;
}

int QsciLexerCPP_virtualbase_indentationGuideView(const void* self) {

	return ( (const MiqtVirtualQsciLexerCPP*)(self) )->MiqtVirtualQsciLexerCPP::indentationGuideView();

}

bool QsciLexerCPP_override_virtual_keywords(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keywords = slot;
	return true;
}

const char* QsciLexerCPP_virtualbase_keywords(const void* self, int set) {

	return (const char*) ( (const MiqtVirtualQsciLexerCPP*)(self) )->MiqtVirtualQsciLexerCPP::keywords(static_cast<int>(set));

}

bool QsciLexerCPP_override_virtual_defaultStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__defaultStyle = slot;
	return true;
}

int QsciLexerCPP_virtualbase_defaultStyle(const void* self) {

	return ( (const MiqtVirtualQsciLexerCPP*)(self) )->MiqtVirtualQsciLexerCPP::defaultStyle();

}

bool QsciLexerCPP_override_virtual_description(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__description = slot;
	return true;
}

bool QsciLexerCPP_override_virtual_paper(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paper = slot;
	return true;
}

QColor* QsciLexerCPP_virtualbase_paper(const void* self, int style) {

	return new QColor(( (const MiqtVirtualQsciLexerCPP*)(self) )->MiqtVirtualQsciLexerCPP::paper(static_cast<int>(style)));

}

bool QsciLexerCPP_override_virtual_defaultColorWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__defaultColorWithStyle = slot;
	return true;
}

QColor* QsciLexerCPP_virtualbase_defaultColorWithStyle(const void* self, int style) {

	return new QColor(( (const MiqtVirtualQsciLexerCPP*)(self) )->MiqtVirtualQsciLexerCPP::defaultColor(static_cast<int>(style)));

}

bool QsciLexerCPP_override_virtual_defaultEolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__defaultEolFill = slot;
	return true;
}

bool QsciLexerCPP_virtualbase_defaultEolFill(const void* self, int style) {

	return ( (const MiqtVirtualQsciLexerCPP*)(self) )->MiqtVirtualQsciLexerCPP::defaultEolFill(static_cast<int>(style));

}

bool QsciLexerCPP_override_virtual_defaultFontWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__defaultFontWithStyle = slot;
	return true;
}

QFont* QsciLexerCPP_virtualbase_defaultFontWithStyle(const void* self, int style) {

	return new QFont(( (const MiqtVirtualQsciLexerCPP*)(self) )->MiqtVirtualQsciLexerCPP::defaultFont(static_cast<int>(style)));

}

bool QsciLexerCPP_override_virtual_defaultPaperWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__defaultPaperWithStyle = slot;
	return true;
}

QColor* QsciLexerCPP_virtualbase_defaultPaperWithStyle(const void* self, int style) {

	return new QColor(( (const MiqtVirtualQsciLexerCPP*)(self) )->MiqtVirtualQsciLexerCPP::defaultPaper(static_cast<int>(style)));

}

bool QsciLexerCPP_override_virtual_setEditor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setEditor = slot;
	return true;
}

void QsciLexerCPP_virtualbase_setEditor(void* self, QsciScintilla* editor) {

	( (MiqtVirtualQsciLexerCPP*)(self) )->MiqtVirtualQsciLexerCPP::setEditor(editor);

}

bool QsciLexerCPP_override_virtual_refreshProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__refreshProperties = slot;
	return true;
}

void QsciLexerCPP_virtualbase_refreshProperties(void* self) {

	( (MiqtVirtualQsciLexerCPP*)(self) )->MiqtVirtualQsciLexerCPP::refreshProperties();

}

bool QsciLexerCPP_override_virtual_styleBitsNeeded(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__styleBitsNeeded = slot;
	return true;
}

int QsciLexerCPP_virtualbase_styleBitsNeeded(const void* self) {

	return ( (const MiqtVirtualQsciLexerCPP*)(self) )->MiqtVirtualQsciLexerCPP::styleBitsNeeded();

}

bool QsciLexerCPP_override_virtual_wordCharacters(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wordCharacters = slot;
	return true;
}

const char* QsciLexerCPP_virtualbase_wordCharacters(const void* self) {

	return (const char*) ( (const MiqtVirtualQsciLexerCPP*)(self) )->MiqtVirtualQsciLexerCPP::wordCharacters();

}

bool QsciLexerCPP_override_virtual_setAutoIndentStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setAutoIndentStyle = slot;
	return true;
}

void QsciLexerCPP_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle) {

	( (MiqtVirtualQsciLexerCPP*)(self) )->MiqtVirtualQsciLexerCPP::setAutoIndentStyle(static_cast<int>(autoindentstyle));

}

bool QsciLexerCPP_override_virtual_setColor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setColor = slot;
	return true;
}

void QsciLexerCPP_virtualbase_setColor(void* self, QColor* c, int style) {

	( (MiqtVirtualQsciLexerCPP*)(self) )->MiqtVirtualQsciLexerCPP::setColor(*c, static_cast<int>(style));

}

bool QsciLexerCPP_override_virtual_setEolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setEolFill = slot;
	return true;
}

void QsciLexerCPP_virtualbase_setEolFill(void* self, bool eoffill, int style) {

	( (MiqtVirtualQsciLexerCPP*)(self) )->MiqtVirtualQsciLexerCPP::setEolFill(eoffill, static_cast<int>(style));

}

bool QsciLexerCPP_override_virtual_setFont(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setFont = slot;
	return true;
}

void QsciLexerCPP_virtualbase_setFont(void* self, QFont* f, int style) {

	( (MiqtVirtualQsciLexerCPP*)(self) )->MiqtVirtualQsciLexerCPP::setFont(*f, static_cast<int>(style));

}

bool QsciLexerCPP_override_virtual_setPaper(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setPaper = slot;
	return true;
}

void QsciLexerCPP_virtualbase_setPaper(void* self, QColor* c, int style) {

	( (MiqtVirtualQsciLexerCPP*)(self) )->MiqtVirtualQsciLexerCPP::setPaper(*c, static_cast<int>(style));

}

bool QsciLexerCPP_override_virtual_readProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__readProperties = slot;
	return true;
}

bool QsciLexerCPP_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

	return ( (MiqtVirtualQsciLexerCPP*)(self) )->MiqtVirtualQsciLexerCPP::readProperties(*qs, prefix_QString);

}

bool QsciLexerCPP_override_virtual_writeProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__writeProperties = slot;
	return true;
}

bool QsciLexerCPP_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

	return ( (const MiqtVirtualQsciLexerCPP*)(self) )->MiqtVirtualQsciLexerCPP::writeProperties(*qs, prefix_QString);

}

bool QsciLexerCPP_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QsciLexerCPP_virtualbase_event(void* self, QEvent* event) {

	return ( (MiqtVirtualQsciLexerCPP*)(self) )->MiqtVirtualQsciLexerCPP::event(event);

}

bool QsciLexerCPP_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QsciLexerCPP_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {

	return ( (MiqtVirtualQsciLexerCPP*)(self) )->MiqtVirtualQsciLexerCPP::eventFilter(watched, event);

}

bool QsciLexerCPP_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QsciLexerCPP_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (MiqtVirtualQsciLexerCPP*)(self) )->MiqtVirtualQsciLexerCPP::timerEvent(event);

}

bool QsciLexerCPP_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QsciLexerCPP_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (MiqtVirtualQsciLexerCPP*)(self) )->MiqtVirtualQsciLexerCPP::childEvent(event);

}

bool QsciLexerCPP_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QsciLexerCPP_virtualbase_customEvent(void* self, QEvent* event) {

	( (MiqtVirtualQsciLexerCPP*)(self) )->MiqtVirtualQsciLexerCPP::customEvent(event);

}

bool QsciLexerCPP_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QsciLexerCPP_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQsciLexerCPP*)(self) )->MiqtVirtualQsciLexerCPP::connectNotify(*signal);

}

bool QsciLexerCPP_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QsciLexerCPP_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQsciLexerCPP*)(self) )->MiqtVirtualQsciLexerCPP::disconnectNotify(*signal);

}

bool QsciLexerCPP_protectedbase_readProperties(bool* _dynamic_cast_ok, void* self, QSettings* qs, struct miqt_string prefix) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
			QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

	return self_cast->readProperties(*qs, prefix_QString);

}

bool QsciLexerCPP_protectedbase_writeProperties(bool* _dynamic_cast_ok, const void* self, QSettings* qs, struct miqt_string prefix) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
			QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

	return self_cast->writeProperties(*qs, prefix_QString);

}

QObject* QsciLexerCPP_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QsciLexerCPP_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QsciLexerCPP_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QsciLexerCPP_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QsciLexerCPP_delete(QsciLexerCPP* self) {
	delete self;
}

