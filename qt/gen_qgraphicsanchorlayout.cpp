#include <QEvent>
#include <QGraphicsAnchor>
#include <QGraphicsAnchorLayout>
#include <QGraphicsItem>
#include <QGraphicsLayout>
#include <QGraphicsLayoutItem>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QRectF>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qgraphicsanchorlayout.h>
#include "gen_qgraphicsanchorlayout.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QGraphicsAnchorLayout_removeAt(QGraphicsAnchorLayout*, intptr_t, int);
void miqt_exec_callback_QGraphicsAnchorLayout_setGeometry(QGraphicsAnchorLayout*, intptr_t, QRectF*);
int miqt_exec_callback_QGraphicsAnchorLayout_count(const QGraphicsAnchorLayout*, intptr_t);
QGraphicsLayoutItem* miqt_exec_callback_QGraphicsAnchorLayout_itemAt(const QGraphicsAnchorLayout*, intptr_t, int);
void miqt_exec_callback_QGraphicsAnchorLayout_invalidate(QGraphicsAnchorLayout*, intptr_t);
QSizeF* miqt_exec_callback_QGraphicsAnchorLayout_sizeHint(const QGraphicsAnchorLayout*, intptr_t, int, QSizeF*);
void miqt_exec_callback_QGraphicsAnchorLayout_getContentsMargins(const QGraphicsAnchorLayout*, intptr_t, double*, double*, double*, double*);
void miqt_exec_callback_QGraphicsAnchorLayout_updateGeometry(QGraphicsAnchorLayout*, intptr_t);
void miqt_exec_callback_QGraphicsAnchorLayout_widgetEvent(QGraphicsAnchorLayout*, intptr_t, QEvent*);
#ifdef __cplusplus
} /* extern C */
#endif

