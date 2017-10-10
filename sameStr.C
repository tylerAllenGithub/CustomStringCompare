/*Tyler Allen
CS111
4/23/2015
This program will get 2 strings and return true if they are the same and false if different*/

#include <iostream>
using namespace std;

bool sameStrings(char s1[], char s2[])// char s1[], char s2[])
{
  int s1Len=0;
  int s2Len=0;
  char c;
  char c2;
  for(int i=0;s1[i]!='\0';i++)
    {
      s1Len++;
    }
  for(int i=0;s2[i]!='\0';i++)
    {
      s2Len++;
    }
  if(s1Len!=s2Len)
    return false;
  //2:
   for(int i=0;s1[i]!='\0';i++)
    {
      c=s1[i];
      if('A'<=c&&c<='Z')
	{
          c=s1[i];
	 c+=32;
	 s1[i]=c;
	}
    }
  for(int k=0;s2[k]!='\0';k++)
    {
      c2=s2[k];
      if('A'<=c2&&c2<='Z')
	{
	  c2+=32;
        s2[k]=c2;
	}
    }

//3:
  for(int i=0;s1[i]!='\0'&&s2[i]!='\0';i++)
    {
    if(s1[i]!=s2[i])
      return false;
    }//Compare each pair and return false when a mismatch is detected.
  return true;
}

int main()
{
  bool ans;
  ans = sameStrings("apple", "app");
  cout << ans; //0
  ans = sameStrings("apple", "APPLE");
  cout << ans; //1
  ans = sameStrings("tee","tea");
  cout << ans; //0
  ans = sameStrings("tee","ton");
  cout << ans; //0
  ans = sameStrings("tea","tea");
  cout << ans; //1
  ans = sameStrings("Tea","tEa");
  cout << ans; //1
  return 0;
}
