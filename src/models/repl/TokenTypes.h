#ifndef E8D459FB_5CF5_4296_962A_DF67EA00D2A8
#define E8D459FB_5CF5_4296_962A_DF67EA00D2A8

#include <string>
typedef std::string Token_t;

typedef struct TokenConstants {
  std::string ILLEGAL = "ILLEGAL";
  std::string END_OF_FILE = "EOF";
  // Identifiers
  std::string INDENTIFIER = "INDENTIFIER";
  std::string INTEGER = "INTEGER";
  // Operators
  std::string HAT = "^";
  std::string PLUS = "+";
  std::string HYPHEN = "-";
  std::string DOLLAR = "$";
  std::string MODULUS = "%";
  std::string ASTERISK = "*";
  std::string AMPERSAND = "&";
  std::string UNDERSCORE = "_";
  std::string ASSIGNMENT = "=";
  std::string VERTICAL_BAR = "|";
  std::string FORWARD_SLASH = "/";
  std::string BACKWARD_SLASH = "\\";
  std::string EXCLAMATION_MARK = "!";

  std::string FULL_POINT = ".";
  std::string LESSER_THAN = "<";
  std::string GREATER_THAN = ">";
  std::string QUESTION_MARK = "?";

  // Delimiters
  std::string COMMA = ",";
  std::string SEMICOLON = ";";

  std::string GRAVE = "~";
  std::string TILDE = "`";
  std::string ACUTE = "\'";
  std::string QUOTATION = "\"";

  std::string LEFT_PARENTHESES = "(";
  std::string LEFT_BRACE = "{";
  std::string RIGHT_PARENTHESES = ")";
  std::string RIGHT_BRACE = "}";
  // Keywords
  std::string FUNCTION = "FUNCTION";
  std::string LET = "LET";
  
} TokenConstants;

typedef struct Token {
  Token_t token_type;
  std::string literal_type;
} Token;

#endif /* E8D459FB_5CF5_4296_962A_DF67EA00D2A8 */
