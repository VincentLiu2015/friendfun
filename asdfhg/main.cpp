#include <iostream>
#include "stdlib.h"
#include "Time.h"
using namespace std;
//友元全局函数
void printTime(Time &t);
//可以新建一个头文件把包含进去，coordinate
class Coordinate
{
    friend void printXY(Coordinate &c);
public:
    Coordinate(int x, int y);//构造函数
private:
    int m_iX;
    int m_iY;

};
void printXY(Coordinate &c);//因为用到coordinate所以要放在类coordinate后不然报错


int main(void)
{
    Coordinate coor (3,5);
    printXY(coor); //因为我们printXY参数是引用所以这里我们只要给给coor对象名就可以了

    Time t (6,34,25);
    printTime(t);
    cout << "Hello world!" << endl;
    system("pause");
    return 0;
}
void printTime(Time &t)
{
    cout<<t.m_iHour<<":"<<t.m_iMinute<<":"<<t.m_iSecond<<endl;

}
void printXY(Coordinate & c)
{
    cout<<c.m_iX<<'\n'<<c.m_iY<<'\n';
}
//构造函数可以新建一个cpp文件包含类的头文件定义比如我定义的Time也可以这样定义
Coordinate::Coordinate (int x,int y)
{
 m_iX =x;
 m_iY =y;
}

