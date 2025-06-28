#include<iostream>
#include<fstream>
#include<string>

using namespace std;

class flex
{
private:
    int totalstudents;
    int qt, at, q1t, q2t, q3t, q4t, a1t, a2t, a3t, a4t;
    string* name;
    string* id;
    int* q1, * q2, * q3, * q4;
    int* a1, * a2, * a3, * a4;
    int  aq1, aq2, aq3, aq4, aa1, aa2, aa3, aa4;
    int mq1, mq2, mq3, mq4, ma1, ma2, ma3, ma4;
    int Mq1, Mq2, Mq3, Mq4, Ma1, Ma2, Ma3, Ma4;
    int* total;
public:
    flex()
    {
        totalstudents = 0;
        total = nullptr;
        name = nullptr;
        id = nullptr;
        q1 = nullptr;
        q2 = nullptr;
        q3 = nullptr;
        q4 = nullptr;
        a1 = nullptr;
        a2 = nullptr;
        a3 = nullptr;
        a4 = nullptr;
        aa1 = 0, aa2 = 0, aa3 = 0, aa4 = 0, aq1 = 0, aq2 = 0, aq3 = 0, aq4 = 0;
        Mq1 = 0, Mq2 = 0, Mq3 = 0, Mq4 = 0, Ma1 = 0, Ma2 = 0, Ma3 = 0, Ma4 = 0;
        mq1 = 0;
        mq2 = 0;
        mq3 = 0;
        mq4 = 0;
        ma1 = 0;
        ma2 = 0;
        ma3 = 0;
        ma4 = 0;

        qt = 0;
        at = 0;
        q1t = 0;
        q2t = 0;
        q3t = 0;
        q4t = 0;
        a1t = 0;
        a2t = 0;
        a3t = 0;
        a4t = 0;

        // Initialize other variables
        // For example:
        aq1 = 0;
        aq2 = 0;
        // ...
    }


    ~flex()
    {

        delete[] name;
        delete[] id;
        delete[] q1;
        delete[] q2;
        delete[] q3;
        delete[] q4;
        delete[] a1;
        delete[] a2;
        delete[] a3;
        delete[] a4;
    }

