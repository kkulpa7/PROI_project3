#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Person_Tests

#include <boost/test/unit_test.hpp>
#include <sstream>
#include <iostream>

#include "../include/Person.hpp"
#include "../src/Person.cpp"


BOOST_AUTO_TEST_CASE(PersonSetTest){
	std::istringstream input("Krzysztof\nKononowicz\n69\n");
	std::stringstream output;

	Person person;
	person.setPerson(input, output);
	output.str("");
	person.get(output);
	std::string str;
	getline(output, str);
	BOOST_CHECK_EQUAL(str, "Krzysztof Kononowicz 69");
}
