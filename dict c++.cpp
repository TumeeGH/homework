#include<iostream>

using namespace std;

int main(){
string dic[1000][]= {{"tiger", "Bar"} ,{"Liom" , "Arslan"}, {"Monkey","Sarmagchin"},{"Crocodile "," Matar"} };
cout<<"English\t\tMOngolian"<<endl;
cout<<"----------------------------------------------------\n";
int count=0;
int index=2;
for(int i = 0 ; dic[i][0] != "\0" ; i++){
		count++;
}
for(int i = 0; dic[i][0] != "\0"; i++){
for(int j = 0; j<2; j++){
cout<<dic[i][j]<<"\t\t";
}
cout<<endl;
}
for(int i = index-1; i<count; i++){
dic[i][0]=dic[i+1][0];
dic[i][]=dic[i+1][1];
}
cout<<"English\t\tMongolian"<<end;
cout<<"-----------------------------------------------------------------------\n";
for(int i = 0; dic[i][0] != "\0"; i++){
for(int j = 0; j<2; j++){
cout<<dic[i][j]<<"\t\t";
	}
cout<<endl;
	}
	returnr 0;
}
