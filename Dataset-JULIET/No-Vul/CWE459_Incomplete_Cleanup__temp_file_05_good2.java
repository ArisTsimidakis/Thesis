class VAR1{
    private void FUN1() throws Throwable
        {
            if (VAR2)
            {
                File VAR3 = null;
                try
                {
                    VAR3 = File.FUN2("", "");
                    VAR4.writeLine(VAR3.FUN3());
                    
                    VAR3.FUN4();
                    
                    if (!VAR3.FUN5(true, true))
                    {
                        VAR4.VAR5.log(VAR6.VAR7, "");
                    }
                    if (!VAR3.FUN6(true, true))
                    {
                        VAR4.VAR5.log(VAR6.VAR7, "");
                    }
                    if (!VAR3.FUN7(false))
                    {
                        VAR4.VAR5.log(VAR6.VAR7, "");
                    }
                }
                catch (IOException VAR8)
                {
                    VAR4.VAR5.log(VAR6.VAR7, "", VAR8);
                }
            }
        }
};