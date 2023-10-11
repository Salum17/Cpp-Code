#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>

using namespace std;

double getSum(double temp[]){
    double sum = 0;
    for (int i = 0; i < 22; i++){
        sum = sum + temp[i];
    }
    return sum;
}
double getAve(double sum){
    double ave = sum/22;
    return ave;
}
double getMin(double temp[]){
    int i = 0;
    double min = temp[0];
    for (i = 1; i < 22; i++){
        if (temp[i] < min){
            min = temp[i];
        }
    }
    return min; 
}
double getMax(double temp[]){
    int i = 0;
    double max = temp[0];
    for (i = 1; i < 22; i++){
        if (temp[i] > max){
            max = temp[i];
        }
    }
    return max; 
}
int bSearch(double temp[], double findTemp){
    int indexNum;
    for (int i =0; i < 22; i++){
        if (temp[i] == findTemp){
            indexNum = i;
            break;
        }
    }
    return indexNum;
}
void extractodd(int list1[] ,int m, int list2[], int n, int list3[] , int &n3){
   n3 = 0;
  
   for(int i=0;i<m;i++){
       if(list1[i] % 2 == 1){
           list3[n3] = list1[i];
           n3++;
       }
   }
  
   for(int i=0;i<n;i++){
       if(list2[i] % 2 == 1){
           list3[n3] = list2[i];
           n3++;
       }
   }
}

void extracteven(int list1[] ,int m, int list2[], int n, int list3[] , int &n3){
   n3 = 0;
  
   for(int i=0;i<m;i++){
       if(list1[i] % 2 == 0){
           list3[n3] = list1[i];
           n3++;
       }
   }
  
   for(int i=0;i<n;i++){
       if(list2[i] % 2 == 0){
           list3[n3] = list2[i];
           n3++;
       }
   }
}

void merge(int list1[] ,int m, int list2[], int n, int list3[]){
   int index = 0;
  
   for(int i=0;i<m;i++){
       list3[index] = list1[i];
       index++;
   }
  
   for(int i=0;i<n;i++){
       list3[index] = list2[i];
       index++;
   }
}

void bubblesort(int a[],int n){
   for(int i=n-1;i>=0;i--){
       for(int j=0;j<i;j++){
           if(a[j]>a[j+1]){
               int temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
           }
       }
   }
}

void mergeSort(int list1[] ,int m, int list2[], int n, int list3[] ){
   bubblesort(list1 , m);
   bubblesort(list2 , n);
  
   int index = 0;
   int i = 0 ,j =0;
  
   while(i<m && j<n){
       if(list1[i] < list2[j]){
           list3[index++] = list1[i++];
       }
       else{
           list3[index++] = list2[j++];
       }
   }
  
   while(i<m){
       list3[index++] = list1[i++];
   }
  
   while(j<n){
       list3[index++] = list2[j++];
   }
}

void display(int list[] , int n){
   for(int i=0;i<n;i++){
       cout<<list[i]<<"\t";
   }
   cout<<endl;
}

int main() {
    ifstream fin;
    double temp[22];
    fin.open("temprature.txt");

    for (int i = 0; i < 22; i++){
        fin >> temp[i];
    }

    double sum = getSum(temp);
    double ave = getAve(sum);
    double min = getMin(temp);
    double max = getMax(temp);
    cout << sum << ave << min << max <<endl;
}