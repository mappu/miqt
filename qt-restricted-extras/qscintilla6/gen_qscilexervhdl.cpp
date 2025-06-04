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
#include <qscilexervhdl.h>
#include "gen_qscilexervhdl.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QsciLexerVHDL_setFoldComments(QsciLexerVHDL*, intptr_t, bool);
void miqt_exec_callback_QsciLexerVHDL_setFoldCompact(QsciLexerVHDL*, intptr_t, bool);
void miqt_exec_callback_QsciLexerVHDL_setFoldAtElse(QsciLexerVHDL*, intptr_t, bool);
void miqt_exec_callback_QsciLexerVHDL_setFoldAtBegin(QsciLexerVHDL*, intptr_t, bool);
void miqt_exec_callback_QsciLexerVHDL_setFoldAtParenthesis(QsciLexerVHDL*, intptr_t, bool);
const char* miqt_exec_callback_QsciLexerVHDL_language(const QsciLexerVHDL*, intptr_t);
const char* miqt_exec_callback_QsciLexerVHDL_lexer(const QsciLexerVHDL*, intptr_t);
int miqt_exec_callback_QsciLexerVHDL_lexerId(const QsciLexerVHDL*, intptr_t);
const char* miqt_exec_callback_QsciLexerVHDL_autoCompletionFillups(const QsciLexerVHDL*, intptr_t);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QsciLexerVHDL_autoCompletionWordSeparators(const QsciLexerVHDL*, intptr_t);
const char* miqt_exec_callback_QsciLexerVHDL_blockEnd(const QsciLexerVHDL*, intptr_t, int*);
int miqt_exec_callback_QsciLexerVHDL_blockLookback(const QsciLexerVHDL*, intptr_t);
const char* miqt_exec_callback_QsciLexerVHDL_blockStart(const QsciLexerVHDL*, intptr_t, int*);
const char* miqt_exec_callback_QsciLexerVHDL_blockStartKeyword(const QsciLexerVHDL*, intptr_t, int*);
int miqt_exec_callback_QsciLexerVHDL_braceStyle(const QsciLexerVHDL*, intptr_t);
bool miqt_exec_callback_QsciLexerVHDL_caseSensitive(const QsciLexerVHDL*, intptr_t);
QColor* miqt_exec_callback_QsciLexerVHDL_color(const QsciLexerVHDL*, intptr_t, int);
bool miqt_exec_callback_QsciLexerVHDL_eolFill(const QsciLexerVHDL*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerVHDL_font(const QsciLexerVHDL*, intptr_t, int);
int miqt_exec_callback_QsciLexerVHDL_indentationGuideView(const QsciLexerVHDL*, intptr_t);
const char* miqt_exec_callback_QsciLexerVHDL_keywords(const QsciLexerVHDL*, intptr_t, int);
int miqt_exec_callback_QsciLexerVHDL_defaultStyle(const QsciLexerVHDL*, intptr_t);
struct miqt_string miqt_exec_callback_QsciLexerVHDL_description(const QsciLexerVHDL*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerVHDL_paper(const QsciLexerVHDL*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerVHDL_defaultColorWithStyle(const QsciLexerVHDL*, intptr_t, int);
bool miqt_exec_callback_QsciLexerVHDL_defaultEolFill(const QsciLexerVHDL*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerVHDL_defaultFontWithStyle(const QsciLexerVHDL*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerVHDL_defaultPaperWithStyle(const QsciLexerVHDL*, intptr_t, int);
void miqt_exec_callback_QsciLexerVHDL_setEditor(QsciLexerVHDL*, intptr_t, QsciScintilla*);
void miqt_exec_callback_QsciLexerVHDL_refreshProperties(QsciLexerVHDL*, intptr_t);
int miqt_exec_callback_QsciLexerVHDL_styleBitsNeeded(const QsciLexerVHDL*, intptr_t);
const char* miqt_exec_callback_QsciLexerVHDL_wordCharacters(const QsciLexerVHDL*, intptr_t);
void miqt_exec_callback_QsciLexerVHDL_setAutoIndentStyle(QsciLexerVHDL*, intptr_t, int);
void miqt_exec_callback_QsciLexerVHDL_setColor(QsciLexerVHDL*, intptr_t, QColor*, int);
void miqt_exec_callback_QsciLexerVHDL_setEolFill(QsciLexerVHDL*, intptr_t, bool, int);
void miqt_exec_callback_QsciLexerVHDL_setFont(QsciLexerVHDL*, intptr_t, QFont*, int);
void miqt_exec_callback_QsciLexerVHDL_setPaper(QsciLexerVHDL*, intptr_t, QColor*, int);
bool miqt_exec_callback_QsciLexerVHDL_readProperties(QsciLexerVHDL*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerVHDL_writeProperties(const QsciLexerVHDL*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerVHDL_event(QsciLexerVHDL*, intptr_t, QEvent*);
bool miqt_exec_callback_QsciLexerVHDL_eventFilter(QsciLexerVHDL*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QsciLexerVHDL_timerEvent(QsciLexerVHDL*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QsciLexerVHDL_childEvent(QsciLexerVHDL*, intptr_t, QChildEvent*);
void miqt_exec_callback_QsciLexerVHDL_customEvent(QsciLexerVHDL*, intptr_t, QEvent*);
void miqt_exec_callback_QsciLexerVHDL_connectNotify(QsciLexerVHDL*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QsciLexerVHDL_disconnectNotify(QsciLexerVHDL*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciLexerVHDL final : public QsciLexerVHDL {
public:

	MiqtVirtualQsciLexerVHDL(): QsciLexerVHDL() {}
	MiqtVirtualQsciLexerVHDL(QObject* parent): QsciLexerVHDL(parent) {}

	virtual ~MiqtVirtualQsciLexerVHDL() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setFoldComments = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldComments(bool fold) override {
		if (handle__setFoldComments == 0) {
			QsciLexerVHDL::setFoldComments(fold);
			return;
		}

		bool sigval1 = fold;
		miqt_exec_callback_QsciLexerVHDL_setFoldComments(this, handle__setFoldComments, sigval1);

	}

	friend void QsciLexerVHDL_virtualbase_setFoldComments(void* self, bool fold);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setFoldCompact = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldCompact(bool fold) override {
		if (handle__setFoldCompact == 0) {
			QsciLexerVHDL::setFoldCompact(fold);
			return;
		}

		bool sigval1 = fold;
		miqt_exec_callback_QsciLexerVHDL_setFoldCompact(this, handle__setFoldCompact, sigval1);

	}

	friend void QsciLexerVHDL_virtualbase_setFoldCompact(void* self, bool fold);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setFoldAtElse = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldAtElse(bool fold) override {
		if (handle__setFoldAtElse == 0) {
			QsciLexerVHDL::setFoldAtElse(fold);
			return;
		}

		bool sigval1 = fold;
		miqt_exec_callback_QsciLexerVHDL_setFoldAtElse(this, handle__setFoldAtElse, sigval1);

	}

	friend void QsciLexerVHDL_virtualbase_setFoldAtElse(void* self, bool fold);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setFoldAtBegin = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldAtBegin(bool fold) override {
		if (handle__setFoldAtBegin == 0) {
			QsciLexerVHDL::setFoldAtBegin(fold);
			return;
		}

		bool sigval1 = fold;
		miqt_exec_callback_QsciLexerVHDL_setFoldAtBegin(this, handle__setFoldAtBegin, sigval1);

	}

	friend void QsciLexerVHDL_virtualbase_setFoldAtBegin(void* self, bool fold);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setFoldAtParenthesis = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldAtParenthesis(bool fold) override {
		if (handle__setFoldAtParenthesis == 0) {
			QsciLexerVHDL::setFoldAtParenthesis(fold);
			return;
		}

		bool sigval1 = fold;
		miqt_exec_callback_QsciLexerVHDL_setFoldAtParenthesis(this, handle__setFoldAtParenthesis, sigval1);

	}

	friend void QsciLexerVHDL_virtualbase_setFoldAtParenthesis(void* self, bool fold);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__language = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* language() const override {
		if (handle__language == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerVHDL_language(this, handle__language);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__lexer = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* lexer() const override {
		if (handle__lexer == 0) {
			return QsciLexerVHDL::lexer();
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerVHDL_lexer(this, handle__lexer);
		return callback_return_value;
	}

	friend const char* QsciLexerVHDL_virtualbase_lexer(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__lexerId = 0;

	// Subclass to allow providing a Go implementation
	virtual int lexerId() const override {
		if (handle__lexerId == 0) {
			return QsciLexerVHDL::lexerId();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerVHDL_lexerId(this, handle__lexerId);
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerVHDL_virtualbase_lexerId(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__autoCompletionFillups = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* autoCompletionFillups() const override {
		if (handle__autoCompletionFillups == 0) {
			return QsciLexerVHDL::autoCompletionFillups();
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerVHDL_autoCompletionFillups(this, handle__autoCompletionFillups);
		return callback_return_value;
	}

	friend const char* QsciLexerVHDL_virtualbase_autoCompletionFillups(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__autoCompletionWordSeparators = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList autoCompletionWordSeparators() const override {
		if (handle__autoCompletionWordSeparators == 0) {
			return QsciLexerVHDL::autoCompletionWordSeparators();
		}

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QsciLexerVHDL_autoCompletionWordSeparators(this, handle__autoCompletionWordSeparators);
		QStringList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		struct miqt_string* callback_return_value_arr = static_cast<struct miqt_string*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QString callback_return_value_arr_i_QString = QString::fromUtf8(callback_return_value_arr[i].data, callback_return_value_arr[i].len);
			callback_return_value_QList.push_back(callback_return_value_arr_i_QString);
		}
		return callback_return_value_QList;
	}

	friend struct miqt_array /* of struct miqt_string */  QsciLexerVHDL_virtualbase_autoCompletionWordSeparators(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockEnd = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockEnd(int* style) const override {
		if (handle__blockEnd == 0) {
			return QsciLexerVHDL::blockEnd(style);
		}

		int* sigval1 = style;
		const char* callback_return_value = miqt_exec_callback_QsciLexerVHDL_blockEnd(this, handle__blockEnd, sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerVHDL_virtualbase_blockEnd(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockLookback = 0;

	// Subclass to allow providing a Go implementation
	virtual int blockLookback() const override {
		if (handle__blockLookback == 0) {
			return QsciLexerVHDL::blockLookback();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerVHDL_blockLookback(this, handle__blockLookback);
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerVHDL_virtualbase_blockLookback(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockStart = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStart(int* style) const override {
		if (handle__blockStart == 0) {
			return QsciLexerVHDL::blockStart(style);
		}

		int* sigval1 = style;
		const char* callback_return_value = miqt_exec_callback_QsciLexerVHDL_blockStart(this, handle__blockStart, sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerVHDL_virtualbase_blockStart(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockStartKeyword = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStartKeyword(int* style) const override {
		if (handle__blockStartKeyword == 0) {
			return QsciLexerVHDL::blockStartKeyword(style);
		}

		int* sigval1 = style;
		const char* callback_return_value = miqt_exec_callback_QsciLexerVHDL_blockStartKeyword(this, handle__blockStartKeyword, sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerVHDL_virtualbase_blockStartKeyword(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__braceStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int braceStyle() const override {
		if (handle__braceStyle == 0) {
			return QsciLexerVHDL::braceStyle();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerVHDL_braceStyle(this, handle__braceStyle);
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerVHDL_virtualbase_braceStyle(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__caseSensitive = 0;

	// Subclass to allow providing a Go implementation
	virtual bool caseSensitive() const override {
		if (handle__caseSensitive == 0) {
			return QsciLexerVHDL::caseSensitive();
		}

		bool callback_return_value = miqt_exec_callback_QsciLexerVHDL_caseSensitive(this, handle__caseSensitive);
		return callback_return_value;
	}

	friend bool QsciLexerVHDL_virtualbase_caseSensitive(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__color = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor color(int style) const override {
		if (handle__color == 0) {
			return QsciLexerVHDL::color(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerVHDL_color(this, handle__color, sigval1);
		return *callback_return_value;
	}

	friend QColor* QsciLexerVHDL_virtualbase_color(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eolFill(int style) const override {
		if (handle__eolFill == 0) {
			return QsciLexerVHDL::eolFill(style);
		}

		int sigval1 = style;
		bool callback_return_value = miqt_exec_callback_QsciLexerVHDL_eolFill(this, handle__eolFill, sigval1);
		return callback_return_value;
	}

	friend bool QsciLexerVHDL_virtualbase_eolFill(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__font = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont font(int style) const override {
		if (handle__font == 0) {
			return QsciLexerVHDL::font(style);
		}

		int sigval1 = style;
		QFont* callback_return_value = miqt_exec_callback_QsciLexerVHDL_font(this, handle__font, sigval1);
		return *callback_return_value;
	}

	friend QFont* QsciLexerVHDL_virtualbase_font(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__indentationGuideView = 0;

	// Subclass to allow providing a Go implementation
	virtual int indentationGuideView() const override {
		if (handle__indentationGuideView == 0) {
			return QsciLexerVHDL::indentationGuideView();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerVHDL_indentationGuideView(this, handle__indentationGuideView);
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerVHDL_virtualbase_indentationGuideView(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keywords = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* keywords(int set) const override {
		if (handle__keywords == 0) {
			return QsciLexerVHDL::keywords(set);
		}

		int sigval1 = set;
		const char* callback_return_value = miqt_exec_callback_QsciLexerVHDL_keywords(this, handle__keywords, sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerVHDL_virtualbase_keywords(const void* self, int set);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int defaultStyle() const override {
		if (handle__defaultStyle == 0) {
			return QsciLexerVHDL::defaultStyle();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerVHDL_defaultStyle(this, handle__defaultStyle);
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerVHDL_virtualbase_defaultStyle(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__description = 0;

	// Subclass to allow providing a Go implementation
	virtual QString description(int style) const override {
		if (handle__description == 0) {
			return QString(); // Pure virtual, there is no base we can call
		}

		int sigval1 = style;
		struct miqt_string callback_return_value = miqt_exec_callback_QsciLexerVHDL_description(this, handle__description, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paper = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor paper(int style) const override {
		if (handle__paper == 0) {
			return QsciLexerVHDL::paper(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerVHDL_paper(this, handle__paper, sigval1);
		return *callback_return_value;
	}

	friend QColor* QsciLexerVHDL_virtualbase_paper(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultColorWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultColor(int style) const override {
		if (handle__defaultColorWithStyle == 0) {
			return QsciLexerVHDL::defaultColor(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerVHDL_defaultColorWithStyle(this, handle__defaultColorWithStyle, sigval1);
		return *callback_return_value;
	}

	friend QColor* QsciLexerVHDL_virtualbase_defaultColorWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool defaultEolFill(int style) const override {
		if (handle__defaultEolFill == 0) {
			return QsciLexerVHDL::defaultEolFill(style);
		}

		int sigval1 = style;
		bool callback_return_value = miqt_exec_callback_QsciLexerVHDL_defaultEolFill(this, handle__defaultEolFill, sigval1);
		return callback_return_value;
	}

	friend bool QsciLexerVHDL_virtualbase_defaultEolFill(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultFontWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont defaultFont(int style) const override {
		if (handle__defaultFontWithStyle == 0) {
			return QsciLexerVHDL::defaultFont(style);
		}

		int sigval1 = style;
		QFont* callback_return_value = miqt_exec_callback_QsciLexerVHDL_defaultFontWithStyle(this, handle__defaultFontWithStyle, sigval1);
		return *callback_return_value;
	}

	friend QFont* QsciLexerVHDL_virtualbase_defaultFontWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultPaperWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultPaper(int style) const override {
		if (handle__defaultPaperWithStyle == 0) {
			return QsciLexerVHDL::defaultPaper(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerVHDL_defaultPaperWithStyle(this, handle__defaultPaperWithStyle, sigval1);
		return *callback_return_value;
	}

	friend QColor* QsciLexerVHDL_virtualbase_defaultPaperWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEditor(QsciScintilla* editor) override {
		if (handle__setEditor == 0) {
			QsciLexerVHDL::setEditor(editor);
			return;
		}

		QsciScintilla* sigval1 = editor;
		miqt_exec_callback_QsciLexerVHDL_setEditor(this, handle__setEditor, sigval1);

	}

	friend void QsciLexerVHDL_virtualbase_setEditor(void* self, QsciScintilla* editor);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__refreshProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual void refreshProperties() override {
		if (handle__refreshProperties == 0) {
			QsciLexerVHDL::refreshProperties();
			return;
		}

		miqt_exec_callback_QsciLexerVHDL_refreshProperties(this, handle__refreshProperties);

	}

	friend void QsciLexerVHDL_virtualbase_refreshProperties(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__styleBitsNeeded = 0;

	// Subclass to allow providing a Go implementation
	virtual int styleBitsNeeded() const override {
		if (handle__styleBitsNeeded == 0) {
			return QsciLexerVHDL::styleBitsNeeded();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerVHDL_styleBitsNeeded(this, handle__styleBitsNeeded);
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerVHDL_virtualbase_styleBitsNeeded(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wordCharacters = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* wordCharacters() const override {
		if (handle__wordCharacters == 0) {
			return QsciLexerVHDL::wordCharacters();
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerVHDL_wordCharacters(this, handle__wordCharacters);
		return callback_return_value;
	}

	friend const char* QsciLexerVHDL_virtualbase_wordCharacters(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAutoIndentStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAutoIndentStyle(int autoindentstyle) override {
		if (handle__setAutoIndentStyle == 0) {
			QsciLexerVHDL::setAutoIndentStyle(autoindentstyle);
			return;
		}

		int sigval1 = autoindentstyle;
		miqt_exec_callback_QsciLexerVHDL_setAutoIndentStyle(this, handle__setAutoIndentStyle, sigval1);

	}

	friend void QsciLexerVHDL_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setColor(const QColor& c, int style) override {
		if (handle__setColor == 0) {
			QsciLexerVHDL::setColor(c, style);
			return;
		}

		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;
		miqt_exec_callback_QsciLexerVHDL_setColor(this, handle__setColor, sigval1, sigval2);

	}

	friend void QsciLexerVHDL_virtualbase_setColor(void* self, QColor* c, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEolFill(bool eoffill, int style) override {
		if (handle__setEolFill == 0) {
			QsciLexerVHDL::setEolFill(eoffill, style);
			return;
		}

		bool sigval1 = eoffill;
		int sigval2 = style;
		miqt_exec_callback_QsciLexerVHDL_setEolFill(this, handle__setEolFill, sigval1, sigval2);

	}

	friend void QsciLexerVHDL_virtualbase_setEolFill(void* self, bool eoffill, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setFont = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFont(const QFont& f, int style) override {
		if (handle__setFont == 0) {
			QsciLexerVHDL::setFont(f, style);
			return;
		}

		const QFont& f_ret = f;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&f_ret);
		int sigval2 = style;
		miqt_exec_callback_QsciLexerVHDL_setFont(this, handle__setFont, sigval1, sigval2);

	}

	friend void QsciLexerVHDL_virtualbase_setFont(void* self, QFont* f, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setPaper = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPaper(const QColor& c, int style) override {
		if (handle__setPaper == 0) {
			QsciLexerVHDL::setPaper(c, style);
			return;
		}

		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;
		miqt_exec_callback_QsciLexerVHDL_setPaper(this, handle__setPaper, sigval1, sigval2);

	}

	friend void QsciLexerVHDL_virtualbase_setPaper(void* self, QColor* c, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__readProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool readProperties(QSettings& qs, const QString& prefix) override {
		if (handle__readProperties == 0) {
			return QsciLexerVHDL::readProperties(qs, prefix);
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
		bool callback_return_value = miqt_exec_callback_QsciLexerVHDL_readProperties(this, handle__readProperties, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QsciLexerVHDL_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__writeProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
		if (handle__writeProperties == 0) {
			return QsciLexerVHDL::writeProperties(qs, prefix);
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
		bool callback_return_value = miqt_exec_callback_QsciLexerVHDL_writeProperties(this, handle__writeProperties, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QsciLexerVHDL_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QsciLexerVHDL::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QsciLexerVHDL_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QsciLexerVHDL_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QsciLexerVHDL::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QsciLexerVHDL_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QsciLexerVHDL_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QsciLexerVHDL::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QsciLexerVHDL_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QsciLexerVHDL_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QsciLexerVHDL::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QsciLexerVHDL_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QsciLexerVHDL_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QsciLexerVHDL::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QsciLexerVHDL_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QsciLexerVHDL_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QsciLexerVHDL::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QsciLexerVHDL_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QsciLexerVHDL_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QsciLexerVHDL::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QsciLexerVHDL_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QsciLexerVHDL_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend bool QsciLexerVHDL_protectedbase_readProperties(bool* _dynamic_cast_ok, void* self, QSettings* qs, struct miqt_string prefix);
	friend bool QsciLexerVHDL_protectedbase_writeProperties(bool* _dynamic_cast_ok, const void* self, QSettings* qs, struct miqt_string prefix);
	friend QObject* QsciLexerVHDL_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QsciLexerVHDL_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QsciLexerVHDL_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QsciLexerVHDL_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QsciLexerVHDL* QsciLexerVHDL_new() {
	return new (std::nothrow) MiqtVirtualQsciLexerVHDL();
}

QsciLexerVHDL* QsciLexerVHDL_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQsciLexerVHDL(parent);
}

void QsciLexerVHDL_virtbase(QsciLexerVHDL* src, QsciLexer** outptr_QsciLexer) {
	*outptr_QsciLexer = static_cast<QsciLexer*>(src);
}

QMetaObject* QsciLexerVHDL_metaObject(const QsciLexerVHDL* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerVHDL_metacast(QsciLexerVHDL* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerVHDL_tr(const char* s) {
	QString _ret = QsciLexerVHDL::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerVHDL_language(const QsciLexerVHDL* self) {
	return (const char*) self->language();
}

const char* QsciLexerVHDL_lexer(const QsciLexerVHDL* self) {
	return (const char*) self->lexer();
}

int QsciLexerVHDL_braceStyle(const QsciLexerVHDL* self) {
	return self->braceStyle();
}

QColor* QsciLexerVHDL_defaultColor(const QsciLexerVHDL* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerVHDL_defaultEolFill(const QsciLexerVHDL* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerVHDL_defaultFont(const QsciLexerVHDL* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerVHDL_defaultPaper(const QsciLexerVHDL* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerVHDL_keywords(const QsciLexerVHDL* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerVHDL_description(const QsciLexerVHDL* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerVHDL_refreshProperties(QsciLexerVHDL* self) {
	self->refreshProperties();
}

bool QsciLexerVHDL_foldComments(const QsciLexerVHDL* self) {
	return self->foldComments();
}

bool QsciLexerVHDL_foldCompact(const QsciLexerVHDL* self) {
	return self->foldCompact();
}

bool QsciLexerVHDL_foldAtElse(const QsciLexerVHDL* self) {
	return self->foldAtElse();
}

bool QsciLexerVHDL_foldAtBegin(const QsciLexerVHDL* self) {
	return self->foldAtBegin();
}

bool QsciLexerVHDL_foldAtParenthesis(const QsciLexerVHDL* self) {
	return self->foldAtParenthesis();
}

void QsciLexerVHDL_setFoldComments(QsciLexerVHDL* self, bool fold) {
	self->setFoldComments(fold);
}

void QsciLexerVHDL_setFoldCompact(QsciLexerVHDL* self, bool fold) {
	self->setFoldCompact(fold);
}

void QsciLexerVHDL_setFoldAtElse(QsciLexerVHDL* self, bool fold) {
	self->setFoldAtElse(fold);
}

void QsciLexerVHDL_setFoldAtBegin(QsciLexerVHDL* self, bool fold) {
	self->setFoldAtBegin(fold);
}

void QsciLexerVHDL_setFoldAtParenthesis(QsciLexerVHDL* self, bool fold) {
	self->setFoldAtParenthesis(fold);
}

struct miqt_string QsciLexerVHDL_tr2(const char* s, const char* c) {
	QString _ret = QsciLexerVHDL::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerVHDL_tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerVHDL::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QsciLexerVHDL_override_virtual_setFoldComments(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setFoldComments = slot;
	return true;
}

void QsciLexerVHDL_virtualbase_setFoldComments(void* self, bool fold) {
	static_cast<MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::setFoldComments(fold);
}

bool QsciLexerVHDL_override_virtual_setFoldCompact(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setFoldCompact = slot;
	return true;
}

void QsciLexerVHDL_virtualbase_setFoldCompact(void* self, bool fold) {
	static_cast<MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::setFoldCompact(fold);
}

bool QsciLexerVHDL_override_virtual_setFoldAtElse(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setFoldAtElse = slot;
	return true;
}

void QsciLexerVHDL_virtualbase_setFoldAtElse(void* self, bool fold) {
	static_cast<MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::setFoldAtElse(fold);
}

bool QsciLexerVHDL_override_virtual_setFoldAtBegin(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setFoldAtBegin = slot;
	return true;
}

void QsciLexerVHDL_virtualbase_setFoldAtBegin(void* self, bool fold) {
	static_cast<MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::setFoldAtBegin(fold);
}

bool QsciLexerVHDL_override_virtual_setFoldAtParenthesis(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setFoldAtParenthesis = slot;
	return true;
}

void QsciLexerVHDL_virtualbase_setFoldAtParenthesis(void* self, bool fold) {
	static_cast<MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::setFoldAtParenthesis(fold);
}

bool QsciLexerVHDL_override_virtual_language(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__language = slot;
	return true;
}

bool QsciLexerVHDL_override_virtual_lexer(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__lexer = slot;
	return true;
}

const char* QsciLexerVHDL_virtualbase_lexer(const void* self) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::lexer();
}

bool QsciLexerVHDL_override_virtual_lexerId(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__lexerId = slot;
	return true;
}

int QsciLexerVHDL_virtualbase_lexerId(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::lexerId();
}

bool QsciLexerVHDL_override_virtual_autoCompletionFillups(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__autoCompletionFillups = slot;
	return true;
}

const char* QsciLexerVHDL_virtualbase_autoCompletionFillups(const void* self) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::autoCompletionFillups();
}

bool QsciLexerVHDL_override_virtual_autoCompletionWordSeparators(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__autoCompletionWordSeparators = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QsciLexerVHDL_virtualbase_autoCompletionWordSeparators(const void* self) {
	QStringList _ret = static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::autoCompletionWordSeparators();
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

bool QsciLexerVHDL_override_virtual_blockEnd(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockEnd = slot;
	return true;
}

const char* QsciLexerVHDL_virtualbase_blockEnd(const void* self, int* style) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::blockEnd(static_cast<int*>(style));
}

bool QsciLexerVHDL_override_virtual_blockLookback(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockLookback = slot;
	return true;
}

int QsciLexerVHDL_virtualbase_blockLookback(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::blockLookback();
}

bool QsciLexerVHDL_override_virtual_blockStart(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockStart = slot;
	return true;
}

const char* QsciLexerVHDL_virtualbase_blockStart(const void* self, int* style) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::blockStart(static_cast<int*>(style));
}

bool QsciLexerVHDL_override_virtual_blockStartKeyword(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockStartKeyword = slot;
	return true;
}

const char* QsciLexerVHDL_virtualbase_blockStartKeyword(const void* self, int* style) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::blockStartKeyword(static_cast<int*>(style));
}

bool QsciLexerVHDL_override_virtual_braceStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__braceStyle = slot;
	return true;
}

int QsciLexerVHDL_virtualbase_braceStyle(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::braceStyle();
}

bool QsciLexerVHDL_override_virtual_caseSensitive(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__caseSensitive = slot;
	return true;
}

bool QsciLexerVHDL_virtualbase_caseSensitive(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::caseSensitive();
}

bool QsciLexerVHDL_override_virtual_color(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__color = slot;
	return true;
}

QColor* QsciLexerVHDL_virtualbase_color(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::color(static_cast<int>(style)));
}

bool QsciLexerVHDL_override_virtual_eolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eolFill = slot;
	return true;
}

bool QsciLexerVHDL_virtualbase_eolFill(const void* self, int style) {
	return static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::eolFill(static_cast<int>(style));
}

bool QsciLexerVHDL_override_virtual_font(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__font = slot;
	return true;
}

QFont* QsciLexerVHDL_virtualbase_font(const void* self, int style) {
	return new QFont(static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::font(static_cast<int>(style)));
}

bool QsciLexerVHDL_override_virtual_indentationGuideView(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__indentationGuideView = slot;
	return true;
}

int QsciLexerVHDL_virtualbase_indentationGuideView(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::indentationGuideView();
}

bool QsciLexerVHDL_override_virtual_keywords(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keywords = slot;
	return true;
}

const char* QsciLexerVHDL_virtualbase_keywords(const void* self, int set) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::keywords(static_cast<int>(set));
}

bool QsciLexerVHDL_override_virtual_defaultStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultStyle = slot;
	return true;
}

int QsciLexerVHDL_virtualbase_defaultStyle(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::defaultStyle();
}

bool QsciLexerVHDL_override_virtual_description(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__description = slot;
	return true;
}

bool QsciLexerVHDL_override_virtual_paper(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paper = slot;
	return true;
}

QColor* QsciLexerVHDL_virtualbase_paper(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::paper(static_cast<int>(style)));
}

bool QsciLexerVHDL_override_virtual_defaultColorWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultColorWithStyle = slot;
	return true;
}

QColor* QsciLexerVHDL_virtualbase_defaultColorWithStyle(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::defaultColor(static_cast<int>(style)));
}

bool QsciLexerVHDL_override_virtual_defaultEolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultEolFill = slot;
	return true;
}

bool QsciLexerVHDL_virtualbase_defaultEolFill(const void* self, int style) {
	return static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::defaultEolFill(static_cast<int>(style));
}

bool QsciLexerVHDL_override_virtual_defaultFontWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultFontWithStyle = slot;
	return true;
}

QFont* QsciLexerVHDL_virtualbase_defaultFontWithStyle(const void* self, int style) {
	return new QFont(static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::defaultFont(static_cast<int>(style)));
}

bool QsciLexerVHDL_override_virtual_defaultPaperWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultPaperWithStyle = slot;
	return true;
}

QColor* QsciLexerVHDL_virtualbase_defaultPaperWithStyle(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::defaultPaper(static_cast<int>(style)));
}

bool QsciLexerVHDL_override_virtual_setEditor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setEditor = slot;
	return true;
}

void QsciLexerVHDL_virtualbase_setEditor(void* self, QsciScintilla* editor) {
	static_cast<MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::setEditor(editor);
}

bool QsciLexerVHDL_override_virtual_refreshProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__refreshProperties = slot;
	return true;
}

void QsciLexerVHDL_virtualbase_refreshProperties(void* self) {
	static_cast<MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::refreshProperties();
}

bool QsciLexerVHDL_override_virtual_styleBitsNeeded(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__styleBitsNeeded = slot;
	return true;
}

int QsciLexerVHDL_virtualbase_styleBitsNeeded(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::styleBitsNeeded();
}

bool QsciLexerVHDL_override_virtual_wordCharacters(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wordCharacters = slot;
	return true;
}

const char* QsciLexerVHDL_virtualbase_wordCharacters(const void* self) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::wordCharacters();
}

bool QsciLexerVHDL_override_virtual_setAutoIndentStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setAutoIndentStyle = slot;
	return true;
}

void QsciLexerVHDL_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle) {
	static_cast<MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

bool QsciLexerVHDL_override_virtual_setColor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setColor = slot;
	return true;
}

void QsciLexerVHDL_virtualbase_setColor(void* self, QColor* c, int style) {
	static_cast<MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::setColor(*c, static_cast<int>(style));
}

bool QsciLexerVHDL_override_virtual_setEolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setEolFill = slot;
	return true;
}

void QsciLexerVHDL_virtualbase_setEolFill(void* self, bool eoffill, int style) {
	static_cast<MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::setEolFill(eoffill, static_cast<int>(style));
}

bool QsciLexerVHDL_override_virtual_setFont(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setFont = slot;
	return true;
}

void QsciLexerVHDL_virtualbase_setFont(void* self, QFont* f, int style) {
	static_cast<MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::setFont(*f, static_cast<int>(style));
}

bool QsciLexerVHDL_override_virtual_setPaper(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setPaper = slot;
	return true;
}

void QsciLexerVHDL_virtualbase_setPaper(void* self, QColor* c, int style) {
	static_cast<MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::setPaper(*c, static_cast<int>(style));
}

bool QsciLexerVHDL_override_virtual_readProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__readProperties = slot;
	return true;
}

bool QsciLexerVHDL_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return static_cast<MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::readProperties(*qs, prefix_QString);
}

bool QsciLexerVHDL_override_virtual_writeProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__writeProperties = slot;
	return true;
}

bool QsciLexerVHDL_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::writeProperties(*qs, prefix_QString);
}

bool QsciLexerVHDL_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QsciLexerVHDL_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::event(event);
}

bool QsciLexerVHDL_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QsciLexerVHDL_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::eventFilter(watched, event);
}

bool QsciLexerVHDL_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QsciLexerVHDL_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::timerEvent(event);
}

bool QsciLexerVHDL_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QsciLexerVHDL_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::childEvent(event);
}

bool QsciLexerVHDL_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QsciLexerVHDL_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::customEvent(event);
}

bool QsciLexerVHDL_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QsciLexerVHDL_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::connectNotify(*signal);
}

bool QsciLexerVHDL_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QsciLexerVHDL_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::disconnectNotify(*signal);
}

bool QsciLexerVHDL_protectedbase_readProperties(bool* _dynamic_cast_ok, void* self, QSettings* qs, struct miqt_string prefix) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return self_cast->readProperties(*qs, prefix_QString);
}

bool QsciLexerVHDL_protectedbase_writeProperties(bool* _dynamic_cast_ok, const void* self, QSettings* qs, struct miqt_string prefix) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return self_cast->writeProperties(*qs, prefix_QString);
}

QObject* QsciLexerVHDL_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QsciLexerVHDL_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QsciLexerVHDL_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QsciLexerVHDL_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QsciLexerVHDL_delete(QsciLexerVHDL* self) {
	delete self;
}

