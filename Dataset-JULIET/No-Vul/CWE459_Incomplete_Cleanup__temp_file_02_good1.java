class VAR1{
    private void FUN1() throws Throwable
        {
            if (false)
            {
                
                VAR2.writeLine("");
            }
            else
            {
    
                File VAR3 = null;
    
                try
                {
                    VAR3 = File.FUN2("", "");
                    VAR2.writeLine(VAR3.FUN3());
    
                    
                    VAR3.FUN4();
    
                    
                    if (!VAR3.FUN5(true, true))
                    {
                        VAR2.VAR4.log(VAR5.VAR6, "");
                    }
                    if (!VAR3.FUN6(true, true))
                    {
                        VAR2.VAR4.log(VAR5.VAR6, "");
                    }
                    if (!VAR3.FUN7(false))
                    {
                        VAR2.VAR4.log(VAR5.VAR6, "");
                    }
                }
                catch (IOException VAR7)
                {
                    VAR2.VAR4.log(VAR5.VAR6, "", VAR7);
                }
    
            }
        }
};