#include "../include/GV.h"
#include <easyx.h>
#include <string.h>

extern int FLAG_MODE;


void menu()

{
	FLAG_SINGLE_DOUBLE = 1;
	initgraph(1280, 720);
	//initgraph(1280,720 );

	IMAGE img;
	loadimage(&img, "C:\\Users\\WY\\Desktop\\杂七杂八\\dat\\img\\LOGIN\\login.jpg");
	putimage(0, 0, &img);


	//closegraph();
	setfillstyle(BS_SOLID);

	MOUSEMSG m;
	//solidrectangle(740, 340, 1030, 3);

	int FLAG_WANYI = 1;


	while (FLAG_WANYI)
	{	
		FLAG_WANYI = 1;
		
		
		m = GetMouseMsg();				// 判断是否按下鼠标
		if (m.x >= 740 && m.x <= 1030 && m.y >= 340 && m.y <= 390)
		{
			setlinecolor(BLUE);			// 选中框框线条颜色
			rectangle(740, 340, 1030, 390);
			if (m.uMsg == WM_LBUTTONDOWN)
			{
				cleardevice();
				FLAG_WANYI = 0;
				

			}




			//login_gui();
		}
		else if (m.x >= 740 && m.x <= 1030 && m.y >= 410 && m.y <= 460)
		{
			setlinecolor(BLUE);			// 选中框框线条颜色
			rectangle(740, 410, 1030, 460);
			if (m.uMsg == WM_LBUTTONDOWN)
			{
				cleardevice();
				if (FLAG_MODE == 1)	FLAG_MODE = 0;
				if(FLAG_MODE == 0)	FLAG_MODE = 1;

			}
		}
		else if (m.x >= 740 && m.x <= 1030 && m.y >= 470 && m.y <= 530)
		{
			setlinecolor(BLUE);			// 选中框框线条颜色
			rectangle(740, 470, 1030, 530);
			if (m.uMsg == WM_LBUTTONDOWN)
			{
				cleardevice();
				switch (FLAG_SINGLE_DOUBLE) {
				
				case 1:FLAG_SINGLE_DOUBLE = 2; break;
				case 2:FLAG_SINGLE_DOUBLE = 1; break;
				default: FLAG_SINGLE_DOUBLE = 0;
				}
			//TODO : 提示标符号


			}
		}
		else if (m.x >= 740 && m.x <= 1030 && m.y >= 550 && m.y <= 610)
		{
			setlinecolor(BLUE);			// 选中框框线条颜色
			rectangle(740, 550, 1030, 610);
			if (m.uMsg == WM_LBUTTONDOWN)
			{
				cleardevice();
				FLAG_WANYI = 0;


			}
		}
		else if (m.x >= 740 && m.x <= 1030 && m.y >= 620 && m.y <= 680)
		{
			setlinecolor(BLUE);			// 选中框框线条颜色
			rectangle(740, 620, 1030, 680);
			if (m.uMsg == WM_LBUTTONDOWN)
			{
				cleardevice();
				FLAG_WANYI = 0;


			}
		}

		else {
			setlinecolor(BLACK);
			rectangle(740, 340, 1030, 390), rectangle(740, 410, 1030, 460); rectangle(740, 470, 1030, 530); rectangle(740, 550, 1030, 610); rectangle(740, 620, 1030, 680);
		}


	}
	closegraph();
}