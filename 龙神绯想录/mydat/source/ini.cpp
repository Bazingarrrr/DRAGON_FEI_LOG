#include "../include/GV.h"

void input_bullet_info(bullet_info_t *binfo,int size_x,int size_y,int col_num,double range,int kaiten){
	binfo->size_x =size_x;	binfo->size_y =size_y;
	binfo->col_num=col_num;	binfo->range  =range;
	binfo->kaiten=kaiten;
}

//设定角色的初始位置
void first_ini(){
	 int i_char = 0;
	 switch (FLAG_SINGLE_DOUBLE)
	 {
	 case 1:
		 configpad[i_char].down = 0;
		 configpad[i_char].left = 1;
		 configpad[i_char].right = 2;
		 configpad[i_char].up = 3;
		 configpad[i_char].bom = 4;
		 configpad[i_char].shot = 5;
		 configpad[i_char].slow = 11;
		 configpad[i_char].start = 13;
		 configpad[i_char].change = 6;
	 case 2:
		 for (i_char = 0; i_char < game_player_num; i_char++)
		 {
			 configpad[i_char].down = 0;
			 configpad[i_char].left = 1;
			 configpad[i_char].right = 2;
			 configpad[i_char].up = 3;
			 configpad[i_char].bom = 4;
			 configpad[i_char].shot = 5;
			 configpad[i_char].slow = 11;
			 configpad[i_char].start = 13;
			 configpad[i_char].change = 6;

		 }
	 }

	stage=0;
	stage_title_count[0]=200;

	input_bullet_info(&bullet_info[0],76, 76, 5,17.0,0);
	input_bullet_info(&bullet_info[1],22, 22, 6, 4.0,0);
	input_bullet_info(&bullet_info[2], 5,120,10, 2.5,0);
	input_bullet_info(&bullet_info[3],19, 34, 5, 2.0,0);
	input_bullet_info(&bullet_info[4],38, 38,10, 2.0,0);
	input_bullet_info(&bullet_info[5],14, 16, 3, 3.5,0);
	input_bullet_info(&bullet_info[6],14, 18, 3, 2.0,0);
	input_bullet_info(&bullet_info[7],16, 16, 9, 2.5,1);
	input_bullet_info(&bullet_info[8],12, 18,10, 1.5,0);
	input_bullet_info(&bullet_info[9],13, 19, 3, 2.0,0);
	input_bullet_info(&bullet_info[10],8,  8, 8, 1.0,0);
	input_bullet_info(&bullet_info[11],35,32, 8, 2.0,0);
}

/*偙偙偼屻偐傜偒偪傫偲僙僢僩偟傑偡*/
int back_knd[DANMAKU_MAX]={
	0,1,0,1,1,
};
int boss_hp[DANMAKU_MAX]={
	5000,10000,8000,20000,30000,
};
/*偙偙傑偱*/

//僎乕儉偺弶婜壔
void ini(){
	stage_count=1;
	memset(&ch,0,sizeof(ch_t));
	memset(enemy,0,sizeof(enemy_t)*ENEMY_MAX);
	memset(lazer,0,sizeof(lazer_t)*LAZER_MAX);
	memset(enemy_order,0,sizeof(enemy_order_t)*ENEMY_ORDER_MAX);
	memset(shot,0,sizeof(shot_t)*SHOT_MAX);
	memset(cshot,0,sizeof(cshot_t)*CSHOT_MAX);
	memset(effect,0,sizeof(effect_t)*EFFECT_MAX);
	memset(del_effect,0,sizeof(del_effect_t)*DEL_EFFECT_MAX);
	memset(&bom,0,sizeof(bom_t));
	memset(&bright_set,0,sizeof(bright_set_t));
	memset(&dn,0,sizeof(dn_t));
	memset(&boss,0,sizeof(boss_t));
	memset(child,0,sizeof(child_t)*CHILD_MAX);
	memset(&stage_title,0,sizeof(stage_title_t));
	memset(item,0,sizeof(item_t)*ITEM_MAX);
	memset(&area,0,sizeof(area_t));//(48)
	memset(option_bb,0,sizeof(option_bb_t)*2);//(49)

	switch (FLAG_SINGLE_DOUBLE)
	{
	case 1:
		ch[i_char].x = FMX / 2;
		ch[i_char].y = FMY * 3 / 4;
		ch[i_char].power = 400;//弶婜僷儚乕(41)
		ch[i_char].num = 5;//弶婜巆婡悢(41)
		break;
	case 2:
		
		for (i_char = 0; i_char < game_player_num; i_char++)
		{
			ch[i_char].x = (FMX + 5*i_char) / 2;
			ch[i_char].y = (FMY * 3 - 500*i_char) / 4;
			ch[i_char].power = 400;//弶婜僷儚乕(41)
			ch[i_char].num = 5;//弶婜巆婡悢(41)
		}
		break;
		
		

	}
	


		

	stage_title.appear_cnt=stage_title_count[stage];
	
	/*抏枊偦傟偧傟偺愝掕丅屻乆偒偪傫偲愝掕偟傑偟傚偆丅*/
//	boss.appear_count[0]=1700;//拞儃僗偑弌尰偡傞帪崗(42)
	boss.appear_count[0]=1650;//拞儃僗偑弌尰偡傞帪崗(42)(47)
	boss.appear_count[1]=2850;//嵟屻儃僗偑弌尰偡傞帪崗(44)(47)

	boss.danmaku_num[0]=1;//拞儃僗偑壗屄栚傑偱偺抏枊傪弌偡偐
	boss.danmaku_num[1]=4;//嵟屻偵弌傞儃僗偑壗屄栚傑偱偺抏枊傪弌偡偐(47)

	for(int i=0;i<DANMAKU_MAX;i++){//抏枊偦傟偧傟偺HP(47)
		boss.set_hp[i]=boss_hp[i];
	}
	boss.hp_max=boss.set_hp[0];
	for(int i=0;i<DANMAKU_MAX;i++)//抏枊偦傟偧傟偺攚宨偺庬椶
		boss.back_knd[i]=back_knd[i];
	/*偙偙傑偱*/

	area.bgm.flag=0;//壒妝嵞惗僼儔僌傪弶婜壔(48)
	area.bgm.knd[0]=0;//捠忢BGM傪偳偆偄偆僞僀儈儞僌偱嵞惗偡傞偐丄庢傝寛傔偼music.cpp(48)
	area.bgm.knd[1]=0;//儃僗BGM傪偳偆偄偆僞僀儈儞僌偱嵞惗偡傞偐丄庢傝寛傔偼music.cpp(48)
	area.bgm.loop_pos[0]=26672;//捠忢BGM偺儖乕僾埵抲(48)
	area.bgm.loop_pos[1]=27010;//儃僗BGM偺儖乕僾埵抲(48)

	option_bb[0].img=img_cshot[2];//僆僾僔儑儞儃儞儃儞偺夋憸戙擖(49)
	option_bb[1].img=img_cshot[2];

	bright_set.brt=255;//弶婜婸搙偼嵟戝
}