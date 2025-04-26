#include <iostream>
#include <cstdio>

using namespace std;
void addStudent(string students[], int scores[], int length);

int main()
{
  char showMenu = 'y';
  int option;

  // array<string, 10> students;
  // array<int, 10> studentsScores;
  string students[10];
  int scores[10];

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
      addStudent(students, scores, 3);
      break;

    case 5:
      showMenu = 5;
      break;

    default:
      break;
    }
    cin >> showMenu;
  } while (showMenu == 'y');

  return 0;
}

void addStudent(string students[], int scores[], int length)
{
  int number;
  string studentName;
  int studentScore;

  cout << "Enter the number of the student you want to add: " << endl;
  cin >> number;

  for (int i = 0; i <= number; i++)
  {
    /* code */
    cout << "student name: " << endl;
    cin >> studentName;
    students[i] = studentName;

    cout << "student score: " << endl;
    cin >> studentScore;
    scores[i] = studentScore;
  }

  for (int i = 0; i < length; i++)
  {
    /* code */
    cout << i << students[i] << endl;
  }
}