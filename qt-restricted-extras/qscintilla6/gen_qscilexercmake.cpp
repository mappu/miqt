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
#include <qscilexercmake.h>
#include "gen_qscilexercmake.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QsciLexerCMake_setFoldAtElse(QsciLexerCMake*, intptr_t, bool);
const char* miqt_exec_callback_QsciLexerCMake_language(const QsciLexerCMake*, intptr_t);
const char* miqt_exec_callback_QsciLexerCMake_lexer(const QsciLexerCMake*, intptr_t);
int miqt_exec_callback_QsciLexerCMake_lexerId(const QsciLexerCMake*, intptr_t);
const char* miqt_exec_callback_QsciLexerCMake_autoCompletionFillups(const QsciLexerCMake*, intptr_t);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QsciLexerCMake_autoCompletionWordSeparators(const QsciLexerCMake*, intptr_t);
const char* miqt_exec_callback_QsciLexerCMake_blockEnd(const QsciLexerCMake*, intptr_t, int*);
int miqt_exec_callback_QsciLexerCMake_blockLookback(const QsciLexerCMake*, intptr_t);
const char* miqt_exec_callback_QsciLexerCMake_blockStart(const QsciLexerCMake*, intptr_t, int*);
const char* miqt_exec_callback_QsciLexerCMake_blockStartKeyword(const QsciLexerCMake*, intptr_t, int*);
int miqt_exec_callback_QsciLexerCMake_braceStyle(const QsciLexerCMake*, intptr_t);
bool miqt_exec_callback_QsciLexerCMake_caseSensitive(const QsciLexerCMake*, intptr_t);
QColor* miqt_exec_callback_QsciLexerCMake_color(const QsciLexerCMake*, intptr_t, int);
bool miqt_exec_callback_QsciLexerCMake_eolFill(const QsciLexerCMake*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerCMake_font(const QsciLexerCMake*, intptr_t, int);
int miqt_exec_callback_QsciLexerCMake_indentationGuideView(const QsciLexerCMake*, intptr_t);
const char* miqt_exec_callback_QsciLexerCMake_keywords(const QsciLexerCMake*, intptr_t, int);
int miqt_exec_callback_QsciLexerCMake_defaultStyle(const QsciLexerCMake*, intptr_t);
struct miqt_string miqt_exec_callback_QsciLexerCMake_description(const QsciLexerCMake*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerCMake_paper(const QsciLexerCMake*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerCMake_defaultColorWithStyle(const QsciLexerCMake*, intptr_t, int);
bool miqt_exec_callback_QsciLexerCMake_defaultEolFill(const QsciLexerCMake*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerCMake_defaultFontWithStyle(const QsciLexerCMake*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerCMake_defaultPaperWithStyle(const QsciLexerCMake*, intptr_t, int);
void miqt_exec_callback_QsciLexerCMake_setEditor(QsciLexerCMake*, intptr_t, QsciScintilla*);
void miqt_exec_callback_QsciLexerCMake_refreshProperties(QsciLexerCMake*, intptr_t);
int miqt_exec_callback_QsciLexerCMake_styleBitsNeeded(const QsciLexerCMake*, intptr_t);
const char* miqt_exec_callback_QsciLexerCMake_wordCharacters(const QsciLexerCMake*, intptr_t);
void miqt_exec_callback_QsciLexerCMake_setAutoIndentStyle(QsciLexerCMake*, intptr_t, int);
void miqt_exec_callback_QsciLexerCMake_setColor(QsciLexerCMake*, intptr_t, QColor*, int);
void miqt_exec_callback_QsciLexerCMake_setEolFill(QsciLexerCMake*, intptr_t, bool, int);
void miqt_exec_callback_QsciLexerCMake_setFont(QsciLexerCMake*, intptr_t, QFont*, int);
void miqt_exec_callback_QsciLexerCMake_setPaper(QsciLexerCMake*, intptr_t, QColor*, int);
bool miqt_exec_callback_QsciLexerCMake_readProperties(QsciLexerCMake*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerCMake_writeProperties(const QsciLexerCMake*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerCMake_event(QsciLexerCMake*, intptr_t, QEvent*);
bool miqt_exec_callback_QsciLexerCMake_eventFilter(QsciLexerCMake*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QsciLexerCMake_timerEvent(QsciLexerCMake*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QsciLexerCMake_childEvent(QsciLexerCMake*, intptr_t, QChildEvent*);
void miqt_exec_callback_QsciLexerCMake_customEvent(QsciLexerCMake*, intptr_t, QEvent*);
void miqt_exec_callback_QsciLexerCMake_connectNotify(QsciLexerCMake*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QsciLexerCMake_disconnectNotify(QsciLexerCMake*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciLexerCMake final : public QsciLexerCMake {
public:

	MiqtVirtualQsciLexerCMake(): QsciLexerCMake() {};
	MiqtVirtualQsciLexerCMake(QObject* parent): QsciLexerCMake(parent) {};

	virtual ~MiqtVirtualQsciLexerCMake() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setFoldAtElse = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldAtElse(bool fold) override {
		if (handle__setFoldAtElse == 0) {
			QsciLexerCMake::setFoldAtElse(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerCMake_setFoldAtElse(this, handle__setFoldAtElse, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setFoldAtElse(bool fold) {

		QsciLexerCMake::setFoldAtElse(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__language = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* language() const override {
		if (handle__language == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerCMake_language(this, handle__language);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__lexer = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* lexer() const override {
		if (handle__lexer == 0) {
			return QsciLexerCMake::lexer();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerCMake_lexer(this, handle__lexer);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_lexer() const {

		return (const char*) QsciLexerCMake::lexer();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__lexerId = 0;

	// Subclass to allow providing a Go implementation
	virtual int lexerId() const override {
		if (handle__lexerId == 0) {
			return QsciLexerCMake::lexerId();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerCMake_lexerId(this, handle__lexerId);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_lexerId() const {

		return QsciLexerCMake::lexerId();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__autoCompletionFillups = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* autoCompletionFillups() const override {
		if (handle__autoCompletionFillups == 0) {
			return QsciLexerCMake::autoCompletionFillups();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerCMake_autoCompletionFillups(this, handle__autoCompletionFillups);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_autoCompletionFillups() const {

		return (const char*) QsciLexerCMake::autoCompletionFillups();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__autoCompletionWordSeparators = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList autoCompletionWordSeparators() const override {
		if (handle__autoCompletionWordSeparators == 0) {
			return QsciLexerCMake::autoCompletionWordSeparators();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QsciLexerCMake_autoCompletionWordSeparators(this, handle__autoCompletionWordSeparators);
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

		QStringList _ret = QsciLexerCMake::autoCompletionWordSeparators();
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
			return QsciLexerCMake::blockEnd(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerCMake_blockEnd(this, handle__blockEnd, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_blockEnd(int* style) const {

		return (const char*) QsciLexerCMake::blockEnd(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockLookback = 0;

	// Subclass to allow providing a Go implementation
	virtual int blockLookback() const override {
		if (handle__blockLookback == 0) {
			return QsciLexerCMake::blockLookback();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerCMake_blockLookback(this, handle__blockLookback);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_blockLookback() const {

		return QsciLexerCMake::blockLookback();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockStart = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStart(int* style) const override {
		if (handle__blockStart == 0) {
			return QsciLexerCMake::blockStart(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerCMake_blockStart(this, handle__blockStart, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_blockStart(int* style) const {

		return (const char*) QsciLexerCMake::blockStart(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockStartKeyword = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStartKeyword(int* style) const override {
		if (handle__blockStartKeyword == 0) {
			return QsciLexerCMake::blockStartKeyword(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerCMake_blockStartKeyword(this, handle__blockStartKeyword, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_blockStartKeyword(int* style) const {

		return (const char*) QsciLexerCMake::blockStartKeyword(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__braceStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int braceStyle() const override {
		if (handle__braceStyle == 0) {
			return QsciLexerCMake::braceStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerCMake_braceStyle(this, handle__braceStyle);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_braceStyle() const {

		return QsciLexerCMake::braceStyle();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__caseSensitive = 0;

	// Subclass to allow providing a Go implementation
	virtual bool caseSensitive() const override {
		if (handle__caseSensitive == 0) {
			return QsciLexerCMake::caseSensitive();
		}
		

		bool callback_return_value = miqt_exec_callback_QsciLexerCMake_caseSensitive(this, handle__caseSensitive);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_caseSensitive() const {

		return QsciLexerCMake::caseSensitive();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__color = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor color(int style) const override {
		if (handle__color == 0) {
			return QsciLexerCMake::color(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerCMake_color(this, handle__color, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_color(int style) const {

		return new QColor(QsciLexerCMake::color(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eolFill(int style) const override {
		if (handle__eolFill == 0) {
			return QsciLexerCMake::eolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexerCMake_eolFill(this, handle__eolFill, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eolFill(int style) const {

		return QsciLexerCMake::eolFill(static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__font = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont font(int style) const override {
		if (handle__font == 0) {
			return QsciLexerCMake::font(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexerCMake_font(this, handle__font, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QFont* virtualbase_font(int style) const {

		return new QFont(QsciLexerCMake::font(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__indentationGuideView = 0;

	// Subclass to allow providing a Go implementation
	virtual int indentationGuideView() const override {
		if (handle__indentationGuideView == 0) {
			return QsciLexerCMake::indentationGuideView();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerCMake_indentationGuideView(this, handle__indentationGuideView);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_indentationGuideView() const {

		return QsciLexerCMake::indentationGuideView();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keywords = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* keywords(int set) const override {
		if (handle__keywords == 0) {
			return QsciLexerCMake::keywords(set);
		}
		
		int sigval1 = set;

		const char* callback_return_value = miqt_exec_callback_QsciLexerCMake_keywords(this, handle__keywords, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_keywords(int set) const {

		return (const char*) QsciLexerCMake::keywords(static_cast<int>(set));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int defaultStyle() const override {
		if (handle__defaultStyle == 0) {
			return QsciLexerCMake::defaultStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerCMake_defaultStyle(this, handle__defaultStyle);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_defaultStyle() const {

		return QsciLexerCMake::defaultStyle();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__description = 0;

	// Subclass to allow providing a Go implementation
	virtual QString description(int style) const override {
		if (handle__description == 0) {
			return QString(); // Pure virtual, there is no base we can call
		}
		
		int sigval1 = style;

		struct miqt_string callback_return_value = miqt_exec_callback_QsciLexerCMake_description(this, handle__description, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paper = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor paper(int style) const override {
		if (handle__paper == 0) {
			return QsciLexerCMake::paper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerCMake_paper(this, handle__paper, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_paper(int style) const {

		return new QColor(QsciLexerCMake::paper(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultColorWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultColor(int style) const override {
		if (handle__defaultColorWithStyle == 0) {
			return QsciLexerCMake::defaultColor(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerCMake_defaultColorWithStyle(this, handle__defaultColorWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_defaultColorWithStyle(int style) const {

		return new QColor(QsciLexerCMake::defaultColor(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool defaultEolFill(int style) const override {
		if (handle__defaultEolFill == 0) {
			return QsciLexerCMake::defaultEolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexerCMake_defaultEolFill(this, handle__defaultEolFill, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_defaultEolFill(int style) const {

		return QsciLexerCMake::defaultEolFill(static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultFontWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont defaultFont(int style) const override {
		if (handle__defaultFontWithStyle == 0) {
			return QsciLexerCMake::defaultFont(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexerCMake_defaultFontWithStyle(this, handle__defaultFontWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QFont* virtualbase_defaultFontWithStyle(int style) const {

		return new QFont(QsciLexerCMake::defaultFont(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultPaperWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultPaper(int style) const override {
		if (handle__defaultPaperWithStyle == 0) {
			return QsciLexerCMake::defaultPaper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerCMake_defaultPaperWithStyle(this, handle__defaultPaperWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_defaultPaperWithStyle(int style) const {

		return new QColor(QsciLexerCMake::defaultPaper(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEditor(QsciScintilla* editor) override {
		if (handle__setEditor == 0) {
			QsciLexerCMake::setEditor(editor);
			return;
		}
		
		QsciScintilla* sigval1 = editor;

		miqt_exec_callback_QsciLexerCMake_setEditor(this, handle__setEditor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setEditor(QsciScintilla* editor) {

		QsciLexerCMake::setEditor(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__refreshProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual void refreshProperties() override {
		if (handle__refreshProperties == 0) {
			QsciLexerCMake::refreshProperties();
			return;
		}
		

		miqt_exec_callback_QsciLexerCMake_refreshProperties(this, handle__refreshProperties);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_refreshProperties() {

		QsciLexerCMake::refreshProperties();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__styleBitsNeeded = 0;

	// Subclass to allow providing a Go implementation
	virtual int styleBitsNeeded() const override {
		if (handle__styleBitsNeeded == 0) {
			return QsciLexerCMake::styleBitsNeeded();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerCMake_styleBitsNeeded(this, handle__styleBitsNeeded);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_styleBitsNeeded() const {

		return QsciLexerCMake::styleBitsNeeded();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wordCharacters = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* wordCharacters() const override {
		if (handle__wordCharacters == 0) {
			return QsciLexerCMake::wordCharacters();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerCMake_wordCharacters(this, handle__wordCharacters);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_wordCharacters() const {

		return (const char*) QsciLexerCMake::wordCharacters();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAutoIndentStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAutoIndentStyle(int autoindentstyle) override {
		if (handle__setAutoIndentStyle == 0) {
			QsciLexerCMake::setAutoIndentStyle(autoindentstyle);
			return;
		}
		
		int sigval1 = autoindentstyle;

		miqt_exec_callback_QsciLexerCMake_setAutoIndentStyle(this, handle__setAutoIndentStyle, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setAutoIndentStyle(int autoindentstyle) {

		QsciLexerCMake::setAutoIndentStyle(static_cast<int>(autoindentstyle));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setColor(const QColor& c, int style) override {
		if (handle__setColor == 0) {
			QsciLexerCMake::setColor(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerCMake_setColor(this, handle__setColor, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setColor(QColor* c, int style) {

		QsciLexerCMake::setColor(*c, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEolFill(bool eoffill, int style) override {
		if (handle__setEolFill == 0) {
			QsciLexerCMake::setEolFill(eoffill, style);
			return;
		}
		
		bool sigval1 = eoffill;
		int sigval2 = style;

		miqt_exec_callback_QsciLexerCMake_setEolFill(this, handle__setEolFill, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setEolFill(bool eoffill, int style) {

		QsciLexerCMake::setEolFill(eoffill, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setFont = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFont(const QFont& f, int style) override {
		if (handle__setFont == 0) {
			QsciLexerCMake::setFont(f, style);
			return;
		}
		
		const QFont& f_ret = f;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&f_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerCMake_setFont(this, handle__setFont, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setFont(QFont* f, int style) {

		QsciLexerCMake::setFont(*f, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setPaper = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPaper(const QColor& c, int style) override {
		if (handle__setPaper == 0) {
			QsciLexerCMake::setPaper(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerCMake_setPaper(this, handle__setPaper, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setPaper(QColor* c, int style) {

		QsciLexerCMake::setPaper(*c, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__readProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool readProperties(QSettings& qs, const QString& prefix) override {
		if (handle__readProperties == 0) {
			return QsciLexerCMake::readProperties(qs, prefix);
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

		bool callback_return_value = miqt_exec_callback_QsciLexerCMake_readProperties(this, handle__readProperties, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_readProperties(QSettings* qs, struct miqt_string prefix) {
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

		return QsciLexerCMake::readProperties(*qs, prefix_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__writeProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
		if (handle__writeProperties == 0) {
			return QsciLexerCMake::writeProperties(qs, prefix);
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

		bool callback_return_value = miqt_exec_callback_QsciLexerCMake_writeProperties(this, handle__writeProperties, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_writeProperties(QSettings* qs, struct miqt_string prefix) const {
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

		return QsciLexerCMake::writeProperties(*qs, prefix_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QsciLexerCMake::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QsciLexerCMake_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QsciLexerCMake::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QsciLexerCMake::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QsciLexerCMake_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QsciLexerCMake::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QsciLexerCMake::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QsciLexerCMake_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QsciLexerCMake::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QsciLexerCMake::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QsciLexerCMake_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QsciLexerCMake::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QsciLexerCMake::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QsciLexerCMake_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QsciLexerCMake::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QsciLexerCMake::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciLexerCMake_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QsciLexerCMake::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QsciLexerCMake::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciLexerCMake_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QsciLexerCMake::disconnectNotify(*signal);

	}

};

QsciLexerCMake* QsciLexerCMake_new() {
	return new MiqtVirtualQsciLexerCMake();
}

QsciLexerCMake* QsciLexerCMake_new2(QObject* parent) {
	return new MiqtVirtualQsciLexerCMake(parent);
}

void QsciLexerCMake_virtbase(QsciLexerCMake* src, QsciLexer** outptr_QsciLexer) {
	*outptr_QsciLexer = static_cast<QsciLexer*>(src);
}

QMetaObject* QsciLexerCMake_metaObject(const QsciLexerCMake* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerCMake_metacast(QsciLexerCMake* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerCMake_tr(const char* s) {
	QString _ret = QsciLexerCMake::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerCMake_language(const QsciLexerCMake* self) {
	return (const char*) self->language();
}

const char* QsciLexerCMake_lexer(const QsciLexerCMake* self) {
	return (const char*) self->lexer();
}

QColor* QsciLexerCMake_defaultColor(const QsciLexerCMake* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerCMake_defaultFont(const QsciLexerCMake* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerCMake_defaultPaper(const QsciLexerCMake* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerCMake_keywords(const QsciLexerCMake* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerCMake_description(const QsciLexerCMake* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerCMake_refreshProperties(QsciLexerCMake* self) {
	self->refreshProperties();
}

bool QsciLexerCMake_foldAtElse(const QsciLexerCMake* self) {
	return self->foldAtElse();
}

void QsciLexerCMake_setFoldAtElse(QsciLexerCMake* self, bool fold) {
	self->setFoldAtElse(fold);
}

struct miqt_string QsciLexerCMake_tr2(const char* s, const char* c) {
	QString _ret = QsciLexerCMake::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerCMake_tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerCMake::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QsciLexerCMake_override_virtual_setFoldAtElse(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCMake* self_cast = dynamic_cast<MiqtVirtualQsciLexerCMake*>( (QsciLexerCMake*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setFoldAtElse = slot;
	return true;
}

void QsciLexerCMake_virtualbase_setFoldAtElse(void* self, bool fold) {
	( (MiqtVirtualQsciLexerCMake*)(self) )->virtualbase_setFoldAtElse(fold);
}

bool QsciLexerCMake_override_virtual_language(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCMake* self_cast = dynamic_cast<MiqtVirtualQsciLexerCMake*>( (QsciLexerCMake*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__language = slot;
	return true;
}

bool QsciLexerCMake_override_virtual_lexer(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCMake* self_cast = dynamic_cast<MiqtVirtualQsciLexerCMake*>( (QsciLexerCMake*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__lexer = slot;
	return true;
}

const char* QsciLexerCMake_virtualbase_lexer(const void* self) {
	return ( (const MiqtVirtualQsciLexerCMake*)(self) )->virtualbase_lexer();
}

bool QsciLexerCMake_override_virtual_lexerId(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCMake* self_cast = dynamic_cast<MiqtVirtualQsciLexerCMake*>( (QsciLexerCMake*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__lexerId = slot;
	return true;
}

int QsciLexerCMake_virtualbase_lexerId(const void* self) {
	return ( (const MiqtVirtualQsciLexerCMake*)(self) )->virtualbase_lexerId();
}

bool QsciLexerCMake_override_virtual_autoCompletionFillups(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCMake* self_cast = dynamic_cast<MiqtVirtualQsciLexerCMake*>( (QsciLexerCMake*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__autoCompletionFillups = slot;
	return true;
}

const char* QsciLexerCMake_virtualbase_autoCompletionFillups(const void* self) {
	return ( (const MiqtVirtualQsciLexerCMake*)(self) )->virtualbase_autoCompletionFillups();
}

bool QsciLexerCMake_override_virtual_autoCompletionWordSeparators(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCMake* self_cast = dynamic_cast<MiqtVirtualQsciLexerCMake*>( (QsciLexerCMake*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__autoCompletionWordSeparators = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QsciLexerCMake_virtualbase_autoCompletionWordSeparators(const void* self) {
	return ( (const MiqtVirtualQsciLexerCMake*)(self) )->virtualbase_autoCompletionWordSeparators();
}

bool QsciLexerCMake_override_virtual_blockEnd(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCMake* self_cast = dynamic_cast<MiqtVirtualQsciLexerCMake*>( (QsciLexerCMake*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__blockEnd = slot;
	return true;
}

const char* QsciLexerCMake_virtualbase_blockEnd(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerCMake*)(self) )->virtualbase_blockEnd(style);
}

bool QsciLexerCMake_override_virtual_blockLookback(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCMake* self_cast = dynamic_cast<MiqtVirtualQsciLexerCMake*>( (QsciLexerCMake*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__blockLookback = slot;
	return true;
}

int QsciLexerCMake_virtualbase_blockLookback(const void* self) {
	return ( (const MiqtVirtualQsciLexerCMake*)(self) )->virtualbase_blockLookback();
}

bool QsciLexerCMake_override_virtual_blockStart(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCMake* self_cast = dynamic_cast<MiqtVirtualQsciLexerCMake*>( (QsciLexerCMake*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__blockStart = slot;
	return true;
}

const char* QsciLexerCMake_virtualbase_blockStart(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerCMake*)(self) )->virtualbase_blockStart(style);
}

bool QsciLexerCMake_override_virtual_blockStartKeyword(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCMake* self_cast = dynamic_cast<MiqtVirtualQsciLexerCMake*>( (QsciLexerCMake*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__blockStartKeyword = slot;
	return true;
}

const char* QsciLexerCMake_virtualbase_blockStartKeyword(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerCMake*)(self) )->virtualbase_blockStartKeyword(style);
}

bool QsciLexerCMake_override_virtual_braceStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCMake* self_cast = dynamic_cast<MiqtVirtualQsciLexerCMake*>( (QsciLexerCMake*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__braceStyle = slot;
	return true;
}

int QsciLexerCMake_virtualbase_braceStyle(const void* self) {
	return ( (const MiqtVirtualQsciLexerCMake*)(self) )->virtualbase_braceStyle();
}

bool QsciLexerCMake_override_virtual_caseSensitive(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCMake* self_cast = dynamic_cast<MiqtVirtualQsciLexerCMake*>( (QsciLexerCMake*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__caseSensitive = slot;
	return true;
}

bool QsciLexerCMake_virtualbase_caseSensitive(const void* self) {
	return ( (const MiqtVirtualQsciLexerCMake*)(self) )->virtualbase_caseSensitive();
}

bool QsciLexerCMake_override_virtual_color(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCMake* self_cast = dynamic_cast<MiqtVirtualQsciLexerCMake*>( (QsciLexerCMake*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__color = slot;
	return true;
}

QColor* QsciLexerCMake_virtualbase_color(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerCMake*)(self) )->virtualbase_color(style);
}

bool QsciLexerCMake_override_virtual_eolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCMake* self_cast = dynamic_cast<MiqtVirtualQsciLexerCMake*>( (QsciLexerCMake*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eolFill = slot;
	return true;
}

bool QsciLexerCMake_virtualbase_eolFill(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerCMake*)(self) )->virtualbase_eolFill(style);
}

bool QsciLexerCMake_override_virtual_font(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCMake* self_cast = dynamic_cast<MiqtVirtualQsciLexerCMake*>( (QsciLexerCMake*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__font = slot;
	return true;
}

QFont* QsciLexerCMake_virtualbase_font(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerCMake*)(self) )->virtualbase_font(style);
}

bool QsciLexerCMake_override_virtual_indentationGuideView(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCMake* self_cast = dynamic_cast<MiqtVirtualQsciLexerCMake*>( (QsciLexerCMake*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__indentationGuideView = slot;
	return true;
}

int QsciLexerCMake_virtualbase_indentationGuideView(const void* self) {
	return ( (const MiqtVirtualQsciLexerCMake*)(self) )->virtualbase_indentationGuideView();
}

bool QsciLexerCMake_override_virtual_keywords(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCMake* self_cast = dynamic_cast<MiqtVirtualQsciLexerCMake*>( (QsciLexerCMake*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keywords = slot;
	return true;
}

const char* QsciLexerCMake_virtualbase_keywords(const void* self, int set) {
	return ( (const MiqtVirtualQsciLexerCMake*)(self) )->virtualbase_keywords(set);
}

bool QsciLexerCMake_override_virtual_defaultStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCMake* self_cast = dynamic_cast<MiqtVirtualQsciLexerCMake*>( (QsciLexerCMake*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__defaultStyle = slot;
	return true;
}

int QsciLexerCMake_virtualbase_defaultStyle(const void* self) {
	return ( (const MiqtVirtualQsciLexerCMake*)(self) )->virtualbase_defaultStyle();
}

bool QsciLexerCMake_override_virtual_description(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCMake* self_cast = dynamic_cast<MiqtVirtualQsciLexerCMake*>( (QsciLexerCMake*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__description = slot;
	return true;
}

bool QsciLexerCMake_override_virtual_paper(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCMake* self_cast = dynamic_cast<MiqtVirtualQsciLexerCMake*>( (QsciLexerCMake*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paper = slot;
	return true;
}

QColor* QsciLexerCMake_virtualbase_paper(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerCMake*)(self) )->virtualbase_paper(style);
}

bool QsciLexerCMake_override_virtual_defaultColorWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCMake* self_cast = dynamic_cast<MiqtVirtualQsciLexerCMake*>( (QsciLexerCMake*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__defaultColorWithStyle = slot;
	return true;
}

QColor* QsciLexerCMake_virtualbase_defaultColorWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerCMake*)(self) )->virtualbase_defaultColorWithStyle(style);
}

bool QsciLexerCMake_override_virtual_defaultEolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCMake* self_cast = dynamic_cast<MiqtVirtualQsciLexerCMake*>( (QsciLexerCMake*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__defaultEolFill = slot;
	return true;
}

bool QsciLexerCMake_virtualbase_defaultEolFill(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerCMake*)(self) )->virtualbase_defaultEolFill(style);
}

bool QsciLexerCMake_override_virtual_defaultFontWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCMake* self_cast = dynamic_cast<MiqtVirtualQsciLexerCMake*>( (QsciLexerCMake*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__defaultFontWithStyle = slot;
	return true;
}

QFont* QsciLexerCMake_virtualbase_defaultFontWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerCMake*)(self) )->virtualbase_defaultFontWithStyle(style);
}

bool QsciLexerCMake_override_virtual_defaultPaperWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCMake* self_cast = dynamic_cast<MiqtVirtualQsciLexerCMake*>( (QsciLexerCMake*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__defaultPaperWithStyle = slot;
	return true;
}

QColor* QsciLexerCMake_virtualbase_defaultPaperWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerCMake*)(self) )->virtualbase_defaultPaperWithStyle(style);
}

bool QsciLexerCMake_override_virtual_setEditor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCMake* self_cast = dynamic_cast<MiqtVirtualQsciLexerCMake*>( (QsciLexerCMake*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setEditor = slot;
	return true;
}

void QsciLexerCMake_virtualbase_setEditor(void* self, QsciScintilla* editor) {
	( (MiqtVirtualQsciLexerCMake*)(self) )->virtualbase_setEditor(editor);
}

bool QsciLexerCMake_override_virtual_refreshProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCMake* self_cast = dynamic_cast<MiqtVirtualQsciLexerCMake*>( (QsciLexerCMake*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__refreshProperties = slot;
	return true;
}

void QsciLexerCMake_virtualbase_refreshProperties(void* self) {
	( (MiqtVirtualQsciLexerCMake*)(self) )->virtualbase_refreshProperties();
}

bool QsciLexerCMake_override_virtual_styleBitsNeeded(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCMake* self_cast = dynamic_cast<MiqtVirtualQsciLexerCMake*>( (QsciLexerCMake*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__styleBitsNeeded = slot;
	return true;
}

int QsciLexerCMake_virtualbase_styleBitsNeeded(const void* self) {
	return ( (const MiqtVirtualQsciLexerCMake*)(self) )->virtualbase_styleBitsNeeded();
}

bool QsciLexerCMake_override_virtual_wordCharacters(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCMake* self_cast = dynamic_cast<MiqtVirtualQsciLexerCMake*>( (QsciLexerCMake*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wordCharacters = slot;
	return true;
}

const char* QsciLexerCMake_virtualbase_wordCharacters(const void* self) {
	return ( (const MiqtVirtualQsciLexerCMake*)(self) )->virtualbase_wordCharacters();
}

bool QsciLexerCMake_override_virtual_setAutoIndentStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCMake* self_cast = dynamic_cast<MiqtVirtualQsciLexerCMake*>( (QsciLexerCMake*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setAutoIndentStyle = slot;
	return true;
}

void QsciLexerCMake_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle) {
	( (MiqtVirtualQsciLexerCMake*)(self) )->virtualbase_setAutoIndentStyle(autoindentstyle);
}

bool QsciLexerCMake_override_virtual_setColor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCMake* self_cast = dynamic_cast<MiqtVirtualQsciLexerCMake*>( (QsciLexerCMake*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setColor = slot;
	return true;
}

void QsciLexerCMake_virtualbase_setColor(void* self, QColor* c, int style) {
	( (MiqtVirtualQsciLexerCMake*)(self) )->virtualbase_setColor(c, style);
}

bool QsciLexerCMake_override_virtual_setEolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCMake* self_cast = dynamic_cast<MiqtVirtualQsciLexerCMake*>( (QsciLexerCMake*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setEolFill = slot;
	return true;
}

void QsciLexerCMake_virtualbase_setEolFill(void* self, bool eoffill, int style) {
	( (MiqtVirtualQsciLexerCMake*)(self) )->virtualbase_setEolFill(eoffill, style);
}

bool QsciLexerCMake_override_virtual_setFont(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCMake* self_cast = dynamic_cast<MiqtVirtualQsciLexerCMake*>( (QsciLexerCMake*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setFont = slot;
	return true;
}

void QsciLexerCMake_virtualbase_setFont(void* self, QFont* f, int style) {
	( (MiqtVirtualQsciLexerCMake*)(self) )->virtualbase_setFont(f, style);
}

bool QsciLexerCMake_override_virtual_setPaper(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCMake* self_cast = dynamic_cast<MiqtVirtualQsciLexerCMake*>( (QsciLexerCMake*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setPaper = slot;
	return true;
}

void QsciLexerCMake_virtualbase_setPaper(void* self, QColor* c, int style) {
	( (MiqtVirtualQsciLexerCMake*)(self) )->virtualbase_setPaper(c, style);
}

bool QsciLexerCMake_override_virtual_readProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCMake* self_cast = dynamic_cast<MiqtVirtualQsciLexerCMake*>( (QsciLexerCMake*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__readProperties = slot;
	return true;
}

bool QsciLexerCMake_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix) {
	return ( (MiqtVirtualQsciLexerCMake*)(self) )->virtualbase_readProperties(qs, prefix);
}

bool QsciLexerCMake_override_virtual_writeProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCMake* self_cast = dynamic_cast<MiqtVirtualQsciLexerCMake*>( (QsciLexerCMake*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__writeProperties = slot;
	return true;
}

bool QsciLexerCMake_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix) {
	return ( (const MiqtVirtualQsciLexerCMake*)(self) )->virtualbase_writeProperties(qs, prefix);
}

bool QsciLexerCMake_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCMake* self_cast = dynamic_cast<MiqtVirtualQsciLexerCMake*>( (QsciLexerCMake*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QsciLexerCMake_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQsciLexerCMake*)(self) )->virtualbase_event(event);
}

bool QsciLexerCMake_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCMake* self_cast = dynamic_cast<MiqtVirtualQsciLexerCMake*>( (QsciLexerCMake*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QsciLexerCMake_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQsciLexerCMake*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QsciLexerCMake_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCMake* self_cast = dynamic_cast<MiqtVirtualQsciLexerCMake*>( (QsciLexerCMake*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QsciLexerCMake_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQsciLexerCMake*)(self) )->virtualbase_timerEvent(event);
}

bool QsciLexerCMake_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCMake* self_cast = dynamic_cast<MiqtVirtualQsciLexerCMake*>( (QsciLexerCMake*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QsciLexerCMake_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQsciLexerCMake*)(self) )->virtualbase_childEvent(event);
}

bool QsciLexerCMake_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCMake* self_cast = dynamic_cast<MiqtVirtualQsciLexerCMake*>( (QsciLexerCMake*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QsciLexerCMake_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQsciLexerCMake*)(self) )->virtualbase_customEvent(event);
}

bool QsciLexerCMake_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCMake* self_cast = dynamic_cast<MiqtVirtualQsciLexerCMake*>( (QsciLexerCMake*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QsciLexerCMake_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQsciLexerCMake*)(self) )->virtualbase_connectNotify(signal);
}

bool QsciLexerCMake_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerCMake* self_cast = dynamic_cast<MiqtVirtualQsciLexerCMake*>( (QsciLexerCMake*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QsciLexerCMake_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQsciLexerCMake*)(self) )->virtualbase_disconnectNotify(signal);
}

void QsciLexerCMake_delete(QsciLexerCMake* self) {
	delete self;
}

