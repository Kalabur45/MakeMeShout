//Kevin Buffardi and class
#include <iostream>
#include <string>

using namespace std;

int main()
{
  string said;  

  cout<<"What do you say?\n";
  getline(cin,said);
  for(int index = 0; index < said.length();index++)
  {        
          char converted = said[index];
          if(said[index] > '`' && said[index] < '{')
          {
                  converted = said[index] - ('a' - 'A');
          }
          said[index] = converted; 
   
          cout<<said[index]<<" "<<converted<<endl;
  }
  cout<<"As a shout, you said:\n"<<said<<endl;

  return 0;
}
