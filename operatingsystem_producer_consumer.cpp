#include <iostream>
using namespace std;
int buff_size = 3; // buffer size
int buff[3];// used to declare an array that represents buffer
int in = 0; // used to represent next empty buffer
int out = 0;// used to represent first item index
void producer(){
    int v; // value to be inserted in the buffer
    if(((in+1)%buff_size == 0)){
        cout<<"\t\tOverflow !\n";
    }
    else{
        cout<<"Produce an integer item: ";
        cin>>v;// taking the value
        buff[in]=v;
        in++;
}
}
void consumer(){
    if(out == in){
       cout<<"\t\tUnderflow !\n";
    }
    else{
       buff[out]=0;
       out++;
    }
}
void display(){
int i;
cout<<"The buffer status is:\n";
for(i=0;i<buff_size;i++){
    cout<<"["<<buff[i]<<"]";//prints the int at i
}
cout<<"\n";
cout<<"in = "<<in<<endl;
cout<<"out = "<<out<<endl<<endl;
}
int main() {
int ask = 0;
int k=1;
while(k>0){
   cout<<"\t\t1.Producer\n\t\t2.Consumer\n\t\t3.Exit\n";
   display();
   cout<<"Enter your choice:";
   cin>>ask;
if(ask==1){
   producer();
}
else if(ask==2){
   consumer();
}
else if(ask==3){
   break;
}
else{
   printf("\n:( Invalid Input :! Execute again\n");
   break;
}
}
return 0;
}