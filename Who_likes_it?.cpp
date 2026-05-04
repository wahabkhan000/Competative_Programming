#include <string>
#include <vector>
using namespace std;

std::string likes(const std::vector<std::string> &names)
{
  string s;
  int n=names.size();
  if(n==0){
    return "no one likes this";
  }
  else if(n==1){
    s=names[0]+" likes this";
    return s;
  }
  else if(n==2){
    s=names[0]+" and "+names[1]+" like this";
    return s;
  }
  else if(n==3){
    s=names[0]+", "+names[1]+" and "+names[2]+" like this";
    return s;
  }
  else{
    int a=n-2;
    s=names[0]+", "+names[1]+" and "+to_string(a)+" others like this";
    return s;
  }
}
