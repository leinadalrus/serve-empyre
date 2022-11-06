#ifndef EMPYRE_TOKEN_LEXER_CPP
#define EMPYRE_TOKEN_LEXER_CPP

#include "TokenTypes.h"
#include "TokenLexer.h"
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <iterator>
#include <stdexcept>

int TokenLexer::into_next_token(const char *input_characters) {
  auto const inputs = nullptr;
  auto const data = new Token{inputs};

  Token const identity = *data;

  char *retval = (char*)0;
  do (this->token = *identity) {
    auto tt = new TokenTypes;
    inputs = dx;

    try {
      if (&identity != data) {
        // %p writes an implementation-defined character sequence defining a pointer
        std::printf("Wrong token-type [!] Got: %p; Expected: %p", &identity, data);
        retval = 1;
      }
    } catch (const std::system_error& sys) {
      std::cout << sys.what() << "\n" << sys.code() << std::endl;
    } catch (const std::exception& err) {
      std::cout << err.what() << "\n" << std::endl;
    }
  } while (auto i : &data);

  return retval;
}

char* TokenLexer::read_token_character() {
  std::move(this->token);
}

char* TokenLexer::read_identifier() {}

char* TokenLexer::is_letter(boolean is_letter_value) {}

char* TokenLexer::skip_whitespace() {}

char* TokenLexer::check_for_stop_words() {}

char* TokenLexer::lookup_identifier() {}

char* TokenLexer::destroy_token_lifetime() {
  std::free(this->token);
  this->token = nullptr;
  delete this->token;
}

#endif /* EMPYRE_TOKEN_LEXER_CPP */
