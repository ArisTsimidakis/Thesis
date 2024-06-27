class VAR1{
    private void FUN1() throws Throwable
        {
            switch (8)
            {
            case 7:
                
                VAR2.writeLine("");
                break;
            default:
                try
                {
                    VAR3.parseInt(""); 
                }
                catch (NumberFormatException VAR4) 
                {
                    VAR2.writeLine("");
                    throw VAR4; 
                }
                break;
            }
        }
};