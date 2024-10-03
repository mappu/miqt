package main

func constructorFunctionFor(className string) string {

	// Rebuild this list via:
	//   grep -PRoh 'func New.+\(parent \*QWidget\)' ~/dev/miqt/qt/ | sed -re 's~^func New([^0-9]+)([0-9]*)\(.*~case "\1": return "New\1\2"~'

	switch className {

	// CODEGENERATED LIST START

	case "QListWidget":
		return "NewQListWidget2"
	case "QAbstractSpinBox":
		return "NewQAbstractSpinBox2"
	case "QStackedLayout":
		return "NewQStackedLayout2"
	case "QColumnView":
		return "NewQColumnView2"
	case "QProgressDialog":
		return "NewQProgressDialog3"
	case "QTabWidget":
		return "NewQTabWidget2"
	case "QLabel":
		return "NewQLabel3"
	case "QKeySequenceEdit":
		return "NewQKeySequenceEdit3"
	case "QDockWidget":
		return "NewQDockWidget5"
	case "QFontComboBox":
		return "NewQFontComboBox2"
	case "QTreeView":
		return "NewQTreeView2"
	case "QCalendarWidget":
		return "NewQCalendarWidget2"
	case "QLineEdit":
		return "NewQLineEdit3"
	case "QMenuBar":
		return "NewQMenuBar2"
	case "QFrame":
		return "NewQFrame2"
	case "QAbstractScrollArea":
		return "NewQAbstractScrollArea2"
	case "QSplitter":
		return "NewQSplitter3"
	case "QStackedWidget":
		return "NewQStackedWidget2"
	case "QWizard":
		return "NewQWizard2"
	case "QWizardPage":
		return "NewQWizardPage2"
	case "QMdiSubWindow":
		return "NewQMdiSubWindow2"
	case "QStatusBar":
		return "NewQStatusBar2"
	case "QToolButton":
		return "NewQToolButton2"
	case "QShortcut":
		return "NewQShortcut"
	case "QSlider":
		return "NewQSlider3"
	case "QComboBox":
		return "NewQComboBox2"
	case "QScrollBar":
		return "NewQScrollBar3"
	case "QTabBar":
		return "NewQTabBar2"
	case "QTextBrowser":
		return "NewQTextBrowser2"
	case "QTreeWidget":
		return "NewQTreeWidget2"
	case "QDialog":
		return "NewQDialog2"
	case "QFormLayout":
		return "NewQFormLayout2"
	case "QToolBar":
		return "NewQToolBar4"
	case "QWidget":
		return "NewQWidget2"
	case "QRadioButton":
		return "NewQRadioButton3"
	case "QCheckBox":
		return "NewQCheckBox3"
	case "QSizeGrip":
		return "NewQSizeGrip"
	case "QLCDNumber":
		return "NewQLCDNumber3"
	case "QFileDialog":
		return "NewQFileDialog3"
	case "QUndoView":
		return "NewQUndoView4"
	case "QGraphicsView":
		return "NewQGraphicsView3"
	case "QPushButton":
		return "NewQPushButton4"
	case "QColorDialog":
		return "NewQColorDialog3"
	case "QMessageBox":
		return "NewQMessageBox4"
	case "QSplashScreen":
		return "NewQSplashScreen3"
	case "QErrorMessage":
		return "NewQErrorMessage2"
	case "QListView":
		return "NewQListView2"
	case "QDateTimeEdit":
		return "NewQDateTimeEdit5"
	case "QTimeEdit":
		return "NewQTimeEdit3"
	case "QDateEdit":
		return "NewQDateEdit3"
	case "QMenu":
		return "NewQMenu3"
	case "QToolBox":
		return "NewQToolBox2"
	case "QTableWidget":
		return "NewQTableWidget3"
	case "QFocusFrame":
		return "NewQFocusFrame2"
	case "QHBoxLayout":
		return "NewQHBoxLayout2"
	case "QVBoxLayout":
		return "NewQVBoxLayout2"
	case "QInputDialog":
		return "NewQInputDialog2"
	case "QTableView":
		return "NewQTableView2"
	case "QMdiArea":
		return "NewQMdiArea2"
	case "QSpinBox":
		return "NewQSpinBox2"
	case "QDoubleSpinBox":
		return "NewQDoubleSpinBox2"
	case "QProgressBar":
		return "NewQProgressBar2"
	case "QTextEdit":
		return "NewQTextEdit3"
	case "QAbstractSlider":
		return "NewQAbstractSlider2"
	case "QDialogButtonBox":
		return "NewQDialogButtonBox5"
	case "QFontDialog":
		return "NewQFontDialog3"
	case "QMainWindow":
		return "NewQMainWindow2"
	case "QCommandLinkButton":
		return "NewQCommandLinkButton4"
	case "QDial":
		return "NewQDial2"
	case "QGridLayout":
		return "NewQGridLayout"
	case "QPlainTextEdit":
		return "NewQPlainTextEdit3"
	case "QScrollArea":
		return "NewQScrollArea2"
	case "QGroupBox":
		return "NewQGroupBox3"

	// CODEGENERATED LIST END

	default:
		// This class is not known to miqt-uic
		// Assume it's a user promoted type from Qt Designer with a matching ctor
		// of the form New{Class}(parent *QWidget)
		return "New" + className

	}

}
