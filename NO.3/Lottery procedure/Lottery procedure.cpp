#include"stdio.h"
#include <stdlib.h>
#include <time.h>
#include <math.h>


int Award_res()					//�񽱽�� 
{
	int ls_num;
	ls_num = rand();
	if(ls_num <= 327)
	{
		printf("��ϲ��á�һ�Ƚ���\n");
		return 1;
	} else if(ls_num >= 400&&ls_num <= 2039)
	{
		printf("��ϲ��á����Ƚ���\n");
		return 2;
	}else if(ls_num >= 29491)
	{
		printf("��ϲ��á����Ƚ���\n");
		return 3;
	} else
	{
		printf("δ�񽱣��ٽ�������\n");
		return 0;
	}
	
}



char md;
char mode;
char key_value;

int main()
{
	int ret;
	int make_counter=0;
	
	int first_counter=0; 
	int second_counter=0; 
	int third_counter=0; 
	
	time_t t;
	srand((unsigned) time(&t));

		printf("*********�齱ϵͳ**********\n");
		printf("�����밴��\n�Զ�ģʽ��A   �ֶ�ģʽ��M\r\n");
		scanf("%c",&mode); 
		getchar(); 
		printf("������������ĸ������ʼ�齱\r\n");
	while(1){
		if(mode == 'M'||mode == 'm'){
			scanf("%c",&key_value);
			getchar();
			
			if((key_value>='A'&&key_value<='Z')||(key_value>='a'&&key_value<='z')) {
				Award_res();
			}else {
					printf("�����������������\r\n");
			}
		
		}else if (mode=='A'||mode=='a'){
			make_counter++;
			ret=Award_res();
			switch(ret){
					case 1:
					if(first_counter == 0)first_counter=make_counter;
					break;
					case 2:
					if(second_counter == 0)second_counter=make_counter;
					break;
					case 3:
					if(third_counter == 0)third_counter=make_counter;
					break;
					default :
					break;
			}
		}else {
			break;
		}
		if(first_counter != 0&&second_counter != 0&&third_counter != 0)
		{
			printf("��һ�γ鵽��һ�Ƚ����Ĵ�����%d\r\n",first_counter);
			printf("��һ�γ鵽�����Ƚ����Ĵ�����%d\r\n",second_counter);
			printf("��һ�γ鵽�����Ƚ����Ĵ�����%d\r\n",third_counter);		
			scanf("%c",&md);
							
		}
		
	}
	}










