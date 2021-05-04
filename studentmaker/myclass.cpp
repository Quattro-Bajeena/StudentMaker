#include<iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include<cmath>
#include<Windows.h>
#include "myclass.h"

using namespace std;
using namespace my_class;

character::character(int school, std::string character_name)
{
	name = character_name;
	srand((unsigned int)time(NULL));
	BMI = 22 + (rand() % 6) - 3;
	height = 178 + (rand() % 40) - 20 + fmod(rand(), 100) / 100;
	weight = round(BMI * pow((height / 100), 2) * 100) / 100;

	gold = 500;
	strenght = 16 + (rand() % 10) - 5 +static_cast<int>(weight / 15);
	intelligence = 20 + (rand() % 10) - 5;
	stamina = 15 + (rand() % 10) - 5 +  static_cast<int>(height / 30);
	charisma = 20 + (rand() % 10) - 5;
	stress = exhaustion = 0;
	rep_aca = 0 + (rand() % 6);
	rep_soc = 0 + (rand() % 6);
	rep_cmb = 0 + (rand() % 6);
	stressed = false;
	exhausted = false;
	eq_number = 0;
	grade_number = 0;
	
	switch (school)
	{
	case 0:
		aca_it = 10 + (rand() % 5) - 2;
		aca_phys = 20 + (rand() % 5) - 2;
		aca_math = 20 + (rand() % 5) - 2;
		break;
	case 1:
		aca_it = 30 + (rand() % 5) - 2;
		aca_phys = aca_math = 10 + (rand() % 5) - 2;
		break;
	}
	
}
activity::activity()
{
	description = "default from default";
	bad = 44;
	random1 = (rand() % 3) - 1;
	random5 = rand() % 11 - 5;
	random10 = rand() % 21 - 10;
}

activity::activity(int itype)
{
	description = "default with itype";
	this->type = itype;
	bad = 33;
}

void activity::stat_change(character* student)
{
	bad += 1;
}

void activity::gold_change(character* student)
{
	bad += 1;
}

void my_class::character::status_check()
{
	if (stress > (intelligence + charisma) / 2) { stressed = true; }
	else stressed = false;

	if (exhaustion > (strenght + stamina) / 2) { exhausted = true; }
	else exhausted = false;
}

void character::all_stat_floor()
{
	strenght = (strenght < 0) ? 0 : strenght;
	intelligence = (intelligence < 0) ? 0 : intelligence;
	stamina = (stamina < 0) ? 0 : stamina;
	charisma = (charisma < 0) ? 0 : charisma;
	stress = (stress < 0) ? 0 : stress;
	exhaustion = (exhaustion < 0) ? 0 : exhaustion;
	aca_it = (aca_it < 0) ? 0 : aca_it;
	aca_phys = (aca_phys < 0) ? 0 : aca_phys;
	aca_math = (aca_math < 0) ? 0 : aca_math;
	rep_aca = (rep_aca < 0) ? 0 : rep_aca;
	rep_soc = (rep_soc < 0) ? 0 : rep_soc;
	rep_cmb = (rep_cmb < 0) ? 0 : rep_cmb;

	strenght = (strenght >= 100) ? 100 : strenght;
	intelligence = (intelligence >= 100) ? 100 : intelligence;
	stamina = (stamina >= 100) ? 100 : stamina;
	charisma = (charisma >= 100) ? 100 : charisma;
	stress = (stress >= 100) ? 100 : stress;
	exhaustion = (exhaustion >= 100) ? 100 : exhaustion;
	aca_it = (aca_it >= 100) ? 100 : aca_it;
	aca_phys = (aca_phys >= 100) ? 100 : aca_phys;
	aca_math = (aca_math >= 100) ? 100 : aca_math;
	rep_aca = (rep_aca >= 100) ? 100 : rep_aca;
	rep_soc = (rep_soc >= 100) ? 100 : rep_soc;
	rep_cmb = (rep_cmb >= 100) ? 100 : rep_cmb;
}

my_class::lecture::lecture(int itype)
{
	this->type = itype;
	switch (this->type)
	{
	case 1: //spanko
		description = "Attending lectures, sleeping";
		break;
	case 2: //slabo zwracanko uwago
		description = "Attending lectures, not paying attention";
		break;
	case 3: //normalno
		description = "Attending lectures";
		break;
	case 4: //mocno zwracanko uwago
		description = "Attending lectures, extra focused";
		break;
	}
	
}

