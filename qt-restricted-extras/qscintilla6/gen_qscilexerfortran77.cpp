#include <QColor>
#include <QFont>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QSettings>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexerfortran77.h>
#include "gen_qscilexerfortran77.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QsciLexerFortran77_SetFoldCompact(void*, intptr_t, bool);
const char* miqt_exec_callback_QsciLexerFortran77_Language(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerFortran77_Lexer(void*, intptr_t);
int miqt_exec_callback_QsciLexerFortran77_LexerId(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerFortran77_AutoCompletionFillups(void*, intptr_t);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QsciLexerFortran77_AutoCompletionWordSeparators(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerFortran77_BlockEnd(void*, intptr_t, int*);
int miqt_exec_callback_QsciLexerFortran77_BlockLookback(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerFortran77_BlockStart(void*, intptr_t, int*);
const char* miqt_exec_callback_QsciLexerFortran77_BlockStartKeyword(void*, intptr_t, int*);
int miqt_exec_callback_QsciLexerFortran77_BraceStyle(void*, intptr_t);
bool miqt_exec_callback_QsciLexerFortran77_CaseSensitive(void*, intptr_t);
QColor* miqt_exec_callback_QsciLexerFortran77_Color(void*, intptr_t, int);
bool miqt_exec_callback_QsciLexerFortran77_EolFill(void*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerFortran77_Font(void*, intptr_t, int);
int miqt_exec_callback_QsciLexerFortran77_IndentationGuideView(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerFortran77_Keywords(void*, intptr_t, int);
int miqt_exec_callback_QsciLexerFortran77_DefaultStyle(void*, intptr_t);
struct miqt_string miqt_exec_callback_QsciLexerFortran77_Description(void*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerFortran77_Paper(void*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerFortran77_DefaultColorWithStyle(void*, intptr_t, int);
bool miqt_exec_callback_QsciLexerFortran77_DefaultEolFill(void*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerFortran77_DefaultFontWithStyle(void*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerFortran77_DefaultPaperWithStyle(void*, intptr_t, int);
void miqt_exec_callback_QsciLexerFortran77_SetEditor(void*, intptr_t, QsciScintilla*);
void miqt_exec_callback_QsciLexerFortran77_RefreshProperties(void*, intptr_t);
int miqt_exec_callback_QsciLexerFortran77_StyleBitsNeeded(void*, intptr_t);
const char* miqt_exec_callback_QsciLexerFortran77_WordCharacters(void*, intptr_t);
void miqt_exec_callback_QsciLexerFortran77_SetAutoIndentStyle(void*, intptr_t, int);
void miqt_exec_callback_QsciLexerFortran77_SetColor(void*, intptr_t, QColor*, int);
void miqt_exec_callback_QsciLexerFortran77_SetEolFill(void*, intptr_t, bool, int);
void miqt_exec_callback_QsciLexerFortran77_SetFont(void*, intptr_t, QFont*, int);
void miqt_exec_callback_QsciLexerFortran77_SetPaper(void*, intptr_t, QColor*, int);
bool miqt_exec_callback_QsciLexerFortran77_ReadProperties(void*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerFortran77_WriteProperties(void*, intptr_t, QSettings*, struct miqt_string);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciLexerFortran77 final : public QsciLexerFortran77 {
public:

	MiqtVirtualQsciLexerFortran77(): QsciLexerFortran77() {};
	MiqtVirtualQsciLexerFortran77(QObject* parent): QsciLexerFortran77(parent) {};

	virtual ~MiqtVirtualQsciLexerFortran77() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldCompact = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldCompact(bool fold) override {
		if (handle__SetFoldCompact == 0) {
			QsciLexerFortran77::setFoldCompact(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerFortran77_SetFoldCompact(this, handle__SetFoldCompact, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldCompact(bool fold) {

		QsciLexerFortran77::setFoldCompact(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Language = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* language() const override {
		if (handle__Language == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerFortran77_Language(const_cast<MiqtVirtualQsciLexerFortran77*>(this), handle__Language);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Lexer = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* lexer() const override {
		if (handle__Lexer == 0) {
			return QsciLexerFortran77::lexer();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerFortran77_Lexer(const_cast<MiqtVirtualQsciLexerFortran77*>(this), handle__Lexer);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_Lexer() const {

		return (const char*) QsciLexerFortran77::lexer();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LexerId = 0;

	// Subclass to allow providing a Go implementation
	virtual int lexerId() const override {
		if (handle__LexerId == 0) {
			return QsciLexerFortran77::lexerId();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerFortran77_LexerId(const_cast<MiqtVirtualQsciLexerFortran77*>(this), handle__LexerId);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_LexerId() const {

		return QsciLexerFortran77::lexerId();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AutoCompletionFillups = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* autoCompletionFillups() const override {
		if (handle__AutoCompletionFillups == 0) {
			return QsciLexerFortran77::autoCompletionFillups();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerFortran77_AutoCompletionFillups(const_cast<MiqtVirtualQsciLexerFortran77*>(this), handle__AutoCompletionFillups);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_AutoCompletionFillups() const {

		return (const char*) QsciLexerFortran77::autoCompletionFillups();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AutoCompletionWordSeparators = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList autoCompletionWordSeparators() const override {
		if (handle__AutoCompletionWordSeparators == 0) {
			return QsciLexerFortran77::autoCompletionWordSeparators();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QsciLexerFortran77_AutoCompletionWordSeparators(const_cast<MiqtVirtualQsciLexerFortran77*>(this), handle__AutoCompletionWordSeparators);
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

		QStringList _ret = QsciLexerFortran77::autoCompletionWordSeparators();
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
			return QsciLexerFortran77::blockEnd(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerFortran77_BlockEnd(const_cast<MiqtVirtualQsciLexerFortran77*>(this), handle__BlockEnd, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockEnd(int* style) const {

		return (const char*) QsciLexerFortran77::blockEnd(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockLookback = 0;

	// Subclass to allow providing a Go implementation
	virtual int blockLookback() const override {
		if (handle__BlockLookback == 0) {
			return QsciLexerFortran77::blockLookback();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerFortran77_BlockLookback(const_cast<MiqtVirtualQsciLexerFortran77*>(this), handle__BlockLookback);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_BlockLookback() const {

		return QsciLexerFortran77::blockLookback();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockStart = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStart(int* style) const override {
		if (handle__BlockStart == 0) {
			return QsciLexerFortran77::blockStart(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerFortran77_BlockStart(const_cast<MiqtVirtualQsciLexerFortran77*>(this), handle__BlockStart, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockStart(int* style) const {

		return (const char*) QsciLexerFortran77::blockStart(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockStartKeyword = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStartKeyword(int* style) const override {
		if (handle__BlockStartKeyword == 0) {
			return QsciLexerFortran77::blockStartKeyword(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerFortran77_BlockStartKeyword(const_cast<MiqtVirtualQsciLexerFortran77*>(this), handle__BlockStartKeyword, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockStartKeyword(int* style) const {

		return (const char*) QsciLexerFortran77::blockStartKeyword(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BraceStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int braceStyle() const override {
		if (handle__BraceStyle == 0) {
			return QsciLexerFortran77::braceStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerFortran77_BraceStyle(const_cast<MiqtVirtualQsciLexerFortran77*>(this), handle__BraceStyle);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_BraceStyle() const {

		return QsciLexerFortran77::braceStyle();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CaseSensitive = 0;

	// Subclass to allow providing a Go implementation
	virtual bool caseSensitive() const override {
		if (handle__CaseSensitive == 0) {
			return QsciLexerFortran77::caseSensitive();
		}
		

		bool callback_return_value = miqt_exec_callback_QsciLexerFortran77_CaseSensitive(const_cast<MiqtVirtualQsciLexerFortran77*>(this), handle__CaseSensitive);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CaseSensitive() const {

		return QsciLexerFortran77::caseSensitive();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Color = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor color(int style) const override {
		if (handle__Color == 0) {
			return QsciLexerFortran77::color(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerFortran77_Color(const_cast<MiqtVirtualQsciLexerFortran77*>(this), handle__Color, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_Color(int style) const {

		return new QColor(QsciLexerFortran77::color(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eolFill(int style) const override {
		if (handle__EolFill == 0) {
			return QsciLexerFortran77::eolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexerFortran77_EolFill(const_cast<MiqtVirtualQsciLexerFortran77*>(this), handle__EolFill, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EolFill(int style) const {

		return QsciLexerFortran77::eolFill(static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Font = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont font(int style) const override {
		if (handle__Font == 0) {
			return QsciLexerFortran77::font(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexerFortran77_Font(const_cast<MiqtVirtualQsciLexerFortran77*>(this), handle__Font, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QFont* virtualbase_Font(int style) const {

		return new QFont(QsciLexerFortran77::font(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IndentationGuideView = 0;

	// Subclass to allow providing a Go implementation
	virtual int indentationGuideView() const override {
		if (handle__IndentationGuideView == 0) {
			return QsciLexerFortran77::indentationGuideView();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerFortran77_IndentationGuideView(const_cast<MiqtVirtualQsciLexerFortran77*>(this), handle__IndentationGuideView);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_IndentationGuideView() const {

		return QsciLexerFortran77::indentationGuideView();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Keywords = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* keywords(int set) const override {
		if (handle__Keywords == 0) {
			return QsciLexerFortran77::keywords(set);
		}
		
		int sigval1 = set;

		const char* callback_return_value = miqt_exec_callback_QsciLexerFortran77_Keywords(const_cast<MiqtVirtualQsciLexerFortran77*>(this), handle__Keywords, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_Keywords(int set) const {

		return (const char*) QsciLexerFortran77::keywords(static_cast<int>(set));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int defaultStyle() const override {
		if (handle__DefaultStyle == 0) {
			return QsciLexerFortran77::defaultStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerFortran77_DefaultStyle(const_cast<MiqtVirtualQsciLexerFortran77*>(this), handle__DefaultStyle);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DefaultStyle() const {

		return QsciLexerFortran77::defaultStyle();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Description = 0;

	// Subclass to allow providing a Go implementation
	virtual QString description(int style) const override {
		if (handle__Description == 0) {
			return QString(); // Pure virtual, there is no base we can call
		}
		
		int sigval1 = style;

		struct miqt_string callback_return_value = miqt_exec_callback_QsciLexerFortran77_Description(const_cast<MiqtVirtualQsciLexerFortran77*>(this), handle__Description, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paper = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor paper(int style) const override {
		if (handle__Paper == 0) {
			return QsciLexerFortran77::paper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerFortran77_Paper(const_cast<MiqtVirtualQsciLexerFortran77*>(this), handle__Paper, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_Paper(int style) const {

		return new QColor(QsciLexerFortran77::paper(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultColorWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultColor(int style) const override {
		if (handle__DefaultColorWithStyle == 0) {
			return QsciLexerFortran77::defaultColor(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerFortran77_DefaultColorWithStyle(const_cast<MiqtVirtualQsciLexerFortran77*>(this), handle__DefaultColorWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_DefaultColorWithStyle(int style) const {

		return new QColor(QsciLexerFortran77::defaultColor(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool defaultEolFill(int style) const override {
		if (handle__DefaultEolFill == 0) {
			return QsciLexerFortran77::defaultEolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexerFortran77_DefaultEolFill(const_cast<MiqtVirtualQsciLexerFortran77*>(this), handle__DefaultEolFill, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_DefaultEolFill(int style) const {

		return QsciLexerFortran77::defaultEolFill(static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultFontWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont defaultFont(int style) const override {
		if (handle__DefaultFontWithStyle == 0) {
			return QsciLexerFortran77::defaultFont(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexerFortran77_DefaultFontWithStyle(const_cast<MiqtVirtualQsciLexerFortran77*>(this), handle__DefaultFontWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QFont* virtualbase_DefaultFontWithStyle(int style) const {

		return new QFont(QsciLexerFortran77::defaultFont(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultPaperWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultPaper(int style) const override {
		if (handle__DefaultPaperWithStyle == 0) {
			return QsciLexerFortran77::defaultPaper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerFortran77_DefaultPaperWithStyle(const_cast<MiqtVirtualQsciLexerFortran77*>(this), handle__DefaultPaperWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_DefaultPaperWithStyle(int style) const {

		return new QColor(QsciLexerFortran77::defaultPaper(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEditor(QsciScintilla* editor) override {
		if (handle__SetEditor == 0) {
			QsciLexerFortran77::setEditor(editor);
			return;
		}
		
		QsciScintilla* sigval1 = editor;

		miqt_exec_callback_QsciLexerFortran77_SetEditor(this, handle__SetEditor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetEditor(QsciScintilla* editor) {

		QsciLexerFortran77::setEditor(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RefreshProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual void refreshProperties() override {
		if (handle__RefreshProperties == 0) {
			QsciLexerFortran77::refreshProperties();
			return;
		}
		

		miqt_exec_callback_QsciLexerFortran77_RefreshProperties(this, handle__RefreshProperties);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_RefreshProperties() {

		QsciLexerFortran77::refreshProperties();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StyleBitsNeeded = 0;

	// Subclass to allow providing a Go implementation
	virtual int styleBitsNeeded() const override {
		if (handle__StyleBitsNeeded == 0) {
			return QsciLexerFortran77::styleBitsNeeded();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerFortran77_StyleBitsNeeded(const_cast<MiqtVirtualQsciLexerFortran77*>(this), handle__StyleBitsNeeded);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_StyleBitsNeeded() const {

		return QsciLexerFortran77::styleBitsNeeded();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WordCharacters = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* wordCharacters() const override {
		if (handle__WordCharacters == 0) {
			return QsciLexerFortran77::wordCharacters();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerFortran77_WordCharacters(const_cast<MiqtVirtualQsciLexerFortran77*>(this), handle__WordCharacters);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_WordCharacters() const {

		return (const char*) QsciLexerFortran77::wordCharacters();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAutoIndentStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAutoIndentStyle(int autoindentstyle) override {
		if (handle__SetAutoIndentStyle == 0) {
			QsciLexerFortran77::setAutoIndentStyle(autoindentstyle);
			return;
		}
		
		int sigval1 = autoindentstyle;

		miqt_exec_callback_QsciLexerFortran77_SetAutoIndentStyle(this, handle__SetAutoIndentStyle, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAutoIndentStyle(int autoindentstyle) {

		QsciLexerFortran77::setAutoIndentStyle(static_cast<int>(autoindentstyle));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setColor(const QColor& c, int style) override {
		if (handle__SetColor == 0) {
			QsciLexerFortran77::setColor(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerFortran77_SetColor(this, handle__SetColor, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetColor(QColor* c, int style) {

		QsciLexerFortran77::setColor(*c, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEolFill(bool eoffill, int style) override {
		if (handle__SetEolFill == 0) {
			QsciLexerFortran77::setEolFill(eoffill, style);
			return;
		}
		
		bool sigval1 = eoffill;
		int sigval2 = style;

		miqt_exec_callback_QsciLexerFortran77_SetEolFill(this, handle__SetEolFill, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetEolFill(bool eoffill, int style) {

		QsciLexerFortran77::setEolFill(eoffill, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFont = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFont(const QFont& f, int style) override {
		if (handle__SetFont == 0) {
			QsciLexerFortran77::setFont(f, style);
			return;
		}
		
		const QFont& f_ret = f;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&f_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerFortran77_SetFont(this, handle__SetFont, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFont(QFont* f, int style) {

		QsciLexerFortran77::setFont(*f, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetPaper = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPaper(const QColor& c, int style) override {
		if (handle__SetPaper == 0) {
			QsciLexerFortran77::setPaper(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerFortran77_SetPaper(this, handle__SetPaper, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetPaper(QColor* c, int style) {

		QsciLexerFortran77::setPaper(*c, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReadProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool readProperties(QSettings& qs, const QString& prefix) override {
		if (handle__ReadProperties == 0) {
			return QsciLexerFortran77::readProperties(qs, prefix);
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

		bool callback_return_value = miqt_exec_callback_QsciLexerFortran77_ReadProperties(this, handle__ReadProperties, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_ReadProperties(QSettings* qs, struct miqt_string prefix) {
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

		return QsciLexerFortran77::readProperties(*qs, prefix_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WriteProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
		if (handle__WriteProperties == 0) {
			return QsciLexerFortran77::writeProperties(qs, prefix);
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

		bool callback_return_value = miqt_exec_callback_QsciLexerFortran77_WriteProperties(const_cast<MiqtVirtualQsciLexerFortran77*>(this), handle__WriteProperties, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WriteProperties(QSettings* qs, struct miqt_string prefix) const {
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

		return QsciLexerFortran77::writeProperties(*qs, prefix_QString);

	}

};

QsciLexerFortran77* QsciLexerFortran77_new() {
	return new MiqtVirtualQsciLexerFortran77();
}

QsciLexerFortran77* QsciLexerFortran77_new2(QObject* parent) {
	return new MiqtVirtualQsciLexerFortran77(parent);
}

void QsciLexerFortran77_virtbase(QsciLexerFortran77* src, QsciLexer** outptr_QsciLexer) {
	*outptr_QsciLexer = static_cast<QsciLexer*>(src);
}

QMetaObject* QsciLexerFortran77_MetaObject(const QsciLexerFortran77* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerFortran77_Metacast(QsciLexerFortran77* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerFortran77_Tr(const char* s) {
	QString _ret = QsciLexerFortran77::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerFortran77_Language(const QsciLexerFortran77* self) {
	return (const char*) self->language();
}

const char* QsciLexerFortran77_Lexer(const QsciLexerFortran77* self) {
	return (const char*) self->lexer();
}

int QsciLexerFortran77_BraceStyle(const QsciLexerFortran77* self) {
	return self->braceStyle();
}

QColor* QsciLexerFortran77_DefaultColor(const QsciLexerFortran77* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerFortran77_DefaultEolFill(const QsciLexerFortran77* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerFortran77_DefaultFont(const QsciLexerFortran77* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerFortran77_DefaultPaper(const QsciLexerFortran77* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerFortran77_Keywords(const QsciLexerFortran77* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerFortran77_Description(const QsciLexerFortran77* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerFortran77_RefreshProperties(QsciLexerFortran77* self) {
	self->refreshProperties();
}

bool QsciLexerFortran77_FoldCompact(const QsciLexerFortran77* self) {
	return self->foldCompact();
}

void QsciLexerFortran77_SetFoldCompact(QsciLexerFortran77* self, bool fold) {
	self->setFoldCompact(fold);
}

struct miqt_string QsciLexerFortran77_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerFortran77::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerFortran77_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerFortran77::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QsciLexerFortran77_override_virtual_SetFoldCompact(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerFortran77* self_cast = dynamic_cast<MiqtVirtualQsciLexerFortran77*>( (QsciLexerFortran77*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetFoldCompact = slot;
	return true;
}

void QsciLexerFortran77_virtualbase_SetFoldCompact(void* self, bool fold) {
	( (MiqtVirtualQsciLexerFortran77*)(self) )->virtualbase_SetFoldCompact(fold);
}

bool QsciLexerFortran77_override_virtual_Language(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerFortran77* self_cast = dynamic_cast<MiqtVirtualQsciLexerFortran77*>( (QsciLexerFortran77*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Language = slot;
	return true;
}

bool QsciLexerFortran77_override_virtual_Lexer(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerFortran77* self_cast = dynamic_cast<MiqtVirtualQsciLexerFortran77*>( (QsciLexerFortran77*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Lexer = slot;
	return true;
}

const char* QsciLexerFortran77_virtualbase_Lexer(const void* self) {
	return ( (const MiqtVirtualQsciLexerFortran77*)(self) )->virtualbase_Lexer();
}

bool QsciLexerFortran77_override_virtual_LexerId(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerFortran77* self_cast = dynamic_cast<MiqtVirtualQsciLexerFortran77*>( (QsciLexerFortran77*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LexerId = slot;
	return true;
}

int QsciLexerFortran77_virtualbase_LexerId(const void* self) {
	return ( (const MiqtVirtualQsciLexerFortran77*)(self) )->virtualbase_LexerId();
}

bool QsciLexerFortran77_override_virtual_AutoCompletionFillups(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerFortran77* self_cast = dynamic_cast<MiqtVirtualQsciLexerFortran77*>( (QsciLexerFortran77*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__AutoCompletionFillups = slot;
	return true;
}

const char* QsciLexerFortran77_virtualbase_AutoCompletionFillups(const void* self) {
	return ( (const MiqtVirtualQsciLexerFortran77*)(self) )->virtualbase_AutoCompletionFillups();
}

bool QsciLexerFortran77_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerFortran77* self_cast = dynamic_cast<MiqtVirtualQsciLexerFortran77*>( (QsciLexerFortran77*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__AutoCompletionWordSeparators = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QsciLexerFortran77_virtualbase_AutoCompletionWordSeparators(const void* self) {
	return ( (const MiqtVirtualQsciLexerFortran77*)(self) )->virtualbase_AutoCompletionWordSeparators();
}

bool QsciLexerFortran77_override_virtual_BlockEnd(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerFortran77* self_cast = dynamic_cast<MiqtVirtualQsciLexerFortran77*>( (QsciLexerFortran77*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BlockEnd = slot;
	return true;
}

const char* QsciLexerFortran77_virtualbase_BlockEnd(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerFortran77*)(self) )->virtualbase_BlockEnd(style);
}

bool QsciLexerFortran77_override_virtual_BlockLookback(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerFortran77* self_cast = dynamic_cast<MiqtVirtualQsciLexerFortran77*>( (QsciLexerFortran77*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BlockLookback = slot;
	return true;
}

int QsciLexerFortran77_virtualbase_BlockLookback(const void* self) {
	return ( (const MiqtVirtualQsciLexerFortran77*)(self) )->virtualbase_BlockLookback();
}

bool QsciLexerFortran77_override_virtual_BlockStart(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerFortran77* self_cast = dynamic_cast<MiqtVirtualQsciLexerFortran77*>( (QsciLexerFortran77*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BlockStart = slot;
	return true;
}

const char* QsciLexerFortran77_virtualbase_BlockStart(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerFortran77*)(self) )->virtualbase_BlockStart(style);
}

bool QsciLexerFortran77_override_virtual_BlockStartKeyword(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerFortran77* self_cast = dynamic_cast<MiqtVirtualQsciLexerFortran77*>( (QsciLexerFortran77*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BlockStartKeyword = slot;
	return true;
}

const char* QsciLexerFortran77_virtualbase_BlockStartKeyword(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerFortran77*)(self) )->virtualbase_BlockStartKeyword(style);
}

bool QsciLexerFortran77_override_virtual_BraceStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerFortran77* self_cast = dynamic_cast<MiqtVirtualQsciLexerFortran77*>( (QsciLexerFortran77*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BraceStyle = slot;
	return true;
}

int QsciLexerFortran77_virtualbase_BraceStyle(const void* self) {
	return ( (const MiqtVirtualQsciLexerFortran77*)(self) )->virtualbase_BraceStyle();
}

bool QsciLexerFortran77_override_virtual_CaseSensitive(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerFortran77* self_cast = dynamic_cast<MiqtVirtualQsciLexerFortran77*>( (QsciLexerFortran77*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CaseSensitive = slot;
	return true;
}

bool QsciLexerFortran77_virtualbase_CaseSensitive(const void* self) {
	return ( (const MiqtVirtualQsciLexerFortran77*)(self) )->virtualbase_CaseSensitive();
}

bool QsciLexerFortran77_override_virtual_Color(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerFortran77* self_cast = dynamic_cast<MiqtVirtualQsciLexerFortran77*>( (QsciLexerFortran77*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Color = slot;
	return true;
}

QColor* QsciLexerFortran77_virtualbase_Color(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerFortran77*)(self) )->virtualbase_Color(style);
}

bool QsciLexerFortran77_override_virtual_EolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerFortran77* self_cast = dynamic_cast<MiqtVirtualQsciLexerFortran77*>( (QsciLexerFortran77*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EolFill = slot;
	return true;
}

bool QsciLexerFortran77_virtualbase_EolFill(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerFortran77*)(self) )->virtualbase_EolFill(style);
}

bool QsciLexerFortran77_override_virtual_Font(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerFortran77* self_cast = dynamic_cast<MiqtVirtualQsciLexerFortran77*>( (QsciLexerFortran77*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Font = slot;
	return true;
}

QFont* QsciLexerFortran77_virtualbase_Font(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerFortran77*)(self) )->virtualbase_Font(style);
}

bool QsciLexerFortran77_override_virtual_IndentationGuideView(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerFortran77* self_cast = dynamic_cast<MiqtVirtualQsciLexerFortran77*>( (QsciLexerFortran77*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IndentationGuideView = slot;
	return true;
}

int QsciLexerFortran77_virtualbase_IndentationGuideView(const void* self) {
	return ( (const MiqtVirtualQsciLexerFortran77*)(self) )->virtualbase_IndentationGuideView();
}

bool QsciLexerFortran77_override_virtual_Keywords(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerFortran77* self_cast = dynamic_cast<MiqtVirtualQsciLexerFortran77*>( (QsciLexerFortran77*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Keywords = slot;
	return true;
}

const char* QsciLexerFortran77_virtualbase_Keywords(const void* self, int set) {
	return ( (const MiqtVirtualQsciLexerFortran77*)(self) )->virtualbase_Keywords(set);
}

bool QsciLexerFortran77_override_virtual_DefaultStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerFortran77* self_cast = dynamic_cast<MiqtVirtualQsciLexerFortran77*>( (QsciLexerFortran77*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DefaultStyle = slot;
	return true;
}

int QsciLexerFortran77_virtualbase_DefaultStyle(const void* self) {
	return ( (const MiqtVirtualQsciLexerFortran77*)(self) )->virtualbase_DefaultStyle();
}

bool QsciLexerFortran77_override_virtual_Description(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerFortran77* self_cast = dynamic_cast<MiqtVirtualQsciLexerFortran77*>( (QsciLexerFortran77*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Description = slot;
	return true;
}

bool QsciLexerFortran77_override_virtual_Paper(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerFortran77* self_cast = dynamic_cast<MiqtVirtualQsciLexerFortran77*>( (QsciLexerFortran77*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Paper = slot;
	return true;
}

QColor* QsciLexerFortran77_virtualbase_Paper(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerFortran77*)(self) )->virtualbase_Paper(style);
}

bool QsciLexerFortran77_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerFortran77* self_cast = dynamic_cast<MiqtVirtualQsciLexerFortran77*>( (QsciLexerFortran77*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DefaultColorWithStyle = slot;
	return true;
}

QColor* QsciLexerFortran77_virtualbase_DefaultColorWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerFortran77*)(self) )->virtualbase_DefaultColorWithStyle(style);
}

bool QsciLexerFortran77_override_virtual_DefaultEolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerFortran77* self_cast = dynamic_cast<MiqtVirtualQsciLexerFortran77*>( (QsciLexerFortran77*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DefaultEolFill = slot;
	return true;
}

bool QsciLexerFortran77_virtualbase_DefaultEolFill(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerFortran77*)(self) )->virtualbase_DefaultEolFill(style);
}

bool QsciLexerFortran77_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerFortran77* self_cast = dynamic_cast<MiqtVirtualQsciLexerFortran77*>( (QsciLexerFortran77*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DefaultFontWithStyle = slot;
	return true;
}

QFont* QsciLexerFortran77_virtualbase_DefaultFontWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerFortran77*)(self) )->virtualbase_DefaultFontWithStyle(style);
}

bool QsciLexerFortran77_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerFortran77* self_cast = dynamic_cast<MiqtVirtualQsciLexerFortran77*>( (QsciLexerFortran77*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DefaultPaperWithStyle = slot;
	return true;
}

QColor* QsciLexerFortran77_virtualbase_DefaultPaperWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerFortran77*)(self) )->virtualbase_DefaultPaperWithStyle(style);
}

bool QsciLexerFortran77_override_virtual_SetEditor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerFortran77* self_cast = dynamic_cast<MiqtVirtualQsciLexerFortran77*>( (QsciLexerFortran77*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetEditor = slot;
	return true;
}

void QsciLexerFortran77_virtualbase_SetEditor(void* self, QsciScintilla* editor) {
	( (MiqtVirtualQsciLexerFortran77*)(self) )->virtualbase_SetEditor(editor);
}

bool QsciLexerFortran77_override_virtual_RefreshProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerFortran77* self_cast = dynamic_cast<MiqtVirtualQsciLexerFortran77*>( (QsciLexerFortran77*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RefreshProperties = slot;
	return true;
}

void QsciLexerFortran77_virtualbase_RefreshProperties(void* self) {
	( (MiqtVirtualQsciLexerFortran77*)(self) )->virtualbase_RefreshProperties();
}

bool QsciLexerFortran77_override_virtual_StyleBitsNeeded(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerFortran77* self_cast = dynamic_cast<MiqtVirtualQsciLexerFortran77*>( (QsciLexerFortran77*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__StyleBitsNeeded = slot;
	return true;
}

int QsciLexerFortran77_virtualbase_StyleBitsNeeded(const void* self) {
	return ( (const MiqtVirtualQsciLexerFortran77*)(self) )->virtualbase_StyleBitsNeeded();
}

bool QsciLexerFortran77_override_virtual_WordCharacters(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerFortran77* self_cast = dynamic_cast<MiqtVirtualQsciLexerFortran77*>( (QsciLexerFortran77*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WordCharacters = slot;
	return true;
}

const char* QsciLexerFortran77_virtualbase_WordCharacters(const void* self) {
	return ( (const MiqtVirtualQsciLexerFortran77*)(self) )->virtualbase_WordCharacters();
}

bool QsciLexerFortran77_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerFortran77* self_cast = dynamic_cast<MiqtVirtualQsciLexerFortran77*>( (QsciLexerFortran77*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetAutoIndentStyle = slot;
	return true;
}

void QsciLexerFortran77_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle) {
	( (MiqtVirtualQsciLexerFortran77*)(self) )->virtualbase_SetAutoIndentStyle(autoindentstyle);
}

bool QsciLexerFortran77_override_virtual_SetColor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerFortran77* self_cast = dynamic_cast<MiqtVirtualQsciLexerFortran77*>( (QsciLexerFortran77*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetColor = slot;
	return true;
}

void QsciLexerFortran77_virtualbase_SetColor(void* self, QColor* c, int style) {
	( (MiqtVirtualQsciLexerFortran77*)(self) )->virtualbase_SetColor(c, style);
}

bool QsciLexerFortran77_override_virtual_SetEolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerFortran77* self_cast = dynamic_cast<MiqtVirtualQsciLexerFortran77*>( (QsciLexerFortran77*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetEolFill = slot;
	return true;
}

void QsciLexerFortran77_virtualbase_SetEolFill(void* self, bool eoffill, int style) {
	( (MiqtVirtualQsciLexerFortran77*)(self) )->virtualbase_SetEolFill(eoffill, style);
}

bool QsciLexerFortran77_override_virtual_SetFont(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerFortran77* self_cast = dynamic_cast<MiqtVirtualQsciLexerFortran77*>( (QsciLexerFortran77*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetFont = slot;
	return true;
}

void QsciLexerFortran77_virtualbase_SetFont(void* self, QFont* f, int style) {
	( (MiqtVirtualQsciLexerFortran77*)(self) )->virtualbase_SetFont(f, style);
}

bool QsciLexerFortran77_override_virtual_SetPaper(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerFortran77* self_cast = dynamic_cast<MiqtVirtualQsciLexerFortran77*>( (QsciLexerFortran77*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetPaper = slot;
	return true;
}

void QsciLexerFortran77_virtualbase_SetPaper(void* self, QColor* c, int style) {
	( (MiqtVirtualQsciLexerFortran77*)(self) )->virtualbase_SetPaper(c, style);
}

bool QsciLexerFortran77_override_virtual_ReadProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerFortran77* self_cast = dynamic_cast<MiqtVirtualQsciLexerFortran77*>( (QsciLexerFortran77*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ReadProperties = slot;
	return true;
}

bool QsciLexerFortran77_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix) {
	return ( (MiqtVirtualQsciLexerFortran77*)(self) )->virtualbase_ReadProperties(qs, prefix);
}

bool QsciLexerFortran77_override_virtual_WriteProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerFortran77* self_cast = dynamic_cast<MiqtVirtualQsciLexerFortran77*>( (QsciLexerFortran77*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WriteProperties = slot;
	return true;
}

bool QsciLexerFortran77_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix) {
	return ( (const MiqtVirtualQsciLexerFortran77*)(self) )->virtualbase_WriteProperties(qs, prefix);
}

void QsciLexerFortran77_Delete(QsciLexerFortran77* self) {
	delete self;
}

