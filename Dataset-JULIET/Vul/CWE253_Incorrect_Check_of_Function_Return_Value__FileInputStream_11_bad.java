class VAR1{
    public void FUN1() throws Throwable
        {
            if (VAR2.FUN2())
            {
                FileInputStream VAR3 = null;
                try
                {
                    int VAR4 = 1024;
                    byte[] VAR5 = new byte[VAR4];
                    VAR3 = new FileInputStream("");
                    
                    if (VAR3.read(VAR5) == 0)
                    {
                        VAR2.writeLine("");
                    }
                    else
                    {
                        VAR2.writeLine(new String(VAR5, ""));
                    }
                }
                catch (FileNotFoundException VAR6)
                {
                    VAR2.VAR7.log(VAR8.VAR9, "", VAR6);
                }
                catch (IOException VAR10)
                {
                    VAR2.VAR7.log(VAR8.VAR9, "", VAR10);
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
                    catch (IOException VAR10)
                    {
                        VAR2.VAR7.log(VAR8.VAR9, "", VAR10);
                    }
                }
            }
        }
};