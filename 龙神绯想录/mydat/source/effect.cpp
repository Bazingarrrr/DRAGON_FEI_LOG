#include "../include/GV.h"

extern void dn_calc();

//ƒGƒtƒFƒNƒg‚Ì“o˜^‹ó‚«”Ô†‚ğ’T‚·
int search_effect(){
    for(int i=0;i<EFFECT_MAX;i++){
        if(effect[i].flag==0)
            return i;
    }
    return -1;
}

//ƒGƒtƒFƒNƒg‚ğŒvZ‚·‚é
void calc_effect(){
	switch (FLAG_SINGLE_DOUBLE)
	{
	case 1:
		for (int i = 0; i<EFFECT_MAX; i++) {
			if (effect[i].flag>0) {//ƒGƒtƒFƒNƒg‚ª“o˜^‚³‚ê‚Ä‚¢‚½‚ç
				effect[i].x += cos(effect[i].mvang)*effect[i].spd;
				effect[i].y += sin(effect[i].mvang)*effect[i].spd;
				switch (effect[i].knd) {//ƒGƒtƒFƒNƒg‚Ìí—Ş‚É‚æ‚Á‚Ä•ªŠò
				case 0://“G‚ÌÁ–ÅƒGƒtƒFƒNƒg
					effect[i].cnt++;
					effect[i].r += 0.08;//ƒGƒtƒFƒNƒg‚Ì‘å‚«‚³‚ğ’iX‘å‚«‚­‚·‚é
					if (effect[i].cnt>10)//10ƒJƒEƒ“ƒgˆÈã‚É‚È‚Á‚½‚ç
						effect[i].brt -= 25;//–¾‚é‚³‚ğ­‚È‚­‚·‚é
					if (effect[i].cnt>20)//20ƒJƒEƒ“ƒgˆÈã‚É‚È‚Á‚½‚ç
						effect[i].flag = 0;//Á‚·
					break;
				case 1://ƒ{ƒ€‚ÌƒGƒtƒFƒNƒg
					   //ƒXƒs[ƒhŒvZ
					if (effect[i].cnt<60)
						effect[i].spd -= (0.2 + effect[i].cnt*effect[i].cnt / 3000.0);
					if (effect[i].cnt == 60) {
						effect[i].spd = 0;
						se_flag[15] = 1;
						enter_dn(11, 20);//(45)
					}
					//–¾‚é‚³‚Æ‘å‚«‚³ŒvZ
					effect[i].r += 0.015;
					if (effect[i].cnt<51)
						effect[i].brt += 5;
					if (effect[i].cnt >= 60) {
						effect[i].r += 0.04;
						effect[i].brt -= 255 / 30.0;
					}
					//ƒJƒEƒ“ƒgƒAƒbƒv‚ÆÁ‹ŒvZ
					effect[i].cnt++;
					if (effect[i].cnt >= 90)
						effect[i].flag = 0;
					break;
				case 2://ƒ{ƒ€ƒGƒtƒFƒNƒgiƒLƒƒƒ‰j
					   //–¾‚é‚³ŒvZ
					if (effect[i].cnt<51)
						effect[i].brt += 4;
					if (effect[i].cnt>130 - 51)
						effect[i].brt -= 4;
					//ƒJƒEƒ“ƒgƒAƒbƒv‚ÆÁ‹ŒvZ
					effect[i].cnt++;
					if (effect[i].cnt >= 130)
						effect[i].flag = 0;
					break;
				case 3://ƒ{ƒ€‚ÌƒGƒtƒFƒNƒgiƒ‰ƒCƒ“j
					   //–¾‚é‚³ŒvZ
					if (effect[i].cnt<51)
						effect[i].brt += 2;
					if (effect[i].cnt>130 - 51)
						effect[i].brt -= 2;
					//ƒJƒEƒ“ƒgƒAƒbƒv‚ÆÁ‹ŒvZ
					effect[i].cnt++;
					if (effect[i].cnt >= 130)
						effect[i].flag = 0;
					break;
				case 4://‹ò‚ç‚¢ƒ{ƒ€ƒGƒtƒFƒNƒg
					   //–¾‚é‚³ŒvZ
					if (effect[i].cnt >= 6)
						effect[i].brt -= 255 / 6;
					effect[i].r += 0.12;
					effect[i].cnt++;
					if (effect[i].cnt >= 12 || ch[i_char].flag != 1)
						effect[i].flag = 0;
					break;
				default:
					printfDx("effectİ’èƒGƒ‰[\n");
					break;
				}
			}
		}
		break;
	case 2:
		for (int i = 0; i<EFFECT_MAX; i++) {
			if (effect[i].flag>0) {//ƒGƒtƒFƒNƒg‚ª“o˜^‚³‚ê‚Ä‚¢‚½‚ç
				effect[i].x += cos(effect[i].mvang)*effect[i].spd;
				effect[i].y += sin(effect[i].mvang)*effect[i].spd;
				switch (effect[i].knd) {//ƒGƒtƒFƒNƒg‚Ìí—Ş‚É‚æ‚Á‚Ä•ªŠò
				case 0://“G‚ÌÁ–ÅƒGƒtƒFƒNƒg
					effect[i].cnt++;
					effect[i].r += 0.08;//ƒGƒtƒFƒNƒg‚Ì‘å‚«‚³‚ğ’iX‘å‚«‚­‚·‚é
					if (effect[i].cnt>10)//10ƒJƒEƒ“ƒgˆÈã‚É‚È‚Á‚½‚ç
						effect[i].brt -= 25;//–¾‚é‚³‚ğ­‚È‚­‚·‚é
					if (effect[i].cnt>20)//20ƒJƒEƒ“ƒgˆÈã‚É‚È‚Á‚½‚ç
						effect[i].flag = 0;//Á‚·
					break;
				case 1://ƒ{ƒ€‚ÌƒGƒtƒFƒNƒg
					   //ƒXƒs[ƒhŒvZ
					if (effect[i].cnt<60)
						effect[i].spd -= (0.2 + effect[i].cnt*effect[i].cnt / 3000.0);
					if (effect[i].cnt == 60) {
						effect[i].spd = 0;
						se_flag[15] = 1;
						enter_dn(11, 20);//(45)
					}
					//–¾‚é‚³‚Æ‘å‚«‚³ŒvZ
					effect[i].r += 0.015;
					if (effect[i].cnt<51)
						effect[i].brt += 5;
					if (effect[i].cnt >= 60) {
						effect[i].r += 0.04;
						effect[i].brt -= 255 / 30.0;
					}
					//ƒJƒEƒ“ƒgƒAƒbƒv‚ÆÁ‹ŒvZ
					effect[i].cnt++;
					if (effect[i].cnt >= 90)
						effect[i].flag = 0;
					break;
				case 2://ƒ{ƒ€ƒGƒtƒFƒNƒgiƒLƒƒƒ‰j
					   //–¾‚é‚³ŒvZ
					if (effect[i].cnt<51)
						effect[i].brt += 4;
					if (effect[i].cnt>130 - 51)
						effect[i].brt -= 4;
					//ƒJƒEƒ“ƒgƒAƒbƒv‚ÆÁ‹ŒvZ
					effect[i].cnt++;
					if (effect[i].cnt >= 130)
						effect[i].flag = 0;
					break;
				case 3://ƒ{ƒ€‚ÌƒGƒtƒFƒNƒgiƒ‰ƒCƒ“j
					   //–¾‚é‚³ŒvZ
					if (effect[i].cnt<51)
						effect[i].brt += 2;
					if (effect[i].cnt>130 - 51)
						effect[i].brt -= 2;
					//ƒJƒEƒ“ƒgƒAƒbƒv‚ÆÁ‹ŒvZ
					effect[i].cnt++;
					if (effect[i].cnt >= 130)
						effect[i].flag = 0;
					break;
				case 4://‹ò‚ç‚¢ƒ{ƒ€ƒGƒtƒFƒNƒg
					   //–¾‚é‚³ŒvZ
					if (effect[i].cnt >= 6)
						effect[i].brt -= 255 / 6;
					effect[i].r += 0.12;
					effect[i].cnt++;
					for (i_char = 0; i_char < game_player_num; i_char++)
						if (effect[i].cnt >= 12 || ch[i_char].flag != 1)
							effect[i].flag = 0;
					break;
				default:
					printfDx("effect³ö´í\n");
					break;
				}
			}
		}
		break;

	}
 
}

