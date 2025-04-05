package main

import (
	"fmt"
	"os"

	qt "github.com/mappu/miqt/qt6"
	"github.com/mappu/miqt/qt6/qml"
)

func main() {
	qt.NewQApplication(os.Args)

	engine := qml.NewQQmlApplicationEngine()

	url := qt.QUrl_FromLocalFile("main.qml")

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

	engine.RootContext().SetContextProperty("myModel", model.QObject)

	engine.Load(url);

	qt.QApplication_Exec()
}
