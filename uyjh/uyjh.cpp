#include <iostream>
#include <cstdlib>
using namespace std;

int main()  
{  
    int a[10] = {1, 8, 86, 47, 6, 4, 3, 2, 341};

    bool flag;
    do
    {  
        flag = false;  
        for (int i = 0; i < 9; i++)
        {
            if (a[i] > a[i + 1])
            {  
                flag = true;
                int tmp = a[i];  
                a[i] = a[i + 1];  
                a[i + 1] = tmp;
            }   
        }
    } while(flag);

    for (int i = 1; i < 10; i++)
    {
        cout << a[i] << endl;  
    }

    system("pause");
    return 0;
}

