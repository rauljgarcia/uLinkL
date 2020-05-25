#include <gtest/gtest.h>
#include "../code/uLinkL.h"

#include <fstream>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class test_ULinkedList : public ::testing::Test {
protected:
	// This function runs only once before any TEST_F function
	static void SetUpTestCase(){
	}

	// This function runs after all TEST_F functions have been executed
	static void TearDownTestCase(){
	}
    
	// this function runs before every TEST_F function
	void SetUp() override {
    }

	// this function runs after every TEST_F function
	void TearDown() override {
	}
};

TEST_F(test_ULinkedList, TestInitialization){
  ULinkedList mylist;
  ASSERT_FALSE(mylist.GetTop()); // expect top to be NULL
  shared_ptr<node> root = mylist.InitNode(29);
  ASSERT_TRUE(root);  // expect root itself to have a pointer (not NULL)
  ASSERT_EQ(42, root->data);
  ASSERT_FALSE(root->next); // expect next pointer to be null
}