void lecture::stat_change(character* student)
{
	switch (this->type)
	{
	case 1: //spanko
		student->stress -= 2;
		student->exhaustion -= 4;
		student->intelligence -= 2;
		break;
	case 2: //slabo zwracanko uwago
		student->stress -= 1;
		student->exhaustion -= 2;
		student->aca_math += 1 + random1;
		student->aca_phys += 1 + random1;
		student->aca_it += 1 + random1;
		break;
	case 3: //normalno
		student->intelligence += 1+ random1;
		student->aca_math += 2 + random1;
		student->aca_phys += 2 + random1;
		student->aca_it += 2 + random1;
		break;
	case 4: //mocno zwracanko uwago
		student->stress += 3;
		student->exhaustion += 4;
		student->intelligence  += 3 + random1;
		student->aca_math += 2 + random1;
		student->aca_phys += 2 + random1;
		student->aca_it += 2 + random1;
		break;
	}
}

void lecture::gold_change(character* student)
{
	student->gold += 0;
}

my_class::work::work(int itype)
{
	this->type = itype;
	switch (this->type)
	{
	case 1: //Uber Drinks
		description = "Delivering food by bike";
		break;
	case 2: //WcDonalds
		description = "Serving food in McDonalds";
		break;
	case 3: //infolonia
		description = "reciving angry calls";
		break;
	case 4: //bezplatny stazo
		description = "Getting real work experience";
		break;
	}
}

void work::stat_change(character* student)
{
	switch (this->type)
	{
	case 1: //Wuber Eats
		if (student->strenght > 50) { student->exhaustion += 4; } else student->exhaustion += 10;
		student->stamina += 3;
		student->strenght += 2;
		student->rep_soc += 2;
		break;
	case 2:  //WcDonalds
		student->exhaustion += 6;
		student->stress += 4;
		student->charisma += 3;
		break;
	case 3: //infolinia
		student->exhaustion += 4;
		if (student->charisma > 40) { student->stress += 2; } else student->stress += 8;
		student->charisma += 5;
		break;
	case 4: //bezplatny satz :(
		student->exhaustion += 4;
		student->stress += 3;
		if (student->intelligence >= 40) { student->intelligence += 1; } else student->stress += 3;
		student->aca_it += 2;
	}
}

void work::gold_change(character* student)
{
	switch (this->type)
	{
	case 1: //Wuber Eats
		student->gold += 250;
		break;
	case 2: //WcDonalds
		student->gold += 200;
		break;
	case 3: //infolinia
		student->gold += 150;
		break;
	case 4: //bezplatny satz :(
		student->gold += 50;
		break;
	}
}

my_class::learn::learn(int itype)
{
	this->type = itype;
	switch (this->type)
	{
	case 1: //Intligence
		description = "Stregthening your mind";
		break;
	case 2: //Math
		description = "Count! Calculate! Estimate!";
		break;
	case 3: //physics
		description = "This is how real world works";
		break;
	case 4: //IT
		description = "over 9000 lines of code";
		break;
	}
}

void my_class::learn::stat_change(character* student)
{
	switch (this->type)
	{
	case 1: //Intligence
		student->exhaustion += 1;
		student->stress -=1;
		student->intelligence += 3 + random1;
		break;
	case 2:  //Math
		student->exhaustion += 1;
		student->stress -= 1;
		student->aca_math += 3 + random1;
		break;
	case 3: //physics
		student->exhaustion += 1;
		student->stress -= 1;
		student->aca_phys += 3 + random1;
		break;
	case 4: //IT
		student->exhaustion += 1;
		student->stress -= 1;
		student->aca_it += 3 + random1;
	}
}

void my_class::learn::gold_change(character* student)
{
	student->gold += 0;
}

my_class::freetime::freetime(int itype)
{
	this->type = itype;
	switch (this->type)
	{
	case 1: //Watching movies
		description = "Being a true cinemaphile";
		break;
	case 2: //Playing vido games
		description = "playing Vidya Games";
		break;
	case 3: //Building models
		description = "They are NOT toys!";
		break;
	case 4: //coding games
		description = "making Vidya Games";
		break;
	}
}