//Á–ÅƒGƒtƒFƒNƒg‚Ì“o˜^‹ó‚«”Ô†‚ğ’T‚·
int search_del_effect(){
    for(int i=0;i<DEL_EFFECT_MAX;i++){
        if(del_effect[i].flag==0)
            return i;
    }
    return -1;
}

//Á–ÅƒGƒtƒFƒNƒg‚ğ“o˜^‚·‚é
void enter_del_effect(int s){
    int k=search_del_effect();
    if(k!=-1){
        del_effect[k].flag=1;//ƒtƒ‰ƒO‚ğ—§‚Ä‚é
        del_effect[k].cnt=0;
        del_effect[k].col=enemy[s].back_col;//“G‚Ì”wŒiF‚ğÁ–ÅF‚Éİ’è‚·‚é
        del_effect[k].x=enemy[s].x;//“G‚ÌÀ•W‚ğÁ–ÅˆÊ’u‚ÉƒZƒbƒg
        del_effect[k].y=enemy[s].y;
    }
}

//Á–ÅƒGƒtƒFƒNƒg‚ğŒvZEƒGƒtƒFƒNƒg‚ğ“o˜^‚·‚é
void calc_del_effect(){
    int k;
    for(int i=0;i<DEL_EFFECT_MAX;i++){
        if(del_effect[i].flag>0){
            if(del_effect[i].cnt%2==0){// 1/30•b‚¸‚ÂƒZƒbƒg
                if((k=search_effect())!=-1){//‹ó‚«”Ô†ŒŸõ
                    memset(&effect[k],0,sizeof(effect_t));//‰Šú‰»
                    effect[k].flag=1;//ƒtƒ‰ƒO‚ğ—§‚Ä‚é
                    effect[k].brt=255;//‹P“x‚ğÅ‘å’l‚É
                    effect[k].ang=rang(PI);//Šp“x‚ğƒ‰ƒ“ƒ_ƒ€‚É
                    effect[k].col=del_effect[i].col;//F‚ğƒZƒbƒg
                    effect[k].eff=1;//1‚ÍŒõƒGƒtƒFƒNƒgBŒõƒGƒtƒFƒNƒg‚ÉƒZƒbƒg‚·‚é
                    effect[k].img=img_del_effect[effect[k].col];//Á–Å‚·‚é‰æ‘œ‚ğƒZƒbƒg
                    effect[k].knd=0;//ƒGƒtƒFƒNƒg‚Ìí—Ş‚Í0”Ô(Á–ÅƒGƒtƒFƒNƒg‚Í0‚Æ‚·‚é)
                    effect[k].x=del_effect[i].x;//À•W‚ğƒZƒbƒg
                    effect[k].y=del_effect[i].y;
                    effect[k].spd=0;
                }
            }
            if(del_effect[i].cnt>8){
                del_effect[i].flag=0;
            }
            del_effect[i].cnt++;
        }
    }
}

