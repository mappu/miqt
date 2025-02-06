#include <QByteArray>
#include <QEvent>
#include <QIcon>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QNetworkRequest>
#include <QObject>
#include <QPainter>
#include <QPixmap>
#include <QPoint>
#include <QPrinter>
#include <QRect>
#include <QRegion>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QVariant>
#include <QWebElement>
#include <QWebElementCollection>
#include <QWebFrame>
#include <QWebHitTestResult>
#include <QWebPage>
#include <QWebSecurityOrigin>
#include <qwebframe.h>
#include "gen_qwebframe.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QWebFrame_javaScriptWindowObjectCleared(intptr_t);
void miqt_exec_callback_QWebFrame_provisionalLoad(intptr_t);
void miqt_exec_callback_QWebFrame_titleChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QWebFrame_urlChanged(intptr_t, QUrl*);
void miqt_exec_callback_QWebFrame_initialLayoutCompleted(intptr_t);
void miqt_exec_callback_QWebFrame_iconChanged(intptr_t);
void miqt_exec_callback_QWebFrame_contentsSizeChanged(intptr_t, QSize*);
void miqt_exec_callback_QWebFrame_loadStarted(intptr_t);
void miqt_exec_callback_QWebFrame_loadFinished(intptr_t, bool);
void miqt_exec_callback_QWebFrame_pageChanged(intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

QWebHitTestResult* QWebHitTestResult_new() {
	return new QWebHitTestResult();
}

QWebHitTestResult* QWebHitTestResult_new2(QWebHitTestResult* other) {
	return new QWebHitTestResult(*other);
}

void QWebHitTestResult_operatorAssign(QWebHitTestResult* self, QWebHitTestResult* other) {
	self->operator=(*other);
}

bool QWebHitTestResult_isNull(const QWebHitTestResult* self) {
	return self->isNull();
}

QPoint* QWebHitTestResult_pos(const QWebHitTestResult* self) {
	return new QPoint(self->pos());
}

QRect* QWebHitTestResult_boundingRect(const QWebHitTestResult* self) {
	return new QRect(self->boundingRect());
}

QWebElement* QWebHitTestResult_enclosingBlockElement(const QWebHitTestResult* self) {
	return new QWebElement(self->enclosingBlockElement());
}

struct miqt_string QWebHitTestResult_title(const QWebHitTestResult* self) {
	QString _ret = self->title();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebHitTestResult_linkText(const QWebHitTestResult* self) {
	QString _ret = self->linkText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QUrl* QWebHitTestResult_linkUrl(const QWebHitTestResult* self) {
	return new QUrl(self->linkUrl());
}

QUrl* QWebHitTestResult_linkTitle(const QWebHitTestResult* self) {
	return new QUrl(self->linkTitle());
}

struct miqt_string QWebHitTestResult_linkTitleString(const QWebHitTestResult* self) {
	QString _ret = self->linkTitleString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QWebFrame* QWebHitTestResult_linkTargetFrame(const QWebHitTestResult* self) {
	return self->linkTargetFrame();
}

QWebElement* QWebHitTestResult_linkElement(const QWebHitTestResult* self) {
	return new QWebElement(self->linkElement());
}

struct miqt_string QWebHitTestResult_alternateText(const QWebHitTestResult* self) {
	QString _ret = self->alternateText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QUrl* QWebHitTestResult_imageUrl(const QWebHitTestResult* self) {
	return new QUrl(self->imageUrl());
}

QPixmap* QWebHitTestResult_pixmap(const QWebHitTestResult* self) {
	return new QPixmap(self->pixmap());
}

QUrl* QWebHitTestResult_mediaUrl(const QWebHitTestResult* self) {
	return new QUrl(self->mediaUrl());
}

bool QWebHitTestResult_isContentEditable(const QWebHitTestResult* self) {
	return self->isContentEditable();
}

bool QWebHitTestResult_isContentSelected(const QWebHitTestResult* self) {
	return self->isContentSelected();
}

QWebElement* QWebHitTestResult_element(const QWebHitTestResult* self) {
	return new QWebElement(self->element());
}

QWebFrame* QWebHitTestResult_frame(const QWebHitTestResult* self) {
	return self->frame();
}

void QWebHitTestResult_delete(QWebHitTestResult* self) {
	delete self;
}

void QWebFrame_virtbase(QWebFrame* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QWebFrame_metaObject(const QWebFrame* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebFrame_metacast(QWebFrame* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebFrame_tr(const char* s) {
	QString _ret = QWebFrame::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebFrame_trUtf8(const char* s) {
	QString _ret = QWebFrame::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QWebPage* QWebFrame_page(const QWebFrame* self) {
	return self->page();
}

void QWebFrame_load(QWebFrame* self, QUrl* url) {
	self->load(*url);
}

void QWebFrame_loadWithRequest(QWebFrame* self, QNetworkRequest* request) {
	self->load(*request);
}

void QWebFrame_setHtml(QWebFrame* self, struct miqt_string html) {
	QString html_QString = QString::fromUtf8(html.data, html.len);
	self->setHtml(html_QString);
}

void QWebFrame_setContent(QWebFrame* self, struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	self->setContent(data_QByteArray);
}

void QWebFrame_addToJavaScriptWindowObject(QWebFrame* self, struct miqt_string name, QObject* object) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->addToJavaScriptWindowObject(name_QString, object);
}

struct miqt_string QWebFrame_toHtml(const QWebFrame* self) {
	QString _ret = self->toHtml();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebFrame_toPlainText(const QWebFrame* self) {
	QString _ret = self->toPlainText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebFrame_title(const QWebFrame* self) {
	QString _ret = self->title();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebFrame_setUrl(QWebFrame* self, QUrl* url) {
	self->setUrl(*url);
}

QUrl* QWebFrame_url(const QWebFrame* self) {
	return new QUrl(self->url());
}

QUrl* QWebFrame_requestedUrl(const QWebFrame* self) {
	return new QUrl(self->requestedUrl());
}

QUrl* QWebFrame_baseUrl(const QWebFrame* self) {
	return new QUrl(self->baseUrl());
}

QIcon* QWebFrame_icon(const QWebFrame* self) {
	return new QIcon(self->icon());
}

struct miqt_string QWebFrame_frameName(const QWebFrame* self) {
	QString _ret = self->frameName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QWebFrame* QWebFrame_parentFrame(const QWebFrame* self) {
	return self->parentFrame();
}

struct miqt_array /* of QWebFrame* */  QWebFrame_childFrames(const QWebFrame* self) {
	QList<QWebFrame *> _ret = self->childFrames();
	// Convert QList<> from C++ memory to manually-managed C memory
	QWebFrame** _arr = static_cast<QWebFrame**>(malloc(sizeof(QWebFrame*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

int QWebFrame_scrollBarPolicy(const QWebFrame* self, int orientation) {
	Qt::ScrollBarPolicy _ret = self->scrollBarPolicy(static_cast<Qt::Orientation>(orientation));
	return static_cast<int>(_ret);
}

void QWebFrame_setScrollBarPolicy(QWebFrame* self, int orientation, int policy) {
	self->setScrollBarPolicy(static_cast<Qt::Orientation>(orientation), static_cast<Qt::ScrollBarPolicy>(policy));
}

void QWebFrame_setScrollBarValue(QWebFrame* self, int orientation, int value) {
	self->setScrollBarValue(static_cast<Qt::Orientation>(orientation), static_cast<int>(value));
}

int QWebFrame_scrollBarValue(const QWebFrame* self, int orientation) {
	return self->scrollBarValue(static_cast<Qt::Orientation>(orientation));
}

int QWebFrame_scrollBarMinimum(const QWebFrame* self, int orientation) {
	return self->scrollBarMinimum(static_cast<Qt::Orientation>(orientation));
}

int QWebFrame_scrollBarMaximum(const QWebFrame* self, int orientation) {
	return self->scrollBarMaximum(static_cast<Qt::Orientation>(orientation));
}

QRect* QWebFrame_scrollBarGeometry(const QWebFrame* self, int orientation) {
	return new QRect(self->scrollBarGeometry(static_cast<Qt::Orientation>(orientation)));
}

void QWebFrame_scroll(QWebFrame* self, int param1, int param2) {
	self->scroll(static_cast<int>(param1), static_cast<int>(param2));
}

QPoint* QWebFrame_scrollPosition(const QWebFrame* self) {
	return new QPoint(self->scrollPosition());
}

void QWebFrame_setScrollPosition(QWebFrame* self, QPoint* pos) {
	self->setScrollPosition(*pos);
}

void QWebFrame_scrollToAnchor(QWebFrame* self, struct miqt_string anchor) {
	QString anchor_QString = QString::fromUtf8(anchor.data, anchor.len);
	self->scrollToAnchor(anchor_QString);
}

void QWebFrame_render(QWebFrame* self, QPainter* param1) {
	self->render(param1);
}

void QWebFrame_render2(QWebFrame* self, QPainter* param1, int layer) {
	self->render(param1, static_cast<QWebFrame::RenderLayers>(layer));
}

void QWebFrame_setTextSizeMultiplier(QWebFrame* self, double factor) {
	self->setTextSizeMultiplier(static_cast<qreal>(factor));
}

double QWebFrame_textSizeMultiplier(const QWebFrame* self) {
	qreal _ret = self->textSizeMultiplier();
	return static_cast<double>(_ret);
}

double QWebFrame_zoomFactor(const QWebFrame* self) {
	qreal _ret = self->zoomFactor();
	return static_cast<double>(_ret);
}

void QWebFrame_setZoomFactor(QWebFrame* self, double factor) {
	self->setZoomFactor(static_cast<qreal>(factor));
}

bool QWebFrame_hasFocus(const QWebFrame* self) {
	return self->hasFocus();
}

void QWebFrame_setFocus(QWebFrame* self) {
	self->setFocus();
}

QPoint* QWebFrame_pos(const QWebFrame* self) {
	return new QPoint(self->pos());
}

QRect* QWebFrame_geometry(const QWebFrame* self) {
	return new QRect(self->geometry());
}

QSize* QWebFrame_contentsSize(const QWebFrame* self) {
	return new QSize(self->contentsSize());
}

QWebElement* QWebFrame_documentElement(const QWebFrame* self) {
	return new QWebElement(self->documentElement());
}

QWebElement* QWebFrame_ownerElement(const QWebFrame* self) {
	return new QWebElement(self->ownerElement());
}

QWebElementCollection* QWebFrame_findAllElements(const QWebFrame* self, struct miqt_string selectorQuery) {
	QString selectorQuery_QString = QString::fromUtf8(selectorQuery.data, selectorQuery.len);
	return new QWebElementCollection(self->findAllElements(selectorQuery_QString));
}

QWebElement* QWebFrame_findFirstElement(const QWebFrame* self, struct miqt_string selectorQuery) {
	QString selectorQuery_QString = QString::fromUtf8(selectorQuery.data, selectorQuery.len);
	return new QWebElement(self->findFirstElement(selectorQuery_QString));
}

QWebHitTestResult* QWebFrame_hitTestContent(const QWebFrame* self, QPoint* pos) {
	return new QWebHitTestResult(self->hitTestContent(*pos));
}

bool QWebFrame_event(QWebFrame* self, QEvent* param1) {
	return self->event(param1);
}

QWebSecurityOrigin* QWebFrame_securityOrigin(const QWebFrame* self) {
	return new QWebSecurityOrigin(self->securityOrigin());
}

QVariant* QWebFrame_evaluateJavaScript(QWebFrame* self, struct miqt_string scriptSource) {
	QString scriptSource_QString = QString::fromUtf8(scriptSource.data, scriptSource.len);
	return new QVariant(self->evaluateJavaScript(scriptSource_QString));
}

void QWebFrame_print(const QWebFrame* self, QPrinter* printer) {
	self->print(printer);
}

void QWebFrame_javaScriptWindowObjectCleared(QWebFrame* self) {
	self->javaScriptWindowObjectCleared();
}

void QWebFrame_connect_javaScriptWindowObjectCleared(QWebFrame* self, intptr_t slot) {
	QWebFrame::connect(self, static_cast<void (QWebFrame::*)()>(&QWebFrame::javaScriptWindowObjectCleared), self, [=]() {
		miqt_exec_callback_QWebFrame_javaScriptWindowObjectCleared(slot);
	});
}

void QWebFrame_provisionalLoad(QWebFrame* self) {
	self->provisionalLoad();
}

void QWebFrame_connect_provisionalLoad(QWebFrame* self, intptr_t slot) {
	QWebFrame::connect(self, static_cast<void (QWebFrame::*)()>(&QWebFrame::provisionalLoad), self, [=]() {
		miqt_exec_callback_QWebFrame_provisionalLoad(slot);
	});
}

void QWebFrame_titleChanged(QWebFrame* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	self->titleChanged(title_QString);
}

void QWebFrame_connect_titleChanged(QWebFrame* self, intptr_t slot) {
	QWebFrame::connect(self, static_cast<void (QWebFrame::*)(const QString&)>(&QWebFrame::titleChanged), self, [=](const QString& title) {
		const QString title_ret = title;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray title_b = title_ret.toUtf8();
		struct miqt_string title_ms;
		title_ms.len = title_b.length();
		title_ms.data = static_cast<char*>(malloc(title_ms.len));
		memcpy(title_ms.data, title_b.data(), title_ms.len);
		struct miqt_string sigval1 = title_ms;
		miqt_exec_callback_QWebFrame_titleChanged(slot, sigval1);
	});
}

void QWebFrame_urlChanged(QWebFrame* self, QUrl* url) {
	self->urlChanged(*url);
}

void QWebFrame_connect_urlChanged(QWebFrame* self, intptr_t slot) {
	QWebFrame::connect(self, static_cast<void (QWebFrame::*)(const QUrl&)>(&QWebFrame::urlChanged), self, [=](const QUrl& url) {
		const QUrl& url_ret = url;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
		miqt_exec_callback_QWebFrame_urlChanged(slot, sigval1);
	});
}

void QWebFrame_initialLayoutCompleted(QWebFrame* self) {
	self->initialLayoutCompleted();
}

void QWebFrame_connect_initialLayoutCompleted(QWebFrame* self, intptr_t slot) {
	QWebFrame::connect(self, static_cast<void (QWebFrame::*)()>(&QWebFrame::initialLayoutCompleted), self, [=]() {
		miqt_exec_callback_QWebFrame_initialLayoutCompleted(slot);
	});
}

void QWebFrame_iconChanged(QWebFrame* self) {
	self->iconChanged();
}

void QWebFrame_connect_iconChanged(QWebFrame* self, intptr_t slot) {
	QWebFrame::connect(self, static_cast<void (QWebFrame::*)()>(&QWebFrame::iconChanged), self, [=]() {
		miqt_exec_callback_QWebFrame_iconChanged(slot);
	});
}

void QWebFrame_contentsSizeChanged(QWebFrame* self, QSize* size) {
	self->contentsSizeChanged(*size);
}

void QWebFrame_connect_contentsSizeChanged(QWebFrame* self, intptr_t slot) {
	QWebFrame::connect(self, static_cast<void (QWebFrame::*)(const QSize&)>(&QWebFrame::contentsSizeChanged), self, [=](const QSize& size) {
		const QSize& size_ret = size;
		// Cast returned reference into pointer
		QSize* sigval1 = const_cast<QSize*>(&size_ret);
		miqt_exec_callback_QWebFrame_contentsSizeChanged(slot, sigval1);
	});
}

void QWebFrame_loadStarted(QWebFrame* self) {
	self->loadStarted();
}

void QWebFrame_connect_loadStarted(QWebFrame* self, intptr_t slot) {
	QWebFrame::connect(self, static_cast<void (QWebFrame::*)()>(&QWebFrame::loadStarted), self, [=]() {
		miqt_exec_callback_QWebFrame_loadStarted(slot);
	});
}

void QWebFrame_loadFinished(QWebFrame* self, bool ok) {
	self->loadFinished(ok);
}

void QWebFrame_connect_loadFinished(QWebFrame* self, intptr_t slot) {
	QWebFrame::connect(self, static_cast<void (QWebFrame::*)(bool)>(&QWebFrame::loadFinished), self, [=](bool ok) {
		bool sigval1 = ok;
		miqt_exec_callback_QWebFrame_loadFinished(slot, sigval1);
	});
}

void QWebFrame_pageChanged(QWebFrame* self) {
	self->pageChanged();
}

void QWebFrame_connect_pageChanged(QWebFrame* self, intptr_t slot) {
	QWebFrame::connect(self, static_cast<void (QWebFrame::*)()>(&QWebFrame::pageChanged), self, [=]() {
		miqt_exec_callback_QWebFrame_pageChanged(slot);
	});
}

struct miqt_string QWebFrame_tr2(const char* s, const char* c) {
	QString _ret = QWebFrame::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebFrame_tr3(const char* s, const char* c, int n) {
	QString _ret = QWebFrame::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebFrame_trUtf82(const char* s, const char* c) {
	QString _ret = QWebFrame::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebFrame_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QWebFrame::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebFrame_load2(QWebFrame* self, QNetworkRequest* request, int operation) {
	self->load(*request, static_cast<QNetworkAccessManager::Operation>(operation));
}

void QWebFrame_load3(QWebFrame* self, QNetworkRequest* request, int operation, struct miqt_string body) {
	QByteArray body_QByteArray(body.data, body.len);
	self->load(*request, static_cast<QNetworkAccessManager::Operation>(operation), body_QByteArray);
}

void QWebFrame_setHtml2(QWebFrame* self, struct miqt_string html, QUrl* baseUrl) {
	QString html_QString = QString::fromUtf8(html.data, html.len);
	self->setHtml(html_QString, *baseUrl);
}

void QWebFrame_setContent2(QWebFrame* self, struct miqt_string data, struct miqt_string mimeType) {
	QByteArray data_QByteArray(data.data, data.len);
	QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
	self->setContent(data_QByteArray, mimeType_QString);
}

void QWebFrame_setContent3(QWebFrame* self, struct miqt_string data, struct miqt_string mimeType, QUrl* baseUrl) {
	QByteArray data_QByteArray(data.data, data.len);
	QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
	self->setContent(data_QByteArray, mimeType_QString, *baseUrl);
}

void QWebFrame_addToJavaScriptWindowObject3(QWebFrame* self, struct miqt_string name, QObject* object, int ownership) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->addToJavaScriptWindowObject(name_QString, object, static_cast<QWebFrame::ValueOwnership>(ownership));
}

void QWebFrame_render22(QWebFrame* self, QPainter* param1, QRegion* clip) {
	self->render(param1, *clip);
}

void QWebFrame_render3(QWebFrame* self, QPainter* param1, int layer, QRegion* clip) {
	self->render(param1, static_cast<QWebFrame::RenderLayers>(layer), *clip);
}

