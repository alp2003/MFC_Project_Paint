#include "StdAfx.h"
#include "MyRectangle.h"
IMPLEMENT_SERIAL(MyRectangle,MyShape,1)



void MyRectangle::drawShape(CDC& dc)
{
	dc.Rectangle(begin.x,begin.y,end.x,end.y);

}

BOOL MyRectangle::InArea(int x,int y) const
{
	CRect temp;
	if (end.x> begin.x && end.y> begin.y)  temp.SetRect(begin.x,begin.y,end.x,end.y);
	else if (end.x < begin.x &&  end.y < begin.y)  temp.SetRect(end.x,end.y,begin.x,begin.y);
	else if (begin.x <end.x &&  begin.y> end.y) temp.SetRect(begin.x,end.y,end.x,begin.y);
	else if (begin.x > end.x && begin.y < end.y) temp.SetRect(end.x,begin.y,begin.x,end.y);
	CPoint point(x,y);
	
	return temp.PtInRect(point);
}