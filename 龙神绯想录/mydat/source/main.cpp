#define GLOBAL_INSTANCE 
#include "../include/GV.h"
#include <easyx.h>

extern int FLAG_MODE = 0;

//ループで必ず行う３大処理
int ProcessLoop(){
	if(ProcessMessage()!=0)return -1;//プロセス処理がエラーなら-1を返す
	if(ClearDrawScreen()!=0)return -1;//画面クリア処理がエラーなら-1を返す
	GetHitKeyStateAll_2();//ｽ�ﾐﾐｵｱﾇｰｼ�ﾅﾌｰｴｼ�ｵﾄｴｦﾀ�
	GetHitPadStateAll();  //ﾊﾖｱ�ﾊ菠�ｵﾄｴｦﾀ�
	return 0;
}



int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nCmdShow){
	
	i_char = 0;
	menu();
	
	ChangeWindowMode(FLAG_MODE); // ｸﾄｱ莇ｰｿﾚｴ�ﾐ｡
	if(DxLib_Init() == -1 || SetDrawScreen( DX_SCREEN_BACK )!=0) return -1;//初期化と裏画面化

	while(ProcessLoop()==0){//メインループ
		music_ini();
		switch(func_state){
			case 0://初回のみ入る処理
				load();		//ﾔﾘﾈ�ﾊ�ｾﾝ
				first_ini();//初回の初期化
				func_state=99;
				break;
			case 99://STGを始める前に行う初期化
				ini();
				load_story();
				func_state=100;
				
				break;
			case 100://通常処理
				
				//for (i_char = 0; i_char < game_player_num - 1; i_char++) {
					calc_ch();	//	ｽﾇﾉｫｼﾆﾋ�
					ch_move();	//	ｽﾇﾉｫﾒﾆｶｯ
					cshot_main();
					enemy_main();
					boss_shot_main();
					shot_main();
					out_main();
					effect_main();
					calc_main();
					graph_main();
					bgm_main();
					if (boss.flag == 0)
						stage_count++;
				//i_char = 0;
				break;
			/*case 101://char_2ｺﾅ

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
				printfDx("ｴ�ﾎ�ｵﾄfunc_state\n");
				break;
		}
		music_play();			
		fps_wait();				 
		if(CheckStateKey(KEY_INPUT_F10)==1)	break;//ｰｴESCｼ�ﾍﾋｳ�
		ScreenFlip();//裏画面反映
		count++;

	}
	DxLib_End();//ＤＸライブラリ終了処理
	return 0;
}
