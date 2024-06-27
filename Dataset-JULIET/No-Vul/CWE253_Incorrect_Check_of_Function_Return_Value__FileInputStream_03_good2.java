class VAR1{
    private void FUN1() throws Throwable
        {
            if (5 == 5)
            {
                FileInputStream VAR2 = null;
                try
                {
                    int VAR3 = 1024;
                    byte[] VAR4 = new byte[VAR3];
                    VAR2 = new FileInputStream("");
                    int VAR5 = VAR2.read(VAR4);
                    
                    if (VAR5 == -1)
                    {
                        VAR6.writeLine("");
                    }
                    else
                    {
                        if (VAR5 < VAR3)
                        {
                            VAR6.writeLine("" + VAR3 + "");
                        }
                        else
                        {
                            VAR6.writeLine(new String(VAR4, ""));
                        }
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
                        if (VAR2 != null)
                        {
                            VAR2.close();
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