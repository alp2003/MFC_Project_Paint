
// mfcHagashProjectDlg.cpp : implementation file
//
/*
name:Alexander Pekker
id: 321730327
marze: Michael Kiperberg
*/
#include "stdafx.h"
#include "mfcHagashProject.h"
#include "mfcHagashProjectDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
	enum { IDD = IDD_ABOUTBOX };
	HICON m_hIcon2;
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
public:
	
	
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
	
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
	
	
END_MESSAGE_MAP()


// CmfcHagashProjectDlg dialog




CmfcHagashProjectDlg::CmfcHagashProjectDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CmfcHagashProjectDlg::IDD, pParent)
{
	srand((unsigned int)time(NULL));
	m_hIcon = AfxGetApp()->LoadIcon(IDI_ICON1);
}
CmfcHagashProjectDlg::~CmfcHagashProjectDlg()
{
	
}
void CmfcHagashProjectDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_MFCCOLORBUTTON2, m_selectCL);
	DDX_Control(pDX, IDC_MFCCOLORBUTTON2, m_colorCTRL);
	DDX_Control(pDX, IDC_MFCCOLORBUTTON3, m_colorCtrl2);
	DDX_Text(pDX, IDC_MFCCOLORBUTTON3, m_selectCL2);
	DDX_Control(pDX, IDC_COMBO1, m_comboCtrl);
	DDX_Control(pDX, IDC_STATICPIC, m_staticPic);
}

