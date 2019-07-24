
#include "StdAfx.h"
#include "MyRoundedRect.h"
IMPLEMENT_SERIAL(MyRoundedRect,MyShape,1)



void MyRoundedRect::drawShape(CDC& dc)
{
	CRect rect(begin.x,begin.y,end.x,end.y);
	dc.RoundRect(rect,CPoint(30,30));

}

BOOL MyRoundedRect::InArea(int x,int y) const
{
	CRect temp;
	if (end.x> begin.x && end.y> begin.y)  temp.SetRect(begin.x,begin.y,end.x,end.y);
	else if (end.x < begin.x &&  end.y < begin.y)  temp.SetRect(end.x,end.y,begin.x,begin.y);
	else if (begin.x <end.x &&  begin.y> end.y) temp.SetRect(begin.x,end.y,end.x,begin.y);
	else if (begin.x > end.x && begin.y < end.y) temp.SetRect(end.x,begin.y,begin.x,end.y);
	CPoint point(x,y);
	
	return  temp.PtInRect(point);
}