    void getdatafromfile(fstream& file)
    {
        file >> totalstudents >> qt >> at >> q1t >> q2t >> q3t >> q4t >> a1t >> a2t >> a3t >> a4t;
        name = new string[totalstudents];
        id = new string[totalstudents];
        q1 = new int[totalstudents];
        q2 = new int[totalstudents];
        q3 = new int[totalstudents];
        q4 = new int[totalstudents];
        a1 = new int[totalstudents];
        a2 = new int[totalstudents];
        a3 = new int[totalstudents];
        a4 = new int[totalstudents];
        total = new int[totalstudents];
        file.ignore(); // ignore newline character
        for (int i = 0; i < totalstudents; i++)
        {
            getline(file, name[i]);
            file >> name[i] >> id[i] >> q1[i] >> q2[i] >> q3[i] >> q4[i] >> a1[i] >> a2[i] >> a3[i]
                >> a4[i];
            total[i]= q1[i]+ q2[i]+q3[i] + q4[i] +a1[i] + a2[i] +a3[i]+ a4[i];
        }

    }
    void displayAll()
    {
        cout << "--------------------------------------------------------------------------" << endl;

        cout << "\t" << "Q1" << " " << "Q2" << " " << "Q3" << " " << "Q4" << " " << "A1" <<
            " " << "A2" << " " << "A3" << " " << "A4" << " "<<"TOTAL " << endl;

        cout << "Total=" << "  " << q1t << " " << q2t << " " << q3t << " " << q4t << " " << a1t << " " << a2t
            << " " << a3t << " " << a4t;
        cout << endl << "Maximum:";
        cout << mq1 << " " << mq2 << " " << mq3 << " " << mq4 << " " << ma1 << " " << ma2 << " " << ma3
            << " " << ma4;
        cout << endl << "Minimum:";
        cout << Mq1 << "  " << Mq2 << "  " << Mq3 << "   " << Mq4 << "  " << Ma1 << "  " << Ma2 << "  "
            << Ma3 << "  " << Ma4;

        cout << endl << "Average:";
        cout << "" << aq1 << "  " << aq2 << "  " << aq3 << "   " << aq4 << " " << aa1 << " " << aa2
            << " " << aa3 << " " << aa4;

        cout << endl << "---------------------------------------------------------------------" << endl;

    }
    void updatestatistics()
    {
        //finding average of all quizs  and assignments;
        aa1 = 0, aa2 = 0, aa3 = 0, aa4 = 0, aq1 = 0, aq2 = 0, aq3 = 0, aq4 = 0;
        for (int i = 0; i < totalstudents; i++)
        {
            aq1 = aq1 + q1[i];
            aq2 = aq2 + q2[i];
            aq3 = aq3 + q3[i];
            aq4 = aq4 + q4[i];
            aa1 = aa1 + a1[i];
            aa2 = aa2 + a2[i];
            aa3 = aa3 + a3[i];
            aa4 = aa4 + a4[i];
        }
        aq1 = aq1 / totalstudents;
        aq2 = aq2 / totalstudents;
        aq3 = aq3 / totalstudents;
        aq4 = aq4 / totalstudents;
        aa1 = aa1 / totalstudents;
        aa2 = aa2 / totalstudents;
        aa3 = aa3 / totalstudents;
        aa4 = aa4 / totalstudents;
        //finding maximum
        mq1 = q1[0];
        mq2 = q2[0];
        mq3 = q3[0];
        mq4 = q4[0];
        ma1 = a1[0];
        ma2 = a2[0];
        ma3 = a3[0];
        ma4 = a4[0];

        for (int i = 1; i < totalstudents; i++)
        {
            if (q1[i] > mq1)
            {
                mq1 = q1[i];
            }
            if (q2[i] > mq2)
            {
                mq2 = q2[i];
            }
            if (q3[i] > mq3)
            {
                mq3 = q3[i];
            }
            if (q4[i] > mq4)
            {
                mq4 = q4[i];
            }
            if (a1[i] > ma1)
            {
                ma1 = a1[i];

            }
            if (a2[i] > ma2)
            {
                ma2 = a2[i];

            }
            if (a3[i] > ma3)
            {
                ma3 = a3[i];

            }
            if (a4[i] > ma4)
            {
                ma4 = a4[i];

            }
        }
        //finding minimum
        Mq1 = 0, Mq2 = 0, Mq3 = 0, Mq4 = 0, Ma1 = 0, Ma2 = 0, Ma3 = 0, Ma4 = 0;
        Mq1 = q1[0];
        Mq2 = q2[0];
        Mq3 = q3[0];
        Mq4 = q4[0];
        Ma1 = a1[0];
        Ma2 = a2[0];
        Ma3 = a3[0];
        Ma4 = a4[0];

        for (int i = 1; i < totalstudents; i++)
        {
            if (q1[i] < Mq1)
            {
                Mq1 = q1[i];
            }
            if (q2[i] < Mq2)
            {
                Mq2 = q2[i];
            }
            if (q3[i] < Mq3)
            {
                Mq3 = q3[i];
            }
            if (q4[i] < Mq4)
            {
                Mq4 = q4[i];
            }
            if (a1[i] < Ma1)
            {
                Ma1 = a1[i];

            }
            if (a2[i] < Ma2)
            {
                Ma2 = a2[i];

            }
            if (a3[i] < Ma3)
            {
                Ma3 = a3[i];

            }
            if (a4[i] < Ma4)
            {
                Ma4 = a4[i];

            }
        }

    }
    void searchstudentsbykeyword(const int& keyword)
    {
        for (int i = 0; i < totalstudents; i++)
        {
            if (id[i].find(to_string(keyword)) != string::npos || name[i].find(to_string(keyword)) != string::npos)
            {
                cout << id[i] << " " << name[i] << " " << q1[i] << " " << q2[i] << " " << q3[i] 
                    << " " << q4[i] << " " << a1[i] << " " << a2[i] << " " << a3[i]
                    << " " << a4[i] <<" "<<total[i] << endl;
            }
        }
    }
    void sortlistbytotal()
    {
        string  tempname,tempid;
        int tempq1, tempq2, tempq3, tempq4, tempa1, tempa2, tempa3, tempa4, totaltemp;
       
        for (int i = 0; i < totalstudents; i++)
        {
            for (int j = i+1; j < totalstudents; j++)
            {
                if (total[j] >total[i])
                {
                    totaltemp=total[i];
                    total[i] = total[j];
                    total[j] = totaltemp;
                    tempname = name[i];
                    name[i] = name[j];
                    name[j] = tempname;
                    tempid = id[i];
                    id[i] = id[j];
                    id[j] = tempid;
                    tempq1 = q1[i];
                    q1[i] = q1[j];
                    q1[j] = tempq1;
                    tempq2 = q2[i];
                    q2[i] = q2[j];
                    q2[j] = tempq2;
                    tempq3 = q3[i];
                    q3[i] = q3[j];
                    q3[j] = tempq3;
                    tempq4 = q4[i];
                    q4[i] = q4[j];
                    q4[j] = tempq4;
                    
                    tempa1= a1[i];
                    a1[i] = a1[j];
                    a1[j] = tempa1;
                    tempa2 = a2[i];
                    a2[i] = a2[j];
                    a2[j] = tempa2;
                    tempa3 = a3[i];
                    a3[i] = a3[j];
                    a3[j] = tempa3;
                    tempa4 = a4[i];
                    a4[i] = a4[j];
                    a4[j] = tempa4;
                    

                }

            }
          
        }
    
    }
    void printAll()
    {
        cout << endl << "sorted list according to total numbers from high to low" << endl;
        cout << "--------------------------------------------------------------------------" << endl;

        cout << "name" << "\t roll no  \t " << "Q1" << " " << "Q2" << " " << "Q3" << " " << "Q4" << " " << "A1" <<
            " " << "A2" << " " << "A3" << " " << "A4" << " " << "TOTAL " << endl;
        for (int i = 0; i < totalstudents; i++)
        {
            cout << name[i] << " " << id[i] << " " << q1[i] << " " << q2[i] << " " << q3[i] << " " << q4[i]
                << " " << a1[i] << " " << a2[i] << " " << a3[i] << " " << a4[i] << " " << total[i]<<endl;
        }
        cout << " _____________________________________________________________________";




    }
    void PrintDetailView(const char* rollNo)
    {
        for (int i = 0; i < totalstudents; i++)
        {
            if (id[i] == rollNo)
            {
                cout << "Student Information:" << endl;
                cout << "Roll No:\t" << id[i] << endl;
                cout << "Name:\t\t" << name[i] << endl;
                cout << "Quizzes Marks:" << endl;
                cout << "\tQ1:\t" << q1[i] << "/" << q1t << endl;
                cout << "\tQ2:\t" << q2[i] << "/" << q2t << endl;
                cout << "\tQ3:\t" << q3[i] << "/" << q3t << endl;
                cout << "\tQ4:\t" << q4[i] << "/" << q4t << endl;
                cout << "Assignment Marks:" << endl;
                cout << "\tA1:\t" << a1[i] << "/" << a1t << endl;
                cout << "\tA2:\t" << a2[i] << "/" << a2t << endl;
                cout << "\tA3:\t" << a3[i] << "/" << a3t << endl;
                cout << "\tA4:\t" << a4[i] << "/" << a4t << endl;
                cout << "Total:\t\t" << total[i] << "/" << (q1t + q2t + q3t + q4t + a1t + a2t + a3t + a4t) << endl;
                break;
            }
        }
    }



};
int main()
{
    fstream file("C:\\Users\\hp\\Desktop\\gradesheet.txt");

    if (!file)
    {
        cout << "Unable to open file." << endl;
        return 1;
    }

    flex f;
    f.getdatafromfile(file);
    f.updatestatistics();
    f.displayAll();

    cout << endl << "enter a keyword of roll no=";
    int a;
    cin >> a;
    f.searchstudentsbykeyword(a);
    //cout.flush(); // Flush the output buffer
    // Sleep for 0.5 seconds (500 milliseconds);
    f.sortlistbytotal();
    f.printAll();
    char* rollNo = new char[10];
    cout <<endl<< "enter roll number=";
    cin >> rollNo;
    f.PrintDetailView(rollNo);
    delete rollNo;
    

}