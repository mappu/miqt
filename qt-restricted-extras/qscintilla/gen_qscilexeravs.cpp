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
#include <qscilexeravs.h>
#include "gen_qscilexeravs.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QsciLexerAVS_SetFoldComments(QsciLexerAVS*, intptr_t, bool);
void miqt_exec_callback_QsciLexerAVS_SetFoldCompact(QsciLexerAVS*, intptr_t, bool);
const char* miqt_exec_callback_QsciLexerAVS_Language(const QsciLexerAVS*, intptr_t);
const char* miqt_exec_callback_QsciLexerAVS_Lexer(const QsciLexerAVS*, intptr_t);
int miqt_exec_callback_QsciLexerAVS_LexerId(const QsciLexerAVS*, intptr_t);
const char* miqt_exec_callback_QsciLexerAVS_AutoCompletionFillups(const QsciLexerAVS*, intptr_t);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QsciLexerAVS_AutoCompletionWordSeparators(const QsciLexerAVS*, intptr_t);
const char* miqt_exec_callback_QsciLexerAVS_BlockEnd(const QsciLexerAVS*, intptr_t, int*);
int miqt_exec_callback_QsciLexerAVS_BlockLookback(const QsciLexerAVS*, intptr_t);
const char* miqt_exec_callback_QsciLexerAVS_BlockStart(const QsciLexerAVS*, intptr_t, int*);
const char* miqt_exec_callback_QsciLexerAVS_BlockStartKeyword(const QsciLexerAVS*, intptr_t, int*);
int miqt_exec_callback_QsciLexerAVS_BraceStyle(const QsciLexerAVS*, intptr_t);
bool miqt_exec_callback_QsciLexerAVS_CaseSensitive(const QsciLexerAVS*, intptr_t);
QColor* miqt_exec_callback_QsciLexerAVS_Color(const QsciLexerAVS*, intptr_t, int);
bool miqt_exec_callback_QsciLexerAVS_EolFill(const QsciLexerAVS*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerAVS_Font(const QsciLexerAVS*, intptr_t, int);
int miqt_exec_callback_QsciLexerAVS_IndentationGuideView(const QsciLexerAVS*, intptr_t);
const char* miqt_exec_callback_QsciLexerAVS_Keywords(const QsciLexerAVS*, intptr_t, int);
int miqt_exec_callback_QsciLexerAVS_DefaultStyle(const QsciLexerAVS*, intptr_t);
struct miqt_string miqt_exec_callback_QsciLexerAVS_Description(const QsciLexerAVS*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerAVS_Paper(const QsciLexerAVS*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerAVS_DefaultColorWithStyle(const QsciLexerAVS*, intptr_t, int);
bool miqt_exec_callback_QsciLexerAVS_DefaultEolFill(const QsciLexerAVS*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerAVS_DefaultFontWithStyle(const QsciLexerAVS*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerAVS_DefaultPaperWithStyle(const QsciLexerAVS*, intptr_t, int);
void miqt_exec_callback_QsciLexerAVS_SetEditor(QsciLexerAVS*, intptr_t, QsciScintilla*);
void miqt_exec_callback_QsciLexerAVS_RefreshProperties(QsciLexerAVS*, intptr_t);
int miqt_exec_callback_QsciLexerAVS_StyleBitsNeeded(const QsciLexerAVS*, intptr_t);
const char* miqt_exec_callback_QsciLexerAVS_WordCharacters(const QsciLexerAVS*, intptr_t);
void miqt_exec_callback_QsciLexerAVS_SetAutoIndentStyle(QsciLexerAVS*, intptr_t, int);
void miqt_exec_callback_QsciLexerAVS_SetColor(QsciLexerAVS*, intptr_t, QColor*, int);
void miqt_exec_callback_QsciLexerAVS_SetEolFill(QsciLexerAVS*, intptr_t, bool, int);
void miqt_exec_callback_QsciLexerAVS_SetFont(QsciLexerAVS*, intptr_t, QFont*, int);
void miqt_exec_callback_QsciLexerAVS_SetPaper(QsciLexerAVS*, intptr_t, QColor*, int);
bool miqt_exec_callback_QsciLexerAVS_ReadProperties(QsciLexerAVS*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerAVS_WriteProperties(const QsciLexerAVS*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerAVS_Event(QsciLexerAVS*, intptr_t, QEvent*);
bool miqt_exec_callback_QsciLexerAVS_EventFilter(QsciLexerAVS*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QsciLexerAVS_TimerEvent(QsciLexerAVS*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QsciLexerAVS_ChildEvent(QsciLexerAVS*, intptr_t, QChildEvent*);
void miqt_exec_callback_QsciLexerAVS_CustomEvent(QsciLexerAVS*, intptr_t, QEvent*);
void miqt_exec_callback_QsciLexerAVS_ConnectNotify(QsciLexerAVS*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QsciLexerAVS_DisconnectNotify(QsciLexerAVS*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciLexerAVS final : public QsciLexerAVS {
public:

	MiqtVirtualQsciLexerAVS(): QsciLexerAVS() {};
	MiqtVirtualQsciLexerAVS(QObject* parent): QsciLexerAVS(parent) {};

	virtual ~MiqtVirtualQsciLexerAVS() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldComments = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldComments(bool fold) override {
		if (handle__SetFoldComments == 0) {
			QsciLexerAVS::setFoldComments(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerAVS_SetFoldComments(this, handle__SetFoldComments, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldComments(bool fold) {

		QsciLexerAVS::setFoldComments(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFoldCompact = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFoldCompact(bool fold) override {
		if (handle__SetFoldCompact == 0) {
			QsciLexerAVS::setFoldCompact(fold);
			return;
		}
		
		bool sigval1 = fold;

		miqt_exec_callback_QsciLexerAVS_SetFoldCompact(this, handle__SetFoldCompact, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFoldCompact(bool fold) {

		QsciLexerAVS::setFoldCompact(fold);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Language = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* language() const override {
		if (handle__Language == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerAVS_Language(this, handle__Language);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Lexer = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* lexer() const override {
		if (handle__Lexer == 0) {
			return QsciLexerAVS::lexer();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerAVS_Lexer(this, handle__Lexer);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_Lexer() const {

		return (const char*) QsciLexerAVS::lexer();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LexerId = 0;

	// Subclass to allow providing a Go implementation
	virtual int lexerId() const override {
		if (handle__LexerId == 0) {
			return QsciLexerAVS::lexerId();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerAVS_LexerId(this, handle__LexerId);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_LexerId() const {

		return QsciLexerAVS::lexerId();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AutoCompletionFillups = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* autoCompletionFillups() const override {
		if (handle__AutoCompletionFillups == 0) {
			return QsciLexerAVS::autoCompletionFillups();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerAVS_AutoCompletionFillups(this, handle__AutoCompletionFillups);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_AutoCompletionFillups() const {

		return (const char*) QsciLexerAVS::autoCompletionFillups();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AutoCompletionWordSeparators = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList autoCompletionWordSeparators() const override {
		if (handle__AutoCompletionWordSeparators == 0) {
			return QsciLexerAVS::autoCompletionWordSeparators();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QsciLexerAVS_AutoCompletionWordSeparators(this, handle__AutoCompletionWordSeparators);
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

		QStringList _ret = QsciLexerAVS::autoCompletionWordSeparators();
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
			return QsciLexerAVS::blockEnd(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerAVS_BlockEnd(this, handle__BlockEnd, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockEnd(int* style) const {

		return (const char*) QsciLexerAVS::blockEnd(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockLookback = 0;

	// Subclass to allow providing a Go implementation
	virtual int blockLookback() const override {
		if (handle__BlockLookback == 0) {
			return QsciLexerAVS::blockLookback();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerAVS_BlockLookback(this, handle__BlockLookback);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_BlockLookback() const {

		return QsciLexerAVS::blockLookback();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockStart = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStart(int* style) const override {
		if (handle__BlockStart == 0) {
			return QsciLexerAVS::blockStart(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerAVS_BlockStart(this, handle__BlockStart, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockStart(int* style) const {

		return (const char*) QsciLexerAVS::blockStart(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BlockStartKeyword = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStartKeyword(int* style) const override {
		if (handle__BlockStartKeyword == 0) {
			return QsciLexerAVS::blockStartKeyword(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerAVS_BlockStartKeyword(this, handle__BlockStartKeyword, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_BlockStartKeyword(int* style) const {

		return (const char*) QsciLexerAVS::blockStartKeyword(static_cast<int*>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BraceStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int braceStyle() const override {
		if (handle__BraceStyle == 0) {
			return QsciLexerAVS::braceStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerAVS_BraceStyle(this, handle__BraceStyle);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_BraceStyle() const {

		return QsciLexerAVS::braceStyle();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CaseSensitive = 0;

	// Subclass to allow providing a Go implementation
	virtual bool caseSensitive() const override {
		if (handle__CaseSensitive == 0) {
			return QsciLexerAVS::caseSensitive();
		}
		

		bool callback_return_value = miqt_exec_callback_QsciLexerAVS_CaseSensitive(this, handle__CaseSensitive);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CaseSensitive() const {

		return QsciLexerAVS::caseSensitive();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Color = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor color(int style) const override {
		if (handle__Color == 0) {
			return QsciLexerAVS::color(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerAVS_Color(this, handle__Color, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_Color(int style) const {

		return new QColor(QsciLexerAVS::color(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eolFill(int style) const override {
		if (handle__EolFill == 0) {
			return QsciLexerAVS::eolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexerAVS_EolFill(this, handle__EolFill, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EolFill(int style) const {

		return QsciLexerAVS::eolFill(static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Font = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont font(int style) const override {
		if (handle__Font == 0) {
			return QsciLexerAVS::font(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexerAVS_Font(this, handle__Font, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QFont* virtualbase_Font(int style) const {

		return new QFont(QsciLexerAVS::font(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IndentationGuideView = 0;

	// Subclass to allow providing a Go implementation
	virtual int indentationGuideView() const override {
		if (handle__IndentationGuideView == 0) {
			return QsciLexerAVS::indentationGuideView();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerAVS_IndentationGuideView(this, handle__IndentationGuideView);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_IndentationGuideView() const {

		return QsciLexerAVS::indentationGuideView();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Keywords = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* keywords(int set) const override {
		if (handle__Keywords == 0) {
			return QsciLexerAVS::keywords(set);
		}
		
		int sigval1 = set;

		const char* callback_return_value = miqt_exec_callback_QsciLexerAVS_Keywords(this, handle__Keywords, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_Keywords(int set) const {

		return (const char*) QsciLexerAVS::keywords(static_cast<int>(set));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int defaultStyle() const override {
		if (handle__DefaultStyle == 0) {
			return QsciLexerAVS::defaultStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerAVS_DefaultStyle(this, handle__DefaultStyle);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DefaultStyle() const {

		return QsciLexerAVS::defaultStyle();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Description = 0;

	// Subclass to allow providing a Go implementation
	virtual QString description(int style) const override {
		if (handle__Description == 0) {
			return QString(); // Pure virtual, there is no base we can call
		}
		
		int sigval1 = style;

		struct miqt_string callback_return_value = miqt_exec_callback_QsciLexerAVS_Description(this, handle__Description, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paper = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor paper(int style) const override {
		if (handle__Paper == 0) {
			return QsciLexerAVS::paper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerAVS_Paper(this, handle__Paper, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_Paper(int style) const {

		return new QColor(QsciLexerAVS::paper(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultColorWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultColor(int style) const override {
		if (handle__DefaultColorWithStyle == 0) {
			return QsciLexerAVS::defaultColor(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerAVS_DefaultColorWithStyle(this, handle__DefaultColorWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_DefaultColorWithStyle(int style) const {

		return new QColor(QsciLexerAVS::defaultColor(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool defaultEolFill(int style) const override {
		if (handle__DefaultEolFill == 0) {
			return QsciLexerAVS::defaultEolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexerAVS_DefaultEolFill(this, handle__DefaultEolFill, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_DefaultEolFill(int style) const {

		return QsciLexerAVS::defaultEolFill(static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultFontWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont defaultFont(int style) const override {
		if (handle__DefaultFontWithStyle == 0) {
			return QsciLexerAVS::defaultFont(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexerAVS_DefaultFontWithStyle(this, handle__DefaultFontWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QFont* virtualbase_DefaultFontWithStyle(int style) const {

		return new QFont(QsciLexerAVS::defaultFont(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DefaultPaperWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultPaper(int style) const override {
		if (handle__DefaultPaperWithStyle == 0) {
			return QsciLexerAVS::defaultPaper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerAVS_DefaultPaperWithStyle(this, handle__DefaultPaperWithStyle, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QColor* virtualbase_DefaultPaperWithStyle(int style) const {

		return new QColor(QsciLexerAVS::defaultPaper(static_cast<int>(style)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEditor(QsciScintilla* editor) override {
		if (handle__SetEditor == 0) {
			QsciLexerAVS::setEditor(editor);
			return;
		}
		
		QsciScintilla* sigval1 = editor;

		miqt_exec_callback_QsciLexerAVS_SetEditor(this, handle__SetEditor, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetEditor(QsciScintilla* editor) {

		QsciLexerAVS::setEditor(editor);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RefreshProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual void refreshProperties() override {
		if (handle__RefreshProperties == 0) {
			QsciLexerAVS::refreshProperties();
			return;
		}
		

		miqt_exec_callback_QsciLexerAVS_RefreshProperties(this, handle__RefreshProperties);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_RefreshProperties() {

		QsciLexerAVS::refreshProperties();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__StyleBitsNeeded = 0;

	// Subclass to allow providing a Go implementation
	virtual int styleBitsNeeded() const override {
		if (handle__StyleBitsNeeded == 0) {
			return QsciLexerAVS::styleBitsNeeded();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerAVS_StyleBitsNeeded(this, handle__StyleBitsNeeded);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_StyleBitsNeeded() const {

		return QsciLexerAVS::styleBitsNeeded();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WordCharacters = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* wordCharacters() const override {
		if (handle__WordCharacters == 0) {
			return QsciLexerAVS::wordCharacters();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerAVS_WordCharacters(this, handle__WordCharacters);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	const char* virtualbase_WordCharacters() const {

		return (const char*) QsciLexerAVS::wordCharacters();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetAutoIndentStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAutoIndentStyle(int autoindentstyle) override {
		if (handle__SetAutoIndentStyle == 0) {
			QsciLexerAVS::setAutoIndentStyle(autoindentstyle);
			return;
		}
		
		int sigval1 = autoindentstyle;

		miqt_exec_callback_QsciLexerAVS_SetAutoIndentStyle(this, handle__SetAutoIndentStyle, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetAutoIndentStyle(int autoindentstyle) {

		QsciLexerAVS::setAutoIndentStyle(static_cast<int>(autoindentstyle));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setColor(const QColor& c, int style) override {
		if (handle__SetColor == 0) {
			QsciLexerAVS::setColor(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerAVS_SetColor(this, handle__SetColor, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetColor(QColor* c, int style) {

		QsciLexerAVS::setColor(*c, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEolFill(bool eoffill, int style) override {
		if (handle__SetEolFill == 0) {
			QsciLexerAVS::setEolFill(eoffill, style);
			return;
		}
		
		bool sigval1 = eoffill;
		int sigval2 = style;

		miqt_exec_callback_QsciLexerAVS_SetEolFill(this, handle__SetEolFill, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetEolFill(bool eoffill, int style) {

		QsciLexerAVS::setEolFill(eoffill, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetFont = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFont(const QFont& f, int style) override {
		if (handle__SetFont == 0) {
			QsciLexerAVS::setFont(f, style);
			return;
		}
		
		const QFont& f_ret = f;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&f_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerAVS_SetFont(this, handle__SetFont, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetFont(QFont* f, int style) {

		QsciLexerAVS::setFont(*f, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetPaper = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPaper(const QColor& c, int style) override {
		if (handle__SetPaper == 0) {
			QsciLexerAVS::setPaper(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerAVS_SetPaper(this, handle__SetPaper, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetPaper(QColor* c, int style) {

		QsciLexerAVS::setPaper(*c, static_cast<int>(style));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ReadProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool readProperties(QSettings& qs, const QString& prefix) override {
		if (handle__ReadProperties == 0) {
			return QsciLexerAVS::readProperties(qs, prefix);
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

		bool callback_return_value = miqt_exec_callback_QsciLexerAVS_ReadProperties(this, handle__ReadProperties, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_ReadProperties(QSettings* qs, struct miqt_string prefix) {
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

		return QsciLexerAVS::readProperties(*qs, prefix_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WriteProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
		if (handle__WriteProperties == 0) {
			return QsciLexerAVS::writeProperties(qs, prefix);
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

		bool callback_return_value = miqt_exec_callback_QsciLexerAVS_WriteProperties(this, handle__WriteProperties, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WriteProperties(QSettings* qs, struct miqt_string prefix) const {
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

		return QsciLexerAVS::writeProperties(*qs, prefix_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QsciLexerAVS::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QsciLexerAVS_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QsciLexerAVS::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QsciLexerAVS::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QsciLexerAVS_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QsciLexerAVS::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QsciLexerAVS::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QsciLexerAVS_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QsciLexerAVS::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QsciLexerAVS::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QsciLexerAVS_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QsciLexerAVS::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QsciLexerAVS::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QsciLexerAVS_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QsciLexerAVS::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QsciLexerAVS::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciLexerAVS_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QsciLexerAVS::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QsciLexerAVS::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciLexerAVS_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QsciLexerAVS::disconnectNotify(*signal);

	}

};

QsciLexerAVS* QsciLexerAVS_new() {
	return new MiqtVirtualQsciLexerAVS();
}

QsciLexerAVS* QsciLexerAVS_new2(QObject* parent) {
	return new MiqtVirtualQsciLexerAVS(parent);
}

void QsciLexerAVS_virtbase(QsciLexerAVS* src, QsciLexer** outptr_QsciLexer) {
	*outptr_QsciLexer = static_cast<QsciLexer*>(src);
}

QMetaObject* QsciLexerAVS_MetaObject(const QsciLexerAVS* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerAVS_Metacast(QsciLexerAVS* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerAVS_Tr(const char* s) {
	QString _ret = QsciLexerAVS::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerAVS_TrUtf8(const char* s) {
	QString _ret = QsciLexerAVS::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerAVS_Language(const QsciLexerAVS* self) {
	return (const char*) self->language();
}

const char* QsciLexerAVS_Lexer(const QsciLexerAVS* self) {
	return (const char*) self->lexer();
}

int QsciLexerAVS_BraceStyle(const QsciLexerAVS* self) {
	return self->braceStyle();
}

const char* QsciLexerAVS_WordCharacters(const QsciLexerAVS* self) {
	return (const char*) self->wordCharacters();
}

QColor* QsciLexerAVS_DefaultColor(const QsciLexerAVS* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerAVS_DefaultFont(const QsciLexerAVS* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

const char* QsciLexerAVS_Keywords(const QsciLexerAVS* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerAVS_Description(const QsciLexerAVS* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerAVS_RefreshProperties(QsciLexerAVS* self) {
	self->refreshProperties();
}

bool QsciLexerAVS_FoldComments(const QsciLexerAVS* self) {
	return self->foldComments();
}

bool QsciLexerAVS_FoldCompact(const QsciLexerAVS* self) {
	return self->foldCompact();
}

void QsciLexerAVS_SetFoldComments(QsciLexerAVS* self, bool fold) {
	self->setFoldComments(fold);
}

void QsciLexerAVS_SetFoldCompact(QsciLexerAVS* self, bool fold) {
	self->setFoldCompact(fold);
}

struct miqt_string QsciLexerAVS_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerAVS::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerAVS_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerAVS::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerAVS_TrUtf82(const char* s, const char* c) {
	QString _ret = QsciLexerAVS::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerAVS_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QsciLexerAVS::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QsciLexerAVS_override_virtual_SetFoldComments(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetFoldComments = slot;
	return true;
}

void QsciLexerAVS_virtualbase_SetFoldComments(void* self, bool fold) {
	( (MiqtVirtualQsciLexerAVS*)(self) )->virtualbase_SetFoldComments(fold);
}

bool QsciLexerAVS_override_virtual_SetFoldCompact(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetFoldCompact = slot;
	return true;
}

void QsciLexerAVS_virtualbase_SetFoldCompact(void* self, bool fold) {
	( (MiqtVirtualQsciLexerAVS*)(self) )->virtualbase_SetFoldCompact(fold);
}

bool QsciLexerAVS_override_virtual_Language(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Language = slot;
	return true;
}

bool QsciLexerAVS_override_virtual_Lexer(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Lexer = slot;
	return true;
}

const char* QsciLexerAVS_virtualbase_Lexer(const void* self) {
	return ( (const MiqtVirtualQsciLexerAVS*)(self) )->virtualbase_Lexer();
}

bool QsciLexerAVS_override_virtual_LexerId(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LexerId = slot;
	return true;
}

int QsciLexerAVS_virtualbase_LexerId(const void* self) {
	return ( (const MiqtVirtualQsciLexerAVS*)(self) )->virtualbase_LexerId();
}

bool QsciLexerAVS_override_virtual_AutoCompletionFillups(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__AutoCompletionFillups = slot;
	return true;
}

const char* QsciLexerAVS_virtualbase_AutoCompletionFillups(const void* self) {
	return ( (const MiqtVirtualQsciLexerAVS*)(self) )->virtualbase_AutoCompletionFillups();
}

bool QsciLexerAVS_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__AutoCompletionWordSeparators = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QsciLexerAVS_virtualbase_AutoCompletionWordSeparators(const void* self) {
	return ( (const MiqtVirtualQsciLexerAVS*)(self) )->virtualbase_AutoCompletionWordSeparators();
}

bool QsciLexerAVS_override_virtual_BlockEnd(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BlockEnd = slot;
	return true;
}

const char* QsciLexerAVS_virtualbase_BlockEnd(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerAVS*)(self) )->virtualbase_BlockEnd(style);
}

bool QsciLexerAVS_override_virtual_BlockLookback(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BlockLookback = slot;
	return true;
}

int QsciLexerAVS_virtualbase_BlockLookback(const void* self) {
	return ( (const MiqtVirtualQsciLexerAVS*)(self) )->virtualbase_BlockLookback();
}

bool QsciLexerAVS_override_virtual_BlockStart(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BlockStart = slot;
	return true;
}

const char* QsciLexerAVS_virtualbase_BlockStart(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerAVS*)(self) )->virtualbase_BlockStart(style);
}

bool QsciLexerAVS_override_virtual_BlockStartKeyword(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BlockStartKeyword = slot;
	return true;
}

const char* QsciLexerAVS_virtualbase_BlockStartKeyword(const void* self, int* style) {
	return ( (const MiqtVirtualQsciLexerAVS*)(self) )->virtualbase_BlockStartKeyword(style);
}

bool QsciLexerAVS_override_virtual_BraceStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BraceStyle = slot;
	return true;
}

int QsciLexerAVS_virtualbase_BraceStyle(const void* self) {
	return ( (const MiqtVirtualQsciLexerAVS*)(self) )->virtualbase_BraceStyle();
}

bool QsciLexerAVS_override_virtual_CaseSensitive(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CaseSensitive = slot;
	return true;
}

bool QsciLexerAVS_virtualbase_CaseSensitive(const void* self) {
	return ( (const MiqtVirtualQsciLexerAVS*)(self) )->virtualbase_CaseSensitive();
}

bool QsciLexerAVS_override_virtual_Color(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Color = slot;
	return true;
}

QColor* QsciLexerAVS_virtualbase_Color(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerAVS*)(self) )->virtualbase_Color(style);
}

bool QsciLexerAVS_override_virtual_EolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EolFill = slot;
	return true;
}

bool QsciLexerAVS_virtualbase_EolFill(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerAVS*)(self) )->virtualbase_EolFill(style);
}

bool QsciLexerAVS_override_virtual_Font(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Font = slot;
	return true;
}

QFont* QsciLexerAVS_virtualbase_Font(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerAVS*)(self) )->virtualbase_Font(style);
}

bool QsciLexerAVS_override_virtual_IndentationGuideView(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IndentationGuideView = slot;
	return true;
}

int QsciLexerAVS_virtualbase_IndentationGuideView(const void* self) {
	return ( (const MiqtVirtualQsciLexerAVS*)(self) )->virtualbase_IndentationGuideView();
}

bool QsciLexerAVS_override_virtual_Keywords(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Keywords = slot;
	return true;
}

const char* QsciLexerAVS_virtualbase_Keywords(const void* self, int set) {
	return ( (const MiqtVirtualQsciLexerAVS*)(self) )->virtualbase_Keywords(set);
}

bool QsciLexerAVS_override_virtual_DefaultStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DefaultStyle = slot;
	return true;
}

int QsciLexerAVS_virtualbase_DefaultStyle(const void* self) {
	return ( (const MiqtVirtualQsciLexerAVS*)(self) )->virtualbase_DefaultStyle();
}

bool QsciLexerAVS_override_virtual_Description(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Description = slot;
	return true;
}

bool QsciLexerAVS_override_virtual_Paper(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Paper = slot;
	return true;
}

QColor* QsciLexerAVS_virtualbase_Paper(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerAVS*)(self) )->virtualbase_Paper(style);
}

bool QsciLexerAVS_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DefaultColorWithStyle = slot;
	return true;
}

QColor* QsciLexerAVS_virtualbase_DefaultColorWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerAVS*)(self) )->virtualbase_DefaultColorWithStyle(style);
}

bool QsciLexerAVS_override_virtual_DefaultEolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DefaultEolFill = slot;
	return true;
}

bool QsciLexerAVS_virtualbase_DefaultEolFill(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerAVS*)(self) )->virtualbase_DefaultEolFill(style);
}

bool QsciLexerAVS_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DefaultFontWithStyle = slot;
	return true;
}

QFont* QsciLexerAVS_virtualbase_DefaultFontWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerAVS*)(self) )->virtualbase_DefaultFontWithStyle(style);
}

bool QsciLexerAVS_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DefaultPaperWithStyle = slot;
	return true;
}

QColor* QsciLexerAVS_virtualbase_DefaultPaperWithStyle(const void* self, int style) {
	return ( (const MiqtVirtualQsciLexerAVS*)(self) )->virtualbase_DefaultPaperWithStyle(style);
}

bool QsciLexerAVS_override_virtual_SetEditor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetEditor = slot;
	return true;
}

void QsciLexerAVS_virtualbase_SetEditor(void* self, QsciScintilla* editor) {
	( (MiqtVirtualQsciLexerAVS*)(self) )->virtualbase_SetEditor(editor);
}

bool QsciLexerAVS_override_virtual_RefreshProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RefreshProperties = slot;
	return true;
}

void QsciLexerAVS_virtualbase_RefreshProperties(void* self) {
	( (MiqtVirtualQsciLexerAVS*)(self) )->virtualbase_RefreshProperties();
}

bool QsciLexerAVS_override_virtual_StyleBitsNeeded(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__StyleBitsNeeded = slot;
	return true;
}

int QsciLexerAVS_virtualbase_StyleBitsNeeded(const void* self) {
	return ( (const MiqtVirtualQsciLexerAVS*)(self) )->virtualbase_StyleBitsNeeded();
}

bool QsciLexerAVS_override_virtual_WordCharacters(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WordCharacters = slot;
	return true;
}

const char* QsciLexerAVS_virtualbase_WordCharacters(const void* self) {
	return ( (const MiqtVirtualQsciLexerAVS*)(self) )->virtualbase_WordCharacters();
}

bool QsciLexerAVS_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetAutoIndentStyle = slot;
	return true;
}

void QsciLexerAVS_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle) {
	( (MiqtVirtualQsciLexerAVS*)(self) )->virtualbase_SetAutoIndentStyle(autoindentstyle);
}

bool QsciLexerAVS_override_virtual_SetColor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetColor = slot;
	return true;
}

void QsciLexerAVS_virtualbase_SetColor(void* self, QColor* c, int style) {
	( (MiqtVirtualQsciLexerAVS*)(self) )->virtualbase_SetColor(c, style);
}

bool QsciLexerAVS_override_virtual_SetEolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetEolFill = slot;
	return true;
}

void QsciLexerAVS_virtualbase_SetEolFill(void* self, bool eoffill, int style) {
	( (MiqtVirtualQsciLexerAVS*)(self) )->virtualbase_SetEolFill(eoffill, style);
}

bool QsciLexerAVS_override_virtual_SetFont(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetFont = slot;
	return true;
}

void QsciLexerAVS_virtualbase_SetFont(void* self, QFont* f, int style) {
	( (MiqtVirtualQsciLexerAVS*)(self) )->virtualbase_SetFont(f, style);
}

bool QsciLexerAVS_override_virtual_SetPaper(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetPaper = slot;
	return true;
}

void QsciLexerAVS_virtualbase_SetPaper(void* self, QColor* c, int style) {
	( (MiqtVirtualQsciLexerAVS*)(self) )->virtualbase_SetPaper(c, style);
}

bool QsciLexerAVS_override_virtual_ReadProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ReadProperties = slot;
	return true;
}

bool QsciLexerAVS_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix) {
	return ( (MiqtVirtualQsciLexerAVS*)(self) )->virtualbase_ReadProperties(qs, prefix);
}

bool QsciLexerAVS_override_virtual_WriteProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WriteProperties = slot;
	return true;
}

bool QsciLexerAVS_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix) {
	return ( (const MiqtVirtualQsciLexerAVS*)(self) )->virtualbase_WriteProperties(qs, prefix);
}

bool QsciLexerAVS_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QsciLexerAVS_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQsciLexerAVS*)(self) )->virtualbase_Event(event);
}

bool QsciLexerAVS_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QsciLexerAVS_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQsciLexerAVS*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QsciLexerAVS_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QsciLexerAVS_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQsciLexerAVS*)(self) )->virtualbase_TimerEvent(event);
}

bool QsciLexerAVS_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QsciLexerAVS_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQsciLexerAVS*)(self) )->virtualbase_ChildEvent(event);
}

bool QsciLexerAVS_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QsciLexerAVS_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQsciLexerAVS*)(self) )->virtualbase_CustomEvent(event);
}

bool QsciLexerAVS_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QsciLexerAVS_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQsciLexerAVS*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QsciLexerAVS_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QsciLexerAVS_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQsciLexerAVS*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QsciLexerAVS_Delete(QsciLexerAVS* self) {
	delete self;
}

