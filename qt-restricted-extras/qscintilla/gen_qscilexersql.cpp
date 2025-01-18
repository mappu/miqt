#include <QColor>
#include <QFont>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QSettings>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexersql.h>
#include "gen_qscilexersql.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QsciLexerSQL_SetBackslashEscapes(void*, intptr_t, bool);
void miqt_exec_callback_QsciLexerSQL_SetFoldComments(void*, intptr_t, bool);
void miqt_exec_callback_QsciLexerSQL_SetFoldCompact(void*, intptr_t, bool);
const char* miqt_exec_callback_QsciLexerSQL_Language(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerSQL_Lexer(void*, intptr_t);
int miqt_exec_callback_QsciLexerSQL_LexerId(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerSQL_AutoCompletionFillups(void*, intptr_t);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QsciLexerSQL_AutoCompletionWordSeparators(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerSQL_BlockEnd(void*, intptr_t, int*);
int miqt_exec_callback_QsciLexerSQL_BlockLookback(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerSQL_BlockStart(void*, intptr_t, int*);
const char* miqt_exec_callback_QsciLexerSQL_BlockStartKeyword(void*, intptr_t, int*);
int miqt_exec_callback_QsciLexerSQL_BraceStyle(void*, intptr_t);
bool miqt_exec_callback_QsciLexerSQL_CaseSensitive(void*, intptr_t);
QColor* miqt_exec_callback_QsciLexerSQL_Color(void*, intptr_t, int);
bool miqt_exec_callback_QsciLexerSQL_EolFill(void*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerSQL_Font(void*, intptr_t, int);
int miqt_exec_callback_QsciLexerSQL_IndentationGuideView(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerSQL_Keywords(void*, intptr_t, int);
int miqt_exec_callback_QsciLexerSQL_DefaultStyle(void*, intptr_t);
struct miqt_string miqt_exec_callback_QsciLexerSQL_Description(void*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerSQL_Paper(void*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerSQL_DefaultColorWithStyle(void*, intptr_t, int);
bool miqt_exec_callback_QsciLexerSQL_DefaultEolFill(void*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerSQL_DefaultFontWithStyle(void*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerSQL_DefaultPaperWithStyle(void*, intptr_t, int);
void miqt_exec_callback_QsciLexerSQL_SetEditor(void*, intptr_t, QsciScintilla*);
void miqt_exec_callback_QsciLexerSQL_RefreshProperties(void*, intptr_t);
int miqt_exec_callback_QsciLexerSQL_StyleBitsNeeded(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerSQL_WordCharacters(void*, intptr_t);
void miqt_exec_callback_QsciLexerSQL_SetAutoIndentStyle(void*, intptr_t, int);
void miqt_exec_callback_QsciLexerSQL_SetColor(void*, intptr_t, QColor*, int);
void miqt_exec_callback_QsciLexerSQL_SetEolFill(void*, intptr_t, bool, int);
void miqt_exec_callback_QsciLexerSQL_SetFont(void*, intptr_t, QFont*, int);
void miqt_exec_callback_QsciLexerSQL_SetPaper(void*, intptr_t, QColor*, int);
bool miqt_exec_callback_QsciLexerSQL_ReadProperties(void*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerSQL_WriteProperties(void*, intptr_t, QSettings*, struct miqt_string);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciLexerSQL final : public QsciLexerSQL {
public:

	MiqtVirtualQsciLexerSQL(): QsciLexerSQL() {};
	MiqtVirtualQsciLexerSQL(QObject* parent): QsciLexerSQL(parent) {};

	virtual ~MiqtVirtualQsciLexerSQL() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetBackslashEscapes = 0;

	// Subclass to allow providing a Go implementation
	virtual void setBackslashEscapes(bool enable) override {
		if (handle__SetBackslashEscapes == 0) {
			QsciLexerSQL::setBackslashEscapes(enable);
			return;
		}
		
		bool sigval1 = enable;

		miqt_exec_callback_QsciLexerSQL_SetBackslashEscapes(this, handle__SetBackslashEscapes, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetBackslashEscapes(bool enable) {

		QsciLexerSQL::setBackslashEscapes(enable);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldComments = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldComments(bool fold) override {
		if (handle__SetFoldComments == 0) {
			QsciLexerSQL::setFoldComments(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerSQL_SetFoldComments(this, handle__SetFoldComments, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldComments(bool fold) {

		QsciLexerSQL::setFoldComments(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldCompact = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldCompact(bool fold) override {
		if (handle__SetFoldCompact == 0) {
			QsciLexerSQL::setFoldCompact(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerSQL_SetFoldCompact(this, handle__SetFoldCompact, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldCompact(bool fold) {

		QsciLexerSQL::setFoldCompact(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Language = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* language() const override {
		if (handle__Language == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerSQL_Language(const_cast<MiqtVirtualQsciLexerSQL*>(this), handle__Language);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Lexer = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* lexer() const override {
		if (handle__Lexer == 0) {
			return QsciLexerSQL::lexer();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerSQL_Lexer(const_cast<MiqtVirtualQsciLexerSQL*>(this), handle__Lexer);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_Lexer() const {

		return (const char*) QsciLexerSQL::lexer();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LexerId = 0;

	// Subclass to allow providing a Go implementation
	virtual int lexerId() const override {
		if (handle__LexerId == 0) {
			return QsciLexerSQL::lexerId();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerSQL_LexerId(const_cast<MiqtVirtualQsciLexerSQL*>(this), handle__LexerId);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_LexerId() const {

		return QsciLexerSQL::lexerId();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AutoCompletionFillups = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* autoCompletionFillups() const override {
		if (handle__AutoCompletionFillups == 0) {
			return QsciLexerSQL::autoCompletionFillups();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerSQL_AutoCompletionFillups(const_cast<MiqtVirtualQsciLexerSQL*>(this), handle__AutoCompletionFillups);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_AutoCompletionFillups() const {

		return (const char*) QsciLexerSQL::autoCompletionFillups();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AutoCompletionWordSeparators = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList autoCompletionWordSeparators() const override {
		if (handle__AutoCompletionWordSeparators == 0) {
			return QsciLexerSQL::autoCompletionWordSeparators();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QsciLexerSQL_AutoCompletionWordSeparators(const_cast<MiqtVirtualQsciLexerSQL*>(this), handle__AutoCompletionWordSeparators);
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
	intptr_t handle__BlockEnd = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockEnd(int* style) const override {
		if (handle__BlockEnd == 0) {
			return QsciLexerSQL::blockEnd(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerSQL_BlockEnd(const_cast<MiqtVirtualQsciLexerSQL*>(this), handle__BlockEnd, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockEnd(int* style) const {

		return (const char*) QsciLexerSQL::blockEnd(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockLookback = 0;

	// Subclass to allow providing a Go implementation
	virtual int blockLookback() const override {
		if (handle__BlockLookback == 0) {
			return QsciLexerSQL::blockLookback();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerSQL_BlockLookback(const_cast<MiqtVirtualQsciLexerSQL*>(this), handle__BlockLookback);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_BlockLookback() const {

		return QsciLexerSQL::blockLookback();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockStart = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStart(int* style) const override {
		if (handle__BlockStart == 0) {
			return QsciLexerSQL::blockStart(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerSQL_BlockStart(const_cast<MiqtVirtualQsciLexerSQL*>(this), handle__BlockStart, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockStart(int* style) const {

		return (const char*) QsciLexerSQL::blockStart(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockStartKeyword = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStartKeyword(int* style) const override {
		if (handle__BlockStartKeyword == 0) {
			return QsciLexerSQL::blockStartKeyword(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerSQL_BlockStartKeyword(const_cast<MiqtVirtualQsciLexerSQL*>(this), handle__BlockStartKeyword, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockStartKeyword(int* style) const {

		return (const char*) QsciLexerSQL::blockStartKeyword(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BraceStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int braceStyle() const override {
		if (handle__BraceStyle == 0) {
			return QsciLexerSQL::braceStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerSQL_BraceStyle(const_cast<MiqtVirtualQsciLexerSQL*>(this), handle__BraceStyle);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_BraceStyle() const {

		return QsciLexerSQL::braceStyle();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CaseSensitive = 0;

	// Subclass to allow providing a Go implementation
	virtual bool caseSensitive() const override {
		if (handle__CaseSensitive == 0) {
			return QsciLexerSQL::caseSensitive();
		}
		

		bool callback_return_value = miqt_exec_callback_QsciLexerSQL_CaseSensitive(const_cast<MiqtVirtualQsciLexerSQL*>(this), handle__CaseSensitive);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CaseSensitive() const {

		return QsciLexerSQL::caseSensitive();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Color = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor color(int style) const override {
		if (handle__Color == 0) {
			return QsciLexerSQL::color(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerSQL_Color(const_cast<MiqtVirtualQsciLexerSQL*>(this), handle__Color, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_Color(int style) const {

		return new QColor(QsciLexerSQL::color(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eolFill(int style) const override {
		if (handle__EolFill == 0) {
			return QsciLexerSQL::eolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexerSQL_EolFill(const_cast<MiqtVirtualQsciLexerSQL*>(this), handle__EolFill, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EolFill(int style) const {

		return QsciLexerSQL::eolFill(static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Font = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont font(int style) const override {
		if (handle__Font == 0) {
			return QsciLexerSQL::font(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexerSQL_Font(const_cast<MiqtVirtualQsciLexerSQL*>(this), handle__Font, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QFont* virtualbase_Font(int style) const {

		return new QFont(QsciLexerSQL::font(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IndentationGuideView = 0;

	// Subclass to allow providing a Go implementation
	virtual int indentationGuideView() const override {
		if (handle__IndentationGuideView == 0) {
			return QsciLexerSQL::indentationGuideView();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerSQL_IndentationGuideView(const_cast<MiqtVirtualQsciLexerSQL*>(this), handle__IndentationGuideView);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_IndentationGuideView() const {

		return QsciLexerSQL::indentationGuideView();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Keywords = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* keywords(int set) const override {
		if (handle__Keywords == 0) {
			return QsciLexerSQL::keywords(set);
		}
		
		int sigval1 = set;

		const char* callback_return_value = miqt_exec_callback_QsciLexerSQL_Keywords(const_cast<MiqtVirtualQsciLexerSQL*>(this), handle__Keywords, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_Keywords(int set) const {

		return (const char*) QsciLexerSQL::keywords(static_cast<int>(set));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int defaultStyle() const override {
		if (handle__DefaultStyle == 0) {
			return QsciLexerSQL::defaultStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerSQL_DefaultStyle(const_cast<MiqtVirtualQsciLexerSQL*>(this), handle__DefaultStyle);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DefaultStyle() const {

		return QsciLexerSQL::defaultStyle();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Description = 0;

	// Subclass to allow providing a Go implementation
	virtual QString description(int style) const override {
		if (handle__Description == 0) {
			return QString(); // Pure virtual, there is no base we can call
		}
		
		int sigval1 = style;

		struct miqt_string callback_return_value = miqt_exec_callback_QsciLexerSQL_Description(const_cast<MiqtVirtualQsciLexerSQL*>(this), handle__Description, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paper = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor paper(int style) const override {
		if (handle__Paper == 0) {
			return QsciLexerSQL::paper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerSQL_Paper(const_cast<MiqtVirtualQsciLexerSQL*>(this), handle__Paper, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_Paper(int style) const {

		return new QColor(QsciLexerSQL::paper(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultColorWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultColor(int style) const override {
		if (handle__DefaultColorWithStyle == 0) {
			return QsciLexerSQL::defaultColor(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerSQL_DefaultColorWithStyle(const_cast<MiqtVirtualQsciLexerSQL*>(this), handle__DefaultColorWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_DefaultColorWithStyle(int style) const {

		return new QColor(QsciLexerSQL::defaultColor(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool defaultEolFill(int style) const override {
		if (handle__DefaultEolFill == 0) {
			return QsciLexerSQL::defaultEolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexerSQL_DefaultEolFill(const_cast<MiqtVirtualQsciLexerSQL*>(this), handle__DefaultEolFill, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_DefaultEolFill(int style) const {

		return QsciLexerSQL::defaultEolFill(static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultFontWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont defaultFont(int style) const override {
		if (handle__DefaultFontWithStyle == 0) {
			return QsciLexerSQL::defaultFont(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexerSQL_DefaultFontWithStyle(const_cast<MiqtVirtualQsciLexerSQL*>(this), handle__DefaultFontWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QFont* virtualbase_DefaultFontWithStyle(int style) const {

		return new QFont(QsciLexerSQL::defaultFont(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultPaperWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultPaper(int style) const override {
		if (handle__DefaultPaperWithStyle == 0) {
			return QsciLexerSQL::defaultPaper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerSQL_DefaultPaperWithStyle(const_cast<MiqtVirtualQsciLexerSQL*>(this), handle__DefaultPaperWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_DefaultPaperWithStyle(int style) const {

		return new QColor(QsciLexerSQL::defaultPaper(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEditor(QsciScintilla* editor) override {
		if (handle__SetEditor == 0) {
			QsciLexerSQL::setEditor(editor);
			return;
		}
		
		QsciScintilla* sigval1 = editor;

		miqt_exec_callback_QsciLexerSQL_SetEditor(this, handle__SetEditor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetEditor(QsciScintilla* editor) {

		QsciLexerSQL::setEditor(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RefreshProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual void refreshProperties() override {
		if (handle__RefreshProperties == 0) {
			QsciLexerSQL::refreshProperties();
			return;
		}
		

		miqt_exec_callback_QsciLexerSQL_RefreshProperties(this, handle__RefreshProperties);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_RefreshProperties() {

		QsciLexerSQL::refreshProperties();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StyleBitsNeeded = 0;

	// Subclass to allow providing a Go implementation
	virtual int styleBitsNeeded() const override {
		if (handle__StyleBitsNeeded == 0) {
			return QsciLexerSQL::styleBitsNeeded();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerSQL_StyleBitsNeeded(const_cast<MiqtVirtualQsciLexerSQL*>(this), handle__StyleBitsNeeded);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_StyleBitsNeeded() const {

		return QsciLexerSQL::styleBitsNeeded();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WordCharacters = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* wordCharacters() const override {
		if (handle__WordCharacters == 0) {
			return QsciLexerSQL::wordCharacters();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerSQL_WordCharacters(const_cast<MiqtVirtualQsciLexerSQL*>(this), handle__WordCharacters);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_WordCharacters() const {

		return (const char*) QsciLexerSQL::wordCharacters();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAutoIndentStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAutoIndentStyle(int autoindentstyle) override {
		if (handle__SetAutoIndentStyle == 0) {
			QsciLexerSQL::setAutoIndentStyle(autoindentstyle);
			return;
		}
		
		int sigval1 = autoindentstyle;

		miqt_exec_callback_QsciLexerSQL_SetAutoIndentStyle(this, handle__SetAutoIndentStyle, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAutoIndentStyle(int autoindentstyle) {

		QsciLexerSQL::setAutoIndentStyle(static_cast<int>(autoindentstyle));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setColor(const QColor& c, int style) override {
		if (handle__SetColor == 0) {
			QsciLexerSQL::setColor(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerSQL_SetColor(this, handle__SetColor, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetColor(QColor* c, int style) {

		QsciLexerSQL::setColor(*c, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEolFill(bool eoffill, int style) override {
		if (handle__SetEolFill == 0) {
			QsciLexerSQL::setEolFill(eoffill, style);
			return;
		}
		
		bool sigval1 = eoffill;
		int sigval2 = style;

		miqt_exec_callback_QsciLexerSQL_SetEolFill(this, handle__SetEolFill, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetEolFill(bool eoffill, int style) {

		QsciLexerSQL::setEolFill(eoffill, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFont = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFont(const QFont& f, int style) override {
		if (handle__SetFont == 0) {
			QsciLexerSQL::setFont(f, style);
			return;
		}
		
		const QFont& f_ret = f;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&f_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerSQL_SetFont(this, handle__SetFont, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFont(QFont* f, int style) {

		QsciLexerSQL::setFont(*f, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetPaper = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPaper(const QColor& c, int style) override {
		if (handle__SetPaper == 0) {
			QsciLexerSQL::setPaper(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerSQL_SetPaper(this, handle__SetPaper, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetPaper(QColor* c, int style) {

		QsciLexerSQL::setPaper(*c, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReadProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool readProperties(QSettings& qs, const QString& prefix) override {
		if (handle__ReadProperties == 0) {
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

		bool callback_return_value = miqt_exec_callback_QsciLexerSQL_ReadProperties(this, handle__ReadProperties, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_ReadProperties(QSettings* qs, struct miqt_string prefix) {
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

		return QsciLexerSQL::readProperties(*qs, prefix_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WriteProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
		if (handle__WriteProperties == 0) {
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

		bool callback_return_value = miqt_exec_callback_QsciLexerSQL_WriteProperties(const_cast<MiqtVirtualQsciLexerSQL*>(this), handle__WriteProperties, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WriteProperties(QSettings* qs, struct miqt_string prefix) const {
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

		return QsciLexerSQL::writeProperties(*qs, prefix_QString);

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

QMetaObject* QsciLexerSQL_MetaObject(const QsciLexerSQL* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerSQL_Metacast(QsciLexerSQL* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerSQL_Tr(const char* s) {
	QString _ret = QsciLexerSQL::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerSQL_TrUtf8(const char* s) {
	QString _ret = QsciLexerSQL::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerSQL_Language(const QsciLexerSQL* self) {
	return (const char*) self->language();
}

const char* QsciLexerSQL_Lexer(const QsciLexerSQL* self) {
	return (const char*) self->lexer();
}

int QsciLexerSQL_BraceStyle(const QsciLexerSQL* self) {
	return self->braceStyle();
}

QColor* QsciLexerSQL_DefaultColor(const QsciLexerSQL* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerSQL_DefaultEolFill(const QsciLexerSQL* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerSQL_DefaultFont(const QsciLexerSQL* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerSQL_DefaultPaper(const QsciLexerSQL* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerSQL_Keywords(const QsciLexerSQL* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerSQL_Description(const QsciLexerSQL* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerSQL_RefreshProperties(QsciLexerSQL* self) {
	self->refreshProperties();
}

bool QsciLexerSQL_BackslashEscapes(const QsciLexerSQL* self) {
	return self->backslashEscapes();
}

void QsciLexerSQL_SetDottedWords(QsciLexerSQL* self, bool enable) {
	self->setDottedWords(enable);
}

bool QsciLexerSQL_DottedWords(const QsciLexerSQL* self) {
	return self->dottedWords();
}

void QsciLexerSQL_SetFoldAtElse(QsciLexerSQL* self, bool fold) {
	self->setFoldAtElse(fold);
}

bool QsciLexerSQL_FoldAtElse(const QsciLexerSQL* self) {
	return self->foldAtElse();
}

bool QsciLexerSQL_FoldComments(const QsciLexerSQL* self) {
	return self->foldComments();
}

bool QsciLexerSQL_FoldCompact(const QsciLexerSQL* self) {
	return self->foldCompact();
}

void QsciLexerSQL_SetFoldOnlyBegin(QsciLexerSQL* self, bool fold) {
	self->setFoldOnlyBegin(fold);
}

bool QsciLexerSQL_FoldOnlyBegin(const QsciLexerSQL* self) {
	return self->foldOnlyBegin();
}

void QsciLexerSQL_SetHashComments(QsciLexerSQL* self, bool enable) {
	self->setHashComments(enable);
}

bool QsciLexerSQL_HashComments(const QsciLexerSQL* self) {
	return self->hashComments();
}

void QsciLexerSQL_SetQuotedIdentifiers(QsciLexerSQL* self, bool enable) {
	self->setQuotedIdentifiers(enable);
}

bool QsciLexerSQL_QuotedIdentifiers(const QsciLexerSQL* self) {
	return self->quotedIdentifiers();
}

void QsciLexerSQL_SetBackslashEscapes(QsciLexerSQL* self, bool enable) {
	self->setBackslashEscapes(enable);
}

void QsciLexerSQL_SetFoldComments(QsciLexerSQL* self, bool fold) {
	self->setFoldComments(fold);
}

void QsciLexerSQL_SetFoldCompact(QsciLexerSQL* self, bool fold) {
	self->setFoldCompact(fold);
}

struct miqt_string QsciLexerSQL_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerSQL::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerSQL_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerSQL::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerSQL_TrUtf82(const char* s, const char* c) {
	QString _ret = QsciLexerSQL::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerSQL_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QsciLexerSQL::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerSQL_override_virtual_SetBackslashEscapes(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) )->handle__SetBackslashEscapes = slot;
}

void QsciLexerSQL_virtualbase_SetBackslashEscapes(void* self, bool enable) {
	( (MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_SetBackslashEscapes(enable);
}

void QsciLexerSQL_override_virtual_SetFoldComments(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) )->handle__SetFoldComments = slot;
}

void QsciLexerSQL_virtualbase_SetFoldComments(void* self, bool fold) {
	( (MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_SetFoldComments(fold);
}

void QsciLexerSQL_override_virtual_SetFoldCompact(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) )->handle__SetFoldCompact = slot;
}

void QsciLexerSQL_virtualbase_SetFoldCompact(void* self, bool fold) {
	( (MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_SetFoldCompact(fold);
}

void QsciLexerSQL_override_virtual_Language(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) )->handle__Language = slot;
}

void QsciLexerSQL_override_virtual_Lexer(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) )->handle__Lexer = slot;
}

const char* QsciLexerSQL_virtualbase_Lexer(const void* self) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_Lexer();
}

void QsciLexerSQL_override_virtual_LexerId(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) )->handle__LexerId = slot;
}

int QsciLexerSQL_virtualbase_LexerId(const void* self) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_LexerId();
}

void QsciLexerSQL_override_virtual_AutoCompletionFillups(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) )->handle__AutoCompletionFillups = slot;
}

const char* QsciLexerSQL_virtualbase_AutoCompletionFillups(const void* self) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_AutoCompletionFillups();
}

void QsciLexerSQL_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) )->handle__AutoCompletionWordSeparators = slot;
}

struct miqt_array /* of struct miqt_string */  QsciLexerSQL_virtualbase_AutoCompletionWordSeparators(const void* self) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_AutoCompletionWordSeparators();
}

void QsciLexerSQL_override_virtual_BlockEnd(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) )->handle__BlockEnd = slot;
}

const char* QsciLexerSQL_virtualbase_BlockEnd(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_BlockEnd(style);
}

void QsciLexerSQL_override_virtual_BlockLookback(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) )->handle__BlockLookback = slot;
}

int QsciLexerSQL_virtualbase_BlockLookback(const void* self) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_BlockLookback();
}

void QsciLexerSQL_override_virtual_BlockStart(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) )->handle__BlockStart = slot;
}

const char* QsciLexerSQL_virtualbase_BlockStart(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_BlockStart(style);
}

void QsciLexerSQL_override_virtual_BlockStartKeyword(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) )->handle__BlockStartKeyword = slot;
}

const char* QsciLexerSQL_virtualbase_BlockStartKeyword(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_BlockStartKeyword(style);
}

void QsciLexerSQL_override_virtual_BraceStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) )->handle__BraceStyle = slot;
}

int QsciLexerSQL_virtualbase_BraceStyle(const void* self) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_BraceStyle();
}

void QsciLexerSQL_override_virtual_CaseSensitive(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) )->handle__CaseSensitive = slot;
}

bool QsciLexerSQL_virtualbase_CaseSensitive(const void* self) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_CaseSensitive();
}

void QsciLexerSQL_override_virtual_Color(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) )->handle__Color = slot;
}

QColor* QsciLexerSQL_virtualbase_Color(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_Color(style);
}

void QsciLexerSQL_override_virtual_EolFill(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) )->handle__EolFill = slot;
}

bool QsciLexerSQL_virtualbase_EolFill(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_EolFill(style);
}

void QsciLexerSQL_override_virtual_Font(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) )->handle__Font = slot;
}

QFont* QsciLexerSQL_virtualbase_Font(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_Font(style);
}

void QsciLexerSQL_override_virtual_IndentationGuideView(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) )->handle__IndentationGuideView = slot;
}

int QsciLexerSQL_virtualbase_IndentationGuideView(const void* self) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_IndentationGuideView();
}

void QsciLexerSQL_override_virtual_Keywords(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) )->handle__Keywords = slot;
}

const char* QsciLexerSQL_virtualbase_Keywords(const void* self, int set) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_Keywords(set);
}

void QsciLexerSQL_override_virtual_DefaultStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) )->handle__DefaultStyle = slot;
}

int QsciLexerSQL_virtualbase_DefaultStyle(const void* self) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_DefaultStyle();
}

void QsciLexerSQL_override_virtual_Description(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) )->handle__Description = slot;
}

void QsciLexerSQL_override_virtual_Paper(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) )->handle__Paper = slot;
}

QColor* QsciLexerSQL_virtualbase_Paper(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_Paper(style);
}

void QsciLexerSQL_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) )->handle__DefaultColorWithStyle = slot;
}

QColor* QsciLexerSQL_virtualbase_DefaultColorWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_DefaultColorWithStyle(style);
}

void QsciLexerSQL_override_virtual_DefaultEolFill(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) )->handle__DefaultEolFill = slot;
}

bool QsciLexerSQL_virtualbase_DefaultEolFill(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_DefaultEolFill(style);
}

void QsciLexerSQL_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) )->handle__DefaultFontWithStyle = slot;
}

QFont* QsciLexerSQL_virtualbase_DefaultFontWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_DefaultFontWithStyle(style);
}

void QsciLexerSQL_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) )->handle__DefaultPaperWithStyle = slot;
}

QColor* QsciLexerSQL_virtualbase_DefaultPaperWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_DefaultPaperWithStyle(style);
}

void QsciLexerSQL_override_virtual_SetEditor(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) )->handle__SetEditor = slot;
}

void QsciLexerSQL_virtualbase_SetEditor(void* self, QsciScintilla* editor) {
	( (MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_SetEditor(editor);
}

void QsciLexerSQL_override_virtual_RefreshProperties(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) )->handle__RefreshProperties = slot;
}

void QsciLexerSQL_virtualbase_RefreshProperties(void* self) {
	( (MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_RefreshProperties();
}

void QsciLexerSQL_override_virtual_StyleBitsNeeded(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) )->handle__StyleBitsNeeded = slot;
}

int QsciLexerSQL_virtualbase_StyleBitsNeeded(const void* self) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_StyleBitsNeeded();
}

void QsciLexerSQL_override_virtual_WordCharacters(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) )->handle__WordCharacters = slot;
}

const char* QsciLexerSQL_virtualbase_WordCharacters(const void* self) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_WordCharacters();
}

void QsciLexerSQL_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) )->handle__SetAutoIndentStyle = slot;
}

void QsciLexerSQL_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle) {
	( (MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_SetAutoIndentStyle(autoindentstyle);
}

void QsciLexerSQL_override_virtual_SetColor(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) )->handle__SetColor = slot;
}

void QsciLexerSQL_virtualbase_SetColor(void* self, QColor* c, int style) {
	( (MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_SetColor(c, style);
}

void QsciLexerSQL_override_virtual_SetEolFill(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) )->handle__SetEolFill = slot;
}

void QsciLexerSQL_virtualbase_SetEolFill(void* self, bool eoffill, int style) {
	( (MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_SetEolFill(eoffill, style);
}

void QsciLexerSQL_override_virtual_SetFont(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) )->handle__SetFont = slot;
}

void QsciLexerSQL_virtualbase_SetFont(void* self, QFont* f, int style) {
	( (MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_SetFont(f, style);
}

void QsciLexerSQL_override_virtual_SetPaper(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) )->handle__SetPaper = slot;
}

void QsciLexerSQL_virtualbase_SetPaper(void* self, QColor* c, int style) {
	( (MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_SetPaper(c, style);
}

void QsciLexerSQL_override_virtual_ReadProperties(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) )->handle__ReadProperties = slot;
}

bool QsciLexerSQL_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix) {
	return ( (MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_ReadProperties(qs, prefix);
}

void QsciLexerSQL_override_virtual_WriteProperties(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerSQL*>( (QsciLexerSQL*)(self) )->handle__WriteProperties = slot;
}

bool QsciLexerSQL_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix) {
	return ( (const MiqtVirtualQsciLexerSQL*)(self) )->virtualbase_WriteProperties(qs, prefix);
}

void QsciLexerSQL_Delete(QsciLexerSQL* self) {
	delete self;
}