void QGraphicsAnchor_virtbase(QGraphicsAnchor* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QGraphicsAnchor_metaObject(const QGraphicsAnchor* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsAnchor_metacast(QGraphicsAnchor* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsAnchor_tr(const char* s) {
	QString _ret = QGraphicsAnchor::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsAnchor_trUtf8(const char* s) {
	QString _ret = QGraphicsAnchor::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsAnchor_setSpacing(QGraphicsAnchor* self, double spacing) {
	self->setSpacing(static_cast<qreal>(spacing));
}

void QGraphicsAnchor_unsetSpacing(QGraphicsAnchor* self) {
	self->unsetSpacing();
}

double QGraphicsAnchor_spacing(const QGraphicsAnchor* self) {
	qreal _ret = self->spacing();
	return static_cast<double>(_ret);
}

void QGraphicsAnchor_setSizePolicy(QGraphicsAnchor* self, int policy) {
	self->setSizePolicy(static_cast<QSizePolicy::Policy>(policy));
}

int QGraphicsAnchor_sizePolicy(const QGraphicsAnchor* self) {
	QSizePolicy::Policy _ret = self->sizePolicy();
	return static_cast<int>(_ret);
}

struct miqt_string QGraphicsAnchor_tr2(const char* s, const char* c) {
	QString _ret = QGraphicsAnchor::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsAnchor_tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsAnchor::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsAnchor_trUtf82(const char* s, const char* c) {
	QString _ret = QGraphicsAnchor::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsAnchor_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QGraphicsAnchor::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsAnchor_delete(QGraphicsAnchor* self) {
	delete self;
}

class MiqtVirtualQGraphicsAnchorLayout final : public QGraphicsAnchorLayout {
public:

	MiqtVirtualQGraphicsAnchorLayout(): QGraphicsAnchorLayout() {};
	MiqtVirtualQGraphicsAnchorLayout(QGraphicsLayoutItem* parent): QGraphicsAnchorLayout(parent) {};

	virtual ~MiqtVirtualQGraphicsAnchorLayout() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__removeAt = 0;

	// Subclass to allow providing a Go implementation
	virtual void removeAt(int index) override {
		if (handle__removeAt == 0) {
			QGraphicsAnchorLayout::removeAt(index);
			return;
		}
		
		int sigval1 = index;

		miqt_exec_callback_QGraphicsAnchorLayout_removeAt(this, handle__removeAt, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_removeAt(int index) {

		QGraphicsAnchorLayout::removeAt(static_cast<int>(index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void setGeometry(const QRectF& rect) override {
		if (handle__setGeometry == 0) {
			QGraphicsAnchorLayout::setGeometry(rect);
			return;
		}
		
		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&rect_ret);

		miqt_exec_callback_QGraphicsAnchorLayout_setGeometry(this, handle__setGeometry, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setGeometry(QRectF* rect) {

		QGraphicsAnchorLayout::setGeometry(*rect);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__count = 0;

	// Subclass to allow providing a Go implementation
	virtual int count() const override {
		if (handle__count == 0) {
			return QGraphicsAnchorLayout::count();
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsAnchorLayout_count(this, handle__count);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_count() const {

		return QGraphicsAnchorLayout::count();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QGraphicsLayoutItem* itemAt(int index) const override {
		if (handle__itemAt == 0) {
			return QGraphicsAnchorLayout::itemAt(index);
		}
		
		int sigval1 = index;

		QGraphicsLayoutItem* callback_return_value = miqt_exec_callback_QGraphicsAnchorLayout_itemAt(this, handle__itemAt, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QGraphicsLayoutItem* virtualbase_itemAt(int index) const {

		return QGraphicsAnchorLayout::itemAt(static_cast<int>(index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__invalidate = 0;

	// Subclass to allow providing a Go implementation
	virtual void invalidate() override {
		if (handle__invalidate == 0) {
			QGraphicsAnchorLayout::invalidate();
			return;
		}
		

		miqt_exec_callback_QGraphicsAnchorLayout_invalidate(this, handle__invalidate);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_invalidate() {

		QGraphicsAnchorLayout::invalidate();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
		if (handle__sizeHint == 0) {
			return QGraphicsAnchorLayout::sizeHint(which, constraint);
		}
		
		Qt::SizeHint which_ret = which;
		int sigval1 = static_cast<int>(which_ret);
		const QSizeF& constraint_ret = constraint;
		// Cast returned reference into pointer
		QSizeF* sigval2 = const_cast<QSizeF*>(&constraint_ret);

		QSizeF* callback_return_value = miqt_exec_callback_QGraphicsAnchorLayout_sizeHint(this, handle__sizeHint, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSizeF* virtualbase_sizeHint(int which, QSizeF* constraint) const {

		return new QSizeF(QGraphicsAnchorLayout::sizeHint(static_cast<Qt::SizeHint>(which), *constraint));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__getContentsMargins = 0;

	// Subclass to allow providing a Go implementation
	virtual void getContentsMargins(qreal* left, qreal* top, qreal* right, qreal* bottom) const override {
		if (handle__getContentsMargins == 0) {
			QGraphicsAnchorLayout::getContentsMargins(left, top, right, bottom);
			return;
		}
		
		qreal* left_ret = left;
		double* sigval1 = static_cast<double*>(left_ret);
		qreal* top_ret = top;
		double* sigval2 = static_cast<double*>(top_ret);
		qreal* right_ret = right;
		double* sigval3 = static_cast<double*>(right_ret);
		qreal* bottom_ret = bottom;
		double* sigval4 = static_cast<double*>(bottom_ret);

		miqt_exec_callback_QGraphicsAnchorLayout_getContentsMargins(this, handle__getContentsMargins, sigval1, sigval2, sigval3, sigval4);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_getContentsMargins(double* left, double* top, double* right, double* bottom) const {

		QGraphicsAnchorLayout::getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateGeometry() override {
		if (handle__updateGeometry == 0) {
			QGraphicsAnchorLayout::updateGeometry();
			return;
		}
		

		miqt_exec_callback_QGraphicsAnchorLayout_updateGeometry(this, handle__updateGeometry);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateGeometry() {

		QGraphicsAnchorLayout::updateGeometry();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widgetEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void widgetEvent(QEvent* e) override {
		if (handle__widgetEvent == 0) {
			QGraphicsAnchorLayout::widgetEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QGraphicsAnchorLayout_widgetEvent(this, handle__widgetEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_widgetEvent(QEvent* e) {

		QGraphicsAnchorLayout::widgetEvent(e);

	}

	// Wrappers to allow calling protected methods:
	friend void QGraphicsAnchorLayout_protectedbase_addChildLayoutItem(bool* _dynamic_cast_ok, void* self, QGraphicsLayoutItem* layoutItem);
	friend void QGraphicsAnchorLayout_protectedbase_setGraphicsItem(bool* _dynamic_cast_ok, void* self, QGraphicsItem* item);
	friend void QGraphicsAnchorLayout_protectedbase_setOwnedByLayout(bool* _dynamic_cast_ok, void* self, bool ownedByLayout);
};

QGraphicsAnchorLayout* QGraphicsAnchorLayout_new() {
	return new MiqtVirtualQGraphicsAnchorLayout();
}

QGraphicsAnchorLayout* QGraphicsAnchorLayout_new2(QGraphicsLayoutItem* parent) {
	return new MiqtVirtualQGraphicsAnchorLayout(parent);
}

void QGraphicsAnchorLayout_virtbase(QGraphicsAnchorLayout* src, QGraphicsLayout** outptr_QGraphicsLayout) {
	*outptr_QGraphicsLayout = static_cast<QGraphicsLayout*>(src);
}

QGraphicsAnchor* QGraphicsAnchorLayout_addAnchor(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, int firstEdge, QGraphicsLayoutItem* secondItem, int secondEdge) {
	return self->addAnchor(firstItem, static_cast<Qt::AnchorPoint>(firstEdge), secondItem, static_cast<Qt::AnchorPoint>(secondEdge));
}

QGraphicsAnchor* QGraphicsAnchorLayout_anchor(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, int firstEdge, QGraphicsLayoutItem* secondItem, int secondEdge) {
	return self->anchor(firstItem, static_cast<Qt::AnchorPoint>(firstEdge), secondItem, static_cast<Qt::AnchorPoint>(secondEdge));
}

void QGraphicsAnchorLayout_addCornerAnchors(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, int firstCorner, QGraphicsLayoutItem* secondItem, int secondCorner) {
	self->addCornerAnchors(firstItem, static_cast<Qt::Corner>(firstCorner), secondItem, static_cast<Qt::Corner>(secondCorner));
}

void QGraphicsAnchorLayout_addAnchors(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, QGraphicsLayoutItem* secondItem) {
	self->addAnchors(firstItem, secondItem);
}

void QGraphicsAnchorLayout_setHorizontalSpacing(QGraphicsAnchorLayout* self, double spacing) {
	self->setHorizontalSpacing(static_cast<qreal>(spacing));
}

void QGraphicsAnchorLayout_setVerticalSpacing(QGraphicsAnchorLayout* self, double spacing) {
	self->setVerticalSpacing(static_cast<qreal>(spacing));
}

void QGraphicsAnchorLayout_setSpacing(QGraphicsAnchorLayout* self, double spacing) {
	self->setSpacing(static_cast<qreal>(spacing));
}

double QGraphicsAnchorLayout_horizontalSpacing(const QGraphicsAnchorLayout* self) {
	qreal _ret = self->horizontalSpacing();
	return static_cast<double>(_ret);
}

double QGraphicsAnchorLayout_verticalSpacing(const QGraphicsAnchorLayout* self) {
	qreal _ret = self->verticalSpacing();
	return static_cast<double>(_ret);
}

void QGraphicsAnchorLayout_removeAt(QGraphicsAnchorLayout* self, int index) {
	self->removeAt(static_cast<int>(index));
}

void QGraphicsAnchorLayout_setGeometry(QGraphicsAnchorLayout* self, QRectF* rect) {
	self->setGeometry(*rect);
}

int QGraphicsAnchorLayout_count(const QGraphicsAnchorLayout* self) {
	return self->count();
}

QGraphicsLayoutItem* QGraphicsAnchorLayout_itemAt(const QGraphicsAnchorLayout* self, int index) {
	return self->itemAt(static_cast<int>(index));
}

void QGraphicsAnchorLayout_invalidate(QGraphicsAnchorLayout* self) {
	self->invalidate();
}

void QGraphicsAnchorLayout_addAnchors3(QGraphicsAnchorLayout* self, QGraphicsLayoutItem* firstItem, QGraphicsLayoutItem* secondItem, int orientations) {
	self->addAnchors(firstItem, secondItem, static_cast<Qt::Orientations>(orientations));
}

bool QGraphicsAnchorLayout_override_virtual_removeAt(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsAnchorLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsAnchorLayout*>( (QGraphicsAnchorLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__removeAt = slot;
	return true;
}

void QGraphicsAnchorLayout_virtualbase_removeAt(void* self, int index) {
	( (MiqtVirtualQGraphicsAnchorLayout*)(self) )->virtualbase_removeAt(index);
}

bool QGraphicsAnchorLayout_override_virtual_setGeometry(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsAnchorLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsAnchorLayout*>( (QGraphicsAnchorLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setGeometry = slot;
	return true;
}

void QGraphicsAnchorLayout_virtualbase_setGeometry(void* self, QRectF* rect) {
	( (MiqtVirtualQGraphicsAnchorLayout*)(self) )->virtualbase_setGeometry(rect);
}

bool QGraphicsAnchorLayout_override_virtual_count(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsAnchorLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsAnchorLayout*>( (QGraphicsAnchorLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__count = slot;
	return true;
}

int QGraphicsAnchorLayout_virtualbase_count(const void* self) {
	return ( (const MiqtVirtualQGraphicsAnchorLayout*)(self) )->virtualbase_count();
}

bool QGraphicsAnchorLayout_override_virtual_itemAt(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsAnchorLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsAnchorLayout*>( (QGraphicsAnchorLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__itemAt = slot;
	return true;
}

QGraphicsLayoutItem* QGraphicsAnchorLayout_virtualbase_itemAt(const void* self, int index) {
	return ( (const MiqtVirtualQGraphicsAnchorLayout*)(self) )->virtualbase_itemAt(index);
}

bool QGraphicsAnchorLayout_override_virtual_invalidate(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsAnchorLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsAnchorLayout*>( (QGraphicsAnchorLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__invalidate = slot;
	return true;
}

void QGraphicsAnchorLayout_virtualbase_invalidate(void* self) {
	( (MiqtVirtualQGraphicsAnchorLayout*)(self) )->virtualbase_invalidate();
}

bool QGraphicsAnchorLayout_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsAnchorLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsAnchorLayout*>( (QGraphicsAnchorLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSizeF* QGraphicsAnchorLayout_virtualbase_sizeHint(const void* self, int which, QSizeF* constraint) {
	return ( (const MiqtVirtualQGraphicsAnchorLayout*)(self) )->virtualbase_sizeHint(which, constraint);
}

bool QGraphicsAnchorLayout_override_virtual_getContentsMargins(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsAnchorLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsAnchorLayout*>( (QGraphicsAnchorLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__getContentsMargins = slot;
	return true;
}

void QGraphicsAnchorLayout_virtualbase_getContentsMargins(const void* self, double* left, double* top, double* right, double* bottom) {
	( (const MiqtVirtualQGraphicsAnchorLayout*)(self) )->virtualbase_getContentsMargins(left, top, right, bottom);
}

bool QGraphicsAnchorLayout_override_virtual_updateGeometry(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsAnchorLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsAnchorLayout*>( (QGraphicsAnchorLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateGeometry = slot;
	return true;
}

void QGraphicsAnchorLayout_virtualbase_updateGeometry(void* self) {
	( (MiqtVirtualQGraphicsAnchorLayout*)(self) )->virtualbase_updateGeometry();
}

bool QGraphicsAnchorLayout_override_virtual_widgetEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsAnchorLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsAnchorLayout*>( (QGraphicsAnchorLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__widgetEvent = slot;
	return true;
}

void QGraphicsAnchorLayout_virtualbase_widgetEvent(void* self, QEvent* e) {
	( (MiqtVirtualQGraphicsAnchorLayout*)(self) )->virtualbase_widgetEvent(e);
}

void QGraphicsAnchorLayout_protectedbase_addChildLayoutItem(bool* _dynamic_cast_ok, void* self, QGraphicsLayoutItem* layoutItem) {
	MiqtVirtualQGraphicsAnchorLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsAnchorLayout*>( (QGraphicsAnchorLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->addChildLayoutItem(layoutItem);

}

void QGraphicsAnchorLayout_protectedbase_setGraphicsItem(bool* _dynamic_cast_ok, void* self, QGraphicsItem* item) {
	MiqtVirtualQGraphicsAnchorLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsAnchorLayout*>( (QGraphicsAnchorLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setGraphicsItem(item);

}

void QGraphicsAnchorLayout_protectedbase_setOwnedByLayout(bool* _dynamic_cast_ok, void* self, bool ownedByLayout) {
	MiqtVirtualQGraphicsAnchorLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsAnchorLayout*>( (QGraphicsAnchorLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setOwnedByLayout(ownedByLayout);

}

void QGraphicsAnchorLayout_delete(QGraphicsAnchorLayout* self) {
	delete self;
}