//ƒ{ƒ€‚ğ“o˜^
void enter_bom(){
    int k;
    bom.flag=1;
    bom.cnt=0;
    bom.knd=0;
	for (i_char = 0; i_char < game_player_num; i_char++)
	{
		ch[i_char].flag = 0;
		ch[i_char].mutekicnt = 1;//–³“G‚É
	}
    se_flag[14]=1;//ƒLƒ…ƒC[ƒ“‰¹
    //cü
    if((k=search_effect())!=-1)
	{
        effect[k].flag=1;
        effect[k].cnt=0;
        effect[k].knd=3;//ƒ{ƒ€‚Ìü‚ÌƒGƒtƒFƒNƒg
        effect[k].brt=0;
        effect[k].ang=PI/2;
        effect[k].mvang=-PI/2;
        effect[k].spd=1;
        effect[k].r=1;
        effect[k].eff=2;
        effect[k].img=img_eff_bom[3];
        effect[k].x=70;
        effect[k].y=300;
    }
    //‰¡ü
    if((k=search_effect())!=-1){
        effect[k].flag=1;
        effect[k].cnt=0;
        effect[k].knd=3;//ƒ{ƒ€‚Ìü‚ÌƒGƒtƒFƒNƒg
        effect[k].brt=0;
        effect[k].ang=0;
        effect[k].mvang=0;
        effect[k].spd=1;
        effect[k].r=1;
        effect[k].eff=2;
        effect[k].img=img_eff_bom[3];
        effect[k].x=100;
        effect[k].y=350;
    }
    //ƒLƒƒƒ‰
    if((k=search_effect())!=-1){
        effect[k].flag=1;
        effect[k].cnt=0;
        effect[k].knd=2;//ƒ{ƒ€‚ÌƒLƒƒƒ‰Eü‚ÌƒGƒtƒFƒNƒg
        effect[k].brt=0;
        effect[k].ang=0;
        effect[k].mvang=-PI/2;
        effect[k].spd=0.7;
        effect[k].r=1;
        effect[k].eff=2;
        effect[k].img=img_eff_bom[2];
        effect[k].x=260;
        effect[k].y=300;
    }
}

