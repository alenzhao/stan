#include <gtest/gtest.h>
#include <test/models/model_test_fixture.hpp>

class Models_Misc_EightSchools : 
  public Model_Test_Fixture<Models_Misc_EightSchools> {
protected:
  virtual void SetUp() {
  }
public:
  static std::vector<std::string> get_model_path() {
    std::vector<std::string> model_path;
    model_path.push_back("models");
    model_path.push_back("misc");
    model_path.push_back("eight_schools");
    model_path.push_back("eight_schools");
    return model_path;
  }
  static bool has_data() {
    return true;
  }
};

INSTANTIATE_TYPED_TEST_CASE_P(Models_Misc_EightSchools,
			      Model_Test_Fixture,
			      Models_Misc_EightSchools);
