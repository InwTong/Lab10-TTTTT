#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt");
	dest.open("cheerbook_copy.txt");
	
	//กรอก Code เฉพาะส่วนนี้ ให้สอดคล้องกับโจทย์และ Code ส่วนอื่น ๆ 
	//โดยห้ามแก้ไข Code ในส่วนอื่น ๆ
    // ตรวจสอบว่าไฟล์ source เปิดได้หรือไม่
    if (!source) {
        cerr << "Error opening source file!" << endl;
        return 1;  // หากไม่สามารถเปิดไฟล์ได้ ให้จบการทำงาน
    }
    
    // ตรวจสอบว่าไฟล์ dest เปิดได้หรือไม่
    if (!dest) {
        cerr << "Error opening destination file!" << endl;
        return 1;  // หากไม่สามารถเปิดไฟล์ได้ ให้จบการทำงาน
    }

    // เขียนข้อความ "-------------------- BOOM ---------------------" ไปที่บรรทัดแรกของไฟล์ dest
    dest << "-------------------- BOOM ---------------------" << endl;

    string line;
    // คัดลอกข้อมูลจาก cheerbook.txt ไปยัง cheerbook_copy.txt
    while (getline(source, line)) {
        dest << line << endl;
    }

    // เขียนข้อความ "-------------------- HA!! ---------------------" ที่บรรทัดสุดท้าย
    dest << "-------------------- HA!! ---------------------" << endl;

    // ปิดไฟล์ทั้งสอง
    source.close();
    dest.close();

    return 0;
}
