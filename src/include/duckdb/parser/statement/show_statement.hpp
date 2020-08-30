//===----------------------------------------------------------------------===//
//                         DuckDB
//
// duckdb/parser/statement/show_statement.hpp
//
//
//===----------------------------------------------------------------------===//

#pragma once

#include "duckdb/parser/sql_statement.hpp"
#include "duckdb/parser/parsed_data/pragma_info.hpp"

namespace duckdb {

class ShowStatement : public SQLStatement {
public:
	ShowStatement() : SQLStatement(StatementType::SHOW_STATEMENT), selectStatement(nullptr){};

	unique_ptr<SQLStatement> selectStatement;
};

} // namespace duckdb
