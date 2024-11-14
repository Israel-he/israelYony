
#include "Rectangle.h"
 
//===============================c-tor================================
Rectangle::Rectangle(const Vertex& bottomLeft, const Vertex& topRight)
	:bottom_l(bottomLeft),top_r(topRight)
{
	if (!Rectangle::chck_vertex(bottomLeft, topRight) )
	{
		bottom_l.m_col = 20;
		bottom_l.m_row = 10;
		top_r.m_col = 30;
		top_r.m_row = 20;
	}
}

Rectangle::Rectangle(const Vertex veertices[2])
	:Rectangle(veertices[0], veertices[1])
{};

Rectangle::Rectangle(double x, double y, double width, double height)
	:Rectangle(Vertex(x,y),Vertex(x+ width, y+ height))
{};

Rectangle::Rectangle(const Vertex& topRight, double width, double height)
	:Rectangle(Vertex(topRight.m_col- width, topRight.m_row- height), topRight)
{};


bool  Rectangle::chck_vertex(const Vertex& bottomLeft, const Vertex& topRight) const
{
	return (bottomLeft.isValid() && topRight.isValid() &&
		(topRight.isHigherThan(bottomLeft)) &&
		(topRight.isToTheRightOf(bottomLeft)));
}
//========================================EndOfC-tor========================================
 
//==========================================================================================
 
Vertex Rectangle::getBottomLeft() const
{
	return(bottom_l);
}
double Rectangle::getHeight() const
{
	return (top_r.m_row - bottom_l.m_row);
}

double Rectangle::getWidth() const
{
	return (top_r.m_col - bottom_l.m_col);
}

Vertex Rectangle::getTopRight() const
{
	return Vertex(top_r);
}

void Rectangle::widthHight(int width, int hight)
{
	width = (top_r.m_col - bottom_l.m_col);
	hight = (top_r.m_row - bottom_l.m_row);
}

 


//==============================================
void Rectangle::draw(Board& board) const
{
	board.drawLine(bottom_l, top_r);
}

Rectangle Rectangle::getBoundingRectangle() const
{
	return Rectangle(bottom_l,top_r);
}

double Rectangle::getPerimeter() const
{
	return ((bottom_l.m_col * 2) + (bottom_l.m_row * 2));
}

double Rectangle::getArea() const
{
	return (bottom_l.m_col * bottom_l.m_row);
}

Vertex Rectangle::getCenter() const
{
	double x, y;

	x = (width / 2) + bottom_l.m_col;
	y = (hight / 2) + bottom_l.m_row;

	return Vertex (x,y);
}

bool Rectangle::scala(double factor)
{
	Vertex center = getCenter();
    
	m_newVetex.m_col = (center.m_col - bottom_l.m_col)*2;
	m_newVetex.m_row = (center.m_row - bottom_l.m_row)*2;




	return false;
}








