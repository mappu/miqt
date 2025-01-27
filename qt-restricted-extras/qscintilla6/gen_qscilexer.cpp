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
#include <qscilexer.h>
#include "gen_qscilexer.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QsciLexer_ColorChanged(intptr_t, QColor*, int);
void miqt_exec_callback_QsciLexer_EolFillChanged(intptr_t, bool, int);
void miqt_exec_callback_QsciLexer_FontChanged(intptr_t, QFont*, int);
void miqt_exec_callback_QsciLexer_PaperChanged(intptr_t, QColor*, int);
void miqt_exec_callback_QsciLexer_PropertyChanged(intptr_t, const char*, const char*);
const char* miqt_exec_callback_QsciLexer_Language(const QsciLexer*, intptr_t);
const char* miqt_exec_callback_QsciLexer_Lexer(const QsciLexer*, intptr_t);
int miqt_exec_callback_QsciLexer_LexerId(const QsciLexer*, intptr_t);
const char* miqt_exec_callback_QsciLexer_AutoCompletionFillups(const QsciLexer*, intptr_t);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QsciLexer_AutoCompletionWordSeparators(const QsciLexer*, intptr_t);
const char* miqt_exec_callback_QsciLexer_BlockEnd(const QsciLexer*, intptr_t, int*);
int miqt_exec_callback_QsciLexer_BlockLookback(const QsciLexer*, intptr_t);
const char* miqt_exec_callback_QsciLexer_BlockStart(const QsciLexer*, intptr_t, int*);
const char* miqt_exec_callback_QsciLexer_BlockStartKeyword(const QsciLexer*, intptr_t, int*);
int miqt_exec_callback_QsciLexer_BraceStyle(const QsciLexer*, intptr_t);
bool miqt_exec_callback_QsciLexer_CaseSensitive(const QsciLexer*, intptr_t);
QColor* miqt_exec_callback_QsciLexer_Color(const QsciLexer*, intptr_t, int);
bool miqt_exec_callback_QsciLexer_EolFill(const QsciLexer*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexer_Font(const QsciLexer*, intptr_t, int);
int miqt_exec_callback_QsciLexer_IndentationGuideView(const QsciLexer*, intptr_t);
const char* miqt_exec_callback_QsciLexer_Keywords(const QsciLexer*, intptr_t, int);
int miqt_exec_callback_QsciLexer_DefaultStyle(const QsciLexer*, intptr_t);
struct miqt_string miqt_exec_callback_QsciLexer_Description(const QsciLexer*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexer_Paper(const QsciLexer*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexer_DefaultColorWithStyle(const QsciLexer*, intptr_t, int);
bool miqt_exec_callback_QsciLexer_DefaultEolFill(const QsciLexer*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexer_DefaultFontWithStyle(const QsciLexer*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexer_DefaultPaperWithStyle(const QsciLexer*, intptr_t, int);
void miqt_exec_callback_QsciLexer_SetEditor(QsciLexer*, intptr_t, QsciScintilla*);
void miqt_exec_callback_QsciLexer_RefreshProperties(QsciLexer*, intptr_t);
int miqt_exec_callback_QsciLexer_StyleBitsNeeded(const QsciLexer*, intptr_t);
const char* miqt_exec_callback_QsciLexer_WordCharacters(const QsciLexer*, intptr_t);
void miqt_exec_callback_QsciLexer_SetAutoIndentStyle(QsciLexer*, intptr_t, int);
void miqt_exec_callback_QsciLexer_SetColor(QsciLexer*, intptr_t, QColor*, int);
void miqt_exec_callback_QsciLexer_SetEolFill(QsciLexer*, intptr_t, bool, int);
void miqt_exec_callback_QsciLexer_SetFont(QsciLexer*, intptr_t, QFont*, int);
void miqt_exec_callback_QsciLexer_SetPaper(QsciLexer*, intptr_t, QColor*, int);
bool miqt_exec_callback_QsciLexer_ReadProperties(QsciLexer*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexer_WriteProperties(const QsciLexer*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexer_Event(QsciLexer*, intptr_t, QEvent*);
bool miqt_exec_callback_QsciLexer_EventFilter(QsciLexer*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QsciLexer_TimerEvent(QsciLexer*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QsciLexer_ChildEvent(QsciLexer*, intptr_t, QChildEvent*);
void miqt_exec_callback_QsciLexer_CustomEvent(QsciLexer*, intptr_t, QEvent*);
void miqt_exec_callback_QsciLexer_ConnectNotify(QsciLexer*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QsciLexer_DisconnectNotify(QsciLexer*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciLexer final : public QsciLexer {
public:

	MiqtVirtualQsciLexer(): QsciLexer() {};
	MiqtVirtualQsciLexer(QObject* parent): QsciLexer(parent) {};

	virtual ~MiqtVirtualQsciLexer() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Language = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* language() const override {
		if (handle__Language == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexer_Language(this, handle__Language);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Lexer = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* lexer() const override {
		if (handle__Lexer == 0) {
			return QsciLexer::lexer();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexer_Lexer(this, handle__Lexer);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_Lexer() const {

		return (const char*) QsciLexer::lexer();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LexerId = 0;

	// Subclass to allow providing a Go implementation
	virtual int lexerId() const override {
		if (handle__LexerId == 0) {
			return QsciLexer::lexerId();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexer_LexerId(this, handle__LexerId);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_LexerId() const {

		return QsciLexer::lexerId();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AutoCompletionFillups = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* autoCompletionFillups() const override {
		if (handle__AutoCompletionFillups == 0) {
			return QsciLexer::autoCompletionFillups();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexer_AutoCompletionFillups(this, handle__AutoCompletionFillups);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_AutoCompletionFillups() const {

		return (const char*) QsciLexer::autoCompletionFillups();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AutoCompletionWordSeparators = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList autoCompletionWordSeparators() const override {
		if (handle__AutoCompletionWordSeparators == 0) {
			return QsciLexer::autoCompletionWordSeparators();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QsciLexer_AutoCompletionWordSeparators(this, handle__AutoCompletionWordSeparators);
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

		QStringList _ret = QsciLexer::autoCompletionWordSeparators();
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
			return QsciLexer::blockEnd(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexer_BlockEnd(this, handle__BlockEnd, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockEnd(int* style) const {

		return (const char*) QsciLexer::blockEnd(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockLookback = 0;

	// Subclass to allow providing a Go implementation
	virtual int blockLookback() const override {
		if (handle__BlockLookback == 0) {
			return QsciLexer::blockLookback();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexer_BlockLookback(this, handle__BlockLookback);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_BlockLookback() const {

		return QsciLexer::blockLookback();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockStart = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStart(int* style) const override {
		if (handle__BlockStart == 0) {
			return QsciLexer::blockStart(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexer_BlockStart(this, handle__BlockStart, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockStart(int* style) const {

		return (const char*) QsciLexer::blockStart(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockStartKeyword = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStartKeyword(int* style) const override {
		if (handle__BlockStartKeyword == 0) {
			return QsciLexer::blockStartKeyword(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexer_BlockStartKeyword(this, handle__BlockStartKeyword, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockStartKeyword(int* style) const {

		return (const char*) QsciLexer::blockStartKeyword(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BraceStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int braceStyle() const override {
		if (handle__BraceStyle == 0) {
			return QsciLexer::braceStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexer_BraceStyle(this, handle__BraceStyle);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_BraceStyle() const {

		return QsciLexer::braceStyle();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CaseSensitive = 0;

	// Subclass to allow providing a Go implementation
	virtual bool caseSensitive() const override {
		if (handle__CaseSensitive == 0) {
			return QsciLexer::caseSensitive();
		}
		

		bool callback_return_value = miqt_exec_callback_QsciLexer_CaseSensitive(this, handle__CaseSensitive);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CaseSensitive() const {

		return QsciLexer::caseSensitive();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Color = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor color(int style) const override {
		if (handle__Color == 0) {
			return QsciLexer::color(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexer_Color(this, handle__Color, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_Color(int style) const {

		return new QColor(QsciLexer::color(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eolFill(int style) const override {
		if (handle__EolFill == 0) {
			return QsciLexer::eolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexer_EolFill(this, handle__EolFill, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EolFill(int style) const {

		return QsciLexer::eolFill(static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Font = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont font(int style) const override {
		if (handle__Font == 0) {
			return QsciLexer::font(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexer_Font(this, handle__Font, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QFont* virtualbase_Font(int style) const {

		return new QFont(QsciLexer::font(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IndentationGuideView = 0;

	// Subclass to allow providing a Go implementation
	virtual int indentationGuideView() const override {
		if (handle__IndentationGuideView == 0) {
			return QsciLexer::indentationGuideView();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexer_IndentationGuideView(this, handle__IndentationGuideView);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_IndentationGuideView() const {

		return QsciLexer::indentationGuideView();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Keywords = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* keywords(int set) const override {
		if (handle__Keywords == 0) {
			return QsciLexer::keywords(set);
		}
		
		int sigval1 = set;

		const char* callback_return_value = miqt_exec_callback_QsciLexer_Keywords(this, handle__Keywords, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_Keywords(int set) const {

		return (const char*) QsciLexer::keywords(static_cast<int>(set));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int defaultStyle() const override {
		if (handle__DefaultStyle == 0) {
			return QsciLexer::defaultStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexer_DefaultStyle(this, handle__DefaultStyle);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DefaultStyle() const {

		return QsciLexer::defaultStyle();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Description = 0;

	// Subclass to allow providing a Go implementation
	virtual QString description(int style) const override {
		if (handle__Description == 0) {
			return QString(); // Pure virtual, there is no base we can call
		}
		
		int sigval1 = style;

		struct miqt_string callback_return_value = miqt_exec_callback_QsciLexer_Description(this, handle__Description, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paper = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor paper(int style) const override {
		if (handle__Paper == 0) {
			return QsciLexer::paper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexer_Paper(this, handle__Paper, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_Paper(int style) const {

		return new QColor(QsciLexer::paper(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultColorWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultColor(int style) const override {
		if (handle__DefaultColorWithStyle == 0) {
			return QsciLexer::defaultColor(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexer_DefaultColorWithStyle(this, handle__DefaultColorWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_DefaultColorWithStyle(int style) const {

		return new QColor(QsciLexer::defaultColor(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool defaultEolFill(int style) const override {
		if (handle__DefaultEolFill == 0) {
			return QsciLexer::defaultEolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexer_DefaultEolFill(this, handle__DefaultEolFill, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_DefaultEolFill(int style) const {

		return QsciLexer::defaultEolFill(static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultFontWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont defaultFont(int style) const override {
		if (handle__DefaultFontWithStyle == 0) {
			return QsciLexer::defaultFont(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexer_DefaultFontWithStyle(this, handle__DefaultFontWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QFont* virtualbase_DefaultFontWithStyle(int style) const {

		return new QFont(QsciLexer::defaultFont(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultPaperWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultPaper(int style) const override {
		if (handle__DefaultPaperWithStyle == 0) {
			return QsciLexer::defaultPaper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexer_DefaultPaperWithStyle(this, handle__DefaultPaperWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_DefaultPaperWithStyle(int style) const {

		return new QColor(QsciLexer::defaultPaper(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEditor(QsciScintilla* editor) override {
		if (handle__SetEditor == 0) {
			QsciLexer::setEditor(editor);
			return;
		}
		
		QsciScintilla* sigval1 = editor;

		miqt_exec_callback_QsciLexer_SetEditor(this, handle__SetEditor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetEditor(QsciScintilla* editor) {

		QsciLexer::setEditor(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RefreshProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual void refreshProperties() override {
		if (handle__RefreshProperties == 0) {
			QsciLexer::refreshProperties();
			return;
		}
		

		miqt_exec_callback_QsciLexer_RefreshProperties(this, handle__RefreshProperties);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_RefreshProperties() {

		QsciLexer::refreshProperties();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StyleBitsNeeded = 0;

	// Subclass to allow providing a Go implementation
	virtual int styleBitsNeeded() const override {
		if (handle__StyleBitsNeeded == 0) {
			return QsciLexer::styleBitsNeeded();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexer_StyleBitsNeeded(this, handle__StyleBitsNeeded);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_StyleBitsNeeded() const {

		return QsciLexer::styleBitsNeeded();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WordCharacters = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* wordCharacters() const override {
		if (handle__WordCharacters == 0) {
			return QsciLexer::wordCharacters();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexer_WordCharacters(this, handle__WordCharacters);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_WordCharacters() const {

		return (const char*) QsciLexer::wordCharacters();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAutoIndentStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAutoIndentStyle(int autoindentstyle) override {
		if (handle__SetAutoIndentStyle == 0) {
			QsciLexer::setAutoIndentStyle(autoindentstyle);
			return;
		}
		
		int sigval1 = autoindentstyle;

		miqt_exec_callback_QsciLexer_SetAutoIndentStyle(this, handle__SetAutoIndentStyle, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAutoIndentStyle(int autoindentstyle) {

		QsciLexer::setAutoIndentStyle(static_cast<int>(autoindentstyle));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setColor(const QColor& c, int style) override {
		if (handle__SetColor == 0) {
			QsciLexer::setColor(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexer_SetColor(this, handle__SetColor, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetColor(QColor* c, int style) {

		QsciLexer::setColor(*c, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEolFill(bool eoffill, int style) override {
		if (handle__SetEolFill == 0) {
			QsciLexer::setEolFill(eoffill, style);
			return;
		}
		
		bool sigval1 = eoffill;
		int sigval2 = style;

		miqt_exec_callback_QsciLexer_SetEolFill(this, handle__SetEolFill, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetEolFill(bool eoffill, int style) {

		QsciLexer::setEolFill(eoffill, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFont = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFont(const QFont& f, int style) override {
		if (handle__SetFont == 0) {
			QsciLexer::setFont(f, style);
			return;
		}
		
		const QFont& f_ret = f;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&f_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexer_SetFont(this, handle__SetFont, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFont(QFont* f, int style) {

		QsciLexer::setFont(*f, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetPaper = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPaper(const QColor& c, int style) override {
		if (handle__SetPaper == 0) {
			QsciLexer::setPaper(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexer_SetPaper(this, handle__SetPaper, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetPaper(QColor* c, int style) {

		QsciLexer::setPaper(*c, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReadProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool readProperties(QSettings& qs, const QString& prefix) override {
		if (handle__ReadProperties == 0) {
			return QsciLexer::readProperties(qs, prefix);
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

		bool callback_return_value = miqt_exec_callback_QsciLexer_ReadProperties(this, handle__ReadProperties, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_ReadProperties(QSettings* qs, struct miqt_string prefix) {
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

		return QsciLexer::readProperties(*qs, prefix_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WriteProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
		if (handle__WriteProperties == 0) {
			return QsciLexer::writeProperties(qs, prefix);
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

		bool callback_return_value = miqt_exec_callback_QsciLexer_WriteProperties(this, handle__WriteProperties, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WriteProperties(QSettings* qs, struct miqt_string prefix) const {
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

		return QsciLexer::writeProperties(*qs, prefix_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QsciLexer::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QsciLexer_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QsciLexer::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QsciLexer::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QsciLexer_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QsciLexer::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QsciLexer::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QsciLexer_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QsciLexer::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QsciLexer::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QsciLexer_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QsciLexer::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QsciLexer::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QsciLexer_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QsciLexer::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QsciLexer::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciLexer_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QsciLexer::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QsciLexer::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciLexer_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QsciLexer::disconnectNotify(*signal);

	}

};

QsciLexer* QsciLexer_new() {
	return new MiqtVirtualQsciLexer();
}

QsciLexer* QsciLexer_new2(QObject* parent) {
	return new MiqtVirtualQsciLexer(parent);
}

void QsciLexer_virtbase(QsciLexer* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QsciLexer_MetaObject(const QsciLexer* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexer_Metacast(QsciLexer* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexer_Tr(const char* s) {
	QString _ret = QsciLexer::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexer_Language(const QsciLexer* self) {
	return (const char*) self->language();
}

const char* QsciLexer_Lexer(const QsciLexer* self) {
	return (const char*) self->lexer();
}

int QsciLexer_LexerId(const QsciLexer* self) {
	return self->lexerId();
}

QsciAbstractAPIs* QsciLexer_Apis(const QsciLexer* self) {
	return self->apis();
}

const char* QsciLexer_AutoCompletionFillups(const QsciLexer* self) {
	return (const char*) self->autoCompletionFillups();
}

struct miqt_array /* of struct miqt_string */  QsciLexer_AutoCompletionWordSeparators(const QsciLexer* self) {
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

int QsciLexer_AutoIndentStyle(QsciLexer* self) {
	return self->autoIndentStyle();
}

const char* QsciLexer_BlockEnd(const QsciLexer* self, int* style) {
	return (const char*) self->blockEnd(static_cast<int*>(style));
}

int QsciLexer_BlockLookback(const QsciLexer* self) {
	return self->blockLookback();
}

const char* QsciLexer_BlockStart(const QsciLexer* self, int* style) {
	return (const char*) self->blockStart(static_cast<int*>(style));
}

const char* QsciLexer_BlockStartKeyword(const QsciLexer* self, int* style) {
	return (const char*) self->blockStartKeyword(static_cast<int*>(style));
}

int QsciLexer_BraceStyle(const QsciLexer* self) {
	return self->braceStyle();
}

bool QsciLexer_CaseSensitive(const QsciLexer* self) {
	return self->caseSensitive();
}

QColor* QsciLexer_Color(const QsciLexer* self, int style) {
	return new QColor(self->color(static_cast<int>(style)));
}

bool QsciLexer_EolFill(const QsciLexer* self, int style) {
	return self->eolFill(static_cast<int>(style));
}

QFont* QsciLexer_Font(const QsciLexer* self, int style) {
	return new QFont(self->font(static_cast<int>(style)));
}

int QsciLexer_IndentationGuideView(const QsciLexer* self) {
	return self->indentationGuideView();
}

const char* QsciLexer_Keywords(const QsciLexer* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

int QsciLexer_DefaultStyle(const QsciLexer* self) {
	return self->defaultStyle();
}

struct miqt_string QsciLexer_Description(const QsciLexer* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QColor* QsciLexer_Paper(const QsciLexer* self, int style) {
	return new QColor(self->paper(static_cast<int>(style)));
}

QColor* QsciLexer_DefaultColor(const QsciLexer* self) {
	return new QColor(self->defaultColor());
}

QColor* QsciLexer_DefaultColorWithStyle(const QsciLexer* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexer_DefaultEolFill(const QsciLexer* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexer_DefaultFont(const QsciLexer* self) {
	return new QFont(self->defaultFont());
}

QFont* QsciLexer_DefaultFontWithStyle(const QsciLexer* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexer_DefaultPaper(const QsciLexer* self) {
	return new QColor(self->defaultPaper());
}

QColor* QsciLexer_DefaultPaperWithStyle(const QsciLexer* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

QsciScintilla* QsciLexer_Editor(const QsciLexer* self) {
	return self->editor();
}

void QsciLexer_SetAPIs(QsciLexer* self, QsciAbstractAPIs* apis) {
	self->setAPIs(apis);
}

void QsciLexer_SetDefaultColor(QsciLexer* self, QColor* c) {
	self->setDefaultColor(*c);
}

void QsciLexer_SetDefaultFont(QsciLexer* self, QFont* f) {
	self->setDefaultFont(*f);
}

void QsciLexer_SetDefaultPaper(QsciLexer* self, QColor* c) {
	self->setDefaultPaper(*c);
}

void QsciLexer_SetEditor(QsciLexer* self, QsciScintilla* editor) {
	self->setEditor(editor);
}

bool QsciLexer_ReadSettings(QsciLexer* self, QSettings* qs) {
	return self->readSettings(*qs);
}

void QsciLexer_RefreshProperties(QsciLexer* self) {
	self->refreshProperties();
}

int QsciLexer_StyleBitsNeeded(const QsciLexer* self) {
	return self->styleBitsNeeded();
}

const char* QsciLexer_WordCharacters(const QsciLexer* self) {
	return (const char*) self->wordCharacters();
}

bool QsciLexer_WriteSettings(const QsciLexer* self, QSettings* qs) {
	return self->writeSettings(*qs);
}

void QsciLexer_SetAutoIndentStyle(QsciLexer* self, int autoindentstyle) {
	self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

void QsciLexer_SetColor(QsciLexer* self, QColor* c, int style) {
	self->setColor(*c, static_cast<int>(style));
}

void QsciLexer_SetEolFill(QsciLexer* self, bool eoffill, int style) {
	self->setEolFill(eoffill, static_cast<int>(style));
}

void QsciLexer_SetFont(QsciLexer* self, QFont* f, int style) {
	self->setFont(*f, static_cast<int>(style));
}

void QsciLexer_SetPaper(QsciLexer* self, QColor* c, int style) {
	self->setPaper(*c, static_cast<int>(style));
}

void QsciLexer_ColorChanged(QsciLexer* self, QColor* c, int style) {
	self->colorChanged(*c, static_cast<int>(style));
}

void QsciLexer_connect_ColorChanged(QsciLexer* self, intptr_t slot) {
	MiqtVirtualQsciLexer::connect(self, static_cast<void (QsciLexer::*)(const QColor&, int)>(&QsciLexer::colorChanged), self, [=](const QColor& c, int style) {
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;
		miqt_exec_callback_QsciLexer_ColorChanged(slot, sigval1, sigval2);
	});
}

void QsciLexer_EolFillChanged(QsciLexer* self, bool eolfilled, int style) {
	self->eolFillChanged(eolfilled, static_cast<int>(style));
}

void QsciLexer_connect_EolFillChanged(QsciLexer* self, intptr_t slot) {
	MiqtVirtualQsciLexer::connect(self, static_cast<void (QsciLexer::*)(bool, int)>(&QsciLexer::eolFillChanged), self, [=](bool eolfilled, int style) {
		bool sigval1 = eolfilled;
		int sigval2 = style;
		miqt_exec_callback_QsciLexer_EolFillChanged(slot, sigval1, sigval2);
	});
}

void QsciLexer_FontChanged(QsciLexer* self, QFont* f, int style) {
	self->fontChanged(*f, static_cast<int>(style));
}

void QsciLexer_connect_FontChanged(QsciLexer* self, intptr_t slot) {
	MiqtVirtualQsciLexer::connect(self, static_cast<void (QsciLexer::*)(const QFont&, int)>(&QsciLexer::fontChanged), self, [=](const QFont& f, int style) {
		const QFont& f_ret = f;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&f_ret);
		int sigval2 = style;
		miqt_exec_callback_QsciLexer_FontChanged(slot, sigval1, sigval2);
	});
}

void QsciLexer_PaperChanged(QsciLexer* self, QColor* c, int style) {
	self->paperChanged(*c, static_cast<int>(style));
}

void QsciLexer_connect_PaperChanged(QsciLexer* self, intptr_t slot) {
	MiqtVirtualQsciLexer::connect(self, static_cast<void (QsciLexer::*)(const QColor&, int)>(&QsciLexer::paperChanged), self, [=](const QColor& c, int style) {
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;
		miqt_exec_callback_QsciLexer_PaperChanged(slot, sigval1, sigval2);
	});
}

void QsciLexer_PropertyChanged(QsciLexer* self, const char* prop, const char* val) {
	self->propertyChanged(prop, val);
}

void QsciLexer_connect_PropertyChanged(QsciLexer* self, intptr_t slot) {
	MiqtVirtualQsciLexer::connect(self, static_cast<void (QsciLexer::*)(const char*, const char*)>(&QsciLexer::propertyChanged), self, [=](const char* prop, const char* val) {
		const char* sigval1 = (const char*) prop;
		const char* sigval2 = (const char*) val;
		miqt_exec_callback_QsciLexer_PropertyChanged(slot, sigval1, sigval2);
	});
}

struct miqt_string QsciLexer_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexer::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexer_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexer::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QsciLexer_ReadSettings2(QsciLexer* self, QSettings* qs, const char* prefix) {
	return self->readSettings(*qs, prefix);
}

bool QsciLexer_WriteSettings2(const QsciLexer* self, QSettings* qs, const char* prefix) {
	return self->writeSettings(*qs, prefix);
}

bool QsciLexer_override_virtual_Language(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Language = slot;
	return true;
}

bool QsciLexer_override_virtual_Lexer(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Lexer = slot;
	return true;
}

const char* QsciLexer_virtualbase_Lexer(const void* self) {
	return ( (const MiqtVirtualQsciLexer*)(self) )->virtualbase_Lexer();
}

bool QsciLexer_override_virtual_LexerId(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LexerId = slot;
	return true;
}

int QsciLexer_virtualbase_LexerId(const void* self) {
	return ( (const MiqtVirtualQsciLexer*)(self) )->virtualbase_LexerId();
}

bool QsciLexer_override_virtual_AutoCompletionFillups(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__AutoCompletionFillups = slot;
	return true;
}

const char* QsciLexer_virtualbase_AutoCompletionFillups(const void* self) {
	return ( (const MiqtVirtualQsciLexer*)(self) )->virtualbase_AutoCompletionFillups();
}

bool QsciLexer_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__AutoCompletionWordSeparators = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QsciLexer_virtualbase_AutoCompletionWordSeparators(const void* self) {
	return ( (const MiqtVirtualQsciLexer*)(self) )->virtualbase_AutoCompletionWordSeparators();
}

bool QsciLexer_override_virtual_BlockEnd(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BlockEnd = slot;
	return true;
}

const char* QsciLexer_virtualbase_BlockEnd(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexer*)(self) )->virtualbase_BlockEnd(style);
}

bool QsciLexer_override_virtual_BlockLookback(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BlockLookback = slot;
	return true;
}

int QsciLexer_virtualbase_BlockLookback(const void* self) {
	return ( (const MiqtVirtualQsciLexer*)(self) )->virtualbase_BlockLookback();
}

bool QsciLexer_override_virtual_BlockStart(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BlockStart = slot;
	return true;
}

const char* QsciLexer_virtualbase_BlockStart(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexer*)(self) )->virtualbase_BlockStart(style);
}

bool QsciLexer_override_virtual_BlockStartKeyword(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BlockStartKeyword = slot;
	return true;
}

const char* QsciLexer_virtualbase_BlockStartKeyword(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexer*)(self) )->virtualbase_BlockStartKeyword(style);
}

bool QsciLexer_override_virtual_BraceStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BraceStyle = slot;
	return true;
}

int QsciLexer_virtualbase_BraceStyle(const void* self) {
	return ( (const MiqtVirtualQsciLexer*)(self) )->virtualbase_BraceStyle();
}

bool QsciLexer_override_virtual_CaseSensitive(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CaseSensitive = slot;
	return true;
}

bool QsciLexer_virtualbase_CaseSensitive(const void* self) {
	return ( (const MiqtVirtualQsciLexer*)(self) )->virtualbase_CaseSensitive();
}

bool QsciLexer_override_virtual_Color(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Color = slot;
	return true;
}

QColor* QsciLexer_virtualbase_Color(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexer*)(self) )->virtualbase_Color(style);
}

bool QsciLexer_override_virtual_EolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EolFill = slot;
	return true;
}

bool QsciLexer_virtualbase_EolFill(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexer*)(self) )->virtualbase_EolFill(style);
}

bool QsciLexer_override_virtual_Font(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Font = slot;
	return true;
}

QFont* QsciLexer_virtualbase_Font(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexer*)(self) )->virtualbase_Font(style);
}

bool QsciLexer_override_virtual_IndentationGuideView(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IndentationGuideView = slot;
	return true;
}

int QsciLexer_virtualbase_IndentationGuideView(const void* self) {
	return ( (const MiqtVirtualQsciLexer*)(self) )->virtualbase_IndentationGuideView();
}

bool QsciLexer_override_virtual_Keywords(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Keywords = slot;
	return true;
}

const char* QsciLexer_virtualbase_Keywords(const void* self, int set) {
	return ( (const MiqtVirtualQsciLexer*)(self) )->virtualbase_Keywords(set);
}

bool QsciLexer_override_virtual_DefaultStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DefaultStyle = slot;
	return true;
}

int QsciLexer_virtualbase_DefaultStyle(const void* self) {
	return ( (const MiqtVirtualQsciLexer*)(self) )->virtualbase_DefaultStyle();
}

bool QsciLexer_override_virtual_Description(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Description = slot;
	return true;
}

bool QsciLexer_override_virtual_Paper(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Paper = slot;
	return true;
}

QColor* QsciLexer_virtualbase_Paper(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexer*)(self) )->virtualbase_Paper(style);
}

bool QsciLexer_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DefaultColorWithStyle = slot;
	return true;
}

QColor* QsciLexer_virtualbase_DefaultColorWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexer*)(self) )->virtualbase_DefaultColorWithStyle(style);
}

bool QsciLexer_override_virtual_DefaultEolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DefaultEolFill = slot;
	return true;
}

bool QsciLexer_virtualbase_DefaultEolFill(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexer*)(self) )->virtualbase_DefaultEolFill(style);
}

bool QsciLexer_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DefaultFontWithStyle = slot;
	return true;
}

QFont* QsciLexer_virtualbase_DefaultFontWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexer*)(self) )->virtualbase_DefaultFontWithStyle(style);
}

bool QsciLexer_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DefaultPaperWithStyle = slot;
	return true;
}

QColor* QsciLexer_virtualbase_DefaultPaperWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexer*)(self) )->virtualbase_DefaultPaperWithStyle(style);
}

bool QsciLexer_override_virtual_SetEditor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetEditor = slot;
	return true;
}

void QsciLexer_virtualbase_SetEditor(void* self, QsciScintilla* editor) {
	( (MiqtVirtualQsciLexer*)(self) )->virtualbase_SetEditor(editor);
}

bool QsciLexer_override_virtual_RefreshProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RefreshProperties = slot;
	return true;
}

void QsciLexer_virtualbase_RefreshProperties(void* self) {
	( (MiqtVirtualQsciLexer*)(self) )->virtualbase_RefreshProperties();
}

bool QsciLexer_override_virtual_StyleBitsNeeded(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__StyleBitsNeeded = slot;
	return true;
}

int QsciLexer_virtualbase_StyleBitsNeeded(const void* self) {
	return ( (const MiqtVirtualQsciLexer*)(self) )->virtualbase_StyleBitsNeeded();
}

bool QsciLexer_override_virtual_WordCharacters(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WordCharacters = slot;
	return true;
}

const char* QsciLexer_virtualbase_WordCharacters(const void* self) {
	return ( (const MiqtVirtualQsciLexer*)(self) )->virtualbase_WordCharacters();
}

bool QsciLexer_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetAutoIndentStyle = slot;
	return true;
}

void QsciLexer_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle) {
	( (MiqtVirtualQsciLexer*)(self) )->virtualbase_SetAutoIndentStyle(autoindentstyle);
}

bool QsciLexer_override_virtual_SetColor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetColor = slot;
	return true;
}

void QsciLexer_virtualbase_SetColor(void* self, QColor* c, int style) {
	( (MiqtVirtualQsciLexer*)(self) )->virtualbase_SetColor(c, style);
}

bool QsciLexer_override_virtual_SetEolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetEolFill = slot;
	return true;
}

void QsciLexer_virtualbase_SetEolFill(void* self, bool eoffill, int style) {
	( (MiqtVirtualQsciLexer*)(self) )->virtualbase_SetEolFill(eoffill, style);
}

bool QsciLexer_override_virtual_SetFont(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetFont = slot;
	return true;
}

void QsciLexer_virtualbase_SetFont(void* self, QFont* f, int style) {
	( (MiqtVirtualQsciLexer*)(self) )->virtualbase_SetFont(f, style);
}

bool QsciLexer_override_virtual_SetPaper(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetPaper = slot;
	return true;
}

void QsciLexer_virtualbase_SetPaper(void* self, QColor* c, int style) {
	( (MiqtVirtualQsciLexer*)(self) )->virtualbase_SetPaper(c, style);
}

bool QsciLexer_override_virtual_ReadProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ReadProperties = slot;
	return true;
}

bool QsciLexer_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix) {
	return ( (MiqtVirtualQsciLexer*)(self) )->virtualbase_ReadProperties(qs, prefix);
}

bool QsciLexer_override_virtual_WriteProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WriteProperties = slot;
	return true;
}

bool QsciLexer_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix) {
	return ( (const MiqtVirtualQsciLexer*)(self) )->virtualbase_WriteProperties(qs, prefix);
}

bool QsciLexer_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QsciLexer_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQsciLexer*)(self) )->virtualbase_Event(event);
}

bool QsciLexer_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QsciLexer_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQsciLexer*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QsciLexer_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QsciLexer_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQsciLexer*)(self) )->virtualbase_TimerEvent(event);
}

bool QsciLexer_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QsciLexer_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQsciLexer*)(self) )->virtualbase_ChildEvent(event);
}

bool QsciLexer_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QsciLexer_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQsciLexer*)(self) )->virtualbase_CustomEvent(event);
}

bool QsciLexer_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QsciLexer_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQsciLexer*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QsciLexer_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciLexer* self_cast = dynamic_cast<MiqtVirtualQsciLexer*>( (QsciLexer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QsciLexer_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQsciLexer*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QsciLexer_Delete(QsciLexer* self) {
	delete self;
}

