#include"stdio.h"
#include <stdlib.h>
#include <time.h>
#include <math.h>


int Award_res()					//获奖结果 
{
	int ls_num;
	ls_num = rand();
	if(ls_num <= 327)
	{
		printf("恭喜获得“一等奖”\n");
		return 1;
	} else if(ls_num >= 400&&ls_num <= 2039)
	{
		printf("恭喜获得“二等奖”\n");
		return 2;
	}else if(ls_num >= 29491)
	{
		printf("恭喜获得“三等奖”\n");
		return 3;
	} else
	{
		printf("未获奖，再接再厉”\n");
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

		printf("*********抽奖系统**********\n");
		printf("请输入按键\n自动模式：A   手动模式：M\r\n");
		scanf("%c",&mode); 
		getchar(); 
		printf("请输入任意字母按键开始抽奖\r\n");
	while(1){
		if(mode == 'M'||mode == 'm'){
			scanf("%c",&key_value);
			getchar();
			
			if((key_value>='A'&&key_value<='Z')||(key_value>='a'&&key_value<='z')) {
				Award_res();
			}else {
					printf("输入错误，请重新输入\r\n");
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
			printf("第一次抽到“一等奖”的次数：%d\r\n",first_counter);
			printf("第一次抽到“二等奖”的次数：%d\r\n",second_counter);
			printf("第一次抽到“三等奖”的次数：%d\r\n",third_counter);		
			scanf("%c",&md);
							
		}
		
	}
	}










