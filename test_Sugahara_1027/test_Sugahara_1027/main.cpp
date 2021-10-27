/*
�y���z

Object�N���X
x,y,z���W��ۑ�����ϐ��AUpdate�֐������B
Update�֐���virtual�ō���Ă��������B

Vehicle(��蕨)�N���X
Object�N���X���p�������N���X�B
�����ł�SpeedUp�N���X��ǉ����Ă��������B
�܂�speed��accel�̕ϐ��������Œǉ����Ă��������B
SpeedUp�N���X��virtual�ō���Ă��������B
(���m�ȑ��x�̏������s�������ꍇ�́A�����Ɖ����x�ŁA
�x�N�g�����v�Z������@�ł��\���܂���B)

Car(��)�N���X
Vehicle�N���X���p�������N���X
SpeedUp��������Car�p�Ɏ������Ă��������B

����𗝉�����Ƃ����Ӗ��ŁA
���̐e�N���X����h���N���X������Ă����Ăق����̂ŁA
���̌v�Z������f�[�^�̐ݒ�̎d���́A
�K���ɍs���Ă�����Č��\�ł��B

�܂��A���̃N���X�͕K����o���Ă��������B
���тɉ������܂��B

���Ԃ�����΁A
Vehicle�N���X���p�����āA
bicycle(���]��)��bike(�I�[�g�o�C)
�Ƃ������N���X�̍쐬��A
Car������Ɍp������police car��Atruck�Ȃǂ�
�N���X���쐬���Ă݂Ă��������B
*/
#include <stdio.h>

class Object
{
public:
	Object() {};
	virtual ~Object() { printf("\n~Object\n"); };
	
	virtual void Update()
	{
		printf("x=%d \ny=%d \nz=%d\n",x,y,z);
	};

	int x = 0;
	int y = 0;
	int z = 0;
private:

};

class Vehicle : public Object
{
public:
	Vehicle() {};
	virtual ~Vehicle() { printf("\n~Vehicle\n"); };

	virtual void SpeedUp()
	{
		printf("speed:%d += accel:%d\n", speed,accel);
		speed += accel;
		printf("new speed = %d\n", speed);
	}

	int speed = 1;
	int	accel = 1;

private:

};

class Car : public Vehicle
{
public:
	Car() 
	{
		speed = 3;
		accel = 3;
	};
	virtual~Car() { printf("\n~car\n"); };

	void SpeedUp()
	{
		printf("speed:%d += accel:%d\n", speed, accel);
		speed += accel;
		printf("new speed = %d\n", speed);
	};

	void Update()
	{
		x += speed;
		printf("x=%d \ny=%d \nz=%d\n", x, y, z);
	};
	
private:

};

class Car : public Vehicle
{
public:
	Car() 
	{
		speed = 3;
		accel = 3;
	};
	virtual~Car() { printf("\n~car\n"); };

	void SpeedUp()
	{
		printf("speed:%d += accel:%d\n", speed, accel);
		speed += accel;
		printf("new speed = %d\n", speed);
	};

	void Update()
	{
		x += speed;
		printf("x=%d \ny=%d \nz=%d\n", x, y, z);
	};
	
private:

};

int main()
{
	Car car;

	for (int i = 0; i < 10; i++)
	{
		car.SpeedUp();
		car.Update();
	}

};
