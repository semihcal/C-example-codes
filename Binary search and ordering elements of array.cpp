//Semih CAL
//Assignmnet2, Ex2.
#include <iostream>
#include <stdlib.h>
#include <math.h> 
using namespace std;


int compareFloatAscending (const void* a, const void* b);
int compareFloatDescending (const void* a, const void* b);
int binarySearch (const float a[], int len, float val);

int main()
{
	int findIndex;
	const int SIZE = 10;
float num[SIZE] = {0.0, 1.1, 2.2, -3.3, 4.4, 5.5, -6.6, 7.7, 8.8, 10.11};

qsort (num, SIZE, sizeof(float),  compareFloatDescending);

cout << "Descending Sort"<<endl;
   	for (int i=0; i<SIZE; i++)

  {

     cout << num[i] << endl;

  }
	  qsort (num, SIZE, sizeof(float),  compareFloatAscending);
	  
	  cout << "Ascending Sort"<<endl;
	for (int i=0; i<SIZE; i++)

  {

     cout << num[i] << endl;
     
  }
       cout << endl;
       
       
 
   
  
  float number;
  cout<< "Please enter a number"<< endl;
  cin>>number ;
  
  
  findIndex = binarySearch(num, SIZE, number);

 

  if (findIndex >= 0)

    cout << "Find a match at this index:  " << findIndex 
    << " \nFound match value is:  " << num[findIndex] << endl;

  else

    cout << "No match was found." << endl;
    
  
}

int compareFloatAscending (const void* a, const void* b)

{

   float fa = *(float*)a;  // cast a,b from void* pointer to float* pointer

   float fb = *(float*)b;  // and then deference them.

   if (fa < fb)

       return -1;

   else if (fa > fb)

       return 1;

   else

       return 0;

}
int compareFloatDescending (const void* a, const void* b)

{

   float fa = *(float*)a;  // cast a,b from void* pointer to float* pointer

   float fb = *(float*)b;  // and then deference them.

   if (fa > fb)

       return -1;

   else if (fa < fb)

       return 1;

   else

       return 0;

}
int binarySearch (const float a[], int len, float val)

{

   int head = 0;

   int tail = len - 1;

  int mid  = 0;



   while (head <= tail)

   {

      mid = (int) ((head + tail)/2);

      if (a[mid] == val)

          return mid;

      else if (a[mid] < val)

          head = mid + 1;

      else

          tail = mid - 1;

   }

 

   return -1;

}
