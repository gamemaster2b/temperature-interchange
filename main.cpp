#include <iostream>
double FtoC(double temp){
  return (temp-32)/1.8;
}
double CtoF(double temp){
  return (temp*1.8)+32;
}
int main(){
  std::cout<<"To change Degrees Celcius to Dregrees Fehreinheit enter 'c'.\n"<<"To change Degrees Fehreinheit to Dregrees Celcius enter 'f'.\n";
  char str;
  double temp;
  std::cout<<"What are you going to do:";
  std::cin>>str;
  if(str=='c'){
    std::cout<<"Enter tempreture:";
    std::cin>>temp;
    std::cout<<"The temperature is "<<FtoC(temp)<<"℃\n";
  }
  else if(str=='f'){
    std::cout<<"Enter tempreture:";
    std::cin>>temp;
    std::cout<<"The temperature is "<<CtoF(temp)<<"℉\n";
  }
  else{
    std::cout<<"You are full of ..., just try again.\n";
    main();
  }
  return 0;
}