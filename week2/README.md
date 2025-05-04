Week 2: Control Structures and Intro to DSA

Topics Covered
switch-case statement for menu selection

Advanced loop structures: while, do-while, and nested loops

Function enhancements: cleaner logic using modular functions

Introduction to basic Data Structures and Algorithms (DSA):

Linear Search: search a student by name

Bubble Sort: sort student scores in ascending order

Project: Student Score Management System
A console-based application to manage a list of students with the ability to input, display, search, and sort data.

Features
Input multiple students (name & score)

Display all student data

Search for a student by name using Linear Search

Sort students by score using Bubble Sort

Menu-driven interface using switch-case

Objective
To strengthen understanding of:

Flow control structures

Function decomposition

Implementing simple DSA into real scenarios

<!-- bubble sorting -->

#include <bits/stdc++.h>
using namespace std;

// An optimized version of Bubble Sort
void bubbleSort(vector<int>& arr) {
int n = arr.size();
bool swapped;

    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no two elements were swapped, then break
        if (!swapped)
            break;
    }

}

// Function to print a vector
void printVector(const vector<int>& arr) {
for (int num : arr)
cout << " " << num;
}

int main() {
vector<int> arr = { 64, 34, 25, 12, 22, 11, 90 };
bubbleSort(arr);
cout << "Sorted array: \n";
printVector(arr);
return 0;
}
