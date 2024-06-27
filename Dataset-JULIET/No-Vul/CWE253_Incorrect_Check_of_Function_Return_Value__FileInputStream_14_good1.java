class VAR1{
    private void FUN1() throws Throwable
        {
            if (VAR2.VAR3 != 5)
            {
                
                VAR2.writeLine("");
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
                        VAR2.writeLine("");
                    }
                    else
                    {
                        if (VAR7 < VAR5)
                        {
                            VAR2.writeLine("" + VAR5 + "");
                        }
                        else
                        {
                            VAR2.writeLine(new String(VAR6, ""));
                        }
                    }
                }
                catch (FileNotFoundException VAR8)
                {
                    VAR2.VAR9.log(VAR10.VAR11, "", VAR8);
                }
                catch (IOException VAR12)
                {
                    VAR2.VAR9.log(VAR10.VAR11, "", VAR12);
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
                        VAR2.VAR9.log(VAR10.VAR11, "", VAR12);
                    }
                }
    
            }
        }
};