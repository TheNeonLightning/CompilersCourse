#pragma once
#include "Expression.h"
#include <memory>


class DivExpression: public Expression {
 public:
    DivExpression(std::shared_ptr<Expression> lhv,
                  std::shared_ptr<Expression> rhv);
    int Eval() const override;
    void Accept(Visitor* visitor) override;
    std::shared_ptr<Expression> lhv;
    std::shared_ptr<Expression> rhv;
};