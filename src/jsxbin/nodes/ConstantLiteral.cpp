#include "ConstantLiteral.h"

void ConstantLiteral::parse() {
    value = decoders::d_variant(reader);
}

string ConstantLiteral::to_string() {
    return value;
}
