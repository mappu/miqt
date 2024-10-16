#include <QMapDataBase>
#include <QMapNodeBase>
#include <qmap.h>
#include "gen_qmap.h"
#include "_cgo_export.h"

QMapNodeBase* QMapNodeBase_new(QMapNodeBase* param1) {
	return new QMapNodeBase(*param1);
}

QMapNodeBase* QMapNodeBase_NextNode(const QMapNodeBase* self) {
	return (QMapNodeBase*) self->nextNode();
}

QMapNodeBase* QMapNodeBase_NextNode2(QMapNodeBase* self) {
	return self->nextNode();
}

QMapNodeBase* QMapNodeBase_PreviousNode(const QMapNodeBase* self) {
	return (QMapNodeBase*) self->previousNode();
}

QMapNodeBase* QMapNodeBase_PreviousNode2(QMapNodeBase* self) {
	return self->previousNode();
}

int QMapNodeBase_Color(const QMapNodeBase* self) {
	QMapNodeBase::Color _ret = self->color();
	return static_cast<int>(_ret);
}

void QMapNodeBase_SetColor(QMapNodeBase* self, int c) {
	self->setColor(static_cast<QMapNodeBase::Color>(c));
}

QMapNodeBase* QMapNodeBase_Parent(const QMapNodeBase* self) {
	return self->parent();
}

void QMapNodeBase_SetParent(QMapNodeBase* self, QMapNodeBase* pp) {
	self->setParent(pp);
}

void QMapNodeBase_OperatorAssign(QMapNodeBase* self, QMapNodeBase* param1) {
	self->operator=(*param1);
}

void QMapNodeBase_Delete(QMapNodeBase* self) {
	delete self;
}

void QMapDataBase_RotateLeft(QMapDataBase* self, QMapNodeBase* x) {
	self->rotateLeft(x);
}

void QMapDataBase_RotateRight(QMapDataBase* self, QMapNodeBase* x) {
	self->rotateRight(x);
}

void QMapDataBase_Rebalance(QMapDataBase* self, QMapNodeBase* x) {
	self->rebalance(x);
}

void QMapDataBase_FreeNodeAndRebalance(QMapDataBase* self, QMapNodeBase* z) {
	self->freeNodeAndRebalance(z);
}

void QMapDataBase_RecalcMostLeftNode(QMapDataBase* self) {
	self->recalcMostLeftNode();
}

QMapNodeBase* QMapDataBase_CreateNode(QMapDataBase* self, int size, int alignment, QMapNodeBase* parent, bool left) {
	return self->createNode(static_cast<int>(size), static_cast<int>(alignment), parent, left);
}

void QMapDataBase_FreeTree(QMapDataBase* self, QMapNodeBase* root, int alignment) {
	self->freeTree(root, static_cast<int>(alignment));
}

QMapDataBase* QMapDataBase_CreateData() {
	return QMapDataBase::createData();
}

void QMapDataBase_FreeData(QMapDataBase* d) {
	QMapDataBase::freeData(d);
}

void QMapDataBase_Delete(QMapDataBase* self) {
	delete self;
}

