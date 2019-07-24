
#include "StdAfx.h"
#include "MySquare.h"

IMPLEMENT_SERIAL(MySquare,MyShape,1)


void MySquare::drawShape(CDC& dc)
{
	int dx = max(begin.x,end.x) - min(begin.x,end.x);
	int dy = max(begin.y,end.y) - min(begin.y,end.y);
	if(dx < dy)
	{
		if(begin.x> end.x)
			end.x-=(dy - dx);
		else
			end.x+=(dy - dx);

	}
	else
	{	
		if(begin.y > end.y)
			end.y-=(dx - dy);
		else
			end.y+=(dx - dy);		
	}

	dc.Rectangle(begin.x,begin.y,end.x,end.y);

}

BOOL MySquare::InArea(int x,int y) const
{
	CRect temp;
	if (end.x> begin.x && end.y> begin.y)  temp.SetRect(begin.x,begin.y,end.x,end.y);
	else if (end.x < begin.x &&  end.y < begin.y)  temp.SetRect(end.x,end.y,begin.x,begin.y);
	else if (begin.x <end.x &&  begin.y> end.y) temp.SetRect(begin.x,end.y,end.x,begin.y);
	else if (begin.x > end.x && begin.y < end.y) temp.SetRect(end.x,begin.y,begin.x,end.y);
	CPoint point(x,y);
	
	return temp.PtInRect(point);
}