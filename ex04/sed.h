
// filename and two strings
// open the file and copy its content into a new file <filename.replace>
// replacing every occurance
// all mem functions of std::string are allowed except for replace
// std::string::replace banned
// no C style file manioulation functions (fopen, fread, fwrite)
// handle errors - input
// create tests

#ifndef SED_H
#define SED_H

#include <string>

void goodOlSed(const std::string& filename, const std::string& s1, const std::string& s2);

#endif
