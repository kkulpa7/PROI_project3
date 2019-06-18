#include <iostream>

#include "Subject.hpp"
#include "functions.hpp"

using namespace std;

void menu(){
    Subject<unsigned int> sub1;
    int choice;
    bool correct;

    while(1){
        correct = false;

        cout<<"\nMENU";
        cout<<"\n1.Set language\n2.Add student\n3.Set teacher\n4.Get language\n5.Get teacher\n6.Get students\n7.Increase IQ\n8.Get amount of students\n9.Exit\n";

        try{
            cin>>choice;
            if(!cin.good())
                throw invalid_argument("WRONG DATA! Not a number.");
        }
        catch(const invalid_argument& exc){
            cout<<exc.what()<<endl;
            int a;
            while (!correct){
                cin>>a;
                if (cin.good()){
                    correct = true;
                    choice = a;
                }
                else{
                    correct = false;
                    clearBuffer();
                    cout<<"Try again!\n";
                }
            }
        }

        switch(choice){
            case 1:{
                string language;
                cout<<"\ntype a language: ";
                cin>>language;
                sub1.setLanguage(language);
            }
                break;
            case 2:
                sub1.addStudent();
                break;
            case 3:
                sub1.setTeacher();
                break;
            case 4:
                sub1.getLanguage();
                break;
            case 5:
                sub1.getTeacher();
                break;
            case 6:
                sub1.getStudents();
                break;
            case 7:
                sub1.increase();
                break;
            case 8:
                cout<<sub1.getAmount();
                break;
            case 9:
                return;
            default:
                cout<<"unkown command";
                break;
        }
    }
}

void clearBuffer(){
    cin.clear();
    cin.ignore(1000, '\n');
}