//ƒ{ƒ€ŒvZ
void bom_calc(){
    int n,k;
	double shot_angle[4]={0,PI,PI/2,PI*1.5};//4”­ƒGƒtƒFƒNƒg‚ª”ò‚ÔŠp“x
	switch (FLAG_SINGLE_DOUBLE)
	{
	case 1:
		i_char = 0;
		if ((ch[i_char].flag == 0 || ch[i_char].flag == 1) && bom.flag == 0) {//ƒLƒƒƒ‰‚ª’Êí‚©‹ò‚ç‚¢ƒ{ƒ€ó‘Ô‚ÅAƒ{ƒ€‚ªƒIƒt‚È‚ç
			if (CheckStatePad(configpad[i_char].bom) == 1) {//ƒ{ƒ€ƒ{ƒ^ƒ“‚ª‰Ÿ‚³‚ê‚½‚ç
				enter_bom();
			}
		}
		break;

	case 2:
		for (i_char = 0; i_char < game_player_num; i_char++)
		if ((ch[i_char].flag == 0 || ch[i_char].flag == 1) && bom.flag == 0) {//ƒLƒƒƒ‰‚ª’Êí‚©‹ò‚ç‚¢ƒ{ƒ€ó‘Ô‚ÅAƒ{ƒ€‚ªƒIƒt‚È‚ç
			if (CheckStatePad(configpad[i_char].bom) == 1) {//ƒ{ƒ€ƒ{ƒ^ƒ“‚ª‰Ÿ‚³‚ê‚½‚ç
				enter_bom();
			}
		}
		break;
	}

	switch (FLAG_SINGLE_DOUBLE)
	{
	case 1:
		if (bom.flag == 1) {
			if (bom.cnt % 10 == 0) {//1/6•b‚É‚P‰ñ
				n = (bom.cnt / 10);
				if (n<4 && (k = search_effect()) != -1) {
					effect[k].flag = 1;
					effect[k].cnt = 0;
					effect[k].knd = 1;//ƒGƒtƒFƒNƒg”Ô†‚PFƒ{ƒ€‚ÌƒGƒtƒFƒNƒg
					effect[k].brt = 0;
					effect[k].ang = rang(PI);//‰æ‘œ‚ÌŒü‚«‚Íƒ‰ƒ“ƒ_ƒ€
					effect[k].mvang = shot_angle[n] - PI / 4;//”ò‚Ô•ûŒü
					effect[k].spd = 13 + rang(2);//ƒXƒs[ƒh
					effect[k].r = 0.5;//‘å‚«‚³
					effect[k].eff = 2;//ƒ¿ƒuƒŒƒ“ƒh
					effect[k].img = img_eff_bom[(bom.cnt / 10) / 3];//‰æ‘œ
					effect[k].x = ch[i_char].x;//À•W
					effect[k].y = ch[i_char].y;
				}
			}
			bom.cnt++;
			if (bom.cnt<40)
				bright_set.brt = 255 - bom.cnt * 5;//‰æ–Ê‚Ì–¾‚é‚³İ’è(ˆÃ‚­)
			if (bom.cnt>90)
				bright_set.brt = 255 - 40 * 5 + (bom.cnt - 90) * 5;//‰æ–Ê‚Ì–¾‚é‚³İ’è(–¾‚é‚­)
			if (bom.cnt>130) {
				bom.flag = 0;
				bright_set.brt = 255;
			}
		}
		break;
	case 2:
		for (i_char = 0; i_char < game_player_num; i_char++)
		{
			if (bom.flag == 1) {
				if (bom.cnt % 10 == 0) {//1/6•b‚É‚P‰ñ
					n = (bom.cnt / 10);
					if (n<4 && (k = search_effect()) != -1) {
						effect[k].flag = 1;
						effect[k].cnt = 0;
						effect[k].knd = 1;//ƒGƒtƒFƒNƒg”Ô†‚PFƒ{ƒ€‚ÌƒGƒtƒFƒNƒg
						effect[k].brt = 0;
						effect[k].ang = rang(PI);//‰æ‘œ‚ÌŒü‚«‚Íƒ‰ƒ“ƒ_ƒ€
						effect[k].mvang = shot_angle[n] - PI / 4;//”ò‚Ô•ûŒü
						effect[k].spd = 13 + rang(2);//ƒXƒs[ƒh
						effect[k].r = 0.5;//‘å‚«‚³
						effect[k].eff = 2;//ƒ¿ƒuƒŒƒ“ƒh
						effect[k].img = img_eff_bom[(bom.cnt / 10) / 3];//‰æ‘œ
						effect[k].x = ch[i_char].x;//À•W
						effect[k].y = ch[i_char].y;
					}
				}
				bom.cnt++;
				if (bom.cnt<40)
					bright_set.brt = 255 - bom.cnt * 5;//‰æ–Ê‚Ì–¾‚é‚³İ’è(ˆÃ‚­)
				if (bom.cnt>90)
					bright_set.brt = 255 - 40 * 5 + (bom.cnt - 90) * 5;//‰æ–Ê‚Ì–¾‚é‚³İ’è(–¾‚é‚­)
				if (bom.cnt>130) {
					bom.flag = 0;
					bright_set.brt = 255;
				}
			}
		}
		break;
	}


   
}


