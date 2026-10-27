package main

import (
	"fmt"
	"slices"

	qt "github.com/mappu/miqt/qt6"
)

type TreeItem struct {
	data     []*TreeCell
	parent   *TreeItem
	children []*TreeItem
	isRoot   bool
}

func NewTreeItem(data []*TreeCell, parent *TreeItem, isRoot bool) TreeItem {
	return TreeItem{
		data:   data,
		parent: parent,
		isRoot: isRoot,
	}
}

func (self *TreeItem) IsRoot() bool {
	return self.isRoot
}

func (self *TreeItem) AppendChild(child *TreeItem) {
	self.children = append(self.children, child)
}

func (self *TreeItem) Child(row int) (*TreeItem, error) {
	if row >= 0 && row <= self.ChildCount() {
		return self.children[row], nil
	}
	return nil, fmt.Errorf("TreeItem does not have child at row %d", row)
}

func (self *TreeItem) ColumnCount() int {
	return len(self.data)
}

func (self *TreeItem) ChildCount() int {
	return len(self.children)
}

func (self *TreeItem) Data(column int, role qt.ItemDataRole) *qt.QVariant {
	if column >= 0 && column < len(self.data) {
		if !slices.Contains([]qt.ItemDataRole{qt.DisplayRole, qt.UserRole}, role) {
			return qt.NewQVariant()
		}
		return self.data[column].Data(role)
	}
	return qt.NewQVariant()
}

func (self *TreeItem) SetData(column int, value *qt.QVariant, role qt.ItemDataRole) error {
	if column >= 0 && column < len(self.data) {
		self.data[column].SetData(*value, role)
	} else {
		cell := NewTreeCell(role, *value)
		self.data = append(self.data, cell)
	}
	return nil
}

func (self *TreeItem) Row() (int, error) {
	if self.parent == nil {
		return 0, nil
	}
	for index, child := range self.parent.children {
		if child == self {
			return index, nil
		}
	}
	return 0, fmt.Errorf("could not find child in its parent")
}

func (self *TreeItem) ParentItem() *TreeItem {
	return self.parent
}