BEGIN_MESSAGE_MAP(CmfcHagashProjectDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_COMMAND(ID_ABOUT_ABOUTPAINT, &CmfcHagashProjectDlg::OnAboutAboutpaint)
	ON_COMMAND(ID_FILE_EXIT, &CmfcHagashProjectDlg::OnFileExit)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_COMMAND(ID_FILE_NEW32771, &CmfcHagashProjectDlg::OnFileNew32771)
	ON_COMMAND(ID_EDIT_UNDO32775, &CmfcHagashProjectDlg::OnEditUndo32775)
	ON_COMMAND(ID_EDIT_REDO32776, &CmfcHagashProjectDlg::OnEditRedo32776)
	ON_COMMAND(IDI_EDIT_UNDO, &CmfcHagashProjectDlg::OnIdiEditUndo)
	ON_COMMAND(IDI_EDIT_REDO, &CmfcHagashProjectDlg::OnIdiEditRedo)
	ON_COMMAND(ID_FILE_SAVE32772, &CmfcHagashProjectDlg::OnFileSave32772)
	ON_COMMAND(ID_FILE_LOAD, &CmfcHagashProjectDlg::OnFileLoad)
	ON_COMMAND(IDI_FILE_LOAD, &CmfcHagashProjectDlg::OnIdiFileLoad)
	ON_BN_CLICKED(IDC_MFCCOLORBUTTON2, &CmfcHagashProjectDlg::OnBnClickedMfccolorbutton2)
	ON_COMMAND(ID_SHAPES_LINE, &CmfcHagashProjectDlg::OnShapesLine)
	ON_COMMAND(ID_SHAPES_RECTANGLE, &CmfcHagashProjectDlg::OnShapesRectangle)
	ON_COMMAND(ID_SHAPES_ELLIPSE, &CmfcHagashProjectDlg::OnShapesEllipse)
	ON_BN_CLICKED(IDC_MFCCOLORBUTTON3, &CmfcHagashProjectDlg::OnBnClickedMfccolorbutton3)
	ON_COMMAND(IDI_SHAPE_LINE, &CmfcHagashProjectDlg::OnIdiShapeLine)
	ON_COMMAND(IDI_SHAPE_RECT, &CmfcHagashProjectDlg::OnIdiShapeRect)
	ON_COMMAND(IDI_SHAPE_ELLIPSE, &CmfcHagashProjectDlg::OnIdiShapeEllipse)
	ON_COMMAND(IDI_CLEARFILE, &CmfcHagashProjectDlg::OnIdiClearfile)
	ON_COMMAND(ID_OPTIONS_EDITFGCOLOR, &CmfcHagashProjectDlg::OnOptionsEditfgcolor)
	ON_COMMAND(ID_OPTIONS_EDITBGCOLOR, &CmfcHagashProjectDlg::OnOptionsEditbgcolor)
	ON_CBN_SELCHANGE(IDC_COMBO1, &CmfcHagashProjectDlg::OnCbnSelchangeCombo1)
	ON_COMMAND(ID_PENWIDTH_SIZE1, &CmfcHagashProjectDlg::OnPenwidthSize1)
	ON_COMMAND(ID_PENWIDTH_SIZE2, &CmfcHagashProjectDlg::OnPenwidthSize2)
	ON_COMMAND(ID_PENWIDTH_LARGE, &CmfcHagashProjectDlg::OnPenwidthLarge)
	ON_COMMAND(IDI_FILE_SAVE, &CmfcHagashProjectDlg::OnIdiFileSave)
	ON_COMMAND(IDI_SHAPE_TRIA, &CmfcHagashProjectDlg::OnIdiShapeTria)
	ON_WM_RBUTTONDOWN()
	ON_WM_RBUTTONUP()
	ON_COMMAND(ID_SHAPES_TRIANGLE, &CmfcHagashProjectDlg::OnShapesTriangle)
	ON_WM_TIMER()
	ON_WM_SETCURSOR()
	ON_WM_INITMENU()
	ON_WM_MENUSELECT()
	ON_WM_ERASEBKGND()
	ON_WM_CTLCOLOR()
	ON_COMMAND(IDI_SHAPE_RoundedR, &CmfcHagashProjectDlg::OnIdiShapeRoundedr)
	ON_COMMAND(ID_SHAPES_ROUNDRECT, &CmfcHagashProjectDlg::OnShapesRoundrect)
	ON_COMMAND(IDI_SHAPE_SQUARE, &CmfcHagashProjectDlg::OnIdiShapeSquare)
	ON_COMMAND(ID_SHAPES_SQUARE, &CmfcHagashProjectDlg::OnShapesSquare)
	ON_COMMAND(ID_BUTTON_REC, &CmfcHagashProjectDlg::OnButtonRec)
	ON_COMMAND(ID_EDIT_ERASESHAPE, &CmfcHagashProjectDlg::OnEditEraseshape)
	ON_BN_CLICKED(IDC_RADIO1, &CmfcHagashProjectDlg::OnBnClickedRadio1)
	ON_BN_CLICKED(IDC_RADIO2, &CmfcHagashProjectDlg::OnBnClickedRadio2)
	ON_NOTIFY_EX_RANGE(TTN_NEEDTEXTW,0,0xFFFF,OnToolTipText)
	ON_NOTIFY_EX_RANGE(TTN_NEEDTEXTA,0,0xFFFF,OnToolTipText)
	ON_COMMAND(ID_BUTTON_BGCOLOR, &CmfcHagashProjectDlg::OnButtonBgcolor)
	ON_COMMAND(ID_BUTTON_FGCOLOR, &CmfcHagashProjectDlg::OnButtonFgcolor)
END_MESSAGE_MAP()


// CmfcHagashProjectDlg message handlers
static UINT BASED_CODE indicators[]={ID_STAT1,ID_STAT2,ID_STAT3};
BOOL CmfcHagashProjectDlg::OnInitDialog()
{
	//INIT INSTAT
	isPressed=false;
	isErased=false;
	currFigure=Line;
	m_selectCL=RGB(rand()%255,rand()%255,rand()%255);
	m_colorCTRL.SetColor(m_selectCL);
	m_selectCL2=RGB(rand()%255,rand()%255,rand()%255);
	m_colorCtrl2.SetColor(m_selectCL2);
	isSelected=false;
	selectShape=NULL;
	shapePtr=NULL;
	start=CPoint(0,0);
	end=CPoint(0,0);
	penWidth=2;
	m_ischangeCL=false;
	m_ischangeCL2=false;
	m_ispenWidth=false;
	deleteOBJ=false;
	indexSaver=0;
	
	//m_staticPic.
	COLORREF colour =RGB(255,255,255); //::GetSysColor(COLOR_3DFACE);
	brush.CreateSolidBrush(RGB(255,255,255));
	// Add "About..." menu item to system menu.
	
	
	CDialogEx::OnInitDialog();

	// TODO: Add extra initialization here
	//Create ToolBar
	if(!m_myToolBar.CreateEx(this,TBSTYLE_FLAT,WS_CHILD|WS_VISIBLE|CBRS_TOP|CBRS_GRIPPER|CBRS_TOOLTIPS|CBRS_FLYBY|CBRS_SIZE_DYNAMIC)||!m_myToolBar.LoadToolBar(IDR_TOOLBAR1))
	{
		TRACE0("Failed to Create Dialog ToolBar\n");
		EndDialog(IDCANCEL);
	}
	//Client Rect
	CRect rcClientOld;
	CRect rcClientNew;
	GetClientRect(rcClientOld);
	RepositionBars(AFX_IDW_CONTROLBAR_FIRST,AFX_IDW_CONTROLBAR_LAST,0,reposQuery,rcClientNew);
	CPoint ptOffset(rcClientNew.left-rcClientOld.left,rcClientNew.top-rcClientOld.top);
	CRect rcChild;
	CWnd* pwndChild=GetWindow(GW_CHILD);
	while(pwndChild)
	{
		pwndChild->GetWindowRect(rcChild); // Get the child control RECT
		ScreenToClient(rcChild); 
		// Changes the Child Rect by the values of the claculated offset
		rcChild.OffsetRect(ptOffset); 
		pwndChild->MoveWindow(rcChild,FALSE); // Move the Child Control
		pwndChild = pwndChild->GetNextWindow();
	}
	CRect	rcWindow;
	GetWindowRect(rcWindow); // Get the RECT of the Dialog Increase width to new Client Width
	rcWindow.right += rcClientOld.Width() - rcClientNew.Width(); // Increase height to new Client Height
	rcWindow.bottom += rcClientOld.Height() - rcClientNew.Height(); 
	MoveWindow(rcWindow,FALSE); // Redraw Window
	 //Now we REALLY Redraw the Toolbar
	RepositionBars(AFX_IDW_CONTROLBAR_FIRST,
		AFX_IDW_CONTROLBAR_LAST,0);

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}
	
	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	//Add String Too Combo Box
	
	m_comboCtrl.AddString(L"1.Small");
	m_comboCtrl.AddString(L"2.Medium");
	m_comboCtrl.AddString(L"3.Large");

	//Init to first Control 1.Small
	m_comboCtrl.SetCurSel(0);
	//Status Bar
	m_stat.Create(this);
	m_stat.SetIndicators(indicators,sizeof(indicators)/sizeof(UINT));
	m_stat.SetPaneInfo(0,ID_STAT1,SBPS_NORMAL,80);
	//m_stat.SetPaneInfo(1,ID_STAT2,SBPS_NORMAL,80);
	m_stat.SetPaneInfo(2,ID_STAT2,SBPS_STRETCH,80);
	//Set Time Current 
	SetTimer(0,1000,NULL);
	//print all ControlBar
	RepositionBars(AFX_IDW_CONTROLBAR_FIRST,AFX_IDW_CONTROLBAR_LAST,0);
	m_tool.Create(this,TTS_ALWAYSTIP);
	//Create 
	m_tool.AddTool(GetDlgItem(IDOK),L"Press OK");
	m_tool.AddTool(GetDlgItem(IDCANCEL),L"Press CANCEL");
	m_tool.AddTool(GetDlgItem(IDC_RADIO1),L"Draw Mode");
	m_tool.AddTool(GetDlgItem(IDC_RADIO2),L"Edit Mode");
	m_tool.AddTool(GetDlgItem(IDC_MFCCOLORBUTTON2),L"ForeGround Color");
	m_tool.AddTool(GetDlgItem(IDC_MFCCOLORBUTTON3),L"BackGround Color");
	m_tool.AddTool(GetDlgItem(IDC_COMBO1),L"Change CPen Width");
	m_tool.Activate(TRUE);
	CButton *bt=(CButton*)GetDlgItem(IDC_RADIO1);
	bt->SetCheck(1);
	OnBnClickedRadio1();
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CmfcHagashProjectDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CmfcHagashProjectDlg::OnPaint()
{
	
	
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		//Print Shapes
			CPaintDC dc(this);
		
		for (int i=0;i<shapes.GetSize();i++)
		{
		
				shapes[i]->draw(dc);
		}
		
			
			
			  
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CmfcHagashProjectDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}




//About Model
void CmfcHagashProjectDlg::OnAboutAboutpaint()
{
	// TODO: Add your command handler code here
	CAboutDlg dlgAbout;
	dlgAbout.DoModal();
}

//Menu Exit 
void CmfcHagashProjectDlg::OnFileExit()
{
	// TODO: Add your command handler code here
	
	EndDialog(IDOK);
}

//////////////////////////////////////////////////Mouse Handle////////////////
void CmfcHagashProjectDlg::OnMouseMove(UINT nFlags, CPoint point)
{ //Mouse Move
	
	CPen pen;//Add Pen To Recreate Shape
	CBrush brush;//Add Brush To Recreate Shape
	CClientDC dc(this);//Add Client Dc
	dc.SetROP2(R2_NOTXORPEN);
	

	if(isPressed)//if isPressed try draw function
	{
		//set new End to shape
		pen.CreatePen(PS_SOLID,penWidth,m_selectCL);
		brush.CreateSolidBrush(m_selectCL2);
		dc.SelectObject(&pen);
		dc.SelectObject(&brush);
		shapePtr->draw(dc);
		
		shapePtr->setEnd(CPoint(point.x,point.y));
		shapePtr->draw(dc);
		//Invalidate Rect only only inside Rectagnle 
		CRect rect;
		GetClientRect(rect);
		rect.left+=140;
		rect.right-=15;
		rect.top+=60;
		rect.bottom-=50;
		//InvalidateRect(&rect);
	}
	else if(isSelected)
	{//Move Shape inside th
		int offSetx, offSety;
		pen.CreatePen(PS_SOLID,selectShape->getPenWidth(),selectShape->getForeGround());
		brush.CreateSolidBrush(selectShape->getBackGround());
		dc.SelectObject(&pen);
		dc.SelectObject(&brush);
		selectShape->draw(dc);
		start = end;
		end = point;
		offSetx = end.x-start.x;
		offSety = end.y-start.y;
		int x1=selectShape->getBegin().x + offSetx;
		int y1=selectShape->getBegin().y + offSety;
		int x2=selectShape->getEnd().x+offSetx;
		int y2=selectShape->getEnd().y+offSety;
		selectShape->setBegin(CPoint(x1,y1));
		selectShape->setEnd(CPoint(x2,y2));
		selectShape->draw(dc);
	}
	

	
	//get x,y cursor point
	CString cs;
	cs.Format(L"x=%i, y=%i",point.x,point.y);
	m_stat.SetPaneText(0,cs);
	CDialogEx::OnMouseMove(nFlags, point);
}


//On left Button Down
void CmfcHagashProjectDlg::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	switch(currFigure)
	{
	case 0:
		shapePtr=new MyLine;
		break;
	case 1:
		shapePtr=new MyRectangle;
		break;
	case 2:
		shapePtr=new MyEllipse;
		break;
	case 3:
		shapePtr=new MyTriangle;
		break;
	case 4:
		shapePtr=new MyRoundedRect;
		break;
	case 5:
		shapePtr=new MySquare;
		break;
	}
	shapePtr->setPenWidth(penWidth);
	shapePtr->setForeGround(m_selectCL);
	shapePtr->setBackGround(m_selectCL2);
	
	//begin Pointer left button
	
	shapePtr->setBegin(CPoint(point.x,point.y));
	shapePtr->setEnd(CPoint(point.x,point.y));
	isPressed=true;
	
	CDialogEx::OnLButtonDown(nFlags, point);
}

