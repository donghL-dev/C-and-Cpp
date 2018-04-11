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
  size_t found = str.find_first_not_of(space, 3); // find_first_not_of �� ��� �ȿ� �μ��� �ؽ�Ʈ�� �ƴ� ������ ������ ��� ������ ��Ʈ���� �����ϰ� ������ ��°�� �ؽ�Ʈ�� ù��°�� �ν��ؼ� ��Ÿ�� 
                                                  // ���� �μ��� ��°�� ��Ÿ���µ� ���� �� ������ ��Ʈ���� �����ϰ�� ���ܵǾ� �ִ� ��Ʈ���� �ڿ� �ִ� ���ܵ��� ���� ��Ʈ���� ��Ÿ����. �׸��� ���ܵ�
												  // ������ ��Ʈ���� ���� �ڿ� �ִ� ���ܵǾ� ���� ���� ��Ʈ������ ���� ��ü�Ѵ�. �� ��°�� ���ܵ� ��Ʈ���̱� ������ ���ܵ��� ���� ��Ʈ���� ã�Ƴ���. 
												  // �ڿ� �ִ� ��Ʈ������ �ᱹ ���ܵ� ��Ʈ���� ��°�� ���� �ڿ� �ִ� ���ܵ��� ���� ��Ʈ������ ��ü�Ѵ�. ������ ��������� ������ ��Ʈ���� ���ܵ� ��Ʈ����
												  // ������ �����Ѵ�. 
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

