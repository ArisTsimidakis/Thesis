class VAR1{
    public void FUN1() throws Throwable
        {
            int VAR2;
            {
                int VAR3;
    
                VAR3 = VAR4.VAR5; 
    
                
                
                {
                    String VAR6 = System.FUN2("");
                    try
                    {
                        VAR3 = VAR4.parseInt(VAR6.trim());
                    }
                    catch(NumberFormatException VAR7)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                    }
                }
    
                VAR2 = VAR3;
            }
            {
                int VAR3 = VAR2;
    
                int VAR12[] = null;
    
                
                if (VAR3 >= 0)
                {
                    VAR12 = new int[VAR3];
                }
                else
                {
                    VAR8.writeLine("");
                }
    
                
                VAR12[0] = 5;
                VAR8.writeLine(VAR12[0]);
    
            }
        }
};