void my_class::freetime::stat_change(character* student)
{
	switch (this->type)
	{
	case 1: //Watching movies
		student->exhaustion -= 5;
		student->stress -= 3;
		break;
	case 2:  //Playing vido games
		student->exhaustion -= 3;
		student->stress -= 5;
		break;
	case 3: //Building models
		student->exhaustion -= 2;
		student->stress -= 5;
		student->stamina += 2 + random1;
		break;
	case 4: //coding games
		student->exhaustion -= 3;
		student->stress -= 1;
		student->aca_it += 1 + random1;
	}
}

void my_class::freetime::gold_change(character* student)
{
	switch (this->type)
	{
	case 1: //Watching movies
		student->gold -= 5;
		break;
	case 2: //Playing vido games
		student->gold -= 10;
		break;
	case 3: //Building models
		student->gold -= 50;
		break;
	case 4: //coding games
		student->gold += 0;
		break;
	}
}

my_class::sport::sport(int itype)
{
	this->type = itype;
	switch (this->type)
	{
	case 1: //Gym
		description = "Hitting da gym";
		break;
	case 2: //Martial Arts
		description = "Kung-Fu fightning";
		break;
	case 3: //football
		description = "Footballing";
		break;
	case 4: //running
		description = "Just running";
		break;
	}
}

void my_class::sport::stat_change(character* student)
{
	switch (this->type)
	{
	case 1://Gym
		student->strenght += 3 + random1;
		student->stamina += 1 + random1;
		student->rep_cmb += 1;
		student->exhaustion += 3;
		student->stress -= 1;
		break;
	case 2: //Martial Arts
		student->strenght += 2 + random1;
		student->stamina += 1 + random1;
		student->rep_cmb += 3;
		student->exhaustion += 3;
		break;
	case 3: //football
		student->strenght += 1 + random1;
		student->stamina += 2 + random1;
		student->rep_soc += 1;
		student->exhaustion += 2;
		break;
	case 4: //running
		student->stamina += 3 + random1;
		student->exhaustion += 1;
		student->stress -= 2;
		break;
	}
}

void my_class::sport::gold_change(character* student)
{
	switch (this->type)
	{
	case 1: //Gym
		student->gold -= 40;
		break;
	case 2: //Martial Arts
		student->gold -= 40;
		break;
	case 3: //football
		student->gold -= 20;
		break;
	case 4: //running
		student->gold += 0;
		break;
	}
}

my_class::goout::goout(int itype)
{
	this->type = itype;
	switch (this->type)
	{
	case 1: //To bar
		description = "Chilling in a bar";
		break;
	case 2: //Party
		description = "Partying all night";
		break;
	case 3: //In the city
		description = "Roaming the city";
		break;
	case 4: //Clubs
		description = "Clubbing";
		break;
	}
}

void my_class::goout::stat_change(character* student)
{
	switch(this->type)
	{
	case 1: //To bar
		student->rep_soc += 2 + random1;
		student->charisma += 1 + random1;
		student->intelligence -= 1;
		student->stress -= 2;
		break;
	case 2: //Party
		student->rep_soc += 3 + random1;
		student->intelligence -= 2 + random1;
		student->stress -= 3;
		student->exhaustion += 3;
		break;
	case 3: //In the city
		student->rep_cmb += 3 + random1;
		student->rep_soc += 2 + random1;
		student->stamina += 1 + random1;
		student->exhaustion += 2;
		break;
	case 4://Clubs
		student->rep_soc += 1 + random1;
		student->exhaustion += 3 + random1;
		student->intelligence -= 2 + random1;
		student->charisma += 1 + random1;
		student->stress -= 1;
		break;
	}
}

void my_class::goout::gold_change(character* student)
{
	switch (this->type)
	{
	case 1: //To bar
		student->gold -= 40;
		break;
	case 2: //Party
		student->gold -= 20;
		break;
	case 3: //In the city
		student->gold -= 10;
		break;
	case 4: //Clubs
		student->gold -= 50;
		break;
	}
}

my_class::distress::distress()
{
	description = "You are too disstressed to do anything";
}

void my_class::distress::stat_change(character* student)
{
	student->stamina -= 1;
	student->strenght -= 1;
	student->rep_soc -= 1;
	student->weight -= 0.1;
}

void my_class::distress::gold_change(character* student)
{
	student->gold -=10;
}

my_class::fatigue::fatigue()
{
	description = "You don't have a energy to do anything";
}

