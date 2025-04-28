#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

void addStudent(string students[], int scores[], int length);
void showStudent(string students[], int scores[], int length);

int main()
{
  char showMenu = 'y';
  int option;

  string students[10];
  int scores[10];
  int arrLength = sizeof(students) / sizeof(*students);

  int number;

  do
  {
    /* code */
    cout << "==== Student Manager ====" << endl;
    cout << "1. Input Student Data" << endl;
    cout << "2. Show All Students" << endl;
    cout << "3. Search By Name" << endl;
    cout << "4. Sort By Score" << endl;
    cout << "5. Exit" << endl;

    cout << "Choose Option: " << endl;
    cin >> option;

    switch (option)
    {
    case 1:
      /* code */
      cout << "Enter the number of the student you want to add: " << endl;
      cin >> number;

      addStudent(students, scores, number);
      break;

    case 2:
      cout << "All Students " << endl;
      showStudent(students, scores, arrLength);
      break;

    case 5:
      showMenu = 5;
      break;

    default:
      break;
    }

    cout << "want to show menu again? (y/n)" << endl;
    cin >> showMenu;
  } while (showMenu == 'y');

  return 0;
}

void addStudent(string students[], int scores[], int length)
{
  string studentName;
  int studentScore;

  for (int i = 0; i < length; i++)
  {
    /* code */
    cout << "student name: " << endl;
    cin >> studentName;
    students[i] = studentName;

    cout << "student score: " << endl;
    cin >> studentScore;
    scores[i] = studentScore;
  }

  cout << "students succesfully added!" << endl;
}

void showStudent(string students[], int scores[], int length)
{
  cout << "no" << setw(5) << "| " << "Name " << setw(7) << "| Score" << endl;
  for (int i = 0; i < length; i++)
  {
    /* code */
    cout << "no." << i + 1 << " | " << students[i] << " |" << scores[i] << endl;
  }
}