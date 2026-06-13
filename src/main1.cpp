
//section9
//shipping

/* shipping cost calculator 

ask the user for the package dimension in inches
length,width,height-theseshould be integers

all dimension must be 10  inches or less we cannot ship integers

Base cost $2.50
if package volume is greater than 100 cubic inches therre is a 10% surcharge
if package volume is greater than 500 cubic inches there is a  25% surcharge
 */
// solution

#include <iostream>
using namespace std;
int main (){
int length{},width{},height{};
    double base_cost{2.50};
    double package_cost{};
    const int  tier1_threshold{100};//volume
    const int  tier2_threshold{500};//volume
     int max_dimension_length{10};//inches
     double  tier1_surcharge{0.1};
     double tier2_surcharge{0.25};

     //All dimension must be 10 inches or less

     int package_volume{};
     cout<<"welcome to the shipping cost calculator"<<endl;
     cout<<"enter the length,width and height of the package separated by space"<<endl;
     cin>>length>>width>>height;
     if(length>max_dimension_length||width>max_dimension_length||height>max_dimension_length) {
       cout<<"sorry,package rejected-dimension exceed"<<endl; 
     }else
        
        double package_cost{};
        package_volume=length*width*height;
        package_cost=base_cost;

   if(package_volume>tier2_threshold){
    package_cost+=package_cost*tier2_surcharge;
    cout<<"adding tier2 surcharge"<<endl;

   } else if(package_volume>tier1_threshold){
    package_cost+=package_cost*tier1_surcharge;
    cout<< "adding tier1 surcharge"<<endl;
   }
   cout <<"the volume of the package is:"<<package_volume<<endl;
   cout<<"your package will cost $: "<<package_cost<<" to ship "<<endl;

}
