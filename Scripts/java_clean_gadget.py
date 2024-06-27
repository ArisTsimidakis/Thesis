import re

# keywords up to C11 and C++17; immutable set
keywords = frozenset(['abstract', 'assert', 'boolean', 'break', 'byte', 'case', 'catch', 'char', 'class', 'const',
    'continue', 'default', 'do', 'double', 'else', 'enum', 'extends', 'exports', 'final', 'finally', 'float',
    'for', 'if', 'implements', 'import', 'instanceof', 'int', 'interface', 'long', 'module', 'native', 'new',
    'null', 'open', 'opens', 'package', 'permits', 'private', 'protected', 'provides', 'public', 'requires', 'return', 'sealed'
    'short', 'static', 'strictfp', 'super', 'switch', 'synchronized', 'this', 'throw', 'throws', 'transient', 'transitive', 'try', 
    'void', 'volatile', 'while', 'true', 'false', 'uses', 'when', 'with', 'yield', '@Override', '@Deprecated', '@SuppressWarnings',
    '@Documented', '@Target', '@Retention', '@Inherited', '@SafeVarargs', '@FunctionalInterface', '@Native', '@ThreadLocal', 'split', 
    'compareTo', 'String', 'Math', 'File', 'FileReader', 'FileWriter', 'System.out.print', 'System.out.println', 'System.out.printf', 'System.in', 'Scanner', 'next', 
    'nextInt', 'nextDouble', 'nextLine', 'read', 'write', 'in',
    'newLine', 'PrintWriter.println', 'BufferedReader', 'java.io', 'printf', 'length', 'substring', 'charAt',
    'indexOf', 'lastIndexOf', 'equals', 'equalsIgnoreCase', 'compareToIgnoreCase', 'contains', 'startsWith', 'endsWith',
    'replace', 'replaceAll', 'toLowerCase', 'toUpperCase', 'trim', 'concat', 'format', 'valueOf', 'parseInt', 
    'parseDouble', 'parseBoolean', 'abs', 'sqrt', 'pow', 'max', 'min', 'random', 'ceil', 'floor', 'round', 'toDegrees',
    'exists', 'delete', 'isFile', 'isDirectory', 'list', 'listFiles', 'mkdir', 'mkdirs', 'renameTo', 'lastModified',
     'writeTo', 'close', 'flush', 'seek', 'skip', 'readLine', 'readAllLines', 'writeLine',
    'writeAllLines', 'readAllBytes', 'writeAllBytes', 'readObject', '.writeObject', 'readInt', 'writeInt', 'readDouble',
    'writeDouble', 'readBoolean', 'writeBoolean', 'readChar', 'writeChar', 'readString', 'writeString', 'readByte', 'ResultSet',
    'writeByte', 'readFloat', 'writeFloat', 'readLong', 'writeLong', 'readShort', 'writeShort', 'readUTF', 'writeUTF', 'java.sql', 'PreparedStatement'
    'Connection' 'prepareStatement', 'createStatement', 'executeQuery', 'executeUpdate', 'getInt', 'getDouble', 'Statement'
    'getString', 'List', 'Map', 'Set', 'Queue', 'DbConnectionManager', 'getConnection', 'closeConnection',
    'ArrayList', 'LinkedList', 'HashMap', 'HashSet', 'PriorityQueue', 'sort', 'add', 'remove', 'get', 'set', 'isEmpty',
    'shuffle', 'offer', 'poll', 'peek', 'size', 'clear', 'clone', 'toArray', 'iterator', 'stream', 'forEach', 'map',
    'Thread', '.start', 'run', 'join', 'sleep', 'interrupt', 'isAlive', 'isDaemon', 'isInterrupted', 'setName',
    'ExecutorService', 'submit', '.shutdown', 'release', '.await', 'Socket', 'connect', 'accept', 'getInputStream', 'getOutputStream',
    'Canvas', 'Graphics', 'createNewFile',  'FileInputStream', 'FileOutputStream', 'ObjectInputStream', 
    'SQLException', 'InputStreamReader', 'bufferedStreamReader', 'IOException', 'execute', 'Throwable',
     'BufferedWriter', 'log', 'System', 'exec', 'waitFor', 'getRuntime', 'getBytes', 'Properties', 'parseInt'])

# holds known non-user-defined functions; immutable set
main_set = frozenset({'main'})
# arguments in main function; immutable set
main_args = frozenset({'argc', 'argv'})

