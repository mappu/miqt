#include <QContextMenuEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFrame>
#include <QKeyEvent>
#include <QLabel>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMovie>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEvent>
#include <QPicture>
#include <QPixmap>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionFrame>
#include <QWidget>
#include <qlabel.h>
#include "gen_qlabel.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QLabel_LinkActivated(intptr_t, struct miqt_string);
void miqt_exec_callback_QLabel_LinkHovered(intptr_t, struct miqt_string);
QSize* miqt_exec_callback_QLabel_SizeHint(void*, intptr_t);
QSize* miqt_exec_callback_QLabel_MinimumSizeHint(void*, intptr_t);
int miqt_exec_callback_QLabel_HeightForWidth(void*, intptr_t, int);
bool miqt_exec_callback_QLabel_Event(void*, intptr_t, QEvent*);
void miqt_exec_callback_QLabel_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QLabel_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QLabel_ChangeEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QLabel_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QLabel_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QLabel_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QLabel_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QLabel_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QLabel_FocusOutEvent(void*, intptr_t, QFocusEvent*);
bool miqt_exec_callback_QLabel_FocusNextPrevChild(void*, intptr_t, bool);
void miqt_exec_callback_QLabel_InitStyleOption(void*, intptr_t, QStyleOptionFrame*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQLabel final : public QLabel {
public:

	MiqtVirtualQLabel(QWidget* parent): QLabel(parent) {};
	MiqtVirtualQLabel(): QLabel() {};
	MiqtVirtualQLabel(const QString& text): QLabel(text) {};
	MiqtVirtualQLabel(QWidget* parent, Qt::WindowFlags f): QLabel(parent, f) {};
	MiqtVirtualQLabel(const QString& text, QWidget* parent): QLabel(text, parent) {};
	MiqtVirtualQLabel(const QString& text, QWidget* parent, Qt::WindowFlags f): QLabel(text, parent, f) {};

	virtual ~MiqtVirtualQLabel() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QLabel::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QLabel_SizeHint(const_cast<MiqtVirtualQLabel*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QLabel::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QLabel::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QLabel_MinimumSizeHint(const_cast<MiqtVirtualQLabel*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QLabel::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QLabel::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QLabel_HeightForWidth(const_cast<MiqtVirtualQLabel*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QLabel::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QLabel::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QLabel_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QLabel::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* ev) override {
		if (handle__KeyPressEvent == 0) {
			QLabel::keyPressEvent(ev);
			return;
		}
		
		QKeyEvent* sigval1 = ev;

		miqt_exec_callback_QLabel_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* ev) {

		QLabel::keyPressEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__PaintEvent == 0) {
			QLabel::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QLabel_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* param1) {

		QLabel::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QLabel::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QLabel_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QLabel::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* ev) override {
		if (handle__MousePressEvent == 0) {
			QLabel::mousePressEvent(ev);
			return;
		}
		
		QMouseEvent* sigval1 = ev;

		miqt_exec_callback_QLabel_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* ev) {

		QLabel::mousePressEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* ev) override {
		if (handle__MouseMoveEvent == 0) {
			QLabel::mouseMoveEvent(ev);
			return;
		}
		
		QMouseEvent* sigval1 = ev;

		miqt_exec_callback_QLabel_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* ev) {

		QLabel::mouseMoveEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* ev) override {
		if (handle__MouseReleaseEvent == 0) {
			QLabel::mouseReleaseEvent(ev);
			return;
		}
		
		QMouseEvent* sigval1 = ev;

		miqt_exec_callback_QLabel_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* ev) {

		QLabel::mouseReleaseEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* ev) override {
		if (handle__ContextMenuEvent == 0) {
			QLabel::contextMenuEvent(ev);
			return;
		}
		
		QContextMenuEvent* sigval1 = ev;

		miqt_exec_callback_QLabel_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* ev) {

		QLabel::contextMenuEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* ev) override {
		if (handle__FocusInEvent == 0) {
			QLabel::focusInEvent(ev);
			return;
		}
		
		QFocusEvent* sigval1 = ev;

		miqt_exec_callback_QLabel_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* ev) {

		QLabel::focusInEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* ev) override {
		if (handle__FocusOutEvent == 0) {
			QLabel::focusOutEvent(ev);
			return;
		}
		
		QFocusEvent* sigval1 = ev;

		miqt_exec_callback_QLabel_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* ev) {

		QLabel::focusOutEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QLabel::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QLabel_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QLabel::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionFrame* option) const override {
		if (handle__InitStyleOption == 0) {
			QLabel::initStyleOption(option);
			return;
		}
		
		QStyleOptionFrame* sigval1 = option;

		miqt_exec_callback_QLabel_InitStyleOption(const_cast<MiqtVirtualQLabel*>(this), handle__InitStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitStyleOption(QStyleOptionFrame* option) const {

		QLabel::initStyleOption(option);

	}

};

QLabel* QLabel_new(QWidget* parent) {
	return new MiqtVirtualQLabel(parent);
}

QLabel* QLabel_new2() {
	return new MiqtVirtualQLabel();
}

QLabel* QLabel_new3(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQLabel(text_QString);
}

QLabel* QLabel_new4(QWidget* parent, int f) {
	return new MiqtVirtualQLabel(parent, static_cast<Qt::WindowFlags>(f));
}

QLabel* QLabel_new5(struct miqt_string text, QWidget* parent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQLabel(text_QString, parent);
}

QLabel* QLabel_new6(struct miqt_string text, QWidget* parent, int f) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQLabel(text_QString, parent, static_cast<Qt::WindowFlags>(f));
}

void QLabel_virtbase(QLabel* src, QFrame** outptr_QFrame) {
	*outptr_QFrame = static_cast<QFrame*>(src);
}

QMetaObject* QLabel_MetaObject(const QLabel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QLabel_Metacast(QLabel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QLabel_Tr(const char* s) {
	QString _ret = QLabel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLabel_Text(const QLabel* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QPixmap* QLabel_Pixmap(const QLabel* self, int param1) {
	return new QPixmap(self->pixmap(static_cast<Qt::ReturnByValueConstant>(param1)));
}

QPixmap* QLabel_Pixmap2(const QLabel* self) {
	return new QPixmap(self->pixmap());
}

QPicture* QLabel_Picture(const QLabel* self, int param1) {
	return new QPicture(self->picture(static_cast<Qt::ReturnByValueConstant>(param1)));
}

QPicture* QLabel_Picture2(const QLabel* self) {
	return new QPicture(self->picture());
}

QMovie* QLabel_Movie(const QLabel* self) {
	return self->movie();
}

int QLabel_TextFormat(const QLabel* self) {
	Qt::TextFormat _ret = self->textFormat();
	return static_cast<int>(_ret);
}

void QLabel_SetTextFormat(QLabel* self, int textFormat) {
	self->setTextFormat(static_cast<Qt::TextFormat>(textFormat));
}

int QLabel_Alignment(const QLabel* self) {
	Qt::Alignment _ret = self->alignment();
	return static_cast<int>(_ret);
}

void QLabel_SetAlignment(QLabel* self, int alignment) {
	self->setAlignment(static_cast<Qt::Alignment>(alignment));
}

void QLabel_SetWordWrap(QLabel* self, bool on) {
	self->setWordWrap(on);
}

bool QLabel_WordWrap(const QLabel* self) {
	return self->wordWrap();
}

int QLabel_Indent(const QLabel* self) {
	return self->indent();
}

void QLabel_SetIndent(QLabel* self, int indent) {
	self->setIndent(static_cast<int>(indent));
}

int QLabel_Margin(const QLabel* self) {
	return self->margin();
}

void QLabel_SetMargin(QLabel* self, int margin) {
	self->setMargin(static_cast<int>(margin));
}

bool QLabel_HasScaledContents(const QLabel* self) {
	return self->hasScaledContents();
}

void QLabel_SetScaledContents(QLabel* self, bool scaledContents) {
	self->setScaledContents(scaledContents);
}

QSize* QLabel_SizeHint(const QLabel* self) {
	return new QSize(self->sizeHint());
}

QSize* QLabel_MinimumSizeHint(const QLabel* self) {
	return new QSize(self->minimumSizeHint());
}

void QLabel_SetBuddy(QLabel* self, QWidget* buddy) {
	self->setBuddy(buddy);
}

QWidget* QLabel_Buddy(const QLabel* self) {
	return self->buddy();
}

int QLabel_HeightForWidth(const QLabel* self, int param1) {
	return self->heightForWidth(static_cast<int>(param1));
}

bool QLabel_OpenExternalLinks(const QLabel* self) {
	return self->openExternalLinks();
}

void QLabel_SetOpenExternalLinks(QLabel* self, bool open) {
	self->setOpenExternalLinks(open);
}

void QLabel_SetTextInteractionFlags(QLabel* self, int flags) {
	self->setTextInteractionFlags(static_cast<Qt::TextInteractionFlags>(flags));
}

int QLabel_TextInteractionFlags(const QLabel* self) {
	Qt::TextInteractionFlags _ret = self->textInteractionFlags();
	return static_cast<int>(_ret);
}

void QLabel_SetSelection(QLabel* self, int param1, int param2) {
	self->setSelection(static_cast<int>(param1), static_cast<int>(param2));
}

bool QLabel_HasSelectedText(const QLabel* self) {
	return self->hasSelectedText();
}

struct miqt_string QLabel_SelectedText(const QLabel* self) {
	QString _ret = self->selectedText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QLabel_SelectionStart(const QLabel* self) {
	return self->selectionStart();
}

void QLabel_SetText(QLabel* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(text_QString);
}

void QLabel_SetPixmap(QLabel* self, QPixmap* pixmap) {
	self->setPixmap(*pixmap);
}

void QLabel_SetPicture(QLabel* self, QPicture* picture) {
	self->setPicture(*picture);
}

void QLabel_SetMovie(QLabel* self, QMovie* movie) {
	self->setMovie(movie);
}

void QLabel_SetNum(QLabel* self, int num) {
	self->setNum(static_cast<int>(num));
}

void QLabel_SetNumWithNum(QLabel* self, double num) {
	self->setNum(static_cast<double>(num));
}

void QLabel_Clear(QLabel* self) {
	self->clear();
}

void QLabel_LinkActivated(QLabel* self, struct miqt_string link) {
	QString link_QString = QString::fromUtf8(link.data, link.len);
	self->linkActivated(link_QString);
}

void QLabel_connect_LinkActivated(QLabel* self, intptr_t slot) {
	MiqtVirtualQLabel::connect(self, static_cast<void (QLabel::*)(const QString&)>(&QLabel::linkActivated), self, [=](const QString& link) {
		const QString link_ret = link;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray link_b = link_ret.toUtf8();
		struct miqt_string link_ms;
		link_ms.len = link_b.length();
		link_ms.data = static_cast<char*>(malloc(link_ms.len));
		memcpy(link_ms.data, link_b.data(), link_ms.len);
		struct miqt_string sigval1 = link_ms;
		miqt_exec_callback_QLabel_LinkActivated(slot, sigval1);
	});
}

void QLabel_LinkHovered(QLabel* self, struct miqt_string link) {
	QString link_QString = QString::fromUtf8(link.data, link.len);
	self->linkHovered(link_QString);
}

void QLabel_connect_LinkHovered(QLabel* self, intptr_t slot) {
	MiqtVirtualQLabel::connect(self, static_cast<void (QLabel::*)(const QString&)>(&QLabel::linkHovered), self, [=](const QString& link) {
		const QString link_ret = link;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray link_b = link_ret.toUtf8();
		struct miqt_string link_ms;
		link_ms.len = link_b.length();
		link_ms.data = static_cast<char*>(malloc(link_ms.len));
		memcpy(link_ms.data, link_b.data(), link_ms.len);
		struct miqt_string sigval1 = link_ms;
		miqt_exec_callback_QLabel_LinkHovered(slot, sigval1);
	});
}

struct miqt_string QLabel_Tr2(const char* s, const char* c) {
	QString _ret = QLabel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLabel_Tr3(const char* s, const char* c, int n) {
	QString _ret = QLabel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QLabel_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QLabel_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQLabel*)(self) )->virtualbase_SizeHint();
}

bool QLabel_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QLabel_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQLabel*)(self) )->virtualbase_MinimumSizeHint();
}

bool QLabel_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QLabel_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQLabel*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QLabel_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QLabel_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQLabel*)(self) )->virtualbase_Event(e);
}

bool QLabel_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QLabel_virtualbase_KeyPressEvent(void* self, QKeyEvent* ev) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_KeyPressEvent(ev);
}

bool QLabel_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QLabel_virtualbase_PaintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_PaintEvent(param1);
}

