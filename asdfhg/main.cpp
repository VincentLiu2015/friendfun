#include <iostream>
#include "stdlib.h"
#include "Time.h"
using namespace std;
//��Ԫȫ�ֺ���
void printTime(Time &t);
//�����½�һ��ͷ�ļ��Ѱ�����ȥ��coordinate
class Coordinate
{
    friend void printXY(Coordinate &c);
public:
    Coordinate(int x, int y);//���캯��
private:
    int m_iX;
    int m_iY;

};
void printXY(Coordinate &c);//��Ϊ�õ�coordinate����Ҫ������coordinate��Ȼ����


int main(void)
{
    Coordinate coor (3,5);
    printXY(coor); //��Ϊ����printXY����������������������ֻҪ����coor�������Ϳ�����

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
//���캯�������½�һ��cpp�ļ��������ͷ�ļ���������Ҷ����TimeҲ������������
Coordinate::Coordinate (int x,int y)
{
 m_iX =x;
 m_iY =y;
}

