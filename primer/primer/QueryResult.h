#ifndef QUERYRESULT
#define QUERYRESULT
#include <string>
#include <string>
#include <vector>
#include <memory>
#include <map>
#include <set>

class QueryResult
{
using line_no = std::vector<std::string>::size_type;
friend std::ostream& print(std::ostream&, const QueryResult&);
private:
	std::string sought;
	std::shared_ptr<std::set<line_no>> lines;
	std::shared_ptr<std::vector<std::string>> file;
public:
	QueryResult(std::string s, std::shared_ptr<std::set<line_no>> p, std::shared_ptr<std::vector<std::string>> f) : sought(s), lines(p), file(f){}
};


#endif