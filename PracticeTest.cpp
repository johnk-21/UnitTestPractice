/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_not_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Not a palindrome");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("racecar");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_another_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Madam");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_so_simple_palindrom) 
{
    Practice obj;
    bool actual = obj.isPalindrome("Redrumsirismurder");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_weird_input)
{
		Practice obj;
		bool actual = obj.isPalindrome("[;");
		ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_empty_string) 
{
		Practice obj;
		bool actual = obj.isPalindrome("");
		ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_numbers) 
{
		Practice obj;
		bool actual = obj.isPalindrome("125902");
		ASSERT_FALSE(actual);
}

//should a string of palindromic numbers be a palindrome??
TEST(PracticeTest, palindrom_numbers) 
{
		Practice obj;
		bool actual = obj.isPalindrome("123454321");
		ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_simple_sort)
{
    Practice obj;
		int one = 1;
		int two = 2;
		int three = 3;
    obj.sortDescending(one, two, three);
    ASSERT_GE(one, two);
		ASSERT_GE(one, three);
		ASSERT_GE(two, three);
		ASSERT_LE(two, one);
		ASSERT_LE(three, one);
		ASSERT_LE(three, two);
}

TEST(PracticeTest, isnt_simple_sort)
{
    Practice obj;
		int one = 13;
		int two = 12;
		int three = 24;
    obj.sortDescending(one, two, three);
    ASSERT_GE(one, two);
		ASSERT_GE(one, three);
		ASSERT_GE(two, three);
		ASSERT_LE(two, one);
		ASSERT_LE(three, one);
		ASSERT_LE(three, two);
}

TEST(PracticeTest, desscending)
{
    Practice obj;
		int one = 13;
		int two = 12;
		int three = 11;
    obj.sortDescending(one, two, three);
    ASSERT_GE(one, two);
		ASSERT_GE(one, three);
		ASSERT_GE(two, three);
		ASSERT_LE(two, one);
		ASSERT_LE(three, one);
		ASSERT_LE(three, two);
}

TEST(PracticeTest, zero)
{
    Practice obj;
		int one = 0;
		int two = 0;
		int three = 0;
    obj.sortDescending(one, two, three);
    ASSERT_GE(one, two);
		ASSERT_GE(one, three);
		ASSERT_GE(two, three);
		ASSERT_LE(two, one);
		ASSERT_LE(three, one);
		ASSERT_LE(three, two);
}

TEST(PracticeTest, negatives)
{
    Practice obj;
		int one = -10;
		int two = -2;
		int three = 24;
    obj.sortDescending(one, two, three);
    ASSERT_GE(one, two);
		ASSERT_GE(one, three);
		ASSERT_GE(two, three);
		ASSERT_LE(two, one);
		ASSERT_LE(three, one);
		ASSERT_LE(three, two);
}

TEST(PracticeTest, more_negatives)
{
    Practice obj;
		int one = -10;
		int two = -9;
		int three = -8;
    obj.sortDescending(one, two, three);
    ASSERT_GE(one, two);
		ASSERT_GE(one, three);
		ASSERT_GE(two, three);
		ASSERT_LE(two, one);
		ASSERT_LE(three, one);
		ASSERT_LE(three, two);
}

TEST(PracticeTest, more_more_negatives)
{
    Practice obj;
		int one = -8;
		int two = -9;
		int three = -10;
    obj.sortDescending(one, two, three);
    ASSERT_GE(one, two);
		ASSERT_GE(one, three);
		ASSERT_GE(two, three);
		ASSERT_LE(two, one);
		ASSERT_LE(three, one);
		ASSERT_LE(three, two);
}



