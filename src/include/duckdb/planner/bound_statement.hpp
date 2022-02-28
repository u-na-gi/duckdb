//===----------------------------------------------------------------------===//
//                         DuckDB
//
// duckdb/planner/bound_statement.hpp
//
//
//===----------------------------------------------------------------------===//

#pragma once

#include "duckdb/planner/logical_operator.hpp"

namespace duckdb {

struct BoundStatement {
	unique_ptr<LogicalOperator> plan;
	unique_ptr<LogicalOperator> returning_plan;
	vector<LogicalType> types;
	vector<string> names;
};

} // namespace duckdb
