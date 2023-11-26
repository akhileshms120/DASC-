#include<iostream>
#include<string> 

void  passByReference(std::string &s){  //function must be decalre before int main // &sign means it pass refernce or address of the variable
  s[0]='t';
  std::cout<<s;
}
int main(){
    // std::cout<<"Hello world"; 
    // std::string name="Raj";
    // //std::cin>>name;
    // passByReference(name);
    // return 0;
    std::string s="Raj";
    passByReference(s);
    std::cout<<s;
}

