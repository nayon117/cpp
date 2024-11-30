#include <bits/stdc++.h>

using namespace std;

class Student

{

public:

 string name;

 int roll;

 int marks;

};

int main()

{

 int n;

 cin >> n;

 Student a[n];

 for (int i = 0; i < n; i++)

 {

 cin >> a[i].name >> a[i].roll >> a[i].marks; // এরে এলিমেন্ট ইনপুট নেওয়া হচ্ছে। 

 }

 for (int i = 0; i < n - 1; i++) 

 {

 for (int j = i + 1; j < n; j++) 

 {

 if (a[i].marks > a[j].marks) // যদি বাম পাশের অবজেক্টের মার্ক্স ডান পাশের অবজেক্টের মার্ক্স এর থেকে বড় হয়ে যায়, তাহলে আমাদের সোয়াপ করতে হবে।

 {

 swap(a[i], a[j]); // বিল্ট-ইন সোয়াপ ফাংশন ব্যাবহার করে সোয়াপ করছি। 

 }

 }

 }

 for (int i = 0; i < n; i++)

 {

 cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl; // সর্টেড এরে প্রিন্ট করা হচ্ছে।

 }

 return 0;

}
