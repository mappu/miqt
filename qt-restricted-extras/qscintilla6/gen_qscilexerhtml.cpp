#include <QColor>
#include <QFont>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QSettings>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexerhtml.h>
#include "gen_qscilexerhtml.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QsciLexerHTML_SetFoldCompact(void*, intptr_t, bool);
void miqt_exec_callback_QsciLexerHTML_SetFoldPreprocessor(void*, intptr_t, bool);
void miqt_exec_callback_QsciLexerHTML_SetCaseSensitiveTags(void*, intptr_t, bool);
const char* miqt_exec_callback_QsciLexerHTML_Language(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerHTML_Lexer(void*, intptr_t);
int miqt_exec_callback_QsciLexerHTML_LexerId(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerHTML_AutoCompletionFillups(void*, intptr_t);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QsciLexerHTML_AutoCompletionWordSeparators(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerHTML_BlockEnd(void*, intptr_t, int*);
int miqt_exec_callback_QsciLexerHTML_BlockLookback(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerHTML_BlockStart(void*, intptr_t, int*);
const char* miqt_exec_callback_QsciLexerHTML_BlockStartKeyword(void*, intptr_t, int*);
int miqt_exec_callback_QsciLexerHTML_BraceStyle(void*, intptr_t);
bool miqt_exec_callback_QsciLexerHTML_CaseSensitive(void*, intptr_t);
QColor* miqt_exec_callback_QsciLexerHTML_Color(void*, intptr_t, int);
bool miqt_exec_callback_QsciLexerHTML_EolFill(void*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerHTML_Font(void*, intptr_t, int);
int miqt_exec_callback_QsciLexerHTML_IndentationGuideView(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerHTML_Keywords(void*, intptr_t, int);
int miqt_exec_callback_QsciLexerHTML_DefaultStyle(void*, intptr_t);
struct miqt_string miqt_exec_callback_QsciLexerHTML_Description(void*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerHTML_Paper(void*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerHTML_DefaultColorWithStyle(void*, intptr_t, int);
bool miqt_exec_callback_QsciLexerHTML_DefaultEolFill(void*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerHTML_DefaultFontWithStyle(void*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerHTML_DefaultPaperWithStyle(void*, intptr_t, int);
void miqt_exec_callback_QsciLexerHTML_SetEditor(void*, intptr_t, QsciScintilla*);
void miqt_exec_callback_QsciLexerHTML_RefreshProperties(void*, intptr_t);
int miqt_exec_callback_QsciLexerHTML_StyleBitsNeeded(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerHTML_WordCharacters(void*, intptr_t);
void miqt_exec_callback_QsciLexerHTML_SetAutoIndentStyle(void*, intptr_t, int);
void miqt_exec_callback_QsciLexerHTML_SetColor(void*, intptr_t, QColor*, int);
void miqt_exec_callback_QsciLexerHTML_SetEolFill(void*, intptr_t, bool, int);
void miqt_exec_callback_QsciLexerHTML_SetFont(void*, intptr_t, QFont*, int);
void miqt_exec_callback_QsciLexerHTML_SetPaper(void*, intptr_t, QColor*, int);
bool miqt_exec_callback_QsciLexerHTML_ReadProperties(void*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerHTML_WriteProperties(void*, intptr_t, QSettings*, struct miqt_string);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciLexerHTML : public virtual QsciLexerHTML {
public:

	MiqtVirtualQsciLexerHTML(): QsciLexerHTML() {};
	MiqtVirtualQsciLexerHTML(QObject* parent): QsciLexerHTML(parent) {};

	virtual ~MiqtVirtualQsciLexerHTML() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldCompact = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldCompact(bool fold) override {
		if (handle__SetFoldCompact == 0) {
			QsciLexerHTML::setFoldCompact(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerHTML_SetFoldCompact(this, handle__SetFoldCompact, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldCompact(bool fold) {

		QsciLexerHTML::setFoldCompact(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldPreprocessor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldPreprocessor(bool fold) override {
		if (handle__SetFoldPreprocessor == 0) {
			QsciLexerHTML::setFoldPreprocessor(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerHTML_SetFoldPreprocessor(this, handle__SetFoldPreprocessor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldPreprocessor(bool fold) {

		QsciLexerHTML::setFoldPreprocessor(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetCaseSensitiveTags = 0;

	// Subclass to allow providing a Go implementation
	virtual void setCaseSensitiveTags(bool sens) override {
		if (handle__SetCaseSensitiveTags == 0) {
			QsciLexerHTML::setCaseSensitiveTags(sens);
			return;
		}
		
		bool sigval1 = sens;

		miqt_exec_callback_QsciLexerHTML_SetCaseSensitiveTags(this, handle__SetCaseSensitiveTags, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetCaseSensitiveTags(bool sens) {

		QsciLexerHTML::setCaseSensitiveTags(sens);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Language = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* language() const override {
		if (handle__Language == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerHTML_Language(const_cast<MiqtVirtualQsciLexerHTML*>(this), handle__Language);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Lexer = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* lexer() const override {
		if (handle__Lexer == 0) {
			return QsciLexerHTML::lexer();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerHTML_Lexer(const_cast<MiqtVirtualQsciLexerHTML*>(this), handle__Lexer);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_Lexer() const {

		return (const char*) QsciLexerHTML::lexer();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LexerId = 0;

	// Subclass to allow providing a Go implementation
	virtual int lexerId() const override {
		if (handle__LexerId == 0) {
			return QsciLexerHTML::lexerId();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerHTML_LexerId(const_cast<MiqtVirtualQsciLexerHTML*>(this), handle__LexerId);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_LexerId() const {

		return QsciLexerHTML::lexerId();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AutoCompletionFillups = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* autoCompletionFillups() const override {
		if (handle__AutoCompletionFillups == 0) {
			return QsciLexerHTML::autoCompletionFillups();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerHTML_AutoCompletionFillups(const_cast<MiqtVirtualQsciLexerHTML*>(this), handle__AutoCompletionFillups);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_AutoCompletionFillups() const {

		return (const char*) QsciLexerHTML::autoCompletionFillups();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AutoCompletionWordSeparators = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList autoCompletionWordSeparators() const override {
		if (handle__AutoCompletionWordSeparators == 0) {
			return QsciLexerHTML::autoCompletionWordSeparators();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QsciLexerHTML_AutoCompletionWordSeparators(const_cast<MiqtVirtualQsciLexerHTML*>(this), handle__AutoCompletionWordSeparators);
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

		QStringList _ret = QsciLexerHTML::autoCompletionWordSeparators();
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
			return QsciLexerHTML::blockEnd(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerHTML_BlockEnd(const_cast<MiqtVirtualQsciLexerHTML*>(this), handle__BlockEnd, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockEnd(int* style) const {

		return (const char*) QsciLexerHTML::blockEnd(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockLookback = 0;

	// Subclass to allow providing a Go implementation
	virtual int blockLookback() const override {
		if (handle__BlockLookback == 0) {
			return QsciLexerHTML::blockLookback();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerHTML_BlockLookback(const_cast<MiqtVirtualQsciLexerHTML*>(this), handle__BlockLookback);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_BlockLookback() const {

		return QsciLexerHTML::blockLookback();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockStart = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStart(int* style) const override {
		if (handle__BlockStart == 0) {
			return QsciLexerHTML::blockStart(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerHTML_BlockStart(const_cast<MiqtVirtualQsciLexerHTML*>(this), handle__BlockStart, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockStart(int* style) const {

		return (const char*) QsciLexerHTML::blockStart(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockStartKeyword = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStartKeyword(int* style) const override {
		if (handle__BlockStartKeyword == 0) {
			return QsciLexerHTML::blockStartKeyword(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerHTML_BlockStartKeyword(const_cast<MiqtVirtualQsciLexerHTML*>(this), handle__BlockStartKeyword, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockStartKeyword(int* style) const {

		return (const char*) QsciLexerHTML::blockStartKeyword(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BraceStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int braceStyle() const override {
		if (handle__BraceStyle == 0) {
			return QsciLexerHTML::braceStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerHTML_BraceStyle(const_cast<MiqtVirtualQsciLexerHTML*>(this), handle__BraceStyle);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_BraceStyle() const {

		return QsciLexerHTML::braceStyle();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CaseSensitive = 0;

	// Subclass to allow providing a Go implementation
	virtual bool caseSensitive() const override {
		if (handle__CaseSensitive == 0) {
			return QsciLexerHTML::caseSensitive();
		}
		

		bool callback_return_value = miqt_exec_callback_QsciLexerHTML_CaseSensitive(const_cast<MiqtVirtualQsciLexerHTML*>(this), handle__CaseSensitive);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CaseSensitive() const {

		return QsciLexerHTML::caseSensitive();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Color = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor color(int style) const override {
		if (handle__Color == 0) {
			return QsciLexerHTML::color(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerHTML_Color(const_cast<MiqtVirtualQsciLexerHTML*>(this), handle__Color, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_Color(int style) const {

		return new QColor(QsciLexerHTML::color(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eolFill(int style) const override {
		if (handle__EolFill == 0) {
			return QsciLexerHTML::eolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexerHTML_EolFill(const_cast<MiqtVirtualQsciLexerHTML*>(this), handle__EolFill, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EolFill(int style) const {

		return QsciLexerHTML::eolFill(static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Font = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont font(int style) const override {
		if (handle__Font == 0) {
			return QsciLexerHTML::font(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexerHTML_Font(const_cast<MiqtVirtualQsciLexerHTML*>(this), handle__Font, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QFont* virtualbase_Font(int style) const {

		return new QFont(QsciLexerHTML::font(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IndentationGuideView = 0;

	// Subclass to allow providing a Go implementation
	virtual int indentationGuideView() const override {
		if (handle__IndentationGuideView == 0) {
			return QsciLexerHTML::indentationGuideView();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerHTML_IndentationGuideView(const_cast<MiqtVirtualQsciLexerHTML*>(this), handle__IndentationGuideView);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_IndentationGuideView() const {

		return QsciLexerHTML::indentationGuideView();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Keywords = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* keywords(int set) const override {
		if (handle__Keywords == 0) {
			return QsciLexerHTML::keywords(set);
		}
		
		int sigval1 = set;

		const char* callback_return_value = miqt_exec_callback_QsciLexerHTML_Keywords(const_cast<MiqtVirtualQsciLexerHTML*>(this), handle__Keywords, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_Keywords(int set) const {

		return (const char*) QsciLexerHTML::keywords(static_cast<int>(set));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int defaultStyle() const override {
		if (handle__DefaultStyle == 0) {
			return QsciLexerHTML::defaultStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerHTML_DefaultStyle(const_cast<MiqtVirtualQsciLexerHTML*>(this), handle__DefaultStyle);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DefaultStyle() const {

		return QsciLexerHTML::defaultStyle();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Description = 0;

	// Subclass to allow providing a Go implementation
	virtual QString description(int style) const override {
		if (handle__Description == 0) {
			return QString(); // Pure virtual, there is no base we can call
		}
		
		int sigval1 = style;

		struct miqt_string callback_return_value = miqt_exec_callback_QsciLexerHTML_Description(const_cast<MiqtVirtualQsciLexerHTML*>(this), handle__Description, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paper = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor paper(int style) const override {
		if (handle__Paper == 0) {
			return QsciLexerHTML::paper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerHTML_Paper(const_cast<MiqtVirtualQsciLexerHTML*>(this), handle__Paper, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_Paper(int style) const {

		return new QColor(QsciLexerHTML::paper(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultColorWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultColor(int style) const override {
		if (handle__DefaultColorWithStyle == 0) {
			return QsciLexerHTML::defaultColor(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerHTML_DefaultColorWithStyle(const_cast<MiqtVirtualQsciLexerHTML*>(this), handle__DefaultColorWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_DefaultColorWithStyle(int style) const {

		return new QColor(QsciLexerHTML::defaultColor(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool defaultEolFill(int style) const override {
		if (handle__DefaultEolFill == 0) {
			return QsciLexerHTML::defaultEolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexerHTML_DefaultEolFill(const_cast<MiqtVirtualQsciLexerHTML*>(this), handle__DefaultEolFill, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_DefaultEolFill(int style) const {

		return QsciLexerHTML::defaultEolFill(static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultFontWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont defaultFont(int style) const override {
		if (handle__DefaultFontWithStyle == 0) {
			return QsciLexerHTML::defaultFont(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexerHTML_DefaultFontWithStyle(const_cast<MiqtVirtualQsciLexerHTML*>(this), handle__DefaultFontWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QFont* virtualbase_DefaultFontWithStyle(int style) const {

		return new QFont(QsciLexerHTML::defaultFont(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultPaperWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultPaper(int style) const override {
		if (handle__DefaultPaperWithStyle == 0) {
			return QsciLexerHTML::defaultPaper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerHTML_DefaultPaperWithStyle(const_cast<MiqtVirtualQsciLexerHTML*>(this), handle__DefaultPaperWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_DefaultPaperWithStyle(int style) const {

		return new QColor(QsciLexerHTML::defaultPaper(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEditor(QsciScintilla* editor) override {
		if (handle__SetEditor == 0) {
			QsciLexerHTML::setEditor(editor);
			return;
		}
		
		QsciScintilla* sigval1 = editor;

		miqt_exec_callback_QsciLexerHTML_SetEditor(this, handle__SetEditor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetEditor(QsciScintilla* editor) {

		QsciLexerHTML::setEditor(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RefreshProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual void refreshProperties() override {
		if (handle__RefreshProperties == 0) {
			QsciLexerHTML::refreshProperties();
			return;
		}
		

		miqt_exec_callback_QsciLexerHTML_RefreshProperties(this, handle__RefreshProperties);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_RefreshProperties() {

		QsciLexerHTML::refreshProperties();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StyleBitsNeeded = 0;

	// Subclass to allow providing a Go implementation
	virtual int styleBitsNeeded() const override {
		if (handle__StyleBitsNeeded == 0) {
			return QsciLexerHTML::styleBitsNeeded();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerHTML_StyleBitsNeeded(const_cast<MiqtVirtualQsciLexerHTML*>(this), handle__StyleBitsNeeded);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_StyleBitsNeeded() const {

		return QsciLexerHTML::styleBitsNeeded();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WordCharacters = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* wordCharacters() const override {
		if (handle__WordCharacters == 0) {
			return QsciLexerHTML::wordCharacters();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerHTML_WordCharacters(const_cast<MiqtVirtualQsciLexerHTML*>(this), handle__WordCharacters);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_WordCharacters() const {

		return (const char*) QsciLexerHTML::wordCharacters();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAutoIndentStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAutoIndentStyle(int autoindentstyle) override {
		if (handle__SetAutoIndentStyle == 0) {
			QsciLexerHTML::setAutoIndentStyle(autoindentstyle);
			return;
		}
		
		int sigval1 = autoindentstyle;

		miqt_exec_callback_QsciLexerHTML_SetAutoIndentStyle(this, handle__SetAutoIndentStyle, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAutoIndentStyle(int autoindentstyle) {

		QsciLexerHTML::setAutoIndentStyle(static_cast<int>(autoindentstyle));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setColor(const QColor& c, int style) override {
		if (handle__SetColor == 0) {
			QsciLexerHTML::setColor(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerHTML_SetColor(this, handle__SetColor, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetColor(QColor* c, int style) {

		QsciLexerHTML::setColor(*c, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEolFill(bool eoffill, int style) override {
		if (handle__SetEolFill == 0) {
			QsciLexerHTML::setEolFill(eoffill, style);
			return;
		}
		
		bool sigval1 = eoffill;
		int sigval2 = style;

		miqt_exec_callback_QsciLexerHTML_SetEolFill(this, handle__SetEolFill, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetEolFill(bool eoffill, int style) {

		QsciLexerHTML::setEolFill(eoffill, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFont = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFont(const QFont& f, int style) override {
		if (handle__SetFont == 0) {
			QsciLexerHTML::setFont(f, style);
			return;
		}
		
		const QFont& f_ret = f;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&f_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerHTML_SetFont(this, handle__SetFont, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFont(QFont* f, int style) {

		QsciLexerHTML::setFont(*f, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetPaper = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPaper(const QColor& c, int style) override {
		if (handle__SetPaper == 0) {
			QsciLexerHTML::setPaper(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerHTML_SetPaper(this, handle__SetPaper, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetPaper(QColor* c, int style) {

		QsciLexerHTML::setPaper(*c, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReadProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool readProperties(QSettings& qs, const QString& prefix) override {
		if (handle__ReadProperties == 0) {
			return QsciLexerHTML::readProperties(qs, prefix);
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

		bool callback_return_value = miqt_exec_callback_QsciLexerHTML_ReadProperties(this, handle__ReadProperties, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_ReadProperties(QSettings* qs, struct miqt_string prefix) {
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

		return QsciLexerHTML::readProperties(*qs, prefix_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WriteProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
		if (handle__WriteProperties == 0) {
			return QsciLexerHTML::writeProperties(qs, prefix);
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

		bool callback_return_value = miqt_exec_callback_QsciLexerHTML_WriteProperties(const_cast<MiqtVirtualQsciLexerHTML*>(this), handle__WriteProperties, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WriteProperties(QSettings* qs, struct miqt_string prefix) const {
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

		return QsciLexerHTML::writeProperties(*qs, prefix_QString);

	}

};

QsciLexerHTML* QsciLexerHTML_new() {
	return new MiqtVirtualQsciLexerHTML();
}

QsciLexerHTML* QsciLexerHTML_new2(QObject* parent) {
	return new MiqtVirtualQsciLexerHTML(parent);
}

void QsciLexerHTML_virtbase(QsciLexerHTML* src, QsciLexer** outptr_QsciLexer) {
	*outptr_QsciLexer = static_cast<QsciLexer*>(src);
}

QMetaObject* QsciLexerHTML_MetaObject(const QsciLexerHTML* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerHTML_Metacast(QsciLexerHTML* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerHTML_Tr(const char* s) {
	QString _ret = QsciLexerHTML::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerHTML_Language(const QsciLexerHTML* self) {
	return (const char*) self->language();
}

const char* QsciLexerHTML_Lexer(const QsciLexerHTML* self) {
	return (const char*) self->lexer();
}

const char* QsciLexerHTML_AutoCompletionFillups(const QsciLexerHTML* self) {
	return (const char*) self->autoCompletionFillups();
}

const char* QsciLexerHTML_WordCharacters(const QsciLexerHTML* self) {
	return (const char*) self->wordCharacters();
}

QColor* QsciLexerHTML_DefaultColor(const QsciLexerHTML* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerHTML_DefaultEolFill(const QsciLexerHTML* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerHTML_DefaultFont(const QsciLexerHTML* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerHTML_DefaultPaper(const QsciLexerHTML* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerHTML_Keywords(const QsciLexerHTML* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerHTML_Description(const QsciLexerHTML* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerHTML_RefreshProperties(QsciLexerHTML* self) {
	self->refreshProperties();
}

bool QsciLexerHTML_CaseSensitiveTags(const QsciLexerHTML* self) {
	return self->caseSensitiveTags();
}

void QsciLexerHTML_SetDjangoTemplates(QsciLexerHTML* self, bool enabled) {
	self->setDjangoTemplates(enabled);
}

bool QsciLexerHTML_DjangoTemplates(const QsciLexerHTML* self) {
	return self->djangoTemplates();
}

bool QsciLexerHTML_FoldCompact(const QsciLexerHTML* self) {
	return self->foldCompact();
}

bool QsciLexerHTML_FoldPreprocessor(const QsciLexerHTML* self) {
	return self->foldPreprocessor();
}

void QsciLexerHTML_SetFoldScriptComments(QsciLexerHTML* self, bool fold) {
	self->setFoldScriptComments(fold);
}

bool QsciLexerHTML_FoldScriptComments(const QsciLexerHTML* self) {
	return self->foldScriptComments();
}

void QsciLexerHTML_SetFoldScriptHeredocs(QsciLexerHTML* self, bool fold) {
	self->setFoldScriptHeredocs(fold);
}

bool QsciLexerHTML_FoldScriptHeredocs(const QsciLexerHTML* self) {
	return self->foldScriptHeredocs();
}

void QsciLexerHTML_SetMakoTemplates(QsciLexerHTML* self, bool enabled) {
	self->setMakoTemplates(enabled);
}

bool QsciLexerHTML_MakoTemplates(const QsciLexerHTML* self) {
	return self->makoTemplates();
}

void QsciLexerHTML_SetFoldCompact(QsciLexerHTML* self, bool fold) {
	self->setFoldCompact(fold);
}

void QsciLexerHTML_SetFoldPreprocessor(QsciLexerHTML* self, bool fold) {
	self->setFoldPreprocessor(fold);
}

void QsciLexerHTML_SetCaseSensitiveTags(QsciLexerHTML* self, bool sens) {
	self->setCaseSensitiveTags(sens);
}

struct miqt_string QsciLexerHTML_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerHTML::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerHTML_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerHTML::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerHTML_override_virtual_SetFoldCompact(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) )->handle__SetFoldCompact = slot;
}

void QsciLexerHTML_virtualbase_SetFoldCompact(void* self, bool fold) {
	( (MiqtVirtualQsciLexerHTML*)(self) )->virtualbase_SetFoldCompact(fold);
}

void QsciLexerHTML_override_virtual_SetFoldPreprocessor(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) )->handle__SetFoldPreprocessor = slot;
}

void QsciLexerHTML_virtualbase_SetFoldPreprocessor(void* self, bool fold) {
	( (MiqtVirtualQsciLexerHTML*)(self) )->virtualbase_SetFoldPreprocessor(fold);
}

void QsciLexerHTML_override_virtual_SetCaseSensitiveTags(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) )->handle__SetCaseSensitiveTags = slot;
}

void QsciLexerHTML_virtualbase_SetCaseSensitiveTags(void* self, bool sens) {
	( (MiqtVirtualQsciLexerHTML*)(self) )->virtualbase_SetCaseSensitiveTags(sens);
}

void QsciLexerHTML_override_virtual_Language(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) )->handle__Language = slot;
}

void QsciLexerHTML_override_virtual_Lexer(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) )->handle__Lexer = slot;
}

const char* QsciLexerHTML_virtualbase_Lexer(const void* self) {
	return ( (const MiqtVirtualQsciLexerHTML*)(self) )->virtualbase_Lexer();
}

void QsciLexerHTML_override_virtual_LexerId(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) )->handle__LexerId = slot;
}

int QsciLexerHTML_virtualbase_LexerId(const void* self) {
	return ( (const MiqtVirtualQsciLexerHTML*)(self) )->virtualbase_LexerId();
}

void QsciLexerHTML_override_virtual_AutoCompletionFillups(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) )->handle__AutoCompletionFillups = slot;
}

const char* QsciLexerHTML_virtualbase_AutoCompletionFillups(const void* self) {
	return ( (const MiqtVirtualQsciLexerHTML*)(self) )->virtualbase_AutoCompletionFillups();
}

void QsciLexerHTML_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) )->handle__AutoCompletionWordSeparators = slot;
}

struct miqt_array /* of struct miqt_string */  QsciLexerHTML_virtualbase_AutoCompletionWordSeparators(const void* self) {
	return ( (const MiqtVirtualQsciLexerHTML*)(self) )->virtualbase_AutoCompletionWordSeparators();
}

void QsciLexerHTML_override_virtual_BlockEnd(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) )->handle__BlockEnd = slot;
}

const char* QsciLexerHTML_virtualbase_BlockEnd(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerHTML*)(self) )->virtualbase_BlockEnd(style);
}

void QsciLexerHTML_override_virtual_BlockLookback(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) )->handle__BlockLookback = slot;
}

int QsciLexerHTML_virtualbase_BlockLookback(const void* self) {
	return ( (const MiqtVirtualQsciLexerHTML*)(self) )->virtualbase_BlockLookback();
}

void QsciLexerHTML_override_virtual_BlockStart(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) )->handle__BlockStart = slot;
}

const char* QsciLexerHTML_virtualbase_BlockStart(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerHTML*)(self) )->virtualbase_BlockStart(style);
}

void QsciLexerHTML_override_virtual_BlockStartKeyword(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) )->handle__BlockStartKeyword = slot;
}

const char* QsciLexerHTML_virtualbase_BlockStartKeyword(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerHTML*)(self) )->virtualbase_BlockStartKeyword(style);
}

void QsciLexerHTML_override_virtual_BraceStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) )->handle__BraceStyle = slot;
}

int QsciLexerHTML_virtualbase_BraceStyle(const void* self) {
	return ( (const MiqtVirtualQsciLexerHTML*)(self) )->virtualbase_BraceStyle();
}

void QsciLexerHTML_override_virtual_CaseSensitive(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) )->handle__CaseSensitive = slot;
}

bool QsciLexerHTML_virtualbase_CaseSensitive(const void* self) {
	return ( (const MiqtVirtualQsciLexerHTML*)(self) )->virtualbase_CaseSensitive();
}

void QsciLexerHTML_override_virtual_Color(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) )->handle__Color = slot;
}

QColor* QsciLexerHTML_virtualbase_Color(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerHTML*)(self) )->virtualbase_Color(style);
}

void QsciLexerHTML_override_virtual_EolFill(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) )->handle__EolFill = slot;
}

bool QsciLexerHTML_virtualbase_EolFill(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerHTML*)(self) )->virtualbase_EolFill(style);
}

void QsciLexerHTML_override_virtual_Font(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) )->handle__Font = slot;
}

QFont* QsciLexerHTML_virtualbase_Font(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerHTML*)(self) )->virtualbase_Font(style);
}

void QsciLexerHTML_override_virtual_IndentationGuideView(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) )->handle__IndentationGuideView = slot;
}

int QsciLexerHTML_virtualbase_IndentationGuideView(const void* self) {
	return ( (const MiqtVirtualQsciLexerHTML*)(self) )->virtualbase_IndentationGuideView();
}

void QsciLexerHTML_override_virtual_Keywords(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) )->handle__Keywords = slot;
}

const char* QsciLexerHTML_virtualbase_Keywords(const void* self, int set) {
	return ( (const MiqtVirtualQsciLexerHTML*)(self) )->virtualbase_Keywords(set);
}

void QsciLexerHTML_override_virtual_DefaultStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) )->handle__DefaultStyle = slot;
}

int QsciLexerHTML_virtualbase_DefaultStyle(const void* self) {
	return ( (const MiqtVirtualQsciLexerHTML*)(self) )->virtualbase_DefaultStyle();
}

void QsciLexerHTML_override_virtual_Description(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) )->handle__Description = slot;
}

void QsciLexerHTML_override_virtual_Paper(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) )->handle__Paper = slot;
}

QColor* QsciLexerHTML_virtualbase_Paper(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerHTML*)(self) )->virtualbase_Paper(style);
}

void QsciLexerHTML_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) )->handle__DefaultColorWithStyle = slot;
}

QColor* QsciLexerHTML_virtualbase_DefaultColorWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerHTML*)(self) )->virtualbase_DefaultColorWithStyle(style);
}

void QsciLexerHTML_override_virtual_DefaultEolFill(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) )->handle__DefaultEolFill = slot;
}

bool QsciLexerHTML_virtualbase_DefaultEolFill(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerHTML*)(self) )->virtualbase_DefaultEolFill(style);
}

void QsciLexerHTML_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) )->handle__DefaultFontWithStyle = slot;
}

QFont* QsciLexerHTML_virtualbase_DefaultFontWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerHTML*)(self) )->virtualbase_DefaultFontWithStyle(style);
}

void QsciLexerHTML_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) )->handle__DefaultPaperWithStyle = slot;
}

QColor* QsciLexerHTML_virtualbase_DefaultPaperWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerHTML*)(self) )->virtualbase_DefaultPaperWithStyle(style);
}

void QsciLexerHTML_override_virtual_SetEditor(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) )->handle__SetEditor = slot;
}

void QsciLexerHTML_virtualbase_SetEditor(void* self, QsciScintilla* editor) {
	( (MiqtVirtualQsciLexerHTML*)(self) )->virtualbase_SetEditor(editor);
}

void QsciLexerHTML_override_virtual_RefreshProperties(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) )->handle__RefreshProperties = slot;
}

void QsciLexerHTML_virtualbase_RefreshProperties(void* self) {
	( (MiqtVirtualQsciLexerHTML*)(self) )->virtualbase_RefreshProperties();
}

void QsciLexerHTML_override_virtual_StyleBitsNeeded(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) )->handle__StyleBitsNeeded = slot;
}

int QsciLexerHTML_virtualbase_StyleBitsNeeded(const void* self) {
	return ( (const MiqtVirtualQsciLexerHTML*)(self) )->virtualbase_StyleBitsNeeded();
}

void QsciLexerHTML_override_virtual_WordCharacters(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) )->handle__WordCharacters = slot;
}

const char* QsciLexerHTML_virtualbase_WordCharacters(const void* self) {
	return ( (const MiqtVirtualQsciLexerHTML*)(self) )->virtualbase_WordCharacters();
}

void QsciLexerHTML_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) )->handle__SetAutoIndentStyle = slot;
}

void QsciLexerHTML_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle) {
	( (MiqtVirtualQsciLexerHTML*)(self) )->virtualbase_SetAutoIndentStyle(autoindentstyle);
}

void QsciLexerHTML_override_virtual_SetColor(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) )->handle__SetColor = slot;
}

void QsciLexerHTML_virtualbase_SetColor(void* self, QColor* c, int style) {
	( (MiqtVirtualQsciLexerHTML*)(self) )->virtualbase_SetColor(c, style);
}

void QsciLexerHTML_override_virtual_SetEolFill(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) )->handle__SetEolFill = slot;
}

void QsciLexerHTML_virtualbase_SetEolFill(void* self, bool eoffill, int style) {
	( (MiqtVirtualQsciLexerHTML*)(self) )->virtualbase_SetEolFill(eoffill, style);
}

void QsciLexerHTML_override_virtual_SetFont(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) )->handle__SetFont = slot;
}

void QsciLexerHTML_virtualbase_SetFont(void* self, QFont* f, int style) {
	( (MiqtVirtualQsciLexerHTML*)(self) )->virtualbase_SetFont(f, style);
}

void QsciLexerHTML_override_virtual_SetPaper(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) )->handle__SetPaper = slot;
}

void QsciLexerHTML_virtualbase_SetPaper(void* self, QColor* c, int style) {
	( (MiqtVirtualQsciLexerHTML*)(self) )->virtualbase_SetPaper(c, style);
}

void QsciLexerHTML_override_virtual_ReadProperties(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) )->handle__ReadProperties = slot;
}

bool QsciLexerHTML_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix) {
	return ( (MiqtVirtualQsciLexerHTML*)(self) )->virtualbase_ReadProperties(qs, prefix);
}

void QsciLexerHTML_override_virtual_WriteProperties(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) )->handle__WriteProperties = slot;
}

bool QsciLexerHTML_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix) {
	return ( (const MiqtVirtualQsciLexerHTML*)(self) )->virtualbase_WriteProperties(qs, prefix);
}

void QsciLexerHTML_Delete(QsciLexerHTML* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQsciLexerHTML*>( self );
	} else {
		delete self;
	}
}