//left button up for creating shape
void CmfcHagashProjectDlg::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	if(isPressed)
	{
		isPressed=false;
		
		

		
		shapes.Add(shapePtr);
		CRect rect;
		GetClientRect(rect);
		rect.left+=130;
		rect.right-=15;
		rect.top+=50;
		rect.bottom-=50;
		InvalidateRect(&rect);
		
	}
	
	CDialogEx::OnLButtonUp(nFlags, point);
}
//right button down for move shape
void CmfcHagashProjectDlg::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	int i=shapes.GetSize()-1;
	start=end=point;
	if(deleteOBJ)
	{
		deleteOBJ=false;
		while (i >= 0 && !isSelected)
		{
			
				if(shapes[i]->InArea(point.x,point.y))
				{
					
					redo.Add(shapes[i]);
					
					shapes.RemoveAt(i);
					break;

				}
			i--;
		}

	}
	else
		while (i >= 0 && !isSelected)
		{//search if the point in area of the shape
			if(shapes[i]->InArea(point.x,point.y))
			{
				if(m_ischangeCL)
				{
					shapes[i]->setBackGround(m_selectCL2);
					Invalidate();
					m_ischangeCL=false;
					break;
				}
				else if(m_ischangeCL2)
				{
					shapes[i]->setForeGround(m_selectCL);
					Invalidate();
					m_ischangeCL2=false;
					break;
				}
				else if(m_ispenWidth)
				{
					shapes[i]->setPenWidth(penWidth);
					Invalidate();
					m_ispenWidth=false;
					break;
				}
				else
				{
				selectShape = shapes[i];
				shapes.RemoveAt(i);
				isSelected = true;
				break;
				}
				
			}
			i--;
		}
	
	CRect rect;
	GetClientRect(rect);
	rect.left+=130;
	rect.right-=15;
	rect.top+=50;
	rect.bottom-=50;
	InvalidateRect(&rect);
	CDialogEx::OnRButtonDown(nFlags, point);
}

