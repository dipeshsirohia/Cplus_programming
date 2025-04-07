// Ek online store ke paas customers ke orders ka ek array hai.
//  Har order ek integer hota hai jo uska price represent karta hai. 
// Tumhe ek program likhna hai jo:
// Ek array input lega jo customers ke orders ka price store karega.
// Discount apply karega: Jisme har doosre order par 10% discount diya jayega.
// Total bill calculate karega sabhi orders ka sum nikal kar.
// Sabse mehenga aur sabse sasta order dhoondega.
// Final output print karega: Discounted orders, total bill, aur min/max price.

# include <bits/stdc++.h>
using namespace std;
void store(){
 cout<<"Enter the number of order";
 int orders;
 cin>>orders;
 vector <int> price(orders);

 for(int i=0;i<orders;i++){
    cout<<"Enter the price of order "<<i<<endl;
    
    cin>>price[i];
 }

//  for(auto it:price){
//     cout<<it<<" ";
// }

//  total bill without discount
 int tSum=0;
for(auto it:price){
    tSum+=it;
}
// minimum price and maximum price

int maxPrice=price[0];
int minPrice=price[0];

for(int i=0;i<price.size();i++){
    if(maxPrice<price[i]){
        maxPrice=price[i];
    }
    if(minPrice>price[i]){
        minPrice=price[i];
    }
}

//  Discount applying
float discount=0;
for(int i=0;i<price.size();i++){
    if(i%2!=0){
        discount=discount+price[i]*0.10;
        price[i]=price[i]*0.90;
    }
}

// total bill
int sum=0;
for(int i=0;i<price.size();i++){
  sum+=price[i];
}



// Printing Bill
cout<<"========================================================="<<endl;
cout<<"Thanks for shopping in Dipesh mega Mart"<<endl;;
cout<<"Your total bill without discount ==> "<<tSum<<endl;
cout<<"Total discount you get  and saved ==> "<<discount<<endl; 
cout<<"Now you bill is ==> "<<sum<<endl;
cout<<"your Minimum price ==> "<<minPrice<<" your Maximum price ==> "<<maxPrice<<endl;
}
int main()
{
store();
return 0;
}