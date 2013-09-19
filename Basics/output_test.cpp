#include <iostream>
using namespace std;

int main (void) {
 string str1 = "To be or not to be, that is the question";
 string str2 = "only ";

 cout<<"Orginal strings"<<endl;
 cout<<"String 1 : "<<str1<<"\tString 2 : "<<str2<<endl;
 string str3 = str1.substr(6, 12);
 cout<<"String 3 : "<<str3<<endl<<endl;

 str1.insert(32, str2);
 cout<<"New String"<<endl;
 cout<<"String 1 after insertion : " <<str1<<endl;

 str1.replace(str1.find("to be", 0), 5, "to jump");
 cout<<"String after replace and find : "<<str1<<endl;

 str1.erase(9, 4);
 cout<<"After erase : "<<str1<<end;
 cout << endl<<"Final String"<<endl<<str1 << endl;
 for (int i = 0; i < str3.length(); i++)
 cout << str3[i]; cout << endl;
}
