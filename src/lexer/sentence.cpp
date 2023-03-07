// Copyright 2023 Leo James Peckham


#include "src/lexer/sentence.h"


// ===
// Constructors
// ===


lexer::Sentence::Sentence(const std::wstring& str) {
    text = str;
    int t = 0;;
}


lexer::Sentence::~Sentence() {}


// ===
// Public Members
// ===


Phrase lexer::Sentence::parse() {
    if (text.size() == 0) {
        return {};
    }

    using enum TokenID;
    std::list<Node*> nodes;
    std::list<Token> tokens = lexer::evaluate(lexer::scan(text));

    for (Token t : tokens) {
        Node* node = new Node{t};  // can throw InvalidToken
        nodes.push_back(node);;
    }

    return {nodes};
}