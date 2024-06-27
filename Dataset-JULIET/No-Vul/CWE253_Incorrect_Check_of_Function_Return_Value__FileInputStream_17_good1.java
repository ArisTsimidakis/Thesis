class VAR1{
    private void FUN1() throws Throwable
        {
            for(int VAR2 = 0; VAR2 < 1; VAR2++)
            {
                FileInputStream VAR3 = null;
                try
                {
                    int VAR4 = 1024;
                    byte[] VAR5 = new byte[VAR4];
                    VAR3 = new FileInputStream("");
                    int VAR6 = VAR3.read(VAR5);
                    
                    if (VAR6 == -1)
                    {
                        VAR7.writeLine("");
                    }
                    else
                    {
                        if (VAR6 < VAR4)
                        {
                            VAR7.writeLine("" + VAR4 + "");
                        }
                        else
                        {
                            VAR7.writeLine(new String(VAR5, ""));
                        }
                    }
                }
                catch (FileNotFoundException VAR8)
                {
                    VAR7.VAR9.log(VAR10.VAR11, "", VAR8);
                }
                catch (IOException VAR12)
                {
                    VAR7.VAR9.log(VAR10.VAR11, "", VAR12);
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
                    catch (IOException VAR12)
                    {
                        VAR7.VAR9.log(VAR10.VAR11, "", VAR12);
                    }
                }
            }
        }
};