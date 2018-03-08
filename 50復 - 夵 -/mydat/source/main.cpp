#define GLOBAL_INSTANCE 
#include "../include/GV.h"
#include <easyx.h>

extern int FLAG_MODE = 0;

//儖乕僾偱昁偢峴偆俁戝張棟
int ProcessLoop(){
	if(ProcessMessage()!=0)return -1;//僾儘僙僗張棟偑僄儔乕側傜-1傪曉偡
	if(ClearDrawScreen()!=0)return -1;//夋柺僋儕傾張棟偑僄儔乕側傜-1傪曉偡
	GetHitKeyStateAll_2();//尰嵼偺僉乕擖椡張棟傪峴偆
	GetHitPadStateAll();  //尰嵼偺僷僢僪擖椡張棟傪峴偆
	return 0;
}

void menu()
{
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
				FLAG_MODE = 0;

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
				FLAG_WANYI = 0;
				FLAG_MODE = 1;

			}
		}
		else if (m.x >= 740 && m.x <= 1030 && m.y >= 470 && m.y <= 530)
		{
			setlinecolor(BLUE);			// 选中框框线条颜色
			rectangle(740, 470, 1030, 530);
			if (m.uMsg == WM_LBUTTONDOWN)
			{
				cleardevice();
				FLAG_WANYI = 0;


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
}


int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nCmdShow){
	
	
	menu();
	closegraph();
	ChangeWindowMode(FLAG_MODE);//僂傿儞僪僂儌乕僪
	if(DxLib_Init() == -1 || SetDrawScreen( DX_SCREEN_BACK )!=0) return -1;//弶婜壔偲棤夋柺壔

	while(ProcessLoop()==0){//儊僀儞儖乕僾
		music_ini();
		switch(func_state){
			case 0://弶夞偺傒擖傞張棟
				load();		//僨乕僞儘乕僪
				first_ini();//弶夞偺弶婜壔
				func_state=99;
				break;
			case 99://STG傪巒傔傞慜偵峴偆弶婜壔
				ini();
				load_story();
				func_state=100;
				break;
			case 100://捠忢張棟
								
				calc_ch();       
				ch_move();       
				cshot_main();    
				enemy_main();	 
				boss_shot_main();
				shot_main();	 
				out_main();  	 
				effect_main();   
				calc_main();	 
				graph_main();    
				bgm_main();		 
				if(boss.flag==0)
					stage_count++;
				break;
			default:
				printfDx("晄柧側func_state\n");
				break;
		}
		music_play();			
		fps_wait();				 
		if(CheckStateKey(KEY_INPUT_ESCAPE)==1)break;//僄僗働乕僾偑擖椡偝傟偨傜僽儗僀僋
		ScreenFlip();//棤夋柺斀塮
		count++;

	}
	DxLib_End();//俢倃儔僀僽儔儕廔椆張棟
	return 0;
}
