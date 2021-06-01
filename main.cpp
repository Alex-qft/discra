
#define N  3
#include <vector>
#include <iostream>
using namespace std;
vector <int> vec (N);
int schet=0;                //  суммарное число положительных и отрицательных шагов
void output ()                 //функция которая чота считает
{
    int s=0;
    int j=0;
    do
    {
        s=s+vec[j];
        j++;
    }
    while(s>-1&&j<N);
    if (j==N) schet=schet+1;
}


void recount (int p)// р - число элементов в векторе
{
    for (int i = 0; i<p;i++) // заполнение вектора единицами
    {
        vec[i]=1;
    }
    output ();
    for (int d = 0; d<p ;d++)
    {
        vec[d]=-1;
        recount(d);
    }
}

int main ()
{
    recount (N);
    cout<<schet<<endl;
}
