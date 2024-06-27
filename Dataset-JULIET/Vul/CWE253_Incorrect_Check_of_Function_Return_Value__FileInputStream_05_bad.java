class VAR1{
    public void FUN1() throws Throwable
        {
            if (VAR2)
            {
                FileInputStream VAR3 = null;
                try
                {
                    int VAR4 = 1024;
                    byte[] VAR5 = new byte[VAR4];
                    VAR3 = new FileInputStream("");
                    
                    if (VAR3.read(VAR5) == 0)
                    {
                        VAR6.writeLine("");
                    }
                    else
                    {
                        VAR6.writeLine(new String(VAR5, ""));
                    }
                }
                catch (FileNotFoundException VAR7)
                {
                    VAR6.VAR8.log(VAR9.VAR10, "", VAR7);
                }
                catch (IOException VAR11)
                {
                    VAR6.VAR8.log(VAR9.VAR10, "", VAR11);
                }
                finally
                {
                    try
                    {
                        if (VAR3 != null)
                        {
                            VAR3.close();
                        }
                    }
                    catch (IOException VAR11)
                    {
                        VAR6.VAR8.log(VAR9.VAR10, "", VAR11);
                    }
                }
            }
        }
};