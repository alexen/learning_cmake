#include <message.h>
#include <ostream>


void message( const std::string& msg, std::ostream& os )
{
     os << "Message: " << msg << std::endl;
}
