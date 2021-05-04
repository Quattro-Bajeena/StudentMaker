#pragma once
#include <string>
namespace my_class
{
	class item;
	class test;
	class diet;
	

	class character
	{
	
	public:
		std::string name;
		int gold;
		int strenght, intelligence, charisma, stamina;
		int stress, exhaustion;
		int aca_it, aca_phys, aca_math;
		int eq_number, grade_number;
		static const int eq_space=11;
		static const int grade_quantity = 9;
		int grades[grade_quantity];
		int grades_final[3];
		double height, weight, BMI;
		int rep_aca, rep_soc, rep_cmb;
		bool stressed, exhausted;
		void status_check();
		void all_stat_floor();
		character(int school, std::string character_name);
		test* tests[grade_quantity];
		item* eq[eq_space];
		diet* current_diet;
	};

	class activity
	{
	private:
		
	protected:
		int random1;
		int random5;
		int random10;
	public:
		int type;
		int bad;
		std::string description;
		activity();
		activity(int itype);
		virtual void stat_change(character* student) = 0;
		virtual void gold_change(character* student);
	};

	class lecture : public activity
	{
	public:
		lecture(int itype);
		void stat_change(character* student) override;
		void gold_change(character* student) override;
	};

	class work : public activity
	{
	public:
		work(int itype);
		void stat_change(character* student) override;
		void gold_change(character* student) override;
	};

	class learn : public activity
	{
	public:
		learn(int itype);
		void stat_change(character* student) override;
		void gold_change(character* student) override;
	};

	class tutoring : public activity
	{
	public:
		tutoring(int itype) : activity(itype) {};
		void stat_change(character* student, int tutoring_subject);
		void gold_change(character* student, int tutoring_subject);
	};

	class freetime : public activity
	{
	public:
		freetime(int itype);
		void stat_change(character* student) override;
		void gold_change(character* student) override;
	};

	class sport : public activity
	{
	public:
		sport(int itype);
		void stat_change(character* student) override;
		void gold_change(character* student) override;
	};

	class goout : public activity
	{
	public:
		goout(int itype);
		void stat_change(character* student) override;
		void gold_change(character* student) override;
	};

	class distress : public activity
	{
	public:
		distress();
		void stat_change(character* student) override;
		void gold_change(character* student) override;
	};

	class fatigue : public activity
	{
	public:
		fatigue();
		void stat_change(character* student) override;
		void gold_change(character* student) override;
	};
	class depression : public activity
	{
	public:
		depression();
		void stat_change(character* student) override;
		void gold_change(character* student) override;
	};


	class test
	{
		double weight_int, weight_math, weight_phys, weight_it;
	public:
		double pass_val, score, grade, percentage;
		std::string tday, tmonth, tyear;
		test(double pass_val, double weight_int, double weight_math, double weight_phys, double weight_it, std::string day, std::string month, std::string year, std::string name);
		std::string name;
		bool check_date(std::string today, std::string day, std::string month, std::string year);
		bool pass();
		void grading(character* student);
	};


	class item
	{
	protected:
		int  stat_bonus1, stat_bonus2;
	public:
		bool in_use, usable;
		int item_type, value;
		std::string item_name;
		item();
		virtual void use(character* player) = 0;
		void buy(character* player);
	};

	class consumable : public item
	{
	public:
		consumable();
		virtual void use(character* player) = 0;
	};

	class pizza : public consumable
	{
	public:
		pizza();
		void use(character* player);
	};

	class anti_depress : public consumable
	{
	public:
		anti_depress();
		void use(character* player);
	};

	class kebab : public consumable
	{
	public:
		kebab();
		void use(character* player);
	};

	class laptop : public item
	{
	public:
		laptop();
		virtual void use(character* player) = 0;
	};

	class lenovo : public laptop
	{
	public:
		lenovo();
		void use(character* player);
	};

	class macbook : public laptop
	{
	public:
		macbook();
		void use(character* player);
	};

	class gaming_laptop : public laptop
	{
	public:
		gaming_laptop();
		void use(character* player);
	};

	class accessory : public item
	{
	public:
		accessory();
		virtual void use(character* player) = 0;
	};

	class fedora : public accessory
	{
	public:
		fedora();
		void use(character* player);
	};

	class jacket : public accessory
	{
	public:
		jacket();
		void use(character* player);
	};

	class shades : public accessory
	{
	public:
		shades();
		void use(character* player);
	};

	class diet
	{
		double	weight_gain;
		int stamina_gain;
	public:
		std::string diet_name;
		int cost;
		diet(int type);
		void effects(character* player);
	};

	class ending
	{
	public:
		std::string text;
		std::string description;
		double grades_mean;
		double grades_total;
		double score, aca_score, phys_score, soc_score;
		ending(character* player);
	};
}
