#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  /*
  int i = 0;
  for (i = 0; i < 10; i++)
  {
    //printf("i=%d\n", i);
    if (i==4)
    {
      //tác d?ng th? th?p d?n cao
      //continue;
      //break;
      //exit(0);

    }
    printf("i=%d\n", i);
  }
  cout<<"End program"<< endl;
  
  return 0;

  int num[5]= {3,9,5,6,7,};
  int
   x = num[1];
   cout<<"element 1 is:"<< x <<endl; //hien dia chi thì la &x
   cout<<"end program"<<endl;
   
   float somefolats;
   cout<<"somefloats is:" << &somefolats<<endl;
   cout<<"end program"<<endl;

   int array1[3]={3,2,4};
   int array2[3]={8,5,6};
   //array1 = array2;
   for ( int i = 0; i < 3; i++)
   {
    array1[i] = array2[i];
   }
   
   cout<<"end program"<<endl;

   //nhap 5 phan tu
   int someInteger[5]= {5,8,9,6,2};
   int maxvalue;
   int sum;
   int average;
   for ( int i = 0; i < 5; i++)
   {
      cout<<"enter element " << i+1<<" : " <<endl;
      cin>>someInteger[i];
   }
   maxvalue = someInteger[0];
   for (int i = 0; i < 5; i++)
   {
    if (someInteger[i]> maxvalue)
    {
      maxvalue = someInteger[i];
    }
    //sum= sum + someInteger[i];
    sum += someInteger[i];
   }
   average = ((float)sum)/5;
   cout<<"max is : " <<maxvalue <<endl;
   cout <<"sum is: " <<sum<<endl;
   cout<<"average is: " << average << endl;
   cout <<"end program"<<endl;
   */
  //arrayExampl es();
  string name = "Anh";
  cout<<name<<endl; 
  char yourname[10];
  //yourname = "Anh"; //cannot cast string to array of characters
  //strcpy(yourname, "Henry");
  //cout<<yourname<<endl;
  string strA = "Tat";
  string strB = "Anh";
  cout << strA + strB <<endl;
  string strX = "hello";
  string stry = "hello";
  if (strX == stry)
  {
    cout<<strX+stry<<endl;
  }
  
  cout<<"haha";
} 

