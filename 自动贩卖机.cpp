#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<conio.h>


int login_b();//��֤�������û��Ƿ��Ӧ��
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

int change=100;//��ʼ����100�㳮
int flag=1;

struct vender {
	int price;//2,3,6
	int remain;
	int sale;//������
} sp[3]= {2,0,0,3,10,0,6,10,0};



int main() {

	char x;
//	int p=1;
	enter();
	enter_choose();
	return 0;
}

void enter() {
	SetConsoleTitle("�Զ�������");
	printf("  				   �n�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�n \n");
	printf("  				  �U �k�k  �Զ������� �k�k �U\n");
	printf("  				  �U    ��a.����ѡ��   �U\n");
	printf("  			   	  �U    ��b.����ѯ   �U\n");
	printf("  				  �U    ��c.��Ʒ�ϼ�   �U\n");
	printf("  				  �U    ��d.���۲�ѯ�� �U\n");
	printf("  				  �U    ��e.��Ʋ�ѯ�� �U\n");
	printf("  				  �U    ��f.�˳�ϵͳ�� �U\n");
	printf("  				  �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
	printf("����������ѡ�\n");
//	getchar();
}

void a() {
	SetConsoleTitle("��Ʒѡ��");
	int j;
	char c;
	system("cls");
	printf("  				   �n�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�n \n");
	printf("  				  �U �k�k ��ѡ��������Ʒ �k�k �U\n");
	printf("  				  �U      ��1.��ƷA       �U\n");
	printf("  			   	  �U      ��2.��ƷB       �U\n");
	printf("  				  �U      ��3.��ƷC       �U\n");
	printf("  				  �U      ��4.�����ϼ�    �U\n");
	printf("  				  �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
//	getchar();
	printf("����������ѡ�");
	while (1) {
label:	scanf("%d", &j);
//		printf("%d",j);
		switch (j) {
			case 1:
				if(sp[0].remain!=0&&change!=0) {
					printf("��ѡ������ƷA��֧����Ԫ,������ʾ��Ͷ��ʮ��ֽ��\n");
					printf("Ͷ����ɺ�������Y\n");
					getchar();
					scanf("%c",&c);
					if(c=='Y'||c=='y') {
						getchar();
						char y;
						printf("��ȡ��������Ʒ�����պ�������Ǯ\n");
						printf("��ӭ�´ι��٣�\n");
						printf("��������������˵�����q�˳�����\n");
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
					printf("��ѡ������Ʒ���Ϊ0����ѡ��������Ʒ!\n");
					goto label;
						//getchar();
			//		break;
				//	system("cls");
			
				//	enter_choose();
					//scanf("%d",&j);
					//getchar();
				}
				break;  //����switch

			case 2:
				if(sp[1].remain!=0&&change!=0) {
					printf("��ѡ������ƷB��֧����Ԫ,������ʾ��Ͷ��ʮ��ֽ��\n");
					printf("Ͷ����ɺ�������Y\n");
					getchar();
					scanf("%c",&c);
					if(c=='Y'||c=='y') {
						getchar();
						char y;
						printf("��ȡ��������Ʒ�����պ�������Ǯ\n");
						printf("��ӭ�´ι��٣�\n");
						printf("��������������˵�����q�˳�����\n");
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
					printf("��ѡ������Ʒ���Ϊ0����ѡ��������Ʒ!\n");
					goto label;
					//scanf("%d",&j);
					//getchar();
				}
				break;  //����switch

			case 3:
				if(sp[2].remain!=0&&change!=0) {
					printf("��ѡ������ƷC��֧����Ԫ,������ʾ��Ͷ��ʮ��ֽ��\n");
					printf("Ͷ����ɺ�������Y\n");
					getchar();
					scanf("%c",&c);
					if(c=='Y'||c=='y') {
						getchar();
						char y;
						printf("��ȡ��������Ʒ�����պ�������Ǯ\n");
						printf("��ӭ�´ι��٣�\n");
						printf("��������������˵�����q�˳�����\n");
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
					printf("��ѡ������Ʒ���Ϊ0����ѡ��������Ʒ!\n");
					goto label;
					//scanf("%d",&j);
				//	getchar();
				}
				break;  //����switch

			case 4:
				system("cls");
				enter();
				enter_choose();
				break;

			default:
				printf("��������, ����������:");
				getchar();
				break;
		}
		break;
	}
}



void b() {
	SetConsoleTitle("����ѯ");
	system("cls");
	printf("  				   �n�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�n \n");
	printf("  				  �U �k�k�k  ����ѯ �k�k�k �U\n");
	printf("  				  �U  ��  ��ƷAʣ��:%d �U\n",sp[0].remain);
	printf("  			   	  �U  ��  ��ƷBʣ��:%d �U\n",sp[1].remain);
	printf("  				  �U  ��  ��ƷCʣ��:%d �U\n",sp[2].remain);
	printf("  				  �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
	printf("�������������һ��\n");
//	Sleep(100000);
//	getchar();
	getchar();
	system("cls");
	enter ();
	enter_choose();
	//���ش���
}

void c() {
	SetConsoleTitle("��Ʒ�ϼ�");
	system("cls");
	printf("\n");
	printf("                                ���������ϼܵ���Ʒ������:\n");
	char m;
	int n;
	scanf("%c",&m);
//	getchar();
	getchar();
	scanf("%d",&n);

//	printf("%c %d",m,n);
	if(m=='a'||m=='A') {
		if(n>0)
			printf("��Ʒ�ϼܳɹ���\n");
		else if(n+sp[0].remain>=0)
			printf("��Ʒ�¼ܳɹ���\n");
		else
			printf("��Ʒ�¼�ʧ�ܣ�ʣ�಻�㣡\n");
		sp[0].remain=sp[0].remain+n;
	} else if(m=='b'||m=='B') {
		if(n>0)
			printf("��Ʒ�ϼܳɹ���\n");
		else if(n+sp[1].remain>=0)
			printf("��Ʒ�¼ܳɹ���\n");
		else
			printf("��Ʒ�¼�ʧ�ܣ�ʣ�಻�㣡\n");
		sp[1].remain=sp[1].remain+n;
	} else if(m=='c'||m=='C') {
		if(n>0)
			printf("��Ʒ�ϼܳɹ���\n");
		else if(n+sp[2].remain>=0)
			printf("��Ʒ�¼ܳɹ���\n");
		else
			printf("��Ʒ�¼�ʧ�ܣ�ʣ�಻�㣡\n");
		sp[2].remain=sp[2].remain+n;
	} else {
		printf("�������Ŷ,û�д���Ʒ\n");
	}
	getchar();
	//�������  ����������
	printf("��������������˵�\n");
	getchar();
//	getchar();
	system("cls");
	enter ();
	enter_choose();
}


void d() {
	SetConsoleTitle("���۲�ѯ");
	system("cls");
	printf("  				   �n�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�n \n");
	printf("  				  �U �k�k�k  ���۲�ѯ �k�k�k �U\n");
	printf("  				  �U  ��  ��ƷA���� :%d �U\n",sp[0].sale);
	printf("  			   	  �U  ��  ��ƷB���� :%d �U\n",sp[1].sale);
	printf("  				  �U  ��  ��ƷC���� :%d �U\n",sp[2].sale);
	printf("  				  �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
	printf("�������������һ��\n");
//	getchar();
	getchar();
	system("cls");
	enter ();
	enter_choose();

	//���ش���
}



void e() {
	SetConsoleTitle("��Ʋ�ѯ");
	int sum;
	sum=2*sp[0].sale+3*sp[1].sale+6*sp[2].sale;
	system("cls");
	printf("  				   �n�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�k�n \n");
	printf("  				  �U �k�k�k  ��Ʋ�ѯ �k�k�k �U\n");
	printf("  				  �U �� ��ƷA���۶�:%dԪ�U\n",sp[0].sale*2);
	printf("  			   	  �U �� ��ƷB���۶�:%dԪ�U\n",sp[1].sale*3);
	printf("  				  �U �� ��ƷC���۶�:%dԪ�U\n",sp[2].sale*6);
	printf("  				  �U     ���ϼ�%dԪ     �U\n",sum);
	printf("  				  �U �k�k�k  �㳮��ѯ �k�k�k �U\n");
	printf("  				  �U ��   ʣ���㳮 %d  �U  \n",change);
//	printf("  			   	  �U ��   3Ԫʣ��: %d  �U  \n",sp[1].change);
//	printf("  				  �U ��   4Ԫʣ��: %d  �U  \n",sp[2].change);
	printf("  				  �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");




	printf("�������������һ��\n");
//	getchar();
	getchar();
	system("cls");
	enter();
	enter_choose();

	//���ش���
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

				break;  //����switch
			case 'd':
				login_d();

				break; //����switch
			case 'e':
				login_e();

				break;  //����switch
			case 'f':
				exit(0);
				break;
			default:
				printf("��������, ����������:");
				//	getchar();
				break;
				//����while
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

				break;  //����switch
			case 'd':
				login_d();

				break; //����switch
			case 'e':
				login_e();

				break;  //����switch
			case 'f':
				exit(0);
				break;
			default:
				printf("��������, ����������:");
			//	getchar();
				break;
				//����while
		}

	}
}*/

int login_b() {
	SetConsoleTitle("��¼");
	system("cls");
	printf("  				   =============== \n");
	printf("  				  |*     ��¼    *|\n");
	printf("  				   ===============\n");
	printf("���������Ա����������:\n");
	int isok;
	char name[122] ;
	scanf ("%s",&name);

	char pwd[122] ;
	scanf("%s",&pwd);
	getchar();
	if((recog_pwd(name,pwd))==1) {
		printf("�û�����������ȷ��\n");
		Sleep(800);
		system("cls");
		b();
	} else printf("�û������ڻ����������\n�������˵�\n");
	Sleep(1000);
	system("cls");
	enter();
//		reinput_choose();
	enter_choose();




}

int login_c() {
	SetConsoleTitle("��¼");
	system("cls");
	printf("  				   =============== \n");
	printf("  				  |*     ��¼    *|\n");
	printf("  				   ===============\n");
	printf("���������Ա����������:\n"); 
	int isok;
	char name[122] ;
	scanf ("%s",&name);

	char pwd[122] ;
	scanf("%s",&pwd);
	getchar();
	if((recog_pwd(name,pwd))==1) {
		printf("�û�����������ȷ��\n");
		Sleep(800);
		system("cls");
		c();
	} else printf("�û������ڻ����������\n�������˵�\n");
	Sleep(1000);
	system("cls");
	enter();
//		reinput_choose();
	enter_choose();
}

int login_d() {
	SetConsoleTitle("��¼");
	system("cls");
	printf("  				   =============== \n");
	printf("  				  |*     ��¼    *|\n");
	printf("  				   ===============\n");
	printf("���������Ա����������:\n");
	int isok;
	char name[122] ;
	scanf ("%s",&name);

	char pwd[122] ;
	scanf("%s",&pwd);
	getchar();
	if((recog_pwd(name,pwd))==1) {
		printf("�û�����������ȷ��\n");
		Sleep(800);
		system("cls");
		d();
	} else printf("�û������ڻ����������\n�������˵�\n");
	Sleep(1000);
	system("cls");
	enter();
	enter_choose();

}

int login_e() {
	SetConsoleTitle("��¼");
	system("cls");
	printf("  				   =============== \n");
	printf("  				  |*     ��¼    *|\n");
	printf("  				   ===============\n");
	printf("���������Ա����������:\n");  
	int isok;
	char name[122] ;
	scanf ("%s",&name);

	char pwd[122] ;
	scanf("%s",&pwd);
	getchar();
	if((recog_pwd(name,pwd))==1) {
		printf("�û�����������ȷ��\n");
		Sleep(800);
		system("cls");
		e();
	} else printf("�û������ڻ����������\n�������˵�\n");
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
	*�ж��˻��Ƿ����
	*/
	while(!feof(fp1)) {
		fscanf(fp1,"%s",str);
		if(strcmp(str,name)==0) {
			printf("�û��� :%s ��ȷ\n",name);
			fscanf(fp1,"%s",str);
			if(strcmp(str,pwd)==0) {
				printf("���� :%s ��ȷ\n",pwd);
				return 1;
			} else {
				printf("���� :%s  ����\n",pwd);
				fclose(fp1);
				return 0;
			}

		}
		fscanf(fp1,"%s",str);

	}
	fclose(fp1);
	return 0;

}
