#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<conio.h>


int login_b();//验证密码与用户是否对应；
int login_c();
int login_d();
int login_e();

void enter();
void a();
void b();
void c();
void d();
void e();
void f();

void enter_choose();
int recog_pwd(char name[20],char pwd[20]);

int change=100;//初始设置100零钞
int flag=1;

struct vender {
	int price;//2,3,6
	int remain;
	int sale;//销售量
} sp[3]= {2,0,0,3,10,0,6,10,0};



int main() {

	char x;
//	int p=1;
	enter();
	enter_choose();
	return 0;
}

void enter() {
	SetConsoleTitle("自动贩卖机");
	printf("  				   ╪╧╧╧╧╧╧╧╧╧╧╧╧╧╧╧╧╧╪ \n");
	printf("  				  ║ ╧╧  自动贩卖机 ╧╧ ║\n");
	printf("  				  ║    ※a.进入选购   ║\n");
	printf("  			   	  ║    ※b.库存查询   ║\n");
	printf("  				  ║    ※c.商品上架   ║\n");
	printf("  				  ║    ※d.销售查询　 ║\n");
	printf("  				  ║    ※e.会计查询　 ║\n");
	printf("  				  ║    ※f.退出系统　 ║\n");
	printf("  				  ╚═══════════════════╝\n");
	printf("请输入您的选项：\n");
//	getchar();
}

void a() {
	SetConsoleTitle("商品选购");
	int j;
	char c;
	system("cls");
	printf("  				   ╪╧╧╧╧╧╧╧╧╧╧╧╧╧╧╧╧╧╧╧╧╪ \n");
	printf("  				  ║ ╧╧ 请选购您的商品 ╧╧ ║\n");
	printf("  				  ║      ※1.商品A       ║\n");
	printf("  			   	  ║      ※2.商品B       ║\n");
	printf("  				  ║      ※3.商品C       ║\n");
	printf("  				  ║      ※4.返回上级    ║\n");
	printf("  				  ╚══════════════════════╝\n");
//	getchar();
	printf("请输入您的选项：");
	while (1) {
label:	scanf("%d", &j);
//		printf("%d",j);
		switch (j) {
			case 1:
				if(sp[0].remain!=0&&change!=0) {
					printf("您选购的商品A需支付两元,请在提示后投入十块纸币\n");
					printf("投币完成后请输入Y\n");
					getchar();
					scanf("%c",&c);
					if(c=='Y'||c=='y') {
						getchar();
						char y;
						printf("请取走您的商品，并收好您的零钱\n");
						printf("欢迎下次光临！\n");
						printf("按任意键返回主菜单，按q退出程序！\n");
						sp[0].remain--;
						sp[0].sale++;
						change-=2;

						scanf("%c",&y);
						getchar();
						if(y=='q') f();
						else {
							system("cls");
							//	getchar();
							enter();
							enter_choose();
						}
						break;
					}
				} else {
					printf("您选购的商品库存为0，请选购其他商品!\n");
					goto label;
						//getchar();
			//		break;
				//	system("cls");
			
				//	enter_choose();
					//scanf("%d",&j);
					//getchar();
				}
				break;  //跳出switch

			case 2:
				if(sp[1].remain!=0&&change!=0) {
					printf("您选购的商品B需支付三元,请在提示后投入十块纸币\n");
					printf("投币完成后请输入Y\n");
					getchar();
					scanf("%c",&c);
					if(c=='Y'||c=='y') {
						getchar();
						char y;
						printf("请取走您的商品，并收好您的零钱\n");
						printf("欢迎下次光临！\n");
						printf("按任意键返回主菜单，按q退出程序！\n");
						sp[1].remain--;
						sp[1].sale++;
						change-=3;

						scanf("%c",&y);
						getchar();
						if(y=='q') f();
						else {
							system("cls");
							//	getchar();
							enter();
							enter_choose();
						}
						break;
					}
				} else {
					printf("您选购的商品库存为0，请选购其他商品!\n");
					goto label;
					//scanf("%d",&j);
					//getchar();
				}
				break;  //跳出switch

			case 3:
				if(sp[2].remain!=0&&change!=0) {
					printf("您选购的商品C需支付六元,请在提示后投入十块纸币\n");
					printf("投币完成后请输入Y\n");
					getchar();
					scanf("%c",&c);
					if(c=='Y'||c=='y') {
						getchar();
						char y;
						printf("请取走您的商品，并收好您的零钱\n");
						printf("欢迎下次光临！\n");
						printf("按任意键返回主菜单，按q退出程序！\n");
						sp[2].remain--;
						sp[2].sale++;
						change-=6;

						scanf("%c",&y);
						getchar();
						if(y=='q') f();
						else {
							system("cls");
							//	getchar();
							enter();
							enter_choose();
						}
						break;
					}
				} else {
					printf("您选购的商品库存为0，请选购其他商品!\n");
					goto label;
					//scanf("%d",&j);
				//	getchar();
				}
				break;  //跳出switch

			case 4:
				system("cls");
				enter();
				enter_choose();
				break;

			default:
				printf("输入有误, 请重新输入:");
				getchar();
				break;
		}
		break;
	}
}



