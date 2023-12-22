#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){

cout << "Press Enter 3 times to reveal your future.";
cin.get();
cin.get();
cin.get();
srand(time(0));
int x = rand()%9+1;
string y;
if(x==1){
     y = "A";
}else if(x==2){
     y = "B+";
}else if(x==3){
     y = "B";
}else if(x==4){
     y = "C+";
}else if(x==5){
     y = "C";
}else if(x==6){
     y = "D+";
}else if(x==7){
     y = "D";
}else if(x==8){
     y = "F";
}else {
y= "W";
}

cout << "You will get "<<y<<" in this 261102.";

}