bool QLabel_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QLabel_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_ChangeEvent(param1);
}

bool QLabel_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QLabel_virtualbase_MousePressEvent(void* self, QMouseEvent* ev) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_MousePressEvent(ev);
}

bool QLabel_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QLabel_virtualbase_MouseMoveEvent(void* self, QMouseEvent* ev) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_MouseMoveEvent(ev);
}

bool QLabel_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QLabel_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* ev) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_MouseReleaseEvent(ev);
}

bool QLabel_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QLabel_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* ev) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_ContextMenuEvent(ev);
}

bool QLabel_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QLabel_virtualbase_FocusInEvent(void* self, QFocusEvent* ev) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_FocusInEvent(ev);
}

bool QLabel_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QLabel_virtualbase_FocusOutEvent(void* self, QFocusEvent* ev) {
	( (MiqtVirtualQLabel*)(self) )->virtualbase_FocusOutEvent(ev);
}

bool QLabel_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QLabel_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQLabel*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QLabel_override_virtual_InitStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQLabel* self_cast = dynamic_cast<MiqtVirtualQLabel*>( (QLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitStyleOption = slot;
	return true;
}

void QLabel_virtualbase_InitStyleOption(const void* self, QStyleOptionFrame* option) {
	( (const MiqtVirtualQLabel*)(self) )->virtualbase_InitStyleOption(option);
}

void QLabel_Delete(QLabel* self) {
	delete self;
}