void CmfcHagashProjectDlg::OnRButtonUp(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	if (isSelected)
	{
		MyShape *temp;
		if (typeid(MyRectangle) == typeid(*selectShape)) temp = new MyRectangle;
		else if (typeid(MyEllipse) == typeid(*selectShape)) temp = new MyEllipse;
		else if (typeid(MyLine) == typeid(*selectShape)) temp = new MyLine;
		else if (typeid(MyTriangle) == typeid(*selectShape)) temp = new MyTriangle;
		else if (typeid(MyRoundedRect) == typeid(*selectShape)) temp = new MyRoundedRect;
		else if (typeid(MySquare) == typeid(*selectShape))temp= new MySquare;
		
		*temp = *selectShape;
		shapes.Add(temp);


		
		Invalidate();
		isSelected = false;
	}
	CDialogEx::OnRButtonUp(nFlags, point);
}
//////////////////////////////////////////////////////////////////////////////
///File New Clear Desktop
void CmfcHagashProjectDlg::OnFileNew32771()
{
	// TODO: Add your command handler code here
	
	int i=shapes.GetSize()-1;
	for (;i>=0;i--)
	{
		delete shapes[i];
	}
	shapes.RemoveAll();
	i=redo.GetSize()-1;
	for (;i>=0;i--)
	{
		delete redo[i];
	}
	redo.RemoveAll();
	Invalidate();
	isErased=true;
	isPressed=false;
}

