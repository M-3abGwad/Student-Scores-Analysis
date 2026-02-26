// NAME : MOHAMAD MOUSTAFA ELSAIED
// ID : 25069
#include <iostream>
using namespace std;

// maximum number of students allowed
const int SIZE = 100;

/* 
   Function to read students scores
*/
void inputScores(int scores[], int n)
{
    cout << "Enter scores:\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Student " << i + 1 << ": ";
        cin >> scores[i];
    }
}

/*
   Function to calculate average score
*/
double calculateAverage(int scores[], int n)
{
    int total = 0;

    for (int i = 0; i < n; i++)
        total += scores[i];

    return (double)total / n;
}

/*
   Function to analyze results
   (max - min - pass - fail)
*/
void analyzeScores(int scores[], int n, double avg)
{
    int maxScore = scores[0];
    int minScore = scores[0];
    int passCount = 0;
    int failCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (scores[i] > maxScore)
            maxScore = scores[i];

        if (scores[i] < minScore)
            minScore = scores[i];

        if (scores[i] >= 50)
            passCount++;
        else
            failCount++;
    }

    cout << "\n----- Report -----\n";
    cout << "Average Score : " << avg << endl;
    cout << "Maximum Score : " << maxScore << endl;
    cout << "Minimum Score : " << minScore << endl;
    cout << "Passed Students : " << passCount << endl;
    cout << "Failed Students : " << failCount << endl;

    cout << "Scores above average: ";
    for (int i = 0; i < n; i++)
    {
        if (scores[i] > avg)
            cout << scores[i] << " ";
    }

    cout << endl;
}

int main()
{
    int n;
    int scores[SIZE];

    cout << "Enter number of students: ";
    cin >> n;

    inputScores(scores, n);

    double avg = calculateAverage(scores, n);

    analyzeScores(scores, n, avg);

    return 0;
}
