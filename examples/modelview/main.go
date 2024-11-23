package main

import (
	"fmt"
	"os"

	"github.com/mappu/miqt/qt"
)

func main() {
	qt.NewQApplication(os.Args)

	model := qt.NewQAbstractListModel()

	model.OnRowCount(func(parent *qt.QModelIndex) int {
		return 1000
	})

	model.OnData(func(idx *qt.QModelIndex, role int) *qt.QVariant {
		if !idx.IsValid() {
			return qt.NewQVariant()
		}

		switch qt.ItemDataRole(role) {
		case qt.DisplayRole:
			return qt.NewQVariant14(fmt.Sprintf("this is row %d", idx.Row()))

		default:
			return qt.NewQVariant()
		}
	})

	v := qt.NewQListView2()
	v.SetModel(model.QAbstractItemModel)
	v.Show()

	qt.QApplication_Exec()
}
