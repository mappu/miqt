package main

import (
	"os"

	qt "github.com/mappu/miqt/qt6"
)

type TetrixShape uint8

const (
	NoShape TetrixShape = iota
	ZShape
	SShape
	LineShape
	TShape
	SquareShape
	LShape
)

const (
	numShapes   = 8
	numCells    = 4
	pairCells   = 2
	boardWidth  = 10
	boardHeight = 22
)

var tetrixWindow *TetrixWindow

type TetrixPiece struct {
	coords     [numCells][pairCells]int
	pieceShape TetrixShape
}

type TetrixBoard struct {
	frame              *qt.QFrame
	board              [boardWidth * boardHeight]TetrixShape
	timer              *qt.QBasicTimer
	nextPieceLabel     *qt.QLabel
	isStarted          bool
	isPaused           bool
	isWaitingAfterLine bool
	curPiece           *TetrixPiece
	nextPiece          *TetrixPiece
	curX               int
	curY               int
	numLinesRemoved    int
	numPiecesDropped   int16
	score              int
	level              int
}

type TetrixWindow struct {
	window         *qt.QWidget
	board          *TetrixBoard
	nextPieceLabel *qt.QLabel
	scoreLcd       *qt.QLCDNumber
	levelLcd       *qt.QLCDNumber
	linesLcd       *qt.QLCDNumber
	newGameButton  *qt.QPushButton
	quitButton     *qt.QPushButton
	pauseButton    *qt.QPushButton
	gameOverLabel  *qt.QLabel
}

func (self *TetrixPiece) setX(index, x int) {
	self.coords[index][0] = x
}

func (self *TetrixPiece) setY(index, y int) {
	self.coords[index][1] = y
}

func (self *TetrixPiece) x(index int) int { return self.coords[index][0] }

func (self *TetrixPiece) y(index int) int { return self.coords[index][1] }

func (self *TetrixPiece) setShape(shape TetrixShape) {
	coordsTable := [numShapes][numCells][pairCells]int{
		{{0, 0}, {0, 0}, {0, 0}, {0, 0}},
		{{0, -1}, {0, 0}, {-1, 0}, {-1, 1}},
		{{0, -1}, {0, 0}, {1, 0}, {1, 1}},
		{{0, -1}, {0, 0}, {0, 1}, {0, 2}},
		{{-1, 0}, {0, 0}, {1, 0}, {0, 1}},
		{{0, 0}, {1, 0}, {0, 1}, {1, 1}},
		{{-1, -1}, {0, -1}, {0, 0}, {0, 1}},
		{{1, -1}, {0, -1}, {0, 0}, {0, 1}}}

	for i := 0; i < numCells; i++ {
		for j := 0; j < pairCells; j++ {
			self.coords[i][j] = coordsTable[shape][i][j]
		}
	}

	self.pieceShape = shape
}

func (self *TetrixPiece) setRandomShape() {
	self.setShape(TetrixShape(qt.QRandomGenerator_Global().BoundedWithHighest(numShapes-1) + 1))
}

func (self *TetrixPiece) minX() int {
	min := self.coords[0][0]
	for i := 1; i < numCells; i++ {
		if self.coords[i][0] < min {
			min = self.coords[i][0]
		}
	}
	return min
}

func (self *TetrixPiece) maxX() int {
	max := self.coords[0][0]
	for i := 1; i < numCells; i++ {
		if self.coords[i][0] > max {
			max = self.coords[i][0]
		}
	}
	return max
}

func (self *TetrixPiece) minY() int {
	min := self.coords[0][1]
	for i := 1; i < numCells; i++ {
		if self.coords[i][1] < min {
			min = self.coords[i][1]
		}
	}
	return min
}

func (self *TetrixPiece) maxY() int {
	max := self.coords[0][1]
	for i := 1; i < numCells; i++ {
		if self.coords[i][1] > max {
			max = self.coords[i][1]
		}
	}
	return max
}

func (self *TetrixPiece) rotatedLeft() {
	if self.pieceShape == SquareShape {
		return
	}

	for i := 0; i < numCells; i++ {
		x := self.x(i)
		y := self.y(i)
		self.setX(i, y)
		self.setY(i, -x)
	}
}

