#include "../include/GV.h"

int cshot0num[2]  ={2,4};
int cshot0pos_x[4]={-10, 10,-30, 30};
int cshot0pos_y[4]={-30,-30,-10,-10};

#define OPTION_X 25
#define OPTION_Y 35
int option0num[2]  ={2,4};
double option0ang[4] = {-PI/2,-PI/2,-PI/2-PI/4,-PI/2+PI/4};//僆僾僔儑儞偺敪幩妏搙(49)

//帺婡僔儑僢僩偺搊榐壜擻斣崋傪曉偡
int search_cshot(){
	for(int i=0;i<CSHOT_MAX;i++){
		if(cshot[i].flag==0)
			return i;
	}
	return -1;
}

//捠忢僔儑僢僩搊榐
void ch0_shot_pattern(){
	int k;
	int n=cshot0num[ch[i_char].power<200?0:1];
	for(int i=0;i<n;i++){
		if((k=search_cshot())!=-1){
			cshot[k].flag=1;
			cshot[k].cnt=0;
			cshot[k].angle=-PI/2;
			cshot[k].spd=20;
			cshot[k].x=ch[i_char].x+cshot0pos_x[i];
			cshot[k].y=ch[i_char].y+cshot0pos_y[i];
			cshot[k].power= (n<2 ? 20 : 12) +ch[i_char].power/100;//2嬝側傜20,4嬝側傜12(50)
			cshot[k].knd=0;
			cshot[k].img=img_cshot[0];//夋憸斣崋戙擖(49)
		}
	}
	se_flag[2]=1;//敪幩壒僆儞
	if(ch[i_char].power>=100){
		for(int i=0;i<(ch[i_char].power<300?2:4);i++){
			if((k=search_cshot())!=-1){
				cshot[k].flag=1;
				cshot[k].cnt=0;
				cshot[k].angle=option0ang[i];
				cshot[k].spd=20;
				cshot[k].x=option_bb[i%2].x;
				cshot[k].y=option_bb[i%2].y;
				cshot[k].power=10-7*(i/2);//儅僀僫僗偵側傜側偄傛偆拲堄(50)
				cshot[k].knd=1;
				cshot[k].img=img_cshot[1];//夋憸斣崋戙擖(49)
			}
		}
	}
}

//掅懍捠忢僔儑僢僩搊榐
void ch1_shot_pattern(){
	int k;
	int n=cshot0num[ch[i_char].power<200?0:1];
	for(int i=0;i<n;i++){
		if((k=search_cshot())!=-1){
			cshot[k].flag=1;
			cshot[k].cnt=0;
			cshot[k].angle=-PI/2;
			cshot[k].spd=20;
			cshot[k].x=ch[i_char].x+cshot0pos_x[i]/3;//掅懍拞側傜埵抲傪拞怱懁傊
			cshot[k].y=ch[i_char].y+cshot0pos_y[i]/2;
			cshot[k].power= (n<2 ? 20 : 12) +ch[i_char].power/100;//2嬝側傜20,4嬝側傜12(50)
			cshot[k].knd=0;
			cshot[k].img=img_cshot[0];//夋憸斣崋戙擖(49)
		}
	}
	se_flag[2]=1;
	if(ch[i_char].power>=100){
		for(int i=0;i<(ch[i_char].power<300?2:4);i++){
			if((k=search_cshot())!=-1){
				cshot[k].flag=1;
				cshot[k].cnt=0;
				cshot[k].angle=option0ang[i];
				cshot[k].spd=20;
				cshot[k].x=option_bb[i%2].x;
				cshot[k].y=option_bb[i%2].y;
				cshot[k].power=10-7*(i/2);//儅僀僫僗偵側傜側偄傛偆拲堄(50)
				cshot[k].knd=1;
				cshot[k].img=img_cshot[1];//夋憸斣崋戙擖(49)
			}
		}
	}
}

