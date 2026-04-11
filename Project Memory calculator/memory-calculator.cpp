#include<iostream>
#include<vector>

using namespace std;


template<typename T>

class MemoryCalculate

{

    public:

        T id;

        string name;


        MemoryCalculate(T i , string n)

        {

            id = i;

            name = n;

        }


        void display()

        {

            cout << "ID: " << id << " , Name: " << name << endl;

        }

};



int main()

{


    vector<MemoryCalculate<int>> students;

    int choice;


    do

    {


        cout << "\n--- Student Management System ---" << endl;

        cout << "1. Add Student" << endl;


        cout << "2. Display All Students" << endl;



        cout << "3. Remove Student by ID" << endl;

        cout << "4. Search Student by ID" << endl;



        cout << "5. Exit" << endl;



        cout << "Enter your choice: ";
        cin >> choice;



        switch (choice)

        {

            case 1:

            {

                int id;

                string name;


                cout << "Enter Student ID: ";
                cin >> id;

                cout << "Enter Student Name: ";
                cin >> name;


                students.push_back(MemoryCalculate<int>(id , name));


                cout << "Student added successfully!" << endl;

                break;



            }


            case 2:

            {

                if (students.empty())

                {


                    cout << "No students found!" << endl;

                }

                else

                {

                    cout << "\n--- All Students ---" << endl;

                    for (int i = 0; i < students.size(); i++)

                    {

                        students[i].display();

                    }

                }

                break;

            }


            case 3:

            {

                int id;

                cout << "Enter Student ID to remove: ";

                cin >> id;


                bool found = false;


                for (int i = 0; i < students.size(); i++)

                {

                    if (students[i].id == id)

                    {

                        students.erase(students.begin() + i);


                        cout << "Student removed successfully!" << endl;

                        found = true;

                        break;

                    }

                }


                if (!found)

                {

                    cout << "Student with ID " << id << " not found!" << endl;

                }

                break;

            }


            case 4:

            {

                int id;

                cout << "Enter Student ID to search: ";
                cin >> id;


                bool found = false;


                for (int i = 0; i < students.size(); i++)

                {

                    if (students[i].id == id)

                    {



                        cout << "\n--- Student Found ---" << endl;

                        students[i].display();

                        found = true;

                        break;

                    }


                }


                if (!found)

                

                {

                    cout << "Student with ID " << id << " not found!" << endl;

                }

                break;

            }


            case 5:

            {

                cout << "Exiting..." << endl;

                break;

            }


            default:

            {

                cout << "Invalid choice! Try again." << endl;

            }

        }


    } while (choice != 5);




    return 0;



}