func (self *TetrixPiece) rotatedRight() {
	if self.pieceShape == SquareShape {
		return
	}

	for i := 0; i < numCells; i++ {
		x := self.x(i)
		y := self.y(i)
		self.setX(i, -y)
		self.setY(i, x)
	}
}

func (self *TetrixBoard) clearBoard() {
	for i := 0; i < boardHeight*boardWidth; i++ {
		self.board[i] = NoShape
	}
}

func (self *TetrixBoard) timeoutTime() int {
	return 1000 / (self.level + 1)
}

func (self *TetrixBoard) squareWidth() int {
	rect := self.frame.ContentsRect()
	return rect.Width() / boardWidth
}

func (self *TetrixBoard) squareHeight() int {
	rect := self.frame.ContentsRect()
	return rect.Height() / boardHeight
}

func (self *TetrixBoard) shapeAt(x, y int) TetrixShape {
	return self.board[y*boardWidth+x]
}

func (self *TetrixBoard) tryMove(newPiece *TetrixPiece, newX, newY int) bool {
	for i := 0; i < numCells; i++ {
		x := newX + newPiece.x(i)
		y := newY - newPiece.y(i)

		if x < 0 || x >= boardWidth || y < 0 || y >= boardHeight {
			return false
		}

		if self.shapeAt(x, y) != NoShape {
			return false
		}
	}

	*self.curPiece = *newPiece
	self.curX = newX
	self.curY = newY
	self.frame.Update()
	return true
}

func (self *TetrixBoard) drawSquare(painter *qt.QPainter, x, y int, shape TetrixShape) {
	colorTable := [8]uint{
		0x000000, 0xCC6666, 0x66CC66, 0x6666CC, 0xCCCC66, 0xCC66CC, 0x66CCCC, 0xDAAA00}

	color := qt.NewQColor4(colorTable[shape])
	lighter := color.Lighter()
	darker := color.Darker()

	painter.FillRect5(x+1, y+1, self.squareWidth()-2, self.squareHeight()-2, color)
	painter.SetPen(lighter)
	painter.DrawLine2(x, y+self.squareHeight()-1, x, y)
	painter.DrawLine2(x, y, x+self.squareWidth()-1, y)

	painter.SetPen(darker)
	painter.DrawLine2(x+1, y+self.squareHeight()-1, x+self.squareWidth()-1, y+self.squareHeight()-1)
	painter.DrawLine2(x+self.squareWidth()-1, y+self.squareHeight()-1, x+self.squareWidth()-1, y+1)
}

func (self *TetrixBoard) showNextPiece() {
	if self.nextPieceLabel == nil {
		return
	}

	dx := self.nextPiece.maxX() - self.nextPiece.minX() + 1
	dy := self.nextPiece.maxY() - self.nextPiece.minY() + 1

	pixmap := qt.NewQPixmap2(dx*self.squareWidth(), dy*self.squareHeight())
	defer pixmap.Delete()

	painter := qt.NewQPainter2(pixmap.QPaintDevice)
	defer painter.Delete()

	rect := pixmap.Rect()
	painter.FillRect3(rect, self.nextPieceLabel.Palette().Window())

	for i := 0; i < numCells; i++ {
		x := self.nextPiece.x(i) - self.nextPiece.minX()
		y := self.nextPiece.y(i) - self.nextPiece.minY()
		self.drawSquare(painter, x*self.squareWidth(), y*self.squareHeight(), self.nextPiece.pieceShape)
	}

	self.nextPieceLabel.SetPixmap(pixmap)
}

func (self *TetrixBoard) newPiece() {
	*self.curPiece = *self.nextPiece
	self.nextPiece.setRandomShape()
	self.showNextPiece()
	self.curX = boardWidth/2 + 1
	self.curY = boardHeight - 1 + self.curPiece.minY()

	if !self.tryMove(self.curPiece, self.curX, self.curY) {
		self.curPiece.setShape(NoShape)
		self.timer.Stop()
		self.isStarted = false
		tetrixWindow.gameOverLabel.Show()
		tetrixWindow.pauseButton.SetDisabled(true)
	}
}

