class VAR1{
    public void FUN1() throws Throwable
        {
            while(true)
            {
                FileInputStream VAR2 = null;
                try
                {
                    int VAR3 = 1024;
                    byte[] VAR4 = new byte[VAR3];
                    VAR2 = new FileInputStream("");
                    
                    if (VAR2.read(VAR4) == 0)
                    {
                        VAR5.writeLine("");
                    }
                    else
                    {
                        VAR5.writeLine(new String(VAR4, ""));
                    }
                }
                catch (FileNotFoundException VAR6)
                {
                    VAR5.VAR7.log(VAR8.VAR9, "", VAR6);
                }
                catch (IOException VAR10)
                {
                    VAR5.VAR7.log(VAR8.VAR9, "", VAR10);
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
                    catch (IOException VAR10)
                    {
                        VAR5.VAR7.log(VAR8.VAR9, "", VAR10);
                    }
                }
                break;
            }
        }
};