class VAR1{
    public void FUN1() throws Throwable
        {
            if (VAR2.VAR3)
            {
                File VAR4 = null;
                try
                {
                    VAR4 = File.FUN2("", "");
                    VAR2.writeLine(VAR4.FUN3());
                    
                    
                    if (!VAR4.FUN4(true, true))
                    {
                        VAR2.VAR5.log(VAR6.VAR7, "");
                    }
                    if (!VAR4.FUN5(true, true))
                    {
                        VAR2.VAR5.log(VAR6.VAR7, "");
                    }
                    if (!VAR4.FUN6(false))
                    {
                        VAR2.VAR5.log(VAR6.VAR7, "");
                    }
                }
                catch (IOException VAR8)
                {
                    VAR2.VAR5.log(VAR6.VAR7, "", VAR8);
                }
            }
        }
};