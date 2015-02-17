#include <iostream>
#include "src/plain_text_to_html_a_tag.hpp"

int main(int argc, char const *argv[]) {
  auto helloworld = []{
    std::cout << PlainTextToHtmlATag::createATag("Hello World! http://tanjo.in") << std::endl;
  };
  helloworld();
  return 0;
}