////Undo
void CmfcHagashProjectDlg::OnEditUndo32775()
{
	// TODO: Add your command handler code here
	int i=shapes.GetSize()-1;
	if(!shapes.IsEmpty())
	{

	

	redo.Add(shapes[i]);
	shapes.RemoveAt(i);
	Invalidate();
	}
	
}

///Redo
void CmfcHagashProjectDlg::OnEditRedo32776()
{
	// TODO: Add your command handler code here
	int i=redo.GetSize()-1;

	if(!redo.IsEmpty())
	{
	

		
	shapes.Add(redo[i]);
	redo.RemoveAt(i);
	Invalidate();
	}
	
	
}

//Menu Button Undo inside Edit call another button
void CmfcHagashProjectDlg::OnIdiEditUndo()
{
	// TODO: Add your command handler code here
	OnEditUndo32775();
}

//Menu Button Redo inside Edit call another button
void CmfcHagashProjectDlg::OnIdiEditRedo()
{
	// TODO: Add your command handler code here
	OnEditRedo32776();
}

//Button in Menu Save
void CmfcHagashProjectDlg::OnFileSave32772()
{
	// TODO: Add your command handler code here
	CFile file(L"shape.alp", CFile::modeCreate|CFile::modeWrite);
	CArchive ar(&file,CArchive::store);
	shapes.Serialize(ar);
	ar.Close();
	file.Close();
}

//Button in Menu Load
void CmfcHagashProjectDlg::OnFileLoad()
{
	// TODO: Add your command handler code here
	OnFileNew32771();
	CFile file(L"shape.alp", CFile::modeRead);
	CArchive ar(&file,CArchive::load);

	shapes.Serialize(ar);
	ar.Close();
	file.Close();
	Invalidate();
	UpdateWindow();
}

