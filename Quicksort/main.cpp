#include <iostream>

using namespace std;

#include<fstream>

int mitad(int a[], int pinicial,int pfinal); // elemento central
void ordenar(int a[], int pinicial, int pfinal);   // ordenamiento

void archivo(int a[],int pinicial, int pfinal);

int main()
{


    int A[10]={123,-6,13,-33,-98,333,23,-5,0,-100};

    cout << "Arreglo original"<< endl;

    for(int i=0; i<10;i++){
        cout<<"|"<<A[i]<<"|";

    }

    cout << endl;
    cout << "Arreglo ordenado"<< endl;
    ordenar(A,0,9);
    for(int i=0; i<10;i++){
        cout<<"|"<<A[i]<<"|";

    }
    archivo(A,0,9);
    return 0;


}
int mitad(int a[], int pinicial,int pfinal){


return a[(pinicial+pfinal)/2];
}

void ordenar(int a[], int pinicial, int pfinal){

    int i=pinicial;
    int j=pfinal;
    int temp;
    int piv=mitad(a,pinicial,pinicial);

    do
    {
        while(a[i]<piv)
        {

            i++;
        }
        while(a[j]>piv)
        {
            j--;
        }
        if(i<=j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;
            j--;
        }
    }
    while(i<=j);

    if(pinicial<j)
        ordenar(a,pinicial,j);
    if(i<pfinal)
        ordenar(a,i,pfinal);
}

void archivo(int a[],int pinicial, int pfinal){

ofstream archivo;
 int A[10]={123,-6,13,-33,-98,333,23,-5,0,-100};
    archivo.open("quicksort.txt");

    archivo << "Arreglo original"<< endl;


    for(int i=0; i<10;i++){

        archivo << "|"<<A[i]<<"|";
    }
    archivo << endl;
    archivo << "Arreglo ordenado"<< endl;

    ordenar(A,0,9);
    for(int i=0; i<10;i++){

        archivo << "|"<<A[i]<<"|";
    }
archivo.close();



}
