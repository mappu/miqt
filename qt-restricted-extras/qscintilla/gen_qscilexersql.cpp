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
#include <qscilexersql.h>
#include "gen_qscilexersql.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QsciLexerSQL_setBackslashEscapes(QsciLexerSQL*, intptr_t, bool);
void miqt_exec_callback_QsciLexerSQL_setFoldComments(QsciLexerSQL*, intptr_t, bool);
void miqt_exec_callback_QsciLexerSQL_setFoldCompact(QsciLexerSQL*, intptr_t, bool);
const char* miqt_exec_callback_QsciLexerSQL_language(const QsciLexerSQL*, intptr_t);
const char* miqt_exec_callback_QsciLexerSQL_lexer(const QsciLexerSQL*, intptr_t);
int miqt_exec_callback_QsciLexerSQL_lexerId(const QsciLexerSQL*, intptr_t);
const char* miqt_exec_callback_QsciLexerSQL_autoCompletionFillups(const QsciLexerSQL*, intptr_t);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QsciLexerSQL_autoCompletionWordSeparators(const QsciLexerSQL*, intptr_t);
const char* miqt_exec_callback_QsciLexerSQL_blockEnd(const QsciLexerSQL*, intptr_t, int*);
int miqt_exec_callback_QsciLexerSQL_blockLookback(const QsciLexerSQL*, intptr_t);
const char* miqt_exec_callback_QsciLexerSQL_blockStart(const QsciLexerSQL*, intptr_t, int*);
const char* miqt_exec_callback_QsciLexerSQL_blockStartKeyword(const QsciLexerSQL*, intptr_t, int*);
int miqt_exec_callback_QsciLexerSQL_braceStyle(const QsciLexerSQL*, intptr_t);
bool miqt_exec_callback_QsciLexerSQL_caseSensitive(const QsciLexerSQL*, intptr_t);
QColor* miqt_exec_callback_QsciLexerSQL_color(const QsciLexerSQL*, intptr_t, int);
bool miqt_exec_callback_QsciLexerSQL_eolFill(const QsciLexerSQL*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerSQL_font(const QsciLexerSQL*, intptr_t, int);
int miqt_exec_callback_QsciLexerSQL_indentationGuideView(const QsciLexerSQL*, intptr_t);
const char* miqt_exec_callback_QsciLexerSQL_keywords(const QsciLexerSQL*, intptr_t, int);
int miqt_exec_callback_QsciLexerSQL_defaultStyle(const QsciLexerSQL*, intptr_t);
struct miqt_string miqt_exec_callback_QsciLexerSQL_description(const QsciLexerSQL*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerSQL_paper(const QsciLexerSQL*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerSQL_defaultColorWithStyle(const QsciLexerSQL*, intptr_t, int);
bool miqt_exec_callback_QsciLexerSQL_defaultEolFill(const QsciLexerSQL*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerSQL_defaultFontWithStyle(const QsciLexerSQL*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerSQL_defaultPaperWithStyle(const QsciLexerSQL*, intptr_t, int);
void miqt_exec_callback_QsciLexerSQL_setEditor(QsciLexerSQL*, intptr_t, QsciScintilla*);
void miqt_exec_callback_QsciLexerSQL_refreshProperties(QsciLexerSQL*, intptr_t);
int miqt_exec_callback_QsciLexerSQL_styleBitsNeeded(const QsciLexerSQL*, intptr_t);
const char* miqt_exec_callback_QsciLexerSQL_wordCharacters(const QsciLexerSQL*, intptr_t);
void miqt_exec_callback_QsciLexerSQL_setAutoIndentStyle(QsciLexerSQL*, intptr_t, int);
void miqt_exec_callback_QsciLexerSQL_setColor(QsciLexerSQL*, intptr_t, QColor*, int);
void miqt_exec_callback_QsciLexerSQL_setEolFill(QsciLexerSQL*, intptr_t, bool, int);
void miqt_exec_callback_QsciLexerSQL_setFont(QsciLexerSQL*, intptr_t, QFont*, int);
void miqt_exec_callback_QsciLexerSQL_setPaper(QsciLexerSQL*, intptr_t, QColor*, int);
bool miqt_exec_callback_QsciLexerSQL_readProperties(QsciLexerSQL*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerSQL_writeProperties(const QsciLexerSQL*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerSQL_event(QsciLexerSQL*, intptr_t, QEvent*);
bool miqt_exec_callback_QsciLexerSQL_eventFilter(QsciLexerSQL*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QsciLexerSQL_timerEvent(QsciLexerSQL*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QsciLexerSQL_childEvent(QsciLexerSQL*, intptr_t, QChildEvent*);
void miqt_exec_callback_QsciLexerSQL_customEvent(QsciLexerSQL*, intptr_t, QEvent*);
void miqt_exec_callback_QsciLexerSQL_connectNotify(QsciLexerSQL*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QsciLexerSQL_disconnectNotify(QsciLexerSQL*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciLexerSQL final : public QsciLexerSQL {
public:

	MiqtVirtualQsciLexerSQL(): QsciLexerSQL() {};
	MiqtVirtualQsciLexerSQL(QObject* parent): QsciLexerSQL(parent) {};

	virtual ~MiqtVirtualQsciLexerSQL() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setBackslashEscapes = 0;

	// Subclass to allow providing a Go implementation
	virtual void setBackslashEscapes(bool enable) override {
		if (handle__setBackslashEscapes == 0) {
			QsciLexerSQL::setBackslashEscapes(enable);
			return;
		}
		
		bool sigval1 = enable;

		miqt_exec_callback_QsciLexerSQL_setBackslashEscapes(this, handle__setBackslashEscapes, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setBackslashEscapes(bool enable) {

		QsciLexerSQL::setBackslashEscapes(enable);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setFoldComments = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldComments(bool fold) override {
		if (handle__setFoldComments == 0) {
			QsciLexerSQL::setFoldComments(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerSQL_setFoldComments(this, handle__setFoldComments, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setFoldComments(bool fold) {

		QsciLexerSQL::setFoldComments(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setFoldCompact = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldCompact(bool fold) override {
		if (handle__setFoldCompact == 0) {
			QsciLexerSQL::setFoldCompact(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerSQL_setFoldCompact(this, handle__setFoldCompact, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setFoldCompact(bool fold) {

		QsciLexerSQL::setFoldCompact(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__language = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* language() const override {
		if (handle__language == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerSQL_language(this, handle__language);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__lexer = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* lexer() const override {
		if (handle__lexer == 0) {
			return QsciLexerSQL::lexer();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerSQL_lexer(this, handle__lexer);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_lexer() const {

		return (const char*) QsciLexerSQL::lexer();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__lexerId = 0;

	// Subclass to allow providing a Go implementation
	virtual int lexerId() const override {
		if (handle__lexerId == 0) {
			return QsciLexerSQL::lexerId();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerSQL_lexerId(this, handle__lexerId);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_lexerId() const {

		return QsciLexerSQL::lexerId();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__autoCompletionFillups = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* autoCompletionFillups() const override {
		if (handle__autoCompletionFillups == 0) {
			return QsciLexerSQL::autoCompletionFillups();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerSQL_autoCompletionFillups(this, handle__autoCompletionFillups);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_autoCompletionFillups() const {

		return (const char*) QsciLexerSQL::autoCompletionFillups();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__autoCompletionWordSeparators = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList autoCompletionWordSeparators() const override {
		if (handle__autoCompletionWordSeparators == 0) {
			return QsciLexerSQL::autoCompletionWordSeparators();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QsciLexerSQL_autoCompletionWordSeparators(this, handle__autoCompletionWordSeparators);
		QStringList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		struct miqt_string* callback_return_value_arr = static_cast<struct miqt_string*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QString callback_return_value_arr_i_QString = QString::fromUtf8(callback_return_value_arr[i].data, callback_return_value_arr[i].len);
			callback_return_value_QList.push_back(callback_return_value_arr_i_QString);
		}

		return callback_return_value_QList;
	}

	// Wrapper to allow calling protected method
	struct miqt_array /* of struct miqt_string */  virtualbase_autoCompletionWordSeparators() const {

		QStringList _ret = QsciLexerSQL::autoCompletionWordSeparators();
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

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockEnd = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockEnd(int* style) const override {
		if (handle__blockEnd == 0) {
			return QsciLexerSQL::blockEnd(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerSQL_blockEnd(this, handle__blockEnd, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_blockEnd(int* style) const {

		return (const char*) QsciLexerSQL::blockEnd(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockLookback = 0;

	// Subclass to allow providing a Go implementation
	virtual int blockLookback() const override {
		if (handle__blockLookback == 0) {
			return QsciLexerSQL::blockLookback();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerSQL_blockLookback(this, handle__blockLookback);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_blockLookback() const {

		return QsciLexerSQL::blockLookback();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockStart = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStart(int* style) const override {
		if (handle__blockStart == 0) {
			return QsciLexerSQL::blockStart(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerSQL_blockStart(this, handle__blockStart, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_blockStart(int* style) const {

		return (const char*) QsciLexerSQL::blockStart(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockStartKeyword = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStartKeyword(int* style) const override {
		if (handle__blockStartKeyword == 0) {
			return QsciLexerSQL::blockStartKeyword(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerSQL_blockStartKeyword(this, handle__blockStartKeyword, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_blockStartKeyword(int* style) const {

		return (const char*) QsciLexerSQL::blockStartKeyword(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__braceStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int braceStyle() const override {
		if (handle__braceStyle == 0) {
			return QsciLexerSQL::braceStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerSQL_braceStyle(this, handle__braceStyle);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_braceStyle() const {

		return QsciLexerSQL::braceStyle();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__caseSensitive = 0;

	// Subclass to allow providing a Go implementation
	virtual bool caseSensitive() const override {
		if (handle__caseSensitive == 0) {
			return QsciLexerSQL::caseSensitive();
		}
		

		bool callback_return_value = miqt_exec_callback_QsciLexerSQL_caseSensitive(this, handle__caseSensitive);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_caseSensitive() const {

		return QsciLexerSQL::caseSensitive();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__color = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor color(int style) const override {
		if (handle__color == 0) {
			return QsciLexerSQL::color(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerSQL_color(this, handle__color, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_color(int style) const {

		return new QColor(QsciLexerSQL::color(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eolFill(int style) const override {
		if (handle__eolFill == 0) {
			return QsciLexerSQL::eolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexerSQL_eolFill(this, handle__eolFill, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eolFill(int style) const {

		return QsciLexerSQL::eolFill(static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__font = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont font(int style) const override {
		if (handle__font == 0) {
			return QsciLexerSQL::font(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexerSQL_font(this, handle__font, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QFont* virtualbase_font(int style) const {

		return new QFont(QsciLexerSQL::font(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__indentationGuideView = 0;

	// Subclass to allow providing a Go implementation
	virtual int indentationGuideView() const override {
		if (handle__indentationGuideView == 0) {
			return QsciLexerSQL::indentationGuideView();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerSQL_indentationGuideView(this, handle__indentationGuideView);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_indentationGuideView() const {

		return QsciLexerSQL::indentationGuideView();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keywords = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* keywords(int set) const override {
		if (handle__keywords == 0) {
			return QsciLexerSQL::keywords(set);
		}
		
		int sigval1 = set;

		const char* callback_return_value = miqt_exec_callback_QsciLexerSQL_keywords(this, handle__keywords, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_keywords(int set) const {

		return (const char*) QsciLexerSQL::keywords(static_cast<int>(set));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int defaultStyle() const override {
		if (handle__defaultStyle == 0) {
			return QsciLexerSQL::defaultStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerSQL_defaultStyle(this, handle__defaultStyle);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_defaultStyle() const {

		return QsciLexerSQL::defaultStyle();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__description = 0;

	// Subclass to allow providing a Go implementation
	virtual QString description(int style) const override {
		if (handle__description == 0) {
			return QString(); // Pure virtual, there is no base we can call
		}
		
		int sigval1 = style;

		struct miqt_string callback_return_value = miqt_exec_callback_QsciLexerSQL_description(this, handle__description, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paper = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor paper(int style) const override {
		if (handle__paper == 0) {
			return QsciLexerSQL::paper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerSQL_paper(this, handle__paper, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_paper(int style) const {

		return new QColor(QsciLexerSQL::paper(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultColorWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultColor(int style) const override {
		if (handle__defaultColorWithStyle == 0) {
			return QsciLexerSQL::defaultColor(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerSQL_defaultColorWithStyle(this, handle__defaultColorWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_defaultColorWithStyle(int style) const {

		return new QColor(QsciLexerSQL::defaultColor(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool defaultEolFill(int style) const override {
		if (handle__defaultEolFill == 0) {
			return QsciLexerSQL::defaultEolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexerSQL_defaultEolFill(this, handle__defaultEolFill, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_defaultEolFill(int style) const {

		return QsciLexerSQL::defaultEolFill(static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultFontWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont defaultFont(int style) const override {
		if (handle__defaultFontWithStyle == 0) {
			return QsciLexerSQL::defaultFont(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexerSQL_defaultFontWithStyle(this, handle__defaultFontWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QFont* virtualbase_defaultFontWithStyle(int style) const {

		return new QFont(QsciLexerSQL::defaultFont(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultPaperWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultPaper(int style) const override {
		if (handle__defaultPaperWithStyle == 0) {
			return QsciLexerSQL::defaultPaper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerSQL_defaultPaperWithStyle(this, handle__defaultPaperWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_defaultPaperWithStyle(int style) const {

		return new QColor(QsciLexerSQL::defaultPaper(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEditor(QsciScintilla* editor) override {
		if (handle__setEditor == 0) {
			QsciLexerSQL::setEditor(editor);
			return;
		}
		
		QsciScintilla* sigval1 = editor;

		miqt_exec_callback_QsciLexerSQL_setEditor(this, handle__setEditor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setEditor(QsciScintilla* editor) {

		QsciLexerSQL::setEditor(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__refreshProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual void refreshProperties() override {
		if (handle__refreshProperties == 0) {
			QsciLexerSQL::refreshProperties();
			return;
		}
		

		miqt_exec_callback_QsciLexerSQL_refreshProperties(this, handle__refreshProperties);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_refreshProperties() {

		QsciLexerSQL::refreshProperties();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__styleBitsNeeded = 0;

	// Subclass to allow providing a Go implementation
	virtual int styleBitsNeeded() const override {
		if (handle__styleBitsNeeded == 0) {
			return QsciLexerSQL::styleBitsNeeded();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerSQL_styleBitsNeeded(this, handle__styleBitsNeeded);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_styleBitsNeeded() const {

		return QsciLexerSQL::styleBitsNeeded();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wordCharacters = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* wordCharacters() const override {
		if (handle__wordCharacters == 0) {
			return QsciLexerSQL::wordCharacters();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerSQL_wordCharacters(this, handle__wordCharacters);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_wordCharacters() const {

		return (const char*) QsciLexerSQL::wordCharacters();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAutoIndentStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAutoIndentStyle(int autoindentstyle) override {
		if (handle__setAutoIndentStyle == 0) {
			QsciLexerSQL::setAutoIndentStyle(autoindentstyle);
			return;
		}
		
		int sigval1 = autoindentstyle;

		miqt_exec_callback_QsciLexerSQL_setAutoIndentStyle(this, handle__setAutoIndentStyle, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setAutoIndentStyle(int autoindentstyle) {

		QsciLexerSQL::setAutoIndentStyle(static_cast<int>(autoindentstyle));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setColor(const QColor& c, int style) override {
		if (handle__setColor == 0) {
			QsciLexerSQL::setColor(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerSQL_setColor(this, handle__setColor, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setColor(QColor* c, int style) {

		QsciLexerSQL::setColor(*c, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEolFill(bool eoffill, int style) override {
		if (handle__setEolFill == 0) {
			QsciLexerSQL::setEolFill(eoffill, style);
			return;
		}
		
		bool sigval1 = eoffill;
		int sigval2 = style;

		miqt_exec_callback_QsciLexerSQL_setEolFill(this, handle__setEolFill, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setEolFill(bool eoffill, int style) {

		QsciLexerSQL::setEolFill(eoffill, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setFont = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFont(const QFont& f, int style) override {
		if (handle__setFont == 0) {
			QsciLexerSQL::setFont(f, style);
			return;
		}
		
		const QFont& f_ret = f;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&f_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerSQL_setFont(this, handle__setFont, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setFont(QFont* f, int style) {

		QsciLexerSQL::setFont(*f, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setPaper = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPaper(const QColor& c, int style) override {
		if (handle__setPaper == 0) {
			QsciLexerSQL::setPaper(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerSQL_setPaper(this, handle__setPaper, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setPaper(QColor* c, int style) {

		QsciLexerSQL::setPaper(*c, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__readProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool readProperties(QSettings& qs, const QString& prefix) override {
		if (handle__readProperties == 0) {
			return QsciLexerSQL::readProperties(qs, prefix);
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

		bool callback_return_value = miqt_exec_callback_QsciLexerSQL_readProperties(this, handle__readProperties, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_readProperties(QSettings* qs, struct miqt_string prefix) {
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

		return QsciLexerSQL::readProperties(*qs, prefix_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__writeProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
		if (handle__writeProperties == 0) {
			return QsciLexerSQL::writeProperties(qs, prefix);
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

		bool callback_return_value = miqt_exec_callback_QsciLexerSQL_writeProperties(this, handle__writeProperties, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_writeProperties(QSettings* qs, struct miqt_string prefix) const {
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

		return QsciLexerSQL::writeProperties(*qs, prefix_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QsciLexerSQL::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QsciLexerSQL_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QsciLexerSQL::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QsciLexerSQL::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QsciLexerSQL_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QsciLexerSQL::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QsciLexerSQL::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QsciLexerSQL_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QsciLexerSQL::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QsciLexerSQL::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QsciLexerSQL_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QsciLexerSQL::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QsciLexerSQL::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QsciLexerSQL_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QsciLexerSQL::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QsciLexerSQL::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciLexerSQL_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QsciLexerSQL::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QsciLexerSQL::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciLexerSQL_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QsciLexerSQL::disconnectNotify(*signal);

	}

};

QsciLexerSQL* QsciLexerSQL_new() {
	return new MiqtVirtualQsciLexerSQL();
}

QsciLexerSQL* QsciLexerSQL_new2(QObject* parent) {
	return new MiqtVirtualQsciLexerSQL(parent);
}

void QsciLexerSQL_virtbase(QsciLexerSQL* src, QsciLexer** outptr_QsciLexer) {
	*outptr_QsciLexer = static_cast<QsciLexer*>(src);
}

QMetaObject* QsciLexerSQL_metaObject(const QsciLexerSQL* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerSQL_metacast(QsciLexerSQL* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerSQL_tr(const char* s) {
	QString _ret = QsciLexerSQL::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerSQL_trUtf8(const char* s) {
	QString _ret = QsciLexerSQL::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerSQL_language(const QsciLexerSQL* self) {
	return (const char*) self->language();
}

const char* QsciLexerSQL_lexer(const QsciLexerSQL* self) {
	return (const char*) self->lexer();
}

int QsciLexerSQL_braceStyle(const QsciLexerSQL* self) {
	return self->braceStyle();
}

QColor* QsciLexerSQL_defaultColor(const QsciLexerSQL* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerSQL_defaultEolFill(const QsciLexerSQL* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerSQL_defaultFont(const QsciLexerSQL* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerSQL_defaultPaper(const QsciLexerSQL* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerSQL_keywords(const QsciLexerSQL* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerSQL_description(const QsciLexerSQL* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerSQL_refreshProperties(QsciLexerSQL* self) {
	self->refreshProperties();
}

bool QsciLexerSQL_backslashEscapes(const QsciLexerSQL* self) {
	return self->backslashEscapes();
}

void QsciLexerSQL_setDottedWords(QsciLexerSQL* self, bool enable) {
	self->setDottedWords(enable);
}

bool QsciLexerSQL_dottedWords(const QsciLexerSQL* self) {
	return self->dottedWords();
}

void QsciLexerSQL_setFoldAtElse(QsciLexerSQL* self, bool fold) {
	self->setFoldAtElse(fold);
}

bool QsciLexerSQL_foldAtElse(const QsciLexerSQL* self) {
	return self->foldAtElse();
}

bool QsciLexerSQL_foldComments(const QsciLexerSQL* self) {
	return self->foldComments();
}

bool QsciLexerSQL_foldCompact(const QsciLexerSQL* self) {
	return self->foldCompact();
}

void QsciLexerSQL_setFoldOnlyBegin(QsciLexerSQL* self, bool fold) {
	self->setFoldOnlyBegin(fold);
}

bool QsciLexerSQL_foldOnlyBegin(const QsciLexerSQL* self) {
	return self->foldOnlyBegin();
}

void QsciLexerSQL_setHashComments(QsciLexerSQL* self, bool enable) {
	self->setHashComments(enable);
}

bool QsciLexerSQL_hashComments(const QsciLexerSQL* self) {
	return self->hashComments();
}

void QsciLexerSQL_setQuotedIdentifiers(QsciLexerSQL* self, bool enable) {
	self->setQuotedIdentifiers(enable);
}

bool QsciLexerSQL_quotedIdentifiers(const QsciLexerSQL* self) {
	return self->quotedIdentifiers();
}

void QsciLexerSQL_setBackslashEscapes(QsciLexerSQL* self, bool enable) {
	self->setBackslashEscapes(enable);
}

void QsciLexerSQL_setFoldComments(QsciLexerSQL* self, bool fold) {
	self->setFoldComments(fold);
}

void QsciLexerSQL_setFoldCompact(QsciLexerSQL* self, bool fold) {
	self->setFoldCompact(fold);
}

struct miqt_string QsciLexerSQL_tr2(const char* s, const char* c) {
	QString _ret = QsciLexerSQL::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerSQL_tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerSQL::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerSQL_trUtf82(const char* s, const char* c) {
	QString _ret = QsciLexerSQL::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerSQL_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QsciLexerSQL::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QsciLexerSQL_override_virtual_setBackslashEscapes(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerSQL* self_cast = dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setBackslashEscapes = slot;
	return true;
}

void QsciLexerSQL_virtualbase_setBackslashEscapes(void* self, bool enable) {
	( (MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_setBackslashEscapes(enable);
}

bool QsciLexerSQL_override_virtual_setFoldComments(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerSQL* self_cast = dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setFoldComments = slot;
	return true;
}

void QsciLexerSQL_virtualbase_setFoldComments(void* self, bool fold) {
	( (MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_setFoldComments(fold);
}

bool QsciLexerSQL_override_virtual_setFoldCompact(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerSQL* self_cast = dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setFoldCompact = slot;
	return true;
}

void QsciLexerSQL_virtualbase_setFoldCompact(void* self, bool fold) {
	( (MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_setFoldCompact(fold);
}

bool QsciLexerSQL_override_virtual_language(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerSQL* self_cast = dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__language = slot;
	return true;
}

bool QsciLexerSQL_override_virtual_lexer(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerSQL* self_cast = dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__lexer = slot;
	return true;
}

const char* QsciLexerSQL_virtualbase_lexer(const void* self) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_lexer();
}

bool QsciLexerSQL_override_virtual_lexerId(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerSQL* self_cast = dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__lexerId = slot;
	return true;
}

int QsciLexerSQL_virtualbase_lexerId(const void* self) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_lexerId();
}

bool QsciLexerSQL_override_virtual_autoCompletionFillups(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerSQL* self_cast = dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__autoCompletionFillups = slot;
	return true;
}

const char* QsciLexerSQL_virtualbase_autoCompletionFillups(const void* self) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_autoCompletionFillups();
}

bool QsciLexerSQL_override_virtual_autoCompletionWordSeparators(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerSQL* self_cast = dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__autoCompletionWordSeparators = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QsciLexerSQL_virtualbase_autoCompletionWordSeparators(const void* self) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_autoCompletionWordSeparators();
}

bool QsciLexerSQL_override_virtual_blockEnd(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerSQL* self_cast = dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__blockEnd = slot;
	return true;
}

const char* QsciLexerSQL_virtualbase_blockEnd(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_blockEnd(style);
}

bool QsciLexerSQL_override_virtual_blockLookback(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerSQL* self_cast = dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__blockLookback = slot;
	return true;
}

int QsciLexerSQL_virtualbase_blockLookback(const void* self) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_blockLookback();
}

bool QsciLexerSQL_override_virtual_blockStart(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerSQL* self_cast = dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__blockStart = slot;
	return true;
}

const char* QsciLexerSQL_virtualbase_blockStart(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_blockStart(style);
}

bool QsciLexerSQL_override_virtual_blockStartKeyword(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerSQL* self_cast = dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__blockStartKeyword = slot;
	return true;
}

const char* QsciLexerSQL_virtualbase_blockStartKeyword(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_blockStartKeyword(style);
}

bool QsciLexerSQL_override_virtual_braceStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerSQL* self_cast = dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__braceStyle = slot;
	return true;
}

int QsciLexerSQL_virtualbase_braceStyle(const void* self) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_braceStyle();
}

bool QsciLexerSQL_override_virtual_caseSensitive(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerSQL* self_cast = dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__caseSensitive = slot;
	return true;
}

bool QsciLexerSQL_virtualbase_caseSensitive(const void* self) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_caseSensitive();
}

bool QsciLexerSQL_override_virtual_color(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerSQL* self_cast = dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__color = slot;
	return true;
}

QColor* QsciLexerSQL_virtualbase_color(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_color(style);
}

bool QsciLexerSQL_override_virtual_eolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerSQL* self_cast = dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eolFill = slot;
	return true;
}

bool QsciLexerSQL_virtualbase_eolFill(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_eolFill(style);
}

bool QsciLexerSQL_override_virtual_font(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerSQL* self_cast = dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__font = slot;
	return true;
}

QFont* QsciLexerSQL_virtualbase_font(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_font(style);
}

bool QsciLexerSQL_override_virtual_indentationGuideView(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerSQL* self_cast = dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__indentationGuideView = slot;
	return true;
}

int QsciLexerSQL_virtualbase_indentationGuideView(const void* self) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_indentationGuideView();
}

bool QsciLexerSQL_override_virtual_keywords(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerSQL* self_cast = dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keywords = slot;
	return true;
}

const char* QsciLexerSQL_virtualbase_keywords(const void* self, int set) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_keywords(set);
}

bool QsciLexerSQL_override_virtual_defaultStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerSQL* self_cast = dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__defaultStyle = slot;
	return true;
}

int QsciLexerSQL_virtualbase_defaultStyle(const void* self) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_defaultStyle();
}

bool QsciLexerSQL_override_virtual_description(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerSQL* self_cast = dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__description = slot;
	return true;
}

bool QsciLexerSQL_override_virtual_paper(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerSQL* self_cast = dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paper = slot;
	return true;
}

QColor* QsciLexerSQL_virtualbase_paper(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_paper(style);
}

bool QsciLexerSQL_override_virtual_defaultColorWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerSQL* self_cast = dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__defaultColorWithStyle = slot;
	return true;
}

QColor* QsciLexerSQL_virtualbase_defaultColorWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_defaultColorWithStyle(style);
}

bool QsciLexerSQL_override_virtual_defaultEolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerSQL* self_cast = dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__defaultEolFill = slot;
	return true;
}

bool QsciLexerSQL_virtualbase_defaultEolFill(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_defaultEolFill(style);
}

bool QsciLexerSQL_override_virtual_defaultFontWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerSQL* self_cast = dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__defaultFontWithStyle = slot;
	return true;
}

QFont* QsciLexerSQL_virtualbase_defaultFontWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_defaultFontWithStyle(style);
}

bool QsciLexerSQL_override_virtual_defaultPaperWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerSQL* self_cast = dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__defaultPaperWithStyle = slot;
	return true;
}

QColor* QsciLexerSQL_virtualbase_defaultPaperWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_defaultPaperWithStyle(style);
}

bool QsciLexerSQL_override_virtual_setEditor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerSQL* self_cast = dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setEditor = slot;
	return true;
}

void QsciLexerSQL_virtualbase_setEditor(void* self, QsciScintilla* editor) {
	( (MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_setEditor(editor);
}

bool QsciLexerSQL_override_virtual_refreshProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerSQL* self_cast = dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__refreshProperties = slot;
	return true;
}

void QsciLexerSQL_virtualbase_refreshProperties(void* self) {
	( (MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_refreshProperties();
}

bool QsciLexerSQL_override_virtual_styleBitsNeeded(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerSQL* self_cast = dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__styleBitsNeeded = slot;
	return true;
}

int QsciLexerSQL_virtualbase_styleBitsNeeded(const void* self) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_styleBitsNeeded();
}

bool QsciLexerSQL_override_virtual_wordCharacters(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerSQL* self_cast = dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wordCharacters = slot;
	return true;
}

const char* QsciLexerSQL_virtualbase_wordCharacters(const void* self) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_wordCharacters();
}

bool QsciLexerSQL_override_virtual_setAutoIndentStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerSQL* self_cast = dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setAutoIndentStyle = slot;
	return true;
}

void QsciLexerSQL_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle) {
	( (MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_setAutoIndentStyle(autoindentstyle);
}

bool QsciLexerSQL_override_virtual_setColor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerSQL* self_cast = dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setColor = slot;
	return true;
}

void QsciLexerSQL_virtualbase_setColor(void* self, QColor* c, int style) {
	( (MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_setColor(c, style);
}

bool QsciLexerSQL_override_virtual_setEolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerSQL* self_cast = dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setEolFill = slot;
	return true;
}

void QsciLexerSQL_virtualbase_setEolFill(void* self, bool eoffill, int style) {
	( (MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_setEolFill(eoffill, style);
}

bool QsciLexerSQL_override_virtual_setFont(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerSQL* self_cast = dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setFont = slot;
	return true;
}

void QsciLexerSQL_virtualbase_setFont(void* self, QFont* f, int style) {
	( (MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_setFont(f, style);
}

bool QsciLexerSQL_override_virtual_setPaper(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerSQL* self_cast = dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setPaper = slot;
	return true;
}

void QsciLexerSQL_virtualbase_setPaper(void* self, QColor* c, int style) {
	( (MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_setPaper(c, style);
}

bool QsciLexerSQL_override_virtual_readProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerSQL* self_cast = dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__readProperties = slot;
	return true;
}

bool QsciLexerSQL_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix) {
	return ( (MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_readProperties(qs, prefix);
}

bool QsciLexerSQL_override_virtual_writeProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerSQL* self_cast = dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__writeProperties = slot;
	return true;
}

bool QsciLexerSQL_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_writeProperties(qs, prefix);
}

bool QsciLexerSQL_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerSQL* self_cast = dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QsciLexerSQL_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_event(event);
}

bool QsciLexerSQL_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerSQL* self_cast = dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QsciLexerSQL_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QsciLexerSQL_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerSQL* self_cast = dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QsciLexerSQL_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_timerEvent(event);
}

bool QsciLexerSQL_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerSQL* self_cast = dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QsciLexerSQL_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_childEvent(event);
}

bool QsciLexerSQL_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerSQL* self_cast = dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QsciLexerSQL_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_customEvent(event);
}

bool QsciLexerSQL_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerSQL* self_cast = dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QsciLexerSQL_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_connectNotify(signal);
}

bool QsciLexerSQL_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerSQL* self_cast = dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QsciLexerSQL_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_disconnectNotify(signal);
}

void QsciLexerSQL_delete(QsciLexerSQL* self) {
	delete self;
}

