#include <QGraphicsItem>
#include <QGraphicsLayoutItem>
#include <QRectF>
#include <QSizeF>
#include <QSizePolicy>
#include <qgraphicslayoutitem.h>
#include "gen_qgraphicslayoutitem.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QGraphicsLayoutItem_setGeometry(QGraphicsLayoutItem*, intptr_t, QRectF*);
void miqt_exec_callback_QGraphicsLayoutItem_getContentsMargins(const QGraphicsLayoutItem*, intptr_t, double*, double*, double*, double*);
void miqt_exec_callback_QGraphicsLayoutItem_updateGeometry(QGraphicsLayoutItem*, intptr_t);
bool miqt_exec_callback_QGraphicsLayoutItem_isEmpty(const QGraphicsLayoutItem*, intptr_t);
QSizeF* miqt_exec_callback_QGraphicsLayoutItem_sizeHint(const QGraphicsLayoutItem*, intptr_t, int, QSizeF*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQGraphicsLayoutItem final : public QGraphicsLayoutItem {
public:

	MiqtVirtualQGraphicsLayoutItem(): QGraphicsLayoutItem() {};
	MiqtVirtualQGraphicsLayoutItem(QGraphicsLayoutItem* parent): QGraphicsLayoutItem(parent) {};
	MiqtVirtualQGraphicsLayoutItem(QGraphicsLayoutItem* parent, bool isLayout): QGraphicsLayoutItem(parent, isLayout) {};

	virtual ~MiqtVirtualQGraphicsLayoutItem() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void setGeometry(const QRectF& rect) override {
		if (handle__setGeometry == 0) {
			QGraphicsLayoutItem::setGeometry(rect);
			return;
		}
		
		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&rect_ret);

		miqt_exec_callback_QGraphicsLayoutItem_setGeometry(this, handle__setGeometry, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setGeometry(QRectF* rect) {

		QGraphicsLayoutItem::setGeometry(*rect);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__getContentsMargins = 0;

	// Subclass to allow providing a Go implementation
	virtual void getContentsMargins(qreal* left, qreal* top, qreal* right, qreal* bottom) const override {
		if (handle__getContentsMargins == 0) {
			QGraphicsLayoutItem::getContentsMargins(left, top, right, bottom);
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

		miqt_exec_callback_QGraphicsLayoutItem_getContentsMargins(this, handle__getContentsMargins, sigval1, sigval2, sigval3, sigval4);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_getContentsMargins(double* left, double* top, double* right, double* bottom) const {

		QGraphicsLayoutItem::getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateGeometry() override {
		if (handle__updateGeometry == 0) {
			QGraphicsLayoutItem::updateGeometry();
			return;
		}
		

		miqt_exec_callback_QGraphicsLayoutItem_updateGeometry(this, handle__updateGeometry);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateGeometry() {

		QGraphicsLayoutItem::updateGeometry();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isEmpty = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isEmpty() const override {
		if (handle__isEmpty == 0) {
			return QGraphicsLayoutItem::isEmpty();
		}
		

		bool callback_return_value = miqt_exec_callback_QGraphicsLayoutItem_isEmpty(this, handle__isEmpty);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_isEmpty() const {

		return QGraphicsLayoutItem::isEmpty();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
		if (handle__sizeHint == 0) {
			return QSizeF(); // Pure virtual, there is no base we can call
		}
		
		Qt::SizeHint which_ret = which;
		int sigval1 = static_cast<int>(which_ret);
		const QSizeF& constraint_ret = constraint;
		// Cast returned reference into pointer
		QSizeF* sigval2 = const_cast<QSizeF*>(&constraint_ret);

		QSizeF* callback_return_value = miqt_exec_callback_QGraphicsLayoutItem_sizeHint(this, handle__sizeHint, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrappers to allow calling protected methods:
	friend void QGraphicsLayoutItem_protectedbase_setGraphicsItem(bool* _dynamic_cast_ok, void* self, QGraphicsItem* item);
	friend void QGraphicsLayoutItem_protectedbase_setOwnedByLayout(bool* _dynamic_cast_ok, void* self, bool ownedByLayout);
};

QGraphicsLayoutItem* QGraphicsLayoutItem_new() {
	return new MiqtVirtualQGraphicsLayoutItem();
}

QGraphicsLayoutItem* QGraphicsLayoutItem_new2(QGraphicsLayoutItem* parent) {
	return new MiqtVirtualQGraphicsLayoutItem(parent);
}

QGraphicsLayoutItem* QGraphicsLayoutItem_new3(QGraphicsLayoutItem* parent, bool isLayout) {
	return new MiqtVirtualQGraphicsLayoutItem(parent, isLayout);
}

void QGraphicsLayoutItem_setSizePolicy(QGraphicsLayoutItem* self, QSizePolicy* policy) {
	self->setSizePolicy(*policy);
}

void QGraphicsLayoutItem_setSizePolicy2(QGraphicsLayoutItem* self, int hPolicy, int vPolicy) {
	self->setSizePolicy(static_cast<QSizePolicy::Policy>(hPolicy), static_cast<QSizePolicy::Policy>(vPolicy));
}

QSizePolicy* QGraphicsLayoutItem_sizePolicy(const QGraphicsLayoutItem* self) {
	return new QSizePolicy(self->sizePolicy());
}

void QGraphicsLayoutItem_setMinimumSize(QGraphicsLayoutItem* self, QSizeF* size) {
	self->setMinimumSize(*size);
}

void QGraphicsLayoutItem_setMinimumSize2(QGraphicsLayoutItem* self, double w, double h) {
	self->setMinimumSize(static_cast<qreal>(w), static_cast<qreal>(h));
}

QSizeF* QGraphicsLayoutItem_minimumSize(const QGraphicsLayoutItem* self) {
	return new QSizeF(self->minimumSize());
}

void QGraphicsLayoutItem_setMinimumWidth(QGraphicsLayoutItem* self, double width) {
	self->setMinimumWidth(static_cast<qreal>(width));
}

double QGraphicsLayoutItem_minimumWidth(const QGraphicsLayoutItem* self) {
	qreal _ret = self->minimumWidth();
	return static_cast<double>(_ret);
}

void QGraphicsLayoutItem_setMinimumHeight(QGraphicsLayoutItem* self, double height) {
	self->setMinimumHeight(static_cast<qreal>(height));
}

double QGraphicsLayoutItem_minimumHeight(const QGraphicsLayoutItem* self) {
	qreal _ret = self->minimumHeight();
	return static_cast<double>(_ret);
}

void QGraphicsLayoutItem_setPreferredSize(QGraphicsLayoutItem* self, QSizeF* size) {
	self->setPreferredSize(*size);
}

void QGraphicsLayoutItem_setPreferredSize2(QGraphicsLayoutItem* self, double w, double h) {
	self->setPreferredSize(static_cast<qreal>(w), static_cast<qreal>(h));
}

QSizeF* QGraphicsLayoutItem_preferredSize(const QGraphicsLayoutItem* self) {
	return new QSizeF(self->preferredSize());
}

void QGraphicsLayoutItem_setPreferredWidth(QGraphicsLayoutItem* self, double width) {
	self->setPreferredWidth(static_cast<qreal>(width));
}

double QGraphicsLayoutItem_preferredWidth(const QGraphicsLayoutItem* self) {
	qreal _ret = self->preferredWidth();
	return static_cast<double>(_ret);
}

void QGraphicsLayoutItem_setPreferredHeight(QGraphicsLayoutItem* self, double height) {
	self->setPreferredHeight(static_cast<qreal>(height));
}

double QGraphicsLayoutItem_preferredHeight(const QGraphicsLayoutItem* self) {
	qreal _ret = self->preferredHeight();
	return static_cast<double>(_ret);
}

void QGraphicsLayoutItem_setMaximumSize(QGraphicsLayoutItem* self, QSizeF* size) {
	self->setMaximumSize(*size);
}

void QGraphicsLayoutItem_setMaximumSize2(QGraphicsLayoutItem* self, double w, double h) {
	self->setMaximumSize(static_cast<qreal>(w), static_cast<qreal>(h));
}

QSizeF* QGraphicsLayoutItem_maximumSize(const QGraphicsLayoutItem* self) {
	return new QSizeF(self->maximumSize());
}

void QGraphicsLayoutItem_setMaximumWidth(QGraphicsLayoutItem* self, double width) {
	self->setMaximumWidth(static_cast<qreal>(width));
}

double QGraphicsLayoutItem_maximumWidth(const QGraphicsLayoutItem* self) {
	qreal _ret = self->maximumWidth();
	return static_cast<double>(_ret);
}

void QGraphicsLayoutItem_setMaximumHeight(QGraphicsLayoutItem* self, double height) {
	self->setMaximumHeight(static_cast<qreal>(height));
}

double QGraphicsLayoutItem_maximumHeight(const QGraphicsLayoutItem* self) {
	qreal _ret = self->maximumHeight();
	return static_cast<double>(_ret);
}

void QGraphicsLayoutItem_setGeometry(QGraphicsLayoutItem* self, QRectF* rect) {
	self->setGeometry(*rect);
}

QRectF* QGraphicsLayoutItem_geometry(const QGraphicsLayoutItem* self) {
	return new QRectF(self->geometry());
}

void QGraphicsLayoutItem_getContentsMargins(const QGraphicsLayoutItem* self, double* left, double* top, double* right, double* bottom) {
	self->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
}

QRectF* QGraphicsLayoutItem_contentsRect(const QGraphicsLayoutItem* self) {
	return new QRectF(self->contentsRect());
}

QSizeF* QGraphicsLayoutItem_effectiveSizeHint(const QGraphicsLayoutItem* self, int which) {
	return new QSizeF(self->effectiveSizeHint(static_cast<Qt::SizeHint>(which)));
}

void QGraphicsLayoutItem_updateGeometry(QGraphicsLayoutItem* self) {
	self->updateGeometry();
}

bool QGraphicsLayoutItem_isEmpty(const QGraphicsLayoutItem* self) {
	return self->isEmpty();
}

QGraphicsLayoutItem* QGraphicsLayoutItem_parentLayoutItem(const QGraphicsLayoutItem* self) {
	return self->parentLayoutItem();
}

void QGraphicsLayoutItem_setParentLayoutItem(QGraphicsLayoutItem* self, QGraphicsLayoutItem* parent) {
	self->setParentLayoutItem(parent);
}

bool QGraphicsLayoutItem_isLayout(const QGraphicsLayoutItem* self) {
	return self->isLayout();
}

QGraphicsItem* QGraphicsLayoutItem_graphicsItem(const QGraphicsLayoutItem* self) {
	return self->graphicsItem();
}

bool QGraphicsLayoutItem_ownedByLayout(const QGraphicsLayoutItem* self) {
	return self->ownedByLayout();
}

void QGraphicsLayoutItem_setSizePolicy3(QGraphicsLayoutItem* self, int hPolicy, int vPolicy, int controlType) {
	self->setSizePolicy(static_cast<QSizePolicy::Policy>(hPolicy), static_cast<QSizePolicy::Policy>(vPolicy), static_cast<QSizePolicy::ControlType>(controlType));
}

QSizeF* QGraphicsLayoutItem_effectiveSizeHint2(const QGraphicsLayoutItem* self, int which, QSizeF* constraint) {
	return new QSizeF(self->effectiveSizeHint(static_cast<Qt::SizeHint>(which), *constraint));
}

bool QGraphicsLayoutItem_override_virtual_setGeometry(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLayoutItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLayoutItem*>( (QGraphicsLayoutItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setGeometry = slot;
	return true;
}

void QGraphicsLayoutItem_virtualbase_setGeometry(void* self, QRectF* rect) {
	( (MiqtVirtualQGraphicsLayoutItem*)(self) )->virtualbase_setGeometry(rect);
}

bool QGraphicsLayoutItem_override_virtual_getContentsMargins(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLayoutItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLayoutItem*>( (QGraphicsLayoutItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__getContentsMargins = slot;
	return true;
}

void QGraphicsLayoutItem_virtualbase_getContentsMargins(const void* self, double* left, double* top, double* right, double* bottom) {
	( (const MiqtVirtualQGraphicsLayoutItem*)(self) )->virtualbase_getContentsMargins(left, top, right, bottom);
}

bool QGraphicsLayoutItem_override_virtual_updateGeometry(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLayoutItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLayoutItem*>( (QGraphicsLayoutItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateGeometry = slot;
	return true;
}

void QGraphicsLayoutItem_virtualbase_updateGeometry(void* self) {
	( (MiqtVirtualQGraphicsLayoutItem*)(self) )->virtualbase_updateGeometry();
}

bool QGraphicsLayoutItem_override_virtual_isEmpty(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLayoutItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLayoutItem*>( (QGraphicsLayoutItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isEmpty = slot;
	return true;
}

bool QGraphicsLayoutItem_virtualbase_isEmpty(const void* self) {
	return ( (const MiqtVirtualQGraphicsLayoutItem*)(self) )->virtualbase_isEmpty();
}

bool QGraphicsLayoutItem_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLayoutItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLayoutItem*>( (QGraphicsLayoutItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

void QGraphicsLayoutItem_protectedbase_setGraphicsItem(bool* _dynamic_cast_ok, void* self, QGraphicsItem* item) {
	MiqtVirtualQGraphicsLayoutItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLayoutItem*>( (QGraphicsLayoutItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setGraphicsItem(item);

}

void QGraphicsLayoutItem_protectedbase_setOwnedByLayout(bool* _dynamic_cast_ok, void* self, bool ownedByLayout) {
	MiqtVirtualQGraphicsLayoutItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLayoutItem*>( (QGraphicsLayoutItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setOwnedByLayout(ownedByLayout);

}

void QGraphicsLayoutItem_delete(QGraphicsLayoutItem* self) {
	delete self;
}

