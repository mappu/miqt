package main

import (
	"fmt"
	qt "github.com/mappu/miqt/qt6"
	"os"
)

func GetTreeView(parent *qt.QWidget) *qt.QTreeView {
	treeView := qt.NewQTreeView(parent)
	treeView.SetAlternatingRowColors(true)
	treeView.SetSortingEnabled(true)
	treeView.SetColumnWidth(0, 300)
	treeView.SetContentsMargins(0, 0, 0, 0)
	treeView.Header().SetDefaultSectionSize(200)
	treeView.Header().SetStretchLastSection(true)
	treeView.SetSelectionMode(qt.QAbstractItemView__ExtendedSelection)

	return treeView
}

func PopulateData(rootItem *TreeItem) {
	cellData := make([]*TreeCell, 0)
	cellData = append(cellData, NewTreeCell(qt.DisplayRole, *qt.NewQVariant11("Big File")))
	cellData = append(cellData, NewTreeCell(qt.DisplayRole, *qt.NewQVariant11("10.7 MiB")))
	item := NewTreeItem(cellData, rootItem, false)
	err := item.SetData(1, qt.NewQVariant11("11225400"), qt.UserRole)
	if err != nil {
		fmt.Printf("Error setting UserData: %v\n", err)
	}
	rootItem.AppendChild(&item)

	cellData2 := make([]*TreeCell, 0)
	cellData2 = append(cellData2, NewTreeCell(qt.DisplayRole, *qt.NewQVariant11("Small File")))
	cellData2 = append(cellData2, NewTreeCell(qt.DisplayRole, *qt.NewQVariant11("110 Bytes")))
	item2 := NewTreeItem(cellData2, rootItem, false)
	err = item2.SetData(1, qt.NewQVariant11("110"), qt.UserRole)
	if err != nil {
		fmt.Printf("Error setting UserData: %v\n", err)
	}
	rootItem.AppendChild(&item2)

	cellData3 := make([]*TreeCell, 0)
	cellData3 = append(cellData3, NewTreeCell(qt.DisplayRole, *qt.NewQVariant11("Medium File")))
	cellData3 = append(cellData3, NewTreeCell(qt.DisplayRole, *qt.NewQVariant11("109.5 KiB")))
	item3 := NewTreeItem(cellData3, rootItem, false)
	err = item3.SetData(1, qt.NewQVariant11("112200"), qt.UserRole)
	if err != nil {
		fmt.Printf("Error setting UserData: %v\n", err)
	}
	rootItem.AppendChild(&item3)
}

func GetDialog() *qt.QDialog {
	dialog := qt.NewQDialog3(nil, qt.Dialog)
	dialog.SetWindowFlags(qt.WindowStaysOnTopHint)
	dialogLayout := qt.NewQVBoxLayout2()
	dialogLayout.SetSpacing(0)
	dialogLayout.SetContentsMargins(0, 0, 0, 0)
	dialog.SetContentsMargins(10, 10, 10, 10)
	dialog.SetLayout(dialogLayout.Layout())
	dialog.SetWindowTitle("Example Sort Model Usage")

	treeView := GetTreeView(dialog.QWidget)

	// Model
	model, rootItem := GetModel(dialog.QObject)
	PopulateData(rootItem)

	sortModel := qt.NewQSortFilterProxyModel2(treeView.QObject)
	sortModel.SetSortRole(int(qt.UserRole))
	sortModel.OnLessThan(func(super func(source_left *qt.QModelIndex, source_right *qt.QModelIndex) bool, source_left *qt.QModelIndex, source_right *qt.QModelIndex) bool {
		// In our case we know that the data from our TreeItem will come back as an int for our UserRole
		leftData := sortModel.SourceModel().Data(source_left, sortModel.SortRole())
		rightData := sortModel.SourceModel().Data(source_right, sortModel.SortRole())
		return leftData.ToInt() < rightData.ToInt()
	})

	sortModel.SetSourceModel(model)
	treeView.SetModel(sortModel.QAbstractItemModel)

	dialogLayout.AddWidget3(treeView.QWidget, 0, qt.AlignCenter)
	return dialog
}

func main() {
	qt.NewQApplication(os.Args)

	dialog := GetDialog()
	dialog.Show()

	qt.QApplication_Exec()
}
