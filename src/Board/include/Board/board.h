#ifndef BOARD_H
#define BOARD_H

#include <QWidget>
#include <QDebug>

class Board : public QWidget
{
	Q_OBJECT
public:
	Board();
	~Board();

protected:

public Q_SLOTS:
	void sayHi();

Q_SIGNALS:

private:
};

#endif //BOARD_H