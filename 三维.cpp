//#include <iostream>
//#include<string>
//#include<vector>
//#include <sstream>
//#include <math.h>
//using namespace std;
//int main()
//{
//	string str;
//	while (getline(cin, str))
//	{
//		 
//		vector<double > v;
//		char * pch;
//		char *buf ;
//		pch = strtok_s(&str[0] , "(), ",&buf);
//		while (pch!=NULL)
//		{
//			cout << pch << endl;
//			string s(pch);
//			v.push_back(stod(s));
//			pch = strtok_s(NULL, "(), ",&buf);
//		}
//		double bian[3];
//		bian[0] = sqrt(pow(v[0] - v[3], 2) + pow(v[1] - v[4], 2) + pow(v[2] - v[5], 2));
//		bian[1] = sqrt(pow(v[0] - v[6], 2) + pow(v[1] - v[7], 2) + pow(v[2] - v[8], 2));
//		bian[2] = sqrt(pow(v[6] - v[3], 2) + pow(v[7] - v[4], 2) + pow(v[8] - v[5], 2));
//		if (bian[0] + bian[1] <= bian[2]
//			|| bian[0] + bian[2] <= bian[1]
//			|| bian[1] + bian[2] <= bian[0])
//		{
//			cout << "false" << endl;
//		}
//		else
//		{
//			cout << "true" << endl;
//		}
//		/*for ( auto &e:v)
//		{
//			cout << e << " ";
//
//		}*/
//	}
//	
//	 
//	system("pause"); 
//	return 0;
//}