//僆僾僔儑儞偺傏傫傏傫寁嶼
void calc_option_bb(){
	if(ch[i_char].power>=100){//僷儚乕100埲忋側傜僆僾僔儑儞傪偮偗傞
		for(int i=0;i<2;i++){
			if(CheckStatePad(configpad[i_char].slow)==0){//掅懍堏摦拞偠傖側偄側傜
				option_bb[i].x=ch[i_char].x+OPTION_X*(i==0 ? -1 : 1);
				option_bb[i].y=ch[i_char].y+OPTION_Y+sin(PI2/150*option_bb[i].cnt)*20;
			}
			else{
				option_bb[i].x=ch[i_char].x+OPTION_X/2*(i==0 ? -1 : 1);
				option_bb[i].y=ch[i_char].y+OPTION_Y/2;
			}
			option_bb[i].cnt++;
		}
		if(option_bb[0].flag==0)
			option_bb[0].flag = option_bb[1].flag = 1;
	}
	else{
		if(option_bb[0].flag==1)
			option_bb[0].flag = option_bb[1].flag = 0;
	}
}

//僔儑僢僩搊榐晹
void enter_shot(){
	//按下射击按钮X键的时候
	switch (FLAG_SINGLE_DOUBLE)
	{
	case 1:
		i_char = 0;
		if (CheckStatePad(configpad[i_char].shot) > 0) {
			ch[i_char].shot_cnt++;
			if (ch[i_char].shot_cnt % 3 == 0) {//3僇僂儞僩偵1夞
				if (CheckStatePad(configpad[i_char].slow) > 0)//掅懍堏摦拞側傜
					ch1_shot_pattern();
				else
					ch0_shot_pattern();
			}
		}
		break;
	case 2:
		for (i_char = 0; i_char < game_player_num; i_char++)
		{

			if (CheckStatePad(configpad[i_char].shot) > 0) {
				ch[i_char].shot_cnt++;
				if (ch[i_char].shot_cnt % 3 == 0) {//3僇僂儞僩偵1夞
					if (CheckStatePad(configpad[i_char].slow) > 0)//掅懍堏摦拞側傜
						ch1_shot_pattern();
					else
						ch0_shot_pattern();
				}
			}
			else
				ch[i_char].shot_cnt = 0;
		}
		break;
	}
	
}

//堦斣嬤偄揋傪扵偟偰妏搙傪僙僢僩偡傞
void calc_homing(int k){
	int i,d, num=-1, min=-1;
	double x,y;
	if(boss.flag==0){//儃僗偑嫃側偄帪
		for(i=0;i<ENEMY_MAX;i++){//揋偺憤悢暘
			if(enemy[i].flag==1){
				x=(enemy[i].x-cshot[k].x);
				y=(enemy[i].y-cshot[k].y);
				d=(int)(x*x+y*y);//僔儑僢僩偲揋偺嫍棧
				if(d<min || min==-1){//寁嶼寢壥偑嵟彫抣偐傑偩奿擺偟偰偄側偄側傜
					num=i;//斣崋婰榐
					min=d;//嫍棧婰榐
				}
			}
		}
	}
	//嬤偄揋偑尒偮偐偭偨傜丄偁傞偄偼儃僗偑偄偰丄HP偑偁傞偲偒偼妏搙傪僙僢僩
	if(num!=-1 || boss.flag==1 && boss.hp>0){
		if(boss.flag==0){
			x=enemy[num].x-cshot[k].x;
			y=enemy[num].y-cshot[k].y;
		}
		else{
			x=boss.x-cshot[k].x;
			y=boss.y-cshot[k].y;
		}
		cshot[k].angle=atan2(y,x);
	}
}

//僔儑僢僩偺堏摦寁嶼
void calc_cshot(){
	for(int i=0;i<CSHOT_MAX;i++){
		if(cshot[i].flag==1){
			int dranx=(int)(cshot[i].spd+11/2),drany=(int)(cshot[i].spd+55/2);
			if(cshot[i].knd==1)
				calc_homing(i);
			cshot[i].x+=cos(cshot[i].angle)*cshot[i].spd;
			cshot[i].y+=sin(cshot[i].angle)*cshot[i].spd;
			cshot[i].cnt++;
			if(cshot[i].x<-dranx || cshot[i].x>FMX+dranx ||
				cshot[i].y<-drany || cshot[i].y>FMY+drany)//夋柺偐傜奜傟偨傜
				cshot[i].flag=0;
		}
	}
}

//僉儍儔僋僞僔儑僢僩偵娭偡傞娭悢
void cshot_main(){
	calc_option_bb();//僆僾僔儑儞偺傏傫傏傫寁嶼(49)
	calc_cshot();//僔儑僢僩偺婲摦寁嶼
	enter_shot();//僔儑僢僩搊榐
}