void my_class::fatigue::stat_change(character* student)
{
	student->charisma -= 1;
	student->intelligence -= 1;
	student->rep_soc -= 1;
	student->weight += 0.1;
}

void my_class::fatigue::gold_change(character* student)
{
	student->gold -= 10;
}

my_class::depression::depression()
{
	description = "You are a mental and physical wreck.";
}

void my_class::depression::stat_change(character* student)
{
	student->stamina -= 2;
	student->strenght -= 2;
	student->charisma -= 2;
	student->intelligence -= 2;
	student->rep_soc -= 3;
	student->weight -= 0.5;
}

void my_class::depression::gold_change(character* student)
{
	student->gold -= 20;
}


test::test(double pass_val, double weight_int, double weight_math, double weight_phys, double weight_it, std::string day, std::string month, std::string year, std::string name)
{
	this->pass_val = pass_val;
	this->weight_int = weight_int;
	this->weight_math = weight_math;
	this->weight_phys = weight_phys;
	this->weight_it = weight_it;
	this->tday = day;
	this->tmonth = month;
	this->tyear = year;
	this->name = name;
}

bool test::check_date(std::string today, std::string day, std::string month, std::string year)
{
	if (day == this->tday && month == this->tmonth && year == this->tyear) return true;
	else return false;
}

bool test::pass()
{
	if (this->score >= pass_val)return true;
	else return false;
}

void test::grading(character* student)
{
	this->score = weight_int * student->intelligence + weight_math * student->aca_math + weight_phys * student->aca_phys + weight_it * student->aca_it;
	percentage = round((score / (pass_val * 2)) * 100);
	percentage = (percentage >= 100) ? 100 : percentage;
	if (percentage >= 90) { grade = 5; }
	else if (percentage >= 75) { grade = 4; }
	else if (percentage >= 50) { grade = 3; }
	else grade = 2;
}

item::item()
{
	usable = false;
	in_use = false;
	value = stat_bonus1 = stat_bonus2 = 0;
}

void item::buy(character* player)
{
	player->gold -= value;
}

consumable::consumable()
{
	item_type = 0;
	usable = false;
}

void consumable::use(character* player)
{
	player->stress -= stat_bonus1;
	player->exhaustion -= stat_bonus2;
}

pizza::pizza()
{
	value = 15;
	item_name = "Pizza";
	stat_bonus1 = 0;
	stat_bonus2 = 3;
}

void my_class::pizza::use(character* player)
{
	player->stress -= stat_bonus1;
	player->exhaustion -= stat_bonus2;
}

anti_depress::anti_depress()
{
	item_name = "Anti-depress";
	value = 30;
	stat_bonus1 = 5;
	stat_bonus2 = 0;
}

void my_class::anti_depress::use(character* player)
{
	player->stress -= stat_bonus1;
}

kebab::kebab()
{
	item_name = "Kebab";
	value = 25;
	stat_bonus1 = 1;
	stat_bonus2 = 1;
}

void kebab::use(character* player)
{
	player->stamina += stat_bonus1;
	player->strenght += stat_bonus2;
}

laptop::laptop()
{
	item_type = 1;
	usable = true;
	in_use = false;
}


lenovo::lenovo()
{
	item_name = "Lenovo";
	value = 1000;
	stat_bonus1 = 10;
	stat_bonus2 = 4;
}

void lenovo::use(character* player)
{
	switch (in_use)
	{
	case false:
		player->aca_it += stat_bonus1;
		player->rep_soc += stat_bonus2;
		in_use = true;
		break;
	case true:
		player->aca_it -= stat_bonus1;
		player->rep_soc -= stat_bonus2;
		in_use = false;
		break;
	}
}

macbook::macbook()
{
	item_name = "Macbook";
	value = 5000;
	stat_bonus1 = 20;
	stat_bonus2 = 8;
}

void macbook::use(character* player)
{
	switch (in_use)
	{
	case false:
		player->aca_it += stat_bonus1;
		player->rep_soc += stat_bonus2;
		in_use = true;
		break;
	case true:
		player->aca_it -= stat_bonus1;
		player->rep_soc -= stat_bonus2;
		in_use = false;
		break;
	}
}

gaming_laptop::gaming_laptop()
{
	item_name = "Gaming Laptop";
	value = 4000;
	stat_bonus1 = 15;
	stat_bonus2 = 6;
}

