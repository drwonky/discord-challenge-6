#include <iostream>
using namespace std;int main(){const char*t[]={"### ","# # ","  # ","#   "};int k,j,r[]={264,376233,32777,629433,33288};char i[8];cin>>i;for(k=0;k<5;k++){for(j=0;j<8&&i[j]!=0;++j)cout<<t[(r[k]>>(i[j]-'0')*2)&3];cout<<'\n';}}
