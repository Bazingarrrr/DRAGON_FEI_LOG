#include "../../../include/DxLib.h"
#include "define.h"
#include "math.h"

#ifdef GLOBAL_INSTANCE
#define GLOBAL
#else
#define GLOBAL extern 
#endif

#include "function.h"

//夋憸梡曄悢愰尵晹
GLOBAL int img_ch[2][12];	//僉儍儔僋僞夋憸12枃暘丂X2(曄恎梡)
GLOBAL int img_chetc[10];	//僉儍儔僋僞偵娭偡傞懠偺夋憸
GLOBAL int img_enemy[3][9];	//揋夋憸9枃暘
GLOBAL int img_board[40];	//儃乕僪偵偮偐偆夋憸
GLOBAL int img_bullet[20][10];//抏梡夋憸
GLOBAL int img_lazer[10][10],img_lazer_moto[10][10];//儗乕僓乕夋憸
GLOBAL int img_cshot[3];	//帺婡僔儑僢僩梡夋憸(49)
GLOBAL int img_del_effect[5];//徚柵僄僼僃僋僩梡夋憸
GLOBAL int img_back[20];//攚宨梡夋憸
GLOBAL int img_eff_bom[5];	//儃儉偺僄僼僃僋僩夋憸
GLOBAL int img_dot_riria[8];//儕儕傾偺僪僢僩奊夋憸
GLOBAL int img_etc[50];//偦偺懠偺夋憸
GLOBAL int img_item[6][2];//傾僀僥儉偺夋憸
GLOBAL int img_num[3][12];//悢帤偺夋憸(41)

//壒妝僼傽僀儖梡曄悢愰尵晹
GLOBAL int sound_se[SE_MAX];

//僼儔僌丒僗僥乕僞僗曄悢
GLOBAL int func_state,stage_count,count,stage;	//娭悢惂屼梡曄悢
GLOBAL int se_flag[SE_MAX];			//僒僂儞僪僼儔僌

//愝掕梡曄悢
GLOBAL int stage_title_count[STAGE_NUM];

//偦偺懠偺曄悢
GLOBAL int color[20],font[20];//怓(41) 僼僅儞僩(44)

//峔憿懱曄悢愰尵晹
GLOBAL ch_t ch[game_player_num];			//
GLOBAL enemy_t enemy[ENEMY_MAX];//揋忣曬
GLOBAL configpad_t configpad;//僐儞僼傿僌偱愝掕偟偨僉乕忣曬
GLOBAL enemy_order_t enemy_order[ENEMY_ORDER_MAX];//揋偺弌尰忣曬
GLOBAL shot_t shot[SHOT_MAX];//僔儑僢僩忣曬
GLOBAL boss_shot_t boss_shot;//儃僗僔儑僢僩忣曬
GLOBAL cshot_t cshot[CSHOT_MAX];//帺婡僔儑僢僩
GLOBAL del_effect_t del_effect[DEL_EFFECT_MAX];//徚柵僄僼僃僋僩
GLOBAL effect_t effect[EFFECT_MAX];//僄僼僃僋僩
GLOBAL bullet_info_t bullet_info[20];//抏忣曬
GLOBAL bom_t bom;				//儃儉
GLOBAL bright_set_t bright_set; //昤夋偺婸搙
GLOBAL dn_t dn;					//僪儞偲梙傟傞
GLOBAL boss_t boss;				//儃僗忣曬
GLOBAL lazer_t lazer[LAZER_MAX];//儗乕僓乕
GLOBAL child_t child[CHILD_MAX];//抏枊偺敪幩埵抲偵昞帵偡傞僄僼僃僋僩
GLOBAL stage_title_t stage_title;//僗僥乕僕僞僀僩儖
GLOBAL item_t item[ITEM_MAX];//傾僀僥儉
GLOBAL flash_t flash;//(42)
GLOBAL area_t area;//
GLOBAL option_bb_t option_bb[2];//


//定义标识符
GLOBAL int i_char;