func (self *TetrixBoard) removeFullLines() {
	numFullLines := 0
	for i := boardHeight - 1; i >= 0; i-- {
		lineIsFull := true
		for j := 0; j < boardWidth; j++ {
			if self.shapeAt(j, i) == NoShape {
				lineIsFull = false
				break
			}
		}

		if lineIsFull {
			numFullLines++
			for k := i; k < boardHeight-1; k++ {
				for j := 0; j < boardWidth; j++ {
					self.board[k*boardWidth+j] = self.shapeAt(j, k+1)
				}
			}
			for j := 0; j < boardWidth; j++ {
				self.board[(boardHeight-1)*boardWidth+j] = NoShape
			}
		}
	}

	if numFullLines > 0 {
		self.numLinesRemoved += numFullLines
		self.score += 10 * numFullLines
		tetrixWindow.linesLcd.DisplayWithNum(self.numLinesRemoved)
		tetrixWindow.scoreLcd.DisplayWithNum(self.score)

		self.timer.Start(500, self.frame.QObject)
		self.isWaitingAfterLine = true
		self.curPiece.setShape(NoShape)
		self.frame.Update()
	}
}

func (self *TetrixBoard) pieceDropped(dropHeight int) {
	for i := 0; i < numCells; i++ {
		x := self.curX + self.curPiece.x(i)
		y := self.curY - self.curPiece.y(i)
		self.board[y*boardWidth+x] = self.curPiece.pieceShape
	}

	self.numPiecesDropped++
	if self.numPiecesDropped%25 == 0 {
		self.level += 1
		self.timer.Start(self.timeoutTime(), self.frame.QObject)
		tetrixWindow.levelLcd.DisplayWithNum(self.level)
	}

	self.score += dropHeight
	tetrixWindow.scoreLcd.DisplayWithNum(self.score)
	self.removeFullLines()

	if !self.isWaitingAfterLine {
		self.newPiece()
	}
}

func (self *TetrixBoard) oneLineDown() {
	if !self.tryMove(self.curPiece, self.curX, self.curY-1) {
		self.pieceDropped(0)
	}
}

func (self *TetrixBoard) dropDown() {
	dropHeight := 0
	newY := self.curY
	for newY > 0 {
		if !self.tryMove(self.curPiece, self.curX, newY-1) {
			break
		}
		newY--
		dropHeight++
	}
	self.pieceDropped(dropHeight)
}

func NewTetrixBoard() *TetrixBoard {
	var self TetrixBoard

	self.frame = qt.NewQFrame2()
	self.frame.SetFrameStyle(int(qt.QFrame__Panel) | int(qt.QFrame__Sunken))
	self.frame.SetFocusPolicy(qt.StrongFocus)
	self.clearBoard()

	self.nextPiece = &TetrixPiece{}
	self.curPiece = &TetrixPiece{}

	self.curPiece.setShape(NoShape)
	self.curX = 0
	self.curY = 0
	self.isStarted = false
	self.isPaused = false

	self.nextPiece.setRandomShape()
	self.nextPieceLabel = nil

	self.timer = qt.NewQBasicTimer()

	self.frame.OnPaintEvent(func(super func(event *qt.QPaintEvent), event *qt.QPaintEvent) {
		super(event)

		painter := qt.NewQPainter2(self.frame.QPaintDevice)
		defer painter.Delete()

		rect := self.frame.ContentsRect()

		if self.isPaused {
			painter.DrawText6(rect, int(qt.AlignCenter), "Pause")
			return
		}

		boardTop := rect.Bottom() - boardHeight*self.squareHeight()

		for i := 0; i < boardHeight; i++ {
			for j := 0; j < boardWidth; j++ {
				shape := self.shapeAt(j, boardHeight-i-1)
				if shape != NoShape {
					self.drawSquare(painter, rect.Left()+j*self.squareWidth(),
						boardTop+i*self.squareHeight(), shape)
				}
			}
		}

		if self.curPiece.pieceShape != NoShape {
			for i := 0; i < numCells; i++ {
				x := self.curX + self.curPiece.x(i)
				y := self.curY - self.curPiece.y(i)
				self.drawSquare(painter, rect.Left()+x*self.squareWidth(),
					boardTop+(boardHeight-y-1)*self.squareHeight(),
					self.curPiece.pieceShape)
			}
		}
	})

	self.frame.OnKeyPressEvent(func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent) {
		if !self.isStarted || self.isPaused || self.curPiece.pieceShape == NoShape {
			super(event)
			return
		}

		switch event.Key() {
		case int(qt.Key_Left):
			self.tryMove(self.curPiece, self.curX-1, self.curY)
		case int(qt.Key_Right):
			self.tryMove(self.curPiece, self.curX+1, self.curY)
		case int(qt.Key_Down):
			if self.curX == 0 || self.curX >= boardWidth-1 {
				return
			}
			if self.curPiece.pieceShape == LineShape && self.curX <= 1 || self.curX >= boardWidth-2 {
				return
			}
			self.curPiece.rotatedRight()
			self.tryMove(self.curPiece, self.curX, self.curY)
		case int(qt.Key_Up):
			if self.curX == 0 || self.curX >= boardWidth-1 {
				return
			}
			if self.curPiece.pieceShape == LineShape && self.curX <= 1 || self.curX >= boardWidth-2 {
				return
			}
			self.curPiece.rotatedLeft()
			self.tryMove(self.curPiece, self.curX, self.curY)
		case int(qt.Key_Space):
			self.dropDown()
		case int(qt.Key_D):
			self.oneLineDown()
		default:
			super(event)
		}
	})

	self.frame.OnTimerEvent(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent) {
		if event.TimerId() == self.timer.TimerId() {
			if self.isWaitingAfterLine {
				self.isWaitingAfterLine = false
				self.newPiece()
				self.timer.Start(self.timeoutTime(), self.frame.QObject)
			} else {
				self.oneLineDown()
			}
		} else {
			super(event)
		}
	})

	frameWidth := self.frame.FrameWidth()

	self.frame.OnSizeHint(func(super func() *qt.QSize) *qt.QSize {
		return qt.NewQSize2(boardWidth*15+frameWidth*2, boardHeight*15+frameWidth*2)
	})

	self.frame.OnMinimumSizeHint(func(super func() *qt.QSize) *qt.QSize {
		return qt.NewQSize2(boardWidth*5+frameWidth*2, boardHeight*5+frameWidth*2)
	})

	return &self
}

