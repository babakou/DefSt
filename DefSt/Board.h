#ifndef _BOARD_H_
#define _BOARD_H_

class Board
{
private:
	int m_width;
	int m_height;

public:
	Board( int height, int width );
	~Board();
	void Show( void );
};

#endif