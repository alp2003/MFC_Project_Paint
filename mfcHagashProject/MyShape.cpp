
#include "StdAfx.h"
#include "MyShape.h"
IMPLEMENT_SERIAL(MyShape,CObject,1)

MyShape::MyShape()
{
	foreGroundCL=RGB(0,0,0);
	BackGroundCL=RGB(255,255,255);
	penWidth=2;
}

MyShape::~MyShape(){}


void MyShape::setBegin(CPoint point)
{
	begin=point;
}
void MyShape::setEnd(CPoint point)
{
	end=point;
}
CPoint MyShape::getBegin()const
{
	return begin;
}
CPoint MyShape::getEnd()const
{
	return end;
}
void MyShape::drawShape(CDC& dc){}

void MyShape::draw(CDC& dc)
{
	CPen pen(PS_SOLID ,penWidth,foreGroundCL);
	CBrush brush(BackGroundCL);
	CPen *oldPen=dc.SelectObject(&pen);
	//dc.SetROP2(R2_NOTXORPEN);  
	CBrush *oldBrush=dc.SelectObject(&brush);
	drawShape(dc);
	dc.SelectObject(oldPen);
	//dc.SetROP2(R2_COPYPEN);  
	dc.SelectObject(oldBrush);
}

void MyShape::setForeGround(COLORREF& color)
{
	foreGroundCL=color;
}

void MyShape::setBackGround(COLORREF& color)
{
	BackGroundCL=color;
}
void MyShape::setPenWidth(int penWd)
{
	penWidth=penWd;
}
void MyShape::Serialize(CArchive& ar)
{
	if(ar.IsStoring())
	{
		ar<<foreGroundCL<<BackGroundCL<<begin.x<<begin.y
			<<end.x<<end.y<<penWidth;

	}
	else
	{
		
		ar>>foreGroundCL>>BackGroundCL>>begin.x>>begin.y
			>>end.x>>end.y>>penWidth;
		
	}
}

BOOL MyShape::InArea(int x,int y) const
{
	return FALSE;
}


const MyShape &  MyShape::operator= (const MyShape& other)
{
	this->begin = other.begin;
	this->end = other.end;
	this->foreGroundCL = other.foreGroundCL;
	this->BackGroundCL = other.BackGroundCL;
	this->penWidth = other.penWidth;
	return (*this);
}

COLORREF MyShape::getForeGround()
{
	return foreGroundCL;
}
COLORREF MyShape::getBackGround()
{
	return BackGroundCL;
}

int MyShape::getPenWidth()
{
	return penWidth;
}
