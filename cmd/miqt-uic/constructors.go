package main

func constructorFunctionFor(className string) (string, bool) {

	// Rebuild this list via:
	//   grep -PRoh 'func New.+\(parent \*QWidget\)' ~/dev/miqt/qt/ | sed -re 's~^func New([^0-9]+)([0-9]*)\(.*~case "\1": return "New\1\2", true~'

	switch className {

	// CODEGENERATED LIST START

	case "QListWidget":
		return "NewQListWidget2", true
	case "QAbstractSpinBox":
		return "NewQAbstractSpinBox2", true
	case "QStackedLayout":
		return "NewQStackedLayout2", true
	case "QColumnView":
		return "NewQColumnView2", true
	case "QProgressDialog":
		return "NewQProgressDialog3", true
	case "QTabWidget":
		return "NewQTabWidget2", true
	case "QLabel":
		return "NewQLabel3", true
	case "QKeySequenceEdit":
		return "NewQKeySequenceEdit3", true
	case "QDockWidget":
		return "NewQDockWidget5", true
	case "QFontComboBox":
		return "NewQFontComboBox2", true
	case "QTreeView":
		return "NewQTreeView2", true
	case "QCalendarWidget":
		return "NewQCalendarWidget2", true
	case "QLineEdit":
		return "NewQLineEdit3", true
	case "QMenuBar":
		return "NewQMenuBar2", true
	case "QFrame":
		return "NewQFrame2", true
	case "QAbstractScrollArea":
		return "NewQAbstractScrollArea2", true
	case "QSplitter":
		return "NewQSplitter3", true
	case "QStackedWidget":
		return "NewQStackedWidget2", true
	case "QWizard":
		return "NewQWizard2", true
	case "QWizardPage":
		return "NewQWizardPage2", true
	case "QMdiSubWindow":
		return "NewQMdiSubWindow2", true
	case "QStatusBar":
		return "NewQStatusBar2", true
	case "QToolButton":
		return "NewQToolButton2", true
	case "QShortcut":
		return "NewQShortcut", true
	case "QSlider":
		return "NewQSlider3", true
	case "QComboBox":
		return "NewQComboBox2", true
	case "QScrollBar":
		return "NewQScrollBar3", true
	case "QTabBar":
		return "NewQTabBar2", true
	case "QTextBrowser":
		return "NewQTextBrowser2", true
	case "QTreeWidget":
		return "NewQTreeWidget2", true
	case "QDialog":
		return "NewQDialog2", true
	case "QFormLayout":
		return "NewQFormLayout2", true
	case "QToolBar":
		return "NewQToolBar4", true
	case "QWidget":
		return "NewQWidget2", true
	case "QRadioButton":
		return "NewQRadioButton3", true
	case "QCheckBox":
		return "NewQCheckBox3", true
	case "QSizeGrip":
		return "NewQSizeGrip", true
	case "QLCDNumber":
		return "NewQLCDNumber3", true
	case "QFileDialog":
		return "NewQFileDialog3", true
	case "QUndoView":
		return "NewQUndoView4", true
	case "QGraphicsView":
		return "NewQGraphicsView3", true
	case "QPushButton":
		return "NewQPushButton4", true
	case "QColorDialog":
		return "NewQColorDialog3", true
	case "QMessageBox":
		return "NewQMessageBox4", true
	case "QSplashScreen":
		return "NewQSplashScreen3", true
	case "QErrorMessage":
		return "NewQErrorMessage2", true
	case "QListView":
		return "NewQListView2", true
	case "QDateTimeEdit":
		return "NewQDateTimeEdit5", true
	case "QTimeEdit":
		return "NewQTimeEdit3", true
	case "QDateEdit":
		return "NewQDateEdit3", true
	case "QMenu":
		return "NewQMenu3", true
	case "QToolBox":
		return "NewQToolBox2", true
	case "QTableWidget":
		return "NewQTableWidget3", true
	case "QFocusFrame":
		return "NewQFocusFrame2", true
	case "QHBoxLayout":
		return "NewQHBoxLayout2", true
	case "QVBoxLayout":
		return "NewQVBoxLayout2", true
	case "QInputDialog":
		return "NewQInputDialog2", true
	case "QTableView":
		return "NewQTableView2", true
	case "QMdiArea":
		return "NewQMdiArea2", true
	case "QSpinBox":
		return "NewQSpinBox2", true
	case "QDoubleSpinBox":
		return "NewQDoubleSpinBox2", true
	case "QProgressBar":
		return "NewQProgressBar2", true
	case "QTextEdit":
		return "NewQTextEdit3", true
	case "QAbstractSlider":
		return "NewQAbstractSlider2", true
	case "QDialogButtonBox":
		return "NewQDialogButtonBox5", true
	case "QFontDialog":
		return "NewQFontDialog3", true
	case "QMainWindow":
		return "NewQMainWindow2", true
	case "QCommandLinkButton":
		return "NewQCommandLinkButton4", true
	case "QDial":
		return "NewQDial2", true
	case "QGridLayout":
		return "NewQGridLayout", true
	case "QPlainTextEdit":
		return "NewQPlainTextEdit3", true
	case "QScrollArea":
		return "NewQScrollArea2", true
	case "QGroupBox":
		return "NewQGroupBox3", true

	// CODEGENERATED LIST END

	default:
		return "", false

	}

}
