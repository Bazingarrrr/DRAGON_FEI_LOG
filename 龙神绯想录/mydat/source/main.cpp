#define GLOBAL_INSTANCE 
#include "../include/GV.h"
#include <easyx.h>

extern int FLAG_MODE = 0;

//���[�v�ŕK���s���R�又��
int ProcessLoop(){
	if(ProcessMessage()!=0)return -1;//�v���Z�X�������G���[�Ȃ�-1��Ԃ�
	if(ClearDrawScreen()!=0)return -1;//��ʃN���A�������G���[�Ȃ�-1��Ԃ�
	GetHitKeyStateAll_2();//���е�ǰ���̰����Ĵ���
	GetHitPadStateAll();  //�ֱ�����Ĵ���
	return 0;
}



int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nCmdShow){
	
	i_char = 0;
	menu();
	closegraph();
	ChangeWindowMode(FLAG_MODE); // �ı䴰�ڴ�С
	if(DxLib_Init() == -1 || SetDrawScreen( DX_SCREEN_BACK )!=0) return -1;//�������Ɨ���ʉ�

	while(ProcessLoop()==0){//���C�����[�v
		music_ini();
		switch(func_state){
			case 0://����̂ݓ��鏈��
				load();		//��������
				first_ini();//����̏�����
				func_state=99;
				break;
			case 99://STG���n�߂�O�ɍs��������
				ini();
				load_story();
				func_state=100;
				
				break;
			case 100://�ʏ폈��
				
				//for (i_char = 0; i_char < game_player_num - 1; i_char++) {
					calc_ch();	//	��ɫ����
					ch_move();	//	��ɫ�ƶ�
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
			/*case 101://char_2��

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
				printfDx("�����func_state\n");
				break;
		}
		music_play();			
		fps_wait();				 
		if(CheckStateKey(KEY_INPUT_ESCAPE)==1)	break;//�G�X�P�[�v�����͂��ꂽ��u���C�N
		ScreenFlip();//����ʔ��f
		count++;

	}
	DxLib_End();//�c�w���C�u�����I������
	return 0;
}
