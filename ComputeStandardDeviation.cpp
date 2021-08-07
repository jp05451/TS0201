#include<iostream>
#include<cmath>
#include<vector>
#include<iomanip>

using namespace std;

double average(const vector<double>& score);
double deviation(double average, vector<double>& score);
void write(vector<double>& score);
int main()
{
				vector<double > score;
				int len,i;
				double in,a,d;
				while (cin >>len)
				{
								for (i = 0; i <len ; i++)
								{
												cin >> in;
												score.push_back (in);
								}
				a = average(score);
				d = deviation(a, score);
//				write(score);
				cout << "Average:" << a << "\t" << "Standard deviation:" << d << endl;
				score.clear();
				}
}
void write(vector<double>& score)
{
				int i;
				for (i = 0; i < score.size(); i++)
				{
								cout << score.at(i) << "   ";
								return;
				}
}
double average(const vector<double>& score)
{
				int i;
				double total = 0, a=0;
				for (i = 0; i < score.size(); i++)
				{
								total += score.at(i);
				}
				a = total / i;
				return a;
}
double deviation(double average,vector<double>& score)
{
				double d = 0 , total = 0;
				int i;
				for (i = 0; i < score.size(); i++)
				{
								total += pow(score.at(i) - average, 2.0);
				}
				total = total / i;
				d = sqrt(total);	
				return d;
}