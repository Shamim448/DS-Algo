## Learning Data Structure & Algorithm from Abdul Bari Sir

- [সুচিপত্র](#সুচিপত্র)
  - [Data Structure](#Data-Structure)

- [Exercises and solution Array](https://www.w3resource.com/c-programming-exercises/array/index.php)

- [Structur-Bangla](https://jakir.me/struct/)

### Data Structure
ডেটা স্ট্রাকচার হচ্ছে ডেটা স্টোর করা এবং সাজিয়ে রাখার পদ্ধতি। যদি একটু সহজ করে বলি তাহলে বিষয়টা এরকম,  প্রতিটা অ্যাপ্লিকেশন যেগুলো আমরা কম্পিউটার সিস্টেম অথবা মোবাইল সিস্টেমে ব্যবহার করি সেগুলো কিছু ডাটা নিয়ে deals/কাজ করে। সেই ডাটা গুলো মেইন মেমোরিতে (RAM) থাকতে হবে। কিভাবে এই ডাটা গুলো মেইন মেমোরিতে অ্যারেঞ্জমেন্ট/অরগানাইজ  করলে অ্যাপ্লিকেশন সেটাকে খুব ইজিলি এবং ইফিসিয়েন্টলি এক্সেস করতে পারবে, এই আরেজমেন্ট অথবা অর্গানাইজ করার প্রসেসটাকেই বলা হয় ডাটা স্ট্রাকচার।
 
ডাটা স্ট্রাকচার মূলত প্রোগ্রাম এক্সিকিউশনের পার্ট অর্থাৎ একটা প্রোগ্রাম যখন Run করবে তখন ডাটা অর্গানাইজ থাকলে অ্যাপ্লিকেশন টা খুব ফাস্টার রেসপন্স করতে পারে. উদাহরণস্বরূপ নিচের  চিত্র থেকে যদি বোঝার চেষ্টা করি তাহলে

 একজন ইউজার তার কম্পিউটারের হার্ডডিক্স এ থাকা একটা ওয়ার্ড ফাইলে ডাবল  ক্লিক করলো, তখন সাথে সাথে কম্পিউটারে ইন্সটল করা MS Word এপ্লিকেশন এর Set of Instraction গুলো RAM এ চলে যাবে এবং রাম থেকে সিপিইউ সেগুলোকে এক্সিকিউশন করা শুরু করবে। যেহেতু আমরা একটা ফাইলে ক্লিক করেছি সুতরাং এখানে কিছু ডাটা থাকবে অর্থাৎ আমরা যে টেক্সট গুলো ফাইল এর মধ্যে লিখেছি সেগুলো রামের মধ্যে চলে যাবে। এখন এই ডেটা গুলো রামের মধ্যে একটা নির্দিষ্ট পদ্ধতিতে সাজানো থাকবে. এই ডাটা গুলো র‍্যাম বা মেইন মেমোরির মধ্যে যেই পদ্ধতিতে অরগানাইজ করা থাকবে সেই পদ্ধতিকেই বলা হয় ডাটা স্ট্রাকচার. 
কিছু বেসিক ডাটা স্ট্রাকচার হচ্ছে: Array, List, Linked List, Stack, Queue, Tree, Heap.
![image](https://github.com/Shamim448/DS-Algo/assets/43339514/7c52f0eb-a1ad-49f3-a653-093b5af7e3d6)

Structures ব্যবহার করে আমরা নিজেদের মত করে ডেটা স্ট্রাকচার তৈরি করতে পারব। এবং ঐখানে ইচ্ছে মত একের অধিক ভিন্ন ভিন্ন ডেটা রাখতে পারব।

#### strcpy():

strcpy() is a standard library function in C/C++ and is used to copy one string to another.
Syntax:
char* strcpy(char* dest, const char\* src);

Parameters: This method accepts the following parameters:  
dest: Pointer to the destination array where the content is to be copied.
src: string which will be copied.

Return Value: the strcpy() function returns a pointer to the destination string.

- [Pointer](https://jakir.me/c-pointers/)

### Referance:

Just another name of a variable. which is point variable address.
- [Function Book](https://jakir.me/c-functions/)