void b() {
	SetConsoleTitle("库存查询");
	system("cls");
	printf("  				   ╪╧╧╧╧╧╧╧╧╧╧╧╧╧╧╧╧╧╪ \n");
	printf("  				  ║ ╧╧╧  库存查询 ╧╧╧ ║\n");
	printf("  				  ║  ※  商品A剩余:%d ║\n",sp[0].remain);
	printf("  			   	  ║  ※  商品B剩余:%d ║\n",sp[1].remain);
	printf("  				  ║  ※  商品C剩余:%d ║\n",sp[2].remain);
	printf("  				  ╚═══════════════════╝\n");
	printf("按任意键返回上一级\n");
//	Sleep(100000);
//	getchar();
	getchar();
	system("cls");
	enter ();
	enter_choose();
	//返回代码
}

void c() {
	SetConsoleTitle("商品上架");
	system("cls");
	printf("\n");
	printf("                                请输入想上架的商品及数量:\n");
	char m;
	int n;
	scanf("%c",&m);
//	getchar();
	getchar();
	scanf("%d",&n);

//	printf("%c %d",m,n);
	if(m=='a'||m=='A') {
		if(n>0)
			printf("商品上架成功！\n");
		else if(n+sp[0].remain>=0)
			printf("商品下架成功！\n");
		else
			printf("商品下架失败！剩余不足！\n");
		sp[0].remain=sp[0].remain+n;
	} else if(m=='b'||m=='B') {
		if(n>0)
			printf("商品上架成功！\n");
		else if(n+sp[1].remain>=0)
			printf("商品下架成功！\n");
		else
			printf("商品下架失败！剩余不足！\n");
		sp[1].remain=sp[1].remain+n;
	} else if(m=='c'||m=='C') {
		if(n>0)
			printf("商品上架成功！\n");
		else if(n+sp[2].remain>=0)
			printf("商品下架成功！\n");
		else
			printf("商品下架失败！剩余不足！\n");
		sp[2].remain=sp[2].remain+n;
	} else {
		printf("输入错误哦,没有此商品\n");
	}
	getchar();
	//输入错误  请重新输入
	printf("按任意键返回主菜单\n");
	getchar();
//	getchar();
	system("cls");
	enter ();
	enter_choose();
}


void d() {
	SetConsoleTitle("销售查询");
	system("cls");
	printf("  				   ╪╧╧╧╧╧╧╧╧╧╧╧╧╧╧╧╧╧╪ \n");
	printf("  				  ║ ╧╧╧  销售查询 ╧╧╧ ║\n");
	printf("  				  ║  ※  商品A销量 :%d ║\n",sp[0].sale);
	printf("  			   	  ║  ※  商品B销量 :%d ║\n",sp[1].sale);
	printf("  				  ║  ※  商品C销量 :%d ║\n",sp[2].sale);
	printf("  				  ╚═══════════════════╝\n");
	printf("按任意键返回上一级\n");
//	getchar();
	getchar();
	system("cls");
	enter ();
	enter_choose();

	//返回代码
}



void e() {
	SetConsoleTitle("会计查询");
	int sum;
	sum=2*sp[0].sale+3*sp[1].sale+6*sp[2].sale;
	system("cls");
	printf("  				   ╪╧╧╧╧╧╧╧╧╧╧╧╧╧╧╧╧╧╪ \n");
	printf("  				  ║ ╧╧╧  会计查询 ╧╧╧ ║\n");
	printf("  				  ║ ※ 商品A销售额:%d元║\n",sp[0].sale*2);
	printf("  			   	  ║ ※ 商品B销售额:%d元║\n",sp[1].sale*3);
	printf("  				  ║ ※ 商品C销售额:%d元║\n",sp[2].sale*6);
	printf("  				  ║     ※合计%d元     ║\n",sum);
	printf("  				  ║ ╧╧╧  零钞查询 ╧╧╧ ║\n");
	printf("  				  ║ ※   剩余零钞 %d  ║  \n",change);
//	printf("  			   	  ║ ※   3元剩余: %d  ║  \n",sp[1].change);
//	printf("  				  ║ ※   4元剩余: %d  ║  \n",sp[2].change);
	printf("  				  ╚═══════════════════╝\n");




	printf("按任意键返回上一级\n");
//	getchar();
	getchar();
	system("cls");
	enter();
	enter_choose();

	//返回代码
}

void f() {
	exit(0);
}

