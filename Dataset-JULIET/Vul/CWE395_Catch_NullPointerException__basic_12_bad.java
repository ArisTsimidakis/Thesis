class VAR1{
    public void FUN1() throws Throwable
        {
            if (VAR2.FUN2())
            {
                String VAR3 = System.FUN3("");
                try
                {
                    
                    if(VAR3.equals(""))
                    {
                        VAR2.writeLine("");
                    }
                }
                catch (NullPointerException VAR4) 
                {
                    VAR2.writeLine("");
                }
            }
            else
            {
    
                String VAR3 = System.FUN3("");
    
                if (VAR3 != null) 
                {
                    if (VAR3.equals(""))
                    {
                        VAR2.writeLine("");
                    }
                }
                else
                {
                    VAR2.writeLine("");
                }
    
            }
        }
};