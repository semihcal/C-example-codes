//Semih CAL


#include <iostream>
#include <cstring>
using namespace std;

void removeChar(char *s, char c){ 
  char *pr = s, *pw = s;
   while(*pr){
  
     if (*pr != c){
	 
      *pw++ = *pr;
              
    }
   *pr++; 
 }
   *pw = '\0';  
}


int main()

{
    char letter;
    const int MAX = 50;
    char a[MAX];


    cout << "Please enter a string: " << endl;

    cin.getline(a, MAX, '\n');

    // cin.getline(a, MAX);

    cout <<"original string is  \n"<< a << endl;
    
    cout<<"Please enter character that you want to remove from your string: " <<endl;
    
    cin>>letter;
    
    removeChar(a,letter);
     
    
  cout<<"New string after the character that you wanted to remove is \n " << a << endl;

    return 0;

}
