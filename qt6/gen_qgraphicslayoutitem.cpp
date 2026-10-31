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

void miqt_exec_callback_QGraphicsLayoutItem_setGeometry(QGraphicsLayoutItem*, intptr_t, struct miqt_qrectf);
void miqt_exec_callback_QGraphicsLayoutItem_getContentsMargins(const QGraphicsLayoutItem*, intptr_t, double*, double*, double*, double*);
void miqt_exec_callback_QGraphicsLayoutItem_updateGeometry(QGraphicsLayoutItem*, intptr_t);
bool miqt_exec_callback_QGraphicsLayoutItem_isEmpty(const QGraphicsLayoutItem*, intptr_t);
struct miqt_qsizef miqt_exec_callback_QGraphicsLayoutItem_sizeHint(const QGraphicsLayoutItem*, intptr_t, int, struct miqt_qsizef);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQGraphicsLayoutItem final : public QGraphicsLayoutItem {
public:

	MiqtVirtualQGraphicsLayoutItem(): QGraphicsLayoutItem() {}
	MiqtVirtualQGraphicsLayoutItem(QGraphicsLayoutItem* parent): QGraphicsLayoutItem(parent) {}
	MiqtVirtualQGraphicsLayoutItem(QGraphicsLayoutItem* parent, bool isLayout): QGraphicsLayoutItem(parent, isLayout) {}

	virtual ~MiqtVirtualQGraphicsLayoutItem() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void setGeometry(const QRectF& rect) override {
		if (handle__setGeometry == 0) {
			QGraphicsLayoutItem::setGeometry(rect);
			return;
		}

		struct miqt_qrectf sigval1 = miqt_to_cabi<struct miqt_qrectf>(rect);
		miqt_exec_callback_QGraphicsLayoutItem_setGeometry(this, handle__setGeometry, sigval1);

	}

	friend void QGraphicsLayoutItem_virtualbase_setGeometry(void* self, struct miqt_qrectf rect);

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

	friend void QGraphicsLayoutItem_virtualbase_getContentsMargins(const void* self, double* left, double* top, double* right, double* bottom);

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

	friend void QGraphicsLayoutItem_virtualbase_updateGeometry(void* self);

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

	friend bool QGraphicsLayoutItem_virtualbase_isEmpty(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
		if (handle__sizeHint == 0) {
			return QSizeF(); // Pure virtual, there is no base we can call
		}

		Qt::SizeHint which_ret = which;
		int sigval1 = static_cast<int>(which_ret);
		struct miqt_qsizef sigval2 = miqt_to_cabi<struct miqt_qsizef>(constraint);
		struct miqt_qsizef callback_return_value = miqt_exec_callback_QGraphicsLayoutItem_sizeHint(this, handle__sizeHint, sigval1, sigval2);
		return miqt_from_cabi<QSizeF>(callback_return_value);
	}

	// Wrappers to allow calling protected methods:
	friend void QGraphicsLayoutItem_protectedbase_setGraphicsItem(bool* _dynamic_cast_ok, void* self, QGraphicsItem* item);
	friend void QGraphicsLayoutItem_protectedbase_setOwnedByLayout(bool* _dynamic_cast_ok, void* self, bool ownedByLayout);
};

QGraphicsLayoutItem* QGraphicsLayoutItem_new() {
	return new (std::nothrow) MiqtVirtualQGraphicsLayoutItem();
}

QGraphicsLayoutItem* QGraphicsLayoutItem_new2(QGraphicsLayoutItem* parent) {
	return new (std::nothrow) MiqtVirtualQGraphicsLayoutItem(parent);
}

