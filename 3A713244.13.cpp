#include <iostream>
using namespace std;
int main(void)
{
	int asd;
	int sex;

		printf("�ڰ���k�b����100�~�H�e�A�W�w�k�k���B�̧C���ת��~�֫h���O�� 18 ���� 16 ���C���ڭ̧�ɥ��˦^�L�h�A�мg�@�q�{�����ϥΪ̿�J�ʧO�M�~�֡A�P�_�b�תk�H�e�L/�o�ण�൲�B\n");
		printf("�k�Ϳ�J1;�k�Ϳ�J2");
		printf("�п�J�ʧO�M�~��\n");
		scanf("%d",&sex);
		scanf("%d",&asd);

	if( sex==1 && asd>=18)
	{
		printf("�A�i�H���B\n");
	}
	if( sex==1 && asd<18)
	{
		printf("�A���i�H���B\n"); 
	}
	if( sex==2 && asd>=16)
	{
		printf("�p�i�H���B\n");
	}
	if( sex==2 && asd<16)
	{
		printf("�p���i�H���B\n");
	}
		return 0; 
}
