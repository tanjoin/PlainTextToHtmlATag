#pragma once

#include <string>
#include <sstream>

class PlainTextToHtmlATag
{
public:
  static std::string createATag(const std::string plain_text);
  static std::string createATag(const std::string plain_text, const bool is_target_blank);
  static std::string createATag(const std::string url, const std::string title, const bool is_target_blank);
};