void gaming_laptop::use(character* player)
{
	switch (in_use)
	{
	case false:
		player->stress -= stat_bonus1;
		player->rep_soc += stat_bonus2;
		in_use = true;
		break;
	case true:
		player->stress += stat_bonus1;
		player->rep_soc -= stat_bonus2;
		in_use = false;
		break;
	}
}

accessory::accessory()
{
	usable = true;
	in_use = false;
	item_type = 2;
}


fedora::fedora()
{
	item_name = "Gentelman's Fedora";
	value = 100;
	stat_bonus1 = 13;
	stat_bonus2 = 9;
}

void fedora::use(character* player)
{
	switch (in_use)
	{
	case false:
		player->intelligence += stat_bonus1;
		player->charisma -= stat_bonus2;
		in_use = true;
		break;
	case true:
		player->intelligence -= stat_bonus1;
		player->charisma += stat_bonus2;
		in_use = false;
		break;
	}
}

jacket::jacket()
{
	item_name = "Full Leather Jacket";
	value = 250;
	stat_bonus1 = 15;
	stat_bonus2 = 12;
}

void jacket::use(character* player)
{
	switch (in_use)
	{
	case(false):
		player->rep_soc += stat_bonus1;
		player->rep_cmb += stat_bonus2;
		in_use = true;
		break;
	case(true):
		player->rep_soc -= stat_bonus1;
		player->rep_cmb -= stat_bonus2;
		in_use = false;
		break;
	}
}

shades::shades()
{
	item_name = "Cool Shades";
	value = 400;
	stat_bonus1 = 18;
	stat_bonus2 = 15;
}

void shades::use(character* player)
{
	switch (in_use)
	{
	case(false):
		player->charisma += stat_bonus1;
		player->rep_soc += stat_bonus2;
		in_use = true;
		break;
	case(true):
		player->charisma -= stat_bonus1;
		player->rep_soc -= stat_bonus2;
		in_use = false;
		break;
	}
}

diet::diet(int type)
{
	switch (type)
	{
	case 0:
		diet_name = "Robust Diet";
		cost = 200;
		weight_gain = 0.78;
		stamina_gain = 1;
		break;
	case 1:
		diet_name = "Normal Diet";
		cost = 100;
		weight_gain = 0.02;
		stamina_gain = 0;
		break;
	case 2:
		diet_name = "Slim Down";
		cost = 50;
		weight_gain = -0.89;
		stamina_gain = -1;
		break;
	case 3:
		diet_name = "Student Life";
		cost = 25;
		weight_gain = -1.74;
		stamina_gain = -5;
		break;
	}
}

void diet::effects(character* player)
{
	player->gold -= cost;
	player->weight += weight_gain;
	player->stamina += stamina_gain;
}

my_class::ending::ending(character* player)
{
	grades_total = 0;

	for (int i = 0; i < player->grade_quantity; i++)
	{
		grades_total += player->grades[i];
	}
	
	aca_score = (player->aca_math + player->aca_phys + player->aca_it + player->intelligence) / 4;
	phys_score = (player->strenght + player->stamina + player->rep_cmb) / 2;
	soc_score = (player->charisma + player->rep_soc) / 2;
	double highest_score = max(max(aca_score, phys_score), soc_score);
	if (aca_score == highest_score)
	{
		description = "You almost lived in a library";
		score = aca_score;
	}
	else
	if (phys_score == highest_score)
	{
		description = "You definetly took care of your body";
		score = phys_score;
	}
	else
	if (soc_score == highest_score)
	{
		description = "You didn't waste time making friends";
		score = soc_score;
	}
	grades_mean = (round((grades_total / player->grade_quantity)*100))/100;
	score += (grades_mean * 2);
	int number_passed = 0;
	for (int i = 0; i < 3; i++)
	{
		switch (player->grades_final[i])
		{
		case 2:
			score -= 20;
			break;
		case 3:
			score += 5;
			number_passed++;
			break;
		case 4:
			score += 10;
			number_passed++;
			break;
		case 5:
			score += 15;
			number_passed++;
			break;
		}
	}
	switch (number_passed)
	{
	case 0:
		text = "You totally failed the exams";
		break;
	case 1:
		text = "Try to do better next time";
		break;
	case 2:
		text = "Congrats,\r\n although you still have some work to do";
		break;
	case 3:
		text = "Congratulations,\r\n you were flawless";
		break;
	}
	score = round(score);

	
}


