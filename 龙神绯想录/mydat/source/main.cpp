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



int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nCmdShow){
	
	i_char = 0;
	menu();
	closegraph();
	ChangeWindowMode(FLAG_MODE); // 改变窗口大小
	if(DxLib_Init() == -1 || SetDrawScreen( DX_SCREEN_BACK )!=0) return -1;//弶婜壔偲棤夋柺壔

	while(ProcessLoop()==0){//儊僀儞儖乕僾
		music_ini();
		switch(func_state){
			case 0://弶夞偺傒擖傞張棟
				load();		//载入数据
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
				i_char = 1;
				break;
			/*case 101://char_2号

				calc_ch();
				ch_move();
				cshot_main();
				//enemy_main();
				//boss_shot_main();
				shot_main();
				out_main();
				effect_main();
				calc_main();
				graph_main();
				//bgm_main();
				if (boss.flag == 0)
					stage_count++;
				break;
				i_char = 0;
			*/

			default:
				printfDx("晄柧側func_state\n");
				break;
		}
		music_play();			
		fps_wait();				 
		if(CheckStateKey(KEY_INPUT_ESCAPE)==1)	break;//僄僗働乕僾偑擖椡偝傟偨傜僽儗僀僋
		ScreenFlip();//棤夋柺斀塮
		count++;

	}
	DxLib_End();//俢倃儔僀僽儔儕廔椆張棟
	return 0;
}
