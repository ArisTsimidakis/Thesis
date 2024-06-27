class VAR1{
    private void FUN1() throws Throwable
        {
            if (VAR2 != 5)
            {
                
                VAR3.writeLine("");
            }
            else
            {
    
                FileInputStream VAR4 = null;
    
                try
                {
                    int VAR5 = 1024;
                    byte[] VAR6 = new byte[VAR5];
    
                    VAR4 = new FileInputStream("");
    
                    int VAR7 = VAR4.read(VAR6);
    
                    
                    if (VAR7 == -1)
                    {
                        VAR3.writeLine("");
                    }
                    else
                    {
                        if (VAR7 < VAR5)
                        {
                            VAR3.writeLine("" + VAR5 + "");
                        }
                        else
                        {
                            VAR3.writeLine(new String(VAR6, ""));
                        }
                    }
                }
                catch (FileNotFoundException VAR8)
                {
                    VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
                }
                catch (IOException VAR12)
                {
                    VAR3.VAR9.log(VAR10.VAR11, "", VAR12);
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
                    catch (IOException VAR12)
                    {
                        VAR3.VAR9.log(VAR10.VAR11, "", VAR12);
                    }
                }
    
            }
        }
};