//ToolBar Button Load
void CmfcHagashProjectDlg::OnIdiFileLoad()
{
	// TODO: Add your command handler code here
	OnFileLoad();
}
//ToolBar Button Save
void CmfcHagashProjectDlg::OnIdiFileSave()
{
	// TODO: Add your command handler code here
	OnFileSave32772();
}
//Color Dialog ForeGround Color
void CmfcHagashProjectDlg::OnBnClickedMfccolorbutton2()
{
	// TODO: Add your control notification handler code here
	
	m_selectCL=m_colorCTRL.GetColor();
	
	
}
//Color Dialog BackGround Color
void CmfcHagashProjectDlg::OnBnClickedMfccolorbutton3()
{
	// TODO: Add your control notification handler code here
	
	m_selectCL2=m_colorCtrl2.GetColor();
}

//Shape Line Button On Menu
void CmfcHagashProjectDlg::OnShapesLine()
{
	// TODO: Add your command handler code here
	currFigure=Line;
}

//Shape Rectangle Button On Menu
void CmfcHagashProjectDlg::OnShapesRectangle()
{
	// TODO: Add your command handler code here
	currFigure=Rectangle;
}

//Shape Ellipse Button On Menu
void CmfcHagashProjectDlg::OnShapesEllipse()
{
	// TODO: Add your command handler code here
	currFigure=Ellipse;

}



void CmfcHagashProjectDlg::OnIdiShapeSquare()
{
	// TODO: Add your command handler code here
	currFigure=Square;
}
//Choice Shape Triangle Menu
void CmfcHagashProjectDlg::OnShapesTriangle()
{
	// TODO: Add your command handler code here
	OnIdiShapeTria();

}
void CmfcHagashProjectDlg::OnShapesRoundrect()
{
	// TODO: Add your command handler code here
	OnIdiShapeRoundedr();

}


void CmfcHagashProjectDlg::OnShapesSquare()
{
	// TODO: Add your command handler code here
	OnIdiShapeSquare();
}

//Shape Triangle Button On Toolbar
void CmfcHagashProjectDlg::OnIdiShapeTria()
{
	// TODO: Add your command handler code here
	currFigure=Triangle;
}

void CmfcHagashProjectDlg::OnIdiShapeRoundedr()
{
	// TODO: Add your command handler code here
	currFigure=RoundRectangle;
}

//Shape Line Button On ToolBar
void CmfcHagashProjectDlg::OnIdiShapeLine()
{
	// TODO: Add your command handler code here
	OnShapesLine();
}

//Shape Rectangle Button On ToolBar
void CmfcHagashProjectDlg::OnIdiShapeRect()
{
	// TODO: Add your command handler code here
	OnShapesRectangle();
}

//Shape Ellipse Button On ToolBar
void CmfcHagashProjectDlg::OnIdiShapeEllipse()
{
	// TODO: Add your command handler code here
	OnShapesEllipse();
}




//New File ToolBar
void CmfcHagashProjectDlg::OnIdiClearfile()
{
	// TODO: Add your command handler code here
	OnFileNew32771();
}

//Call Color Dialog from Menu ForeGround
void CmfcHagashProjectDlg::OnOptionsEditfgcolor()
{
	// TODO: Add your command handler code here
	CColorDialog m_colorCTRLFG;
	if(m_colorCTRLFG.DoModal()==IDOK)
	{
		m_selectCL=m_colorCTRLFG.GetColor();
		m_colorCTRL.SetColor(m_selectCL);
		m_ischangeCL2=true;
	}
	
}

//Call Color Dialog from Menu BackGround
void CmfcHagashProjectDlg::OnOptionsEditbgcolor()
{
	// TODO: Add your command handler code here
	CColorDialog m_colorCTRLBG;
	if(m_colorCTRLBG.DoModal()==IDOK)
	{
		m_selectCL2=m_colorCTRLBG.GetColor();
		m_colorCtrl2.SetColor(m_selectCL2);
		m_ischangeCL=true;
	}
	
}

//Get Pen Width Selection
void CmfcHagashProjectDlg::OnCbnSelchangeCombo1()
{
	// TODO: Add your control notification handler code here
	switch(m_comboCtrl.GetCurSel())
	{
	case 0:
		penWidth=2;
		break;
	case 1:
		penWidth=4;
		break;
	case 2:
		penWidth=8;
		break;
	}
}

