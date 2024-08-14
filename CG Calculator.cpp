#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int totalCourse;
    double totalCredit = 0;
    cout<< "How many courses are you taking this semester: ";
    cin>>totalCourse;

    cout<< "How many 1 credit courses: ";
    int cr1;
    cin>>cr1;
    cout<< "How many 2 credit courses: ";
    int cr2;
    cin>>cr2;
    cout<< "How many 3 credit courses: ";
    int cr3;
    cin>>cr3;

    string temp;
    if(cr1 != 0){
        cout<< "Provide 1 credit course grad"<<endl;
        for(int i=0; i<cr1; i++){
            cout<<i+1<< "No. :";
            cin>>temp;
            transform(temp.begin(), temp.end(), temp.begin(), ::toupper);

            if(temp == "A+"){
                totalCredit+=4;
            }
            else if(temp == "A"){
                totalCredit+=3.75;
            }
            else if(temp == "B+"){
                totalCredit+=3.50;
            }
            else if(temp == "B"){
                totalCredit+=3.25;
            }
            else if(temp == "C+"){
                totalCredit+=3.00;
            }
            else if(temp == "C"){
                totalCredit+=2.75;
            }

        }
    }
    if(cr2 != 0){
        cout<< "Provide 2 credit course Grad"<<endl;
        for(int i=0; i<cr2; i++){
            cout<<i+1<< "No. :";
            cin>>temp;
            transform(temp.begin(), temp.end(), temp.begin(), ::toupper);

            if(temp == "A+"){
                totalCredit+=4*2;
            }
            else if(temp == "A"){
                totalCredit+=3.75*2;
            }
            else if(temp == "B+"){
                totalCredit+=3.50*2;
            }
            else if(temp == "B"){
                totalCredit+=3.25*2;
            }
            else if(temp == "C+"){
                totalCredit+=3.00*2;
            }
            else if(temp == "C"){
                totalCredit+=2.75*2;
            }
        }
    }
    if(cr3 != 0){
        cout<< "Provide 3 credit course Grad"<<endl;
        for(int i=0; i<cr3; i++){
            cout<<i+1<< "No. :";
            cin>>temp;
            transform(temp.begin(), temp.end(), temp.begin(), ::toupper);

            if(temp == "A+"){
                totalCredit+=4*3;
            }
            else if(temp == "A"){
                totalCredit+=3.75*3;
            }
            else if(temp == "B+"){
                totalCredit+=3.50*3;
            }
            else if(temp == "B"){
                totalCredit+=3.25*3;
            }
            else if(temp == "C+"){
                totalCredit+=3.00*3;
            }
            else if(temp == "C"){
                totalCredit+=2.75*3;
            }
        }
    }

    cout<<endl;
    double currentCG = totalCredit/((cr1*1)+(cr2*2)+(cr3*3));
    cout<<"Your Current Semester CGPA :"<<currentCG;
    cout<<endl;
    cout<<endl;

    const double overall = 228.25;
    const int overallCr = 58;

    double OverAllCG = (totalCredit+overall)/(((cr1*1)+(cr2*2)+(cr3*3))+overallCr);
    cout<<"Your Over All Current CGPA :"<<OverAllCG;
    cout<<endl;

}
