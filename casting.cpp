// how to run this simple test code: $ g++ casting.cpp -o test
#include <iostream> 
#include <iomanip> // for std::setprecision() 

//부동 소수점 숫자는 특정 유효 자릿수까지만 저장하고 나머지는 손실된다. 
//부동 소수점의 정밀도(precision)는 정보 손실 없이 나타낼 수 있는 유의한 자릿수를 정의한다.

int main() { 
// std::cout의 기본 정밀도는 6이다
// 즉 모든 부동 소수점 숫자는 6자리까지만 유의하다고 가정하여 이후는 잘라낸다
std::cout << std::setprecision(11); // show number of digits 

//부동 소수점 자료형의 변수가 가지는 정밀도는 
//자릿수 크기(float은 double보다 작다)와 저장되는 특정 값에 따라 달라진다. 
//float 값의 정밀도는 6 ~ 9 자리다. 
//double 값의 정밀도는 15 ~ 18 자리


//float f = 3.33333333333333333333333333333333333333f;
float f = 1.234567891f;  
std::cout <<"print float as float: " << f << std::endl;
std::cout <<"print float as double: " << (double)f << std::endl; 
//double d = 3.3333333333333333333333333333333333333; 
double d = 1.234567891;
std::cout <<"print double as double: "<< d << std::endl;
std::cout <<"print double as float: " << (float)d << std::endl; 
return 0; 
} 

//따라서 변수가 보유 할 수가 있는 것보다 더 정밀도가 필요한 부동 소수점 숫자를 사용할 때는 주의해야 한다

