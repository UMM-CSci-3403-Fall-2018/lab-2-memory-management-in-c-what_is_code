#include <gtest/gtest.h>

#include "disemvowel.h"

TEST(Disemvowel, HandleEmptyString) {
  
	char *finResult = disemvowel((char*) "");
	ASSERT_STREQ("", finResult);
	free(finResult);
}

TEST(Disemvowel, HandleNoVowels) {
  
	char *finResult = disemvowel((char*) "pqrst");
	ASSERT_STREQ("pqrst", finResult);
        free(finResult);

}

TEST(Disemvowel, HandleOnlyVowels) {
  
	char *finResult = disemvowel((char*) "aeiouAEIOUOIEAuoiea");
	ASSERT_STREQ("", finResult);
        free(finResult);

}

TEST(Disemvowel, HandleMorrisMinnesota) {
 
        char *finResult = disemvowel((char*) "Morris, Minnesota");       
	ASSERT_STREQ("Mrrs, Mnnst", finResult);
        free(finResult);

}

TEST(Disemvowel, HandlePunctuation) {
 
        char *finResult = disemvowel((char*) "An (Unexplained) Elephant!");       
	ASSERT_STREQ("n (nxplnd) lphnt!", finResult);
        free(finResult);

}

TEST(Disemvowel, HandleLongString) {
  char *str;
  int size;
  int i;

  size = 50000;
  str = (char*) calloc(size, sizeof(char));
  str[0] = 'x';
  str[1] = 'y';
  str[2] = 'z';
  for (i = 3; i < size-1; ++i) {
    str[i] = 'a';
  }
  str[size-1] = '\0';
  
  char *finResult = disemvowel((char*) "xyz");
  ASSERT_STREQ("xyz", finResult);

  free(str);
  free(finResult);
}

int main(int argc, char *argv[]) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
