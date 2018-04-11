// string::find_first_not_of
#include <iostream>       // std::cout
#include <string>         // std::string
#include <cstddef>        // std::size_t
using namespace std;
int main ()
{
  string str ("look for non-alphabetic characters...");
  string space = "lok ";
  string s = " ";

  //size_t found = str.find_first_not_of("abcdefghijklmnopqrstuvwxyz ", 0);
  size_t found = str.find_first_not_of(space, 3); // find_first_not_of 의 경우 안에 인수가 텍스트가 아닌 변수와 숫자의 경우 변수의 스트링을 제외하고 숫자의 번째의 텍스트를 첫번째로 인식해서 나타냄 
                                                  // 뒤의 인수가 번째를 나타내는데 만약 그 번쨰의 스트링이 제외일경우 제외되어 있는 스트링의 뒤에 있는 제외되지 않은 스트링을 나타낸다. 그리고 제외된
												  // 번쨰의 스트링을 전부 뒤에 있는 제외되어 있지 않은 스트링으로 전부 대체한다. 그 번째가 제외된 스트링이기 떄문에 제외되지 않은 스트링을 찾아낸다. 
												  // 뒤에 있는 스트링으로 결국 제외된 스트링의 번째는 전부 뒤에 있는 제외되지 않은 스트링으로 대체한다. 하지만 몇번쨰인지 읽히는 스트링은 제외된 스트링도
												  // 갯수에 포함한다. 
  if (found!=std::string::npos)
  {
    cout << "The first non-alphabetic character is " << str[found] << "\n";
    cout << " at position " << found << '\n';
  }

  return 0;
}

void f4(){
   string line ; 
   string space = " ";
   int begin, end;
   
   while(getline(cin,line)){
      begin = line.find_first_not_of(space,0);
      end = line.find_first_of(space, begin);
      while (string::npos != end || string::npos != begin){
         cout << line.substr(begin, end-begin) << endl;
         begin = line.find_first_not_of (space, end);
         end = line.find_first_of(space, begin);
      }
   }
}

/*
#include <iostream>
#include <string>
using namespace std;
int main()
{
string text = "Napster's pay-to-play service is officially out, "
"and we have a review of the now-legit Napster. "
"We also size up its companion music player from Samsung.";
cout<< text <<"\n";
cout << "Offset of 'official' = " << text.find( "official" )<< "\n";
}
*/

