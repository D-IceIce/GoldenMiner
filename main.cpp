#include <stdio.h>
#include <easyx.h>
#include <math.h>

#define gold 1
#define bag 3
#define roleDOWN 5
#define roleUP 7
#define stone 9
#define background 10

double angle = 0;

struct ROLE
{
	int w;	//��
	int h;		//��
	int x;		//��������x
	int y;		//��������y
}role;

void hookmove(double angle) {
	setlinecolor(BROWN);
	setlinestyle(PS_SOLID, 5);
	if (angle > 81) angle -= 1;
	if (angle < -81) angle += 1;
	line(role.x + 47, role.y + 100, );
}

int main() {
	// ��������
	initgraph(1080, 640);
	setbkcolor(RGB(250, 128, 114));
	cleardevice();

	// ����ͼƬ
	IMAGE image[11];
	for (int i = 0; i < 11; i++) {
		WCHAR imageName[20] = { 0 };
		wsprintf(imageName, _T("./images/%d.jpg"),i);
		loadimage(image + i, imageName);
	}

	//������
	putimage(0, 120, image+ background);

	 //����ɫ
	role.w = 140;
	role.h = 120;
	putimage((getwidth()- role.w) /2, 0, image + roleUP);

	// ������
	while (1) {
		hookmove(angle);
	}

	getchar();

	return 0;
}