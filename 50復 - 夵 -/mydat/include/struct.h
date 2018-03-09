//僉儍儔僋僞乕偵娭偡傞峔憿懱
typedef struct{
	int flag;		//flag
	int cnt;		//count
	int power;		//炸弹数
	int point;		//点数
	int score;		//分数
	int num;		//残机数
	int mutekicnt;	//无敌状态 与 技术变量
	int shot_mode;	//射击模式
	int money;		//金钱
	int img;		// 图像
	int slow;		//是否缓缓移动？
	double x,y;		//坐标
	int shot_cnt;	//僔儑僢僩僇僂儞僩
	int graze;		//僌儗僀僘(41)
}ch_t;

typedef struct{
	double x,y;
}pt_t;

//揋偵娭偡傞峔憿懱
typedef struct{
	int flag,cnt,pattern,muki,knd,hp,hp_max,item_n[6],img,back_col;
	//僼儔僌丄僇僂儞僞丄堏摦僷僞乕儞丄岦偒丄揋偺庬椶丄HP嵟戝抣丄棊偲偡傾僀僥儉丄攚宨怓
	double x,y,vx,vy,sp,ang;
	//嵗昗丄懍搙x惉暘丄懍搙y惉暘丄僗僺乕僪丄妏搙
	int bltime,blknd,blknd2,col,state,wtime,wait;
	//抏枊奐巒帪娫丄抏枊偺庬椶丄抏偺庬椶丄怓丄忬懺丄懸婡帪娫丄掆懾帪娫
}enemy_t;

typedef struct{
	//僇僂儞僞丄堏摦僷僞乕儞丄揋偺庬椶
	int cnt,pattern,knd;
	//弶婜嵗昗偲堏摦僗僺乕僪
	double x,y,sp;
	//抏枊奐巒帪娫丄抏枊偺庬椶丄怓丄懱椡丄抏偺庬椶丄掆懾帪娫丄傾僀僥儉(6庬椶)
	int bltime,blknd,col,hp,blknd2,wait,item_n[6];
}enemy_order_t;

//僷僢僪偵娭偡傞峔憿懱
typedef struct{
	int key[PAD_MAX];
}pad_t;

//僐儞僼傿僌偵娭偡傞峔憿懱
typedef struct{
	int left,up,right,down,shot,bom,slow,start,change;
}configpad_t;

//抏偵娭偡傞峔憿懱
typedef struct{
	//僼儔僌丄庬椶丄僇僂儞僞丄怓丄忬懺丄彮側偔偲傕徚偝側偄帪娫丄僄僼僃僋僩偺庬椶
	int flag,knd,cnt,col,state,till,eff,kaiten,eff_detail;
	int cnt_till,cnt_stt;
	//嵗昗丄妏搙丄懍搙丄儀乕僗偺妏搙丄堦帪婰壇僗僺乕僪
	double x,y,vx,vy,angle,spd,base_angle[1],rem_spd[1];
	int c_flag;
	double cx,cy;
}bullet_t;

//僔儑僢僩偵娭偡傞峔憿懱
typedef struct{
	//僼儔僌丄庬椶丄僇僂儞僞丄偳偺揋偐傜敪幩偝傟偨偐偺斣崋丄怓
	int flag,knd,cnt,num;
	//儀乕僗妏搙丄儀乕僗僗僺乕僪
	double base_angle[1],base_spd[1];
	bullet_t bullet[SHOT_BULLET_MAX];
}shot_t;

//僔儑僢僩偵娭偡傞峔憿懱
typedef struct{
	//僼儔僌丄庬椶丄僇僂儞僞丄偳偺揋偐傜敪幩偝傟偨偐偺斣崋丄怓
	int flag,knd,cnt,num;
	//儀乕僗妏搙丄儀乕僗僗僺乕僪
	double base_angle[10],base_spd[1];
	bullet_t bullet[BOSS_BULLET_MAX];
	bullet_t assist[6];
}boss_shot_t;

//僉儍儔僋僞乕僔儑僢僩偵娭偡傞峔憿懱
typedef struct{
	int flag;		//僼儔僌
	int power;		//僷儚乕
	int cnt;		//僇僂儞僞
	int knd;		//庬椶
	int img;		//夋憸(49)
	double x,y;		//嵗昗
	double angle;	//妏搙
	double spd;		//僗僺乕僪
}cshot_t;

