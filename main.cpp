95 _ Introduction to Exception Handling _ try, catch and throw

/*Exception handling*/

/*
#include<iostream>
using namespace std;

int main()
{
    int a=10,b=0,c;

    c=a/b;  //exception occurs
    cout<<c<<endl;

    return 0;
}

*/

/*to handle d exception use try,throw,catch*/
#include<iostream>
using namespace std;

int main()
{
    int a=10,b=0,c;

    try{  //place the code block,which may give exception

        if(b==0)
            throw("Divide by zero error"); //if exception occurs throw exception
        c=a/b;  //else execute this statement
        cout<<c<<endl;
    }
    catch(const char *e){ //handle d exception case
        cout<<"Exception occured: "<<e<<endl;
    }

    return 0;
}



/* if exception occurs, 
throw block throws exception to catch block, 
codes next to throw block will not be executed,. 
i.e., control will be passed to catch block*/
#include <iostream>
using namespace std;
//DEMO OF DIVIDE BY ZERO
int main(){
    int a=1,b=0,c;
    try{
        if(b==0){
            throw("divide by zero");
        }
        c=a/b;
        cout<<"value of c = "<<c<<endl;
    }catch(const char* e){
        cout<<"exception occured: "<<e<<endl;
    }
    return 0;
}
