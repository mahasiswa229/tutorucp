#include<iostream>
using namespace std;

int arr[20];
int n;

void ilamti()
{
    int pass=1;
    do
    {
        for (int i = 0; i <= n - 1- pass ; i++)
        {if (arr[i] > arr[i + 1])
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp; 
        }  
        }
        pass = pass + 1;
    }   while (pass <= n - 1);
}

int main(){

}
