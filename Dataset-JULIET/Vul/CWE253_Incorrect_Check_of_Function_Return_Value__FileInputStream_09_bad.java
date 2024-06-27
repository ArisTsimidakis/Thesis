class VAR1{
    public void FUN1() throws Throwable
        {
            if (VAR2.VAR3)
            {
                FileInputStream VAR4 = null;
                try
                {
                    int VAR5 = 1024;
                    byte[] VAR6 = new byte[VAR5];
                    VAR4 = new FileInputStream("");
                    
                    if (VAR4.read(VAR6) == 0)
                    {
                        VAR2.writeLine("");
                    }
                    else
                    {
                        VAR2.writeLine(new String(VAR6, ""));
                    }
                }
                catch (FileNotFoundException VAR7)
                {
                    VAR2.VAR8.log(VAR9.VAR10, "", VAR7);
                }
                catch (IOException VAR11)
                {
                    VAR2.VAR8.log(VAR9.VAR10, "", VAR11);
                }
                finally
                {
                    try
                    {
                        if (VAR4 != null)
                        {
                            VAR4.close();
                        }
                    }
                    catch (IOException VAR11)
                    {
                        VAR2.VAR8.log(VAR9.VAR10, "", VAR11);
                    }
                }
            }
        }
};