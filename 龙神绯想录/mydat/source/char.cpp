#include "../include/GV.h"

extern void enter_char_item();//(39��)

void calc_ch(){
    if(ch[i_char].flag==1){//��炢�{����t��
        bright_set.brt=80;//�Â�
        if(ch[i_char].cnt>20){//0.33�b�󂯕t����
            ch[i_char].flag   =2;    //1:��炢�{����t���@2:����ŕ����オ�蒆
            ch[i_char].cnt    =0;
            bright_set.brt=255;
        }
    }
    if(ch[i_char].cnt==0 && ch[i_char].flag==2){//���̏u�Ԏ��񂾂�
		enter_char_item();//�L�����̃A�C�e���o�^(39��)
        ch[i_char].x=FMX/2;//���W�Z�b�g
        ch[i_char].y=FMY+30;
        ch[i_char].mutekicnt++;//���G��Ԃ�
    }
    if(ch[i_char].flag==2){//����ŕ��㒆�Ȃ�
        unsigned int push=CheckStatePad(configpad[i_char].left)+CheckStatePad(configpad[i_char].right)
            +CheckStatePad(configpad[i_char].up)+CheckStatePad(configpad[i_char].down);
        ch[i_char].y-=1.5;//�L��������ɏグ��
        //�P�b�ȏォ�A�L������������x��ɂ��āA���������ꂽ��
        if(ch[i_char].cnt>60 || (ch[i_char].y<FMY-20 && push)){
            ch[i_char].cnt=0;
            ch[i_char].flag=0;//�L�����X�e�[�^�X�����ɖ߂�
        }
    }
    if(ch[i_char].mutekicnt>0){//���G�J�E���g��0����Ȃ����
        ch[i_char].mutekicnt++;
        if(ch[i_char].mutekicnt>150)//150�ȏソ������
            ch[i_char].mutekicnt=0;//�߂�
    }
    ch[i_char].cnt++;//�L�����N�^�J�E���g�A�b�v
    ch[i_char].img=(ch[i_char].cnt%24)/6;//���݂̉摜����
}

void ch_move(){
    int i,sayu_flag=0,joge_flag=0;
    double x,y,mx,my,naname=1;
    double move_x[4]={-4.0,4.0,0,0},move_y[4]={0,0,4.0,-4.0};
    int inputpad[4];
    inputpad[0]=CheckStatePad(configpad[i_char].left); inputpad[1]=CheckStatePad(configpad[i_char].right);
    inputpad[2]=CheckStatePad(configpad[i_char].down); inputpad[3]=CheckStatePad(configpad[i_char].up);

    if(ch[i_char].flag==1)return;//��炢�{����t���͓������Ȃ�

    if(CheckStatePad(configpad[i_char].left)>0)//���L�[��������Ă�����
        ch[i_char].img+=4*2;//�摜����������
    else if(CheckStatePad(configpad[i_char].right)>0)//�E�L�[��������Ă�����
        ch[i_char].img+=4*1;//�摜���E������

    for(i=0;i<2;i++)//���E��
        if(inputpad[i]>0)//���E�ǂ��炩�̓��͂������
            sayu_flag=1;//���E���̓t���O�𗧂Ă�
    for(i=2;i<4;i++)//�㉺��
        if(inputpad[i]>0)//�㉺�ǂ��炩�̓��͂������
            joge_flag=1;//�㉺���̓t���O�𗧂Ă�
    if(sayu_flag==1 && joge_flag==1)//���E�A�㉺�����̓��͂�����Ύ΂߂��ƌ�����
        naname=sqrt(2.0);//�ړ��X�s�[�h��1/���[�g2��

    for(int i=0;i<4;i++){//4���������[�v
        if(inputpad[i]>0){//i�����̃L�[�{�[�h�A�p�b�h�ǂ��炩�̓��͂������
            x=ch[i_char].x , y=ch[i_char].y;//���̍��W���Ƃ肠����x,y�Ɋi�[
            mx=move_x[i];    my=move_y[i];//�ړ�����mx,my�ɑ��
            if(CheckStatePad(configpad[i_char].slow)>0){//�ᑬ�ړ��Ȃ�
                mx=move_x[i]/3;    my=move_y[i]/3;//�ړ��X�s�[�h��1/3��
            }
            x+=mx/naname , y+=my/naname;//���̍��W�ƈړ����𑫂�
            if(!(x<10 || x>FMX-10 || y<5 || y>FMY-5)){//�v�Z���ʈړ��\�͈͓��Ȃ�
                ch[i_char].x=x , ch[i_char].y=y;//���ۂɈړ�������
            }
        }
    }
}