//僔儑僢僩偺僆僾僔儑儞敪幩尦儃儞儃儞
typedef struct{
	int flag;	//僼儔僌
	int img;	//夋憸
	int cnt;	//僇僂儞僞
	double x,y;	//嵗昗
}option_bb_t;

//僄僼僃僋僩
typedef struct{
	int flag,cnt,col,knd,img,eff;
	double x,y,r,ang,spd,mvang,brt;
}effect_t;

//徚柵僄僼僃僋僩
typedef struct{
	int flag,cnt,col;
	double x,y;
}del_effect_t;

//抏偺忣曬
typedef struct{
	int size_x,size_y,col_num,kaiten;
	double range;
}bullet_info_t;

//儃儉偺忣曬
typedef struct{
	int flag,cnt,knd;
	double x,y;
}bom_t;

//夋柺偺柧傞偝忣曬
typedef struct{
	unsigned char brt;
}bright_set_t;

//僪儞両偲梙傟傞夋柺偺忣曬
typedef struct{
	int flag,cnt,time,size;
	int x,y;
}dn_t;

//暔棟揑寁嶼傪峴偆堊偺峔憿懱
typedef struct{
	int flag,cnt,set_t;
	double ax,v0x,ay,v0y,vx,vy,prex,prey;
}phy_t;

//儗乕僓乕偺暔棟揑寁嶼傪峴偆堊偺峔憿懱
typedef struct{
	int conv_flag;
	double time,base_ang,angle;
	double conv_x,conv_y,conv_base_x,conv_base_y;
}lphy_t;

//儃僗偺忣曬
typedef struct{
	//僼儔僌丄僇僂儞僞丄庬椶丄懸婡帪娫丄忬懺丄抏枊廔椆傑偱偺僇僂儞僞丄屻傠偺塇堖丄昞帵僼儔僌
	int flag,cnt,knd,wtime,state,endtime,hagoromo,graph_flag;
	//HP,嵟戝HP
	int hp,hp_max;
	//弌尰僇僂儞僞悢丄奺抏枊偺HP丄攚宨偺庬椶丄拞儃僗-儔僗儃僗偺抏枊悢(45)
	int appear_count[2],set_hp[DANMAKU_MAX],back_knd[DANMAKU_MAX],danmaku_num[2];
	//嵗昗
	double x,y,dx,dy,ang,spd;
	//暔棟堏摦偺偨傔偺曄悢
	phy_t phy;
}boss_t;

//儗乕僓乕偺峔憿懱
typedef struct{
	int flag,cnt,knd,col,state;//僼儔僌丄僇僂儞僞丄庬椶丄怓
	double haba,angle,length,hantei;//暆丄妏搙丄挿偝丄敾掕斖埻(昞帵暆偵懳偟偰0~1偱巜掕)丄夞揮懍搙
	pt_t startpt,disppt[4],outpt[4];//儗乕僓乕傪敪幩偡傞巒揰丄昞帵嵗昗丄摉偨傝敾掕斖埻
	lphy_t lphy;
}lazer_t;

//抏枊偺敪幩埵抲偵昞帵偡傞僄僼僃僋僩
typedef struct{
	int flag,cnt,knd,col,state;
	double x,y,angle,spd,range;
}child_t;

//僎乕儉僗僥乕僕僞僀僩儖
typedef struct{
	//僼儔僌丄夋憸僴儞僪儖丄僇僂儞僞丄婸搙丄弌尰僇僂儞僩
	int flag,img,cnt,brt,appear_cnt;
}stage_title_t;

//傾僀僥儉偺峔憿懱
typedef struct{
	//僼儔僌丄僇僂儞僞丄庬椶丄忬懺
	int flag,cnt,knd,state;
	//懍搙丄嵗昗丄戝偒偝
	double v,x,y,r;
}item_t;

//僼儔僢僔儏(42)
typedef struct{
	//僼儔僌丄僇僂儞僞丄僼儔僢僔儏偺庬椶丄壗僇僂儞僩偱昞尰偡傞偐
	int flag,cnt,knd,to_cnt;
	//柧傞偝
	double brt;
}flash_t;

//BGM忣曬(area_t偱巊梡
typedef struct{
	//BGM偺嵞惗僼儔僌丄嵞惗僴儞僪儖丄偄偮側傜偡偐嵞惗庬椶斣崋傪偄傟傞丄儖乕僾埵抲
	int flag,handle,knd[2],loop_pos[2];
}bgm_t;

//偦偺僄儕傾偑帩偭偰偄傞忣曬(48)
typedef struct{
	bgm_t bgm;
}area_t;