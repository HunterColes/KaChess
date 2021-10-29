#ifndef BOARD_H
#define BOARD_H

#include <QWidget>
#include <QDebug>
#include <qscopedpointer.h>
#include <qpushbutton.h>

class Board : public QWidget
{
	Q_OBJECT
public:
	Board(QWidget* p = nullptr);
	~Board();
	void draw();


protected:

public Q_SLOTS:
	void sayHi();

Q_SIGNALS:

private:
	QScopedPointer<QPushButton> button;
};

#endif //BOARD_H