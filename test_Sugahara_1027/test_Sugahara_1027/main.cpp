/*
【問題】

Objectクラス
x,y,z座標を保存する変数、Update関数を持つ。
Update関数はvirtualで作ってください。

Vehicle(乗り物)クラス
Objectクラスを継承したクラス。
ここではSpeedUpクラスを追加してください。
またspeedとaccelの変数をここで追加してください。
SpeedUpクラスはvirtualで作ってください。
(正確な速度の処理を行いたい場合は、向きと加速度で、
ベクトルを計算する方法でも構いません。)

Car(車)クラス
Vehicleクラスを継承したクラス
SpeedUpをここでCar用に実装してください。

流れを理解するという意味で、
この親クラスから派生クラスを作っていってほしいので、
中の計算処理やデータの設定の仕方は、
適当に行ってもらって結構です。

また、このクラスは必ず提出してください。
成績に加味します。

時間があれば、
Vehicleクラスを継承して、
bicycle(自転車)やbike(オートバイ)
といったクラスの作成や、
Carをさらに継承したpolice carや、truckなどの
クラスを作成してみてください。
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
