#ifndef SRC_TYPES_LITERAL_H_
#define SRC_TYPES_LITERAL_H_

#include <variant>
#include <string>

#include "src/type_definitions.h"
#include "nulltype.h"
#include "rational.h"
#include "set.h"

enum class Type {
    null,
    error,
    boolean,
    integer,
    rational,
    real,
    string,
    set,
};

typedef std::variant<
    TemplateSet<SN_int>,
    TemplateSet<Rational>,
    TemplateSet<SN_real>
> Set;

typedef std::variant<
    Null, 
    SN_bool,
    SN_int,
    Rational, 
    SN_real, 
    std::wstring,
    Set
    > Literal;

#endif  // SRC_TYPES_LITERAL_H_
