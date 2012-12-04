#pragma once

#include <string>
#include <sstream>

class PlainTextToHtmlATag
{
public:

  static std::string createATagWithPlainText(const std::string plain_text) {
        
    std::string url;
    size_t url_point;
    std::string title;

    url_point = plain_text.find("http", 0);

    if (url_point != std::string::npos) {

      // •¶’†‚Éhtml‚ª‘¶İ‚µ‚½ê‡
      title = plain_text.substr(0, url_point);
      while (title[title.size() - 1] == ' ' || title[title.size() - 1] == '@') title.erase(title.size() - 1);
      url   = plain_text.substr(url_point, plain_text.size() - url_point);
      
      return createATag(url, title);

    } else {

      return plain_text;

    }

  }

  static std::string createATag(const std::string url, const std::string title) {

    std::stringstream a_tag;

    a_tag << "<a href=\"";
    a_tag << url;
    a_tag << "\">";
    a_tag << title;
    a_tag << "</a>";

    return a_tag.str();
  }

};

