#include <include/Board/board.h>

Board::Board(QWidget* p)
	: QWidget(p),
	 button(new QPushButton(p))
{
	button->setText("yoyoma");
	resize(450, 450);
}
Board::~Board()
{

}
void Board::draw()
{
	
}
void Board::sayHi()
{
	qDebug() << "hi";
}