//Pen Size 2
void CmfcHagashProjectDlg::OnPenwidthSize1()
{
	// TODO: Add your command handler code here
	penWidth=2;
	m_ispenWidth=true;
	m_comboCtrl.SetCurSel(0);
}

//Pen Size 4
void CmfcHagashProjectDlg::OnPenwidthSize2()
{
	// TODO: Add your command handler code here
	penWidth=4;
	m_ispenWidth=true;
	m_comboCtrl.SetCurSel(1);
}

//Pen Size 8
void CmfcHagashProjectDlg::OnPenwidthLarge()
{
	// TODO: Add your command handler code here
	penWidth=8;
	m_ispenWidth=true;
	m_comboCtrl.SetCurSel(2);
}

//Get Current Time on Status Bar
void CmfcHagashProjectDlg::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: Add your message handler code here and/or call default
	
	CDialogEx::OnTimer(nIDEvent);
}

//Get Cursor Select Buttons Text
BOOL CmfcHagashProjectDlg::OnSetCursor(CWnd* pWnd, UINT nHitTest, UINT message)
{
	// TODO: Add your message handler code here and/or call default
	CString cs;
	CToolBar *stool=(CToolBar*)GetDlgItem(IDR_TOOLBAR1);
	CToolBarCtrl tool;
	pWnd->GetWindowText(cs);
	m_stat.SetPaneText(2,cs);
	int nID=pWnd->GetDlgCtrlID();
	
	if(pWnd==this)
		m_stat.SetPaneText(2,L"AlpPaint");
	else
	{

	
		if(!cs.LoadString(nID))
		{
			cs.Format(L"%i",nID);
		}
		m_stat.SetPaneText(2,cs);
	}
	
		
	
	
	
	return CDialogEx::OnSetCursor(pWnd, nHitTest, message);
}


void CmfcHagashProjectDlg::OnInitMenu(CMenu* pMenu)
{
	

	CDialogEx::OnInitMenu(pMenu);
	p_menu=pMenu;
	// TODO: Add your message handler code here
}


void CmfcHagashProjectDlg::OnMenuSelect(UINT nItemID, UINT nFlags, HMENU hSysMenu)
{
	CDialogEx::OnMenuSelect(nItemID, nFlags, hSysMenu);
	CString cs;
	p_menu->GetMenuString(nItemID,cs,MF_BYCOMMAND);
	m_stat.SetPaneText(2,cs);
	// TODO: Add your message handler code here
}


BOOL CmfcHagashProjectDlg::PreTranslateMessage(MSG* pMsg)
{
	m_tool.RelayEvent(pMsg);
	return CDialogEx::PreTranslateMessage(pMsg);
}


BOOL CmfcHagashProjectDlg::OnEraseBkgnd(CDC* pDC)
{
	
	// TODO: Add your message handler code here and/or call default
	
	return CDialogEx::OnEraseBkgnd(pDC);
}


HBRUSH CmfcHagashProjectDlg::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialog::OnCtlColor(pDC, pWnd, nCtlColor);

	// Are we painting the IDC_MYSTATIC control? We can use
	// CWnd::GetDlgCtrlID() to perform the most efficient test.
	/*if (pWnd->GetDlgCtrlID() == IDC_STATICPIC)
	{
		pDC->SetBkColor(RGB(255,255,255));
		return (HBRUSH)brush.GetSafeHandle();
	}*/
	if (pWnd->GetDlgCtrlID() == IDC_STATICPIC)
	{
		pDC->SetBkColor(RGB(255,255,255));
		return (HBRUSH)brush.GetSafeHandle();
	}
	return hbr;

	
	//return brush;
}




void CmfcHagashProjectDlg::OnButtonRec()
{
	// TODO: Add your command handler code here
	deleteOBJ=true;
}


void CmfcHagashProjectDlg::OnEditEraseshape()
{
	// TODO: Add your command handler code here
	deleteOBJ=true;
}