func createLabel(text string) *qt.QLabel {
	label := qt.NewQLabel3(text)
	label.SetAlignment(qt.AlignHCenter | qt.AlignBottom)
	return label
}

func NewTetrixWindow() *TetrixWindow {
	var self TetrixWindow

	self.board = NewTetrixBoard()
	self.nextPieceLabel = qt.NewQLabel2()
	self.nextPieceLabel.SetFrameStyle(int(qt.QFrame__Box) | int(qt.QFrame__Raised))
	self.nextPieceLabel.SetAlignment(qt.AlignCenter)
	self.board.nextPieceLabel = self.nextPieceLabel

	self.scoreLcd = qt.NewQLCDNumber3(5)
	self.scoreLcd.SetSegmentStyle(qt.QLCDNumber__Filled)
	self.levelLcd = qt.NewQLCDNumber3(2)
	self.levelLcd.SetSegmentStyle(qt.QLCDNumber__Filled)
	self.linesLcd = qt.NewQLCDNumber3(5)
	self.linesLcd.SetSegmentStyle(qt.QLCDNumber__Filled)

	self.newGameButton = qt.NewQPushButton3("&New Game")
	self.newGameButton.SetFocusPolicy(qt.NoFocus)

	newKeySequence := qt.NewQKeySequence2("Ctrl+N")
	defer newKeySequence.Delete()
	newShortcut := qt.NewQShortcut2(newKeySequence, self.newGameButton.QObject)
	newShortcut.OnActivated(func() { self.newGameButton.Click() })

	self.quitButton = qt.NewQPushButton3("&Quit")
	self.quitButton.SetFocusPolicy(qt.NoFocus)

	quitKeySequence := qt.NewQKeySequence6(qt.QKeySequence__Quit)
	defer quitKeySequence.Delete()
	quitShortcut := qt.NewQShortcut2(quitKeySequence, self.quitButton.QObject)
	quitShortcut.OnActivated(func() { self.quitButton.Click() })

	self.pauseButton = qt.NewQPushButton3("&Pause")
	self.pauseButton.SetFocusPolicy(qt.NoFocus)
	self.pauseButton.SetDisabled(true)

	pauseKeySequence := qt.NewQKeySequence6(qt.QKeySequence__Cancel)
	defer pauseKeySequence.Delete()
	pauseShortcut := qt.NewQShortcut2(pauseKeySequence, self.pauseButton.QObject)
	pauseShortcut.OnActivated(func() { self.pauseButton.Click() })

	self.window = qt.NewQWidget2()
	self.gameOverLabel = qt.NewQLabel2()
	self.gameOverLabel.SetTextFormat(qt.MarkdownText)
	self.gameOverLabel.SetAlignment(qt.AlignCenter)
	self.gameOverLabel.SetText("# Game Over")

	labelPolicy := self.gameOverLabel.SizePolicy()
	defer labelPolicy.Delete()
	labelPolicy.SetRetainSizeWhenHidden(true)
	self.gameOverLabel.SetSizePolicy(*labelPolicy)
	self.gameOverLabel.Hide()

	self.newGameButton.OnClicked(func() {
		if self.board.isPaused {
			return
		}

		self.board.isStarted = true
		self.board.isWaitingAfterLine = false
		self.board.numLinesRemoved = 0
		self.board.numPiecesDropped = 0
		self.board.score = 0
		self.board.level = 1
		self.gameOverLabel.Hide()
		self.pauseButton.SetDisabled(false)
		self.board.clearBoard()

		self.linesLcd.DisplayWithNum(self.board.numLinesRemoved)
		self.scoreLcd.DisplayWithNum(self.board.score)
		self.levelLcd.DisplayWithNum(self.board.level)

		self.board.newPiece()
		self.board.timer.Start(self.board.timeoutTime(), self.board.frame.QObject)
	})

	self.quitButton.OnClicked(func() { qt.QCoreApplication_Quit() })

	self.pauseButton.OnClicked(func() {
		if !self.board.isStarted {
			return
		}

		self.board.isPaused = !self.board.isPaused
		if self.board.isPaused {
			self.board.timer.Stop()
		} else {
			self.board.timer.Start(self.board.timeoutTime(), self.board.frame.QObject)
		}

		self.board.frame.Update()
	})

	layout := qt.NewQGridLayout(self.window)
	layout.AddWidget2(createLabel("NEXT").QWidget, 0, 0)
	layout.AddWidget2(self.nextPieceLabel.QWidget, 1, 0)
	layout.AddWidget2(createLabel("LEVEL").QWidget, 2, 0)
	layout.AddWidget2(self.levelLcd.QWidget, 3, 0)
	layout.AddWidget2(self.newGameButton.QWidget, 4, 0)
	layout.AddWidget2(self.gameOverLabel.QWidget, 5, 0)
	layout.AddWidget3(self.board.frame.QWidget, 0, 1, 6, 1)
	layout.AddWidget2(createLabel("SCORE").QWidget, 0, 2)
	layout.AddWidget2(self.scoreLcd.QWidget, 1, 2)
	layout.AddWidget2(createLabel("LINES REMOVED").QWidget, 2, 2)
	layout.AddWidget2(self.linesLcd.QWidget, 3, 2)
	layout.AddWidget2(self.quitButton.QWidget, 4, 2)
	layout.AddWidget2(self.pauseButton.QWidget, 5, 2)
	layout.SetColumnStretch(0, 1)
	layout.SetColumnStretch(1, 2)
	layout.SetColumnStretch(2, 2)
	self.window.SetLayout(layout.QLayout)

	self.window.SetWindowTitle("Qt 6 Tetrix Example")
	self.window.SetFixedSize2(1000, 750)

	return &self
}

func main() {

	qt.NewQApplication(os.Args)

	tetrixWindow = NewTetrixWindow()
	tetrixWindow.window.Show()

	messageBox := qt.NewQMessageBox(tetrixWindow.window)
	messageBox.SetWindowModality(qt.ApplicationModal)
	messageBox.SetTextFormat(qt.MarkdownText)
	messageBox.SetWindowTitle("Game Controls")
	messageBox.SetText("### - Left/Right: Move piece\n" +
		"### - Down/Up: Rotate piece\n" +
		"### - D: Move piece down one line\n" +
		"### - Space: Drop piece\n" +
		"### - Alt+N/Ctrl+N: New game\n" +
		"### - Alt+Q/Ctrl+Q: Quit\n" +
		"### - Alt+P/Esc: Pause")
	messageBox.Show()

	qt.QApplication_Exec()
}
