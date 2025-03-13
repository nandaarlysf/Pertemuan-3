#include<iostream>
#include<string>
using namespace std;

int arr[20];          //Deklarasi variable global array a dengan ukuran 20
int n ;               //Deklarasi variable global n untuk menyimpan banyaknya elemen pada array

void input(){        //procedur untuk  input
    while ((true)){
        cout<<"Masukkan banyaknya elemen pada array:"<<endl;
        cin>> n;
        if (n<20)
            break;
            else{
                cout<<"\nArray dapat mempunyai maksimal 20 elemen\n"<< endl;
              }   
    }
    cout<<endl
    cout<<"==================="<<endl;
    cout<<"Masukkan elemen array"<<endl;
    cout<<"====================="<<endl;

    for (int i=0;i<n;i++){
        cout << "Data ke-"<< (i+1) <<";";
        cin >> arr[i];
    }


    void bubbleSortArray(){
        int pass=1;  //step1

        do
    }
    for(int j=0; j<=n -1-pass;j++)
    { //step 2

        if ( arr[j]>arr[j+1])//Step 3
        {
            int temp;
            temp=arr[j]
            arr [j+1]=temp;
        }
    }

pass=pass+1; //step 4
}while (pass<=n-1 );// step 5
