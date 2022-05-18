#pragma warning(disable:4305)


#define		MENUFOLDER		1
#define		MENUTEXT		2
#define		MENUITEM		3
#define		MENUCAT			4
#define		MENUMAXITEMS	100

typedef struct {
	int  typ;
	wchar_t *txt;
	wchar_t **opt;
	int  *var;
	int  maxvalue;
} tMENUXNN;

class XNNMenu
{
	public:
		bool bInit;

		enum{
			L_TEXT,
			R_TEXT,
			C_TEXT
		};

		XNNMenu() {
			Mpos=0;
			Mmax=0;
			Mxofs =150.0f;
			Mysize=15.0f;
			Mvisible=1;
			MENU=(tMENU **) malloc(4*MENUMAXITEMS);
			for(int i=0; i<MENUMAXITEMS; i++) MENU[i]=(tMENU *) malloc(sizeof(tMENU));
		}
		~XNNMenu() {
			for(int i=0; i<MENUMAXITEMS; i++) free(MENU[i]);
			free(MENU);
		}		
		int		Mmax;
		tMENU	**MENU;


		void	DrawString(UCanvas* pCanvas, int x, int y, FColor color, int mode, wchar_t *text);
		void	AddFolder(wchar_t *txt, wchar_t **opt, int *var, int maxvalue);
		void	AddCategory(wchar_t *txt, wchar_t **opt, int *var, int maxvalue);
		void	AddItem(wchar_t *txt, wchar_t **opt, int *var, int maxvalue);
		void	Crosshair(UCanvas* pCanvas, FColor Color);
		void	AddText(wchar_t *txt, wchar_t *opt);
		void	MenuShow(float x, float y, UCanvas* pCanvas);
		void	MenuNav(void);
		void    RebuildMenu(void);

		void SetTitle(wchar_t* Title);
		wchar_t* GetFormattedDate();
		wchar_t* GetFormattedTime();
	
		wchar_t CurrentDate[256];
		wchar_t CurrentTime[20];

	private:
		wchar_t	Mtitle[50];
		int 	Mpos;
		float	Mxofs;
		float	Mysize;
		int		Mvisible;
		int		YPOS;
};



void XNNMenu::DrawString(UCanvas* pCanvas, int x, int y, FColor color, int mode, wchar_t *text)
{
	pCanvas->Font = Eng->GetMediumFont();

	pCanvas->CurY = y;
	pCanvas->DrawColor = color;

	if (mode == L_TEXT)
	{
		pCanvas->CurX = x;
	}
	else if (mode == R_TEXT)
	{
		float X, Y;
		pCanvas->StrLen(text, &X, &Y);

		X *= 1.0;
		Y *= 1.0;

		pCanvas->CurX = x - X;
	}
	else if (mode == C_TEXT)
	{
		float X, Y;
		pCanvas->StrLen(text, &X, &Y);

		X *= 1.0;
		Y *= 1.0;

		pCanvas->CurX = x - (X/2);
	}

	pCanvas->DrawTextA(text, NULL, 1.0, 1.0, NULL);
}

void XNNMenu::AddFolder(wchar_t *txt, wchar_t **opt, int *var, int maxvalue)
{
	MENU[Mmax]->typ = MENUFOLDER;
	MENU[Mmax]->txt = txt;
	MENU[Mmax]->opt = opt;
	MENU[Mmax]->var = var;
	MENU[Mmax]->maxvalue = maxvalue;
	Mmax++;
}

void XNNMenu::AddCategory(wchar_t *txt, wchar_t **opt, int *var, int maxvalue)
{
	MENU[Mmax]->typ = MENUCAT;
	MENU[Mmax]->txt = txt;
	MENU[Mmax]->opt = opt;
	MENU[Mmax]->var = var;
	MENU[Mmax]->maxvalue = maxvalue;
	Mmax++;
}

void XNNMenu::AddItem(wchar_t *txt, wchar_t **opt, int *var, int maxvalue)
{
	MENU[Mmax]->typ = MENUITEM;
	MENU[Mmax]->txt = txt;
	MENU[Mmax]->opt = opt;
	MENU[Mmax]->var = var;
	MENU[Mmax]->maxvalue = maxvalue;
	Mmax++;
}

void XNNMenu::AddText(wchar_t *txt, wchar_t *opt)
{
	MENU[Mmax]->typ = MENUTEXT;
	MENU[Mmax]->txt = txt;
	MENU[Mmax]->opt = (wchar_t **)opt;
	MENU[Mmax]->var = 0;
	MENU[Mmax]->maxvalue = 0;
	Mmax++;
}

