#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;

struct studentData{
    string fst_name;
    string lst_name;
    string registration;
    string classes;
}studentData;

struct teacher{
    string f_name;
    string l_name;
    string qualification;
    string exp;
    string pay;
    string subj;
    string lec;
    string address;
    string cel_no;
    string blood_grp;
    string services;
}tech[50];

int main(){
    int i=0, j;
    char choice;
    string find, srch;

    while(1){
        system("cls");
        cout<<"SCHOOL MANAGEMENT SYSTEM \n";
        cout<<"MAIN SCREEN \n";

        cout<<"1.Students Information\n";
        cout<<"2.Teacher Information\n";
        cout<<"3.Exit Program\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case '1':{
                while(1){
                    system("cls");
                    cout<<"STUDENT INFORMATION AND BIO DATA SECTION\n";
                    cout<<"1.Create a new entry.\n";
                    cout<<"2.Find and display entry.\n";
                    cout<<"3.Jump to main.\n";
                    cout<<"Enter your choice: ";
                    cin>>choice;
                    switch(choice){
                        case '1':{
                            ofstream f1("student.txt", ios::app);
                            for(i=0; (choice!='n' && choice!='N'); i++){
                                if(choice=='y' || choice=='Y' || choice=='1'){
                                    cout<<"Enter First Name: ";
                                    cin>>studentData.fst_name;
                                    cout<<"Enter Last Name: ";
                                    cin>>studentData.lst_name;
                                    cout<<"Enter Registration Number: ";
                                    cin>>studentData.registration;
                                    cout<<"Enter Class: ";
                                    cin>>studentData.classes;
                                    f1<<studentData.registration<<endl
                                      <<studentData.fst_name<<endl
                                      <<studentData.lst_name<<endl
                                      <<studentData.classes<<endl;
                                    cout<<"Do you want to enter more entries..\n";
                                    cout<<"Press Y for Continue and N to Finish: ";
                                    cin>>choice;
                                }
                            }
                            f1.close();
                        }
                        continue;

                        case '2':{ 
                            ifstream f2("student.txt");
                            cout<<"Enter the Registration Number to display: ";
                            cin>>find;
                            cout<<endl;
                            int notFound= 0;
                            for(j=0; (j<i || !f2.eof()); j++){
                                getline(f2, studentData.registration);

                                if(studentData.registration==find){
                                    notFound= 1;
                                    cout<<"Registration Number: "<<studentData.registration<<endl;
                                    getline(f2, studentData.fst_name);
                                    cout<<"First Name: "<<studentData.fst_name<<endl;
                                    getline(f2, studentData.lst_name);
                                    cout<<"Last Name: "<<studentData.lst_name<<endl;
                                    getline(f2, studentData.classes);
                                    cout<<"Class: "<<studentData.classes<<endl;
                                }
                            }
                            if(notFound==0){
                                cout<<"No Record Found..."<<endl;
                            }
                            f2.close();
                            cout<<"Press any key twice to proceed..";
                            getch();
                            getch();
                        }
                        continue;
                        case '3':{
                            break;
                        }
                    }
                    break;
                }
                continue;
            }
            case '2':{
                while(1){
                    system("cls");
                    cout<<"TEACHERS INFORMATION AND BIODATA SECTION\n";
                    cout<<"1.Create new entery: \n";
                    cout<<"2.Find and display: \n";
                    cout<<"3.Jump to main: \n";
                    cout<<"Enter your choice: ";
                    cin>>choice;

                    switch(choice){
                        case '1':{
                            ofstream t1("teacher.txt", ios::app);

                            for(i=0; (choice != 'n' && choice != 'N'); i++){
                                if(choice=='y' || choice=='Y' || choice=='1'){
                                    cout<<"Enter First Name: ";
                                    cin>>tech[i].f_name; 
                                    cout<<"Enter Last Name: ";
                                    cin>>tech[i].l_name;
                                    cout<<"Enter Qualification: ";
                                    cin>>tech[i].qualification;
                                    cout<<"Enter Experience(Year): ";
                                    cin>>tech[i].exp;
                                    cout<<"Enter number of year in this school: ";
                                    cin>>tech[i].services;
                                    cout<<"Enter Subject whos teach: ";
                                    cin>>tech[i].subj;
                                    cout<<"Enter Lecture(per week): ";
                                    cin>>tech[i].lec;
                                    cout<<"Enter Pay: ";
                                    cin>>tech[i].pay;
                                    cout<<"Enter Phone Number: ";
                                    cin>>tech[i].cel_no;
                                    cout<<"enter address: ";
                                    cin>>tech[i].address;
                                    cout<<"Enter Blood Group: ";
                                    cin>>tech[i].blood_grp;

                                    t1<<tech[i].f_name<<endl
                                      <<tech[i].l_name<<endl
                                      <<tech[i].qualification<<endl
                                      <<tech[i].exp<<endl
                                      <<tech[i].services<<endl
                                      <<tech[i].subj<<endl
                                      <<tech[i].lec<<endl
                                      <<tech[i].pay<<endl
                                      <<tech[i].cel_no<<endl
                                      <<tech[i].address<<endl
                                      <<tech[i].blood_grp<<endl;
                                    cout<<"Do you want to enter more entries..\n";
                                    cout<<"Press Y for Continue and N to Finish: ";
                                    cin>>choice;
                                }
                            }
                            system("cls");
                            t1.close();
                        }
                        continue;
                        case '2':{
                            ifstream t2("teacher.txt");

                            cout<<"Enter the name to displayed: ";
                            cin>>find;
                            cout<<endl;

                            int notfound= 0;
                            for(j=0; (j<i || t2.eof()); j++){
                                getline(t2, tech[j].f_name);

                                if(tech[j].f_name==find){
                                    notfound= 1;
                                    cout<<"First Name; "<<tech[j].f_name<<endl;
                                    getline(t2, tech[j].l_name);
                                    cout<<"Last Name: "<<tech[j].l_name<<endl; 
                                    getline(t2, tech[j].qualification);
                                    cout<<"Qualification: "<<tech[j].qualification<<endl; 
                                    getline(t2, tech[j].exp);
                                    cout<<"Experience: "<<tech[j].exp<<endl; 
                                    getline(t2, tech[j].services);
                                    cout<<"Number of year(s) in school: "<<tech[j].services<<endl; 
                                    getline(t2, tech[j].subj);
                                    cout<<"Subject whos teach: "<<tech[j].subj<<endl; 
                                    getline(t2, tech[j].lec);
                                    cout<<"Lectures(per week): "<<tech[j].lec<<endl; 
                                    getline(t2, tech[j].pay);
                                    cout<<"Pay: "<<tech[j].pay<<endl; 
                                    getline(t2, tech[j].cel_no);
                                    cout<<"Phone Number: "<<tech[j].cel_no<<endl; 
                                    getline(t2, tech[j].address);
                                    cout<<"Address: "<<tech[j].address<<endl; 
                                    getline(t2, tech[j].blood_grp);
                                    cout<<"Blood Group: "<<tech[j].blood_grp<<endl; 
                                }
                            }
                            t2.close();
                            if(notfound==0){
                                cout<<"No Record Found..."<<endl;
                            }
                            cout<<"Press any key two times to proceed...";
                            getch();
                            getch();
                        }
                        continue;

                        case '3':{
                            break;
                        }
                    }
                    break;
                }
                continue;
            }
            case '3':{
                break;
            }
        }
        break; 
    }
    return 0;
}