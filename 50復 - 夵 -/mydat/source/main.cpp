#define GLOBAL_INSTANCE 
#include "../include/GV.h"
#include <easyx.h>

extern int FLAG_MODE = 0;

//���[�v�ŕK���s���R�又��
int ProcessLoop(){
	if(ProcessMessage()!=0)return -1;//�v���Z�X�������G���[�Ȃ�-1��Ԃ�
	if(ClearDrawScreen()!=0)return -1;//��ʃN���A�������G���[�Ȃ�-1��Ԃ�
	GetHitKeyStateAll_2();//���݂̃L�[���͏������s��
	GetHitPadStateAll();  //���݂̃p�b�h���͏������s��
	return 0;
}

void menu()
{
	initgraph(1280, 720);
	//initgraph(1280,720 );

	IMAGE img;
	loadimage(&img, "C:\\Users\\WY\\Desktop\\�����Ӱ�\\dat\\img\\LOGIN\\login.jpg");
	putimage(0, 0, &img);


	//closegraph();
	setfillstyle(BS_SOLID);

	MOUSEMSG m;
	//solidrectangle(740, 340, 1030, 3);

	int FLAG_WANYI = 1;
	

	while (FLAG_WANYI)
	{
		FLAG_WANYI = 1;
		m = GetMouseMsg();				// �ж��Ƿ������
		if (m.x >= 740 && m.x <= 1030 && m.y >= 340 && m.y <= 390)
		{
			setlinecolor(BLUE);			// ѡ�п��������ɫ
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
			setlinecolor(BLUE);			// ѡ�п��������ɫ
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
			setlinecolor(BLUE);			// ѡ�п��������ɫ
			rectangle(740, 470, 1030, 530);
			if (m.uMsg == WM_LBUTTONDOWN)
			{
				cleardevice();
				FLAG_WANYI = 0;


			}
		}
		else if (m.x >= 740 && m.x <= 1030 && m.y >= 550 && m.y <= 610)
		{
			setlinecolor(BLUE);			// ѡ�п��������ɫ
			rectangle(740, 550, 1030, 610);
			if (m.uMsg == WM_LBUTTONDOWN)
			{
				cleardevice();
				FLAG_WANYI = 0;


			}
		}
		else if (m.x >= 740 && m.x <= 1030 && m.y >= 620 && m.y <= 680)
		{
			setlinecolor(BLUE);			// ѡ�п��������ɫ
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
	ChangeWindowMode(FLAG_MODE);//�E�B���h�E���[�h
	if(DxLib_Init() == -1 || SetDrawScreen( DX_SCREEN_BACK )!=0) return -1;//�������Ɨ���ʉ�

	while(ProcessLoop()==0){//���C�����[�v
		music_ini();
		switch(func_state){
			case 0://����̂ݓ��鏈��
				load();		//�f�[�^���[�h
				first_ini();//����̏�����
				func_state=99;
				break;
			case 99://STG���n�߂�O�ɍs��������
				ini();
				load_story();
				func_state=100;
				break;
			case 100://�ʏ폈��
								
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
				printfDx("�s����func_state\n");
				break;
		}
		music_play();			
		fps_wait();				 
		if(CheckStateKey(KEY_INPUT_ESCAPE)==1)break;//�G�X�P�[�v�����͂��ꂽ��u���C�N
		ScreenFlip();//����ʔ��f
		count++;

	}
	DxLib_End();//�c�w���C�u�����I������
	return 0;
}
