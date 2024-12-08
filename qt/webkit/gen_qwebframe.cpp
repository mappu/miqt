#include <QByteArray>
#include <QEvent>
#include <QIcon>
#include <QList>
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
#include "_cgo_export.h"

QWebHitTestResult* QWebHitTestResult_new() {
	return new QWebHitTestResult();
}

QWebHitTestResult* QWebHitTestResult_new2(QWebHitTestResult* other) {
	return new QWebHitTestResult(*other);
}

void QWebHitTestResult_OperatorAssign(QWebHitTestResult* self, QWebHitTestResult* other) {
	self->operator=(*other);
}

bool QWebHitTestResult_IsNull(const QWebHitTestResult* self) {
	return self->isNull();
}

QPoint* QWebHitTestResult_Pos(const QWebHitTestResult* self) {
	return new QPoint(self->pos());
}

QRect* QWebHitTestResult_BoundingRect(const QWebHitTestResult* self) {
	return new QRect(self->boundingRect());
}

QWebElement* QWebHitTestResult_EnclosingBlockElement(const QWebHitTestResult* self) {
	return new QWebElement(self->enclosingBlockElement());
}

struct miqt_string QWebHitTestResult_Title(const QWebHitTestResult* self) {
	QString _ret = self->title();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebHitTestResult_LinkText(const QWebHitTestResult* self) {
	QString _ret = self->linkText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QUrl* QWebHitTestResult_LinkUrl(const QWebHitTestResult* self) {
	return new QUrl(self->linkUrl());
}

QUrl* QWebHitTestResult_LinkTitle(const QWebHitTestResult* self) {
	return new QUrl(self->linkTitle());
}

struct miqt_string QWebHitTestResult_LinkTitleString(const QWebHitTestResult* self) {
	QString _ret = self->linkTitleString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QWebFrame* QWebHitTestResult_LinkTargetFrame(const QWebHitTestResult* self) {
	return self->linkTargetFrame();
}

QWebElement* QWebHitTestResult_LinkElement(const QWebHitTestResult* self) {
	return new QWebElement(self->linkElement());
}

struct miqt_string QWebHitTestResult_AlternateText(const QWebHitTestResult* self) {
	QString _ret = self->alternateText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QUrl* QWebHitTestResult_ImageUrl(const QWebHitTestResult* self) {
	return new QUrl(self->imageUrl());
}

QPixmap* QWebHitTestResult_Pixmap(const QWebHitTestResult* self) {
	return new QPixmap(self->pixmap());
}

QUrl* QWebHitTestResult_MediaUrl(const QWebHitTestResult* self) {
	return new QUrl(self->mediaUrl());
}

bool QWebHitTestResult_IsContentEditable(const QWebHitTestResult* self) {
	return self->isContentEditable();
}

bool QWebHitTestResult_IsContentSelected(const QWebHitTestResult* self) {
	return self->isContentSelected();
}

QWebElement* QWebHitTestResult_Element(const QWebHitTestResult* self) {
	return new QWebElement(self->element());
}

QWebFrame* QWebHitTestResult_Frame(const QWebHitTestResult* self) {
	return self->frame();
}

void QWebHitTestResult_Delete(QWebHitTestResult* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QWebHitTestResult*>( self );
	} else {
		delete self;
	}
}

void QWebFrame_virtbase(QWebFrame* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QWebFrame_MetaObject(const QWebFrame* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebFrame_Metacast(QWebFrame* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebFrame_Tr(const char* s) {
	QString _ret = QWebFrame::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebFrame_TrUtf8(const char* s) {
	QString _ret = QWebFrame::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QWebPage* QWebFrame_Page(const QWebFrame* self) {
	return self->page();
}

void QWebFrame_Load(QWebFrame* self, QUrl* url) {
	self->load(*url);
}

void QWebFrame_LoadWithRequest(QWebFrame* self, QNetworkRequest* request) {
	self->load(*request);
}

void QWebFrame_SetHtml(QWebFrame* self, struct miqt_string html) {
	QString html_QString = QString::fromUtf8(html.data, html.len);
	self->setHtml(html_QString);
}

void QWebFrame_SetContent(QWebFrame* self, struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	self->setContent(data_QByteArray);
}

void QWebFrame_AddToJavaScriptWindowObject(QWebFrame* self, struct miqt_string name, QObject* object) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->addToJavaScriptWindowObject(name_QString, object);
}

struct miqt_string QWebFrame_ToHtml(const QWebFrame* self) {
	QString _ret = self->toHtml();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebFrame_ToPlainText(const QWebFrame* self) {
	QString _ret = self->toPlainText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebFrame_Title(const QWebFrame* self) {
	QString _ret = self->title();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebFrame_SetUrl(QWebFrame* self, QUrl* url) {
	self->setUrl(*url);
}

QUrl* QWebFrame_Url(const QWebFrame* self) {
	return new QUrl(self->url());
}

QUrl* QWebFrame_RequestedUrl(const QWebFrame* self) {
	return new QUrl(self->requestedUrl());
}

QUrl* QWebFrame_BaseUrl(const QWebFrame* self) {
	return new QUrl(self->baseUrl());
}

QIcon* QWebFrame_Icon(const QWebFrame* self) {
	return new QIcon(self->icon());
}

struct miqt_string QWebFrame_FrameName(const QWebFrame* self) {
	QString _ret = self->frameName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QWebFrame* QWebFrame_ParentFrame(const QWebFrame* self) {
	return self->parentFrame();
}

struct miqt_array /* of QWebFrame* */  QWebFrame_ChildFrames(const QWebFrame* self) {
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

int QWebFrame_ScrollBarPolicy(const QWebFrame* self, int orientation) {
	Qt::ScrollBarPolicy _ret = self->scrollBarPolicy(static_cast<Qt::Orientation>(orientation));
	return static_cast<int>(_ret);
}

void QWebFrame_SetScrollBarPolicy(QWebFrame* self, int orientation, int policy) {
	self->setScrollBarPolicy(static_cast<Qt::Orientation>(orientation), static_cast<Qt::ScrollBarPolicy>(policy));
}

void QWebFrame_SetScrollBarValue(QWebFrame* self, int orientation, int value) {
	self->setScrollBarValue(static_cast<Qt::Orientation>(orientation), static_cast<int>(value));
}

int QWebFrame_ScrollBarValue(const QWebFrame* self, int orientation) {
	return self->scrollBarValue(static_cast<Qt::Orientation>(orientation));
}

int QWebFrame_ScrollBarMinimum(const QWebFrame* self, int orientation) {
	return self->scrollBarMinimum(static_cast<Qt::Orientation>(orientation));
}

int QWebFrame_ScrollBarMaximum(const QWebFrame* self, int orientation) {
	return self->scrollBarMaximum(static_cast<Qt::Orientation>(orientation));
}

QRect* QWebFrame_ScrollBarGeometry(const QWebFrame* self, int orientation) {
	return new QRect(self->scrollBarGeometry(static_cast<Qt::Orientation>(orientation)));
}

void QWebFrame_Scroll(QWebFrame* self, int param1, int param2) {
	self->scroll(static_cast<int>(param1), static_cast<int>(param2));
}

QPoint* QWebFrame_ScrollPosition(const QWebFrame* self) {
	return new QPoint(self->scrollPosition());
}

void QWebFrame_SetScrollPosition(QWebFrame* self, QPoint* pos) {
	self->setScrollPosition(*pos);
}

void QWebFrame_ScrollToAnchor(QWebFrame* self, struct miqt_string anchor) {
	QString anchor_QString = QString::fromUtf8(anchor.data, anchor.len);
	self->scrollToAnchor(anchor_QString);
}

void QWebFrame_Render(QWebFrame* self, QPainter* param1) {
	self->render(param1);
}

void QWebFrame_Render2(QWebFrame* self, QPainter* param1, int layer) {
	self->render(param1, static_cast<QWebFrame::RenderLayers>(layer));
}

void QWebFrame_SetTextSizeMultiplier(QWebFrame* self, double factor) {
	self->setTextSizeMultiplier(static_cast<qreal>(factor));
}

double QWebFrame_TextSizeMultiplier(const QWebFrame* self) {
	qreal _ret = self->textSizeMultiplier();
	return static_cast<double>(_ret);
}

double QWebFrame_ZoomFactor(const QWebFrame* self) {
	qreal _ret = self->zoomFactor();
	return static_cast<double>(_ret);
}

void QWebFrame_SetZoomFactor(QWebFrame* self, double factor) {
	self->setZoomFactor(static_cast<qreal>(factor));
}

bool QWebFrame_HasFocus(const QWebFrame* self) {
	return self->hasFocus();
}

void QWebFrame_SetFocus(QWebFrame* self) {
	self->setFocus();
}

QPoint* QWebFrame_Pos(const QWebFrame* self) {
	return new QPoint(self->pos());
}

QRect* QWebFrame_Geometry(const QWebFrame* self) {
	return new QRect(self->geometry());
}

QSize* QWebFrame_ContentsSize(const QWebFrame* self) {
	return new QSize(self->contentsSize());
}

QWebElement* QWebFrame_DocumentElement(const QWebFrame* self) {
	return new QWebElement(self->documentElement());
}

QWebElement* QWebFrame_OwnerElement(const QWebFrame* self) {
	return new QWebElement(self->ownerElement());
}

QWebElementCollection* QWebFrame_FindAllElements(const QWebFrame* self, struct miqt_string selectorQuery) {
	QString selectorQuery_QString = QString::fromUtf8(selectorQuery.data, selectorQuery.len);
	return new QWebElementCollection(self->findAllElements(selectorQuery_QString));
}

QWebElement* QWebFrame_FindFirstElement(const QWebFrame* self, struct miqt_string selectorQuery) {
	QString selectorQuery_QString = QString::fromUtf8(selectorQuery.data, selectorQuery.len);
	return new QWebElement(self->findFirstElement(selectorQuery_QString));
}

QWebHitTestResult* QWebFrame_HitTestContent(const QWebFrame* self, QPoint* pos) {
	return new QWebHitTestResult(self->hitTestContent(*pos));
}

bool QWebFrame_Event(QWebFrame* self, QEvent* param1) {
	return self->event(param1);
}

QWebSecurityOrigin* QWebFrame_SecurityOrigin(const QWebFrame* self) {
	return new QWebSecurityOrigin(self->securityOrigin());
}

QVariant* QWebFrame_EvaluateJavaScript(QWebFrame* self, struct miqt_string scriptSource) {
	QString scriptSource_QString = QString::fromUtf8(scriptSource.data, scriptSource.len);
	return new QVariant(self->evaluateJavaScript(scriptSource_QString));
}

void QWebFrame_Print(const QWebFrame* self, QPrinter* printer) {
	self->print(printer);
}

void QWebFrame_JavaScriptWindowObjectCleared(QWebFrame* self) {
	self->javaScriptWindowObjectCleared();
}

void QWebFrame_connect_JavaScriptWindowObjectCleared(QWebFrame* self, intptr_t slot) {
	QWebFrame::connect(self, static_cast<void (QWebFrame::*)()>(&QWebFrame::javaScriptWindowObjectCleared), self, [=]() {
		miqt_exec_callback_QWebFrame_JavaScriptWindowObjectCleared(slot);
	});
}

void QWebFrame_ProvisionalLoad(QWebFrame* self) {
	self->provisionalLoad();
}

void QWebFrame_connect_ProvisionalLoad(QWebFrame* self, intptr_t slot) {
	QWebFrame::connect(self, static_cast<void (QWebFrame::*)()>(&QWebFrame::provisionalLoad), self, [=]() {
		miqt_exec_callback_QWebFrame_ProvisionalLoad(slot);
	});
}

void QWebFrame_TitleChanged(QWebFrame* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	self->titleChanged(title_QString);
}

void QWebFrame_connect_TitleChanged(QWebFrame* self, intptr_t slot) {
	QWebFrame::connect(self, static_cast<void (QWebFrame::*)(const QString&)>(&QWebFrame::titleChanged), self, [=](const QString& title) {
		const QString title_ret = title;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray title_b = title_ret.toUtf8();
		struct miqt_string title_ms;
		title_ms.len = title_b.length();
		title_ms.data = static_cast<char*>(malloc(title_ms.len));
		memcpy(title_ms.data, title_b.data(), title_ms.len);
		struct miqt_string sigval1 = title_ms;
		miqt_exec_callback_QWebFrame_TitleChanged(slot, sigval1);
	});
}

void QWebFrame_UrlChanged(QWebFrame* self, QUrl* url) {
	self->urlChanged(*url);
}

void QWebFrame_connect_UrlChanged(QWebFrame* self, intptr_t slot) {
	QWebFrame::connect(self, static_cast<void (QWebFrame::*)(const QUrl&)>(&QWebFrame::urlChanged), self, [=](const QUrl& url) {
		const QUrl& url_ret = url;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
		miqt_exec_callback_QWebFrame_UrlChanged(slot, sigval1);
	});
}

void QWebFrame_InitialLayoutCompleted(QWebFrame* self) {
	self->initialLayoutCompleted();
}

void QWebFrame_connect_InitialLayoutCompleted(QWebFrame* self, intptr_t slot) {
	QWebFrame::connect(self, static_cast<void (QWebFrame::*)()>(&QWebFrame::initialLayoutCompleted), self, [=]() {
		miqt_exec_callback_QWebFrame_InitialLayoutCompleted(slot);
	});
}

void QWebFrame_IconChanged(QWebFrame* self) {
	self->iconChanged();
}

void QWebFrame_connect_IconChanged(QWebFrame* self, intptr_t slot) {
	QWebFrame::connect(self, static_cast<void (QWebFrame::*)()>(&QWebFrame::iconChanged), self, [=]() {
		miqt_exec_callback_QWebFrame_IconChanged(slot);
	});
}

void QWebFrame_ContentsSizeChanged(QWebFrame* self, QSize* size) {
	self->contentsSizeChanged(*size);
}

void QWebFrame_connect_ContentsSizeChanged(QWebFrame* self, intptr_t slot) {
	QWebFrame::connect(self, static_cast<void (QWebFrame::*)(const QSize&)>(&QWebFrame::contentsSizeChanged), self, [=](const QSize& size) {
		const QSize& size_ret = size;
		// Cast returned reference into pointer
		QSize* sigval1 = const_cast<QSize*>(&size_ret);
		miqt_exec_callback_QWebFrame_ContentsSizeChanged(slot, sigval1);
	});
}

void QWebFrame_LoadStarted(QWebFrame* self) {
	self->loadStarted();
}

void QWebFrame_connect_LoadStarted(QWebFrame* self, intptr_t slot) {
	QWebFrame::connect(self, static_cast<void (QWebFrame::*)()>(&QWebFrame::loadStarted), self, [=]() {
		miqt_exec_callback_QWebFrame_LoadStarted(slot);
	});
}

void QWebFrame_LoadFinished(QWebFrame* self, bool ok) {
	self->loadFinished(ok);
}

void QWebFrame_connect_LoadFinished(QWebFrame* self, intptr_t slot) {
	QWebFrame::connect(self, static_cast<void (QWebFrame::*)(bool)>(&QWebFrame::loadFinished), self, [=](bool ok) {
		bool sigval1 = ok;
		miqt_exec_callback_QWebFrame_LoadFinished(slot, sigval1);
	});
}

void QWebFrame_PageChanged(QWebFrame* self) {
	self->pageChanged();
}

void QWebFrame_connect_PageChanged(QWebFrame* self, intptr_t slot) {
	QWebFrame::connect(self, static_cast<void (QWebFrame::*)()>(&QWebFrame::pageChanged), self, [=]() {
		miqt_exec_callback_QWebFrame_PageChanged(slot);
	});
}

struct miqt_string QWebFrame_Tr2(const char* s, const char* c) {
	QString _ret = QWebFrame::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebFrame_Tr3(const char* s, const char* c, int n) {
	QString _ret = QWebFrame::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebFrame_TrUtf82(const char* s, const char* c) {
	QString _ret = QWebFrame::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebFrame_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QWebFrame::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebFrame_Load2(QWebFrame* self, QNetworkRequest* request, int operation) {
	self->load(*request, static_cast<QNetworkAccessManager::Operation>(operation));
}

void QWebFrame_Load3(QWebFrame* self, QNetworkRequest* request, int operation, struct miqt_string body) {
	QByteArray body_QByteArray(body.data, body.len);
	self->load(*request, static_cast<QNetworkAccessManager::Operation>(operation), body_QByteArray);
}

void QWebFrame_SetHtml2(QWebFrame* self, struct miqt_string html, QUrl* baseUrl) {
	QString html_QString = QString::fromUtf8(html.data, html.len);
	self->setHtml(html_QString, *baseUrl);
}

void QWebFrame_SetContent2(QWebFrame* self, struct miqt_string data, struct miqt_string mimeType) {
	QByteArray data_QByteArray(data.data, data.len);
	QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
	self->setContent(data_QByteArray, mimeType_QString);
}

void QWebFrame_SetContent3(QWebFrame* self, struct miqt_string data, struct miqt_string mimeType, QUrl* baseUrl) {
	QByteArray data_QByteArray(data.data, data.len);
	QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
	self->setContent(data_QByteArray, mimeType_QString, *baseUrl);
}

void QWebFrame_AddToJavaScriptWindowObject3(QWebFrame* self, struct miqt_string name, QObject* object, int ownership) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->addToJavaScriptWindowObject(name_QString, object, static_cast<QWebFrame::ValueOwnership>(ownership));
}

void QWebFrame_Render22(QWebFrame* self, QPainter* param1, QRegion* clip) {
	self->render(param1, *clip);
}

void QWebFrame_Render3(QWebFrame* self, QPainter* param1, int layer, QRegion* clip) {
	self->render(param1, static_cast<QWebFrame::RenderLayers>(layer), *clip);
}

