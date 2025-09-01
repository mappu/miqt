package main

import (
	"os"

	"github.com/mappu/miqt/qt"
	"github.com/mappu/miqt/qt/sql"
)

var mapper *qt.QDataWidgetMapper
var nextButton *qt.QPushButton
var previousButton *qt.QPushButton
var model *sql.QSqlRelationalTableModel

func main() {

	qt.NewQApplication(os.Args)

	widget := qt.NewQWidget2()
	defer widget.Delete()

	db := sql.QSqlDatabase_AddDatabase("QSQLITE")
	defer db.Delete()

	db.SetDatabaseName(":memory:")
	if !db.Open() {
		qt.QMessageBox_Critical5(
			widget,
			"Cannot open database",
			"Unable to establish a database connection.\nThis example needs SQLite support. Please read the Qt SQL driver documentation for information on how to build it.",
			qt.QMessageBox__Cancel,
		)
		os.Exit(1)
	}

	query := sql.NewQSqlQuery2()
	defer query.Delete()

	// Setup the main table
	query.Exec("create table person (id int primary key, name varchar(20), address varchar(200), typeid int)")
	query.Exec("insert into person values(1, 'Alice', '<qt>123 Main Street<br/>Market Town</qt>', 101)")
	query.Exec("insert into person values(2, 'Bob', '<qt>PO Box 32<br/>Mail Handling Service<br/>Service City</qt>', 102)")
	query.Exec("insert into person values(3, 'Carol', '<qt>The Lighthouse<br/>Remote Island</qt>', 103)")
	query.Exec("insert into person values(4, 'Donald', '<qt>47338 Park Avenue<br/>Big City</qt>', 101)")
	query.Exec("insert into person values(5, 'Emma', '<qt>Research Station<br/>Base Camp<br/>Big Mountain</qt>', 103)")

	// Setup the address table
	query.Exec("create table addresstype (id int, description varchar(20))")
	query.Exec("insert into addresstype values(101, 'Home')")
	query.Exec("insert into addresstype values(102, 'Work')")
	query.Exec("insert into addresstype values(103, 'Other')")

	model = sql.NewQSqlRelationalTableModel2(widget.QObject)
	model.SetTable("person")
	model.SetEditStrategy(sql.QSqlTableModel__OnManualSubmit)

	typeIndex := model.FieldIndex("typeid")
	relation := sql.NewQSqlRelation2("addresstype", "id", "description")
	defer relation.Delete()
	model.SetRelation(typeIndex, relation)

	model.Select()

	// Ownership of these widgets will be transferred to the widget via the layout
	nameLabel := qt.NewQLabel3("Na&me:")
	nameEdit := qt.NewQLineEdit2()
	addressLabel := qt.NewQLabel3("&Address:")
	addressEdit := qt.NewQTextEdit2()
	typeLabel := qt.NewQLabel3("&Type:")
	typeComboBox := qt.NewQComboBox2()
	nextButton = qt.NewQPushButton3("&Next")
	previousButton = qt.NewQPushButton3("&Previous")

	nameLabel.SetBuddy(nameEdit.QWidget)
	addressLabel.SetBuddy(addressEdit.QWidget)
	typeLabel.SetBuddy(typeComboBox.QWidget)

	relModel := model.RelationModel(typeIndex)
	typeComboBox.SetModel(relModel.QAbstractItemModel)
	typeComboBox.SetModelColumn(relModel.FieldIndex("description"))

	mapper = qt.NewQDataWidgetMapper2(widget.QObject)
	mapper.SetModel(model.QAbstractItemModel)
	relationalDelegate := qt.NewQStyledItemDelegate2(mapper.QObject)
	mapper.SetItemDelegate(relationalDelegate.QAbstractItemDelegate)
	mapper.AddMapping(nameEdit.QWidget, model.FieldIndex("name"))
	mapper.AddMapping(addressEdit.QWidget, model.FieldIndex("address"))
	mapper.AddMapping(typeComboBox.QWidget, typeIndex)

	previousButton.OnClicked(toPrevious)
	nextButton.OnClicked(toNext)
	mapper.OnCurrentIndexChanged(updateButtons)

	layout := qt.NewQGridLayout2()
	layout.AddWidget2(nameLabel.QWidget, 0, 0)
	layout.AddWidget2(nameEdit.QWidget, 0, 1)
	layout.AddWidget2(previousButton.QWidget, 0, 2)
	layout.AddWidget2(addressLabel.QWidget, 1, 0)
	layout.AddWidget3(addressEdit.QWidget, 1, 1, 2, 1)
	layout.AddWidget2(nextButton.QWidget, 1, 2)
	layout.AddWidget2(typeLabel.QWidget, 3, 0)
	layout.AddWidget2(typeComboBox.QWidget, 3, 1)
	widget.SetLayout(layout.QLayout)

	widget.SetWindowTitle("Qt 5 SQL Widget Mapper")
	mapper.ToFirst()

	widget.Show()

	qt.QApplication_Exec()
}

func toPrevious() {
	mapper.ToPrevious()
}

func toNext() {
	mapper.ToNext()
}

func updateButtons(index int) {
	previousButton.SetEnabled(index > 0)
	modelIndex := qt.NewQModelIndex()
	defer modelIndex.Delete()
	nextButton.SetEnabled(index < model.RowCount(modelIndex)-1)
}
