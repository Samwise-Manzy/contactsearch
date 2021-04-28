//
//  main.cpp
//  Contact list search
//
//  Created by Samuel Manzanares on 4/19/21.
//



#include <iostream>
#include <string>
using namespace std;

void sortArr(string[], string[], string[], int);
string GetPhoneNumber(string[], string[], int, string);

int main() {
    string searchContact;
    string contactFound;
    int numContacts;
    
    cin >> numContacts;

    string tempArr[numContacts * 2];
    string contactName[numContacts];
    string contactNumb[numContacts];

    for (int i=0; i<(numContacts * 2); i++) {
        cin >> tempArr[i];
    }
    
    cin >> searchContact;
    

    sortArr(tempArr, contactName, contactNumb, numContacts);
    contactFound = GetPhoneNumber(contactName, contactNumb, numContacts, searchContact);
    
    cout << contactFound << endl;
    
    return 0;
}

void sortArr(string tempArr[], string arrNames[], string arrNumbers[], int numPairs) {
    for (int i=0, j=0; j<(numPairs * 2); i++, j+=2) {
        arrNames[i] = tempArr[j];
        arrNumbers[i] = tempArr[j+1];
    }
}

string GetPhoneNumber(string nameArr[], string phoneNumberArr[], int size, string contactName) {
    string contactNum;
    
    for(int i=0; i<size; i++) {
        if(nameArr[i] == contactName) {
            contactNum = phoneNumberArr[i];
            break;
        } else {
            contactNum = "Name not found in contact list";
        }
    }

    return contactNum;
}
