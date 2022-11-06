#ifndef EMPYRE_TOKEN_LEXER_H
#define EMPYRE_TOKEN_LEXER_H

class TokenLexer {
public:
  TokenLexer(TokenTypes *token_type) token(&token_type) {}
  // ~TokenLexer(); // unnecessary for constant, persistant values

  char* into_next_token(const char *input_characters);

  char* read_token_character();
  char* read_identifier();

  char* is_letter(boolean is_letter_value);
  char* skip_whitespace();
  
  char* check_for_stop_words();
  char* lookup_identifier();

  char* destroy_token_lifetime();

private:
  TokenTypes *token;
  int x_row_position = 0;
  int y_column_position = 0;
};

#endif