QGraphicsLayoutItem* QGraphicsLayoutItem_new3(QGraphicsLayoutItem* parent, bool isLayout) {
	return new (std::nothrow) MiqtVirtualQGraphicsLayoutItem(parent, isLayout);
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

void QGraphicsLayoutItem_setMinimumSize(QGraphicsLayoutItem* self, struct miqt_qsizef size) {
	self->setMinimumSize(miqt_from_cabi<QSizeF>(size));
}

void QGraphicsLayoutItem_setMinimumSize2(QGraphicsLayoutItem* self, double w, double h) {
	self->setMinimumSize(static_cast<qreal>(w), static_cast<qreal>(h));
}

struct miqt_qsizef QGraphicsLayoutItem_minimumSize(const QGraphicsLayoutItem* self) {
	return miqt_to_cabi<struct miqt_qsizef>(self->minimumSize());
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

void QGraphicsLayoutItem_setPreferredSize(QGraphicsLayoutItem* self, struct miqt_qsizef size) {
	self->setPreferredSize(miqt_from_cabi<QSizeF>(size));
}

void QGraphicsLayoutItem_setPreferredSize2(QGraphicsLayoutItem* self, double w, double h) {
	self->setPreferredSize(static_cast<qreal>(w), static_cast<qreal>(h));
}

struct miqt_qsizef QGraphicsLayoutItem_preferredSize(const QGraphicsLayoutItem* self) {
	return miqt_to_cabi<struct miqt_qsizef>(self->preferredSize());
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

void QGraphicsLayoutItem_setMaximumSize(QGraphicsLayoutItem* self, struct miqt_qsizef size) {
	self->setMaximumSize(miqt_from_cabi<QSizeF>(size));
}

void QGraphicsLayoutItem_setMaximumSize2(QGraphicsLayoutItem* self, double w, double h) {
	self->setMaximumSize(static_cast<qreal>(w), static_cast<qreal>(h));
}

struct miqt_qsizef QGraphicsLayoutItem_maximumSize(const QGraphicsLayoutItem* self) {
	return miqt_to_cabi<struct miqt_qsizef>(self->maximumSize());
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

void QGraphicsLayoutItem_setGeometry(QGraphicsLayoutItem* self, struct miqt_qrectf rect) {
	self->setGeometry(miqt_from_cabi<QRectF>(rect));
}

struct miqt_qrectf QGraphicsLayoutItem_geometry(const QGraphicsLayoutItem* self) {
	return miqt_to_cabi<struct miqt_qrectf>(self->geometry());
}

void QGraphicsLayoutItem_getContentsMargins(const QGraphicsLayoutItem* self, double* left, double* top, double* right, double* bottom) {
	self->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
}

struct miqt_qrectf QGraphicsLayoutItem_contentsRect(const QGraphicsLayoutItem* self) {
	return miqt_to_cabi<struct miqt_qrectf>(self->contentsRect());
}

struct miqt_qsizef QGraphicsLayoutItem_effectiveSizeHint(const QGraphicsLayoutItem* self, int which) {
	return miqt_to_cabi<struct miqt_qsizef>(self->effectiveSizeHint(static_cast<Qt::SizeHint>(which)));
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

struct miqt_qsizef QGraphicsLayoutItem_effectiveSizeHint2(const QGraphicsLayoutItem* self, int which, struct miqt_qsizef constraint) {
	return miqt_to_cabi<struct miqt_qsizef>(self->effectiveSizeHint(static_cast<Qt::SizeHint>(which), miqt_from_cabi<QSizeF>(constraint)));
}

bool QGraphicsLayoutItem_override_virtual_setGeometry(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLayoutItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLayoutItem*>( (QGraphicsLayoutItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setGeometry = slot;
	return true;
}

void QGraphicsLayoutItem_virtualbase_setGeometry(void* self, struct miqt_qrectf rect) {
	static_cast<MiqtVirtualQGraphicsLayoutItem*>(self)->QGraphicsLayoutItem::setGeometry(miqt_from_cabi<QRectF>(rect));
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
	static_cast<const MiqtVirtualQGraphicsLayoutItem*>(self)->QGraphicsLayoutItem::getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
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
	static_cast<MiqtVirtualQGraphicsLayoutItem*>(self)->QGraphicsLayoutItem::updateGeometry();
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
	return static_cast<const MiqtVirtualQGraphicsLayoutItem*>(self)->QGraphicsLayoutItem::isEmpty();
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

