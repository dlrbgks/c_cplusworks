//day18-8
#include"Subject.h"
int Subject::getScorePoint() {
	return scorePoint;
}
string Subject::getSubjectName() {
	return subjectName;
}
void Subject::setScorePoint(int scorePoint) {
	this->scorePoint = scorePoint;
}
void Subject::setSubjectName(string subjectName) {
	this->subjectName = subjectName;
}
