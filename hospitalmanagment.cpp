#include<iostream>
#include<bits/stdc++.h>
#include<fstream>
#include<windows.h>
using namespace std;
class patient{
    private:
    string name,address,sex,emailid,contactno,date;
    int age;
    public:
    void setname(string name){
        this->name=name;
    }
    void setaddress(string address){
        this->address=address;
    }
    void setsex(string sex){
        this->sex=sex;
    }
    void setemailid(string emailid){
        this->emailid=emailid;
    }
    void setcontact(string contactno){
        this->contactno=contactno;
    }
    void setdate(string date){
        this->date=date;
    }
    void setage(int age ){
        this->age=age;
    }
    string getname(){
        return name;
    }
    string getaddress(){
        return address;
    }
    string getsex(){
        return sex;
    }
    string getemailid(){
        return emailid;
    }
    string getcontact(){
        return contactno;
    }
    string getdate(){
        return date;
    }
    int getage(){
        return age;
    }
};
void patientdetail(patient p){
    string pname,paddress,psex,pemailid,pcontactno,pdate;
    int page;
    cout<<"ENTER PATIENT NAME:-";
    cin>>pname;
    p.setname(pname);
    cout<<"ENTER PATIENT AGE:-";
    cin>>page;
    p.setage(page);
    cout<<"ENTER PATIENT SEX:-";
    cin>>psex;
    p.setsex(psex);
    cout<<"ENTER PATIENT EMAIL ID:-";
    cin>>pemailid;
    p.setemailid(pemailid);
    cout<<"ENTER PATIENT CONTACT NO.:-";
    cin>>pcontactno;
    p.setcontact(pcontactno);
    cout<<"ENTER PATIENT ADDRESS:-";
    cin>>paddress;
    p.setaddress(paddress);
    cout<<"ENTER DATE:-";
    cin>>pdate;
    p.setdate(pdate);
    cout<<"form submited sucessfully......."<<endl;
    Sleep(2000);
    ofstream file("patientsdetail.txt",ios::app);
    file<<p.getname()<<" , "<<p.getage()<<" , "<<p.getsex()<<" , "<<p.getcontact()<<" , "<<p.getemailid()<<" , "<<p.getaddress()<<" , "<<p.getdate()<<endl;
}
void patientdetail1(patient p1){
    string pname,paddress,psex,pemailid,pcontactno,pdate;
    int page;
    cout<<"ENTER PATIENT NAME:-";
    cin>>pname;
    p1.setname(pname);
    cout<<"ENTER PATIENT AGE:-";
    cin>>page;
    p1.setage(page);
    cout<<"ENTER PATIENT SEX:-";
    cin>>psex;
    p1.setsex(psex);
    cout<<"ENTER PATIENT EMAIL ID:-";
    cin>>pemailid;
    p1.setemailid(pemailid);
    cout<<"ENTER PATIENT CONTACT NO.:-";
    cin>>pcontactno;
    p1.setcontact(pcontactno);
    cout<<"ENTER PATIENT ADDRESS:-";
    cin>>paddress;
    p1.setaddress(paddress);
    cout<<"ENTER DATE:-";
    cin>>pdate;
    p1.setdate(pdate);
    cout<<"form submited sucessfully......."<<endl;
    Sleep(2000);
    ofstream file("discharge.txt",ios::app);
    file<<p1.getname()<<" , "<<p1.getage()<<" , "<<p1.getsex()<<" , "<<p1.getcontact()<<" , "<<p1.getemailid()<<" , "<<p1.getaddress()<<" , "<<p1.getdate()<<endl;
}
void docdetail(){
    cout<<"DR. Amit_gupta:- Medicine"<<endl;
    cout<<"DR. Aashish_kumar:- Orthopedics"<<endl;
    cout<<"DR. Bikul_sharma:- Ear,Nose and Throat(ENT)"<<endl;
    cout<<"DR. Ritu_kumari:- Gynecology"<<endl;
    cout<<"DR. Hema_verma:- Cardiology"<<endl;
    cout<<"DR. Ankit_malhotra:- Gastroenterology"<<endl;
    cout<<"DR. Sandeep_kumar:- Physiotherapy"<<endl;
    cout<<"DR. Kuldeep_singh:- Neurology"<<endl;
    cout<<"DR. Rishi_verma:- Hematology"<<endl;
    cout<<"DR. Umesh_singh:- General surgery"<<endl;
    cout<<"DR. Nikita_khera:- Urology"<<endl;
    cout<<"DR. Seema_batra:- Medicine"<<endl;
    return;
}
int main(){
    patient p;
    system("cls");
    int choice;
    cout<<"\t\t\t*********************************************************************"<<endl;
    cout<<"\t\t\t*                           WELCOME TO                              *"<<endl;
    cout<<"\t\t\t*                         YOGAY HOSPITAL                            *"<<endl;
    cout<<"\t\t\t*                                                                   *"<<endl;
    cout<<"\t\t\t*********************************************************************"<<endl;
    cout<<"\tPLEASE CHOICE THE OPTION BELOW"<<endl;
    cout<<"\t1.PATIENT ADDMIT FORM"<<endl;
    cout<<"\t2.DOCTORS AVAILABLE"<<endl;
    cout<<"\t3.SEDULE APPOINMENT"<<endl;
    cout<<"\t4.PATIENT DISCHARGE FORM AND PAYMENT"<<endl;
    cout<<"\t5.YOUR FEEDBACK/SUGGESTION"<<endl;
    cout<<"\t6.EXIT"<<endl;
    cout<<"\tENTER YOUR CHOICE:-";
    cin>>choice;
    while(true){
        if(choice==1){
            patientdetail(p);
            string s;
            cout<<"Do you want to continue yes/no: ";
            cin>>s;
            if(s=="yes"|| s=="YES"){
                int ans;
                cout<<"ENTER YOUR CHOICE:-";
                cin>>ans;
                choice=ans;
            }
            else break;
        }
        else if (choice==2){
            docdetail();
            string s;
            cout<<"Do you want to continue yes/no: ";
            cin>>s;
            if(s=="yes"|| s=="YES"){
                int ans;
                cout<<"ENTER YOUR CHOICE:-";
                cin>>ans;
                choice=ans;
            }
            else break;
        }
        else if(choice==3){
            cout<<"Enter doctor name whose appointment you want:-";
            string s1,s2;
            cin>>s1;
            cout<<"Enter date of appointment:-";
            cin>>s2;
            cout<<"appointment booked successfully......"<<endl;
            string s;
            cout<<"Do you want to continue yes/no: ";
            cin>>s;
            Sleep(2000);
            ofstream file("appointment.txt",ios::app);
            file<<s1<<"   "<<s2<<endl;
            if(s=="yes"|| s=="YES"){
                int ans;
                cout<<"ENTER YOUR CHOICE:-";
                cin>>ans;
                choice=ans;
            }
            else break;
        }
        else if(choice==4){
            patientdetail1(p);
            Sleep(2000);
            string s1,s2;
            cout<<"Enter the details for payment:-"<<endl;
            cout<<"Enter your name number:-";
            cin>>s1;
            cout<<"Enter your cardno. or pay cash:-";
            cin>>s2;
            ofstream file("payment.txt",ios::app);
            file<<s1<<"  Bill paid";
            cout<<"payment done successfully......"<<endl;
            Sleep(2000);
            string s;
            cout<<"Do you want to continue yes/no: ";
            cin>>s;
            if(s=="yes"|| s=="YES"){
                int ans;
                cout<<"ENTER YOUR CHOICE:-";
                cin>>ans;
                choice=ans;
            }
            else break;
        }
        else if(choice==5){
            string s1;
            cout<<"Enter your suggestion if any:-";
            cin>>s1;
            cout<<"Thanks for your suggestion...."<<endl;
            Sleep(2000);
            string s;
            cout<<"Do you want to continue yes/no: ";
            cin>>s;
            if(s=="yes"|| s=="YES"){
                int ans;
                cout<<"ENTER YOUR CHOICE:-";
                cin>>ans;
                choice=ans;
            }
            else break;
        }
        else if(choice==6){
            break;
        }
        else{
            cout<<"Invalid choice !"<<endl;
            string s;
            cout<<"Do you want to continue yes/no: ";
            cin>>s;
            if(s=="yes"|| s=="YES"){
                int ans;
                cout<<"ENTER YOUR CHOICE:-";
                cin>>ans;
                choice=ans;
            }
            else break;
        }
        
    }
}