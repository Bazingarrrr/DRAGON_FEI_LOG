#define GLOBAL_INSTANCE 
#include "../include/GV.h"

//���[�v�ŕK���s���R�又��
int ProcessLoop(){
	if(ProcessMessage()!=0)return -1;//�v���Z�X�������G���[�Ȃ�-1��Ԃ�
	if(ClearDrawScreen()!=0)return -1;//��ʃN���A�������G���[�Ȃ�-1��Ԃ�
	GetHitKeyStateAll_2();//���݂̃L�[���͏������s��
	GetHitPadStateAll();  //���݂̃p�b�h���͏������s��
	return 0;
}

int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nCmdShow){
	ChangeWindowMode(TRUE);//�E�B���h�E���[�h
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
				if (boss.flag == 0)
				{
					stage_count++;
					ch.score = stage_count + ch.point;
				}
				if (stage_count>8100)
					ch.num =5;
				else {
					if (stage_count > 5600)
						ch.num = 4;
					else {
						if (stage_count > 5100)
							ch.num = 3;
						else {
							if (stage_count > 3100)
								ch.num =2;
						}
					}
				}
				break;
			default:
				printfDx("�s����func_state\n");
				break;
		}
		music_play();			
		fps_wait();				 
		ScreenFlip();//����ʔ��f
		count++;

	}
	DxLib_End();//�c�w���C�u�����I������
	return 0;
}
