#include "Board.h"

int main( void )
{
	Board* board = new Board( 5, 5 );
	board->Show();
	delete board;
}