void enter_choose() {
//	getchar();

	while(1) {
		char x;
		scanf("%c", &x);
		//	getchar();
		switch (x) {
			case 'a':
				a();
				break;
			case 'b':
				login_b();
				break;
			case 'c':
				login_c();

				break;  //跳出switch
			case 'd':
				login_d();

				break; //跳出switch
			case 'e':
				login_e();

				break;  //跳出switch
			case 'f':
				exit(0);
				break;
			default:
				printf("输入有误, 请重新输入:");
				//	getchar();
				break;
				//跳出while
		}
		//	break;

	}
}


/*void reinput_choose() {
	getchar();
	while (1) {
		char x;
		scanf("%c", &x);
		getchar();
		switch (x) {
			case 'a':
				a();
				break;
			case 'b':
				login_b();
				break;
			case 'c':
				login_c();

				break;  //跳出switch
			case 'd':
				login_d();

				break; //跳出switch
			case 'e':
				login_e();

				break;  //跳出switch
			case 'f':
				exit(0);
				break;
			default:
				printf("输入有误, 请重新输入:");
			//	getchar();
				break;
				//跳出while
		}

	}
}*/

int login_b() {
	SetConsoleTitle("登录");
	system("cls");
	printf("  				   =============== \n");
	printf("  				  |*     登录    *|\n");
	printf("  				   ===============\n");
	printf("请输入管理员姓名和密码:\n");
	int isok;
	char name[122] ;
	scanf ("%s",&name);

	char pwd[122] ;
	scanf("%s",&pwd);
	getchar();
	if((recog_pwd(name,pwd))==1) {
		printf("用户名与密码正确！\n");
		Sleep(800);
		system("cls");
		b();
	} else printf("用户不存在或者密码错误\n返回主菜单\n");
	Sleep(1000);
	system("cls");
	enter();
//		reinput_choose();
	enter_choose();




}

int login_c() {
	SetConsoleTitle("登录");
	system("cls");
	printf("  				   =============== \n");
	printf("  				  |*     登录    *|\n");
	printf("  				   ===============\n");
	printf("请输入管理员姓名和密码:\n"); 
	int isok;
	char name[122] ;
	scanf ("%s",&name);

	char pwd[122] ;
	scanf("%s",&pwd);
	getchar();
	if((recog_pwd(name,pwd))==1) {
		printf("用户名与密码正确！\n");
		Sleep(800);
		system("cls");
		c();
	} else printf("用户不存在或者密码错误\n返回主菜单\n");
	Sleep(1000);
	system("cls");
	enter();
//		reinput_choose();
	enter_choose();
}

int login_d() {
	SetConsoleTitle("登录");
	system("cls");
	printf("  				   =============== \n");
	printf("  				  |*     登录    *|\n");
	printf("  				   ===============\n");
	printf("请输入管理员姓名和密码:\n");
	int isok;
	char name[122] ;
	scanf ("%s",&name);

	char pwd[122] ;
	scanf("%s",&pwd);
	getchar();
	if((recog_pwd(name,pwd))==1) {
		printf("用户名与密码正确！\n");
		Sleep(800);
		system("cls");
		d();
	} else printf("用户不存在或者密码错误\n返回主菜单\n");
	Sleep(1000);
	system("cls");
	enter();
	enter_choose();

}

int login_e() {
	SetConsoleTitle("登录");
	system("cls");
	printf("  				   =============== \n");
	printf("  				  |*     登录    *|\n");
	printf("  				   ===============\n");
	printf("请输入管理员姓名和密码:\n");  
	int isok;
	char name[122] ;
	scanf ("%s",&name);

	char pwd[122] ;
	scanf("%s",&pwd);
	getchar();
	if((recog_pwd(name,pwd))==1) {
		printf("用户名与密码正确！\n");
		Sleep(800);
		system("cls");
		e();
	} else printf("用户不存在或者密码错误\n返回主菜单\n");
	Sleep(1000);
	system("cls");
	enter();
	enter_choose();
}

int recog_pwd(char name[20],char pwd[20]) {
	int s;
	FILE *fp1;
	char str[20];
	if ((fp1=fopen("read.txt","r"))==NULL) {
		printf("cannot open file\n");
		return 0;
	}
	/*
	*判断账户是否存在
	*/
	while(!feof(fp1)) {
		fscanf(fp1,"%s",str);
		if(strcmp(str,name)==0) {
			printf("用户名 :%s 正确\n",name);
			fscanf(fp1,"%s",str);
			if(strcmp(str,pwd)==0) {
				printf("密码 :%s 正确\n",pwd);
				return 1;
			} else {
				printf("密码 :%s  错误\n",pwd);
				fclose(fp1);
				return 0;
			}

		}
		fscanf(fp1,"%s",str);

	}
	fclose(fp1);
	return 0;

}
