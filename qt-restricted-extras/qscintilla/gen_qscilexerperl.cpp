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
#include <qscilexerperl.h>
#include "gen_qscilexerperl.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QsciLexerPerl_setFoldComments(QsciLexerPerl*, intptr_t, bool);
void miqt_exec_callback_QsciLexerPerl_setFoldCompact(QsciLexerPerl*, intptr_t, bool);
const char* miqt_exec_callback_QsciLexerPerl_language(const QsciLexerPerl*, intptr_t);
const char* miqt_exec_callback_QsciLexerPerl_lexer(const QsciLexerPerl*, intptr_t);
int miqt_exec_callback_QsciLexerPerl_lexerId(const QsciLexerPerl*, intptr_t);
const char* miqt_exec_callback_QsciLexerPerl_autoCompletionFillups(const QsciLexerPerl*, intptr_t);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QsciLexerPerl_autoCompletionWordSeparators(const QsciLexerPerl*, intptr_t);
const char* miqt_exec_callback_QsciLexerPerl_blockEnd(const QsciLexerPerl*, intptr_t, int*);
int miqt_exec_callback_QsciLexerPerl_blockLookback(const QsciLexerPerl*, intptr_t);
const char* miqt_exec_callback_QsciLexerPerl_blockStart(const QsciLexerPerl*, intptr_t, int*);
const char* miqt_exec_callback_QsciLexerPerl_blockStartKeyword(const QsciLexerPerl*, intptr_t, int*);
int miqt_exec_callback_QsciLexerPerl_braceStyle(const QsciLexerPerl*, intptr_t);
bool miqt_exec_callback_QsciLexerPerl_caseSensitive(const QsciLexerPerl*, intptr_t);
QColor* miqt_exec_callback_QsciLexerPerl_color(const QsciLexerPerl*, intptr_t, int);
bool miqt_exec_callback_QsciLexerPerl_eolFill(const QsciLexerPerl*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerPerl_font(const QsciLexerPerl*, intptr_t, int);
int miqt_exec_callback_QsciLexerPerl_indentationGuideView(const QsciLexerPerl*, intptr_t);
const char* miqt_exec_callback_QsciLexerPerl_keywords(const QsciLexerPerl*, intptr_t, int);
int miqt_exec_callback_QsciLexerPerl_defaultStyle(const QsciLexerPerl*, intptr_t);
struct miqt_string miqt_exec_callback_QsciLexerPerl_description(const QsciLexerPerl*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerPerl_paper(const QsciLexerPerl*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerPerl_defaultColorWithStyle(const QsciLexerPerl*, intptr_t, int);
bool miqt_exec_callback_QsciLexerPerl_defaultEolFill(const QsciLexerPerl*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerPerl_defaultFontWithStyle(const QsciLexerPerl*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerPerl_defaultPaperWithStyle(const QsciLexerPerl*, intptr_t, int);
void miqt_exec_callback_QsciLexerPerl_setEditor(QsciLexerPerl*, intptr_t, QsciScintilla*);
void miqt_exec_callback_QsciLexerPerl_refreshProperties(QsciLexerPerl*, intptr_t);
int miqt_exec_callback_QsciLexerPerl_styleBitsNeeded(const QsciLexerPerl*, intptr_t);
const char* miqt_exec_callback_QsciLexerPerl_wordCharacters(const QsciLexerPerl*, intptr_t);
void miqt_exec_callback_QsciLexerPerl_setAutoIndentStyle(QsciLexerPerl*, intptr_t, int);
void miqt_exec_callback_QsciLexerPerl_setColor(QsciLexerPerl*, intptr_t, QColor*, int);
void miqt_exec_callback_QsciLexerPerl_setEolFill(QsciLexerPerl*, intptr_t, bool, int);
void miqt_exec_callback_QsciLexerPerl_setFont(QsciLexerPerl*, intptr_t, QFont*, int);
void miqt_exec_callback_QsciLexerPerl_setPaper(QsciLexerPerl*, intptr_t, QColor*, int);
bool miqt_exec_callback_QsciLexerPerl_readProperties(QsciLexerPerl*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerPerl_writeProperties(const QsciLexerPerl*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerPerl_event(QsciLexerPerl*, intptr_t, QEvent*);
bool miqt_exec_callback_QsciLexerPerl_eventFilter(QsciLexerPerl*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QsciLexerPerl_timerEvent(QsciLexerPerl*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QsciLexerPerl_childEvent(QsciLexerPerl*, intptr_t, QChildEvent*);
void miqt_exec_callback_QsciLexerPerl_customEvent(QsciLexerPerl*, intptr_t, QEvent*);
void miqt_exec_callback_QsciLexerPerl_connectNotify(QsciLexerPerl*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QsciLexerPerl_disconnectNotify(QsciLexerPerl*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciLexerPerl final : public QsciLexerPerl {
public:

	MiqtVirtualQsciLexerPerl(): QsciLexerPerl() {};
	MiqtVirtualQsciLexerPerl(QObject* parent): QsciLexerPerl(parent) {};

	virtual ~MiqtVirtualQsciLexerPerl() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setFoldComments = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldComments(bool fold) override {
		if (handle__setFoldComments == 0) {
			QsciLexerPerl::setFoldComments(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerPerl_setFoldComments(this, handle__setFoldComments, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setFoldComments(bool fold) {

		QsciLexerPerl::setFoldComments(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setFoldCompact = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldCompact(bool fold) override {
		if (handle__setFoldCompact == 0) {
			QsciLexerPerl::setFoldCompact(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerPerl_setFoldCompact(this, handle__setFoldCompact, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setFoldCompact(bool fold) {

		QsciLexerPerl::setFoldCompact(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__language = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* language() const override {
		if (handle__language == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerPerl_language(this, handle__language);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__lexer = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* lexer() const override {
		if (handle__lexer == 0) {
			return QsciLexerPerl::lexer();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerPerl_lexer(this, handle__lexer);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_lexer() const {

		return (const char*) QsciLexerPerl::lexer();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__lexerId = 0;

	// Subclass to allow providing a Go implementation
	virtual int lexerId() const override {
		if (handle__lexerId == 0) {
			return QsciLexerPerl::lexerId();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerPerl_lexerId(this, handle__lexerId);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_lexerId() const {

		return QsciLexerPerl::lexerId();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__autoCompletionFillups = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* autoCompletionFillups() const override {
		if (handle__autoCompletionFillups == 0) {
			return QsciLexerPerl::autoCompletionFillups();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerPerl_autoCompletionFillups(this, handle__autoCompletionFillups);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_autoCompletionFillups() const {

		return (const char*) QsciLexerPerl::autoCompletionFillups();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__autoCompletionWordSeparators = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList autoCompletionWordSeparators() const override {
		if (handle__autoCompletionWordSeparators == 0) {
			return QsciLexerPerl::autoCompletionWordSeparators();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QsciLexerPerl_autoCompletionWordSeparators(this, handle__autoCompletionWordSeparators);
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

		QStringList _ret = QsciLexerPerl::autoCompletionWordSeparators();
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
			return QsciLexerPerl::blockEnd(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerPerl_blockEnd(this, handle__blockEnd, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_blockEnd(int* style) const {

		return (const char*) QsciLexerPerl::blockEnd(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockLookback = 0;

	// Subclass to allow providing a Go implementation
	virtual int blockLookback() const override {
		if (handle__blockLookback == 0) {
			return QsciLexerPerl::blockLookback();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerPerl_blockLookback(this, handle__blockLookback);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_blockLookback() const {

		return QsciLexerPerl::blockLookback();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockStart = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStart(int* style) const override {
		if (handle__blockStart == 0) {
			return QsciLexerPerl::blockStart(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerPerl_blockStart(this, handle__blockStart, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_blockStart(int* style) const {

		return (const char*) QsciLexerPerl::blockStart(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockStartKeyword = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStartKeyword(int* style) const override {
		if (handle__blockStartKeyword == 0) {
			return QsciLexerPerl::blockStartKeyword(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerPerl_blockStartKeyword(this, handle__blockStartKeyword, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_blockStartKeyword(int* style) const {

		return (const char*) QsciLexerPerl::blockStartKeyword(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__braceStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int braceStyle() const override {
		if (handle__braceStyle == 0) {
			return QsciLexerPerl::braceStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerPerl_braceStyle(this, handle__braceStyle);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_braceStyle() const {

		return QsciLexerPerl::braceStyle();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__caseSensitive = 0;

	// Subclass to allow providing a Go implementation
	virtual bool caseSensitive() const override {
		if (handle__caseSensitive == 0) {
			return QsciLexerPerl::caseSensitive();
		}
		

		bool callback_return_value = miqt_exec_callback_QsciLexerPerl_caseSensitive(this, handle__caseSensitive);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_caseSensitive() const {

		return QsciLexerPerl::caseSensitive();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__color = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor color(int style) const override {
		if (handle__color == 0) {
			return QsciLexerPerl::color(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerPerl_color(this, handle__color, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_color(int style) const {

		return new QColor(QsciLexerPerl::color(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eolFill(int style) const override {
		if (handle__eolFill == 0) {
			return QsciLexerPerl::eolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexerPerl_eolFill(this, handle__eolFill, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eolFill(int style) const {

		return QsciLexerPerl::eolFill(static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__font = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont font(int style) const override {
		if (handle__font == 0) {
			return QsciLexerPerl::font(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexerPerl_font(this, handle__font, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QFont* virtualbase_font(int style) const {

		return new QFont(QsciLexerPerl::font(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__indentationGuideView = 0;

	// Subclass to allow providing a Go implementation
	virtual int indentationGuideView() const override {
		if (handle__indentationGuideView == 0) {
			return QsciLexerPerl::indentationGuideView();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerPerl_indentationGuideView(this, handle__indentationGuideView);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_indentationGuideView() const {

		return QsciLexerPerl::indentationGuideView();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keywords = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* keywords(int set) const override {
		if (handle__keywords == 0) {
			return QsciLexerPerl::keywords(set);
		}
		
		int sigval1 = set;

		const char* callback_return_value = miqt_exec_callback_QsciLexerPerl_keywords(this, handle__keywords, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_keywords(int set) const {

		return (const char*) QsciLexerPerl::keywords(static_cast<int>(set));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int defaultStyle() const override {
		if (handle__defaultStyle == 0) {
			return QsciLexerPerl::defaultStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerPerl_defaultStyle(this, handle__defaultStyle);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_defaultStyle() const {

		return QsciLexerPerl::defaultStyle();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__description = 0;

	// Subclass to allow providing a Go implementation
	virtual QString description(int style) const override {
		if (handle__description == 0) {
			return QString(); // Pure virtual, there is no base we can call
		}
		
		int sigval1 = style;

		struct miqt_string callback_return_value = miqt_exec_callback_QsciLexerPerl_description(this, handle__description, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paper = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor paper(int style) const override {
		if (handle__paper == 0) {
			return QsciLexerPerl::paper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerPerl_paper(this, handle__paper, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_paper(int style) const {

		return new QColor(QsciLexerPerl::paper(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultColorWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultColor(int style) const override {
		if (handle__defaultColorWithStyle == 0) {
			return QsciLexerPerl::defaultColor(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerPerl_defaultColorWithStyle(this, handle__defaultColorWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_defaultColorWithStyle(int style) const {

		return new QColor(QsciLexerPerl::defaultColor(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool defaultEolFill(int style) const override {
		if (handle__defaultEolFill == 0) {
			return QsciLexerPerl::defaultEolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexerPerl_defaultEolFill(this, handle__defaultEolFill, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_defaultEolFill(int style) const {

		return QsciLexerPerl::defaultEolFill(static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultFontWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont defaultFont(int style) const override {
		if (handle__defaultFontWithStyle == 0) {
			return QsciLexerPerl::defaultFont(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexerPerl_defaultFontWithStyle(this, handle__defaultFontWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QFont* virtualbase_defaultFontWithStyle(int style) const {

		return new QFont(QsciLexerPerl::defaultFont(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultPaperWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultPaper(int style) const override {
		if (handle__defaultPaperWithStyle == 0) {
			return QsciLexerPerl::defaultPaper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerPerl_defaultPaperWithStyle(this, handle__defaultPaperWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_defaultPaperWithStyle(int style) const {

		return new QColor(QsciLexerPerl::defaultPaper(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEditor(QsciScintilla* editor) override {
		if (handle__setEditor == 0) {
			QsciLexerPerl::setEditor(editor);
			return;
		}
		
		QsciScintilla* sigval1 = editor;

		miqt_exec_callback_QsciLexerPerl_setEditor(this, handle__setEditor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setEditor(QsciScintilla* editor) {

		QsciLexerPerl::setEditor(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__refreshProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual void refreshProperties() override {
		if (handle__refreshProperties == 0) {
			QsciLexerPerl::refreshProperties();
			return;
		}
		

		miqt_exec_callback_QsciLexerPerl_refreshProperties(this, handle__refreshProperties);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_refreshProperties() {

		QsciLexerPerl::refreshProperties();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__styleBitsNeeded = 0;

	// Subclass to allow providing a Go implementation
	virtual int styleBitsNeeded() const override {
		if (handle__styleBitsNeeded == 0) {
			return QsciLexerPerl::styleBitsNeeded();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerPerl_styleBitsNeeded(this, handle__styleBitsNeeded);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_styleBitsNeeded() const {

		return QsciLexerPerl::styleBitsNeeded();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wordCharacters = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* wordCharacters() const override {
		if (handle__wordCharacters == 0) {
			return QsciLexerPerl::wordCharacters();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerPerl_wordCharacters(this, handle__wordCharacters);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_wordCharacters() const {

		return (const char*) QsciLexerPerl::wordCharacters();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAutoIndentStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAutoIndentStyle(int autoindentstyle) override {
		if (handle__setAutoIndentStyle == 0) {
			QsciLexerPerl::setAutoIndentStyle(autoindentstyle);
			return;
		}
		
		int sigval1 = autoindentstyle;

		miqt_exec_callback_QsciLexerPerl_setAutoIndentStyle(this, handle__setAutoIndentStyle, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setAutoIndentStyle(int autoindentstyle) {

		QsciLexerPerl::setAutoIndentStyle(static_cast<int>(autoindentstyle));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setColor(const QColor& c, int style) override {
		if (handle__setColor == 0) {
			QsciLexerPerl::setColor(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerPerl_setColor(this, handle__setColor, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setColor(QColor* c, int style) {

		QsciLexerPerl::setColor(*c, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEolFill(bool eoffill, int style) override {
		if (handle__setEolFill == 0) {
			QsciLexerPerl::setEolFill(eoffill, style);
			return;
		}
		
		bool sigval1 = eoffill;
		int sigval2 = style;

		miqt_exec_callback_QsciLexerPerl_setEolFill(this, handle__setEolFill, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setEolFill(bool eoffill, int style) {

		QsciLexerPerl::setEolFill(eoffill, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setFont = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFont(const QFont& f, int style) override {
		if (handle__setFont == 0) {
			QsciLexerPerl::setFont(f, style);
			return;
		}
		
		const QFont& f_ret = f;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&f_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerPerl_setFont(this, handle__setFont, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setFont(QFont* f, int style) {

		QsciLexerPerl::setFont(*f, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setPaper = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPaper(const QColor& c, int style) override {
		if (handle__setPaper == 0) {
			QsciLexerPerl::setPaper(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerPerl_setPaper(this, handle__setPaper, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setPaper(QColor* c, int style) {

		QsciLexerPerl::setPaper(*c, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__readProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool readProperties(QSettings& qs, const QString& prefix) override {
		if (handle__readProperties == 0) {
			return QsciLexerPerl::readProperties(qs, prefix);
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

		bool callback_return_value = miqt_exec_callback_QsciLexerPerl_readProperties(this, handle__readProperties, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_readProperties(QSettings* qs, struct miqt_string prefix) {
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

		return QsciLexerPerl::readProperties(*qs, prefix_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__writeProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
		if (handle__writeProperties == 0) {
			return QsciLexerPerl::writeProperties(qs, prefix);
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

		bool callback_return_value = miqt_exec_callback_QsciLexerPerl_writeProperties(this, handle__writeProperties, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_writeProperties(QSettings* qs, struct miqt_string prefix) const {
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

		return QsciLexerPerl::writeProperties(*qs, prefix_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QsciLexerPerl::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QsciLexerPerl_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QsciLexerPerl::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QsciLexerPerl::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QsciLexerPerl_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QsciLexerPerl::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QsciLexerPerl::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QsciLexerPerl_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QsciLexerPerl::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QsciLexerPerl::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QsciLexerPerl_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QsciLexerPerl::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QsciLexerPerl::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QsciLexerPerl_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QsciLexerPerl::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QsciLexerPerl::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciLexerPerl_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QsciLexerPerl::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QsciLexerPerl::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciLexerPerl_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QsciLexerPerl::disconnectNotify(*signal);

	}

};

QsciLexerPerl* QsciLexerPerl_new() {
	return new MiqtVirtualQsciLexerPerl();
}

QsciLexerPerl* QsciLexerPerl_new2(QObject* parent) {
	return new MiqtVirtualQsciLexerPerl(parent);
}

void QsciLexerPerl_virtbase(QsciLexerPerl* src, QsciLexer** outptr_QsciLexer) {
	*outptr_QsciLexer = static_cast<QsciLexer*>(src);
}

QMetaObject* QsciLexerPerl_metaObject(const QsciLexerPerl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerPerl_metacast(QsciLexerPerl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerPerl_tr(const char* s) {
	QString _ret = QsciLexerPerl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerPerl_trUtf8(const char* s) {
	QString _ret = QsciLexerPerl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerPerl_language(const QsciLexerPerl* self) {
	return (const char*) self->language();
}

const char* QsciLexerPerl_lexer(const QsciLexerPerl* self) {
	return (const char*) self->lexer();
}

struct miqt_array /* of struct miqt_string */  QsciLexerPerl_autoCompletionWordSeparators(const QsciLexerPerl* self) {
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

const char* QsciLexerPerl_blockEnd(const QsciLexerPerl* self) {
	return (const char*) self->blockEnd();
}

const char* QsciLexerPerl_blockStart(const QsciLexerPerl* self) {
	return (const char*) self->blockStart();
}

int QsciLexerPerl_braceStyle(const QsciLexerPerl* self) {
	return self->braceStyle();
}

const char* QsciLexerPerl_wordCharacters(const QsciLexerPerl* self) {
	return (const char*) self->wordCharacters();
}

QColor* QsciLexerPerl_defaultColor(const QsciLexerPerl* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerPerl_defaultEolFill(const QsciLexerPerl* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerPerl_defaultFont(const QsciLexerPerl* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerPerl_defaultPaper(const QsciLexerPerl* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerPerl_keywords(const QsciLexerPerl* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerPerl_description(const QsciLexerPerl* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerPerl_refreshProperties(QsciLexerPerl* self) {
	self->refreshProperties();
}

void QsciLexerPerl_setFoldAtElse(QsciLexerPerl* self, bool fold) {
	self->setFoldAtElse(fold);
}

bool QsciLexerPerl_foldAtElse(const QsciLexerPerl* self) {
	return self->foldAtElse();
}

bool QsciLexerPerl_foldComments(const QsciLexerPerl* self) {
	return self->foldComments();
}

bool QsciLexerPerl_foldCompact(const QsciLexerPerl* self) {
	return self->foldCompact();
}

void QsciLexerPerl_setFoldPackages(QsciLexerPerl* self, bool fold) {
	self->setFoldPackages(fold);
}

bool QsciLexerPerl_foldPackages(const QsciLexerPerl* self) {
	return self->foldPackages();
}

void QsciLexerPerl_setFoldPODBlocks(QsciLexerPerl* self, bool fold) {
	self->setFoldPODBlocks(fold);
}

bool QsciLexerPerl_foldPODBlocks(const QsciLexerPerl* self) {
	return self->foldPODBlocks();
}

void QsciLexerPerl_setFoldComments(QsciLexerPerl* self, bool fold) {
	self->setFoldComments(fold);
}

void QsciLexerPerl_setFoldCompact(QsciLexerPerl* self, bool fold) {
	self->setFoldCompact(fold);
}

struct miqt_string QsciLexerPerl_tr2(const char* s, const char* c) {
	QString _ret = QsciLexerPerl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerPerl_tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerPerl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerPerl_trUtf82(const char* s, const char* c) {
	QString _ret = QsciLexerPerl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerPerl_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QsciLexerPerl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerPerl_blockEnd1(const QsciLexerPerl* self, int* style) {
	return (const char*) self->blockEnd(static_cast<int*>(style));
}

const char* QsciLexerPerl_blockStart1(const QsciLexerPerl* self, int* style) {
	return (const char*) self->blockStart(static_cast<int*>(style));
}

bool QsciLexerPerl_override_virtual_setFoldComments(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPerl* self_cast = dynamic_cast<MiqtVirtualQsciLexerPerl*>( (QsciLexerPerl*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setFoldComments = slot;
	return true;
}

void QsciLexerPerl_virtualbase_setFoldComments(void* self, bool fold) {
	( (MiqtVirtualQsciLexerPerl*)(self) )->virtualbase_setFoldComments(fold);
}

bool QsciLexerPerl_override_virtual_setFoldCompact(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPerl* self_cast = dynamic_cast<MiqtVirtualQsciLexerPerl*>( (QsciLexerPerl*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setFoldCompact = slot;
	return true;
}

void QsciLexerPerl_virtualbase_setFoldCompact(void* self, bool fold) {
	( (MiqtVirtualQsciLexerPerl*)(self) )->virtualbase_setFoldCompact(fold);
}

bool QsciLexerPerl_override_virtual_language(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPerl* self_cast = dynamic_cast<MiqtVirtualQsciLexerPerl*>( (QsciLexerPerl*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__language = slot;
	return true;
}

bool QsciLexerPerl_override_virtual_lexer(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPerl* self_cast = dynamic_cast<MiqtVirtualQsciLexerPerl*>( (QsciLexerPerl*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__lexer = slot;
	return true;
}

const char* QsciLexerPerl_virtualbase_lexer(const void* self) {
	return ( (const MiqtVirtualQsciLexerPerl*)(self) )->virtualbase_lexer();
}

bool QsciLexerPerl_override_virtual_lexerId(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPerl* self_cast = dynamic_cast<MiqtVirtualQsciLexerPerl*>( (QsciLexerPerl*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__lexerId = slot;
	return true;
}

int QsciLexerPerl_virtualbase_lexerId(const void* self) {
	return ( (const MiqtVirtualQsciLexerPerl*)(self) )->virtualbase_lexerId();
}

bool QsciLexerPerl_override_virtual_autoCompletionFillups(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPerl* self_cast = dynamic_cast<MiqtVirtualQsciLexerPerl*>( (QsciLexerPerl*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__autoCompletionFillups = slot;
	return true;
}

const char* QsciLexerPerl_virtualbase_autoCompletionFillups(const void* self) {
	return ( (const MiqtVirtualQsciLexerPerl*)(self) )->virtualbase_autoCompletionFillups();
}

bool QsciLexerPerl_override_virtual_autoCompletionWordSeparators(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPerl* self_cast = dynamic_cast<MiqtVirtualQsciLexerPerl*>( (QsciLexerPerl*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__autoCompletionWordSeparators = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QsciLexerPerl_virtualbase_autoCompletionWordSeparators(const void* self) {
	return ( (const MiqtVirtualQsciLexerPerl*)(self) )->virtualbase_autoCompletionWordSeparators();
}

bool QsciLexerPerl_override_virtual_blockEnd(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPerl* self_cast = dynamic_cast<MiqtVirtualQsciLexerPerl*>( (QsciLexerPerl*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__blockEnd = slot;
	return true;
}

const char* QsciLexerPerl_virtualbase_blockEnd(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerPerl*)(self) )->virtualbase_blockEnd(style);
}

bool QsciLexerPerl_override_virtual_blockLookback(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPerl* self_cast = dynamic_cast<MiqtVirtualQsciLexerPerl*>( (QsciLexerPerl*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__blockLookback = slot;
	return true;
}

int QsciLexerPerl_virtualbase_blockLookback(const void* self) {
	return ( (const MiqtVirtualQsciLexerPerl*)(self) )->virtualbase_blockLookback();
}

bool QsciLexerPerl_override_virtual_blockStart(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPerl* self_cast = dynamic_cast<MiqtVirtualQsciLexerPerl*>( (QsciLexerPerl*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__blockStart = slot;
	return true;
}

const char* QsciLexerPerl_virtualbase_blockStart(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerPerl*)(self) )->virtualbase_blockStart(style);
}

bool QsciLexerPerl_override_virtual_blockStartKeyword(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPerl* self_cast = dynamic_cast<MiqtVirtualQsciLexerPerl*>( (QsciLexerPerl*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__blockStartKeyword = slot;
	return true;
}

const char* QsciLexerPerl_virtualbase_blockStartKeyword(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerPerl*)(self) )->virtualbase_blockStartKeyword(style);
}

bool QsciLexerPerl_override_virtual_braceStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPerl* self_cast = dynamic_cast<MiqtVirtualQsciLexerPerl*>( (QsciLexerPerl*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__braceStyle = slot;
	return true;
}

int QsciLexerPerl_virtualbase_braceStyle(const void* self) {
	return ( (const MiqtVirtualQsciLexerPerl*)(self) )->virtualbase_braceStyle();
}

bool QsciLexerPerl_override_virtual_caseSensitive(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPerl* self_cast = dynamic_cast<MiqtVirtualQsciLexerPerl*>( (QsciLexerPerl*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__caseSensitive = slot;
	return true;
}

bool QsciLexerPerl_virtualbase_caseSensitive(const void* self) {
	return ( (const MiqtVirtualQsciLexerPerl*)(self) )->virtualbase_caseSensitive();
}

bool QsciLexerPerl_override_virtual_color(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPerl* self_cast = dynamic_cast<MiqtVirtualQsciLexerPerl*>( (QsciLexerPerl*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__color = slot;
	return true;
}

QColor* QsciLexerPerl_virtualbase_color(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerPerl*)(self) )->virtualbase_color(style);
}

bool QsciLexerPerl_override_virtual_eolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPerl* self_cast = dynamic_cast<MiqtVirtualQsciLexerPerl*>( (QsciLexerPerl*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eolFill = slot;
	return true;
}

bool QsciLexerPerl_virtualbase_eolFill(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerPerl*)(self) )->virtualbase_eolFill(style);
}

bool QsciLexerPerl_override_virtual_font(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPerl* self_cast = dynamic_cast<MiqtVirtualQsciLexerPerl*>( (QsciLexerPerl*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__font = slot;
	return true;
}

QFont* QsciLexerPerl_virtualbase_font(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerPerl*)(self) )->virtualbase_font(style);
}

bool QsciLexerPerl_override_virtual_indentationGuideView(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPerl* self_cast = dynamic_cast<MiqtVirtualQsciLexerPerl*>( (QsciLexerPerl*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__indentationGuideView = slot;
	return true;
}

int QsciLexerPerl_virtualbase_indentationGuideView(const void* self) {
	return ( (const MiqtVirtualQsciLexerPerl*)(self) )->virtualbase_indentationGuideView();
}

bool QsciLexerPerl_override_virtual_keywords(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPerl* self_cast = dynamic_cast<MiqtVirtualQsciLexerPerl*>( (QsciLexerPerl*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keywords = slot;
	return true;
}

const char* QsciLexerPerl_virtualbase_keywords(const void* self, int set) {
	return ( (const MiqtVirtualQsciLexerPerl*)(self) )->virtualbase_keywords(set);
}

bool QsciLexerPerl_override_virtual_defaultStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPerl* self_cast = dynamic_cast<MiqtVirtualQsciLexerPerl*>( (QsciLexerPerl*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__defaultStyle = slot;
	return true;
}

int QsciLexerPerl_virtualbase_defaultStyle(const void* self) {
	return ( (const MiqtVirtualQsciLexerPerl*)(self) )->virtualbase_defaultStyle();
}

bool QsciLexerPerl_override_virtual_description(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPerl* self_cast = dynamic_cast<MiqtVirtualQsciLexerPerl*>( (QsciLexerPerl*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__description = slot;
	return true;
}

bool QsciLexerPerl_override_virtual_paper(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPerl* self_cast = dynamic_cast<MiqtVirtualQsciLexerPerl*>( (QsciLexerPerl*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paper = slot;
	return true;
}

QColor* QsciLexerPerl_virtualbase_paper(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerPerl*)(self) )->virtualbase_paper(style);
}

bool QsciLexerPerl_override_virtual_defaultColorWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPerl* self_cast = dynamic_cast<MiqtVirtualQsciLexerPerl*>( (QsciLexerPerl*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__defaultColorWithStyle = slot;
	return true;
}

QColor* QsciLexerPerl_virtualbase_defaultColorWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerPerl*)(self) )->virtualbase_defaultColorWithStyle(style);
}

bool QsciLexerPerl_override_virtual_defaultEolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPerl* self_cast = dynamic_cast<MiqtVirtualQsciLexerPerl*>( (QsciLexerPerl*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__defaultEolFill = slot;
	return true;
}

bool QsciLexerPerl_virtualbase_defaultEolFill(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerPerl*)(self) )->virtualbase_defaultEolFill(style);
}

bool QsciLexerPerl_override_virtual_defaultFontWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPerl* self_cast = dynamic_cast<MiqtVirtualQsciLexerPerl*>( (QsciLexerPerl*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__defaultFontWithStyle = slot;
	return true;
}

QFont* QsciLexerPerl_virtualbase_defaultFontWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerPerl*)(self) )->virtualbase_defaultFontWithStyle(style);
}

bool QsciLexerPerl_override_virtual_defaultPaperWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPerl* self_cast = dynamic_cast<MiqtVirtualQsciLexerPerl*>( (QsciLexerPerl*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__defaultPaperWithStyle = slot;
	return true;
}

QColor* QsciLexerPerl_virtualbase_defaultPaperWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerPerl*)(self) )->virtualbase_defaultPaperWithStyle(style);
}

bool QsciLexerPerl_override_virtual_setEditor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPerl* self_cast = dynamic_cast<MiqtVirtualQsciLexerPerl*>( (QsciLexerPerl*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setEditor = slot;
	return true;
}

void QsciLexerPerl_virtualbase_setEditor(void* self, QsciScintilla* editor) {
	( (MiqtVirtualQsciLexerPerl*)(self) )->virtualbase_setEditor(editor);
}

bool QsciLexerPerl_override_virtual_refreshProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPerl* self_cast = dynamic_cast<MiqtVirtualQsciLexerPerl*>( (QsciLexerPerl*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__refreshProperties = slot;
	return true;
}

void QsciLexerPerl_virtualbase_refreshProperties(void* self) {
	( (MiqtVirtualQsciLexerPerl*)(self) )->virtualbase_refreshProperties();
}

bool QsciLexerPerl_override_virtual_styleBitsNeeded(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPerl* self_cast = dynamic_cast<MiqtVirtualQsciLexerPerl*>( (QsciLexerPerl*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__styleBitsNeeded = slot;
	return true;
}

int QsciLexerPerl_virtualbase_styleBitsNeeded(const void* self) {
	return ( (const MiqtVirtualQsciLexerPerl*)(self) )->virtualbase_styleBitsNeeded();
}

bool QsciLexerPerl_override_virtual_wordCharacters(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPerl* self_cast = dynamic_cast<MiqtVirtualQsciLexerPerl*>( (QsciLexerPerl*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wordCharacters = slot;
	return true;
}

const char* QsciLexerPerl_virtualbase_wordCharacters(const void* self) {
	return ( (const MiqtVirtualQsciLexerPerl*)(self) )->virtualbase_wordCharacters();
}

bool QsciLexerPerl_override_virtual_setAutoIndentStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPerl* self_cast = dynamic_cast<MiqtVirtualQsciLexerPerl*>( (QsciLexerPerl*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setAutoIndentStyle = slot;
	return true;
}

void QsciLexerPerl_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle) {
	( (MiqtVirtualQsciLexerPerl*)(self) )->virtualbase_setAutoIndentStyle(autoindentstyle);
}

bool QsciLexerPerl_override_virtual_setColor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPerl* self_cast = dynamic_cast<MiqtVirtualQsciLexerPerl*>( (QsciLexerPerl*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setColor = slot;
	return true;
}

void QsciLexerPerl_virtualbase_setColor(void* self, QColor* c, int style) {
	( (MiqtVirtualQsciLexerPerl*)(self) )->virtualbase_setColor(c, style);
}

bool QsciLexerPerl_override_virtual_setEolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPerl* self_cast = dynamic_cast<MiqtVirtualQsciLexerPerl*>( (QsciLexerPerl*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setEolFill = slot;
	return true;
}

void QsciLexerPerl_virtualbase_setEolFill(void* self, bool eoffill, int style) {
	( (MiqtVirtualQsciLexerPerl*)(self) )->virtualbase_setEolFill(eoffill, style);
}

bool QsciLexerPerl_override_virtual_setFont(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPerl* self_cast = dynamic_cast<MiqtVirtualQsciLexerPerl*>( (QsciLexerPerl*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setFont = slot;
	return true;
}

void QsciLexerPerl_virtualbase_setFont(void* self, QFont* f, int style) {
	( (MiqtVirtualQsciLexerPerl*)(self) )->virtualbase_setFont(f, style);
}

bool QsciLexerPerl_override_virtual_setPaper(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPerl* self_cast = dynamic_cast<MiqtVirtualQsciLexerPerl*>( (QsciLexerPerl*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setPaper = slot;
	return true;
}

void QsciLexerPerl_virtualbase_setPaper(void* self, QColor* c, int style) {
	( (MiqtVirtualQsciLexerPerl*)(self) )->virtualbase_setPaper(c, style);
}

bool QsciLexerPerl_override_virtual_readProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPerl* self_cast = dynamic_cast<MiqtVirtualQsciLexerPerl*>( (QsciLexerPerl*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__readProperties = slot;
	return true;
}

bool QsciLexerPerl_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix) {
	return ( (MiqtVirtualQsciLexerPerl*)(self) )->virtualbase_readProperties(qs, prefix);
}

bool QsciLexerPerl_override_virtual_writeProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPerl* self_cast = dynamic_cast<MiqtVirtualQsciLexerPerl*>( (QsciLexerPerl*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__writeProperties = slot;
	return true;
}

bool QsciLexerPerl_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix) {
	return ( (const MiqtVirtualQsciLexerPerl*)(self) )->virtualbase_writeProperties(qs, prefix);
}

bool QsciLexerPerl_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPerl* self_cast = dynamic_cast<MiqtVirtualQsciLexerPerl*>( (QsciLexerPerl*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QsciLexerPerl_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQsciLexerPerl*)(self) )->virtualbase_event(event);
}

bool QsciLexerPerl_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPerl* self_cast = dynamic_cast<MiqtVirtualQsciLexerPerl*>( (QsciLexerPerl*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QsciLexerPerl_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQsciLexerPerl*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QsciLexerPerl_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPerl* self_cast = dynamic_cast<MiqtVirtualQsciLexerPerl*>( (QsciLexerPerl*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QsciLexerPerl_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQsciLexerPerl*)(self) )->virtualbase_timerEvent(event);
}

bool QsciLexerPerl_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPerl* self_cast = dynamic_cast<MiqtVirtualQsciLexerPerl*>( (QsciLexerPerl*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QsciLexerPerl_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQsciLexerPerl*)(self) )->virtualbase_childEvent(event);
}

bool QsciLexerPerl_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPerl* self_cast = dynamic_cast<MiqtVirtualQsciLexerPerl*>( (QsciLexerPerl*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QsciLexerPerl_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQsciLexerPerl*)(self) )->virtualbase_customEvent(event);
}

bool QsciLexerPerl_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPerl* self_cast = dynamic_cast<MiqtVirtualQsciLexerPerl*>( (QsciLexerPerl*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QsciLexerPerl_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQsciLexerPerl*)(self) )->virtualbase_connectNotify(signal);
}

bool QsciLexerPerl_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerPerl* self_cast = dynamic_cast<MiqtVirtualQsciLexerPerl*>( (QsciLexerPerl*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QsciLexerPerl_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQsciLexerPerl*)(self) )->virtualbase_disconnectNotify(signal);
}

void QsciLexerPerl_delete(QsciLexerPerl* self) {
	delete self;
}

