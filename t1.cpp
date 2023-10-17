#include <iostream>
using namespace std;
void decideActivity(string temp , string humidity);
main(){
    string temperature,humidity;
    cout<<"Enter temperature (warm or cold): ";
    cin>>temperature;
    cout<<"Enter humidity (dry or humid): ";
    cin>>humidity;
    decideActivity(temperature,humidity);

}
void decideActivity(string temp , string humidity){
    if (temp == "warm" && humidity == "dry"){
        cout<<"Recommended activity: Play tennis";
    }
    if (temp == "warm" && humidity == "humid"){
        cout<<"Recommended activity: Swim";
    }
    if (temp == "cold" && humidity == "dry"){
        cout<<"Recommended activity: Play basketball";
    }
    if (temp == "cold" && humidity == "humid"){
        cout<<"Recommended activity: Watch TV";
    }
}