#include<iostream>
using namespace std;

void topFourGrades(double grades[],int size){
     //сортираме масива в низходящ ред
     //този тип сортиране е обяснен в решението
     //на задача 6 от седмица 7
     for(int i=0;i<size;i++){
        int max_pos=i;
        for(int k=i+1;k<size;k++){
            if(grades[k]>grades[max_pos]){
                max_pos=k;
            }
        }
        int temp=grades[i];
        grades[i]=grades[max_pos];
        grades[max_pos]=temp;
    }
    //след като масивът е сортиран
    //просто оптечатваме първите 4-ри
    //елемента, които ще са и най-големи
    cout<<"The top4 grades are : "<<endl
        <<grades[0]<<endl
        <<grades[1]<<endl
        <<grades[2]<<endl
        <<grades[3]<<endl;
}
int main(){

    double grades[]={5.2,4.3,2,3.5,6.0,5.4,5.8,4.9,6.0};
    topFourGrades(grades,9);
}
