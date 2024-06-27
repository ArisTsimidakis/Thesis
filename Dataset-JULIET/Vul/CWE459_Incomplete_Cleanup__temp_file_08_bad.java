class VAR1{
    public void FUN1() throws Throwable
        {
            if (FUN2())
            {
                File VAR2 = null;
                try
                {
                    VAR2 = File.FUN3("", "");
                    VAR3.writeLine(VAR2.FUN4());
                    
                    
                    if (!VAR2.FUN5(true, true))
                    {
                        VAR3.VAR4.log(VAR5.VAR6, "");
                    }
                    if (!VAR2.FUN6(true, true))
                    {
                        VAR3.VAR4.log(VAR5.VAR6, "");
                    }
                    if (!VAR2.FUN7(false))
                    {
                        VAR3.VAR4.log(VAR5.VAR6, "");
                    }
                }
                catch (IOException VAR7)
                {
                    VAR3.VAR4.log(VAR5.VAR6, "", VAR7);
                }
            }
        }
};