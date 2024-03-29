#pragma once
#include <string>

#ifndef COW_H
#define COW_H
#endif // !COW_H


enum cow_purpose {dairy, meat, hide, pet };

class cow {

public:
	cow(std::string name_i, int age_i, unsigned char purpose_i);
	
	std::string get_name();
	
	int get_age();

	unsigned char get_purpose();

	void set_age(int new_age);

private:
	std::string name;
	int age;
	char purpose;
};