# input is a list of string lines
def java_clean_gadget(gadget):
    # dictionary; map function name to symbol name + number
    fun_symbols = {}
    # dictionary; map variable name to symbol name + number
    var_symbols = {}

    fun_count = 1
    var_count = 1

    # regular expression to catch multi-line comment
    rx_comment = re.compile('\*/\s*$')
    # regular expression to find function name candidates
    rx_fun = re.compile(r'\b([_A-Za-z]\w*)\b(?=\s*\()')
    # regular expression to find variable name candidates
    #rx_var = re.compile(r'\b([_A-Za-z]\w*)\b(?!\s*\()')
    rx_var = re.compile(r'\b([_A-Za-z]\w*)\b(?:(?=\s*\w+\()|(?!\s*\w+))(?!\s*\()')

    # final cleaned gadget output to return to interface
    cleaned_gadget = []

    for line in gadget:
        # process if not the header line and not a multi-line commented line
        if rx_comment.search(line) is None:
            # remove all string literals (keep the quotes)
            nostrlit_line = re.sub(r'".*?"', '""', line)
            # remove all character literals
            nocharlit_line = re.sub(r"'.*?'", "''", nostrlit_line)
            # replace any non-ASCII characters with empty string
            ascii_line = re.sub(r'[^\x00-\x7f]', r'', nocharlit_line)

            # return, in order, all regex matches at string list; preserves order for semantics
            user_fun = rx_fun.findall(ascii_line)
            user_var = rx_var.findall(ascii_line)

            # Could easily make a "clean gadget" type class to prevent duplicate functionality
            # of creating/comparing symbol names for functions and variables in much the same way.
            # The comparison frozenset, symbol dictionaries, and counters would be class scope.
            # So would only need to pass a string list and a string literal for symbol names to
            # another function.
            for fun_name in user_fun:
                if len({fun_name}.difference(main_set)) != 0 and len({fun_name}.difference(keywords)) != 0:
                    # DEBUG
                    #print('comparing ' + str(fun_name + ' to ' + str(main_set)))
                    #print(fun_name + ' diff len from main is ' + str(len({fun_name}.difference(main_set))))
                    #print('comparing ' + str(fun_name + ' to ' + str(keywords)))
                    #print(fun_name + ' diff len from keywords is ' + str(len({fun_name}.difference(keywords))))
                    ###
                    # check to see if function name already in dictionary
                    if fun_name not in fun_symbols.keys():
                        fun_symbols[fun_name] = 'FUN' + str(fun_count)
                        fun_count += 1
                    # ensure that only function name gets replaced (no variable name with same
                    # identifier); uses positive lookforward
                    ascii_line = re.sub(r'\b(' + fun_name + r')\b(?=\s*\()', fun_symbols[fun_name], ascii_line)

            for var_name in user_var:
                # next line is the nuanced difference between fun_name and var_name
                if len({var_name}.difference(keywords)) != 0 and len({var_name}.difference(main_args)) != 0:
                    # DEBUG
                    #print('comparing ' + str(var_name + ' to ' + str(keywords)))
                    #print(var_name + ' diff len from keywords is ' + str(len({var_name}.difference(keywords))))
                    #print('comparing ' + str(var_name + ' to ' + str(main_args)))
                    #print(var_name + ' diff len from main args is ' + str(len({var_name}.difference(main_args))))
                    ###
                    # check to see if variable name already in dictionary
                    if var_name not in var_symbols.keys():
                        var_symbols[var_name] = 'VAR' + str(var_count)
                        var_count += 1
                    # ensure that only variable name gets replaced (no function name with same
                    # identifier); uses negative lookforward
                    ascii_line = re.sub(r'\b(' + var_name + r')\b(?:(?=\s*\w+\()|(?!\s*\w+))(?!\s*\()', \
                                        var_symbols[var_name], ascii_line)

            cleaned_gadget.append(ascii_line)
    # return the list of cleaned lines
    # print(cleaned_gadget)
    return cleaned_gadget

if __name__ == '__main__':
    test_gadget = ['231 151712/shm_setup.c inputfunc 11\n',
                   'int main(int argc, char **argv) {\n',
                   'while ((c = getopt(argc, argv, "k:s:m:o:h")) != -1) {\n',
                   'switch(c) {']

    test_gadget2 = ['278 151587/ffmpeg.c inputfunc 3159', 'int main(int argc,char **argv)',
                    'parse_loglevel(argc,argv,options);', 'if (argc > 1 && !strcmp(argv[1],"-d")) {',
                    'argc--;', 'argv++;', 'show_banner(argc,argv,options);',
                    'ret = ffmpeg_parse_options(argc,argv);', 'if (ret < 0) {']

    test_gadget3 = ['invalid_memory_access_012_s_001 *s;',
                    's = (invalid_memory_access_012_s_001 *)calloc(1,sizeof(invalid_memory_access_012_s_001));',
                    's->a = 20;', 's->b = 20;', 's->uninit = 20;', 'free(s);]']

    test_gadgetline = ['function(File file, Buffer buff)', 'this is a comment test */']

    split_test = 'printf ( " " , variable ++  )'.split()

    print(test_gadget)
    java_clean_gadget(test_gadget)
    # print(clean_gadget(test_gadget))
    # print(clean_gadget(test_gadget2))
    # print(clean_gadget(test_gadget3))
    # print(clean_gadget(test_gadgetline))
    # print(split_test)
