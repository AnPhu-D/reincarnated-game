#ifndef __TEXTGUI_CONSTANTS_H__
#define __TEXTGUI_CONSTANTS_H__

#include <string>
#include <unordered_map>

namespace textgui_constants {
const std::string thinLineChars[16] = {" ", "╷", "╵", "│", "╶", "┌", "└", "├", "╴", "┐", "┘", "┤", "─", "┬", "┴", "┼"};
const std::unordered_map<std::string, std::string> fgColors = {
    {"Black", "30"},
    {"Red", "31"},
    {"Green", "32"},
    {"Yellow", "33"},
    {"Blue", "34"},
    {"Magenta", "35"},
    {"Cyan", "36"},
    {"White", "37"},
    {"Bright Black", "90"},
    {"Bright Red", "91"},
    {"Bright Green", "92"},
    {"Bright Yellow", "93"},
    {"Bright Blue", "94"},
    {"Bright Magenta", "95"},
    {"Bright Cyan", "96"},
    {"Bright White", "97"}};

const std::unordered_map<std::string, std::string> bgColors = {
    {"Black", "40"},
    {"Red", "41"},
    {"Green", "42"},
    {"Yellow", "43"},
    {"Blue", "44"},
    {"Magenta", "45"},
    {"Cyan", "46"},
    {"White", "47"},
    {"Bright Black", "100"},
    {"Bright Red", "101"},
    {"Bright Green", "102"},
    {"Bright Yellow", "103"},
    {"Bright Blue", "104"},
    {"Bright Magenta", "105"},
    {"Bright Cyan", "106"},
    {"Bright White", "107"}};
}  // namespace textgui_constants

#endif