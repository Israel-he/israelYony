#pragma once
#include "Vertex.h"
#include "Board.h"
class  Rectangle
{
public:
	Rectangle(const Vertex& bottomLeft, const Vertex& topRight);
	
	Rectangle(const Vertex veertices[2]);
	Rectangle(double x, double y, double width, double height);
	Rectangle(const Vertex& topRight, double width, double height);
  
	double getHeight()  const;
	double getWidth()  const;
	Vertex getBottomLeft() const;
	Vertex getTopRight() const;
	void widthHight(int width, int hight);

	void draw(Board& board) const;
	Rectangle getBoundingRectangle() const;
	double getPerimeter() const;
	double getArea() const;
	Vertex getCenter() const;
	bool scala(double factor);



private:
	Vertex bottom_l;
	Vertex top_r;
	Vertex m_newVetex;
	double width, hight;

    Board board;

	bool chck_vertex(const Vertex& bottomLeft, const Vertex& topRight) const;

};
 