void CmfcHagashProjectDlg::OnBnClickedRadio1()
{
	// TODO: Add your control notification handler code here
	m_myToolBar.GetToolBarCtrl().EnableButton(ID_BUTTON_REC,0);
	m_myToolBar.GetToolBarCtrl().EnableButton(ID_BUTTON_BGCOLOR,0);
	m_myToolBar.GetToolBarCtrl().EnableButton(ID_BUTTON_FGCOLOR,0);
	
	CMenu* pMenu = GetMenu();
	pMenu->EnableMenuItem(ID_OPTIONS_EDITFGCOLOR,1);
	pMenu->EnableMenuItem(ID_OPTIONS_EDITBGCOLOR,1);
	pMenu->EnableMenuItem(ID_EDIT_ERASESHAPE,1);
	pMenu->EnableMenuItem(ID_PENWIDTH_SIZE1,1);
	pMenu->EnableMenuItem(ID_PENWIDTH_SIZE2,1);
	pMenu->EnableMenuItem(ID_PENWIDTH_LARGE,1);
}


void CmfcHagashProjectDlg::OnBnClickedRadio2()
{
	// TODO: Add your control notification handler code here
	m_myToolBar.GetToolBarCtrl().EnableButton(ID_BUTTON_REC,1);
	m_myToolBar.GetToolBarCtrl().EnableButton(ID_BUTTON_BGCOLOR,1);
	m_myToolBar.GetToolBarCtrl().EnableButton(ID_BUTTON_FGCOLOR,1);
	CMenu* pMenu = GetMenu();
	pMenu->EnableMenuItem(ID_OPTIONS_EDITFGCOLOR,0);
	pMenu->EnableMenuItem(ID_OPTIONS_EDITBGCOLOR,0);
	pMenu->EnableMenuItem(ID_EDIT_ERASESHAPE,0);
	pMenu->EnableMenuItem(ID_PENWIDTH_SIZE1,0);
	pMenu->EnableMenuItem(ID_PENWIDTH_SIZE2,0);
	pMenu->EnableMenuItem(ID_PENWIDTH_LARGE,0);
	
}

BOOL CmfcHagashProjectDlg::OnToolTipText(UINT, NMHDR* pNMHDR, LRESULT* pResult)
{
	ASSERT(pNMHDR->code == TTN_NEEDTEXTA || pNMHDR->code == TTN_NEEDTEXTW);

	// if there is a top level routing frame then let it handle the message
	if (GetRoutingFrame() != NULL) return FALSE;

	// to be thorough we will need to handle UNICODE versions of the message also !!
	TOOLTIPTEXTA* pTTTA = (TOOLTIPTEXTA*)pNMHDR;
	TOOLTIPTEXTW* pTTTW = (TOOLTIPTEXTW*)pNMHDR;
	TCHAR szFullText[512];
	CString strTipText;
	UINT nID = pNMHDR->idFrom;

	if (pNMHDR->code == TTN_NEEDTEXTA && (pTTTA->uFlags & TTF_IDISHWND) ||
		pNMHDR->code == TTN_NEEDTEXTW && (pTTTW->uFlags & TTF_IDISHWND))
	{
		// idFrom is actually the HWND of the tool 
		nID = ::GetDlgCtrlID((HWND)nID);
	}

	if (nID != 0) // will be zero on a separator
	{
		AfxLoadString(nID, szFullText);
		strTipText=szFullText;

#ifndef _UNICODE
		if (pNMHDR->code == TTN_NEEDTEXTA)
		{
			lstrcpyn(pTTTA->szText, strTipText, sizeof(pTTTA->szText));
		}
		else
		{
			_mbstowcsz(pTTTW->szText, strTipText, sizeof(pTTTW->szText));
		}
#else
		if (pNMHDR->code == TTN_NEEDTEXTA)
		{
			_wcstombsz(pTTTA->szText, strTipText,sizeof(pTTTA->szText));
		}
		else
		{
			lstrcpyn(pTTTW->szText, strTipText, sizeof(pTTTW->szText));
		}
#endif

		*pResult = 0;

		// bring the tooltip window above other popup windows
		::SetWindowPos(pNMHDR->hwndFrom, HWND_TOP, 0, 0, 0, 0,
			SWP_NOACTIVATE|SWP_NOSIZE|SWP_NOMOVE|SWP_NOOWNERZORDER);

		return TRUE;
	}

	return FALSE;
}


void CmfcHagashProjectDlg::OnButtonBgcolor()
{
	// TODO: Add your command handler code here
	
		OnOptionsEditbgcolor();
}


void CmfcHagashProjectDlg::OnButtonFgcolor()
{
	// TODO: Add your command handler code here
	OnOptionsEditfgcolor();
}
