class VAR1{
    private void FUN1() throws Throwable
        {
            float VAR2;
    
            while (true)
            {
                VAR2 = -1.0f; 
                
                
                {
                    String VAR3 = System.FUN2("");
                    if (VAR3 != null)
                    {
                        try
                        {
                            VAR2 = VAR4.FUN3(VAR3.trim());
                        }
                        catch(NumberFormatException VAR5)
                        {
                            VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                        }
                    }
                }
                break;
            }
    
            while (true)
            {
                
                if (Math.abs(VAR2) > 0.000001)
                {
                    int VAR10 = (int)(100.0 / VAR2);
                    VAR6.writeLine(VAR10);
                }
                else
                {
                    VAR6.writeLine("");
                }
                break;
            }
        }
};