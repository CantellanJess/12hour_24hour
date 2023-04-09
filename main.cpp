
#include<iostream>
using namespace std;

int main(){

int hour, minutes;
bool status = true;

cout << "Please enter the hour: ";
cin >> hour;
cout << "Please enter the minutes: ";
cin >> minutes;

try{
if ((hour >= 24 || hour < 0)){
throw hour;
}
}
catch(int hour){
cout<<"\nCaught error as expected!";
status=false;
}

try{
if((minutes >= 59 || minutes < 0)){
throw minutes;
}
}
catch(int minutes){
cout<<"\nCaught error as expected!";
status=false;
}

if(hour < 12){
hour+=12;
}
cout<<"\nIn 24 hour time:\n";
cout << hour << ":" << minutes << endl;

if(hour > 12){
hour-=12;
}
cout<<"\nIn 12 hours time\n";
cout << hour << ":" << minutes << endl;

return 0;
}