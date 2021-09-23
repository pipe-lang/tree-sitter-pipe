; types
(array)              @array
(bool)               @boolean
(enum (name)         @type)
(enum)               @enum
(float)              @float
(number)             @number
(range)              @range
(string)             @string
(struct (attributes) @struct.attributes)
(struct)             @struct
(type)               @type

; operators
(assignment)        @assignment
(binary_operator)    @operator
(for)                @for
(is)                 @check.is
(loop)               @loop
(pipe)               @pipe
(postfix_operator)   @postfix

; definitions
(check)              @check
(conditional)        @conditional
(function)           @function
(import (identifier) @import.identifier)
(import (name)       @import.name)
(import)             @import
(include (name)      @include.name)
(include)            @include
(param (name)        @variable)

; values
(function_call)      @function_call
(variable)           @variable
