//day18-7
#ifndef SUBJECT_H
#define SUBJECT_H
#include<string>
using namespace std;
class Subject {
private:
	string subjectName;
	int scorePoint;
public:
	void setSubjectName(string subjectName);
	void setScorePoint(int scorePoint);
	string getSubjectName();
	int getScorePoint();
};

#endif // !SUBJECT_H

