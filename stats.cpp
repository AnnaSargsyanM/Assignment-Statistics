//     This program reads the scores from the file 'grades.txt'
//     then calculates the maximum, minimum, total and average
//     scores, as well as the number of scores.
//     
//     
// 
//****************************************************************************************************


#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("grades.txt");
    int score;
    int maximum = INT_MIN; 
    int minimum = INT_MAX; 
    int total = 0;
    int num_scores = 0;

    while (fin >> score)
    {
        if (score > maximum) 
        {
            maximum = score;
        }
        if (score < minimum) 
        {
            minimum = score;
        }
        total += score;
        num_scores++;
    }

    double average = static_cast<double>(total) / num_scores;

    cout << "Maximum score: " << maximum << endl;
    cout << "Minimum score: " << minimum << endl;
    cout << "Total score: " << total << endl;
    cout << "Number of scores: " << num_scores << endl;
    cout << "Average score: " << average << endl;

    return 0;
}

//****************************************************************************************************
/*

Maximum score: 100
Minimum score: 1
Total score: 27242
Number of scores: 374
Average score: 72.8396

*/
