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
#include <qscilexertex.h>
#include "gen_qscilexertex.h"

#ifdef __cplusplus
extern "C" {
#endif

const char* miqt_exec_callback_QsciLexerTeX_Language(const QsciLexerTeX*, intptr_t);
const char* miqt_exec_callback_QsciLexerTeX_Lexer(const QsciLexerTeX*, intptr_t);
int miqt_exec_callback_QsciLexerTeX_LexerId(const QsciLexerTeX*, intptr_t);
const char* miqt_exec_callback_QsciLexerTeX_AutoCompletionFillups(const QsciLexerTeX*, intptr_t);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QsciLexerTeX_AutoCompletionWordSeparators(const QsciLexerTeX*, intptr_t);
const char* miqt_exec_callback_QsciLexerTeX_BlockEnd(const QsciLexerTeX*, intptr_t, int*);
int miqt_exec_callback_QsciLexerTeX_BlockLookback(const QsciLexerTeX*, intptr_t);
const char* miqt_exec_callback_QsciLexerTeX_BlockStart(const QsciLexerTeX*, intptr_t, int*);
const char* miqt_exec_callback_QsciLexerTeX_BlockStartKeyword(const QsciLexerTeX*, intptr_t, int*);
int miqt_exec_callback_QsciLexerTeX_BraceStyle(const QsciLexerTeX*, intptr_t);
bool miqt_exec_callback_QsciLexerTeX_CaseSensitive(const QsciLexerTeX*, intptr_t);
QColor* miqt_exec_callback_QsciLexerTeX_Color(const QsciLexerTeX*, intptr_t, int);
bool miqt_exec_callback_QsciLexerTeX_EolFill(const QsciLexerTeX*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerTeX_Font(const QsciLexerTeX*, intptr_t, int);
int miqt_exec_callback_QsciLexerTeX_IndentationGuideView(const QsciLexerTeX*, intptr_t);
const char* miqt_exec_callback_QsciLexerTeX_Keywords(const QsciLexerTeX*, intptr_t, int);
int miqt_exec_callback_QsciLexerTeX_DefaultStyle(const QsciLexerTeX*, intptr_t);
struct miqt_string miqt_exec_callback_QsciLexerTeX_Description(const QsciLexerTeX*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerTeX_Paper(const QsciLexerTeX*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerTeX_DefaultColorWithStyle(const QsciLexerTeX*, intptr_t, int);
bool miqt_exec_callback_QsciLexerTeX_DefaultEolFill(const QsciLexerTeX*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerTeX_DefaultFontWithStyle(const QsciLexerTeX*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerTeX_DefaultPaperWithStyle(const QsciLexerTeX*, intptr_t, int);
void miqt_exec_callback_QsciLexerTeX_SetEditor(QsciLexerTeX*, intptr_t, QsciScintilla*);
void miqt_exec_callback_QsciLexerTeX_RefreshProperties(QsciLexerTeX*, intptr_t);
int miqt_exec_callback_QsciLexerTeX_StyleBitsNeeded(const QsciLexerTeX*, intptr_t);
const char* miqt_exec_callback_QsciLexerTeX_WordCharacters(const QsciLexerTeX*, intptr_t);
void miqt_exec_callback_QsciLexerTeX_SetAutoIndentStyle(QsciLexerTeX*, intptr_t, int);
void miqt_exec_callback_QsciLexerTeX_SetColor(QsciLexerTeX*, intptr_t, QColor*, int);
void miqt_exec_callback_QsciLexerTeX_SetEolFill(QsciLexerTeX*, intptr_t, bool, int);
void miqt_exec_callback_QsciLexerTeX_SetFont(QsciLexerTeX*, intptr_t, QFont*, int);
void miqt_exec_callback_QsciLexerTeX_SetPaper(QsciLexerTeX*, intptr_t, QColor*, int);
bool miqt_exec_callback_QsciLexerTeX_ReadProperties(QsciLexerTeX*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerTeX_WriteProperties(const QsciLexerTeX*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerTeX_Event(QsciLexerTeX*, intptr_t, QEvent*);
bool miqt_exec_callback_QsciLexerTeX_EventFilter(QsciLexerTeX*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QsciLexerTeX_TimerEvent(QsciLexerTeX*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QsciLexerTeX_ChildEvent(QsciLexerTeX*, intptr_t, QChildEvent*);
void miqt_exec_callback_QsciLexerTeX_CustomEvent(QsciLexerTeX*, intptr_t, QEvent*);
void miqt_exec_callback_QsciLexerTeX_ConnectNotify(QsciLexerTeX*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QsciLexerTeX_DisconnectNotify(QsciLexerTeX*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciLexerTeX final : public QsciLexerTeX {
public:

	MiqtVirtualQsciLexerTeX(): QsciLexerTeX() {};
	MiqtVirtualQsciLexerTeX(QObject* parent): QsciLexerTeX(parent) {};

	virtual ~MiqtVirtualQsciLexerTeX() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Language = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* language() const override {
		if (handle__Language == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerTeX_Language(this, handle__Language);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Lexer = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* lexer() const override {
		if (handle__Lexer == 0) {
			return QsciLexerTeX::lexer();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerTeX_Lexer(this, handle__Lexer);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_Lexer() const {

		return (const char*) QsciLexerTeX::lexer();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LexerId = 0;

	// Subclass to allow providing a Go implementation
	virtual int lexerId() const override {
		if (handle__LexerId == 0) {
			return QsciLexerTeX::lexerId();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerTeX_LexerId(this, handle__LexerId);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_LexerId() const {

		return QsciLexerTeX::lexerId();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AutoCompletionFillups = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* autoCompletionFillups() const override {
		if (handle__AutoCompletionFillups == 0) {
			return QsciLexerTeX::autoCompletionFillups();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerTeX_AutoCompletionFillups(this, handle__AutoCompletionFillups);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_AutoCompletionFillups() const {

		return (const char*) QsciLexerTeX::autoCompletionFillups();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AutoCompletionWordSeparators = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList autoCompletionWordSeparators() const override {
		if (handle__AutoCompletionWordSeparators == 0) {
			return QsciLexerTeX::autoCompletionWordSeparators();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QsciLexerTeX_AutoCompletionWordSeparators(this, handle__AutoCompletionWordSeparators);
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
	struct miqt_array /* of struct miqt_string */  virtualbase_AutoCompletionWordSeparators() const {

		QStringList _ret = QsciLexerTeX::autoCompletionWordSeparators();
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
	intptr_t handle__BlockEnd = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockEnd(int* style) const override {
		if (handle__BlockEnd == 0) {
			return QsciLexerTeX::blockEnd(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerTeX_BlockEnd(this, handle__BlockEnd, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockEnd(int* style) const {

		return (const char*) QsciLexerTeX::blockEnd(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockLookback = 0;

	// Subclass to allow providing a Go implementation
	virtual int blockLookback() const override {
		if (handle__BlockLookback == 0) {
			return QsciLexerTeX::blockLookback();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerTeX_BlockLookback(this, handle__BlockLookback);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_BlockLookback() const {

		return QsciLexerTeX::blockLookback();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockStart = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStart(int* style) const override {
		if (handle__BlockStart == 0) {
			return QsciLexerTeX::blockStart(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerTeX_BlockStart(this, handle__BlockStart, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockStart(int* style) const {

		return (const char*) QsciLexerTeX::blockStart(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockStartKeyword = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStartKeyword(int* style) const override {
		if (handle__BlockStartKeyword == 0) {
			return QsciLexerTeX::blockStartKeyword(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerTeX_BlockStartKeyword(this, handle__BlockStartKeyword, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockStartKeyword(int* style) const {

		return (const char*) QsciLexerTeX::blockStartKeyword(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BraceStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int braceStyle() const override {
		if (handle__BraceStyle == 0) {
			return QsciLexerTeX::braceStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerTeX_BraceStyle(this, handle__BraceStyle);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_BraceStyle() const {

		return QsciLexerTeX::braceStyle();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CaseSensitive = 0;

	// Subclass to allow providing a Go implementation
	virtual bool caseSensitive() const override {
		if (handle__CaseSensitive == 0) {
			return QsciLexerTeX::caseSensitive();
		}
		

		bool callback_return_value = miqt_exec_callback_QsciLexerTeX_CaseSensitive(this, handle__CaseSensitive);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CaseSensitive() const {

		return QsciLexerTeX::caseSensitive();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Color = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor color(int style) const override {
		if (handle__Color == 0) {
			return QsciLexerTeX::color(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerTeX_Color(this, handle__Color, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_Color(int style) const {

		return new QColor(QsciLexerTeX::color(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eolFill(int style) const override {
		if (handle__EolFill == 0) {
			return QsciLexerTeX::eolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexerTeX_EolFill(this, handle__EolFill, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EolFill(int style) const {

		return QsciLexerTeX::eolFill(static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Font = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont font(int style) const override {
		if (handle__Font == 0) {
			return QsciLexerTeX::font(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexerTeX_Font(this, handle__Font, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QFont* virtualbase_Font(int style) const {

		return new QFont(QsciLexerTeX::font(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IndentationGuideView = 0;

	// Subclass to allow providing a Go implementation
	virtual int indentationGuideView() const override {
		if (handle__IndentationGuideView == 0) {
			return QsciLexerTeX::indentationGuideView();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerTeX_IndentationGuideView(this, handle__IndentationGuideView);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_IndentationGuideView() const {

		return QsciLexerTeX::indentationGuideView();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Keywords = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* keywords(int set) const override {
		if (handle__Keywords == 0) {
			return QsciLexerTeX::keywords(set);
		}
		
		int sigval1 = set;

		const char* callback_return_value = miqt_exec_callback_QsciLexerTeX_Keywords(this, handle__Keywords, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_Keywords(int set) const {

		return (const char*) QsciLexerTeX::keywords(static_cast<int>(set));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int defaultStyle() const override {
		if (handle__DefaultStyle == 0) {
			return QsciLexerTeX::defaultStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerTeX_DefaultStyle(this, handle__DefaultStyle);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DefaultStyle() const {

		return QsciLexerTeX::defaultStyle();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Description = 0;

	// Subclass to allow providing a Go implementation
	virtual QString description(int style) const override {
		if (handle__Description == 0) {
			return QString(); // Pure virtual, there is no base we can call
		}
		
		int sigval1 = style;

		struct miqt_string callback_return_value = miqt_exec_callback_QsciLexerTeX_Description(this, handle__Description, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paper = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor paper(int style) const override {
		if (handle__Paper == 0) {
			return QsciLexerTeX::paper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerTeX_Paper(this, handle__Paper, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_Paper(int style) const {

		return new QColor(QsciLexerTeX::paper(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultColorWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultColor(int style) const override {
		if (handle__DefaultColorWithStyle == 0) {
			return QsciLexerTeX::defaultColor(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerTeX_DefaultColorWithStyle(this, handle__DefaultColorWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_DefaultColorWithStyle(int style) const {

		return new QColor(QsciLexerTeX::defaultColor(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool defaultEolFill(int style) const override {
		if (handle__DefaultEolFill == 0) {
			return QsciLexerTeX::defaultEolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexerTeX_DefaultEolFill(this, handle__DefaultEolFill, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_DefaultEolFill(int style) const {

		return QsciLexerTeX::defaultEolFill(static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultFontWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont defaultFont(int style) const override {
		if (handle__DefaultFontWithStyle == 0) {
			return QsciLexerTeX::defaultFont(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexerTeX_DefaultFontWithStyle(this, handle__DefaultFontWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QFont* virtualbase_DefaultFontWithStyle(int style) const {

		return new QFont(QsciLexerTeX::defaultFont(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultPaperWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultPaper(int style) const override {
		if (handle__DefaultPaperWithStyle == 0) {
			return QsciLexerTeX::defaultPaper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerTeX_DefaultPaperWithStyle(this, handle__DefaultPaperWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_DefaultPaperWithStyle(int style) const {

		return new QColor(QsciLexerTeX::defaultPaper(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEditor(QsciScintilla* editor) override {
		if (handle__SetEditor == 0) {
			QsciLexerTeX::setEditor(editor);
			return;
		}
		
		QsciScintilla* sigval1 = editor;

		miqt_exec_callback_QsciLexerTeX_SetEditor(this, handle__SetEditor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetEditor(QsciScintilla* editor) {

		QsciLexerTeX::setEditor(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RefreshProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual void refreshProperties() override {
		if (handle__RefreshProperties == 0) {
			QsciLexerTeX::refreshProperties();
			return;
		}
		

		miqt_exec_callback_QsciLexerTeX_RefreshProperties(this, handle__RefreshProperties);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_RefreshProperties() {

		QsciLexerTeX::refreshProperties();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StyleBitsNeeded = 0;

	// Subclass to allow providing a Go implementation
	virtual int styleBitsNeeded() const override {
		if (handle__StyleBitsNeeded == 0) {
			return QsciLexerTeX::styleBitsNeeded();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerTeX_StyleBitsNeeded(this, handle__StyleBitsNeeded);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_StyleBitsNeeded() const {

		return QsciLexerTeX::styleBitsNeeded();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WordCharacters = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* wordCharacters() const override {
		if (handle__WordCharacters == 0) {
			return QsciLexerTeX::wordCharacters();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerTeX_WordCharacters(this, handle__WordCharacters);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_WordCharacters() const {

		return (const char*) QsciLexerTeX::wordCharacters();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAutoIndentStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAutoIndentStyle(int autoindentstyle) override {
		if (handle__SetAutoIndentStyle == 0) {
			QsciLexerTeX::setAutoIndentStyle(autoindentstyle);
			return;
		}
		
		int sigval1 = autoindentstyle;

		miqt_exec_callback_QsciLexerTeX_SetAutoIndentStyle(this, handle__SetAutoIndentStyle, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAutoIndentStyle(int autoindentstyle) {

		QsciLexerTeX::setAutoIndentStyle(static_cast<int>(autoindentstyle));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setColor(const QColor& c, int style) override {
		if (handle__SetColor == 0) {
			QsciLexerTeX::setColor(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerTeX_SetColor(this, handle__SetColor, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetColor(QColor* c, int style) {

		QsciLexerTeX::setColor(*c, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEolFill(bool eoffill, int style) override {
		if (handle__SetEolFill == 0) {
			QsciLexerTeX::setEolFill(eoffill, style);
			return;
		}
		
		bool sigval1 = eoffill;
		int sigval2 = style;

		miqt_exec_callback_QsciLexerTeX_SetEolFill(this, handle__SetEolFill, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetEolFill(bool eoffill, int style) {

		QsciLexerTeX::setEolFill(eoffill, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFont = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFont(const QFont& f, int style) override {
		if (handle__SetFont == 0) {
			QsciLexerTeX::setFont(f, style);
			return;
		}
		
		const QFont& f_ret = f;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&f_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerTeX_SetFont(this, handle__SetFont, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFont(QFont* f, int style) {

		QsciLexerTeX::setFont(*f, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetPaper = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPaper(const QColor& c, int style) override {
		if (handle__SetPaper == 0) {
			QsciLexerTeX::setPaper(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerTeX_SetPaper(this, handle__SetPaper, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetPaper(QColor* c, int style) {

		QsciLexerTeX::setPaper(*c, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReadProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool readProperties(QSettings& qs, const QString& prefix) override {
		if (handle__ReadProperties == 0) {
			return QsciLexerTeX::readProperties(qs, prefix);
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

		bool callback_return_value = miqt_exec_callback_QsciLexerTeX_ReadProperties(this, handle__ReadProperties, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_ReadProperties(QSettings* qs, struct miqt_string prefix) {
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

		return QsciLexerTeX::readProperties(*qs, prefix_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WriteProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
		if (handle__WriteProperties == 0) {
			return QsciLexerTeX::writeProperties(qs, prefix);
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

		bool callback_return_value = miqt_exec_callback_QsciLexerTeX_WriteProperties(this, handle__WriteProperties, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WriteProperties(QSettings* qs, struct miqt_string prefix) const {
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

		return QsciLexerTeX::writeProperties(*qs, prefix_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QsciLexerTeX::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QsciLexerTeX_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QsciLexerTeX::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QsciLexerTeX::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QsciLexerTeX_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QsciLexerTeX::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QsciLexerTeX::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QsciLexerTeX_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QsciLexerTeX::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QsciLexerTeX::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QsciLexerTeX_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QsciLexerTeX::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QsciLexerTeX::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QsciLexerTeX_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QsciLexerTeX::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QsciLexerTeX::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciLexerTeX_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QsciLexerTeX::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QsciLexerTeX::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciLexerTeX_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QsciLexerTeX::disconnectNotify(*signal);

	}

};

QsciLexerTeX* QsciLexerTeX_new() {
	return new MiqtVirtualQsciLexerTeX();
}

QsciLexerTeX* QsciLexerTeX_new2(QObject* parent) {
	return new MiqtVirtualQsciLexerTeX(parent);
}

void QsciLexerTeX_virtbase(QsciLexerTeX* src, QsciLexer** outptr_QsciLexer) {
	*outptr_QsciLexer = static_cast<QsciLexer*>(src);
}

QMetaObject* QsciLexerTeX_MetaObject(const QsciLexerTeX* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerTeX_Metacast(QsciLexerTeX* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerTeX_Tr(const char* s) {
	QString _ret = QsciLexerTeX::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerTeX_TrUtf8(const char* s) {
	QString _ret = QsciLexerTeX::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerTeX_Language(const QsciLexerTeX* self) {
	return (const char*) self->language();
}

const char* QsciLexerTeX_Lexer(const QsciLexerTeX* self) {
	return (const char*) self->lexer();
}

const char* QsciLexerTeX_WordCharacters(const QsciLexerTeX* self) {
	return (const char*) self->wordCharacters();
}

QColor* QsciLexerTeX_DefaultColor(const QsciLexerTeX* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

const char* QsciLexerTeX_Keywords(const QsciLexerTeX* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerTeX_Description(const QsciLexerTeX* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerTeX_RefreshProperties(QsciLexerTeX* self) {
	self->refreshProperties();
}

void QsciLexerTeX_SetFoldComments(QsciLexerTeX* self, bool fold) {
	self->setFoldComments(fold);
}

bool QsciLexerTeX_FoldComments(const QsciLexerTeX* self) {
	return self->foldComments();
}

void QsciLexerTeX_SetFoldCompact(QsciLexerTeX* self, bool fold) {
	self->setFoldCompact(fold);
}

bool QsciLexerTeX_FoldCompact(const QsciLexerTeX* self) {
	return self->foldCompact();
}

void QsciLexerTeX_SetProcessComments(QsciLexerTeX* self, bool enable) {
	self->setProcessComments(enable);
}

bool QsciLexerTeX_ProcessComments(const QsciLexerTeX* self) {
	return self->processComments();
}

void QsciLexerTeX_SetProcessIf(QsciLexerTeX* self, bool enable) {
	self->setProcessIf(enable);
}

bool QsciLexerTeX_ProcessIf(const QsciLexerTeX* self) {
	return self->processIf();
}

struct miqt_string QsciLexerTeX_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerTeX::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerTeX_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerTeX::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerTeX_TrUtf82(const char* s, const char* c) {
	QString _ret = QsciLexerTeX::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerTeX_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QsciLexerTeX::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QsciLexerTeX_override_virtual_Language(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTeX* self_cast = dynamic_cast<MiqtVirtualQsciLexerTeX*>( (QsciLexerTeX*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Language = slot;
	return true;
}

bool QsciLexerTeX_override_virtual_Lexer(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTeX* self_cast = dynamic_cast<MiqtVirtualQsciLexerTeX*>( (QsciLexerTeX*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Lexer = slot;
	return true;
}

const char* QsciLexerTeX_virtualbase_Lexer(const void* self) {
	return ( (const MiqtVirtualQsciLexerTeX*)(self) )->virtualbase_Lexer();
}

bool QsciLexerTeX_override_virtual_LexerId(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTeX* self_cast = dynamic_cast<MiqtVirtualQsciLexerTeX*>( (QsciLexerTeX*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LexerId = slot;
	return true;
}

int QsciLexerTeX_virtualbase_LexerId(const void* self) {
	return ( (const MiqtVirtualQsciLexerTeX*)(self) )->virtualbase_LexerId();
}

bool QsciLexerTeX_override_virtual_AutoCompletionFillups(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTeX* self_cast = dynamic_cast<MiqtVirtualQsciLexerTeX*>( (QsciLexerTeX*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__AutoCompletionFillups = slot;
	return true;
}

const char* QsciLexerTeX_virtualbase_AutoCompletionFillups(const void* self) {
	return ( (const MiqtVirtualQsciLexerTeX*)(self) )->virtualbase_AutoCompletionFillups();
}

bool QsciLexerTeX_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTeX* self_cast = dynamic_cast<MiqtVirtualQsciLexerTeX*>( (QsciLexerTeX*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__AutoCompletionWordSeparators = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QsciLexerTeX_virtualbase_AutoCompletionWordSeparators(const void* self) {
	return ( (const MiqtVirtualQsciLexerTeX*)(self) )->virtualbase_AutoCompletionWordSeparators();
}

bool QsciLexerTeX_override_virtual_BlockEnd(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTeX* self_cast = dynamic_cast<MiqtVirtualQsciLexerTeX*>( (QsciLexerTeX*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BlockEnd = slot;
	return true;
}

const char* QsciLexerTeX_virtualbase_BlockEnd(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerTeX*)(self) )->virtualbase_BlockEnd(style);
}

bool QsciLexerTeX_override_virtual_BlockLookback(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTeX* self_cast = dynamic_cast<MiqtVirtualQsciLexerTeX*>( (QsciLexerTeX*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BlockLookback = slot;
	return true;
}

int QsciLexerTeX_virtualbase_BlockLookback(const void* self) {
	return ( (const MiqtVirtualQsciLexerTeX*)(self) )->virtualbase_BlockLookback();
}

bool QsciLexerTeX_override_virtual_BlockStart(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTeX* self_cast = dynamic_cast<MiqtVirtualQsciLexerTeX*>( (QsciLexerTeX*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BlockStart = slot;
	return true;
}

const char* QsciLexerTeX_virtualbase_BlockStart(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerTeX*)(self) )->virtualbase_BlockStart(style);
}

bool QsciLexerTeX_override_virtual_BlockStartKeyword(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTeX* self_cast = dynamic_cast<MiqtVirtualQsciLexerTeX*>( (QsciLexerTeX*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BlockStartKeyword = slot;
	return true;
}

const char* QsciLexerTeX_virtualbase_BlockStartKeyword(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerTeX*)(self) )->virtualbase_BlockStartKeyword(style);
}

bool QsciLexerTeX_override_virtual_BraceStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTeX* self_cast = dynamic_cast<MiqtVirtualQsciLexerTeX*>( (QsciLexerTeX*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BraceStyle = slot;
	return true;
}

int QsciLexerTeX_virtualbase_BraceStyle(const void* self) {
	return ( (const MiqtVirtualQsciLexerTeX*)(self) )->virtualbase_BraceStyle();
}

bool QsciLexerTeX_override_virtual_CaseSensitive(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTeX* self_cast = dynamic_cast<MiqtVirtualQsciLexerTeX*>( (QsciLexerTeX*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CaseSensitive = slot;
	return true;
}

bool QsciLexerTeX_virtualbase_CaseSensitive(const void* self) {
	return ( (const MiqtVirtualQsciLexerTeX*)(self) )->virtualbase_CaseSensitive();
}

bool QsciLexerTeX_override_virtual_Color(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTeX* self_cast = dynamic_cast<MiqtVirtualQsciLexerTeX*>( (QsciLexerTeX*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Color = slot;
	return true;
}

QColor* QsciLexerTeX_virtualbase_Color(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerTeX*)(self) )->virtualbase_Color(style);
}

bool QsciLexerTeX_override_virtual_EolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTeX* self_cast = dynamic_cast<MiqtVirtualQsciLexerTeX*>( (QsciLexerTeX*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EolFill = slot;
	return true;
}

bool QsciLexerTeX_virtualbase_EolFill(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerTeX*)(self) )->virtualbase_EolFill(style);
}

bool QsciLexerTeX_override_virtual_Font(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTeX* self_cast = dynamic_cast<MiqtVirtualQsciLexerTeX*>( (QsciLexerTeX*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Font = slot;
	return true;
}

QFont* QsciLexerTeX_virtualbase_Font(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerTeX*)(self) )->virtualbase_Font(style);
}

bool QsciLexerTeX_override_virtual_IndentationGuideView(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTeX* self_cast = dynamic_cast<MiqtVirtualQsciLexerTeX*>( (QsciLexerTeX*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IndentationGuideView = slot;
	return true;
}

int QsciLexerTeX_virtualbase_IndentationGuideView(const void* self) {
	return ( (const MiqtVirtualQsciLexerTeX*)(self) )->virtualbase_IndentationGuideView();
}

bool QsciLexerTeX_override_virtual_Keywords(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTeX* self_cast = dynamic_cast<MiqtVirtualQsciLexerTeX*>( (QsciLexerTeX*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Keywords = slot;
	return true;
}

const char* QsciLexerTeX_virtualbase_Keywords(const void* self, int set) {
	return ( (const MiqtVirtualQsciLexerTeX*)(self) )->virtualbase_Keywords(set);
}

bool QsciLexerTeX_override_virtual_DefaultStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTeX* self_cast = dynamic_cast<MiqtVirtualQsciLexerTeX*>( (QsciLexerTeX*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DefaultStyle = slot;
	return true;
}

int QsciLexerTeX_virtualbase_DefaultStyle(const void* self) {
	return ( (const MiqtVirtualQsciLexerTeX*)(self) )->virtualbase_DefaultStyle();
}

bool QsciLexerTeX_override_virtual_Description(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTeX* self_cast = dynamic_cast<MiqtVirtualQsciLexerTeX*>( (QsciLexerTeX*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Description = slot;
	return true;
}

bool QsciLexerTeX_override_virtual_Paper(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTeX* self_cast = dynamic_cast<MiqtVirtualQsciLexerTeX*>( (QsciLexerTeX*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Paper = slot;
	return true;
}

QColor* QsciLexerTeX_virtualbase_Paper(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerTeX*)(self) )->virtualbase_Paper(style);
}

bool QsciLexerTeX_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTeX* self_cast = dynamic_cast<MiqtVirtualQsciLexerTeX*>( (QsciLexerTeX*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DefaultColorWithStyle = slot;
	return true;
}

QColor* QsciLexerTeX_virtualbase_DefaultColorWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerTeX*)(self) )->virtualbase_DefaultColorWithStyle(style);
}

bool QsciLexerTeX_override_virtual_DefaultEolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTeX* self_cast = dynamic_cast<MiqtVirtualQsciLexerTeX*>( (QsciLexerTeX*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DefaultEolFill = slot;
	return true;
}

bool QsciLexerTeX_virtualbase_DefaultEolFill(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerTeX*)(self) )->virtualbase_DefaultEolFill(style);
}

bool QsciLexerTeX_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTeX* self_cast = dynamic_cast<MiqtVirtualQsciLexerTeX*>( (QsciLexerTeX*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DefaultFontWithStyle = slot;
	return true;
}

QFont* QsciLexerTeX_virtualbase_DefaultFontWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerTeX*)(self) )->virtualbase_DefaultFontWithStyle(style);
}

bool QsciLexerTeX_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTeX* self_cast = dynamic_cast<MiqtVirtualQsciLexerTeX*>( (QsciLexerTeX*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DefaultPaperWithStyle = slot;
	return true;
}

QColor* QsciLexerTeX_virtualbase_DefaultPaperWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerTeX*)(self) )->virtualbase_DefaultPaperWithStyle(style);
}

bool QsciLexerTeX_override_virtual_SetEditor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTeX* self_cast = dynamic_cast<MiqtVirtualQsciLexerTeX*>( (QsciLexerTeX*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetEditor = slot;
	return true;
}

void QsciLexerTeX_virtualbase_SetEditor(void* self, QsciScintilla* editor) {
	( (MiqtVirtualQsciLexerTeX*)(self) )->virtualbase_SetEditor(editor);
}

bool QsciLexerTeX_override_virtual_RefreshProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTeX* self_cast = dynamic_cast<MiqtVirtualQsciLexerTeX*>( (QsciLexerTeX*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RefreshProperties = slot;
	return true;
}

void QsciLexerTeX_virtualbase_RefreshProperties(void* self) {
	( (MiqtVirtualQsciLexerTeX*)(self) )->virtualbase_RefreshProperties();
}

bool QsciLexerTeX_override_virtual_StyleBitsNeeded(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTeX* self_cast = dynamic_cast<MiqtVirtualQsciLexerTeX*>( (QsciLexerTeX*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__StyleBitsNeeded = slot;
	return true;
}

int QsciLexerTeX_virtualbase_StyleBitsNeeded(const void* self) {
	return ( (const MiqtVirtualQsciLexerTeX*)(self) )->virtualbase_StyleBitsNeeded();
}

bool QsciLexerTeX_override_virtual_WordCharacters(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTeX* self_cast = dynamic_cast<MiqtVirtualQsciLexerTeX*>( (QsciLexerTeX*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WordCharacters = slot;
	return true;
}

const char* QsciLexerTeX_virtualbase_WordCharacters(const void* self) {
	return ( (const MiqtVirtualQsciLexerTeX*)(self) )->virtualbase_WordCharacters();
}

bool QsciLexerTeX_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTeX* self_cast = dynamic_cast<MiqtVirtualQsciLexerTeX*>( (QsciLexerTeX*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetAutoIndentStyle = slot;
	return true;
}

void QsciLexerTeX_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle) {
	( (MiqtVirtualQsciLexerTeX*)(self) )->virtualbase_SetAutoIndentStyle(autoindentstyle);
}

bool QsciLexerTeX_override_virtual_SetColor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTeX* self_cast = dynamic_cast<MiqtVirtualQsciLexerTeX*>( (QsciLexerTeX*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetColor = slot;
	return true;
}

void QsciLexerTeX_virtualbase_SetColor(void* self, QColor* c, int style) {
	( (MiqtVirtualQsciLexerTeX*)(self) )->virtualbase_SetColor(c, style);
}

bool QsciLexerTeX_override_virtual_SetEolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTeX* self_cast = dynamic_cast<MiqtVirtualQsciLexerTeX*>( (QsciLexerTeX*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetEolFill = slot;
	return true;
}

void QsciLexerTeX_virtualbase_SetEolFill(void* self, bool eoffill, int style) {
	( (MiqtVirtualQsciLexerTeX*)(self) )->virtualbase_SetEolFill(eoffill, style);
}

bool QsciLexerTeX_override_virtual_SetFont(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTeX* self_cast = dynamic_cast<MiqtVirtualQsciLexerTeX*>( (QsciLexerTeX*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetFont = slot;
	return true;
}

void QsciLexerTeX_virtualbase_SetFont(void* self, QFont* f, int style) {
	( (MiqtVirtualQsciLexerTeX*)(self) )->virtualbase_SetFont(f, style);
}

bool QsciLexerTeX_override_virtual_SetPaper(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTeX* self_cast = dynamic_cast<MiqtVirtualQsciLexerTeX*>( (QsciLexerTeX*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetPaper = slot;
	return true;
}

void QsciLexerTeX_virtualbase_SetPaper(void* self, QColor* c, int style) {
	( (MiqtVirtualQsciLexerTeX*)(self) )->virtualbase_SetPaper(c, style);
}

bool QsciLexerTeX_override_virtual_ReadProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTeX* self_cast = dynamic_cast<MiqtVirtualQsciLexerTeX*>( (QsciLexerTeX*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ReadProperties = slot;
	return true;
}

bool QsciLexerTeX_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix) {
	return ( (MiqtVirtualQsciLexerTeX*)(self) )->virtualbase_ReadProperties(qs, prefix);
}

bool QsciLexerTeX_override_virtual_WriteProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTeX* self_cast = dynamic_cast<MiqtVirtualQsciLexerTeX*>( (QsciLexerTeX*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WriteProperties = slot;
	return true;
}

bool QsciLexerTeX_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix) {
	return ( (const MiqtVirtualQsciLexerTeX*)(self) )->virtualbase_WriteProperties(qs, prefix);
}

bool QsciLexerTeX_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTeX* self_cast = dynamic_cast<MiqtVirtualQsciLexerTeX*>( (QsciLexerTeX*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QsciLexerTeX_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQsciLexerTeX*)(self) )->virtualbase_Event(event);
}

bool QsciLexerTeX_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTeX* self_cast = dynamic_cast<MiqtVirtualQsciLexerTeX*>( (QsciLexerTeX*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QsciLexerTeX_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQsciLexerTeX*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QsciLexerTeX_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTeX* self_cast = dynamic_cast<MiqtVirtualQsciLexerTeX*>( (QsciLexerTeX*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QsciLexerTeX_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQsciLexerTeX*)(self) )->virtualbase_TimerEvent(event);
}

bool QsciLexerTeX_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTeX* self_cast = dynamic_cast<MiqtVirtualQsciLexerTeX*>( (QsciLexerTeX*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QsciLexerTeX_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQsciLexerTeX*)(self) )->virtualbase_ChildEvent(event);
}

bool QsciLexerTeX_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTeX* self_cast = dynamic_cast<MiqtVirtualQsciLexerTeX*>( (QsciLexerTeX*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QsciLexerTeX_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQsciLexerTeX*)(self) )->virtualbase_CustomEvent(event);
}

bool QsciLexerTeX_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTeX* self_cast = dynamic_cast<MiqtVirtualQsciLexerTeX*>( (QsciLexerTeX*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QsciLexerTeX_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQsciLexerTeX*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QsciLexerTeX_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTeX* self_cast = dynamic_cast<MiqtVirtualQsciLexerTeX*>( (QsciLexerTeX*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QsciLexerTeX_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQsciLexerTeX*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QsciLexerTeX_Delete(QsciLexerTeX* self) {
	delete self;
}

