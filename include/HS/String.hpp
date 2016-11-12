// String.hpp

#ifndef __HS_STRING_HPP__
#define __HS_STRING_HPP__

// STL Includes
#include <string>
#include <vector>

namespace HS
{
  void Split(const std::string& p_Text, const std::string& p_Delimiter, std::vector<std::string>& p_Results);
}

#endif
