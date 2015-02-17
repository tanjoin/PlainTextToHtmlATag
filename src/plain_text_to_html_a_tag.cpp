#include "plain_text_to_html_a_tag.hpp"

std::string PlainTextToHtmlATag::createATag(const std::string plain_text) {
  return createATag(plain_text, false);
}

std::string PlainTextToHtmlATag::createATag(const std::string plain_text, const bool is_target_blank) {
  size_t url_point = plain_text.find("http", 0);
  if (url_point != std::string::npos) {
    // 文中に html が存在した場合
    std::string title = plain_text.substr(0, url_point);
    size_t delete_pos = std::string::npos;
    size_t zenkaku_space_pos = title.find("　", 0);
    if (zenkaku_space_pos != std::string::npos) {
      delete_pos = zenkaku_space_pos - 1;
    }
    size_t hankaku_space_pos = title.find(" ", 0);
    if (hankaku_space_pos != std::string::npos) {
      delete_pos = hankaku_space_pos;
    }
    if (delete_pos != std::string::npos) {
      title.erase(title.size() - 1);
    }
    std::string url   = plain_text.substr(url_point, plain_text.size() - url_point);
    return createATag(url, title, is_target_blank);
  } else {
    return plain_text;
  }
}

std::string PlainTextToHtmlATag::createATag(const std::string url, const std::string title, const bool is_target_blank) {
  std::stringstream a_tag;
  a_tag << "<a href=\"" + url + "\"";
  if (is_target_blank) {
    a_tag << " target=\"blank\"";
  }
  a_tag << ">" + title + "</a>";

  return a_tag.str();
}
