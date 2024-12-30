package main

import (
	"fmt"
	"os"

	qt "github.com/mappu/miqt/qt6"
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
		case qt.ForegroundRole:
			if idx.Row() % 2 == 0 {
				return qt.NewQVariant4099(qt.NewQColor3(0, 0, 0))
			} else {
				return qt.NewQVariant4099(qt.NewQColor3(255, 0, 0))
			}
		case qt.BackgroundRole:
			if idx.Row() % 2 == 0 {
				return qt.NewQVariant4099(qt.NewQColor3(255, 255, 255))
			} else {
				return qt.NewQVariant4099(qt.NewQColor3(80, 80, 80))
			}
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
