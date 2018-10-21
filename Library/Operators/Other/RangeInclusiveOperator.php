<?php

/**
 * This file is part of the Zephir.
 *
 * (c) Zephir Team <team@zephir-lang.com>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

namespace Zephir\Operators\Other;

use Zephir\Operators\BaseOperator;
use Zephir\CompilationContext;
use Zephir\Expression;
use Zephir\CompiledExpression;
use Zephir\Compiler\CompilerException;
use Zephir\Types;

/**
 * RangeInclusive
 *
 * Inclusive range operator
 */
class RangeInclusiveOperator extends BaseOperator
{
    /**
     * @param array $expression
     * @param CompilationContext $compilationContext
     * @return CompiledExpression
     * @throws CompilerException
     */
    public function compile(array $expression, CompilationContext $compilationContext)
    {
        if (!isset($expression['left'])) {
            throw new CompilerException("Invalid 'left' operand for 'irange' expression", $expression['left']);
        }

        if (!isset($expression['right'])) {
            throw new CompilerException("Invalid 'right' operand for 'irange' expression", $expression['right']);
        }

        $exprBuilder = Expression\Builder\BuilderFactory::getInstance();

        /**
         * Implicit type coercing
         */
        $castBuilder = $exprBuilder->operators()->cast(Types::ARRAY_, $exprBuilder->statements()
            ->functionCall('range', array($expression['left'], $expression['right'])));

        $expression = new Expression($castBuilder->build());
        $expression->setReadOnly($this->_readOnly);
        return $expression->compile($compilationContext);
    }
}
