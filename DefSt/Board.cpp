#include "Board.h"
#include <cstdio>

Board::Board( int height, int width )
{
	m_height = height;
	m_width = width;
}

Board::~Board()
{

}

void Board::Show( void )
{
	for (int h = 0; h < m_height; h++)
	{
		for (int w = 0; w < m_width; w++)
		{
			printf( " " );
		}
		printf( "\n" );
	}
}