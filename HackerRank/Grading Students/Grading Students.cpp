#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the gradingStudents function below.
 */
int multipleOfGrade(int Grade){
    bool t = true;
    int n = 0;
    if(Grade >= 38){
        while(t){
        n += 5;
        if(n>Grade){
            t = false;
        }
      }
    }
    else {
        n = Grade;
    }
    return n;
}
vector<int> gradingStudents(vector<int> grades) {
    vector<int> resultGrades(grades.size());
    for (int result_itr = 0; result_itr < grades.size(); result_itr++) {

            if((multipleOfGrade(grades[result_itr]) - grades[result_itr]) < 3){
                resultGrades[result_itr] = multipleOfGrade(grades[result_itr]);
            }else{
                resultGrades[result_itr] = grades[result_itr];
            }
    }

    return resultGrades;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> grades(n);

    for (int grades_itr = 0; grades_itr < n; grades_itr++) {
        int grades_item;
        cin >> grades_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        grades[grades_itr] = grades_item;
    }

    vector<int> result = gradingStudents(grades);

    for (int result_itr = 0; result_itr < result.size(); result_itr++) {
        fout << result[result_itr];

        if (result_itr != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
