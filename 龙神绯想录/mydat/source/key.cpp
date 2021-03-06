#include "../include/GV.h"
#include <stdio.h>


unsigned int stateKey[256];

int GetHitKeyStateAll_2(){
    char GetHitKeyStateAll_Key[256];
    GetHitKeyStateAll( GetHitKeyStateAll_Key );
    for(int i=0;i<256;i++){
        if(GetHitKeyStateAll_Key[i]==1) stateKey[i]++;
        else                            stateKey[i]=0;
    }
    return 0;
}

int CheckStateKey(unsigned char Handle){
	return stateKey[Handle];
}

//パッドの入力状態を格納する変数
pad_t pad[game_player_num];


void input_pad_or_key(int *p, int k){
	//*p = *p>k ? *p : k;
	*p = k;	//ﾖｻｷｵｻﾘｼ�ﾅﾌﾊ菠�
}

//パッドとキーボードの両方の入力をチェックする関数
void GetHitPadStateAll() {
	int i, PadInput, mul = 1;
	PadInput = GetJoypadInputState(DX_INPUT_PAD1);//パッドの入力状態を取得
	for (i = 0; i < 16; i++) {
		if (PadInput & mul)	pad[i_char].key[i]++;
		else				pad[i_char].key[i] = 0;
		mul *= 2;
	}

	switch(FLAG_SINGLE_DOUBLE)
	{

		case 1:
			i_char = 0;
			input_pad_or_key(&pad[i_char].key[configpad[i_char].left]	,CheckStateKey(KEY_INPUT_LEFT));
			input_pad_or_key(&pad[i_char].key[configpad[i_char].up]	    ,CheckStateKey(KEY_INPUT_UP));
			input_pad_or_key(&pad[i_char].key[configpad[i_char].right]  ,CheckStateKey(KEY_INPUT_RIGHT));
			input_pad_or_key(&pad[i_char].key[configpad[i_char].down]	,CheckStateKey(KEY_INPUT_DOWN));
			input_pad_or_key(&pad[i_char].key[configpad[i_char].shot]	,CheckStateKey(KEY_INPUT_Z));
			input_pad_or_key(&pad[i_char].key[configpad[i_char].bom]	,CheckStateKey(KEY_INPUT_X));
			input_pad_or_key(&pad[i_char].key[configpad[i_char].slow]	,CheckStateKey(KEY_INPUT_LSHIFT));
			input_pad_or_key(&pad[i_char].key[configpad[i_char].start]  ,CheckStateKey(KEY_INPUT_ESCAPE));
			input_pad_or_key(&pad[i_char].key[configpad[i_char].change] ,CheckStateKey(KEY_INPUT_LCONTROL));
			break;

			/*		Double_player	first charactors' keystate	*/
		case 2:
			i_char = 0;
			input_pad_or_key(&pad[i_char].key[configpad[0].left]	,CheckStateKey(KEY_INPUT_A));
			input_pad_or_key(&pad[i_char].key[configpad[0].up]	    ,CheckStateKey(KEY_INPUT_W));
			input_pad_or_key(&pad[i_char].key[configpad[0].right]  ,CheckStateKey(KEY_INPUT_D));
			input_pad_or_key(&pad[i_char].key[configpad[0].down]	,CheckStateKey(KEY_INPUT_S));
			input_pad_or_key(&pad[i_char].key[configpad[0].shot]	,CheckStateKey(KEY_INPUT_F));
			input_pad_or_key(&pad[i_char].key[configpad[0].bom]	,CheckStateKey(KEY_INPUT_G));
			input_pad_or_key(&pad[i_char].key[configpad[0].slow]	,CheckStateKey(KEY_INPUT_LSHIFT));
			input_pad_or_key(&pad[i_char].key[configpad[0].start]  ,CheckStateKey(KEY_INPUT_ESCAPE));
			input_pad_or_key(&pad[i_char].key[configpad[0].change] ,CheckStateKey(KEY_INPUT_LCONTROL));


					/*		Double_player	second charactors' keystate */
			i_char = 1;
			input_pad_or_key(&pad[i_char].key[configpad[1].left]	,CheckStateKey(KEY_INPUT_LEFT));
			input_pad_or_key(&pad[i_char].key[configpad[1].up]	    ,CheckStateKey(KEY_INPUT_UP));
			input_pad_or_key(&pad[i_char].key[configpad[1].right]  ,CheckStateKey(KEY_INPUT_RIGHT));
			input_pad_or_key(&pad[i_char].key[configpad[1].down]	,CheckStateKey(KEY_INPUT_DOWN));
			input_pad_or_key(&pad[i_char].key[configpad[1].shot]	,CheckStateKey(KEY_INPUT_K));
			input_pad_or_key(&pad[i_char].key[configpad[1].bom]	,CheckStateKey(KEY_INPUT_L));
			input_pad_or_key(&pad[i_char].key[configpad[1].slow]	,CheckStateKey(KEY_INPUT_J));
			break;

	}
}

//ｷｵｻﾘｴｫﾈ�ｵﾄﾊﾖｱ�ｵﾄｰｴｼ�ｱ犲ﾅｶﾔﾓｦｵﾄﾊ菠�ﾗｴﾌｬ｡｣ﾈ郢�ｷｵｻﾘ-1ｱ�ﾊｾｴｫﾈ�ｴ�ﾎ�｡｣
int CheckStatePad(unsigned int Handle){
	if(0 <=Handle && Handle<PAD_MAX){
		return pad[i_char].key[Handle];
	}
	else{
		printfDx("CheckStatePad_0830\n");
		return -1;
	}
}