void XNNMenu::SetTitle(wchar_t* Title)
{
	wcscpy(Mtitle, Title);
}
wchar_t* XNNMenu::GetFormattedDate()
{
	static wchar_t logbuf[256] = L"";
	struct tm * current_tm = NULL;
	time_t current_time;
	time (&current_time);
	current_tm = localtime (&current_time);
	wchar_t *month	[] = {L"Jan,",L"Feb,",L"Mar,",L"Apr,",L"May,",L"June,",L"July,",L"Aug,",L"Sept,",L"Oct,",L"Nov,"L"Dec,"};
	swprintf( logbuf, L"%s %02d, 20%d",month[current_tm->tm_mon],current_tm->tm_mday,current_tm->tm_year-100);
	return logbuf;
}
wchar_t* XNNMenu::GetFormattedTime()
{
	static wchar_t ctime[20] = L"" ;
	struct tm * current_tm;
	time_t current_time;
	time (&current_time);
	current_tm = localtime (&current_time);
	if(current_tm->tm_hour>12)
		swprintf( ctime, L"%d:%02d:%02d PM", current_tm->tm_hour - 12, current_tm->tm_min, current_tm->tm_sec );
	else
		swprintf( ctime, L"%d:%02d:%02d AM", current_tm->tm_hour, current_tm->tm_min, current_tm->tm_sec );
	return ctime;
}

void XNNMenu::Crosshair(UCanvas* pCanvas, FColor Color)
{
	pCanvas->Draw2DLine(pCanvas->ClipX / 2 - 10, pCanvas->ClipY / 2, pCanvas->ClipX / 2 + 10, pCanvas->ClipY / 2, Color);
	pCanvas->Draw2DLine(pCanvas->ClipX / 2 , pCanvas->ClipY / 2 -10, pCanvas->ClipX / 2 , pCanvas->ClipY / 2 +10, Color);
}

void XNNMenu::MenuShow(float x, float y, UCanvas* pCanvas)
{
	x+=100;
	int i, val;
	FColor color;
	wchar_t text[100];
	if (!Mvisible) return;
	DrawString(pCanvas, (x + (Mxofs / 2)), y, MakeColor2(255, 255, 255, 000), C_TEXT, Mtitle);
	y+=Mysize;
	
	for (i = 0; i<Mmax; i++) {
		val = (MENU[i]->var) ? (*MENU[i]->var) : 0;
		swprintf_s(text, L"%s", MENU[i]->txt);
		if (i == Mpos) {
			color = MakeColor2(255, 19, 84, 199);
			//swprintf_s(text, L"~> %s <~", MENU[i]->txt);
		}
		else if (MENU[i]->typ == MENUFOLDER)
			color = MakeColor2(255, 245, 000, 000);
		else if (MENU[i]->typ == MENUTEXT)
			color = MakeColor2(255, 255, 255, 000);
		else
			color = (val) ? MakeColor2(255, 000, 255, 000) : MakeColor2(255, 255, 255, 255);
		if (MENU[i]->opt) {
			if (MENU[i]->typ == MENUFOLDER) {
				DrawString(pCanvas, x - 30, y, color, L_TEXT, text);
				y = y + 2;
			}
			else
				DrawString(pCanvas, x - 30, y, color, L_TEXT, text);
		}
		if (MENU[i]->opt) {
			if (MENU[i]->typ == MENUTEXT)
				DrawString(pCanvas, (x + Mxofs), y - 1, color, L_TEXT, (wchar_t *)MENU[i]->opt);
			else
				DrawString(pCanvas, (x + Mxofs), y - 1, color, L_TEXT, (wchar_t *)MENU[i]->opt[val]);
		}
		y += Mysize;
	}
	YPOS = y;
}

void XNNMenu::MenuNav(void)
{
	//if (GetKey(VK_F1) & 1) Mvisible = (!Mvisible);//64 Bit
	if (IsKeyDown(DIK_DELETE)) {
		Mvisible = !Mvisible;//32 Bit
	}
//=============================
	if (!Mvisible) return;

	//if (GetKey(VK_UP) & 1) {//64 bit
	if (IsKeyDown(DIK_UP)){//32bit
		do {
			Mpos--;
			if (Mpos<0) Mpos = Mmax - 1;
		} while (MENU[Mpos]->typ == MENUTEXT);
	}
	//else if (GetKey(VK_DOWN) & 1) {//64bit
	else if (IsKeyDown(DIK_DOWN)){//32bit
		do {
			Mpos++;
			if (Mpos == Mmax) Mpos = 0;
		} while (MENU[Mpos]->typ == MENUTEXT);
	}
	else if (MENU[Mpos]->var) {
		int dir = 0;
//=============================== 32 BIT============================================
		if (IsKeyDown(DIK_LEFT) && *MENU[Mpos]->var > 0) dir = -1;
		if (IsKeyDown(DIK_RIGHT) && *MENU[Mpos]->var <(MENU[Mpos]->maxvalue - 1)) dir = 1;
//===============================64 BIT============================================
		//if (GetKey(VK_LEFT) & 1 && *MENU[Mpos]->var > 0) dir = -1;
		//if (GetKey(VK_RIGHT) & 1 && *MENU[Mpos]->var <(MENU[Mpos]->maxvalue - 1)) dir = 1;
//==================================================================================
		if (dir) {
			*MENU[Mpos]->var += dir;
			if (MENU[Mpos]->typ == MENUFOLDER) 	Mmax = 0;
			if (MENU[Mpos]->typ == MENUCAT) Mmax = 0;
		}
	}
}