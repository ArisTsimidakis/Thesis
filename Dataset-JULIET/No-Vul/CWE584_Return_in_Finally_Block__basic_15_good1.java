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
                    throw new FUN2();
                }
                catch(IllegalArgumentException VAR3)
                {
                    VAR2.writeLine("");
                }
                finally
                {
                    
                    VAR2.writeLine("");
                }
                break;
            }
        }
};