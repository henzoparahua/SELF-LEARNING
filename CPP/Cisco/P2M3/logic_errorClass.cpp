#include <stdexcept>

//  The Logic Error Class
//  The logic_error class is directly derived from the exception class
//  It's designed to represent all the exceptions caused by a violation
//  of the rules imposed by the logic of algorithm/program. It may (but
//  doesn't always) mean that exceptions of this kind are preventable, they
//  wont happen if all the processed data is valid. It also means that this
//  kind of exception may be predicted staticcaly by analysing the structure
//  of the source code.

//  class logic_error : public exception {
//  public:
//      explicit logic_error(const string& what_arg);
//  };
//  exception <- logic_error

//  --------------------------------------------------------------------------

//  The Domain Error Class
//  The domain error class is derived from the logic error class. It's designed
//  to represent all exceptions caused by the data exceeding the permissible
//  range. The term "domain" comes from mathematical terminology and describes
//  a set of all arguments that the function is defined for.
//  Using a value of 100 for the field designed to store an employee's age is 
//  a good reason to throw such an exception.

//  class domain_error : public logic_error {
//  public:
//      explicit domain_error (const string& what_arg);
//  };
//  exception <- logic_error <- domain_error

//  --------------------------------------------------------------------------

//  The Invalid Argument Class
//  The invalid argument class is derived from the logic error class. It's designed
//  to represent all exceptions caused by passing improper arguments to methods or 
//  functions or constructors.
//  Passing a string containing only letters to a function expecting a date coded in
//  ISO8601 format may be considered a reason for throwing this kind of exceptions.

//  class invalid_argument : public logic_error {
//  public:
//      explicit invalid_argument (const string& what_arg);
//  };
//  exception <- logic_error <- invalid_argument

//  --------------------------------------------------------------------------

//  The Length Error Class
//  The length error class is derived from the logic error class. It's designed to 
//  represent all exceptions caused by using illegal balues to specify size/length
//  of data aggregates.
//  You can expect this kind of exception when you try to extend a string to an 
//  unacceptable length.

//  class lenght_error : public logic_error {
//  public:
//      explicit length_error(const string& what_arg);
//  };
//  exception <- logic_error <- length_error

//  --------------------------------------------------------------------------

//  The Out of Range Class
//  The out of range class is derived from the logic_error class. It's designed 
//  to represent exceptions connected to the use of illegal indexes/keys while
//  accessing numbered/keyed data collections.
//  If you have a collection of 111 postage stamps, accessing the data of the 
//  112 stamp shoud raise this exception.

//  class out_of_range : public logic_error {
//  public:
//      explicit out_of_range (const string& what_arg);    
//  };
//  exception <- logic_error <- out_of_range

//  --------------------------------------------------------------------------

//  The Runtime Error Class
//  The runtime error class is  derived directlyfrom the exception class. It's
//  designed to represent all exceptions caused by circumstances which may occur
//  during the execution of the program.
//  Exceptions of this kind are generally unpreventable, they may happen even if
//  the entire structure of the code is correct. It also mean that this kind of 
//  exception may not be predicted staticaly.

//  class runtime_error : public exception {
//  public:
//      explicit runtime_error (const string& what_arg);  
//  };
//  exception <- runtime_error.

//  --------------------------------------------------------------------------

//  The Range Error Class
//  The range error class is derived from the runtime_error class. It's designed to
//  represent exceptions caused by obtaining computation results exceeding the 
//  permissible range.
//  Note the difference: an exception of this kind doesn't apply to arguments' values,
//  but to the results obtained from valid arguments.

//  class range_error : public runtime_error {
//  public:
//      explicit range_error (const string& what_arg);    
//  };
//  exception <- runtime_error <- range_error

//  --------------------------------------------------------------------------

//  The Overflow Error Class
//  The overlow_error class is derived from the runtime_error class. It's designed to
//  represent exceptions caused by obstaining results too large to represent any useful
//  value (in the domain sense).

//  class overflow_error : public runtime_error {
//  public:
//      explicit overflow_error (const string& what_arg);
//  };
//  exception <- runtime_error <- overflow_error

//  --------------------------------------------------------------------------

//  The Underflow Error Class
//  The underflow_error class is derived from the runtime error class. It's 
//  designed to present exceptions caused bu obtaining results too small to 
//  represent any useful value (in the domain sense).

//  class underflow_error : public runtime_error {
//  public:
//      explicit underflow_error (const string& what_arg);
//  };
//  exception <- runtime_error <- underflow_error