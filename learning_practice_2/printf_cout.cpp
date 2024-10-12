#include <iostream>
using namespace std;

int main() {
		
	string biodata[5] = {"Igo Tegar Prambudhy", "Informatics", "Computer Science", "Indonesian", "Male"};
	string technologies[9] = {"Cpp" ,"HTML", "CSS", "JavaScript", "PHP", "TailwindCSS", "Bootstrap", "MySQL", "Laravel"};
	string tools[8] = {"Visual Studio Code", "XAMPP", "Postman", "SQLyog", "Git", "Dev C++", "Sublime Text", "Notepad++"};
	
	
	printf("=== Data Student ===\n\n");
	printf("Name : %s \n", biodata[0].c_str());
	cout<<"Program Study : "<<biodata[1]<<endl;
	printf("Faculty : %s \n", biodata[2].c_str());
	cout<<"Address : "<<biodata[3]<<endl;
	cout<<"Gender : "<<biodata[4]<<endl<<endl;
	cout<<"=== End ==="<<endl<<endl;
	printf("=== Personality Skills ===\n");
	printf("Technologies : \n");
	printf("\t %s \n", technologies[0].c_str());
	printf("\t %s \n", technologies[1].c_str());
	printf("\t %s \n", technologies[2].c_str());
	printf("\t %s \n", technologies[3].c_str());
	printf("\t %s \n", technologies[4].c_str());
	printf("\t %s \n", technologies[5].c_str());
	printf("\t %s \n", technologies[6].c_str());
	printf("\t %s \n", technologies[7].c_str());
	printf("\t %s \n\n", technologies[8].c_str());
	printf("Tools : \n");
	printf("\t %s \n", tools[0].c_str());
	printf("\t %s \n", tools[1].c_str());
	printf("\t %s \n", tools[2].c_str());
	printf("\t %s \n", tools[3].c_str());
	printf("\t %s \n", tools[4].c_str());
	printf("\t %s \n", tools[5].c_str());
	printf("\t %s \n", tools[6].c_str());
	printf("\t %s \n\n", tools[7].c_str());
	cout<<"=== End ==="<<endl<<endl;
		
	return 0;
}
