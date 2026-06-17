package main

import (
	qt "github.com/mappu/miqt/qt6"
	"slices"
	"unsafe"
)

func GetModel(parent *qt.QObject) (*qt.QAbstractItemModel, *TreeItem) {
	model := qt.NewQAbstractItemModel2(parent)

	data := make([]*TreeCell, 0)
	data = append(data, NewTreeCell(qt.DisplayRole, *qt.NewQVariant11("Name")))
	data = append(data, NewTreeCell(qt.DisplayRole, *qt.NewQVariant11("Size")))
	rootItem := NewTreeItem(data, nil, true)

	model.OnData(func(index *qt.QModelIndex, role int) *qt.QVariant {
		if !index.IsValid() {
			return qt.NewQVariant()
		}
		if !slices.Contains([]qt.ItemDataRole{qt.DisplayRole, qt.UserRole}, qt.ItemDataRole(role)) {
			return qt.NewQVariant()
		}
		item := (*TreeItem)(index.InternalPointer())
		return item.Data(index.Column(), qt.ItemDataRole(role))
	})

	model.OnHeaderData(func(super func(section int, orientation qt.Orientation, role int) *qt.QVariant, section int, orientation qt.Orientation, role int) *qt.QVariant {
		if qt.ItemDataRole(role) != qt.DisplayRole {
			return qt.NewQVariant()
		}
		if orientation == qt.Horizontal && role == int(qt.DisplayRole) {
			return rootItem.Data(section, qt.DisplayRole)
		}
		return qt.NewQVariant()
	})

	model.OnIndex(func(row int, column int, parent *qt.QModelIndex) *qt.QModelIndex {
		if !model.HasIndex3(row, column, parent) {
			return qt.NewQModelIndex()
		}
		var parentItem *TreeItem
		if !parent.IsValid() {
			parentItem = &rootItem
		} else {
			parentItem = (*TreeItem)(parent.InternalPointer())
		}
		child, err := parentItem.Child(row)
		if err != nil {
			return qt.NewQModelIndex()
		}
		newIndex := model.CreateIndex2(row, column, uintptr(unsafe.Pointer(child)))
		return &newIndex
	})

	model.OnParent(func(child *qt.QModelIndex) *qt.QModelIndex {
		if !child.IsValid() {
			return qt.NewQModelIndex()
		}
		parentItem := (*TreeItem)(child.InternalPointer()).ParentItem()
		if parentItem != &rootItem {
			row, err := parentItem.Row()
			if err != nil {
				return qt.NewQModelIndex()
			}
			index := model.CreateIndex2(row, 0, uintptr(unsafe.Pointer(parentItem)))
			return &index
		}
		return qt.NewQModelIndex()
	})

	model.OnRowCount(func(parent *qt.QModelIndex) int {
		if parent.Column() > 0 {
			return 0
		}
		var item *TreeItem
		if !parent.IsValid() {
			item = &rootItem
		} else {
			item = (*TreeItem)(parent.InternalPointer())
		}
		return item.ChildCount()
	})

	model.OnColumnCount(func(parent *qt.QModelIndex) int {
		if parent.IsValid() {
			item := (*TreeItem)(parent.InternalPointer())
			return item.ColumnCount()
		}
		return rootItem.ColumnCount()
	})

	return model, &rootItem
}