void enter_crybom_effect(){
    int k;

	switch (FLAG_SINGLE_DOUBLE)
	{
	case 1:
		i_char = 0;
		if (ch[i_char].flag == 1) {
			if (ch[i_char].cnt % 2 == 0) {
				if ((k = search_effect()) != -1) {
					effect[k].flag = 1;
					effect[k].cnt = 0;
					effect[k].knd = 4;//‹ò‚ç‚¢ƒ{ƒ€ƒGƒtƒFƒNƒg
					effect[k].brt = 255;
					effect[k].ang = rang(PI);
					effect[k].spd = 0;
					effect[k].r = 0;
					effect[k].eff = 2;
					effect[k].img = img_del_effect[GetRand(4)];
					effect[k].x = ch[i_char].x;
					effect[k].y = ch[i_char].y;
				}
			}
		}
		break;
	case 2:
		for (i_char = 0; i_char < game_player_num; i_char++)
		{
			if (ch[i_char].flag == 1) {
				if (ch[i_char].cnt % 2 == 0) {
					if ((k = search_effect()) != -1) {
						effect[k].flag = 1;
						effect[k].cnt = 0;
						effect[k].knd = 4;//‹ò‚ç‚¢ƒ{ƒ€ƒGƒtƒFƒNƒg
						effect[k].brt = 255;
						effect[k].ang = rang(PI);
						effect[k].spd = 0;
						effect[k].r = 0;
						effect[k].eff = 2;
						effect[k].img = img_del_effect[GetRand(4)];
						effect[k].x = ch[i_char].x;
						effect[k].y = ch[i_char].y;
					}
				}
			}
		}
		break;
	}
   
}

void calc_child(){
	for(int i=0;i<CHILD_MAX;i++){
		if(child[i].flag>0){
			child[i].x+=cos(child[i].angle)*child[i].spd;
			child[i].y+=sin(child[i].angle)*child[i].spd;
			child[i].cnt++;
		}
	}
}

void effect_main(){
	calc_child();
    dn_calc();//ƒhƒK[ƒ“‚Æ‚ä‚ê‚é‰æ–Ê‚Ìˆ—
    calc_del_effect();//Á–ÅƒGƒtƒFƒNƒg‚ÌŒvZ
    calc_effect();//ƒGƒtƒFƒNƒg‚ÌŒvZ
    bom_calc();//ƒ{ƒ€ŒvZ
    enter_crybom_effect();
}