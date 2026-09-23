#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
int main()
{
   //         unordered_map<string, string>table;
   //     // insertion
   //     // 1st method
   //     // table["us"]="United State";
   //     // table["br"]="Brazil";
   //     // table["ar"]="Argentina";
   //     //   cout<< table.at("us")<<endl;

   //     // 2nd method
   //       table.insert(make_pair("en","England"));
   //       table.insert(make_pair("af","Afganistan"));
   //     // cout<<table.at("af")<<endl;

   //     // 3rd Method

   //     // pair<string,string>p;
   //     // p.first="ge";
   //     // p.second="Germany";
   //     // table.insert(p);
   //  //cout<<table.at("ge")<<endl;

   //  unordered_map<string,string>::iterator it=table.begin();
   //  while(it!=table.end()){
   //        cout<<it->first<<"-<"<<it->second <<endl;
   //     it++;
   //  }

   map<int, string> table;
   table.insert(make_pair(4, "Manish"));
   table.insert(make_pair(2, "Alex"));
   table.insert(make_pair(3, "Dustin"));

   map<int, string>::iterator it = table.begin();
   while (it != table.end())
   {
      cout << it->first << "-<" << it->second << endl;
      it++;
   }

   return 0;
}