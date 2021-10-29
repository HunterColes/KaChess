#include <QApplication>
#include <QMainWindow>
#include <include/Board/board.h>
#include <QPushButton>
#include <QLayout>

int main(int argc, char* argv[])
{
	QApplication a(argc, argv);
	QMainWindow* w = new QMainWindow();

    QPushButton* button1 = new QPushButton(w);
    button1->setText("Play (computer)");

    QPushButton* button2 = new QPushButton(w);
    button2->setText("Play (human)");
    button2->move(0, 30);

    QPushButton* exitButton = new QPushButton(w);
    exitButton->setText("Close program");
    exitButton->move(0, 420);

    
    Board* b = new Board(exitButton);
    Board* c = new Board(b);

    button1->connect(button1, SIGNAL(clicked()), b, SLOT(sayHi()));
    exitButton->connect(button1, SIGNAL(clicked()), b, SLOT(close()));



	w->show();

	return a.exec();
}