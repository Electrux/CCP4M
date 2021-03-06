#ifndef FS_FUNCS_HPP
#define FS_FUNCS_HPP

#include <vector>
#include <string>
#include <regex>

namespace FS
{
	bool LocExists( const std::string & loc );

	bool CreateDir( const std::string & dir, bool check_exists = true );

	bool CreateFileDir( const std::string & file );

	bool CreateFile( const std::string & loc, const std::string & contents = "" );

	bool CreateFileVectorContents( const std::string & loc, const std::vector< std::string > & contents );

	bool CreateFileIfNotExists( const std::string & loc, const std::string & contents = "" );

	std::vector< std::string > GetFilesInDir( const std::string & dir = ".", const std::regex & regex = std::regex( "(.*)" ),
		const std::vector< std::string > & except = std::vector< std::string >() );

	bool RegexVectorMatch( const std::string & loc_name, const std::vector< std::string > & vec );

	std::string ReadFile( const std::string & filename, const std::string & prefix_per_line = "" );

	std::vector< std::string > ReadFileVector( const std::string & filename, const std::string & prefix_per_line = "" );

	bool IsFileLatest( const std::string & file1, const std::string & file2 );

	bool DeleteFile( const std::string & file );

	bool DeleteDir( const std::string & dir );
}

#endif // FS_FUNCS_HPP