#include <iostream>

using namespace std;

int arr[20];
int i,j,k,n,temp;
    

void input(){
    while (true)
    {
        cout <<"masukan banyaknya elemen array : ";
        cin >> n;
        if (n <= 20)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 20 eleman.\n";
        }
    }
    cout << endl;
    cout << "====================" << endl;
    cout << "masukan elemen array" << endl;
    cout << "====================" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "data ke-" << (i + 1 ) << ": ";
        cin >> arr[i];
    }
}void bubbleSortArray(){ //procedur untuk mengurutkan array
    int pass= 1; //step 1
    do {
        for(int j = 0; j <= n - 1 - pass; j++){ //step 2
            if(arr[j] > arr[j + 1])
            { //step 3
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        pass = pass + 1; //step 4 
    } while (pass <= n - 1); //step 5
} void display (){
    cout << endl;
    cout << "=================================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "=================================" << endl;
    for( int j = 0; j < n; j++){
        cout << arr[j] << endl; //output setiap element array pada garis baru
    }
    cout << "jumlah pass = " << n-1  << endl;
    cout << endl;  
}




void input2()
{
    while (true)
    {
        cout <<"masukan banyaknya elemen array : ";
        cin >> k;
        if (k <= 20)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 20 eleman.\n";
        }
    }
    cout << endl;
    cout << "====================" << endl;
    cout << "masukan elemen array" << endl;
    cout << "====================" << endl;
    for (int i = 0; i < k; i++)
    {
        cout << "data ke-" << (i + 1 ) << ": ";
        cin >> arr[i];
    }
}
void InsertionSort()
{
    for(i = 1; i <= k-1; i++) 
    { //step 1
        temp = arr[i]; //step 2

        j = i - 1; //step 3

        while (j >= 0 && arr[j] > temp) //step 4
        {
            arr[j+1] = arr[j]; //step 4a
            j--; //step 4b
        }

        arr[j + 1] = temp; //step 5
    }

} void display2(){
    cout << endl;
    cout << "=================================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "=================================" << endl;
    for( int j = 0; j < k; j++){
        cout << arr[j] << endl; //output setiap element array pada garis baru
    }
    cout << "jumlah pass = " << k-1  << endl;
    cout << endl; 
}

int main(){

 input();
        bubbleSortArray();
        display();
        system("pause");

    input2();
    InsertionSort();
    display2();

    system("pause");
    return 0;
}