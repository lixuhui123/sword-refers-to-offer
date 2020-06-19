//// replacing in a string  string的迭代器可以是常数
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//int main()
//{
//	//std::string base = "this is a test string.";
//
//	//char * ret = &base[0];
//
//	////cout << ret;
//
//	//string ok(ret);
//	//
//	//std::string str2 = "n example";
//	//std::string str3 = "sample phrase";
//	//std::string str4 = "useful.";
//
//	// replace signatures used in the same order as described above:
//
//	// Using positions:                 0123456789*123456789*12345
//	//std::string str = base;           // "this is a test string."
//	//str.replace(9, 5, str2);          // "this is an example string." (位置，长度，要替换的)
//	//cout << str<<endl;
//	//str.replace(19, 6, str3, 7, 6);     // "this is an example phrase." (2)
//	//cout << str << endl;
//	//str.replace(8, 10, "just a");     // "this is just a phrase."     (3)
//	//cout << str << endl;
//
//	//str.replace(8, 6, "a shorty", 7);  // "this is a short phrase."    (4)
//	//cout << str << endl;
//
//	//str.replace(22, 1, 3,'!');        // "this is a short phrase!!!"  (5)
//	//cout << str << endl;
//
//
//	// Using iterators:                                               0123456789*123456789*
//	//str.replace(str.begin(), str.end() - 3, str3);                    // "sample phrase!!!"      (1)
//	//str.replace(str.begin(), str.begin() + 6, "replace");             // "replace phrase!!!"     (3)
//	//str.replace(str.begin() + 8, str.begin() + 14, "is coolness", 7);    // "replace is cool!!!"    (4)
//	//str.replace(str.begin() + 12, str.end() - 4, 4, 'o');                // "replace is cooool!!!"  (5)
//	//str.replace(str.begin() + 11, str.end(), str4.begin(), str4.end());// "replace is useful."    (6)
//	//std::cout << str << '\n';
//
//
//	std::vector<int> myvector = { 10,20,30 };
//
//	auto it = myvector.emplace(myvector.begin() + 1, 100);
//	myvector.emplace(it, 200);
//	myvector.emplace(myvector.end(), 300);
//
//	std::cout << "myvector contains:";
//	for (auto& x : myvector)
//		std::cout << ' ' << x;
//	std::cout << '\n';
//
//	system("pause");	
//	return 0;
//}