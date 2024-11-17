//Ryan Bao
//11/12/24
//HW 4

#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

void filterEvens(double array[], int array_size);
void dna_to_rna(string dna_sequence);

int main () {
    //Part 1
    const int ARRAY_SIZE = 8;
    string dna;
    
    double myArray[ARRAY_SIZE];         //Loop array for inputs
    for (int i = 0; i <= 7; i++) {
        cout << "Enter a number: ";
        cin >> myArray[i];
    } 
    cout << "The even numbers within the array are: " << endl;
    filterEvens(myArray, ARRAY_SIZE);

    //Part 2
    int sum;
    int greatest, salesman = 0;
    int cars[10] = {7, 3, 6, 0, 14, 8, 1, 2, 9, 8};
    for (int i = 0; i <= 9; i++) {        
        sum += cars[i];                 //As loop happens, add up all values
        if (greatest <= cars[i]) {      //Check for greatest salesman and number of cars sold
            greatest = cars[i];
            salesman = i + 1;
        }
    }
    cout << "The dealership sold " << sum << " cars in total." << endl;
    cout << "Salesman " << salesman << " sold the most cars at " << greatest << " cars sold." << endl;
    cout << "Please enter the dna_sequence with a period at the end: " << endl;
    cin.ignore();
    getline(cin, dna);        //If spaces are present the code will still capture it
    dna_to_rna(dna);
}

void filterEvens(double array[], int array_size) {
    for (int i = 0; i < array_size; i++) {
        if (static_cast<int>(array[i]) % 2 == 0) {     //If modulus 0, which means the number is even print it
            cout << array[i] << " " << endl;
        }
    }
}

void dna_to_rna(string dna_sequence) {
    int i = 0;
    while (dna_sequence[i] != '.') {          //Loop and while char isn't . 
        if (dna_sequence[i] == 'A') {         //print based on situation
            cout << "U";
        }
        else if (dna_sequence[i] == 'C') {
            cout << "G";
        }
        else if (dna_sequence[i] == 'G') {
            cout << "C";
        }
        else if (dna_sequence[i] == 'T') {
            cout << "A";
        }
        i += 1;
    }
}

/*
Enter a number: 1
Enter a number: 2
Enter a number: 3
Enter a number: 4
Enter a number: 5
Enter a number: 6
Enter a number: 7
Enter a number: 8
The even numbers within the array are: 
2 
4 
6 
8 
The dealership sold 58 cars in total.
Salesman 5 sold the most cars at 14 cars sold.
Please enter the dna_sequence with a period at the end: 
ACG ACGT
UGCUGCA
*/